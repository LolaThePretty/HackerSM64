Lights1 ccm_dl_Ground_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFE, 0xFE, 0xFE, 0x28, 0x28, 0x28);

Lights1 ccm_dl_Cube_lights = gdSPDefLights1(
	0x76, 0x0, 0x7F,
	0xEC, 0x0, 0xFE, 0x28, 0x28, 0x28);

Gfx ccm_dl_Planks_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 ccm_dl_Planks_rgba16[] = {
	0x62, 0x8f, 0x62, 0x4f, 0x62, 0x4f, 0x62, 0x91, 
	0x6a, 0x91, 0x6a, 0x91, 0x6a, 0x91, 0x6a, 0x91, 
	0x6a, 0x91, 0x6a, 0x91, 0x6a, 0x91, 0x6a, 0x91, 
	0x6a, 0x8f, 0x6a, 0x91, 0x6a, 0x91, 0x6a, 0x91, 
	0x6a, 0x91, 0x6a, 0x91, 0x62, 0x4f, 0x62, 0x4f, 
	0x6a, 0x4f, 0x62, 0x4f, 0x62, 0x4f, 0x5a, 0x4f, 
	0x62, 0x8f, 0x62, 0x8f, 0x6a, 0x91, 0x6a, 0x91, 
	0x6a, 0x4f, 0x62, 0x4f, 0x6a, 0x4f, 0x72, 0x91, 
	0x6a, 0xd3, 0x6a, 0xd1, 0x7b, 0x55, 0x83, 0x97, 
	0x7b, 0x13, 0x7b, 0x13, 0x73, 0x13, 0x73, 0x13, 
	0x72, 0xd3, 0x72, 0xd3, 0x6a, 0xd3, 0x62, 0x8f, 
	0x6a, 0x91, 0x62, 0x91, 0x62, 0x91, 0x62, 0x91, 
	0x62, 0x8f, 0x6a, 0xd1, 0x72, 0xd1, 0x72, 0xd1, 
	0x72, 0xd1, 0x72, 0xd3, 0x72, 0xd1, 0x6a, 0x91, 
	0x6a, 0x91, 0x72, 0xd3, 0x6a, 0x91, 0x72, 0xd1, 
	0x6a, 0x91, 0x62, 0x4f, 0x6a, 0x91, 0x6a, 0x91, 
	0x6a, 0x91, 0x6a, 0xd1, 0x72, 0xd3, 0x73, 0x13, 
	0x73, 0x13, 0x72, 0xd3, 0x62, 0x91, 0x62, 0x4f, 
	0x6a, 0xd1, 0x6a, 0x91, 0x6a, 0x8f, 0x6a, 0xd1, 
	0x6a, 0xd1, 0x6a, 0xd1, 0x62, 0x8f, 0x62, 0x8f, 
	0x6a, 0x8f, 0x6a, 0xd1, 0x6a, 0x91, 0x6a, 0x91, 
	0x6a, 0xd1, 0x6a, 0x91, 0x62, 0x8f, 0x62, 0x4d, 
	0x62, 0x8f, 0x62, 0x8f, 0x62, 0x4f, 0x6a, 0x8f, 
	0x6a, 0x8f, 0x6a, 0x8f, 0x72, 0xd1, 0x6a, 0xd1, 
	0x6a, 0x91, 0x6a, 0x91, 0x6a, 0xd1, 0x72, 0xd3, 
	0x72, 0xd3, 0x7b, 0x13, 0x7b, 0x13, 0x72, 0xd3, 
	0x72, 0xd3, 0x72, 0xd3, 0x72, 0xd3, 0x7b, 0x15, 
	0x73, 0x13, 0x7b, 0x13, 0x72, 0xd3, 0x7b, 0x13, 
	0x72, 0xd3, 0x6a, 0xd1, 0x72, 0xd3, 0x73, 0x13, 
	0x6a, 0xd1, 0x73, 0x13, 0x72, 0xd3, 0x72, 0xd3, 
	0x73, 0x13, 0x7b, 0x15, 0x7b, 0x13, 0x72, 0xd3, 
	0x6a, 0x8f, 0x6a, 0x91, 0x72, 0xd3, 0x72, 0xd3, 
	0x62, 0x8f, 0x62, 0x4d, 0x62, 0x4d, 0x62, 0x4f, 
	0x62, 0x4d, 0x5a, 0x4d, 0x5a, 0x0d, 0x5a, 0x0d, 
	0x5a, 0x4f, 0x62, 0x51, 0x5a, 0x4f, 0x5a, 0x4f, 
	0x5a, 0x4f, 0x5a, 0x4f, 0x5a, 0x4f, 0x5a, 0x4f, 
	0x62, 0x4f, 0x62, 0x4f, 0x62, 0x4f, 0x5a, 0x4f, 
	0x5a, 0x4f, 0x62, 0x4f, 0x5a, 0x4f, 0x62, 0x4f, 
	0x5a, 0x4d, 0x5a, 0x4f, 0x62, 0x4f, 0x62, 0x8f, 
	0x62, 0x4f, 0x62, 0x4f, 0x62, 0x4f, 0x5a, 0x4d, 
	0x5a, 0x4d, 0x62, 0x4d, 0x6a, 0xd1, 0x6a, 0xd1, 
	0x6a, 0xd1, 0x6b, 0x13, 0x62, 0xd1, 0x6a, 0xd1, 
	0x6a, 0xd3, 0x62, 0x51, 0x62, 0x51, 0x6a, 0x91, 
	0x6a, 0xd3, 0x72, 0xd3, 0x6a, 0x91, 0x62, 0x8f, 
	0x6a, 0x91, 0x62, 0x8f, 0x62, 0x4f, 0x6a, 0x91, 
	0x6a, 0x91, 0x6a, 0x8f, 0x62, 0x8f, 0x6a, 0x91, 
	0x6a, 0x8f, 0x62, 0x8f, 0x62, 0x4f, 0x62, 0x8f, 
	0x6a, 0x8f, 0x62, 0x8f, 0x62, 0x4d, 0x6a, 0x8f, 
	0x6a, 0xd1, 0x6a, 0xd1, 0x6a, 0xd1, 0x6a, 0x91, 
	0x6a, 0x8f, 0x6a, 0xd1, 0x6a, 0x91, 0x62, 0x91, 
	0x6a, 0xd1, 0x72, 0xd3, 0x6a, 0xd1, 0x6a, 0x8f, 
	0x6a, 0xd1, 0x72, 0xd1, 0x72, 0xd1, 0x6a, 0xd1, 
	0x72, 0xd3, 0x72, 0xd3, 0x73, 0x13, 0x6a, 0xd3, 
	0x6a, 0x91, 0x62, 0x8f, 0x62, 0x91, 0x72, 0xd3, 
	0x6a, 0xd3, 0x6a, 0xd3, 0x6a, 0xd3, 0x6a, 0x91, 
	0x6a, 0x91, 0x6a, 0x91, 0x6a, 0xd1, 0x72, 0xd3, 
	0x73, 0x13, 0x6a, 0xd3, 0x62, 0x91, 0x62, 0x91, 
	0x5a, 0x51, 0x5a, 0x4f, 0x52, 0x0d, 0x52, 0x0d, 
	0x52, 0x0d, 0x52, 0x0d, 0x5a, 0x4f, 0x52, 0x0d, 
	0x62, 0x51, 0x6a, 0xd3, 0x62, 0x91, 0x62, 0x91, 
	0x72, 0xd3, 0x7b, 0x13, 0x72, 0xd3, 0x72, 0xd1, 
	0x6a, 0xd1, 0x72, 0xd3, 0x73, 0x13, 0x72, 0xd3, 
	0x72, 0xd1, 0x72, 0xd1, 0x72, 0xd3, 0x7b, 0x13, 
	0x72, 0xd1, 0x72, 0xd1, 0x6a, 0xd1, 0x6a, 0xd1, 
	0x6a, 0x91, 0x6a, 0x91, 0x6a, 0x91, 0x6a, 0x91, 
	0x6a, 0x91, 0x6a, 0xd1, 0x6a, 0xd3, 0x62, 0x93, 
	0x6a, 0xd1, 0x72, 0xd3, 0x73, 0x13, 0x72, 0xd1, 
	0x72, 0xd3, 0x73, 0x13, 0x72, 0xd3, 0x72, 0xd1, 
	0x6a, 0xd1, 0x6a, 0xd1, 0x6a, 0xd1, 0x6b, 0x13, 
	0x6a, 0xd3, 0x6a, 0x91, 0x6a, 0xd1, 0x6a, 0xd3, 
	0x72, 0xd1, 0x72, 0xd1, 0x6a, 0xd1, 0x6a, 0xd1, 
	0x72, 0xd1, 0x72, 0xd1, 0x72, 0xd1, 0x73, 0x11, 
	0x6a, 0xd1, 0x6a, 0xd1, 0x62, 0x8f, 0x62, 0x4f, 
	0x62, 0x4f, 0x62, 0x8f, 0x6a, 0x91, 0x6a, 0x8f, 
	0x6a, 0x8f, 0x6a, 0x8f, 0x62, 0x8f, 0x62, 0x4f, 
	0x6a, 0x91, 0x73, 0x13, 0x62, 0x4f, 0x5a, 0x4f, 
	0x62, 0x4f, 0x5a, 0x4d, 0x62, 0x4f, 0x62, 0x4f, 
	0x62, 0x4f, 0x62, 0x4d, 0x5a, 0x0d, 0x62, 0x4f, 
	0x6a, 0x8f, 0x6a, 0x91, 0x6a, 0x8f, 0x6a, 0x8f, 
	0x72, 0xd3, 0x6a, 0x91, 0x62, 0x91, 0x6a, 0x91, 
	0x73, 0x15, 0x72, 0xd3, 0x73, 0x13, 0x73, 0x13, 
	0x72, 0xd3, 0x6a, 0xd3, 0x6a, 0xd3, 0x6a, 0x93, 
	0x6a, 0xd1, 0x73, 0x13, 0x7b, 0x55, 0x73, 0x13, 
	0x73, 0x13, 0x73, 0x13, 0x7b, 0x55, 0x7b, 0x55, 
	0x73, 0x13, 0x73, 0x13, 0x6a, 0xd1, 0x6a, 0xd1, 
	0x6a, 0xd1, 0x6a, 0xd1, 0x6a, 0x91, 0x62, 0x8f, 
	0x6a, 0x91, 0x6a, 0x91, 0x6a, 0xd1, 0x6a, 0xd3, 
	0x73, 0x13, 0x7b, 0x15, 0x7b, 0x13, 0x7b, 0x13, 
	0x73, 0x13, 0x6a, 0xd1, 0x62, 0x91, 0x62, 0x4f, 
	0x62, 0x8f, 0x6a, 0xd1, 0x6a, 0xd1, 0x72, 0xd3, 
	0x6a, 0xd1, 0x72, 0xd3, 0x6a, 0xd1, 0x6a, 0xd1, 
	0x6a, 0xd1, 0x6a, 0xd3, 0x6a, 0xd1, 0x6a, 0xd3, 
	0x6a, 0x93, 0x6a, 0xd3, 0x6a, 0xd3, 0x6a, 0xd3, 
	0x73, 0x13, 0x73, 0x13, 0x6a, 0xd3, 0x6a, 0xd3, 
	0x73, 0x13, 0x83, 0x57, 0x83, 0x97, 0x7b, 0x55, 
	0x7b, 0x55, 0x7b, 0x55, 0x73, 0x15, 0x73, 0x15, 
	0x5a, 0x4f, 0x5a, 0x4f, 0x62, 0x4f, 0x5a, 0x4d, 
	0x5a, 0x0d, 0x62, 0x4f, 0x62, 0x8f, 0x5a, 0x4f, 
	0x5a, 0x4f, 0x5a, 0x51, 0x62, 0x51, 0x5a, 0x4f, 
	0x52, 0x0f, 0x5a, 0x4f, 0x5a, 0x4f, 0x52, 0x0d, 
	0x52, 0x0d, 0x5a, 0x4f, 0x5a, 0x4f, 0x5a, 0x0f, 
	0x5a, 0x0f, 0x5a, 0x4f, 0x52, 0x0f, 0x52, 0x0f, 
	0x5a, 0x0f, 0x52, 0x0d, 0x5a, 0x4f, 0x5a, 0x4f, 
	0x52, 0x0f, 0x5a, 0x4f, 0x5a, 0x4f, 0x62, 0x4f, 
	0x5a, 0x4f, 0x5a, 0x4f, 0x52, 0x0f, 0x52, 0x0f, 
	0x5a, 0x4f, 0x52, 0x0f, 0x5a, 0x4f, 0x5a, 0x4f, 
	0x52, 0x0d, 0x52, 0x0d, 0x52, 0x0d, 0x52, 0x0d, 
	0x5a, 0x4f, 0x52, 0x4f, 0x6a, 0xd3, 0x6a, 0xd3, 
	0x6a, 0x93, 0x62, 0x91, 0x62, 0x91, 0x62, 0x91, 
	0x62, 0x8f, 0x62, 0x91, 0x6a, 0xd3, 0x6a, 0xd3, 
	0x6a, 0xd1, 0x6a, 0x91, 0x62, 0x4f, 0x5a, 0x4d, 
	0x5a, 0x4f, 0x5a, 0x4d, 0x5a, 0x4d, 0x5a, 0x4f, 
	0x62, 0x91, 0x62, 0x4f, 0x62, 0x8f, 0x6a, 0x91, 
	0x62, 0x4f, 0x62, 0x4f, 0x62, 0x8f, 0x6a, 0x8f, 
	0x6a, 0x91, 0x62, 0x91, 0x6a, 0x91, 0x6a, 0x91, 
	0x6a, 0xd1, 0x6a, 0xd1, 0x72, 0xd3, 0x72, 0xd1, 
	0x6a, 0x91, 0x6a, 0xd1, 0x6a, 0xd3, 0x6a, 0xd3, 
	0x6a, 0xd3, 0x6a, 0xd3, 0x62, 0x91, 0x62, 0x91, 
	0x6a, 0x93, 0x62, 0x51, 0x6a, 0xd3, 0x62, 0x91, 
	0x62, 0x91, 0x6a, 0x91, 0x6a, 0x91, 0x6a, 0xd1, 
	0x6a, 0x91, 0x72, 0xd3, 0x72, 0xd3, 0x6a, 0xd1, 
	0x6a, 0xd1, 0x6a, 0xd1, 0x6a, 0xd3, 0x6a, 0xd3, 
	0x73, 0x15, 0x73, 0x15, 0x6a, 0xd3, 0x6a, 0x91, 
	0x6a, 0x91, 0x6a, 0x91, 0x6a, 0x91, 0x62, 0x4f, 
	0x62, 0x8f, 0x72, 0xd3, 0x7b, 0x13, 0x73, 0x13, 
	0x7b, 0x13, 0x7b, 0x13, 0x72, 0xd3, 0x7b, 0x13, 
	0x7b, 0x13, 0x72, 0xd3, 0x73, 0x13, 0x6a, 0xd1, 
	0x6a, 0x8f, 0x6a, 0x91, 0x6a, 0x91, 0x62, 0x4f, 
	0x72, 0xd3, 0x73, 0x13, 0x73, 0x13, 0x7b, 0x13, 
	0x7b, 0x13, 0x7b, 0x13, 0x73, 0x13, 0x72, 0xd1, 
	0x6a, 0xd1, 0x6a, 0xd1, 0x6a, 0xd3, 0x73, 0x15, 
	0x72, 0xd3, 0x73, 0x15, 0x6a, 0xd3, 0x73, 0x15, 
	0x7b, 0x55, 0x83, 0x57, 0x8b, 0x97, 0x6a, 0xd1, 
	0x62, 0x91, 0x62, 0x4f, 0x62, 0x91, 0x62, 0x91, 
	0x62, 0x51, 0x62, 0x51, 0x62, 0x4f, 0x62, 0x51, 
	0x62, 0x4f, 0x62, 0x51, 0x6a, 0x91, 0x6a, 0xd3, 
	0x62, 0x93, 0x62, 0x91, 0x6a, 0xd3, 0x6a, 0xd3, 
	0x73, 0x13, 0x6a, 0xd3, 0x62, 0x91, 0x62, 0x91, 
	0x62, 0x91, 0x6a, 0xd3, 0x6a, 0xd1, 0x6a, 0x91, 
	0x6a, 0xd1, 0x72, 0xd1, 0x62, 0x8f, 0x62, 0x91, 
	0x6a, 0x91, 0x6a, 0x91, 0x6a, 0xd1, 0x72, 0xd1, 
	0x6a, 0x91, 0x6a, 0x91, 0x6a, 0x91, 0x6a, 0x91, 
	0x6a, 0x8f, 0x72, 0xd1, 0x7b, 0x13, 0x72, 0xd1, 
	0x72, 0xd1, 0x72, 0xd1, 0x7b, 0x13, 0x72, 0xd1, 
	0x83, 0x97, 0x83, 0x55, 0x83, 0x55, 0x83, 0x55, 
	0x8b, 0x97, 0x7b, 0x55, 0x7b, 0x55, 0x7b, 0x13, 
	0x73, 0x53, 0x7b, 0x55, 0x7b, 0x57, 0x7b, 0x57, 
	0x7b, 0x57, 0x8b, 0xdb, 0x83, 0xdb, 0x83, 0x99, 
	0x7b, 0x99, 0x73, 0x17, 0x6a, 0xd3, 0x62, 0x93, 
	0x6a, 0xd3, 0x62, 0x91, 0x62, 0x91, 0x6a, 0xd3, 
	0x6a, 0xd1, 0x62, 0x91, 0x6a, 0xd3, 0x6a, 0xd3, 
	0x6a, 0x91, 0x73, 0x13, 0x6a, 0xd3, 0x62, 0x91, 
	0x6a, 0x91, 0x72, 0xd5, 0x6a, 0xd3, 0x73, 0x15, 
	0x7b, 0x57, 0x73, 0x15, 0x73, 0x15, 0x6a, 0xd3, 
	0x73, 0x15, 0x7b, 0x15, 0x7b, 0x55, 0x83, 0x97, 
	0x8b, 0x99, 0x83, 0x97, 0x73, 0x13, 0x6a, 0xd3, 
	0x6a, 0xd3, 0x73, 0x13, 0x73, 0x13, 0x73, 0x15, 
	0x7b, 0x55, 0x7b, 0x57, 0x7b, 0x57, 0x7b, 0x55, 
	0x7b, 0x55, 0x7b, 0x55, 0x73, 0x13, 0x6a, 0xd3, 
	0x6a, 0xd1, 0x72, 0xd3, 0x83, 0x57, 0x83, 0x57, 
	0x73, 0x13, 0x73, 0x13, 0x6a, 0xd3, 0x6a, 0x91, 
	0x62, 0x91, 0x62, 0x4f, 0x62, 0x91, 0x6a, 0xd3, 
	0x5a, 0x91, 0x5a, 0x91, 0x62, 0x93, 0x62, 0xd3, 
	0x62, 0x93, 0x62, 0x93, 0x62, 0x93, 0x62, 0x93, 
	0x62, 0x8f, 0x62, 0x8f, 0x6a, 0xd1, 0x6a, 0xd3, 
	0x62, 0x4f, 0x6a, 0xd3, 0x6a, 0xd1, 0x62, 0x91, 
	0x62, 0x91, 0x62, 0x91, 0x62, 0x91, 0x62, 0x91, 
	0x5a, 0x4f, 0x5a, 0x4f, 0x62, 0x91, 0x62, 0x91, 
	0x5a, 0x4f, 0x5a, 0x4f, 0x6a, 0xd3, 0x62, 0x91, 
	0x5a, 0x4f, 0x5a, 0x4f, 0x5a, 0x4f, 0x62, 0x91, 
	0x62, 0x91, 0x62, 0x91, 0x62, 0x91, 0x6a, 0x93, 
	0x6a, 0xd3, 0x6a, 0xd3, 0x6a, 0xd3, 0x62, 0x93, 
	0x6a, 0xd3, 0x6a, 0xd3, 0x6a, 0xd3, 0x6a, 0xd3, 
	0x6a, 0xd3, 0x6a, 0x93, 0x6a, 0xd3, 0x72, 0xd3, 
	0x72, 0xd3, 0x73, 0x13, 0x6a, 0xd1, 0x73, 0x13, 
	0x6a, 0xd3, 0x72, 0xd3, 0x72, 0xd3, 0x73, 0x15, 
	0x62, 0x8f, 0x62, 0x91, 0x62, 0x4f, 0x5a, 0x4f, 
	0x5a, 0x4f, 0x5a, 0x4f, 0x5a, 0x4f, 0x5a, 0x4f, 
	0x5a, 0x4f, 0x52, 0x4f, 0x5a, 0x4f, 0x5a, 0x0f, 
	0x52, 0x0f, 0x52, 0x0d, 0x5a, 0x0f, 0x62, 0x4f, 
	0x5a, 0x4f, 0x5a, 0x4f, 0x5a, 0x4f, 0x5a, 0x4f, 
	0x5a, 0x4f, 0x62, 0x91, 0x6a, 0x91, 0x6a, 0x8f, 
	0x6a, 0x8f, 0x62, 0x4f, 0x62, 0x4f, 0x62, 0x4f, 
	0x62, 0x8f, 0x62, 0x91, 0x62, 0x91, 0x62, 0x4f, 
	0x5a, 0x4f, 0x62, 0x51, 0x62, 0x91, 0x62, 0x91, 
	0x62, 0x91, 0x62, 0x91, 0x6a, 0xd3, 0x62, 0x91, 
	0x62, 0x91, 0x62, 0x91, 0x62, 0x91, 0x62, 0x4f, 
	0x62, 0x4f, 0x62, 0x91, 0x62, 0x91, 0x62, 0x91, 
	0x62, 0x51, 0x62, 0x51, 0x62, 0x91, 0x62, 0x51, 
	0x62, 0x51, 0x62, 0x51, 0x6a, 0x91, 0x72, 0xd3, 
	0x6a, 0xd1, 0x6a, 0xd1, 0x6a, 0x91, 0x6a, 0xd1, 
	0x6a, 0x8f, 0x62, 0x8f, 0x6a, 0x91, 0x6a, 0x91, 
	0x62, 0x8f, 0x6a, 0xd1, 0x6a, 0xd3, 0x62, 0x8f, 
	0x62, 0x91, 0x62, 0x4f, 0x6a, 0xd1, 0x62, 0x91, 
	0x6a, 0x91, 0x6a, 0x91, 0x6a, 0x91, 0x62, 0x8f, 
	0x6a, 0x91, 0x6a, 0x8f, 0x6a, 0x8f, 0x6a, 0x8f, 
	0x62, 0x8f, 0x62, 0x4f, 0x62, 0x91, 0x62, 0x4f, 
	0x62, 0x4f, 0x6a, 0x91, 0x6a, 0xd3, 0x62, 0x8f, 
	0x6a, 0x91, 0x6a, 0x91, 0x6a, 0x93, 0x6a, 0x93, 
	0x6a, 0xd3, 0x6a, 0xd3, 0x6a, 0x93, 0x6a, 0x91, 
	0x62, 0x8f, 0x6a, 0x91, 0x6a, 0x91, 0x62, 0x4f, 
	0x6a, 0x91, 0x6a, 0xd3, 0x6a, 0x91, 0x6a, 0xd3, 
	0x6a, 0x91, 0x6a, 0x91, 0x6a, 0x91, 0x62, 0x4f, 
	0x62, 0x4f, 0x6a, 0x91, 0x6a, 0x93, 0x6a, 0x91, 
	0x62, 0x91, 0x6a, 0x91, 0x6a, 0xd3, 0x6a, 0xd1, 
	0x6a, 0xd1, 0x6a, 0xd1, 0x72, 0xd1, 0x72, 0xd3, 
	0x72, 0xd1, 0x6a, 0xd1, 0x72, 0xd1, 0x6a, 0xd1, 
	0x6a, 0x91, 0x6a, 0x91, 0x6a, 0x91, 0x6a, 0x91, 
	0x6a, 0x91, 0x6a, 0xd3, 0x6a, 0x93, 0x6a, 0x91, 
	0x62, 0x91, 0x62, 0x4f, 0x62, 0x91, 0x5a, 0x4f, 
	0x6a, 0x93, 0x6a, 0x91, 0x62, 0x4f, 0x62, 0x4f, 
	0x6a, 0xd1, 0x6a, 0x91, 0x6a, 0xd1, 0x72, 0xd3, 
	0x82, 0xd1, 0x8b, 0x13, 0x7b, 0x13, 0x6a, 0x91, 
	0x5a, 0x0d, 0x62, 0x8f, 0x6a, 0xd1, 0x6a, 0x91, 
	0x62, 0x8f, 0x72, 0xd1, 0x73, 0x13, 0x7b, 0x55, 
	0x7b, 0x55, 0x83, 0x57, 0x83, 0x97, 0x73, 0x13, 
	0x6a, 0xd3, 0x73, 0x15, 0x73, 0x15, 0x73, 0x15, 
	0x73, 0x15, 0x6a, 0xd3, 0x73, 0x15, 0x73, 0x15, 
	0x73, 0x15, 0x6a, 0xd3, 0x6a, 0xd3, 0x62, 0x91, 
	0x6a, 0xd3, 0x73, 0x13, 0x6a, 0xd3, 0x6a, 0xd1, 
	0x62, 0x51, 0x62, 0x91, 0x6a, 0xd3, 0x6a, 0xd3, 
	0x6a, 0x91, 0x62, 0x91, 0x6a, 0x91, 0x72, 0xd3, 
	0x72, 0xd3, 0x6a, 0x91, 0x6a, 0x91, 0x62, 0x8f, 
	0x62, 0x8f, 0x62, 0x91, 0x6a, 0xd3, 0x62, 0x91, 
	0x6a, 0x93, 0x6a, 0xd3, 0x6a, 0xd3, 0x72, 0xd3, 
	0x6a, 0xd3, 0x6a, 0xd3, 0x6a, 0xd3, 0x6a, 0x93, 
	0x62, 0x91, 0x6a, 0x91, 0x62, 0x91, 0x6a, 0x93, 
	0x6a, 0xd3, 0x6a, 0xd3, 0x72, 0xd3, 0x73, 0x13, 
	0x6a, 0xd1, 0x6a, 0x91, 0x6a, 0xd3, 0x73, 0x15, 
	0x5a, 0x4f, 0x62, 0x4f, 0x62, 0x4f, 0x5a, 0x0d, 
	0x62, 0x8f, 0x62, 0x4f, 0x62, 0x8f, 0x6a, 0x91, 
	0x6a, 0x91, 0x6a, 0x91, 0x6a, 0x91, 0x6a, 0x91, 
	0x6a, 0xd1, 0x6a, 0x91, 0x6a, 0x91, 0x73, 0x15, 
	0x6a, 0xd3, 0x6a, 0xd3, 0x73, 0x15, 0x73, 0x15, 
	0x73, 0x15, 0x6a, 0x93, 0x6a, 0xd3, 0x6a, 0xd3, 
	0x6a, 0xd3, 0x73, 0x15, 0x6a, 0xd3, 0x6a, 0xd3, 
	0x6a, 0xd3, 0x6a, 0xd3, 0x73, 0x15, 0x73, 0x15, 
	0x72, 0xd5, 0x6a, 0x93, 0x6a, 0x91, 0x72, 0xd3, 
	0x72, 0xd3, 0x6a, 0x91, 0x6a, 0xd1, 0x6a, 0xd3, 
	0x6a, 0xd3, 0x6a, 0xd3, 0x6a, 0xd1, 0x6a, 0x91, 
	0x6b, 0x13, 0x6a, 0xd1, 0x6a, 0xd1, 0x6a, 0xd1, 
	0x73, 0x13, 0x73, 0x13, 0x73, 0x13, 0x73, 0x13, 
	0x73, 0x13, 0x73, 0x13, 0x6a, 0xd1, 0x6a, 0xd3, 
	0x6a, 0xd3, 0x6a, 0xd1, 0x62, 0x91, 0x62, 0x8f, 
	0x6a, 0x4f, 0x6a, 0x4f, 0x62, 0x4d, 0x5a, 0x0d, 
	0x62, 0x4f, 0x5a, 0x4d, 0x6a, 0x8f, 0x6a, 0x8f, 
	0x6a, 0x91, 0x6a, 0x91, 0x62, 0x4f, 0x6a, 0x8f, 
	0x72, 0xd1, 0x72, 0xd1, 0x72, 0x91, 0x72, 0x91, 
	0x72, 0x8f, 0x72, 0x8f, 0x72, 0xd1, 0x72, 0x91, 
	0x72, 0xd1, 0x72, 0xd1, 0x72, 0xd1, 0x72, 0xd1, 
	0x72, 0xd1, 0x72, 0xd1, 0x7b, 0x11, 0x72, 0xd1, 
	0x72, 0xd1, 0x72, 0xd1, 0x72, 0xd1, 0x72, 0xd1, 
	0x72, 0xd1, 0x72, 0xd1, 0x72, 0xd1, 0x6a, 0x8f, 
	0x6a, 0x91, 0x72, 0xd1, 0x7b, 0x13, 0x7b, 0x13, 
	0x72, 0xd3, 0x73, 0x13, 0x72, 0xd3, 0x72, 0xd3, 
	0x6a, 0x8f, 0x6a, 0x8f, 0x6a, 0x8f, 0x7b, 0x13, 
	0x83, 0x53, 0x7b, 0x53, 0x7b, 0x13, 0x83, 0x53, 
	0x7b, 0x13, 0x7b, 0x13, 0x7b, 0x13, 0x73, 0x13, 
	0x73, 0x13, 0x73, 0x13, 0x73, 0x11, 0x72, 0xd1, 
	0x73, 0x11, 0x72, 0xd1, 0x72, 0xd1, 0x72, 0xd1, 
	0x72, 0xd1, 0x7b, 0x11, 0x72, 0xd1, 0x72, 0xd1, 
	0x6a, 0x8f, 0x6a, 0x4f, 0x6a, 0x8f, 0x6a, 0x91, 
	0x72, 0x91, 0x7a, 0xd1, 0x7b, 0x11, 0x7b, 0x13, 
	0x7b, 0x13, 0x7b, 0x13, 0x7b, 0x13, 0x7a, 0xd3, 
	0x7b, 0x13, 0x7b, 0x13, 0x7a, 0xd3, 0x72, 0xd1, 
	0x72, 0xd1, 0x72, 0xd1, 0x7b, 0x13, 0x83, 0x55, 
	0x7b, 0x13, 0x7b, 0x13, 0x7a, 0xd3, 0x72, 0xd3, 
	0x72, 0xd1, 0x72, 0xd1, 0x72, 0xd3, 0x7b, 0x13, 
	0x72, 0xd1, 0x7b, 0x13, 0x7b, 0x13, 0x7a, 0xd3, 
	0x7b, 0x13, 0x7a, 0xd3, 0x7a, 0xd3, 0x7a, 0xd3, 
	0x72, 0xd1, 0x6a, 0x8f, 0x6a, 0x8f, 0x6a, 0x8f, 
	0x72, 0xd1, 0x72, 0xd1, 0x7a, 0xd3, 0x83, 0x53, 
	0x83, 0x57, 0x83, 0x57, 0x7b, 0x55, 0x7b, 0x55, 
	0x7b, 0x55, 0x7b, 0x55, 0x7b, 0x55, 0x73, 0x13, 
	0x72, 0xd3, 0x72, 0xd3, 0x72, 0xd3, 0x72, 0xd1, 
	0x72, 0xd3, 0x7a, 0xd3, 0x7a, 0xd3, 0x7a, 0xd3, 
	0x7b, 0x11, 0x7b, 0x11, 0x83, 0x13, 0x7b, 0x11, 
	0x7b, 0x11, 0x83, 0x13, 0x7a, 0xd1, 0x7b, 0x11, 
	0x7b, 0x13, 0x7b, 0x13, 0x7a, 0xd1, 0x7b, 0x13, 
	0x7b, 0x13, 0x7b, 0x13, 0x7b, 0x13, 0x7b, 0x13, 
	0x73, 0x13, 0x7b, 0x13, 0x7b, 0x55, 0x7b, 0x13, 
	0x73, 0x13, 0x73, 0x13, 0x7b, 0x13, 0x6a, 0xd1, 
	0x72, 0xd1, 0x6a, 0xd1, 0x6a, 0xd1, 0x6a, 0x8f, 
	0x6a, 0x8f, 0x6a, 0xd1, 0x73, 0x13, 0x73, 0x13, 
	0x7b, 0x13, 0x7b, 0x55, 0x72, 0xd1, 0x6a, 0x91, 
	0x6a, 0xd1, 0x72, 0xd3, 0x6a, 0xd1, 0x72, 0xd1, 
	0x6a, 0x91, 0x62, 0x4f, 0x5a, 0x4f, 0x62, 0x4f, 
	0x62, 0x8f, 0x62, 0x4f, 0x6a, 0x91, 0x73, 0x13, 
	0x6a, 0x91, 0x6a, 0x91, 0x6a, 0x8f, 0x6a, 0xd1, 
	0x72, 0xd3, 0x6a, 0xd1, 0x6a, 0xd1, 0x6a, 0xd3, 
	0x72, 0xd3, 0x6a, 0xd3, 0x6a, 0xd1, 0x6a, 0xd1, 
	0x72, 0xd3, 0x72, 0xd1, 0x72, 0xd3, 0x7a, 0xd3, 
	0x73, 0x13, 0x7b, 0x13, 0x72, 0xd1, 0x72, 0xd3, 
	0x72, 0xd1, 0x6a, 0xd1, 0x72, 0xd1, 0x6a, 0xd1, 
	0x72, 0xd1, 0x72, 0xd1, 0x73, 0x13, 0x73, 0x13, 
	0x72, 0xd1, 0x72, 0xd1, 0x6a, 0x8f, 0x6a, 0x8f, 
	0x6a, 0x91, 0x62, 0x8f, 0x62, 0x8f, 0x62, 0x4f, 
	0x62, 0x8f, 0x62, 0x91, 0x72, 0xd3, 0x6a, 0xd3, 
	0x6a, 0x91, 0x6a, 0x91, 0x62, 0x91, 0x6a, 0x91, 
	0x6a, 0xd1, 0x72, 0xd3, 0x6a, 0x91, 0x62, 0x8f, 
	0x62, 0x8f, 0x62, 0x8f, 0x6a, 0x91, 0x6a, 0xd1, 
	0x62, 0x8f, 0x6a, 0x91, 0x6a, 0xd1, 0x6a, 0xd1, 
	0x6a, 0xd1, 0x6a, 0x8f, 0x62, 0x8f, 0x6a, 0x91, 
	0x6a, 0x91, 0x62, 0x8f, 0x6a, 0x8f, 0x6a, 0x91, 
	0x7b, 0x55, 0x83, 0x97, 0x8b, 0xd9, 0x93, 0xd9, 
	0x93, 0xd9, 0x8b, 0xd9, 0x8b, 0x99, 0x83, 0x99, 
	0x83, 0x97, 0x83, 0x55, 0x6a, 0xd1, 0x6a, 0xd1, 
	0x6a, 0xd1, 0x6a, 0x8f, 0x72, 0xd1, 0x7b, 0x13, 
	0x83, 0x13, 0x83, 0x55, 0x83, 0x55, 0x83, 0x55, 
	0x83, 0x13, 0x7b, 0x13, 0x7b, 0x13, 0x7b, 0x13, 
	0x7b, 0x13, 0x7b, 0x13, 0x73, 0x13, 0x6a, 0xd1, 
	0x6a, 0xd1, 0x72, 0xd3, 0x72, 0xd3, 0x72, 0xd3, 
	0x6a, 0xd1, 0x6a, 0x91, 0x6a, 0x91, 0x6a, 0x91, 
	0x6a, 0x91, 0x6a, 0x91, 0x6a, 0x91, 0x62, 0x4f, 
	0x62, 0x8f, 0x72, 0xd1, 0x73, 0x13, 0x7b, 0x13, 
	0x83, 0x55, 0x7b, 0x13, 0x72, 0xd3, 0x72, 0xd3, 
	0x7b, 0x15, 0x7b, 0x13, 0x7b, 0x15, 0x83, 0x55, 
	0x93, 0xd9, 0x8b, 0x97, 0x8b, 0x57, 0x83, 0x55, 
	0x83, 0x55, 0x8b, 0x57, 0x8b, 0x97, 0x93, 0x97, 
	0x93, 0xd9, 0x93, 0xd9, 0x8b, 0xd9, 0x83, 0x55, 
	0x7b, 0x15, 0x7b, 0x55, 0x7b, 0x55, 0x83, 0x57, 
	0x83, 0x57, 0x7b, 0x55, 0x7b, 0x15, 0x7b, 0x15, 
	0x83, 0x13, 0x83, 0x55, 0x72, 0xd1, 0x83, 0x15, 
	0x7b, 0x13, 0x7b, 0x13, 0x83, 0x13, 0x83, 0x53, 
	0x83, 0x55, 0x83, 0x13, 0x7b, 0x13, 0x7b, 0x13, 
	0x7b, 0x13, 0x7b, 0x13, 0x7a, 0xd3, 0x7a, 0xd3, 
	0x72, 0xd3, 0x72, 0xd3, 0x7b, 0x13, 0x7b, 0x13, 
	0x73, 0x13, 0x7b, 0x13, 0x73, 0x13, 0x72, 0xd1, 
	0x73, 0x11, 0x7b, 0x13, 0x72, 0xd1, 0x72, 0xd1, 
	0x72, 0xd1, 0x72, 0xd1, 0x72, 0xd1, 0x72, 0xd1, 
	0x7b, 0x13, 0x7b, 0x53, 0x7b, 0x53, 0x7b, 0x53, 
	0x83, 0x53, 0x83, 0x53, 0x7b, 0x13, 0x83, 0x55, 
	0x83, 0x55, 0x8b, 0x95, 0x8b, 0x95, 0x83, 0x13, 
	0x83, 0x53, 0x7b, 0x13, 0x7b, 0x13, 0x7b, 0x13, 
	0x7b, 0x15, 0x7b, 0x15, 0x7b, 0x55, 0x83, 0x57, 
	0x83, 0x57, 0x7b, 0x15, 0x73, 0x15, 0x73, 0x13, 
	0x6a, 0xd5, 0x6a, 0xd3, 0x6a, 0xd3, 0x6a, 0xd3, 
	0x73, 0x13, 0x7b, 0x15, 0x7b, 0x55, 0x7b, 0x13, 
	0x7b, 0x55, 0x83, 0x55, 0x7b, 0x55, 0x83, 0x57, 
	0x7b, 0x15, 0x83, 0x57, 0x83, 0x55, 0x83, 0x57, 
	0x93, 0xd7, 0x8b, 0x97, 0x8b, 0x97, 0x8b, 0x95, 
	0x8b, 0x97, 0x8b, 0x97, 0x8b, 0x57, 0x83, 0x55, 
	0x7b, 0x55, 0x7b, 0x13, 0x83, 0x55, 0x7b, 0x55, 
	0x7b, 0x13, 0x7b, 0x13, 0x7b, 0x55, 0x7b, 0x55, 
	0x73, 0x13, 0x73, 0x13, 0x72, 0xd3, 0x73, 0x13, 
	0x72, 0xd3, 0x72, 0xd3, 0x6a, 0xd3, 0x6a, 0xd3, 
	0x6a, 0xd1, 0x73, 0x13, 0x7b, 0x55, 0x83, 0x57, 
	0x83, 0x57, 0x83, 0x97, 0x83, 0x97, 0x83, 0x57, 
	0x83, 0x55, 0x83, 0x55, 0x83, 0x55, 0x83, 0x55, 
	0x83, 0x55, 0x83, 0x55, 0x7b, 0x13, 0x73, 0x13, 
	0x73, 0x13, 0x7b, 0x13, 0x83, 0x55, 0x83, 0x55, 
	0x83, 0x55, 0x83, 0x57, 0x83, 0x55, 0x7b, 0x13, 
	0x6a, 0xd3, 0x6a, 0x91, 0x6a, 0xd1, 0x6a, 0xd3, 
	0x6a, 0xd3, 0x6a, 0x91, 0x6a, 0xd1, 0x73, 0x13, 
	0x72, 0xd3, 0x72, 0xd3, 0x73, 0x13, 0x72, 0xd3, 
	0x6a, 0x91, 0x6a, 0x91, 0x62, 0x91, 0x5a, 0x4f, 
	0x5a, 0x4f, 0x5a, 0x4f, 0x62, 0x91, 0x62, 0x8f, 
	0x5a, 0x8f, 0x6a, 0xd3, 0x62, 0x91, 0x6a, 0xd3, 
	0x6a, 0xd1, 0x6a, 0xd1, 0x6a, 0x91, 0x6a, 0x8f, 
	0x6a, 0x91, 0x6a, 0x91, 0x6a, 0xd1, 0x6a, 0xd1, 
	0x72, 0xd3, 0x6a, 0x91, 0x6a, 0x91, 0x6a, 0xd3, 
	0x6a, 0xd3, 0x6a, 0xd3, 0x6a, 0xd3, 0x6a, 0xd3, 
	0x62, 0x91, 0x62, 0x91, 0x62, 0x4f, 0x5a, 0x4f, 
	0x62, 0x4f, 0x62, 0x4f, 0x62, 0x4f, 0x5a, 0x4f, 
	0x5a, 0x4f, 0x62, 0x8f, 0x62, 0x8f, 0x62, 0x4f, 
	0x62, 0x8f, 0x62, 0x8f, 0x62, 0x4f, 0x6a, 0x91, 
	0x6a, 0xd3, 0x62, 0x91, 0x62, 0x91, 0x62, 0x91, 
	0x62, 0x91, 0x62, 0x91, 0x62, 0x91, 0x62, 0x91, 
	0x83, 0x53, 0x83, 0x55, 0x7b, 0x55, 0x73, 0x13, 
	0x72, 0xd3, 0x6a, 0x91, 0x6a, 0x91, 0x6a, 0xd3, 
	0x7b, 0x13, 0x73, 0x13, 0x72, 0xd1, 0x6a, 0xd1, 
	0x72, 0xd1, 0x6a, 0x91, 0x72, 0xd3, 0x6a, 0x91, 
	0x72, 0xd3, 0x72, 0xd3, 0x72, 0xd3, 0x73, 0x13, 
	0x7b, 0x15, 0x7b, 0x55, 0x83, 0x55, 0x73, 0x13, 
	0x6a, 0x91, 0x72, 0xd3, 0x6a, 0x91, 0x62, 0x91, 
	0x6a, 0x91, 0x62, 0x8f, 0x62, 0x8f, 0x62, 0x8f, 
	0x6a, 0x8f, 0x6a, 0x8f, 0x6a, 0x91, 0x6a, 0xd1, 
	0x7b, 0x13, 0x7b, 0x13, 0x72, 0xd1, 0x6a, 0x8f, 
	0x6a, 0xd1, 0x72, 0xd3, 0x73, 0x13, 0x73, 0x13, 
	0x7b, 0x13, 0x7b, 0x13, 0x73, 0x13, 0x7b, 0x55, 
	0x72, 0xd3, 0x6a, 0xd1, 0x73, 0x13, 0x73, 0x13, 
	0x83, 0x57, 0x8b, 0x97, 0x83, 0x97, 0x7b, 0x13, 
	0x7a, 0xd3, 0x72, 0xd1, 0x72, 0xd1, 0x6a, 0x8f, 
	0x6a, 0xd1, 0x7b, 0x13, 0x7b, 0x13, 0x83, 0x55, 
	0x83, 0x55, 0x7b, 0x15, 0x7b, 0x13, 0x72, 0xd3, 
	0x7b, 0x13, 0x83, 0x55, 0x83, 0x57, 0x83, 0x97, 
	0x93, 0xd9, 0x83, 0x55, 0x7b, 0x55, 0x8b, 0x55, 
	0x8b, 0x55, 0x83, 0x55, 0x83, 0x55, 0x83, 0x55, 
	0x73, 0x13, 0x73, 0x13, 0x73, 0x13, 0x73, 0x13, 
	0x7b, 0x55, 0x7b, 0x55, 0x7b, 0x55, 0x7b, 0x13, 
	0x83, 0x55, 0x8b, 0x97, 0x8b, 0x97, 0x8b, 0x97, 
	0x7b, 0x55, 0x72, 0xd3, 0x72, 0xd1, 0x7b, 0x13, 
	0x7b, 0x13, 0x7b, 0x13, 0x7b, 0x13, 0x7b, 0x13, 
	0x7b, 0x13, 0x73, 0x13, 0x7b, 0x55, 0x7b, 0x55, 
	0x7b, 0x15, 0x7b, 0x55, 0x72, 0xd3, 0x83, 0x55, 
	0x83, 0x55, 0x83, 0x95, 0x7b, 0x53, 0x7b, 0x53, 
	0x7b, 0x55, 0x7b, 0x53, 0x7b, 0x13, 0x8b, 0x95, 
	0x8b, 0x55, 0x8b, 0x55, 0x83, 0x55, 0x83, 0x55, 
	0x7b, 0x13, 0x7b, 0x13, 0x72, 0xd1, 0x73, 0x11, 
	0x7b, 0x53, 0x83, 0x55, 0x8b, 0x97, 0x8b, 0x97, 
	0x8b, 0xd7, 0x8b, 0xd7, 0x83, 0x97, 0x83, 0x97, 
	0x83, 0x97, 0x73, 0x13, 0x7b, 0x55, 0x8b, 0x99, 
	0x8b, 0x97, 0x8b, 0x97, 0x8b, 0xd9, 0x93, 0xd9, 
	0x93, 0xd9, 0x94, 0x19, 0x93, 0xd9, 0x83, 0x97, 
	0x83, 0x55, 0x8b, 0x97, 0x8b, 0x97, 0x8b, 0x99, 
	0x93, 0xd9, 0x93, 0xd9, 0x8b, 0x97, 0x83, 0x55, 
	0x83, 0x97, 0x83, 0x55, 0x7b, 0x55, 0x7b, 0x55, 
	0x83, 0x57, 0x8b, 0x97, 0x8b, 0x57, 0x83, 0x57, 
	0x7b, 0x55, 0x83, 0x57, 0x83, 0x57, 0x83, 0x97, 
	0x7b, 0x55, 0x7b, 0x55, 0x7b, 0x55, 0x7b, 0x55, 
	0x7b, 0x15, 0x83, 0x97, 0x8b, 0x99, 0x8b, 0x99, 
	0x7b, 0x55, 0x83, 0x57, 0x83, 0x97, 0x7b, 0x55, 
	0x7b, 0x55, 0x7b, 0x55, 0x83, 0x97, 0x83, 0x55, 
	0x8b, 0x97, 0x8b, 0x97, 0x83, 0x55, 0x73, 0x13, 
	0x7b, 0x13, 0x83, 0x55, 0x83, 0x97, 0x8b, 0x97, 
	0x8b, 0x97, 0x83, 0x97, 0x8b, 0x99, 0x8b, 0xd9, 
	0x62, 0x51, 0x62, 0x51, 0x62, 0x51, 0x62, 0x91, 
	0x5a, 0x4f, 0x5a, 0x4f, 0x62, 0x8f, 0x62, 0x4f, 
	0x5a, 0x4f, 0x5a, 0x4f, 0x5a, 0x4f, 0x52, 0x0f, 
	0x52, 0x0d, 0x5a, 0x4f, 0x52, 0x0d, 0x52, 0x0d, 
	0x5a, 0x4f, 0x5a, 0x4f, 0x62, 0x91, 0x6a, 0x91, 
	0x62, 0x8f, 0x62, 0x4f, 0x62, 0x4f, 0x62, 0x4f, 
	0x62, 0x91, 0x5a, 0x4f, 0x62, 0x8f, 0x5a, 0x4f, 
	0x62, 0x4f, 0x62, 0x91, 0x62, 0x4f, 0x62, 0x4f, 
	0x5a, 0x4f, 0x5a, 0x4f, 0x5a, 0x4f, 0x5a, 0x0d, 
	0x5a, 0x4d, 0x5a, 0x4f, 0x62, 0x91, 0x6a, 0x91, 
	0x62, 0x8f, 0x62, 0x4f, 0x5a, 0x4d, 0x62, 0x4f, 
	0x6a, 0x91, 0x62, 0x4f, 0x5a, 0x0d, 0x5a, 0x0d, 
	0x62, 0x4d, 0x6a, 0x91, 0x72, 0xd1, 0x72, 0xd3, 
	0x72, 0xd3, 0x72, 0xd1, 0x6a, 0x8f, 0x72, 0xd1, 
	0x6a, 0x8f, 0x6a, 0xd1, 0x6a, 0xd1, 0x6a, 0xd1, 
	0x72, 0xd1, 0x6a, 0xd1, 0x6a, 0xd1, 0x62, 0x8f, 
	0x5a, 0x4f, 0x5a, 0x4f, 0x5a, 0x4f, 0x5a, 0x4f, 
	0x5a, 0x0f, 0x62, 0x51, 0x6a, 0x91, 0x6a, 0x93, 
	0x6a, 0x4f, 0x62, 0x51, 0x6a, 0x91, 0x62, 0x4f, 
	0x6a, 0x91, 0x83, 0x55, 0x7b, 0x15, 0x6a, 0x91, 
	0x6a, 0x91, 0x6a, 0xd1, 0x7b, 0x13, 0x7b, 0x13, 
	0x7b, 0x13, 0x7b, 0x13, 0x7a, 0xd3, 0x7b, 0x13, 
	0x7b, 0x15, 0x7b, 0x13, 0x7b, 0x13, 0x7b, 0x13, 
	0x7b, 0x55, 0x83, 0x55, 0x7b, 0x13, 0x83, 0x15, 
	0x7b, 0x13, 0x7b, 0x55, 0x7b, 0x13, 0x6a, 0xd1, 
	0x73, 0x11, 0x7b, 0x13, 0x7b, 0x13, 0x7b, 0x13, 
	0x72, 0xd3, 0x72, 0xd1, 0x72, 0xd1, 0x72, 0xd1, 
	0x72, 0xd1, 0x6a, 0x91, 0x6a, 0x8f, 0x6a, 0x4f, 
	0x62, 0x4f, 0x62, 0x8f, 0x6a, 0x8f, 0x62, 0x8f, 
	0x6a, 0x91, 0x6a, 0x91, 0x6a, 0xd1, 0x6a, 0x91, 
	0x62, 0x8f, 0x62, 0x4f, 0x62, 0x4d, 0x62, 0x4d, 
	0x62, 0x4f, 0x6a, 0x91, 0x6a, 0x8f, 0x62, 0x4f, 
	0x6a, 0x8f, 0x6a, 0xd1, 0x6a, 0x8f, 0x6a, 0x91, 
	0x6a, 0x91, 0x6a, 0x91, 0x7b, 0x13, 0x7b, 0x13, 
	0x7b, 0x13, 0x6a, 0x91, 0x62, 0x4f, 0x62, 0x4f, 
	0x62, 0x4f, 0x5a, 0x4d, 0x62, 0x4f, 0x7b, 0x13, 
	0x7b, 0x13, 0x8b, 0x55, 0x8b, 0x97, 0x8b, 0x97, 
	0x8b, 0x95, 0x83, 0x53, 0x7a, 0xd1, 0x83, 0x13, 
	0x7b, 0x13, 0x7b, 0x13, 0x7b, 0x55, 0x83, 0x55, 
	0x83, 0x97, 0x83, 0x55, 0x73, 0x13, 0x72, 0xd3, 
	0x7b, 0x13, 0x7b, 0x13, 0x7b, 0x13, 0x72, 0xd1, 
	0x73, 0x13, 0x7b, 0x13, 0x73, 0x13, 0x73, 0x13, 
	0x6a, 0xd1, 0x7b, 0x13, 0x7b, 0x13, 0x72, 0xd1, 
	0x7b, 0x13, 0x7b, 0x13, 0x72, 0xd1, 0x72, 0xd1, 
	0x72, 0xd1, 0x7b, 0x13, 0x72, 0xd3, 0x72, 0xd3, 
	0x72, 0xd1, 0x72, 0xd1, 0x6a, 0xd1, 0x6a, 0x91, 
	0x6a, 0xd1, 0x6a, 0x8f, 0x6a, 0x91, 0x62, 0x8f, 
	0x6a, 0x8f, 0x6a, 0xd1, 0x72, 0xd3, 0x72, 0xd3, 
	0x6a, 0xd1, 0x6a, 0xd1, 0x6a, 0x91, 0x6a, 0xd1, 
	0x6a, 0xd1, 0x7b, 0x13, 0x8b, 0xd7, 0x93, 0xd7, 
	0x93, 0x97, 0x7b, 0x53, 0x73, 0x13, 0x72, 0xd1, 
	0x72, 0xd3, 0x83, 0x55, 0x7b, 0x55, 0x7b, 0x13, 
	0x83, 0x97, 0x83, 0x97, 0x7b, 0x55, 0x7b, 0x13, 
	0x83, 0x55, 0x8b, 0x97, 0x83, 0x55, 0x83, 0x55, 
	0x83, 0x53, 0x8b, 0x55, 0x83, 0x53, 0x83, 0x55, 
	0x83, 0x55, 0x83, 0x55, 0x83, 0x53, 0x83, 0x55, 
	0x83, 0x55, 0x83, 0x53, 0x83, 0x53, 0x7b, 0x13, 
	0x73, 0x11, 0x73, 0x11, 0x73, 0x13, 0x73, 0x13, 
	0x6a, 0xd3, 0x73, 0x13, 0x7b, 0x55, 0x83, 0x57, 
	0x7b, 0x55, 0x7b, 0x55, 0x7b, 0x55, 0x7b, 0x55, 
	0x83, 0x97, 0x83, 0x55, 0x7b, 0x55, 0x83, 0x97, 
	0x72, 0xd1, 0x7b, 0x15, 0x7b, 0x55, 0x73, 0x13, 
	0x73, 0x13, 0x73, 0x13, 0x72, 0xd3, 0x72, 0xd3, 
	0x72, 0xd1, 0x72, 0xd1, 0x72, 0xd3, 0x72, 0xd3, 
	0x62, 0x8f, 0x6a, 0x91, 0x6a, 0x91, 0x6a, 0x91, 
	0x62, 0x91, 0x62, 0x4f, 0x5a, 0x0d, 0x62, 0x51, 
	0x5a, 0x4d, 0x62, 0x4f, 0x62, 0x91, 0x6a, 0x91, 
	0x6a, 0x91, 0x6a, 0x91, 0x6a, 0x93, 0x6a, 0xd3, 
	0x72, 0xd3, 0x72, 0xd3, 0x72, 0xd1, 0x73, 0x13, 
	0x73, 0x13, 0x7b, 0x13, 0x7b, 0x13, 0x7b, 0x13, 
	0x72, 0xd1, 0x73, 0x13, 0x73, 0x13, 0x73, 0x13, 
	0x72, 0xd3, 0x6a, 0xd3, 0x6a, 0xd1, 0x6a, 0x91, 
	0x62, 0x91, 0x62, 0x91, 0x6a, 0x91, 0x62, 0x91, 
	0x62, 0x91, 0x62, 0x51, 0x62, 0x51, 0x62, 0x51, 
	0x5a, 0x4f, 0x52, 0x4f, 0x52, 0x0d, 0x52, 0x0d, 
	0x52, 0x0d, 0x52, 0x0d, 0x52, 0x4f, 0x5a, 0x4f, 
	0x5a, 0x4f, 0x5a, 0x4f, 0x62, 0x4f, 0x62, 0x4d, 
	0x5a, 0x4d, 0x62, 0x4f, 0x6a, 0x8f, 0x62, 0x8f, 
	0x62, 0x4f, 0x62, 0x8f, 0x62, 0x8f, 0x62, 0x4f, 
	0x62, 0x4f, 0x62, 0x4f, 0x62, 0x4f, 0x62, 0x4f, 
	0x62, 0x91, 0x6a, 0x91, 0x6a, 0x91, 0x62, 0x91, 
	0x62, 0x91, 0x6a, 0x91, 0x6a, 0xd3, 0x73, 0x13, 
	0x73, 0x13, 0x7b, 0x15, 0x73, 0x13, 0x72, 0xd1, 
	0x6a, 0x91, 0x62, 0x8f, 0x62, 0x4f, 0x5a, 0x4f, 
	0x5a, 0x4f, 0x52, 0x4f, 0x52, 0x0f, 0x5a, 0x4f, 
	0x62, 0x91, 0x62, 0x91, 0x6a, 0x93, 0x6a, 0x93, 
	0x6a, 0xd1, 0x6a, 0xd1, 0x6a, 0xd3, 0x6a, 0xd1, 
	0x6a, 0xd1, 0x6a, 0x91, 0x6a, 0x93, 0x62, 0x91, 
	0x5a, 0x4f, 0x5a, 0x4f, 0x52, 0x4f, 0x5a, 0x4f, 
	0x5a, 0x51, 0x62, 0x91, 0x62, 0x51, 0x62, 0x91, 
	0x6a, 0x91, 0x5a, 0x4f, 0x5a, 0x4f, 0x5a, 0x51, 
	0x62, 0x51, 0x52, 0x0d, 0x52, 0x0f, 0x52, 0x0f, 
	0x5a, 0x4f, 0x5a, 0x4f, 0x6a, 0x91, 0x72, 0xd3, 
	0x73, 0x13, 0x7b, 0x13, 0x6a, 0xd1, 0x6a, 0xd1, 
	0x6a, 0x91, 0x6a, 0x91, 0x62, 0x8f, 0x62, 0x4f, 
	0x62, 0x4f, 0x62, 0x91, 0x6a, 0xd1, 0x6a, 0xd3, 
	
};

