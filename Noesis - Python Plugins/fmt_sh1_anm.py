from inc_noesis import *
import struct

def registerNoesisTypes():
    handle = noesis.register("Silent Hill 1 ANM Animation", ".anm")
    noesis.setHandlerTypeCheck(handle, anmCheckType)
    noesis.setHandlerLoadModel(handle, anmLoadModel)
    return 1

def anmCheckType(data):
    if len(data) < 20:
        return 0
    return 1

def anmLoadModel(data, mdList):
    bs = NoeBitStream(data)
    
    # 1. Parse Header (20 bytes)
    header_data = bs.readBytes(20)
    header_format = "<HBBHBbIIHBB"
    
    (dataOffset, rotBoneCnt, transBoneCnt, kfSize, 
     boneCnt, pad7, actBones, fileSize, 
     kfCnt, scaleLog2, rootY) = struct.unpack(header_format, header_data)
    
    scale = 1 << scaleLog2
    
    # 2. Parse Bind Pose / Bone Definitions (6 bytes per bone)
    bindPoses = []
    bs.seek(20, NOESEEK_ABS)
    for i in range(boneCnt):
        parent, rotIdx, transIdx, tx, ty, tz = struct.unpack("<bbb3b", bs.readBytes(6))
        bindPoses.append({
            "parent": parent,
            "rotIdx": rotIdx,
            "transIdx": transIdx,
            "initTrans": (tx, ty, tz)
        })

    # Helper function to compute world matrices for a frame
    def evaluate_frame_matrices(frame_trans, frame_rots):
        world_mats = []
        
        for i, bp in enumerate(bindPoses):
            # Resolve Translation
            if bp["transIdx"] >= 0 and bp["transIdx"] < len(frame_trans):
                tx, ty, tz = frame_trans[bp["transIdx"]]
                pos = NoeVec3((tx * scale, ty * scale, tz * scale))
            else:
                tx, ty, tz = bp["initTrans"]
                pos = NoeVec3((tx * scale, ty * scale, tz * scale))
                
            # Resolve Rotation Matrix
            if bp["rotIdx"] >= 0 and bp["rotIdx"] < len(frame_rots):
                m = frame_rots[bp["rotIdx"]]
                vecX = NoeVec3((m[0] / 127.0, m[3] / 127.0, m[6] / 127.0))
                vecY = NoeVec3((m[1] / 127.0, m[4] / 127.0, m[7] / 127.0))
                vecZ = NoeVec3((m[2] / 127.0, m[5] / 127.0, m[8] / 127.0))
                rotMat = NoeMat43((vecX, vecY, vecZ, NoeVec3((0, 0, 0))))
            else:
                rotMat = NoeMat43() # Identity matrix

            localMat = rotMat
            localMat[3] = pos

            # Multiply by Parent's World Matrix (Forward Kinematics)
            parentIdx = bp["parent"]
            if parentIdx >= 0 and parentIdx < len(world_mats):
                worldMat = localMat * world_mats[parentIdx]
            else:
                worldMat = localMat

            world_mats.append(worldMat)
            
        return world_mats

    # Helper function to convert matrices into NoeBone list for base pose
    def create_noe_bones(world_mats):
        out_bones = []
        for i, bp in enumerate(bindPoses):
            parentIdx = bp["parent"]
            boneName = "bone%02d" % i
            parentName = "bone%02d" % parentIdx if parentIdx >= 0 else ""
            out_bones.append(NoeBone(i, boneName, world_mats[i], parentName, parentIdx))
        return out_bones

    # 3. Parse Keyframe Tracks
    flat_anim_mats = []
    bs.seek(dataOffset, NOESEEK_ABS)
    
    for f in range(kfCnt):
        # Read frame translations (3 bytes per active channel)
        frame_trans = []
        for _ in range(transBoneCnt):
            frame_trans.append(struct.unpack("<3b", bs.readBytes(3)))
            
        # Read frame rotations (9 bytes per active channel)
        frame_rots = []
        for _ in range(rotBoneCnt):
            frame_rots.append(struct.unpack("<9b", bs.readBytes(9)))

        # Get list of NoeMat43 matrices for this frame and append to 1D list
        frame_mats = evaluate_frame_matrices(frame_trans, frame_rots)
        flat_anim_mats.extend(frame_mats)

    # Base pose matrices & NoeBone structures
    base_mats = evaluate_frame_matrices([], [])
    base_bones = create_noe_bones(base_mats)

    # 4. Construct Noesis Model & Animation Containers
    mdl = NoeModel()
    mdl.setBones(base_bones)

    if kfCnt > 0:
        anim = NoeAnim("ANM_Animation", base_bones, kfCnt, flat_anim_mats, 30.0)
        mdl.setAnims([anim])
    
    mdList.append(mdl)
    return 1