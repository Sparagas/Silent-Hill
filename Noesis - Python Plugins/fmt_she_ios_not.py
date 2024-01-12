from inc_noesis import *


def registerNoesisTypes():
	handle = noesis.register("Silent Hill: The Escape",".not")
	noesis.setHandlerTypeCheck(handle, noepyCheckType)
	noesis.setHandlerLoadRGBA(handle, noepyLoadRGBA)
	return 1


def noepyCheckType(data):
    if len(data) < 4:
        return 0
    if data[:4] != b'NOT_':
        return 0
    return 1


def noepyLoadRGBA(data, texList):

    def clr_mode():
        if clr_mode_flg == 0:
            return "r8g8b8"
        elif clr_mode_flg == 1:
            return "r8g8b8a8"
        elif clr_mode_flg == 2:
            return "b5g6r5"
        elif clr_mode_flg == 3:
            return "a4b4g4r4"
        elif clr_mode_flg == 4:
            return "a1b5g5r5"

    bs = NoeBitStream(data)	
    ctx = rapi.rpgCreateContext()
    bs.seek(4)
    clr_mode_flg = bs.readUByte()
    img_bpp = bs.readUByte()
    num_index = bs.readUByte()
    pal_bpp = bs.readUByte()
    img_w = bs.readUShort()
    img_h = bs.readUShort()

    if num_index == 0:
        img_buf = bs.readBytes(img_w * img_h * img_bpp // 8)
        img_buf = rapi.imageDecodeRaw(img_buf, img_w, img_h, clr_mode())
    else:
        pal_buf = bs.readBytes((num_index + 1) * pal_bpp // 8)
        if img_bpp == 4:
            img_buf = bs.readBytes(img_w * img_h // 2)
        elif img_bpp == 8:
            img_buf = bs.readBytes(img_w * img_h)
        img_buf = rapi.imageDecodeRawPal(img_buf, pal_buf, img_w, img_h, img_bpp, clr_mode())

    img_buf = rapi.imageFlipRGBA32(img_buf, img_w, img_h, 0, 1)
    texture = NoeTexture(rapi.getInputName() , img_w, img_h, img_buf, noesis.NOESISTEX_RGBA32)
    texList.append(texture)
    return 1
