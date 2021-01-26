#include <ultra64.h>
#include "boot/entry.h"
#include "constants.h"
#include "game/data/data_000000.h"
#include "game/data/data_0083d0.h"
#include "game/data/data_00e460.h"
#include "game/data/data_0160b0.h"
#include "game/data/data_01a3a0.h"
#include "game/data/data_020df0.h"
#include "game/data/data_02da90.h"
#include "game/game_0e0770.h"
#include "gvars/gvars.h"
#include "lib/lib_04a80.h"
#include "lib/lib_05e40.h"
#include "lib/lib_074f0.h"
#include "lib/lib_08a20.h"
#include "lib/lib_09660.h"
#include "lib/lib_0c000.h"
#include "lib/main.h"
#include "lib/lib_0e9d0.h"
#include "lib/lib_12dc0.h"
#include "lib/lib_13710.h"
#include "lib/lib_13750.h"
#include "lib/lib_13900.h"
#include "lib/lib_2fa00.h"
#include "lib/lib_48120.h"
#include "lib/lib_48150.h"
#include "lib/lib_481d0.h"
#include "lib/lib_485e0.h"
#include "lib/lib_48c00.h"
#include "lib/lib_48cd0.h"
#include "lib/lib_48dc0.h"
#include "lib/lib_48ef0.h"
#include "lib/lib_48f50.h"
#include "lib/lib_490b0.h"
#include "types.h"

GLOBAL_ASM(
glabel func00001000
/*     1000:	3c088009 */ 	lui	$t0,%hi(var8008ae20)
/*     1004:	3c090002 */ 	lui	$t1,0x2
/*     1008:	2508ae20 */ 	addiu	$t0,$t0,%lo(var8008ae20)
/*     100c:	352923a0 */ 	ori	$t1,$t1,0x23a0
.L00001010:
/*     1010:	2129fff8 */ 	addi	$t1,$t1,-8
/*     1014:	ad000000 */ 	sw	$zero,0x0($t0)
/*     1018:	ad000004 */ 	sw	$zero,0x4($t0)
/*     101c:	1520fffc */ 	bnez	$t1,.L00001010
/*     1020:	21080008 */ 	addi	$t0,$t0,0x8
/*     1024:	3c0a8000 */ 	lui	$t2,0x8000
/*     1028:	3c1d8000 */ 	lui	$sp,0x8000
/*     102c:	254a1050 */ 	addiu	$t2,$t2,0x1050
/*     1030:	01400008 */ 	jr	$t2
/*     1034:	27bd0f10 */ 	addiu	$sp,$sp,0xf10
/*     1038:	00000000 */ 	nop
/*     103c:	00000000 */ 	nop
/*     1040:	00000000 */ 	nop
/*     1044:	00000000 */ 	nop
/*     1048:	00000000 */ 	nop
/*     104c:	00000000 */ 	nop
);

GLOBAL_ASM(
glabel func00001050
/*     1050:	3c08007f */ 	lui	$t0,0x7f
/*     1054:	3508e000 */ 	ori	$t0,$t0,0xe000
/*     1058:	40882800 */ 	mtc0	$t0,$5
/*     105c:	3c087000 */ 	lui	$t0,0x7000
/*     1060:	40885000 */ 	mtc0	$t0,$10
/*     1064:	2408001f */ 	addiu	$t0,$zero,0x1f
/*     1068:	40881000 */ 	mtc0	$t0,$2
/*     106c:	3c080001 */ 	lui	$t0,0x1
/*     1070:	3508001f */ 	ori	$t0,$t0,0x1f
/*     1074:	40881800 */ 	mtc0	$t0,$3
/*     1078:	24080000 */ 	addiu	$t0,$zero,0x0
/*     107c:	40880000 */ 	mtc0	$t0,$0
/*     1080:	00000000 */ 	nop
/*     1084:	42000002 */ 	tlbwi
/*     1088:	00000000 */ 	nop
/*     108c:	00000000 */ 	nop
/*     1090:	00000000 */ 	nop
/*     1094:	3c087000 */ 	lui	$t0,%hi(func000016cc)
/*     1098:	250816cc */ 	addiu	$t0,$t0,%lo(func000016cc)
/*     109c:	01000008 */ 	jr	$t0
/*     10a0:	00000000 */ 	nop
);

GLOBAL_ASM(
glabel func000010a4
/*     10a4:	27bdfff8 */ 	addiu	$sp,$sp,-8
/*     10a8:	afbf0000 */ 	sw	$ra,0x0($sp)
/*     10ac:	40802000 */ 	mtc0	$zero,$4
/*     10b0:	24080002 */ 	addiu	$t0,$zero,0x2
/*     10b4:	40883000 */ 	mtc0	$t0,$6
/*     10b8:	240901ff */ 	addiu	$t1,$zero,0x1ff
/*     10bc:	3c018009 */ 	lui	$at,%hi(var8008d264+0x2)
/*     10c0:	a429d266 */ 	sh	$t1,%lo(var8008d264+0x2)($at)
/*     10c4:	2404010c */ 	addiu	$a0,$zero,0x10c
/*     10c8:	3c018009 */ 	lui	$at,%hi(var8008ae28+0x2)
/*     10cc:	a424ae2a */ 	sh	$a0,%lo(var8008ae28+0x2)($at)
/*     10d0:	3c018009 */ 	lui	$at,%hi(var8008d258+0x2)
/*     10d4:	a424d25a */ 	sh	$a0,%lo(var8008d258+0x2)($at)
/*     10d8:	00042300 */ 	sll	$a0,$a0,0xc
/*     10dc:	3c028009 */ 	lui	$v0,%hi(var8008ae20)
/*     10e0:	8c42ae20 */ 	lw	$v0,%lo(var8008ae20)($v0)
/*     10e4:	3c097f1c */ 	lui	$t1,%hi(_gameSegmentEnd)
/*     10e8:	252999e0 */ 	addiu	$t1,$t1,%lo(_gameSegmentEnd)
/*     10ec:	3c0a7f00 */ 	lui	$t2,%hi(func0f000000)
/*     10f0:	254a0000 */ 	addiu	$t2,$t2,%lo(func0f000000)
/*     10f4:	012a4823 */ 	subu	$t1,$t1,$t2
/*     10f8:	3c080fff */ 	lui	$t0,0xfff
/*     10fc:	3508ffff */ 	ori	$t0,$t0,0xffff
/*     1100:	00481024 */ 	and	$v0,$v0,$t0
/*     1104:	3c018009 */ 	lui	$at,%hi(var8008d268)
/*     1108:	ac22d268 */ 	sw	$v0,%lo(var8008d268)($at)
/*     110c:	3c028009 */ 	lui	$v0,%hi(var8008d238)
/*     1110:	2442d238 */ 	addiu	$v0,$v0,%lo(var8008d238)
/*     1114:	24040021 */ 	addiu	$a0,$zero,0x21
/*     1118:	3c018009 */ 	lui	$at,%hi(var8008d25c)
/*     111c:	ac22d25c */ 	sw	$v0,%lo(var8008d25c)($at)
/*     1120:	00441821 */ 	addu	$v1,$v0,$a0
/*     1124:	3c018009 */ 	lui	$at,%hi(var8008d260)
/*     1128:	ac23d260 */ 	sw	$v1,%lo(var8008d260)($at)
/*     112c:	8fbf0000 */ 	lw	$ra,0x0($sp)
/*     1130:	27bd0008 */ 	addiu	$sp,$sp,0x8
/*     1134:	03e00008 */ 	jr	$ra
/*     1138:	00000000 */ 	nop
);

