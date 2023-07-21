# Authors:
# Laurynas Zubavičius (Sparagas)
# Rodolfo Nuñez (roocker666)
#
# Generate Trianlge List idea:
# Allen Lee (leeao) - https://github.com/leeao/Noesis-Plugins/blob/master/Model/fmt_HauntingGround_PS2_pac.py
#
# Search idea:
# Durik256 - https://forum.xentax.com/viewtopic.php?t=26090

from inc_noesis import *


def registerNoesisTypes():
    handle = noesis.register("SH4 PS2 Map File", ".BIN")
    noesis.setHandlerTypeCheck(handle, noepyCheckType)
    noesis.setHandlerLoadModel(handle, LoadModel)
    # noesis.logPopup()
    return 1

def noepyCheckType(data):
    if data[:4] == b'SH4W':
        return 0
    return 1

def LoadModel(data, mdlList):
    bs = NoeBitStream(data)
    ctx = rapi.rpgCreateContext()

    result = [(i+6) for i in findall(b'\x03\x01\x00\x01\x01\x80', data)]
    i = 0
    for x in result:
        bs.seek(x)
        num = bs.readByte()
        print('vertices count:',num)#num = vertices count
        bs.seek(1,1)
        positions = bytes()
        skipList = []
        for i in range(num):
                positions += bs.readBytes(12)
                flag = (bs.readShort() & 0x8000) == 0x8000
                pad = bs.readShort()
                skipList.append(flag)
        
        vcolid = bs.readUInt()
        bs.seek(4,1)
        vcolbuf = bs.read(num*4)
        print('Vcolbuf:',vcolbuf)#vcolbuf = vertex color buffer
        bs.seek(8,1) #this for PS2, comment to use in PC iwateststage
        UVid = bs.readUInt()
        bs.seek(4,1)
        UVbuf = bs.read(num*4) #PS2 is SHORT num*4, PC iwateststage is FLOAT num*8
        print('UVbuf:',UVbuf)#UVbuf = UV buffer
          

        rapi.rpgBindPositionBuffer(positions, noesis.RPGEODATA_FLOAT, 12)
        rapi.rpgBindColorBufferOfs(vcolbuf, noesis.RPGEODATA_UBYTE, 4, 0, 4)
        rapi.rpgBindUV1BufferOfs(UVbuf, noesis.RPGEODATA_SHORT, 4, 0) # For PS2: SHORT, 4, 0 //For PC iwateststage: FLOAT, 8, 0 
        rapi.rpgSetUVScaleBias((8.0000,8.0000,8.0000),None) #Scale UVs, for PS2 only. comment to use PC iwateststage
        rapi.rpgSetName('mesh{}'.format(i))
        i += 1
        #rapi.rpgCommitTriangles(None, noesis.RPGEODATA_SHORT, num, noesis.RPGEO_TRIANGLE_STRIP) OLD script
        triangles = createTriList(skipList)
        rapi.rpgCommitTriangles(triangles, noesis.RPGEODATA_INT, len(triangles)// 4, noesis.RPGEO_TRIANGLE, 1)

    mdl = rapi.rpgConstructModel()
    mdl.setModelMaterials(NoeModelMaterials([], [NoeMaterial('mat0','')]))
    mdlList.append(mdl)
    return 1

def createTriList(skipList):
    out = NoeBitStream()
    num = len(skipList)
    startDir = -1
    faceDir = startDir
    f1 = 0
    f2 = 1
    for i in range (num):        
        f3 = i    
        skipFlag = skipList[i] #skip Isolated vertex      
        faceDir *= -1   
        if skipFlag != True:
            if f1 != f2 and f2 != f3 and f3 != f1:
                if faceDir > 0:
                    out.writeInt(f1)
                    out.writeInt(f2)
                    out.writeInt(f3)
                else:
                    out.writeInt(f2)
                    out.writeInt(f1)
                    out.writeInt(f3)            
                #print(f1,f2,f3)
        else:
            faceDir = startDir
        f1 = f2
        f2 = f3         
    return out.getBuffer()    
def findall(p, s):
    i = s.find(p)
    while i != -1:
        yield i
        i = s.find(p, i+1)