Vtx ccm_dl_Ground_mesh_layer_1_vtx_0[4] = {
	{{{6000, 200, -6000},0, {6128, -2064},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-6000, 200, -6000},0, {-4112, -2064},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-6000, 200, 6000},0, {-4112, 3056},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{6000, 200, 6000},0, {6128, 3056},{0x0, 0x7F, 0x0, 0xFF}}},
};

Gfx ccm_dl_Ground_mesh_layer_1_tri_0[] = {
	gsSPVertex(ccm_dl_Ground_mesh_layer_1_vtx_0 + 0, 4, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSPEndDisplayList(),
};

Vtx ccm_dl_Ground_mesh_layer_1_vtx_1[96] = {
	{{{308, 200, 641},0, {368, 1008},{0x81, 0x0, 0x0, 0xFF}}},
	{{{308, 400, 641},0, {624, 1008},{0x81, 0x0, 0x0, 0xFF}}},
	{{{308, 400, 441},0, {624, 752},{0x81, 0x0, 0x0, 0xFF}}},
	{{{308, 200, 441},0, {368, 752},{0x81, 0x0, 0x0, 0xFF}}},
	{{{308, 200, 441},0, {368, 752},{0x0, 0x0, 0x81, 0xFF}}},
	{{{308, 400, 441},0, {624, 752},{0x0, 0x0, 0x81, 0xFF}}},
	{{{508, 400, 441},0, {624, 496},{0x0, 0x0, 0x81, 0xFF}}},
	{{{508, 200, 441},0, {368, 496},{0x0, 0x0, 0x81, 0xFF}}},
	{{{508, 200, 441},0, {368, 496},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{508, 400, 441},0, {624, 496},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{508, 400, 641},0, {624, 240},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{508, 200, 641},0, {368, 240},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{508, 200, 641},0, {368, 240},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{508, 400, 641},0, {624, 240},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{308, 400, 641},0, {624, -16},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{308, 200, 641},0, {368, -16},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{308, 200, 441},0, {112, 496},{0x0, 0x81, 0x0, 0xFF}}},
	{{{508, 200, 441},0, {368, 496},{0x0, 0x81, 0x0, 0xFF}}},
	{{{508, 200, 641},0, {368, 240},{0x0, 0x81, 0x0, 0xFF}}},
	{{{308, 200, 641},0, {112, 240},{0x0, 0x81, 0x0, 0xFF}}},
	{{{508, 400, 441},0, {624, 496},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{308, 400, 441},0, {880, 496},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{308, 400, 641},0, {880, 240},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{508, 400, 641},0, {624, 240},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{1271, 200, 584},0, {368, 1008},{0x81, 0x0, 0x0, 0xFF}}},
	{{{1271, 400, 584},0, {624, 1008},{0x81, 0x0, 0x0, 0xFF}}},
	{{{1271, 400, 384},0, {624, 752},{0x81, 0x0, 0x0, 0xFF}}},
	{{{1271, 200, 384},0, {368, 752},{0x81, 0x0, 0x0, 0xFF}}},
	{{{1271, 200, 384},0, {368, 752},{0x0, 0x0, 0x81, 0xFF}}},
	{{{1271, 400, 384},0, {624, 752},{0x0, 0x0, 0x81, 0xFF}}},
	{{{1471, 400, 384},0, {624, 496},{0x0, 0x0, 0x81, 0xFF}}},
	{{{1471, 200, 384},0, {368, 496},{0x0, 0x0, 0x81, 0xFF}}},
	{{{1471, 200, 384},0, {368, 496},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{1471, 400, 384},0, {624, 496},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{1471, 400, 584},0, {624, 240},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{1471, 200, 584},0, {368, 240},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{1471, 200, 584},0, {368, 240},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{1471, 400, 584},0, {624, 240},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{1271, 400, 584},0, {624, -16},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{1271, 200, 584},0, {368, -16},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{1271, 200, 384},0, {112, 496},{0x0, 0x81, 0x0, 0xFF}}},
	{{{1471, 200, 384},0, {368, 496},{0x0, 0x81, 0x0, 0xFF}}},
	{{{1471, 200, 584},0, {368, 240},{0x0, 0x81, 0x0, 0xFF}}},
	{{{1271, 200, 584},0, {112, 240},{0x0, 0x81, 0x0, 0xFF}}},
	{{{1471, 400, 384},0, {624, 496},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{1271, 400, 384},0, {880, 496},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{1271, 400, 584},0, {880, 240},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{1471, 400, 584},0, {624, 240},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-956, 200, 1546},0, {368, 1008},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-956, 400, 1546},0, {624, 1008},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-956, 400, 1346},0, {624, 752},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-956, 200, 1346},0, {368, 752},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-956, 200, 1346},0, {368, 752},{0x0, 0x0, 0x81, 0xFF}}},
	{{{-956, 400, 1346},0, {624, 752},{0x0, 0x0, 0x81, 0xFF}}},
	{{{-756, 400, 1346},0, {624, 496},{0x0, 0x0, 0x81, 0xFF}}},
	{{{-756, 200, 1346},0, {368, 496},{0x0, 0x0, 0x81, 0xFF}}},
	{{{-756, 200, 1346},0, {368, 496},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{-756, 400, 1346},0, {624, 496},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{-756, 400, 1546},0, {624, 240},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{-756, 200, 1546},0, {368, 240},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{-756, 200, 1546},0, {368, 240},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-756, 400, 1546},0, {624, 240},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-956, 400, 1546},0, {624, -16},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-956, 200, 1546},0, {368, -16},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-956, 200, 1346},0, {112, 496},{0x0, 0x81, 0x0, 0xFF}}},
	{{{-756, 200, 1346},0, {368, 496},{0x0, 0x81, 0x0, 0xFF}}},
	{{{-756, 200, 1546},0, {368, 240},{0x0, 0x81, 0x0, 0xFF}}},
	{{{-956, 200, 1546},0, {112, 240},{0x0, 0x81, 0x0, 0xFF}}},
	{{{-756, 400, 1346},0, {624, 496},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-956, 400, 1346},0, {880, 496},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-956, 400, 1546},0, {880, 240},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-756, 400, 1546},0, {624, 240},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-108, 200, 1431},0, {368, 1008},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-108, 400, 1431},0, {624, 1008},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-108, 400, 1231},0, {624, 752},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-108, 200, 1231},0, {368, 752},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-108, 200, 1231},0, {368, 752},{0x0, 0x0, 0x81, 0xFF}}},
	{{{-108, 400, 1231},0, {624, 752},{0x0, 0x0, 0x81, 0xFF}}},
	{{{92, 400, 1231},0, {624, 496},{0x0, 0x0, 0x81, 0xFF}}},
	{{{92, 200, 1231},0, {368, 496},{0x0, 0x0, 0x81, 0xFF}}},
	{{{92, 200, 1231},0, {368, 496},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{92, 400, 1231},0, {624, 496},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{92, 400, 1431},0, {624, 240},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{92, 200, 1431},0, {368, 240},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{92, 200, 1431},0, {368, 240},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{92, 400, 1431},0, {624, 240},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-108, 400, 1431},0, {624, -16},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-108, 200, 1431},0, {368, -16},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-108, 200, 1231},0, {112, 496},{0x0, 0x81, 0x0, 0xFF}}},
	{{{92, 200, 1231},0, {368, 496},{0x0, 0x81, 0x0, 0xFF}}},
	{{{92, 200, 1431},0, {368, 240},{0x0, 0x81, 0x0, 0xFF}}},
	{{{-108, 200, 1431},0, {112, 240},{0x0, 0x81, 0x0, 0xFF}}},
	{{{92, 400, 1231},0, {624, 496},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-108, 400, 1231},0, {880, 496},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-108, 400, 1431},0, {880, 240},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{92, 400, 1431},0, {624, 240},{0x0, 0x7F, 0x0, 0xFF}}},
};

