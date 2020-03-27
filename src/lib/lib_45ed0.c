#include <ultra64.h>
#include "constants.h"
#include "game/data/data_000000.h"
#include "game/data/data_0083d0.h"
#include "game/data/data_00e460.h"
#include "game/data/data_0160b0.h"
#include "game/data/data_01a3a0.h"
#include "game/data/data_020df0.h"
#include "game/data/data_02da90.h"
#include "gvars/gvars.h"
#include "lib/lib_47d20.h"
#include "types.h"

GLOBAL_ASM(
glabel func00045ed0
/*    45ed0:	27bdffc8 */ 	addiu	$sp,$sp,-56
/*    45ed4:	afbf0024 */ 	sw	$ra,0x24($sp)
/*    45ed8:	e7ac0038 */ 	swc1	$f12,0x38($sp)
/*    45edc:	e7ae003c */ 	swc1	$f14,0x3c($sp)
/*    45ee0:	afb00020 */ 	sw	$s0,0x20($sp)
/*    45ee4:	f7b40018 */ 	sdc1	$f20,0x18($sp)
/*    45ee8:	c7a4003c */ 	lwc1	$f4,0x3c($sp)
/*    45eec:	4600218d */ 	trunc.w.s	$f6,$f4
/*    45ef0:	440f3000 */ 	mfc1	$t7,$f6
/*    45ef4:	00000000 */ 	sll	$zero,$zero,0x0
/*    45ef8:	afaf0034 */ 	sw	$t7,0x34($sp)
/*    45efc:	c7a80038 */ 	lwc1	$f8,0x38($sp)
/*    45f00:	44805000 */ 	mtc1	$zero,$f10
/*    45f04:	00000000 */ 	sll	$zero,$zero,0x0
/*    45f08:	460a4032 */ 	c.eq.s	$f8,$f10
/*    45f0c:	00000000 */ 	sll	$zero,$zero,0x0
/*    45f10:	4501000c */ 	bc1t	.L00045f44
/*    45f14:	00000000 */ 	sll	$zero,$zero,0x0
/*    45f18:	c7b0003c */ 	lwc1	$f16,0x3c($sp)
/*    45f1c:	44809000 */ 	mtc1	$zero,$f18
/*    45f20:	00000000 */ 	sll	$zero,$zero,0x0
/*    45f24:	46128032 */ 	c.eq.s	$f16,$f18
/*    45f28:	00000000 */ 	sll	$zero,$zero,0x0
/*    45f2c:	45000005 */ 	bc1f	.L00045f44
/*    45f30:	00000000 */ 	sll	$zero,$zero,0x0
/*    45f34:	3c013f80 */ 	lui	$at,0x3f80
/*    45f38:	44810000 */ 	mtc1	$at,$f0
/*    45f3c:	10000098 */ 	beqz	$zero,.L000461a0
/*    45f40:	00000000 */ 	sll	$zero,$zero,0x0
.L00045f44:
/*    45f44:	c7a40038 */ 	lwc1	$f4,0x38($sp)
/*    45f48:	44803000 */ 	mtc1	$zero,$f6
/*    45f4c:	00000000 */ 	sll	$zero,$zero,0x0
/*    45f50:	46062032 */ 	c.eq.s	$f4,$f6
/*    45f54:	00000000 */ 	sll	$zero,$zero,0x0
/*    45f58:	45000004 */ 	bc1f	.L00045f6c
/*    45f5c:	00000000 */ 	sll	$zero,$zero,0x0
/*    45f60:	44800000 */ 	mtc1	$zero,$f0
/*    45f64:	1000008e */ 	beqz	$zero,.L000461a0
/*    45f68:	00000000 */ 	sll	$zero,$zero,0x0
.L00045f6c:
/*    45f6c:	c7a80038 */ 	lwc1	$f8,0x38($sp)
/*    45f70:	44805000 */ 	mtc1	$zero,$f10
/*    45f74:	00000000 */ 	sll	$zero,$zero,0x0
/*    45f78:	460a4032 */ 	c.eq.s	$f8,$f10
/*    45f7c:	00000000 */ 	sll	$zero,$zero,0x0
/*    45f80:	45000008 */ 	bc1f	.L00045fa4
/*    45f84:	00000000 */ 	sll	$zero,$zero,0x0
/*    45f88:	c7b0003c */ 	lwc1	$f16,0x3c($sp)
/*    45f8c:	44809000 */ 	mtc1	$zero,$f18
/*    45f90:	00000000 */ 	sll	$zero,$zero,0x0
/*    45f94:	46128032 */ 	c.eq.s	$f16,$f18
/*    45f98:	00000000 */ 	sll	$zero,$zero,0x0
/*    45f9c:	45010011 */ 	bc1t	.L00045fe4
/*    45fa0:	00000000 */ 	sll	$zero,$zero,0x0
.L00045fa4:
/*    45fa4:	c7a40038 */ 	lwc1	$f4,0x38($sp)
/*    45fa8:	44803000 */ 	mtc1	$zero,$f6
/*    45fac:	00000000 */ 	sll	$zero,$zero,0x0
/*    45fb0:	4606203c */ 	c.lt.s	$f4,$f6
/*    45fb4:	00000000 */ 	sll	$zero,$zero,0x0
/*    45fb8:	4500000d */ 	bc1f	.L00045ff0
/*    45fbc:	00000000 */ 	sll	$zero,$zero,0x0
/*    45fc0:	8fb80034 */ 	lw	$t8,0x34($sp)
/*    45fc4:	c7b0003c */ 	lwc1	$f16,0x3c($sp)
/*    45fc8:	44984000 */ 	mtc1	$t8,$f8
/*    45fcc:	00000000 */ 	sll	$zero,$zero,0x0
/*    45fd0:	468042a0 */ 	cvt.s.w	$f10,$f8
/*    45fd4:	46105032 */ 	c.eq.s	$f10,$f16
/*    45fd8:	00000000 */ 	sll	$zero,$zero,0x0
/*    45fdc:	45010004 */ 	bc1t	.L00045ff0
/*    45fe0:	00000000 */ 	sll	$zero,$zero,0x0
.L00045fe4:
/*    45fe4:	44800000 */ 	mtc1	$zero,$f0
/*    45fe8:	1000006d */ 	beqz	$zero,.L000461a0
/*    45fec:	00000000 */ 	sll	$zero,$zero,0x0
.L00045ff0:
/*    45ff0:	8fb90034 */ 	lw	$t9,0x34($sp)
/*    45ff4:	c7a6003c */ 	lwc1	$f6,0x3c($sp)
/*    45ff8:	44999000 */ 	mtc1	$t9,$f18
/*    45ffc:	00000000 */ 	sll	$zero,$zero,0x0
/*    46000:	46809120 */ 	cvt.s.w	$f4,$f18
/*    46004:	46062032 */ 	c.eq.s	$f4,$f6
/*    46008:	00000000 */ 	sll	$zero,$zero,0x0
/*    4600c:	4501000a */ 	bc1t	.L00046038
/*    46010:	00000000 */ 	sll	$zero,$zero,0x0
/*    46014:	0c011fbc */ 	jal	func00047ef0
/*    46018:	c7ac0038 */ 	lwc1	$f12,0x38($sp)
/*    4601c:	c7a8003c */ 	lwc1	$f8,0x3c($sp)
/*    46020:	46000506 */ 	mov.s	$f20,$f0
/*    46024:	4608a302 */ 	mul.s	$f12,$f20,$f8
/*    46028:	0c011f48 */ 	jal	func00047d20
/*    4602c:	00000000 */ 	sll	$zero,$zero,0x0
/*    46030:	10000057 */ 	beqz	$zero,.L00046190
/*    46034:	e7a00038 */ 	swc1	$f0,0x38($sp)
.L00046038:
/*    46038:	c7aa003c */ 	lwc1	$f10,0x3c($sp)
/*    4603c:	44808000 */ 	mtc1	$zero,$f16
/*    46040:	00000000 */ 	sll	$zero,$zero,0x0
/*    46044:	460a803c */ 	c.lt.s	$f16,$f10
/*    46048:	00000000 */ 	sll	$zero,$zero,0x0
/*    4604c:	4500002a */ 	bc1f	.L000460f8
/*    46050:	00000000 */ 	sll	$zero,$zero,0x0
/*    46054:	3c013f80 */ 	lui	$at,0x3f80
/*    46058:	44812000 */ 	mtc1	$at,$f4
/*    4605c:	c7b2003c */ 	lwc1	$f18,0x3c($sp)
/*    46060:	46049181 */ 	sub.s	$f6,$f18,$f4
/*    46064:	e7a6003c */ 	swc1	$f6,0x3c($sp)
/*    46068:	c7a80038 */ 	lwc1	$f8,0x38($sp)
/*    4606c:	e7a80030 */ 	swc1	$f8,0x30($sp)
/*    46070:	c7aa003c */ 	lwc1	$f10,0x3c($sp)
/*    46074:	44808000 */ 	mtc1	$zero,$f16
/*    46078:	00008025 */ 	or	$s0,$zero,$zero
/*    4607c:	46105032 */ 	c.eq.s	$f10,$f16
/*    46080:	00000000 */ 	sll	$zero,$zero,0x0
/*    46084:	45010002 */ 	bc1t	.L00046090
/*    46088:	00000000 */ 	sll	$zero,$zero,0x0
/*    4608c:	24100001 */ 	addiu	$s0,$zero,0x1
.L00046090:
/*    46090:	3c013f80 */ 	lui	$at,0x3f80
/*    46094:	44819000 */ 	mtc1	$at,$f18
/*    46098:	00000000 */ 	sll	$zero,$zero,0x0
/*    4609c:	46125101 */ 	sub.s	$f4,$f10,$f18
/*    460a0:	12000013 */ 	beqz	$s0,.L000460f0
/*    460a4:	e7a4003c */ 	swc1	$f4,0x3c($sp)
.L000460a8:
/*    460a8:	c7a60038 */ 	lwc1	$f6,0x38($sp)
/*    460ac:	c7a80030 */ 	lwc1	$f8,0x30($sp)
/*    460b0:	46083402 */ 	mul.s	$f16,$f6,$f8
/*    460b4:	e7b00038 */ 	swc1	$f16,0x38($sp)
/*    460b8:	c7aa003c */ 	lwc1	$f10,0x3c($sp)
/*    460bc:	44809000 */ 	mtc1	$zero,$f18
/*    460c0:	00008025 */ 	or	$s0,$zero,$zero
/*    460c4:	46125032 */ 	c.eq.s	$f10,$f18
/*    460c8:	00000000 */ 	sll	$zero,$zero,0x0
/*    460cc:	45010002 */ 	bc1t	.L000460d8
/*    460d0:	00000000 */ 	sll	$zero,$zero,0x0
/*    460d4:	24100001 */ 	addiu	$s0,$zero,0x1
.L000460d8:
/*    460d8:	3c013f80 */ 	lui	$at,0x3f80
/*    460dc:	44812000 */ 	mtc1	$at,$f4
/*    460e0:	00000000 */ 	sll	$zero,$zero,0x0
/*    460e4:	46045181 */ 	sub.s	$f6,$f10,$f4
/*    460e8:	1600ffef */ 	bnez	$s0,.L000460a8
/*    460ec:	e7a6003c */ 	swc1	$f6,0x3c($sp)
.L000460f0:
/*    460f0:	10000027 */ 	beqz	$zero,.L00046190
/*    460f4:	00000000 */ 	sll	$zero,$zero,0x0
.L000460f8:
/*    460f8:	3c013f80 */ 	lui	$at,0x3f80
/*    460fc:	44814000 */ 	mtc1	$at,$f8
/*    46100:	00000000 */ 	sll	$zero,$zero,0x0
/*    46104:	e7a80030 */ 	swc1	$f8,0x30($sp)
/*    46108:	c7b0003c */ 	lwc1	$f16,0x3c($sp)
/*    4610c:	44809000 */ 	mtc1	$zero,$f18
/*    46110:	00008025 */ 	or	$s0,$zero,$zero
/*    46114:	46128032 */ 	c.eq.s	$f16,$f18
/*    46118:	00000000 */ 	sll	$zero,$zero,0x0
/*    4611c:	45010002 */ 	bc1t	.L00046128
/*    46120:	00000000 */ 	sll	$zero,$zero,0x0
/*    46124:	24100001 */ 	addiu	$s0,$zero,0x1
.L00046128:
/*    46128:	3c013f80 */ 	lui	$at,0x3f80
/*    4612c:	44815000 */ 	mtc1	$at,$f10
/*    46130:	00000000 */ 	sll	$zero,$zero,0x0
/*    46134:	460a8100 */ 	add.s	$f4,$f16,$f10
/*    46138:	12000013 */ 	beqz	$s0,.L00046188
/*    4613c:	e7a4003c */ 	swc1	$f4,0x3c($sp)
.L00046140:
/*    46140:	c7a60030 */ 	lwc1	$f6,0x30($sp)
/*    46144:	c7a80038 */ 	lwc1	$f8,0x38($sp)
/*    46148:	46083483 */ 	div.s	$f18,$f6,$f8
/*    4614c:	e7b20030 */ 	swc1	$f18,0x30($sp)
/*    46150:	c7b0003c */ 	lwc1	$f16,0x3c($sp)
/*    46154:	44805000 */ 	mtc1	$zero,$f10
/*    46158:	00008025 */ 	or	$s0,$zero,$zero
/*    4615c:	460a8032 */ 	c.eq.s	$f16,$f10
/*    46160:	00000000 */ 	sll	$zero,$zero,0x0
/*    46164:	45010002 */ 	bc1t	.L00046170
/*    46168:	00000000 */ 	sll	$zero,$zero,0x0
/*    4616c:	24100001 */ 	addiu	$s0,$zero,0x1
.L00046170:
/*    46170:	3c013f80 */ 	lui	$at,0x3f80
/*    46174:	44812000 */ 	mtc1	$at,$f4
/*    46178:	00000000 */ 	sll	$zero,$zero,0x0
/*    4617c:	46048180 */ 	add.s	$f6,$f16,$f4
/*    46180:	1600ffef */ 	bnez	$s0,.L00046140
/*    46184:	e7a6003c */ 	swc1	$f6,0x3c($sp)
.L00046188:
/*    46188:	c7a80030 */ 	lwc1	$f8,0x30($sp)
/*    4618c:	e7a80038 */ 	swc1	$f8,0x38($sp)
.L00046190:
/*    46190:	10000003 */ 	beqz	$zero,.L000461a0
/*    46194:	c7a00038 */ 	lwc1	$f0,0x38($sp)
/*    46198:	10000001 */ 	beqz	$zero,.L000461a0
/*    4619c:	00000000 */ 	sll	$zero,$zero,0x0
.L000461a0:
/*    461a0:	8fbf0024 */ 	lw	$ra,0x24($sp)
/*    461a4:	d7b40018 */ 	ldc1	$f20,0x18($sp)
/*    461a8:	8fb00020 */ 	lw	$s0,0x20($sp)
/*    461ac:	03e00008 */ 	jr	$ra
/*    461b0:	27bd0038 */ 	addiu	$sp,$sp,0x38
/*    461b4:	00000000 */ 	sll	$zero,$zero,0x0
/*    461b8:	00000000 */ 	sll	$zero,$zero,0x0
/*    461bc:	00000000 */ 	sll	$zero,$zero,0x0
);