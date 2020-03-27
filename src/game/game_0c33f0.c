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
#include "types.h"

GLOBAL_ASM(
glabel func0f0c33f0
/*  f0c33f0:	3c088006 */ 	lui	$t0,%hi(var8005ef10)
/*  f0c33f4:	2508ef10 */ 	addiu	$t0,$t0,%lo(var8005ef10)
/*  f0c33f8:	3c09ffff */ 	lui	$t1,0xffff
/*  f0c33fc:	c5100000 */ 	lwc1	$f16,0x0($t0)
.L0f0c3400:
/*  f0c3400:	c4800000 */ 	lwc1	$f0,0x0($a0)
/*  f0c3404:	c4810004 */ 	lwc1	$f1,0x4($a0)
/*  f0c3408:	c4820008 */ 	lwc1	$f2,0x8($a0)
/*  f0c340c:	c483000c */ 	lwc1	$f3,0xc($a0)
/*  f0c3410:	c4840010 */ 	lwc1	$f4,0x10($a0)
/*  f0c3414:	c4850014 */ 	lwc1	$f5,0x14($a0)
/*  f0c3418:	c4860018 */ 	lwc1	$f6,0x18($a0)
/*  f0c341c:	c487001c */ 	lwc1	$f7,0x1c($a0)
/*  f0c3420:	c4880020 */ 	lwc1	$f8,0x20($a0)
/*  f0c3424:	c4890024 */ 	lwc1	$f9,0x24($a0)
/*  f0c3428:	c48a0028 */ 	lwc1	$f10,0x28($a0)
/*  f0c342c:	c48b002c */ 	lwc1	$f11,0x2c($a0)
/*  f0c3430:	c48c0030 */ 	lwc1	$f12,0x30($a0)
/*  f0c3434:	c48d0034 */ 	lwc1	$f13,0x34($a0)
/*  f0c3438:	c48e0038 */ 	lwc1	$f14,0x38($a0)
/*  f0c343c:	c48f003c */ 	lwc1	$f15,0x3c($a0)
/*  f0c3440:	46100482 */ 	mul.s	$f18,$f0,$f16
/*  f0c3444:	c5110004 */ 	lwc1	$f17,0x4($t0)
/*  f0c3448:	4600948d */ 	trunc.w.s	$f18,$f18
/*  f0c344c:	46100cc2 */ 	mul.s	$f19,$f1,$f16
/*  f0c3450:	46009ccd */ 	trunc.w.s	$f19,$f19
/*  f0c3454:	440a9000 */ 	mfc1	$t2,$f18
/*  f0c3458:	440b9800 */ 	mfc1	$t3,$f19
/*  f0c345c:	46101482 */ 	mul.s	$f18,$f2,$f16
/*  f0c3460:	01496024 */ 	and	$t4,$t2,$t1
/*  f0c3464:	4600948d */ 	trunc.w.s	$f18,$f18
/*  f0c3468:	46111cc2 */ 	mul.s	$f19,$f3,$f17
/*  f0c346c:	000b6c02 */ 	srl	$t5,$t3,0x10
/*  f0c3470:	46009ccd */ 	trunc.w.s	$f19,$f19
/*  f0c3474:	018d6025 */ 	or	$t4,$t4,$t5
/*  f0c3478:	440d9000 */ 	mfc1	$t5,$f18
/*  f0c347c:	000a5400 */ 	sll	$t2,$t2,0x10
/*  f0c3480:	316bffff */ 	andi	$t3,$t3,0xffff
/*  f0c3484:	440e9800 */ 	mfc1	$t6,$f19
/*  f0c3488:	014b5025 */ 	or	$t2,$t2,$t3
/*  f0c348c:	01a97824 */ 	and	$t7,$t5,$t1
/*  f0c3490:	000d6c00 */ 	sll	$t5,$t5,0x10
/*  f0c3494:	000ec402 */ 	srl	$t8,$t6,0x10
/*  f0c3498:	31ceffff */ 	andi	$t6,$t6,0xffff
/*  f0c349c:	01f87825 */ 	or	$t7,$t7,$t8
/*  f0c34a0:	01ae6825 */ 	or	$t5,$t5,$t6
/*  f0c34a4:	46102482 */ 	mul.s	$f18,$f4,$f16
/*  f0c34a8:	ac8c0000 */ 	sw	$t4,0x0($a0)
/*  f0c34ac:	4600948d */ 	trunc.w.s	$f18,$f18
/*  f0c34b0:	46102cc2 */ 	mul.s	$f19,$f5,$f16
/*  f0c34b4:	ac8f0004 */ 	sw	$t7,0x4($a0)
/*  f0c34b8:	ac8a0020 */ 	sw	$t2,0x20($a0)
/*  f0c34bc:	ac8d0024 */ 	sw	$t5,0x24($a0)
/*  f0c34c0:	46009ccd */ 	trunc.w.s	$f19,$f19
/*  f0c34c4:	440a9000 */ 	mfc1	$t2,$f18
/*  f0c34c8:	440b9800 */ 	mfc1	$t3,$f19
/*  f0c34cc:	46103482 */ 	mul.s	$f18,$f6,$f16
/*  f0c34d0:	01496024 */ 	and	$t4,$t2,$t1
/*  f0c34d4:	4600948d */ 	trunc.w.s	$f18,$f18
/*  f0c34d8:	46113cc2 */ 	mul.s	$f19,$f7,$f17
/*  f0c34dc:	000b6c02 */ 	srl	$t5,$t3,0x10
/*  f0c34e0:	46009ccd */ 	trunc.w.s	$f19,$f19
/*  f0c34e4:	018d6025 */ 	or	$t4,$t4,$t5
/*  f0c34e8:	440d9000 */ 	mfc1	$t5,$f18
/*  f0c34ec:	000a5400 */ 	sll	$t2,$t2,0x10
/*  f0c34f0:	316bffff */ 	andi	$t3,$t3,0xffff
/*  f0c34f4:	440e9800 */ 	mfc1	$t6,$f19
/*  f0c34f8:	014b5025 */ 	or	$t2,$t2,$t3
/*  f0c34fc:	01a97824 */ 	and	$t7,$t5,$t1
/*  f0c3500:	000d6c00 */ 	sll	$t5,$t5,0x10
/*  f0c3504:	000ec402 */ 	srl	$t8,$t6,0x10
/*  f0c3508:	31ceffff */ 	andi	$t6,$t6,0xffff
/*  f0c350c:	01f87825 */ 	or	$t7,$t7,$t8
/*  f0c3510:	01ae6825 */ 	or	$t5,$t5,$t6
/*  f0c3514:	46104482 */ 	mul.s	$f18,$f8,$f16
/*  f0c3518:	ac8c0008 */ 	sw	$t4,0x8($a0)
/*  f0c351c:	4600948d */ 	trunc.w.s	$f18,$f18
/*  f0c3520:	46104cc2 */ 	mul.s	$f19,$f9,$f16
/*  f0c3524:	ac8f000c */ 	sw	$t7,0xc($a0)
/*  f0c3528:	ac8a0028 */ 	sw	$t2,0x28($a0)
/*  f0c352c:	ac8d002c */ 	sw	$t5,0x2c($a0)
/*  f0c3530:	46009ccd */ 	trunc.w.s	$f19,$f19
/*  f0c3534:	440a9000 */ 	mfc1	$t2,$f18
/*  f0c3538:	440b9800 */ 	mfc1	$t3,$f19
/*  f0c353c:	46105482 */ 	mul.s	$f18,$f10,$f16
/*  f0c3540:	01496024 */ 	and	$t4,$t2,$t1
/*  f0c3544:	4600948d */ 	trunc.w.s	$f18,$f18
/*  f0c3548:	46115cc2 */ 	mul.s	$f19,$f11,$f17
/*  f0c354c:	000b6c02 */ 	srl	$t5,$t3,0x10
/*  f0c3550:	46009ccd */ 	trunc.w.s	$f19,$f19
/*  f0c3554:	018d6025 */ 	or	$t4,$t4,$t5
/*  f0c3558:	440d9000 */ 	mfc1	$t5,$f18
/*  f0c355c:	000a5400 */ 	sll	$t2,$t2,0x10
/*  f0c3560:	316bffff */ 	andi	$t3,$t3,0xffff
/*  f0c3564:	440e9800 */ 	mfc1	$t6,$f19
/*  f0c3568:	014b5025 */ 	or	$t2,$t2,$t3
/*  f0c356c:	01a97824 */ 	and	$t7,$t5,$t1
/*  f0c3570:	000d6c00 */ 	sll	$t5,$t5,0x10
/*  f0c3574:	000ec402 */ 	srl	$t8,$t6,0x10
/*  f0c3578:	31ceffff */ 	andi	$t6,$t6,0xffff
/*  f0c357c:	01f87825 */ 	or	$t7,$t7,$t8
/*  f0c3580:	01ae6825 */ 	or	$t5,$t5,$t6
/*  f0c3584:	46106482 */ 	mul.s	$f18,$f12,$f16
/*  f0c3588:	ac8c0010 */ 	sw	$t4,0x10($a0)
/*  f0c358c:	4600948d */ 	trunc.w.s	$f18,$f18
/*  f0c3590:	46106cc2 */ 	mul.s	$f19,$f13,$f16
/*  f0c3594:	ac8f0014 */ 	sw	$t7,0x14($a0)
/*  f0c3598:	ac8a0030 */ 	sw	$t2,0x30($a0)
/*  f0c359c:	ac8d0034 */ 	sw	$t5,0x34($a0)
/*  f0c35a0:	46009ccd */ 	trunc.w.s	$f19,$f19
/*  f0c35a4:	440a9000 */ 	mfc1	$t2,$f18
/*  f0c35a8:	440b9800 */ 	mfc1	$t3,$f19
/*  f0c35ac:	46107482 */ 	mul.s	$f18,$f14,$f16
/*  f0c35b0:	01496024 */ 	and	$t4,$t2,$t1
/*  f0c35b4:	4600948d */ 	trunc.w.s	$f18,$f18
/*  f0c35b8:	46117cc2 */ 	mul.s	$f19,$f15,$f17
/*  f0c35bc:	000b6c02 */ 	srl	$t5,$t3,0x10
/*  f0c35c0:	46009ccd */ 	trunc.w.s	$f19,$f19
/*  f0c35c4:	018d6025 */ 	or	$t4,$t4,$t5
/*  f0c35c8:	440d9000 */ 	mfc1	$t5,$f18
/*  f0c35cc:	000a5400 */ 	sll	$t2,$t2,0x10
/*  f0c35d0:	316bffff */ 	andi	$t3,$t3,0xffff
/*  f0c35d4:	440e9800 */ 	mfc1	$t6,$f19
/*  f0c35d8:	014b5025 */ 	or	$t2,$t2,$t3
/*  f0c35dc:	01a97824 */ 	and	$t7,$t5,$t1
/*  f0c35e0:	000d6c00 */ 	sll	$t5,$t5,0x10
/*  f0c35e4:	000ec402 */ 	srl	$t8,$t6,0x10
/*  f0c35e8:	31ceffff */ 	andi	$t6,$t6,0xffff
/*  f0c35ec:	01f87825 */ 	or	$t7,$t7,$t8
/*  f0c35f0:	01ae6825 */ 	or	$t5,$t5,$t6
/*  f0c35f4:	24a5ffff */ 	addiu	$a1,$a1,-1
/*  f0c35f8:	ac8c0018 */ 	sw	$t4,0x18($a0)
/*  f0c35fc:	ac8f001c */ 	sw	$t7,0x1c($a0)
/*  f0c3600:	ac8a0038 */ 	sw	$t2,0x38($a0)
/*  f0c3604:	ac8d003c */ 	sw	$t5,0x3c($a0)
/*  f0c3608:	14a0ff7d */ 	bnez	$a1,.L0f0c3400
/*  f0c360c:	24840040 */ 	addiu	$a0,$a0,0x40
/*  f0c3610:	03e00008 */ 	jr	$ra
/*  f0c3614:	00000000 */ 	sll	$zero,$zero,0x0
/*  f0c3618:	00000000 */ 	sll	$zero,$zero,0x0
/*  f0c361c:	00000000 */ 	sll	$zero,$zero,0x0
);