Gfx ccm_dl_Ground_mesh_layer_1_tri_1[] = {
	gsSPVertex(ccm_dl_Ground_mesh_layer_1_vtx_1 + 0, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(4, 6, 7, 0),
	gsSP1Triangle(8, 9, 10, 0),
	gsSP1Triangle(8, 10, 11, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSP1Triangle(12, 14, 15, 0),
	gsSPVertex(ccm_dl_Ground_mesh_layer_1_vtx_1 + 16, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(4, 6, 7, 0),
	gsSP1Triangle(8, 9, 10, 0),
	gsSP1Triangle(8, 10, 11, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSP1Triangle(12, 14, 15, 0),
	gsSPVertex(ccm_dl_Ground_mesh_layer_1_vtx_1 + 32, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(4, 6, 7, 0),
	gsSP1Triangle(8, 9, 10, 0),
	gsSP1Triangle(8, 10, 11, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSP1Triangle(12, 14, 15, 0),
	gsSPVertex(ccm_dl_Ground_mesh_layer_1_vtx_1 + 48, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(4, 6, 7, 0),
	gsSP1Triangle(8, 9, 10, 0),
	gsSP1Triangle(8, 10, 11, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSP1Triangle(12, 14, 15, 0),
	gsSPVertex(ccm_dl_Ground_mesh_layer_1_vtx_1 + 64, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(4, 6, 7, 0),
	gsSP1Triangle(8, 9, 10, 0),
	gsSP1Triangle(8, 10, 11, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSP1Triangle(12, 14, 15, 0),
	gsSPVertex(ccm_dl_Ground_mesh_layer_1_vtx_1 + 80, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(4, 6, 7, 0),
	gsSP1Triangle(8, 9, 10, 0),
	gsSP1Triangle(8, 10, 11, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSP1Triangle(12, 14, 15, 0),
	gsSPEndDisplayList(),
};

Gfx mat_ccm_dl_Ground[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT, TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPTileSync(),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, ccm_dl_Planks_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 6, 0),
	gsDPLoadSync(),
	gsDPLoadBlock(7, 0, 0, 2047, 128),
	gsDPPipeSync(),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 6, 0),
	gsDPSetTileSize(0, 0, 0, 252, 124),
	gsSPSetLights1(ccm_dl_Ground_lights),
	gsSPEndDisplayList(),
};

Gfx mat_ccm_dl_Cube[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsSPSetLights1(ccm_dl_Cube_lights),
	gsSPEndDisplayList(),
};

Gfx ccm_dl_Ground_mesh_layer_1[] = {
	gsSPDisplayList(mat_ccm_dl_Ground),
	gsSPDisplayList(ccm_dl_Ground_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_ccm_dl_Cube),
	gsSPDisplayList(ccm_dl_Ground_mesh_layer_1_tri_1),
	gsSPEndDisplayList(),
};

Gfx ccm_dl_material_revert_render_settings[] = {
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPSetEnvColor(255, 255, 255, 255),
	gsDPSetAlphaCompare(G_AC_NONE),
	gsSPEndDisplayList(),
};