GLOBAL_ASM(
glabel func0000113c
/*     113c:	240800ff */ 	addiu	$t0,$zero,0xff
/*     1140:	3c028009 */ 	lui	$v0,%hi(var8008d25c)
/*     1144:	8c42d25c */ 	lw	$v0,%lo(var8008d25c)($v0)
/*     1148:	3c038009 */ 	lui	$v1,%hi(var8008d260)
/*     114c:	8c63d260 */ 	lw	$v1,%lo(var8008d260)($v1)
.L00001150:
/*     1150:	a0480000 */ 	sb	$t0,0x0($v0)
/*     1154:	1443fffe */ 	bne	$v0,$v1,.L00001150
/*     1158:	24420001 */ 	addiu	$v0,$v0,0x1
/*     115c:	24040004 */ 	addiu	$a0,$zero,0x4
/*     1160:	10800005 */ 	beqz	$a0,.L00001178
/*     1164:	2484ffff */ 	addiu	$a0,$a0,-1
/*     1168:	24080002 */ 	addiu	$t0,$zero,0x2
/*     116c:	00884004 */ 	sllv	$t0,$t0,$a0
/*     1170:	2508ffff */ 	addiu	$t0,$t0,-1
/*     1174:	a0680000 */ 	sb	$t0,0x0($v1)
.L00001178:
/*     1178:	03e00008 */ 	jr	$ra
/*     117c:	00000000 */ 	nop
);

