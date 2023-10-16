#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <PR/ultratypes.h>
#include <PR/gbi.h>
#include "config.h"
#include "video.h"

#include "../fast3d/gfx_api.h"
#include "../fast3d/gfx_sdl.h"
#include "../fast3d/gfx_opengl.h"

static struct GfxWindowManagerAPI *wmAPI;
static struct GfxRenderingAPI *renderingAPI;

static bool initDone = false;

static u32 dlcount = 0;
static u32 frames = 0;
static u32 framesPerSec = 0;
static f64 startTime, endTime, fpsTime;
static u32 texFilter2D = 1;

s32 videoInit(void)
{
	wmAPI = &gfx_sdl;
	renderingAPI = &gfx_opengl_api;
	gfx_current_native_viewport.width = 320;
	gfx_current_native_viewport.height = 240;

	const s32 w = configGetInt("Video.DefaultWidth", 640);
	const s32 h = configGetInt("Video.DefaultHeight", 480);
	const bool fs = configGetInt("Video.DefaultFullscreen", false);

	gfx_msaa_level = configGetInt("Video.MSAA", 0);
	if (gfx_msaa_level < 1 || gfx_msaa_level > 16) {
		gfx_msaa_level = 1;
	}

	gfx_init(wmAPI, renderingAPI, "PD", fs, w, h, 100, 100);

	wmAPI->set_swap_interval(configGetInt("Video.VSync", 1));
	wmAPI->set_target_fps(configGetInt("Video.FramerateLimit", 0)); // disabled because vsync is on

	u32 filter = configGetInt("Video.TextureFilter", FILTER_LINEAR);
	if (filter > FILTER_THREE_POINT) filter = FILTER_THREE_POINT;
	renderingAPI->set_texture_filter((enum FilteringMode)filter);

	texFilter2D = configGetIntClamped("Video.TextureFilter2D", 1, 0, 1);

	initDone = true;
	return 0;
}

void videoStartFrame(void)
{
	if (initDone) {
		startTime = wmAPI->get_time();
		gfx_start_frame();
	}
}

void videoSubmitCommands(Gfx *cmds)
{
	if (initDone) {
		gfx_run(cmds);
		++dlcount;
	}
}

void videoEndFrame(void)
{
	if (!initDone) {
		return;
	}

	gfx_end_frame();

	endTime = wmAPI->get_time();

	++frames;
	++framesPerSec;

	if (endTime >= fpsTime) {
		char tmp[128];
		snprintf(tmp, sizeof(tmp), "fps %3u frt %lf frm %u", framesPerSec, endTime - startTime, frames);
		wmAPI->set_window_title(tmp);
		framesPerSec = 0;
		fpsTime = endTime + 1.0;
	}
}

void videoClearScreen(void)
{
	videoStartFrame();
	// TODO: clear
	videoEndFrame();
}

void *videoGetWindowHandle(void)
{
	if (initDone) {
		return wmAPI->get_window_handle();
	}
	return NULL;
}

void videoUpdateNativeResolution(s32 w, s32 h)
{
	gfx_current_native_viewport.width = w;
	gfx_current_native_viewport.height = h;
}

s32 videoGetNativeWidth(void)
{
	return gfx_current_native_viewport.width;
}

s32 videoGetNativeHeight(void)
{
	return gfx_current_native_viewport.height;
}

s32 videoGetWidth(void)
{
	return gfx_current_dimensions.width;
}

s32 videoGetHeight(void)
{
	return gfx_current_dimensions.height;
}

f32 videoGetAspect(void)
{
	return gfx_current_dimensions.aspect_ratio;
}

u32 videoGetTextureFilter2D(void)
{
	return texFilter2D;
}

void videoSetWindowOffset(s32 x, s32 y)
{
	gfx_current_game_window_viewport.x = x;
	gfx_current_game_window_viewport.y = y;
}

s32 videoCreateFramebuffer(u32 w, u32 h, s32 upscale, s32 autoresize)
{
	return gfx_create_framebuffer(w, h, upscale, autoresize);
}

void videoSetFramebuffer(s32 target)
{
	return gfx_set_framebuffer(target, 1.f);
}

void videoResetFramebuffer(void)
{
	return gfx_reset_framebuffer();
}

void videoResizeFramebuffer(s32 target, u32 w, u32 h, s32 upscale, s32 autoresize)
{
	gfx_resize_framebuffer(target, w, h, upscale, autoresize);
}

void videoCopyFramebuffer(s32 dst, s32 src, s32 left, s32 top)
{
	gfx_copy_framebuffer(dst, src, left, top);
}

void videoResetTextureCache(void)
{
	gfx_texture_cache_clear();
}

void videoFreeCachedTexture(const void *texptr)
{
	gfx_texture_cache_delete(texptr);
}
