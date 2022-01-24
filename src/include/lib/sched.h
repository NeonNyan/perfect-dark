#ifndef _IN_BOOT_SCHED_H
#define _IN_BOOT_SCHED_H
#include <ultra64.h>
#include <sched.h>

void schedSetCrashEnable2(s32 enable);
void schedAppendTasks(OSSched *sc, OSScTask *t);
void __scHandleRetrace(OSSched *sc);
void __scHandleRSP(OSSched *sc);
void __scHandleRDP(OSSched *sc);
void __scHandleTasks(OSSched *sc);
void __scAppendList(OSSched *sc, OSScTask *t);
void __scExec(OSSched *sc, OSScTask *sp, OSScTask *dp);
void __scMain(void *arg);
void __scYield(OSSched *sc);
void bbufResetBuffers(void);
struct bootbufferthing *bbufGetIndex0Buffer(void);
struct bootbufferthing *bbufGetIndex1Buffer(void);
void bbufIncIndex0(void);
void bbufIncIndex1(void);
void bbufUpdateIndex2Buffer(void);
void schedConsiderScreenshot(void);

#endif
