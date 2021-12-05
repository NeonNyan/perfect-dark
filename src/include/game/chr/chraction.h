#ifndef _IN_GAME_CHR_CHRACTION_H
#define _IN_GAME_CHR_CHRACTION_H
#include <ultra64.h>
#include "data.h"
#include "types.h"

extern struct attackanimconfig var800656c0[];
extern struct attackanimconfig var80065be0[];
extern struct attackanimconfig var800663d8[];
extern struct attackanimconfig g_AttackAnimHeavyWalk;
extern struct attackanimconfig g_AttackAnimHeavyRun;
extern struct attackanimconfig g_AttackAnimLightWalk;
extern struct attackanimconfig g_AttackAnimLightRun;
extern struct attackanimconfig g_AttackAnimDualWalk;
extern struct attackanimconfig g_AttackAnimDualRun;

f32 func0f02dff0(s16 animnum);
bool func0f02e064(struct chrdata *chr);
bool weaponIsOneHanded(struct prop *prop);
f32 chrGetRangedSpeed(struct chrdata *chr, f32 min, f32 max);
s32 chrGetPercentageOfSlowness(struct chrdata *chr, s32 percentage);
f32 chrGetRangedArghSpeed(struct chrdata *chr, f32 min, f32 max);
f32 chrGetAttackEntityRelativeAngle(struct chrdata *chr, s32 attackflags, s32 entityid);
f32 chrGetAttackEntityDistance(struct chrdata *chr, u32 attackflags, s32 entityid);
void func0f02e3dc(struct coord *a, struct coord *b, struct coord *c, struct coord *d, struct coord *dst);
void func0f02e4f8(struct coord *arg0, struct coord *arg1, struct coord *dst);
f32 func0f02e550(struct prop *prop, f32 arg1, f32 arg2, u32 arg3, f32 ymax, f32 ymin);
f32 func0f02e684(struct prop *prop, f32 arg1, f32 arg2);
void chrStandChooseAnimation(struct chrdata *chr, f32 mergetime);
void chrStand(struct chrdata *chr);
bool chrFaceCover(struct chrdata *chr);
void chrKneelChooseAnimation(struct chrdata *chr);
void chrStartAlarmChooseAnimation(struct chrdata *chr);
void chrThrowGrenadeChooseAnimation(struct chrdata *chr);
void chrSurprisedChooseAnimation(struct chrdata *chr);
void chrDoSurprisedOneHand(struct chrdata *chr);
void chrSurrenderChooseAnimation(struct chrdata *chr);
void chrSidestepChooseAnimation(struct chrdata *chr);
void chrJumpOutChooseAnimation(struct chrdata *chr);
void chrRunPosChooseAnimation(struct chrdata *chr);
void chrAttackStand(struct chrdata *chr, u32 attackflags, s32 entityid);
void chrAttackLie(struct chrdata *chr, u32 attackflags, s32 entityid);
void chrAttackKneel(struct chrdata *chr, u32 attackflags, s32 entityid);
void chrAttackWalkChooseAnimation(struct chrdata *chr);
void chrAttackWalk(struct chrdata *chr, bool run);
void chrAttackRollChooseAnimation(struct chrdata *chr);
void chrAttackRoll(struct chrdata *chr, bool toleft);
void chrStartAnim(struct chrdata *chr, s32 animnum, f32 startframe, f32 endframe, u8 chranimflags, s32 merge, f32 speed);
void func0f031254(struct chrdata *chr);
void chrAttack(struct chrdata *chr, struct attackanimgroup **animgroups, bool flip, bool *firing, u32 attackflags, s32 entityid, bool standing);
void chrAttackAmount(struct chrdata *chr, u32 attackflags, u32 entityid, u32 maxshots);
void chrBeginDeath(struct chrdata *chr, struct coord *dir, f32 relangle, s32 hitpart, struct gset *gset, bool knockout, s32 aplayernum);
void chrBeginArgh(struct chrdata *chr, f32 angle, s32 hitpart);
void chrReactToDamage(struct chrdata *chr, struct coord *dir, f32 angle, s32 hitpart, struct gset *gset, s32 playernum);
void chrYeetFromPos(struct chrdata *chr, struct coord *pos, f32 arg2);
s32 gsetGetBlurAmount(struct gset *gset);
void chrKnockOut(struct chrdata *chr, f32 angle, s32 hitpart, struct gset *gset);
bool chrIsAnimPreventingArgh(struct chrdata *chr, f32 *arg1);
void chrChoke(struct chrdata *chr, s32 choketype);
void chrSetShield(struct chrdata *chr, f32 shield);
bool func0f034080(struct chrdata *chr, struct modelnode *node, struct prop *prop, struct model *model, s32 side, s16 *arg5);
void chrDamageByMisc(struct chrdata *chr, f32 damage, struct coord *vector, struct gset *gset, struct prop *prop);
void chrDamageByLaser(struct chrdata *chr, f32 damage, struct coord *vector, struct gset *gset, struct prop *prop);
void func0f0341dc(struct chrdata *chr, f32 damage, struct coord *vector, struct gset *gset, struct prop *prop, u32 hitpart, struct prop *prop2, struct modelnode *node, struct model *model, s32 side, s16 *arg10);
void chrDamageByImpact(struct chrdata *chr, f32 damage, struct coord *vector, struct gset *gset, struct prop *prop, s32 arg5);
void chrDamageByExplosion(struct chrdata *chr, f32 damage, struct coord *vector, struct prop *prop, struct coord *explosionpos);
void playerUpdateDamageStats(struct prop *attacker, struct prop *victim, f32 damage);
void chrDamage(struct chrdata *chr, f32 damage, struct coord *vector, struct gset *gset, struct prop *aprop, s32 hitpart, bool damageshield, struct prop *prop2, struct modelnode *node, struct model *model, s32 side, s16 *arg11, bool explosion, struct coord *explosionpos);
bool func0f03645c(struct chrdata *chr, struct coord *arg1, s16 *arg2, struct coord *arg3, struct coord *arg4, s32 arg5);
bool func0f03654c(struct chrdata *chr, struct coord *pos, s16 *rooms, struct coord *pos2, s16 *rooms2, struct coord *vector, f32 arg6, u32 types);
bool propchrHasClearLineToPos(struct prop *prop, struct coord *dstpos, struct coord *vector);
bool propchrHasClearLineInVector(struct prop *prop, struct coord *coord, f32 arg2);
bool func0f036974(struct prop *prop, struct coord *coord);
void chrGetSideVectorToTarget(struct chrdata *chr, bool side, struct coord *vector);
bool chrCanRollInDirection(struct chrdata *chr, bool toleft, f32 distance);
void chrGetSideVector(struct chrdata *chr, bool side, struct coord *vector);
bool chrCanJumpInDirection(struct chrdata *chr, bool side, f32 distance);
s32 func0f036c08(struct chrdata *chr, struct coord *arg1, s16 *rooms);
void chrGoPosInitMagic(struct chrdata *chr, struct waydata *waydata, struct coord *arg2, struct coord *prevpos);
void chrGoPosGetCurWaypointInfoWithFlags(struct chrdata *chr, struct coord *pos, s16 *rooms, u32 *flags);
f32 func0f0370a8(struct chrdata *chr);
s32 chrGoPosCalculateBaseTtl(struct chrdata *chr);
void chrGoPosConsiderRestart(struct chrdata *chr);
void chrGoPosInitExpensive(struct chrdata *chr);
void chrGoPosAdvanceWaypoint(struct chrdata *chr);
s32 chrPatrolCalculateStep(struct chrdata *chr, bool *forward, s32 numsteps);
s16 chrPatrolCalculatePadNum(struct chrdata *chr, s32 numsteps);
void chrPatrolGetCurWaypointInfoWithFlags(struct chrdata *chr, struct coord *pos, s16 *rooms, u32 *flags);
void func0f037580(struct chrdata *chr);
void func0f0375b0(struct chrdata *chr);
void chrGoPosTickMagic(struct chrdata *chr, struct waydata *waydata, f32 speed, struct coord *arg3, s16 *rooms);
void chrCalculatePosition(struct chrdata *chr, struct coord *pos);
void chrGoPosChooseAnimation(struct chrdata *chr);
bool chrGoToPos(struct chrdata *chr, struct coord *pos, s16 *rooms, u32 flags);
void chrPatrolChooseAnimation(struct chrdata *chr);
void chrStartPatrol(struct chrdata *chr, struct path *path);
bool chrCanSeeEntity(struct chrdata *chr, struct coord *chrpos, s16 *chrrooms, bool allowextraheight, u32 attackflags, u32 entityid);
bool chrCanSeeAttackTarget(struct chrdata *chr, struct coord *pos, s16 *rooms, bool allowextraheight);
bool chrCanSeeChr(struct chrdata *chr, struct chrdata *target, s16 *room);
bool chrHasLineOfSightToPos(struct chrdata *viewerchr, struct coord *pos, s16 *rooms);
bool chrCanSeePos(struct chrdata *chr, struct coord *pos, s16 *room);
bool chrCanSeeProp(struct chrdata *chr, struct prop *prop);
bool chrIsStopped(struct chrdata *chr);
bool chrCheckTargetInSight(struct chrdata *chr);
bool chrIsReadyForOrders(struct chrdata *chr);
bool chrTrySidestep(struct chrdata *chr);
bool chrTryJumpOut(struct chrdata *chr);
bool chrTryRunSideways(struct chrdata *chr);
bool chrTryAttackWalk(struct chrdata *chr);
bool chrTryAttackRun(struct chrdata *chr);
bool chrTryAttackRoll(struct chrdata *chr);
bool chrTryAttackAmount(struct chrdata *chr, u32 arg1, u32 arg2, u8 arg3, u8 arg4);
bool chrGoToPad(struct chrdata *chr, s32 padnum, u32 speed);
bool func0f03abd0(struct chrdata *chr, struct coord *pos, u32 flags);
s32 func0f03aca0(struct chrdata *chr, f32 arg1, u8 arg2);
bool chrTryRunFromTarget(struct chrdata *chr);
bool chrGoToCoverProp(struct chrdata *chr);
bool chrDropItem(struct chrdata *chr, u32 modelnum, u32 weaponnum);
void chrPunchInflictDamage(struct chrdata *chr, s32 damage, s32 range, u8 reverse);
bool chrTryPunch(struct chrdata *chr, u8 reverse);
struct eyespy *chrToEyespy(struct chrdata *chr);
void chrTickStand(struct chrdata *chr);
void chrTickAnim(struct chrdata *chr);
void chrTickSurrender(struct chrdata *chr);
void chrTickDead(struct chrdata *chr);
void chrAlertOthersOfInjury(struct chrdata *chr, bool dying);
void chrTickDie(struct chrdata *chr);
void chrTickDruggedComingUp(struct chrdata *chr);
void chrTickDruggedDrop(struct chrdata *chr);
void chrTickDruggedKo(struct chrdata *chr);
void chrTickArgh(struct chrdata *chr);
void chrTickPreArgh(struct chrdata *chr);
void chrTickSidestep(struct chrdata *chr);
void chrTickJumpOut(struct chrdata *chr);
void chrTickStartAlarm(struct chrdata *chr);
void chrTickSurprised(struct chrdata *chr);
void chrCreateFireslot(struct chrdata *chr, s32 handnum, bool withsound, bool withbeam, struct coord *from, struct coord *to);
f32 chrGetInverseTheta(struct chrdata *chr);
f32 chrGetAimAngle(struct chrdata *chr);
f32 func0f03e754(struct chrdata *chr);
s32 chrTurn(struct chrdata *chr, s32 turning, f32 endanimframe, f32 speed, f32 toleranceangle);
bool func0f03e9f4(struct chrdata *chr, struct attackanimconfig *animcfg, s32 arg2, s32 arg3, f32 arg4);
void chrCalculateAimEndProperties(struct chrdata *chr, struct attackanimconfig *animcfg, bool hasleftgun, bool hasrightgun, f32 shootrotx);
f32 chrGetAimLimitAngle(f32 sqdist);
void chrCalculateHit(struct chrdata *chr, bool *angleokptr, bool *hit, struct gset *gset);
bool func0f03fde4(struct chrdata *chr, s32 handnum, struct coord *arg2);
void chrCalculateShieldHit(struct chrdata *chr, struct coord *pos, struct coord *vector, struct modelnode **node, s32 *hitpart, struct model **model, s32 *side);
void func0f04031c(struct coord *coord, f32 arg1, struct coord *coord2, f32 *arg3);
void func0f0404d4(struct chrdata *chr, s32 arg1);
void func0f041a74(struct chrdata *chr);
bool func0f041c44(struct chrdata *chr);
void chrAttackAmountUpdateAnimation(struct chrdata *chr);
void chrTickFire(struct chrdata *chr);
void chrTickAttackAmount(struct chrdata *chr);
void robotSetMuzzleFlash(struct chrdata *chr, bool right, bool enabled);
void robotAttack(struct chrdata *chr);
void chrTickRobotAttack(struct chrdata *chr);
void chrTickAttack(struct chrdata *chr);
void chrTickAttackRoll(struct chrdata *chr);
void propPrintDangerous(void);
void chrTickThrowGrenade(struct chrdata *chr);
bool func0f043f2c(struct chrdata *chr, struct coord *runpos, u32 arg2, f32 *turnspeed);
void chrTickAttackWalk(struct chrdata *chr);
bool posIsMovingTowardsPosOrStoppedInRange(struct coord *prevpos, struct coord *moveddelta, struct coord *targetpos, f32 range);
bool posIsArrivingLaterallyAtPos(struct coord *prevpos, struct coord *curpos, struct coord *targetpos, f32 range);
bool posIsArrivingAtPos(struct coord *prevpos, struct coord *curpos, struct coord *targetpos, f32 range);
void chrTickRunPos(struct chrdata *chr);
void func0f044b68(struct coord *arg0, struct coord *arg1, struct coord *arg2);
u32 func0f044c38(void);
u32 func0f0451a8(void);
u32 func0f045760(void);
struct prop *chrOpenDoor(struct chrdata *chr, struct coord *coord);
void func0f045b9c(struct chrdata *chr, struct coord *pos, struct waydata *waydata, bool arg3);
bool goPosUpdateLiftAction(struct chrdata *chr, u32 curpadflags, bool arg2, bool arrivingatlift, s16 curpadnum, s32 nextpadnum);
s16 chrGoPosGetNextPadNum(struct chrdata *chr);
void chrTickGoPos(struct chrdata *chr);
void chrTickPatrol(struct chrdata *chr);
bool chrStartSkJump(struct chrdata *chr, u8 arg1, u8 arg2, s32 arg3, u8 arg4);
void chrTickSkJump(struct chrdata *chr);
void chraTick(struct chrdata *chr);
void cutsceneStart(u32 ailistid);
void func0f048398(void);
f32 chrGetAngleToPos(struct chrdata *chr, struct coord *pos);
void chrGetAttackEntityPos(struct chrdata *chr, u32 attackflags, s32 entityid, struct coord *pos, s16 *rooms);
f32 chrGetAngleFromTargetsFov(struct chrdata *chr);
f32 chrGetVerticalAngleToTarget(struct chrdata *chr);
bool chrIsInTargetsFovX(struct chrdata *chr, u8 fov360);
bool chrIsVerticalAngleToTargetWithin(struct chrdata *chr, u8 arg1);
f32 func0f048fcc(struct chrdata *chr, u8 reverse);
bool chrIsTargetInFov(struct chrdata *chr, u8 arg1, u8 reverse);
bool func0f04911c(struct chrdata *chr, struct coord *pos, u8 arg2);
f32 chrGetSameFloorDistanceToPad(struct chrdata *chr, s32 pad_id);
void chrsClearRefsToPlayer(s32 playernum);
s32 chrResolveId(struct chrdata *ref, s32 id);
f32 chrGetTimer(struct chrdata *chr);
bool chrCanSeeTargetWithExtraCheck(struct chrdata *chr);
bool chrSawInjury(struct chrdata *chr, u8 arg1);
bool chrSawDeath(struct chrdata *chr, u8 arg1);
bool waypointIsWithin90DegreesOfPosAngle(struct waypoint *waypoint, struct coord *pos, f32 angle);
s32 chrFindWaypointWithinPosQuadrant(struct coord *pos, s16 *rooms, f32 angle, u8 quadrant);
bool func0f04a4ec(struct chrdata *chr, u8 quadrant);
bool chrSetPadPresetToWaypointWithinTargetQuadrant(struct chrdata *chr, u8 arg1);
bool chrSetChrPresetToChrNearPad(u32 checktype, struct chrdata *chr, f32 distance, s32 padnum);
bool chrSetChrPresetToChrNearPos(u8 checktype, struct chrdata *chr, f32 distance, struct coord *pos, s16 *room);
bool chrSetPadPresetToPadOnRouteToTarget(struct chrdata *chr);
bool func0f04aeb0(struct coord *pos, s16 *rooms);