#if VERSION >= VERSION_NTSC_1_0
GLOBAL_ASM(
glabel func00001180
/*     1180:	40082000 */ 	mfc0	$t0,$4
/*     1184:	0008aa40 */ 	sll	$s5,$t0,0x9
/*     1188:	3c097f00 */ 	lui	$t1,0x7f00
/*     118c:	02a94022 */ 	sub	$t0,$s5,$t1
/*     1190:	00084302 */ 	srl	$t0,$t0,0xc
/*     1194:	000840c0 */ 	sll	$t0,$t0,0x3
/*     1198:	3c098009 */ 	lui	$t1,%hi(var8008ae24)
/*     119c:	8d29ae24 */ 	lw	$t1,%lo(var8008ae24)($t1)
/*     11a0:	01098021 */ 	addu	$s0,$t0,$t1
/*     11a4:	3c1e7f00 */ 	lui	$s8,0x7f00
/*     11a8:	02be082a */ 	slt	$at,$s5,$s8
/*     11ac:	1420011f */ 	bnez	$at,.L0000162c
/*     11b0:	00000000 */ 	nop
/*     11b4:	3c098009 */ 	lui	$t1,%hi(var80090b04)
/*     11b8:	8d290b04 */ 	lw	$t1,%lo(var80090b04)($t1)
/*     11bc:	02a9082a */ 	slt	$at,$s5,$t1
/*     11c0:	1020011a */ 	beqz	$at,.L0000162c
/*     11c4:	00000000 */ 	nop
/*     11c8:	40194000 */ 	mfc0	$t9,$8
/*     11cc:	0019cb02 */ 	srl	$t9,$t9,0xc
/*     11d0:	33390001 */ 	andi	$t9,$t9,0x1
/*     11d4:	53200002 */ 	beqzl	$t9,.L000011e0
/*     11d8:	8e110000 */ 	lw	$s1,0x0($s0)
/*     11dc:	8e110008 */ 	lw	$s1,0x8($s0)
.L000011e0:
/*     11e0:	562000b8 */ 	bnezl	$s1,.L000014c4
/*     11e4:	240d0001 */ 	addiu	$t5,$zero,0x1
/*     11e8:	240d0000 */ 	addiu	$t5,$zero,0x0
/*     11ec:	3c098009 */ 	lui	$t1,%hi(var8008d25c)
/*     11f0:	8d29d25c */ 	lw	$t1,%lo(var8008d25c)($t1)
/*     11f4:	3c0a8009 */ 	lui	$t2,%hi(var8008d260)
/*     11f8:	8d4ad260 */ 	lw	$t2,%lo(var8008d260)($t2)
.L000011fc:
/*     11fc:	91280000 */ 	lbu	$t0,0x0($t1)
/*     1200:	1100000a */ 	beqz	$t0,.L0000122c
/*     1204:	00000000 */ 	nop
/*     1208:	240e0000 */ 	addiu	$t6,$zero,0x0
/*     120c:	240f0001 */ 	addiu	$t7,$zero,0x1
.L00001210:
/*     1210:	010fc024 */ 	and	$t8,$t0,$t7
/*     1214:	17000009 */ 	bnez	$t8,.L0000123c
/*     1218:	00000000 */ 	nop
/*     121c:	25ce0001 */ 	addiu	$t6,$t6,0x1
/*     1220:	24010008 */ 	addiu	$at,$zero,0x8
/*     1224:	15c1fffa */ 	bne	$t6,$at,.L00001210
/*     1228:	000f7840 */ 	sll	$t7,$t7,0x1
.L0000122c:
/*     122c:	152afff3 */ 	bne	$t1,$t2,.L000011fc
/*     1230:	25290001 */ 	addiu	$t1,$t1,0x1
/*     1234:	0800055c */ 	j	0x1570
/*     1238:	00000000 */ 	nop
.L0000123c:
/*     123c:	010f4026 */ 	xor	$t0,$t0,$t7
/*     1240:	a1280000 */ 	sb	$t0,0x0($t1)
/*     1244:	3c0a8009 */ 	lui	$t2,%hi(var8008d25c)
/*     1248:	8d4ad25c */ 	lw	$t2,%lo(var8008d25c)($t2)
/*     124c:	3c118009 */ 	lui	$s1,%hi(var8008d268)
/*     1250:	8e31d268 */ 	lw	$s1,%lo(var8008d268)($s1)
/*     1254:	012a4823 */ 	subu	$t1,$t1,$t2
/*     1258:	000948c0 */ 	sll	$t1,$t1,0x3
/*     125c:	01c94021 */ 	addu	$t0,$t6,$t1
/*     1260:	00084300 */ 	sll	$t0,$t0,0xc
/*     1264:	02288821 */ 	addu	$s1,$s1,$t0
/*     1268:	400a4000 */ 	mfc0	$t2,$8
/*     126c:	3c0800ff */ 	lui	$t0,0xff
/*     1270:	3508f000 */ 	ori	$t0,$t0,0xf000
/*     1274:	01485024 */ 	and	$t2,$t2,$t0
/*     1278:	000a5282 */ 	srl	$t2,$t2,0xa
/*     127c:	3c088009 */ 	lui	$t0,%hi(var8008ae30)
/*     1280:	8d08ae30 */ 	lw	$t0,%lo(var8008ae30)($t0)
/*     1284:	010a4021 */ 	addu	$t0,$t0,$t2
/*     1288:	8d0a0000 */ 	lw	$t2,0x0($t0)
/*     128c:	8d080004 */ 	lw	$t0,0x4($t0)
/*     1290:	010a4023 */ 	subu	$t0,$t0,$t2
/*     1294:	2409fff0 */ 	addiu	$t1,$zero,-16
/*     1298:	2508000f */ 	addiu	$t0,$t0,0xf
/*     129c:	01097024 */ 	and	$t6,$t0,$t1
/*     12a0:	3c08a460 */ 	lui	$t0,0xa460
/*     12a4:	35080010 */ 	ori	$t0,$t0,0x10
.L000012a8:
/*     12a8:	8d090000 */ 	lw	$t1,0x0($t0)
/*     12ac:	31290003 */ 	andi	$t1,$t1,0x3
/*     12b0:	1520fffd */ 	bnez	$t1,.L000012a8
/*     12b4:	00000000 */ 	nop
/*     12b8:	3c16a430 */ 	lui	$s6,0xa430
/*     12bc:	8ed60008 */ 	lw	$s6,0x8($s6)
/*     12c0:	32d60010 */ 	andi	$s6,$s6,0x10
/*     12c4:	3c08a460 */ 	lui	$t0,0xa460
/*     12c8:	3c098009 */ 	lui	$t1,%hi(var8008ae2c)
/*     12cc:	8d29ae2c */ 	lw	$t1,%lo(var8008ae2c)($t1)
/*     12d0:	3c0f0fff */ 	lui	$t7,0xfff
/*     12d4:	35efffff */ 	ori	$t7,$t7,0xffff
/*     12d8:	012f4824 */ 	and	$t1,$t1,$t7
/*     12dc:	ad090000 */ 	sw	$t1,0x0($t0)
/*     12e0:	3c08a460 */ 	lui	$t0,0xa460
/*     12e4:	35080004 */ 	ori	$t0,$t0,0x4
/*     12e8:	3c098000 */ 	lui	$t1,0x8000
/*     12ec:	8d290308 */ 	lw	$t1,0x308($t1)
/*     12f0:	012a4825 */ 	or	$t1,$t1,$t2
/*     12f4:	3c0a1fff */ 	lui	$t2,0x1fff
/*     12f8:	354affff */ 	ori	$t2,$t2,0xffff
/*     12fc:	012a4824 */ 	and	$t1,$t1,$t2
/*     1300:	ad090000 */ 	sw	$t1,0x0($t0)
/*     1304:	3c08a460 */ 	lui	$t0,0xa460
/*     1308:	3508000c */ 	ori	$t0,$t0,0xc
/*     130c:	25ceffff */ 	addiu	$t6,$t6,-1
/*     1310:	ad0e0000 */ 	sw	$t6,0x0($t0)
/*     1314:	53200003 */ 	beqzl	$t9,.L00001324
/*     1318:	00000000 */ 	nop
/*     131c:	50000002 */ 	beqzl	$zero,.L00001328
/*     1320:	ae110008 */ 	sw	$s1,0x8($s0)
.L00001324:
/*     1324:	ae110000 */ 	sw	$s1,0x0($s0)
.L00001328:
/*     1328:	3c08a460 */ 	lui	$t0,0xa460
/*     132c:	35080010 */ 	ori	$t0,$t0,0x10
.L00001330:
/*     1330:	8d090000 */ 	lw	$t1,0x0($t0)
/*     1334:	31290003 */ 	andi	$t1,$t1,0x3
/*     1338:	1520fffd */ 	bnez	$t1,.L00001330
/*     133c:	00000000 */ 	nop
/*     1340:	3c088009 */ 	lui	$t0,%hi(var8008ae2c)
/*     1344:	8d08ae2c */ 	lw	$t0,%lo(var8008ae2c)($t0)
/*     1348:	25091000 */ 	addiu	$t1,$t0,0x1000
.L0000134c:
/*     134c:	bd150000 */ 	cache	0x15,0x0($t0)
/*     1350:	0109082b */ 	sltu	$at,$t0,$t1
/*     1354:	1420fffd */ 	bnez	$at,.L0000134c
/*     1358:	25080010 */ 	addiu	$t0,$t0,16
/*     135c:	16c00004 */ 	bnez	$s6,.L00001370
/*     1360:	00000000 */ 	nop
/*     1364:	24080002 */ 	addiu	$t0,$zero,0x2
/*     1368:	3c01a460 */ 	lui	$at,0xa460
/*     136c:	ac280010 */ 	sw	$t0,0x10($at)
.L00001370:
/*     1370:	3c048009 */ 	lui	$a0,%hi(var8008ae38)
/*     1374:	2484ae38 */ 	addiu	$a0,$a0,%lo(var8008ae38)
/*     1378:	24840ff8 */ 	addiu	$a0,$a0,0xff8
/*     137c:	ac9d0000 */ 	sw	$sp,0x0($a0)
/*     1380:	249d0000 */ 	addiu	$sp,$a0,0x0
/*     1384:	3c048009 */ 	lui	$a0,%hi(var8008ae2c)
/*     1388:	8c84ae2c */ 	lw	$a0,%lo(var8008ae2c)($a0)
/*     138c:	24840002 */ 	addiu	$a0,$a0,0x2
/*     1390:	3c088000 */ 	lui	$t0,0x8000
/*     1394:	02282825 */ 	or	$a1,$s1,$t0
/*     1398:	3c068009 */ 	lui	$a2,%hi(var8008be38)
/*     139c:	24c6be38 */ 	addiu	$a2,$a2,%lo(var8008be38)
/*     13a0:	27bdff80 */ 	addiu	$sp,$sp,-128
/*     13a4:	afbf0000 */ 	sw	$ra,0x0($sp)
/*     13a8:	afa10004 */ 	sw	$at,0x4($sp)
/*     13ac:	afa20008 */ 	sw	$v0,0x8($sp)
/*     13b0:	afa3000c */ 	sw	$v1,0xc($sp)
/*     13b4:	afa40010 */ 	sw	$a0,0x10($sp)
/*     13b8:	afa50014 */ 	sw	$a1,0x14($sp)
/*     13bc:	afa60018 */ 	sw	$a2,0x18($sp)
/*     13c0:	afa7001c */ 	sw	$a3,0x1c($sp)
/*     13c4:	afa80020 */ 	sw	$t0,0x20($sp)
/*     13c8:	afa90024 */ 	sw	$t1,0x24($sp)
/*     13cc:	afaa0028 */ 	sw	$t2,0x28($sp)
/*     13d0:	afab002c */ 	sw	$t3,0x2c($sp)
/*     13d4:	afac0030 */ 	sw	$t4,0x30($sp)
/*     13d8:	afad0034 */ 	sw	$t5,0x34($sp)
/*     13dc:	afae0038 */ 	sw	$t6,0x38($sp)
/*     13e0:	afaf003c */ 	sw	$t7,0x3c($sp)
/*     13e4:	afb00040 */ 	sw	$s0,0x40($sp)
/*     13e8:	afb10044 */ 	sw	$s1,0x44($sp)
/*     13ec:	afb20048 */ 	sw	$s2,0x48($sp)
/*     13f0:	afb3004c */ 	sw	$s3,0x4c($sp)
/*     13f4:	afb40050 */ 	sw	$s4,0x50($sp)
/*     13f8:	afb50054 */ 	sw	$s5,0x54($sp)
/*     13fc:	afb60058 */ 	sw	$s6,0x58($sp)
/*     1400:	afb7005c */ 	sw	$s7,0x5c($sp)
/*     1404:	afb80060 */ 	sw	$t8,0x60($sp)
/*     1408:	afb90064 */ 	sw	$t9,0x64($sp)
/*     140c:	afbc0070 */ 	sw	$gp,0x70($sp)
/*     1410:	afbd0074 */ 	sw	$sp,0x74($sp)
/*     1414:	afbe0078 */ 	sw	$s8,0x78($sp)
/*     1418:	0c001d3c */ 	jal	func000074f0
/*     141c:	00000000 */ 	nop
/*     1420:	8fbf0000 */ 	lw	$ra,0x0($sp)
/*     1424:	8fa10004 */ 	lw	$at,0x4($sp)
/*     1428:	8fa20008 */ 	lw	$v0,0x8($sp)
/*     142c:	8fa3000c */ 	lw	$v1,0xc($sp)
/*     1430:	8fa40010 */ 	lw	$a0,0x10($sp)
/*     1434:	8fa50014 */ 	lw	$a1,0x14($sp)
/*     1438:	8fa60018 */ 	lw	$a2,0x18($sp)
/*     143c:	8fa7001c */ 	lw	$a3,0x1c($sp)
/*     1440:	8fa80020 */ 	lw	$t0,0x20($sp)
/*     1444:	8fa90024 */ 	lw	$t1,0x24($sp)
/*     1448:	8faa0028 */ 	lw	$t2,0x28($sp)
/*     144c:	8fab002c */ 	lw	$t3,0x2c($sp)
/*     1450:	8fac0030 */ 	lw	$t4,0x30($sp)
/*     1454:	8fad0034 */ 	lw	$t5,0x34($sp)
/*     1458:	8fae0038 */ 	lw	$t6,0x38($sp)
/*     145c:	8faf003c */ 	lw	$t7,0x3c($sp)
/*     1460:	8fb00040 */ 	lw	$s0,0x40($sp)
/*     1464:	8fb10044 */ 	lw	$s1,0x44($sp)
/*     1468:	8fb20048 */ 	lw	$s2,0x48($sp)
/*     146c:	8fb3004c */ 	lw	$s3,0x4c($sp)
/*     1470:	8fb40050 */ 	lw	$s4,0x50($sp)
/*     1474:	8fb50054 */ 	lw	$s5,0x54($sp)
/*     1478:	8fb60058 */ 	lw	$s6,0x58($sp)
/*     147c:	8fb7005c */ 	lw	$s7,0x5c($sp)
/*     1480:	8fb80060 */ 	lw	$t8,0x60($sp)
/*     1484:	8fb90064 */ 	lw	$t9,0x64($sp)
/*     1488:	8fbc0070 */ 	lw	$gp,0x70($sp)
/*     148c:	8fbd0074 */ 	lw	$sp,0x74($sp)
/*     1490:	8fbe0078 */ 	lw	$s8,0x78($sp)
/*     1494:	27bd0080 */ 	addiu	$sp,$sp,0x80
/*     1498:	3c048009 */ 	lui	$a0,%hi(var8008ae38)
/*     149c:	2484ae38 */ 	addiu	$a0,$a0,%lo(var8008ae38)
/*     14a0:	24840ff8 */ 	addiu	$a0,$a0,4088
/*     14a4:	8c9d0000 */ 	lw	$sp,0x0($a0)
/*     14a8:	3c088000 */ 	lui	$t0,0x8000
/*     14ac:	02284025 */ 	or	$t0,$s1,$t0
/*     14b0:	25090ff0 */ 	addiu	$t1,$t0,0xff0
.L000014b4:
/*     14b4:	bd190000 */ 	cache	0x19,0x0($t0)
/*     14b8:	0109082b */ 	sltu	$at,$t0,$t1
/*     14bc:	1420fffd */ 	bnez	$at,.L000014b4
/*     14c0:	25080010 */ 	addiu	$t0,$t0,0x10
.L000014c4:
/*     14c4:	24080000 */ 	addiu	$t0,$zero,0x0
/*     14c8:	40882800 */ 	mtc0	$t0,$5
/*     14cc:	40955000 */ 	mtc0	$s5,$10
/*     14d0:	00000000 */ 	nop
/*     14d4:	00000000 */ 	nop
/*     14d8:	00000000 */ 	nop
/*     14dc:	42000008 */ 	tlbp
/*     14e0:	00000000 */ 	nop
/*     14e4:	00000000 */ 	nop
/*     14e8:	40090000 */ 	mfc0	$t1,$0
/*     14ec:	40882800 */ 	mtc0	$t0,$5
/*     14f0:	40955000 */ 	mtc0	$s5,$10
/*     14f4:	8e080000 */ 	lw	$t0,0x0($s0)
/*     14f8:	00084302 */ 	srl	$t0,$t0,0xc
/*     14fc:	00084180 */ 	sll	$t0,$t0,0x6
/*     1500:	55000001 */ 	bnezl	$t0,.L00001508
/*     1504:	3508001e */ 	ori	$t0,$t0,0x1e
.L00001508:
/*     1508:	40881000 */ 	mtc0	$t0,$2
/*     150c:	8e080008 */ 	lw	$t0,0x8($s0)
/*     1510:	00084302 */ 	srl	$t0,$t0,0xc
/*     1514:	00084180 */ 	sll	$t0,$t0,0x6
/*     1518:	55000001 */ 	bnezl	$t0,.L00001520
/*     151c:	3508001e */ 	ori	$t0,$t0,0x1e
.L00001520:
/*     1520:	40881800 */ 	mtc0	$t0,$3
/*     1524:	05220003 */ 	bltzl	$t1,.L00001534
/*     1528:	00000000 */ 	nop
/*     152c:	10000002 */ 	b	.L00001538
/*     1530:	42000002 */ 	tlbwi
.L00001534:
/*     1534:	42000006 */ 	tlbwr
.L00001538:
/*     1538:	15a0000b */ 	bnez	$t5,.L00001568
/*     153c:	00000000 */ 	nop
/*     1540:	02a04025 */ 	or	$t0,$s5,$zero
/*     1544:	57200001 */ 	bnezl	$t9,.L0000154c
/*     1548:	25081000 */ 	addiu	$t0,$t0,0x1000
.L0000154c:
/*     154c:	25090fe0 */ 	addiu	$t1,$t0,0xfe0
/*     1550:	310a001f */ 	andi	$t2,$t0,0x1f
/*     1554:	010a4023 */ 	subu	$t0,$t0,$t2
.L00001558:
/*     1558:	bd100000 */ 	cache	0x10,0x0($t0)
/*     155c:	0109082b */ 	sltu	$at,$t0,$t1
/*     1560:	1420fffd */ 	bnez	$at,.L00001558
/*     1564:	25080020 */ 	addiu	$t0,$t0,0x20
.L00001568:
/*     1568:	03e00008 */ 	jr	$ra
/*     156c:	00000000 */ 	nop
.L00001570:
/*     1570:	3c148009 */ 	lui	$s4,%hi(var8008ae24)
/*     1574:	8e94ae24 */ 	lw	$s4,%lo(var8008ae24)($s4)
/*     1578:	3c1c8009 */ 	lui	$gp,%hi(var80090b08)
/*     157c:	8f9c0b08 */ 	lw	$gp,%lo(var80090b08)($gp)
/*     1580:	40084800 */ 	mfc0	$t0,$9
/*     1584:	3c098009 */ 	lui	$t1,%hi(var8008d264+0x2)
/*     1588:	9529d266 */ 	lhu	$t1,%lo(var8008d264+0x2)($t1)
/*     158c:	3c0a8006 */ 	lui	$t2,%hi(var8005cf84)
/*     1590:	8d4acf84 */ 	lw	$t2,%lo(var8005cf84)($t2)
/*     1594:	01094024 */ 	and	$t0,$t0,$t1
/*     1598:	010a082a */ 	slt	$at,$t0,$t2
/*     159c:	50200001 */ 	beqzl	$at,.L000015a4
/*     15a0:	010a4023 */ 	subu	$t0,$t0,$t2
.L000015a4:
/*     15a4:	000848c0 */ 	sll	$t1,$t0,0x3
/*     15a8:	01344821 */ 	addu	$t1,$t1,$s4
.L000015ac:
/*     15ac:	8d310000 */ 	lw	$s1,0x0($t1)
/*     15b0:	16200006 */ 	bnez	$s1,.L000015cc
/*     15b4:	00000000 */ 	nop
/*     15b8:	25290008 */ 	addiu	$t1,$t1,8
/*     15bc:	153cfffb */ 	bne	$t1,$gp,.L000015ac
/*     15c0:	00000000 */ 	nop
/*     15c4:	0800056b */ 	j	0x15ac
/*     15c8:	02804825 */ 	or	$t1,$s4,$zero
.L000015cc:
/*     15cc:	01344023 */ 	subu	$t0,$t1,$s4
/*     15d0:	000840c2 */ 	srl	$t0,$t0,0x3
/*     15d4:	00084300 */ 	sll	$t0,$t0,0xc
/*     15d8:	011e4021 */ 	addu	$t0,$t0,$s8
/*     15dc:	240af000 */ 	addiu	$t2,$zero,-4096
/*     15e0:	010a4024 */ 	and	$t0,$t0,$t2
/*     15e4:	40885000 */ 	mtc0	$t0,$10
/*     15e8:	24080000 */ 	addiu	$t0,$zero,0x0
/*     15ec:	40882800 */ 	mtc0	$t0,$5
/*     15f0:	00000000 */ 	nop
/*     15f4:	00000000 */ 	nop
/*     15f8:	00000000 */ 	nop
/*     15fc:	42000008 */ 	tlbp
/*     1600:	00000000 */ 	nop
/*     1604:	00000000 */ 	nop
/*     1608:	400a0000 */ 	mfc0	$t2,$0
/*     160c:	40085000 */ 	mfc0	$t0,$10
/*     1610:	05400003 */ 	bltz	$t2,.L00001620
/*     1614:	00000000 */ 	nop
/*     1618:	0800055c */ 	j	0x1570
/*     161c:	00000000 */ 	nop
.L00001620:
/*     1620:	ad200000 */ 	sw	$zero,0x0($t1)
/*     1624:	0800049a */ 	j	0x1268
/*     1628:	00000000 */ 	nop
.L0000162c:
/*     162c:	08000ea2 */ 	j	0x3a88
/*     1630:	00000000 */ 	nop
);
#else
GLOBAL_ASM(
glabel func00001180
/*     1180:	40082000 */ 	mfc0	$t0,$4
/*     1184:	0008aa40 */ 	sll	$s5,$t0,0x9
/*     1188:	3c097f00 */ 	lui	$t1,0x7f00
/*     118c:	02a94022 */ 	sub	$t0,$s5,$t1
/*     1190:	00084302 */ 	srl	$t0,$t0,0xc
/*     1194:	000840c0 */ 	sll	$t0,$t0,0x3
/*     1198:	3c098009 */ 	lui	$t1,0x8009
/*     119c:	8d29d454 */ 	lw	$t1,-0x2bac($t1)
/*     11a0:	01098021 */ 	addu	$s0,$t0,$t1
/*     11a4:	3c1e7f00 */ 	lui	$s8,0x7f00
/*     11a8:	02be082a */ 	slt	$at,$s5,$s8
/*     11ac:	1420012e */ 	bnez	$at,.L00001668
/*     11b0:	00000000 */ 	nop
/*     11b4:	3c098009 */ 	lui	$t1,0x8009
/*     11b8:	8d2930f4 */ 	lw	$t1,0x30f4($t1)
/*     11bc:	02a9082a */ 	slt	$at,$s5,$t1
/*     11c0:	10200129 */ 	beqz	$at,.L00001668
/*     11c4:	00000000 */ 	nop
/*     11c8:	3c0a8009 */ 	lui	$t2,0x8009
/*     11cc:	254a30e4 */ 	addiu	$t2,$t2,0x30e4
/*     11d0:	8d4e0000 */ 	lw	$t6,0x0($t2)
/*     11d4:	25ce0001 */ 	addiu	$t6,$t6,0x1
/*     11d8:	ad4e0000 */ 	sw	$t6,0x0($t2)
/*     11dc:	40194000 */ 	mfc0	$t9,$8
/*     11e0:	0019cb02 */ 	srl	$t9,$t9,0xc
/*     11e4:	33390001 */ 	andi	$t9,$t9,0x1
/*     11e8:	53200002 */ 	beqzl	$t9,.L000011f4
/*     11ec:	8e110000 */ 	lw	$s1,0x0($s0)
/*     11f0:	8e110008 */ 	lw	$s1,0x8($s0)
.L000011f4:
/*     11f4:	562000bd */ 	bnezl	$s1,.L000014ec
/*     11f8:	240d0001 */ 	li	$t5,0x1
/*     11fc:	240d0000 */ 	li	$t5,0x0
/*     1200:	3c098009 */ 	lui	$t1,0x8009
/*     1204:	8d29f88c */ 	lw	$t1,-0x774($t1)
/*     1208:	3c0a8009 */ 	lui	$t2,0x8009
/*     120c:	8d4af890 */ 	lw	$t2,-0x770($t2)
.L00001210:
/*     1210:	91280000 */ 	lbu	$t0,0x0($t1)
/*     1214:	1100000a */ 	beqz	$t0,.L00001240
/*     1218:	00000000 */ 	nop
/*     121c:	240e0000 */ 	li	$t6,0x0
/*     1220:	240f0001 */ 	li	$t7,0x1
.L00001224:
/*     1224:	010fc024 */ 	and	$t8,$t0,$t7
/*     1228:	17000009 */ 	bnez	$t8,.L00001250
/*     122c:	00000000 */ 	nop
/*     1230:	25ce0001 */ 	addiu	$t6,$t6,0x1
/*     1234:	24010008 */ 	li	$at,0x8
/*     1238:	15c1fffa */ 	bne	$t6,$at,.L00001224
/*     123c:	000f7840 */ 	sll	$t7,$t7,0x1
.L00001240:
/*     1240:	152afff3 */ 	bne	$t1,$t2,.L00001210
/*     1244:	25290001 */ 	addiu	$t1,$t1,0x1
/*     1248:	08000566 */ 	j	0x1598
/*     124c:	00000000 */ 	nop
.L00001250:
/*     1250:	010f4026 */ 	xor	$t0,$t0,$t7
/*     1254:	a1280000 */ 	sb	$t0,0x0($t1)
/*     1258:	3c0a8009 */ 	lui	$t2,0x8009
/*     125c:	8d4af88c */ 	lw	$t2,-0x774($t2)
/*     1260:	3c118009 */ 	lui	$s1,0x8009
/*     1264:	8e31f898 */ 	lw	$s1,-0x768($s1)
/*     1268:	012a4823 */ 	subu	$t1,$t1,$t2
/*     126c:	000948c0 */ 	sll	$t1,$t1,0x3
/*     1270:	01c94021 */ 	addu	$t0,$t6,$t1
/*     1274:	00084300 */ 	sll	$t0,$t0,0xc
/*     1278:	02288821 */ 	addu	$s1,$s1,$t0
/*     127c:	3c0a8009 */ 	lui	$t2,0x8009
/*     1280:	254a30e8 */ 	addiu	$t2,$t2,0x30e8
/*     1284:	8d480000 */ 	lw	$t0,0x0($t2)
/*     1288:	25080001 */ 	addiu	$t0,$t0,0x1
/*     128c:	ad480000 */ 	sw	$t0,0x0($t2)
/*     1290:	400a4000 */ 	mfc0	$t2,$8
/*     1294:	3c0800ff */ 	lui	$t0,0xff
/*     1298:	3508f000 */ 	ori	$t0,$t0,0xf000
/*     129c:	01485024 */ 	and	$t2,$t2,$t0
/*     12a0:	000a5282 */ 	srl	$t2,$t2,0xa
/*     12a4:	3c088009 */ 	lui	$t0,0x8009
/*     12a8:	8d08d460 */ 	lw	$t0,-0x2ba0($t0)
/*     12ac:	010a4021 */ 	addu	$t0,$t0,$t2
/*     12b0:	8d0a0000 */ 	lw	$t2,0x0($t0)
/*     12b4:	8d080004 */ 	lw	$t0,0x4($t0)
/*     12b8:	010a4023 */ 	subu	$t0,$t0,$t2
/*     12bc:	2409fff0 */ 	li	$t1,-16
/*     12c0:	2508000f */ 	addiu	$t0,$t0,0xf
/*     12c4:	01097024 */ 	and	$t6,$t0,$t1
/*     12c8:	3c08a460 */ 	lui	$t0,0xa460
/*     12cc:	35080010 */ 	ori	$t0,$t0,0x10
.L000012d0:
/*     12d0:	8d090000 */ 	lw	$t1,0x0($t0)
/*     12d4:	31290003 */ 	andi	$t1,$t1,0x3
/*     12d8:	1520fffd */ 	bnez	$t1,.L000012d0
/*     12dc:	00000000 */ 	nop
/*     12e0:	3c16a430 */ 	lui	$s6,0xa430
/*     12e4:	8ed60008 */ 	lw	$s6,0x8($s6)
/*     12e8:	32d60010 */ 	andi	$s6,$s6,0x10
/*     12ec:	3c08a460 */ 	lui	$t0,0xa460
/*     12f0:	3c098009 */ 	lui	$t1,0x8009
/*     12f4:	8d29d45c */ 	lw	$t1,-0x2ba4($t1)
/*     12f8:	3c0f0fff */ 	lui	$t7,0xfff
/*     12fc:	35efffff */ 	ori	$t7,$t7,0xffff
/*     1300:	012f4824 */ 	and	$t1,$t1,$t7
/*     1304:	ad090000 */ 	sw	$t1,0x0($t0)
/*     1308:	3c08a460 */ 	lui	$t0,0xa460
/*     130c:	35080004 */ 	ori	$t0,$t0,0x4
/*     1310:	3c098000 */ 	lui	$t1,0x8000
/*     1314:	8d290308 */ 	lw	$t1,0x308($t1)
/*     1318:	012a4825 */ 	or	$t1,$t1,$t2
/*     131c:	3c0a1fff */ 	lui	$t2,0x1fff
/*     1320:	354affff */ 	ori	$t2,$t2,0xffff
/*     1324:	012a4824 */ 	and	$t1,$t1,$t2
/*     1328:	ad090000 */ 	sw	$t1,0x0($t0)
/*     132c:	3c08a460 */ 	lui	$t0,0xa460
/*     1330:	3508000c */ 	ori	$t0,$t0,0xc
/*     1334:	25ceffff */ 	addiu	$t6,$t6,-1
/*     1338:	ad0e0000 */ 	sw	$t6,0x0($t0)
/*     133c:	53200003 */ 	beqzl	$t9,.L0000134c
/*     1340:	00000000 */ 	nop
/*     1344:	50000002 */ 	beqzl	$zero,.L00001350
/*     1348:	ae110008 */ 	sw	$s1,0x8($s0)
.L0000134c:
/*     134c:	ae110000 */ 	sw	$s1,0x0($s0)
.L00001350:
/*     1350:	3c08a460 */ 	lui	$t0,0xa460
/*     1354:	35080010 */ 	ori	$t0,$t0,0x10
.L00001358:
/*     1358:	8d090000 */ 	lw	$t1,0x0($t0)
/*     135c:	31290003 */ 	andi	$t1,$t1,0x3
/*     1360:	1520fffd */ 	bnez	$t1,.L00001358
/*     1364:	00000000 */ 	nop
/*     1368:	3c088009 */ 	lui	$t0,0x8009
/*     136c:	8d08d45c */ 	lw	$t0,-0x2ba4($t0)
/*     1370:	25091000 */ 	addiu	$t1,$t0,0x1000
.L00001374:
/*     1374:	bd150000 */ 	cache	0x15,0x0($t0)
/*     1378:	0109082b */ 	sltu	$at,$t0,$t1
/*     137c:	1420fffd */ 	bnez	$at,.L00001374
/*     1380:	25080010 */ 	addiu	$t0,$t0,0x10
/*     1384:	16c00004 */ 	bnez	$s6,.L00001398
/*     1388:	00000000 */ 	nop
/*     138c:	24080002 */ 	li	$t0,0x2
/*     1390:	3c01a460 */ 	lui	$at,0xa460
/*     1394:	ac280010 */ 	sw	$t0,0x10($at)
.L00001398:
/*     1398:	3c048009 */ 	lui	$a0,0x8009
/*     139c:	2484d468 */ 	addiu	$a0,$a0,-11160
/*     13a0:	24840ff8 */ 	addiu	$a0,$a0,0xff8
/*     13a4:	ac9d0000 */ 	sw	$sp,0x0($a0)
/*     13a8:	249d0000 */ 	addiu	$sp,$a0,0x0
/*     13ac:	3c048009 */ 	lui	$a0,0x8009
/*     13b0:	8c84d45c */ 	lw	$a0,-0x2ba4($a0)
/*     13b4:	24840002 */ 	addiu	$a0,$a0,0x2
/*     13b8:	3c088000 */ 	lui	$t0,0x8000
/*     13bc:	02282825 */ 	or	$a1,$s1,$t0
/*     13c0:	3c068009 */ 	lui	$a2,0x8009
/*     13c4:	24c6e468 */ 	addiu	$a2,$a2,-7064
/*     13c8:	27bdff80 */ 	addiu	$sp,$sp,-128
/*     13cc:	afbf0000 */ 	sw	$ra,0x0($sp)
/*     13d0:	afa10004 */ 	sw	$at,0x4($sp)
/*     13d4:	afa20008 */ 	sw	$v0,0x8($sp)
/*     13d8:	afa3000c */ 	sw	$v1,0xc($sp)
/*     13dc:	afa40010 */ 	sw	$a0,0x10($sp)
/*     13e0:	afa50014 */ 	sw	$a1,0x14($sp)
/*     13e4:	afa60018 */ 	sw	$a2,0x18($sp)
/*     13e8:	afa7001c */ 	sw	$a3,0x1c($sp)
/*     13ec:	afa80020 */ 	sw	$t0,0x20($sp)
/*     13f0:	afa90024 */ 	sw	$t1,0x24($sp)
/*     13f4:	afaa0028 */ 	sw	$t2,0x28($sp)
/*     13f8:	afab002c */ 	sw	$t3,0x2c($sp)
/*     13fc:	afac0030 */ 	sw	$t4,0x30($sp)
/*     1400:	afad0034 */ 	sw	$t5,0x34($sp)
/*     1404:	afae0038 */ 	sw	$t6,0x38($sp)
/*     1408:	afaf003c */ 	sw	$t7,0x3c($sp)
/*     140c:	afb00040 */ 	sw	$s0,0x40($sp)
/*     1410:	afb10044 */ 	sw	$s1,0x44($sp)
/*     1414:	afb20048 */ 	sw	$s2,0x48($sp)
/*     1418:	afb3004c */ 	sw	$s3,0x4c($sp)
/*     141c:	afb40050 */ 	sw	$s4,0x50($sp)
/*     1420:	afb50054 */ 	sw	$s5,0x54($sp)
/*     1424:	afb60058 */ 	sw	$s6,0x58($sp)
/*     1428:	afb7005c */ 	sw	$s7,0x5c($sp)
/*     142c:	afb80060 */ 	sw	$t8,0x60($sp)
/*     1430:	afb90064 */ 	sw	$t9,0x64($sp)
/*     1434:	afbc0070 */ 	sw	$gp,0x70($sp)
/*     1438:	afbd0074 */ 	sw	$sp,0x74($sp)
/*     143c:	afbe0078 */ 	sw	$s8,0x78($sp)
/*     1440:	0c001da4 */ 	jal	0x7690
/*     1444:	00000000 */ 	nop
/*     1448:	8fbf0000 */ 	lw	$ra,0x0($sp)
/*     144c:	8fa10004 */ 	lw	$at,0x4($sp)
/*     1450:	8fa20008 */ 	lw	$v0,0x8($sp)
/*     1454:	8fa3000c */ 	lw	$v1,0xc($sp)
/*     1458:	8fa40010 */ 	lw	$a0,0x10($sp)
/*     145c:	8fa50014 */ 	lw	$a1,0x14($sp)
/*     1460:	8fa60018 */ 	lw	$a2,0x18($sp)
/*     1464:	8fa7001c */ 	lw	$a3,0x1c($sp)
/*     1468:	8fa80020 */ 	lw	$t0,0x20($sp)
/*     146c:	8fa90024 */ 	lw	$t1,0x24($sp)
/*     1470:	8faa0028 */ 	lw	$t2,0x28($sp)
/*     1474:	8fab002c */ 	lw	$t3,0x2c($sp)
/*     1478:	8fac0030 */ 	lw	$t4,0x30($sp)
/*     147c:	8fad0034 */ 	lw	$t5,0x34($sp)
/*     1480:	8fae0038 */ 	lw	$t6,0x38($sp)
/*     1484:	8faf003c */ 	lw	$t7,0x3c($sp)
/*     1488:	8fb00040 */ 	lw	$s0,0x40($sp)
/*     148c:	8fb10044 */ 	lw	$s1,0x44($sp)
/*     1490:	8fb20048 */ 	lw	$s2,0x48($sp)
/*     1494:	8fb3004c */ 	lw	$s3,0x4c($sp)
/*     1498:	8fb40050 */ 	lw	$s4,0x50($sp)
/*     149c:	8fb50054 */ 	lw	$s5,0x54($sp)
/*     14a0:	8fb60058 */ 	lw	$s6,0x58($sp)
/*     14a4:	8fb7005c */ 	lw	$s7,0x5c($sp)
/*     14a8:	8fb80060 */ 	lw	$t8,0x60($sp)
/*     14ac:	8fb90064 */ 	lw	$t9,0x64($sp)
/*     14b0:	8fbc0070 */ 	lw	$gp,0x70($sp)
/*     14b4:	8fbd0074 */ 	lw	$sp,0x74($sp)
/*     14b8:	8fbe0078 */ 	lw	$s8,0x78($sp)
/*     14bc:	27bd0080 */ 	addiu	$sp,$sp,0x80
/*     14c0:	3c048009 */ 	lui	$a0,0x8009
/*     14c4:	2484d468 */ 	addiu	$a0,$a0,-11160
/*     14c8:	24840ff8 */ 	addiu	$a0,$a0,0xff8
/*     14cc:	8c9d0000 */ 	lw	$sp,0x0($a0)
/*     14d0:	3c088000 */ 	lui	$t0,0x8000
/*     14d4:	02284025 */ 	or	$t0,$s1,$t0
/*     14d8:	25090ff0 */ 	addiu	$t1,$t0,0xff0
.L000014dc:
/*     14dc:	bd190000 */ 	cache	0x19,0x0($t0)
/*     14e0:	0109082b */ 	sltu	$at,$t0,$t1
/*     14e4:	1420fffd */ 	bnez	$at,.L000014dc
/*     14e8:	25080010 */ 	addiu	$t0,$t0,0x10
.L000014ec:
/*     14ec:	24080000 */ 	li	$t0,0x0
/*     14f0:	40882800 */ 	mtc0	$t0,$5
/*     14f4:	40955000 */ 	mtc0	$s5,$10
/*     14f8:	00000000 */ 	nop
/*     14fc:	00000000 */ 	nop
/*     1500:	00000000 */ 	nop
/*     1504:	42000008 */ 	tlbp
/*     1508:	00000000 */ 	nop
/*     150c:	00000000 */ 	nop
/*     1510:	40090000 */ 	mfc0	$t1,$0
/*     1514:	40882800 */ 	mtc0	$t0,$5
/*     1518:	40955000 */ 	mtc0	$s5,$10
/*     151c:	8e080000 */ 	lw	$t0,0x0($s0)
/*     1520:	00084302 */ 	srl	$t0,$t0,0xc
/*     1524:	00084180 */ 	sll	$t0,$t0,0x6
/*     1528:	55000001 */ 	bnezl	$t0,.L00001530
/*     152c:	3508001e */ 	ori	$t0,$t0,0x1e
.L00001530:
/*     1530:	40881000 */ 	mtc0	$t0,$2
/*     1534:	8e080008 */ 	lw	$t0,0x8($s0)
/*     1538:	00084302 */ 	srl	$t0,$t0,0xc
/*     153c:	00084180 */ 	sll	$t0,$t0,0x6
/*     1540:	55000001 */ 	bnezl	$t0,.L00001548
/*     1544:	3508001e */ 	ori	$t0,$t0,0x1e
.L00001548:
/*     1548:	40881800 */ 	mtc0	$t0,$3
/*     154c:	05220003 */ 	bltzl	$t1,.L0000155c
/*     1550:	00000000 */ 	nop
/*     1554:	10000002 */ 	b	.L00001560
/*     1558:	42000002 */ 	tlbwi
.L0000155c:
/*     155c:	42000006 */ 	tlbwr
.L00001560:
/*     1560:	15a0000b */ 	bnez	$t5,.L00001590
/*     1564:	00000000 */ 	nop
/*     1568:	02a04025 */ 	move	$t0,$s5
/*     156c:	57200001 */ 	bnezl	$t9,.L00001574
/*     1570:	25081000 */ 	addiu	$t0,$t0,0x1000
.L00001574:
/*     1574:	25090fe0 */ 	addiu	$t1,$t0,0xfe0
/*     1578:	310a001f */ 	andi	$t2,$t0,0x1f
/*     157c:	010a4023 */ 	subu	$t0,$t0,$t2
.L00001580:
/*     1580:	bd100000 */ 	cache	0x10,0x0($t0)
/*     1584:	0109082b */ 	sltu	$at,$t0,$t1
/*     1588:	1420fffd */ 	bnez	$at,.L00001580
/*     158c:	25080020 */ 	addiu	$t0,$t0,0x20
.L00001590:
/*     1590:	03e00008 */ 	jr	$ra
/*     1594:	00000000 */ 	nop
/*     1598:	3c088009 */ 	lui	$t0,0x8009
/*     159c:	250830ec */ 	addiu	$t0,$t0,0x30ec
/*     15a0:	8d090000 */ 	lw	$t1,0x0($t0)
/*     15a4:	25290001 */ 	addiu	$t1,$t1,0x1
/*     15a8:	ad090000 */ 	sw	$t1,0x0($t0)
/*     15ac:	3c148009 */ 	lui	$s4,0x8009
/*     15b0:	8e94d454 */ 	lw	$s4,-0x2bac($s4)
/*     15b4:	3c1c8009 */ 	lui	$gp,0x8009
/*     15b8:	8f9c30f8 */ 	lw	$gp,0x30f8($gp)
/*     15bc:	40084800 */ 	mfc0	$t0,$9
/*     15c0:	3c098009 */ 	lui	$t1,0x8009
/*     15c4:	9529f896 */ 	lhu	$t1,-0x76a($t1)
/*     15c8:	3c0a8006 */ 	lui	$t2,0x8006
/*     15cc:	8d4ae720 */ 	lw	$t2,-0x18e0($t2)
/*     15d0:	01094024 */ 	and	$t0,$t0,$t1
/*     15d4:	010a082a */ 	slt	$at,$t0,$t2
/*     15d8:	50200001 */ 	beqzl	$at,.L000015e0
/*     15dc:	010a4023 */ 	subu	$t0,$t0,$t2
.L000015e0:
/*     15e0:	000848c0 */ 	sll	$t1,$t0,0x3
/*     15e4:	01344821 */ 	addu	$t1,$t1,$s4
.L000015e8:
/*     15e8:	8d310000 */ 	lw	$s1,0x0($t1)
/*     15ec:	16200006 */ 	bnez	$s1,.L00001608
/*     15f0:	00000000 */ 	nop
/*     15f4:	25290008 */ 	addiu	$t1,$t1,0x8
/*     15f8:	153cfffb */ 	bne	$t1,$gp,.L000015e8
/*     15fc:	00000000 */ 	nop
/*     1600:	0800057a */ 	j	0x15e8
/*     1604:	02804825 */ 	move	$t1,$s4
.L00001608:
/*     1608:	01344023 */ 	subu	$t0,$t1,$s4
/*     160c:	000840c2 */ 	srl	$t0,$t0,0x3
/*     1610:	00084300 */ 	sll	$t0,$t0,0xc
/*     1614:	011e4021 */ 	addu	$t0,$t0,$s8
/*     1618:	240af000 */ 	li	$t2,-4096
/*     161c:	010a4024 */ 	and	$t0,$t0,$t2
/*     1620:	40885000 */ 	mtc0	$t0,$10
/*     1624:	24080000 */ 	li	$t0,0x0
/*     1628:	40882800 */ 	mtc0	$t0,$5
/*     162c:	00000000 */ 	nop
/*     1630:	00000000 */ 	nop
/*     1634:	00000000 */ 	nop
/*     1638:	42000008 */ 	tlbp
/*     163c:	00000000 */ 	nop
/*     1640:	00000000 */ 	nop
/*     1644:	400a0000 */ 	mfc0	$t2,$0
/*     1648:	40085000 */ 	mfc0	$t0,$10
/*     164c:	05400003 */ 	bltz	$t2,.L0000165c
/*     1650:	00000000 */ 	nop
/*     1654:	0800056b */ 	j	0x15ac
/*     1658:	00000000 */ 	nop
.L0000165c:
/*     165c:	ad200000 */ 	sw	$zero,0x0($t1)
/*     1660:	0800049f */ 	j	0x127c
/*     1664:	00000000 */ 	nop
.L00001668:
/*     1668:	08000f2a */ 	j	0x3ca8
/*     166c:	00000000 */ 	nop
);
#endif

