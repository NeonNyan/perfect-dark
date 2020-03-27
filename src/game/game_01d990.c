#include <ultra64.h>
#include "constants.h"
#include "game/data/data_000000.h"
#include "game/data/data_0083d0.h"
#include "game/data/data_00e460.h"
#include "game/data/data_0160b0.h"
#include "game/data/data_01a3a0.h"
#include "game/data/data_020df0.h"
#include "game/data/data_02da90.h"
#include "game/game_01d990.h"
#include "gvars/gvars.h"
#include "types.h"

void func0f01d990(void)
{
	var8007db80 += g_Vars.lvupdate240freal * var8007db84;

	if (var8007db80 > 4096) {
		var8007db80 -= 4096;
	}
}