#if VERSION >= VERSION_NTSC_1_0
bool chrAdjustPosForSpawn(f32 chrwidth, struct coord *pos, s16 *rooms, f32 angle, bool arg4, bool arg5, bool arg6);
#else
bool chrAdjustPosForSpawn(f32 chrwidth, struct coord *pos, s16 *rooms, f32 angle, bool arg4, bool arg5);
#endif

struct prop *chrSpawnAtCoord(s32 body, s32 head, struct coord *pos, s16 *room, f32 angle, u8 *ailist, u32 spawnflags);
bool func0f04b658(struct chrdata *chr);
bool chrMoveToPos(struct chrdata *chr, struct coord *pos, s16 *room, f32 angle, bool allowonscreen);
bool chrCheckCoverOutOfSight(struct chrdata *chr, s32 covernum, bool arg2);
s32 chrAssignCoverByCriteria(struct chrdata *chr, u16 arg1, s32 arg2);
s32 chrAssignCoverAwayFromDanger(struct chrdata *chr, s32 mindist, s32 maxdist);
bool chrRunFromPos(struct chrdata *chr, u32 speed, f32 distance, struct coord *frompos);
f32 func0f04c784(struct chrdata *chr);
bool func0f04c874(struct chrdata *chr, u32 angle360, struct coord *pos, u8 arg3, u8 arg4);
void rebuildTeams(void);
void rebuildSquadrons(void);
void chrAvoid(struct chrdata *chr);
void func0f02e9a0(struct chrdata *chr, f32 mergetime);
void func0f02ed28(struct chrdata *chr, f32 mergetime);
void chrStop(struct chrdata *chr);
void chrKneel(struct chrdata *chr);
void chrStartAlarm(struct chrdata *chr);
void chrThrowGrenade(struct chrdata *chr, s32 arg1, s32 arg2);
void chrDoSurprisedSurrender(struct chrdata *chr);
void chrDoSurprisedLookAround(struct chrdata *chr);
void chrSurrender(struct chrdata *chr);
void chrSidestep(struct chrdata *chr, bool side);
void chrJumpOut(struct chrdata *chr, bool side);
void chrRunToPos(struct chrdata *chr, struct coord *pos);
void chrBeginDead(struct chrdata *chr);
f32 chrGetShield(struct chrdata *chr);
void chrDie(struct chrdata *chr, s32 aplayernum);
void chrGoPosGetCurWaypointInfo(struct chrdata *chr, struct coord *pos, s16 *rooms);
void chrGoPosClearRestartTtl(struct chrdata *chr);
void chrPatrolGetCurWaypointInfo(struct chrdata *chr, struct coord *pos, s16 *rooms);
struct path *pathFindById(u32 path_id);
void chrRecordLastVisibleTargetTime(struct chrdata *chr);
bool chrCanSeeTarget(struct chrdata *chr);
void chrRecordLastSeeTargetTime(struct chrdata *chr);
void chrRecordLastHearTargetTime(struct chrdata *chr);
bool chrIsDead(struct chrdata *chr);
bool chrTryAttackStand(struct chrdata *chr, u32 attackflags, s32 entityid);
bool chrTryAttackKneel(struct chrdata *chr, u32 attackflags, s32 entityid);
bool chrTryAttackLie(struct chrdata *chr, u32 attackflags, s32 entityid);
bool chrTryModifyAttack(struct chrdata *chr, u32 attackflags, s32 entityid);
bool chrFaceEntity(struct chrdata *chr, u32 attackflags, s32 entityid);
bool chrSetPath(struct chrdata *chr, u32 path_id);
bool chrTryStartPatrol(struct chrdata *chr);
bool chrTrySurrender(struct chrdata *chr);
bool chrFadeOut(struct chrdata *chr);
bool chrGoToTarget(struct chrdata *chr, u32 speed);
bool chrGoToChr(struct chrdata *chr, u32 dst_chrnum, u32 speed);
bool chrGoToProp(struct chrdata *chr, struct prop *prop, s32 speed);
bool chrTryStop(struct chrdata *chr);
bool chrTrySurprisedOneHand(struct chrdata *chr);
bool chrTrySurprisedSurrender(struct chrdata *chr);
bool chrTrySurprisedLookAround(struct chrdata *chr);
bool chrTryKneel(struct chrdata *chr);
bool chrTryStartAnim(struct chrdata *chr, s32 animnum, f32 startframe, f32 endframe, u8 chranimflags, s32 merge, f32 speed);
bool chrTryStartAlarm(struct chrdata *chr, s32 pad_id);
s32 chrConsiderGrenadeThrow(struct chrdata *chr, u32 attackflags, u32 entityid);
void chrTickKneel(struct chrdata *chr);
void chrFadeCorpse(struct chrdata *chr);
void chrFadeCorpseWhenOffScreen(struct chrdata *chr);
void chrTickTest(struct chrdata *chr);
void chrSetLookAngle(struct chrdata *chr, f32 angle);
f32 func0f03e578(struct chrdata *chr);
void func0f03e5b0(struct chrdata *chr, f32 arg1);
void chrResetAimEndProperties(struct chrdata *chr);
void chrSetFiring(struct chrdata *chr, s32 hand, bool firing);
void chrStopFiring(struct chrdata *chr);
void chrSetHandFiring(struct chrdata *chr, s32 hand, bool arg2);
void func0f0429d8(struct chrdata *chr, f32 arg1, f32 arg2);
void propUnsetDangerous(struct prop *prop);
void propSetDangerous(struct prop *prop);
bool chrDetectDangerousObject(struct chrdata *chr, u8 flags);
void chrTickBondDie(struct chrdata *chr);
s32 chrIsUsingLift(struct chrdata *chr);
bool chrTrySkJump(struct chrdata *chr, u8 arg1, u8 arg2, s32 arg3, u8 arg4);
bool chrSawTargetRecently(struct chrdata *chr);
bool chrHeardTargetRecently(struct chrdata *chr);
f32 chrGetAngleToTarget(struct chrdata *chr);
f32 chrGetDistanceToTarget(struct chrdata *chr);
f32 chrGetDistanceToTarget2(struct chrdata *chr);
f32 chrGetDistanceToCurrentPlayer(struct chrdata *chr);
f32 propGetDistanceToProp(struct prop *a, struct prop *b);
f32 propGetLateralDistanceToProp(struct prop *a, struct prop *b);
f32 chrGetDistanceToPad(struct chrdata *chr, s32 pad_id);
f32 chrGetDistanceToCoord(struct chrdata *chr, struct coord *pos);
f32 chrGetLateralDistanceToCoord(struct chrdata *chr, struct coord *pos);
f32 chrGetLateralDistanceToPad(struct chrdata *chr, s32 pad_id);
f32 chrGetSquaredDistanceToCoord(struct chrdata *chr, struct coord *pos);
f32 coordGetSquaredDistanceToCoord(struct coord *a, struct coord *b);
s32 chrGetPadRoom(struct chrdata *chr, s32 pad_id);
s32 chrResolvePadId(struct chrdata *chr, s32 pad_id);
struct chrdata *chrFindById(struct chrdata *data, s32 chrnum);
s32 propGetIndexByChrId(struct chrdata *chr, s32 chrnum);
f32 chrGetDistanceToChr(struct chrdata *chr1, s32 chr2num);
f32 chrGetDistanceFromTargetToPad(struct chrdata *chr, s32 pad_id);
void chrSetFlags(struct chrdata *chr, u32 flags, u8 bank);
void chrUnsetFlags(struct chrdata *chr, u32 flags, u8 bank);
bool chrHasFlag(struct chrdata *chr, u32 flag, u8 bank);
void chrSetFlagsById(struct chrdata *ref, u32 chrnum, u32 flags, u32 bank);
void chrUnsetFlagsById(struct chrdata *ref, u32 chrnum, u32 flags, u32 bank);
bool chrHasFlagById(struct chrdata *ref, u32 chrnum, u32 flag, u32 bank);
void chrSetStageFlag(struct chrdata *chr, u32 flag);
void chrUnsetStageFlag(struct chrdata *chr, u32 flag);
bool chrHasStageFlag(struct chrdata *chr, u32 flag);
bool chrIsHearingTarget(struct chrdata *chr);
void chrRestartTimer(struct chrdata *chr);
bool chrResetNearMiss(struct chrdata *chr);
s32 chrGetNumArghs(struct chrdata *chr);
s32 chrGetNumCloseArghs(struct chrdata *chr);
void decrementByte(u8 *dst, u8 amount);
void incrementByte(u8 *dst, u8 amount);
bool chrCanHearAlarm(struct chrdata *chr);
bool chrSetChrPresetToAnyChrNearSelf(struct chrdata *chr, f32 distance);
bool chrSetChrPresetToChrNearSelf(u8 checktype, struct chrdata *chr, f32 distance);
bool chrCompareTeams(struct chrdata *chr1, struct chrdata *chr2, u8 checktype);
void chrSetChrPreset(struct chrdata *chr, s32 chrpreset);
void chrSetChrPresetByChrnum(struct chrdata *chr, s32 chrnum, s32 chrpreset);
void chrSetPadPreset(struct chrdata *chr, s32 pad_id);
void chrSetPadPresetByChrnum(struct chrdata *chr, s32 chrnum, s32 pad_id);
struct prop *chrSpawnAtPad(struct chrdata *chr, s32 body, s32 head, s32 pad, u8 *ailist, u32 spawnflags);
struct prop *chrSpawnAtChr(struct chrdata *basechr, s32 body, s32 head, u32 chrnum, u8 *ailist, u32 spawnflags);
s16 chrGoToCover(struct chrdata *chr, u8 speed);
void chrAddTargetToBdlist(struct chrdata *chr);
s32 chrGetDistanceLostToTargetInLastSecond(struct chrdata *chr);
bool chrIsTargetNearlyInSight(struct chrdata *chr, u32 distance);
bool chrIsNearlyInTargetsSight(struct chrdata *chr, u32 distance);
s16 *teamGetChrIds(s32 team_id);
s16 *squadronGetChrIds(s32 squadron_id);
void audioMarkAsRecentlyPlayed(s16 audioid);
bool audioWasNotPlayedRecently(s16 audioid);
void chrToggleModelPart(struct chrdata *chr, s32 partnum);
bool chrIsAvoiding(struct chrdata *chr);
void chrDrCarollEmitSparks(struct chrdata *chr);

#endif