GLOBAL_ASM(
glabel func00001634
/*     1634:	40085000 */ 	mfc0	$t0,$10
/*     1638:	3c0a8000 */ 	lui	$t2,0x8000
/*     163c:	408a5000 */ 	mtc0	$t2,$10
/*     1640:	40801000 */ 	mtc0	$zero,$2
/*     1644:	40801800 */ 	mtc0	$zero,$3
.L00001648:
/*     1648:	40850000 */ 	mtc0	$a1,$0
/*     164c:	00000000 */ 	nop
/*     1650:	42000002 */ 	tlbwi
/*     1654:	00000000 */ 	nop
/*     1658:	00000000 */ 	nop
/*     165c:	14a4fffa */ 	bne	$a1,$a0,.L00001648
/*     1660:	20a5ffff */ 	addi	$a1,$a1,-1
/*     1664:	40885000 */ 	mtc0	$t0,$10
/*     1668:	03e00008 */ 	jr	$ra
/*     166c:	00000000 */ 	nop
);

#if VERSION == VERSION_NTSC_BETA
GLOBAL_ASM(
glabel func000016acnb
/*     16ac:	3c088000 */ 	lui	$t0,0x8000
/*     16b0:	25091ff0 */ 	addiu	$t1,$t0,0x1ff0
.L000016b4:
/*     16b4:	bd010000 */ 	cache	0x1,0x0($t0)
/*     16b8:	0109082b */ 	sltu	$at,$t0,$t1
/*     16bc:	1420fffd */ 	bnez	$at,.L000016b4
/*     16c0:	25080010 */ 	addiu	$t0,$t0,0x10
/*     16c4:	03e00008 */ 	jr	$ra
/*     16c8:	00000000 */ 	nop
/*     16cc:	00000000 */ 	nop
);
#endif
