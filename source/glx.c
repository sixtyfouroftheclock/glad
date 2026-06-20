/**
 * SPDX-License-Identifier: (WTFPL OR CC0-1.0) AND Apache-2.0
 */
#include <glext/glx.h>

#ifdef GLEXT_GLX_COMPILE

#include <string.h>

#ifndef GLEXT_IMPL_UTIL_C_
#define GLEXT_IMPL_UTIL_C_

#ifdef _MSC_VER
#define GLEXT_IMPL_UTIL_SSCANF sscanf_s
#else
#define GLEXT_IMPL_UTIL_SSCANF sscanf
#endif

#endif /* GLEXT_IMPL_UTIL_C_ */

#ifdef __cplusplus
extern "C" {
#endif

int GLEXT_GLX_VERSION_1_0 = 0;
int GLEXT_GLX_VERSION_1_1 = 0;
int GLEXT_GLX_VERSION_1_2 = 0;
int GLEXT_GLX_VERSION_1_3 = 0;
int GLEXT_GLX_VERSION_1_4 = 0;
int GLEXT_GLX_3DFX_multisample = 0;
int GLEXT_GLX_AMD_gpu_association = 0;
int GLEXT_GLX_ARB_context_flush_control = 0;
int GLEXT_GLX_ARB_create_context = 0;
int GLEXT_GLX_ARB_create_context_no_error = 0;
int GLEXT_GLX_ARB_create_context_profile = 0;
int GLEXT_GLX_ARB_create_context_robustness = 0;
int GLEXT_GLX_ARB_fbconfig_float = 0;
int GLEXT_GLX_ARB_framebuffer_sRGB = 0;
int GLEXT_GLX_ARB_get_proc_address = 0;
int GLEXT_GLX_ARB_multisample = 0;
int GLEXT_GLX_ARB_robustness_application_isolation = 0;
int GLEXT_GLX_ARB_robustness_share_group_isolation = 0;
int GLEXT_GLX_ARB_vertex_buffer_object = 0;
int GLEXT_GLX_EXT_buffer_age = 0;
int GLEXT_GLX_EXT_context_priority = 0;
int GLEXT_GLX_EXT_create_context_es2_profile = 0;
int GLEXT_GLX_EXT_create_context_es_profile = 0;
int GLEXT_GLX_EXT_fbconfig_packed_float = 0;
int GLEXT_GLX_EXT_framebuffer_sRGB = 0;
int GLEXT_GLX_EXT_get_drawable_type = 0;
int GLEXT_GLX_EXT_import_context = 0;
int GLEXT_GLX_EXT_libglvnd = 0;
int GLEXT_GLX_EXT_no_config_context = 0;
int GLEXT_GLX_EXT_stereo_tree = 0;
int GLEXT_GLX_EXT_swap_control = 0;
int GLEXT_GLX_EXT_swap_control_tear = 0;
int GLEXT_GLX_EXT_texture_from_pixmap = 0;
int GLEXT_GLX_EXT_visual_info = 0;
int GLEXT_GLX_EXT_visual_rating = 0;
int GLEXT_GLX_INTEL_swap_event = 0;
int GLEXT_GLX_MESA_agp_offset = 0;
int GLEXT_GLX_MESA_copy_sub_buffer = 0;
int GLEXT_GLX_MESA_pixmap_colormap = 0;
int GLEXT_GLX_MESA_query_renderer = 0;
int GLEXT_GLX_MESA_release_buffers = 0;
int GLEXT_GLX_MESA_set_3dfx_mode = 0;
int GLEXT_GLX_MESA_swap_control = 0;
int GLEXT_GLX_NV_copy_buffer = 0;
int GLEXT_GLX_NV_copy_image = 0;
int GLEXT_GLX_NV_delay_before_swap = 0;
int GLEXT_GLX_NV_float_buffer = 0;
int GLEXT_GLX_NV_multigpu_context = 0;
int GLEXT_GLX_NV_multisample_coverage = 0;
int GLEXT_GLX_NV_present_video = 0;
int GLEXT_GLX_NV_robustness_video_memory_purge = 0;
int GLEXT_GLX_NV_swap_group = 0;
int GLEXT_GLX_NV_video_capture = 0;
int GLEXT_GLX_NV_video_out = 0;
int GLEXT_GLX_OML_swap_method = 0;
int GLEXT_GLX_OML_sync_control = 0;
int GLEXT_GLX_SGIS_blended_overlay = 0;
int GLEXT_GLX_SGIS_multisample = 0;
int GLEXT_GLX_SGIS_shared_multisample = 0;
int GLEXT_GLX_SGIX_fbconfig = 0;
int GLEXT_GLX_SGIX_hyperpipe = 0;
int GLEXT_GLX_SGIX_pbuffer = 0;
int GLEXT_GLX_SGIX_swap_barrier = 0;
int GLEXT_GLX_SGIX_swap_group = 0;
int GLEXT_GLX_SGIX_video_resize = 0;
int GLEXT_GLX_SGIX_visual_select_group = 0;
int GLEXT_GLX_SGI_cushion = 0;
int GLEXT_GLX_SGI_make_current_read = 0;
int GLEXT_GLX_SGI_swap_control = 0;
int GLEXT_GLX_SGI_video_sync = 0;
int GLEXT_GLX_SUN_get_transparent_index = 0;

PFNGLXBINDCHANNELTOWINDOWSGIXPROC glext_glXBindChannelToWindowSGIX = NULL;
PFNGLXBINDHYPERPIPESGIXPROC glext_glXBindHyperpipeSGIX = NULL;
PFNGLXBINDSWAPBARRIERNVPROC glext_glXBindSwapBarrierNV = NULL;
PFNGLXBINDSWAPBARRIERSGIXPROC glext_glXBindSwapBarrierSGIX = NULL;
PFNGLXBINDTEXIMAGEEXTPROC glext_glXBindTexImageEXT = NULL;
PFNGLXBINDVIDEOCAPTUREDEVICENVPROC glext_glXBindVideoCaptureDeviceNV = NULL;
PFNGLXBINDVIDEODEVICENVPROC glext_glXBindVideoDeviceNV = NULL;
PFNGLXBINDVIDEOIMAGENVPROC glext_glXBindVideoImageNV = NULL;
PFNGLXBLITCONTEXTFRAMEBUFFERAMDPROC glext_glXBlitContextFramebufferAMD = NULL;
PFNGLXCHANNELRECTSGIXPROC glext_glXChannelRectSGIX = NULL;
PFNGLXCHANNELRECTSYNCSGIXPROC glext_glXChannelRectSyncSGIX = NULL;
PFNGLXCHOOSEFBCONFIGPROC glext_glXChooseFBConfig = NULL;
PFNGLXCHOOSEFBCONFIGSGIXPROC glext_glXChooseFBConfigSGIX = NULL;
PFNGLXCHOOSEVISUALPROC glext_glXChooseVisual = NULL;
PFNGLXCOPYBUFFERSUBDATANVPROC glext_glXCopyBufferSubDataNV = NULL;
PFNGLXCOPYCONTEXTPROC glext_glXCopyContext = NULL;
PFNGLXCOPYIMAGESUBDATANVPROC glext_glXCopyImageSubDataNV = NULL;
PFNGLXCOPYSUBBUFFERMESAPROC glext_glXCopySubBufferMESA = NULL;
PFNGLXCREATEASSOCIATEDCONTEXTAMDPROC glext_glXCreateAssociatedContextAMD
  = NULL;
PFNGLXCREATEASSOCIATEDCONTEXTATTRIBSAMDPROC
glext_glXCreateAssociatedContextAttribsAMD = NULL;
PFNGLXCREATECONTEXTPROC glext_glXCreateContext = NULL;
PFNGLXCREATECONTEXTATTRIBSARBPROC glext_glXCreateContextAttribsARB = NULL;
PFNGLXCREATECONTEXTWITHCONFIGSGIXPROC glext_glXCreateContextWithConfigSGIX
  = NULL;
PFNGLXCREATEGLXPBUFFERSGIXPROC glext_glXCreateGLXPbufferSGIX = NULL;
PFNGLXCREATEGLXPIXMAPPROC glext_glXCreateGLXPixmap = NULL;
PFNGLXCREATEGLXPIXMAPMESAPROC glext_glXCreateGLXPixmapMESA = NULL;
PFNGLXCREATEGLXPIXMAPWITHCONFIGSGIXPROC glext_glXCreateGLXPixmapWithConfigSGIX
  = NULL;
PFNGLXCREATENEWCONTEXTPROC glext_glXCreateNewContext = NULL;
PFNGLXCREATEPBUFFERPROC glext_glXCreatePbuffer = NULL;
PFNGLXCREATEPIXMAPPROC glext_glXCreatePixmap = NULL;
PFNGLXCREATEWINDOWPROC glext_glXCreateWindow = NULL;
PFNGLXCUSHIONSGIPROC glext_glXCushionSGI = NULL;
PFNGLXDELAYBEFORESWAPNVPROC glext_glXDelayBeforeSwapNV = NULL;
PFNGLXDELETEASSOCIATEDCONTEXTAMDPROC glext_glXDeleteAssociatedContextAMD
  = NULL;
PFNGLXDESTROYCONTEXTPROC glext_glXDestroyContext = NULL;
PFNGLXDESTROYGLXPBUFFERSGIXPROC glext_glXDestroyGLXPbufferSGIX = NULL;
PFNGLXDESTROYGLXPIXMAPPROC glext_glXDestroyGLXPixmap = NULL;
PFNGLXDESTROYHYPERPIPECONFIGSGIXPROC glext_glXDestroyHyperpipeConfigSGIX
  = NULL;
PFNGLXDESTROYPBUFFERPROC glext_glXDestroyPbuffer = NULL;
PFNGLXDESTROYPIXMAPPROC glext_glXDestroyPixmap = NULL;
PFNGLXDESTROYWINDOWPROC glext_glXDestroyWindow = NULL;
PFNGLXENUMERATEVIDEOCAPTUREDEVICESNVPROC
glext_glXEnumerateVideoCaptureDevicesNV = NULL;
PFNGLXENUMERATEVIDEODEVICESNVPROC glext_glXEnumerateVideoDevicesNV = NULL;
PFNGLXFREECONTEXTEXTPROC glext_glXFreeContextEXT = NULL;
PFNGLXGETAGPOFFSETMESAPROC glext_glXGetAGPOffsetMESA = NULL;
PFNGLXGETCLIENTSTRINGPROC glext_glXGetClientString = NULL;
PFNGLXGETCONFIGPROC glext_glXGetConfig = NULL;
PFNGLXGETCONTEXTGPUIDAMDPROC glext_glXGetContextGPUIDAMD = NULL;
PFNGLXGETCONTEXTIDEXTPROC glext_glXGetContextIDEXT = NULL;
PFNGLXGETCURRENTASSOCIATEDCONTEXTAMDPROC
glext_glXGetCurrentAssociatedContextAMD = NULL;
PFNGLXGETCURRENTCONTEXTPROC glext_glXGetCurrentContext = NULL;
PFNGLXGETCURRENTDISPLAYPROC glext_glXGetCurrentDisplay = NULL;
PFNGLXGETCURRENTDISPLAYEXTPROC glext_glXGetCurrentDisplayEXT = NULL;
PFNGLXGETCURRENTDRAWABLEPROC glext_glXGetCurrentDrawable = NULL;
PFNGLXGETCURRENTREADDRAWABLEPROC glext_glXGetCurrentReadDrawable = NULL;
PFNGLXGETCURRENTREADDRAWABLESGIPROC glext_glXGetCurrentReadDrawableSGI = NULL;
PFNGLXGETFBCONFIGATTRIBPROC glext_glXGetFBConfigAttrib = NULL;
PFNGLXGETFBCONFIGATTRIBSGIXPROC glext_glXGetFBConfigAttribSGIX = NULL;
PFNGLXGETFBCONFIGFROMVISUALSGIXPROC glext_glXGetFBConfigFromVisualSGIX = NULL;
PFNGLXGETFBCONFIGSPROC glext_glXGetFBConfigs = NULL;
PFNGLXGETGPUIDSAMDPROC glext_glXGetGPUIDsAMD = NULL;
PFNGLXGETGPUINFOAMDPROC glext_glXGetGPUInfoAMD = NULL;
PFNGLXGETMSCRATEOMLPROC glext_glXGetMscRateOML = NULL;
PFNGLXGETPROCADDRESSPROC glext_glXGetProcAddress = NULL;
PFNGLXGETPROCADDRESSARBPROC glext_glXGetProcAddressARB = NULL;
PFNGLXGETSELECTEDEVENTPROC glext_glXGetSelectedEvent = NULL;
PFNGLXGETSELECTEDEVENTSGIXPROC glext_glXGetSelectedEventSGIX = NULL;
PFNGLXGETSWAPINTERVALMESAPROC glext_glXGetSwapIntervalMESA = NULL;
PFNGLXGETSYNCVALUESOMLPROC glext_glXGetSyncValuesOML = NULL;
PFNGLXGETTRANSPARENTINDEXSUNPROC glext_glXGetTransparentIndexSUN = NULL;
PFNGLXGETVIDEODEVICENVPROC glext_glXGetVideoDeviceNV = NULL;
PFNGLXGETVIDEOINFONVPROC glext_glXGetVideoInfoNV = NULL;
PFNGLXGETVIDEOSYNCSGIPROC glext_glXGetVideoSyncSGI = NULL;
PFNGLXGETVISUALFROMFBCONFIGPROC glext_glXGetVisualFromFBConfig = NULL;
PFNGLXGETVISUALFROMFBCONFIGSGIXPROC glext_glXGetVisualFromFBConfigSGIX = NULL;
PFNGLXHYPERPIPEATTRIBSGIXPROC glext_glXHyperpipeAttribSGIX = NULL;
PFNGLXHYPERPIPECONFIGSGIXPROC glext_glXHyperpipeConfigSGIX = NULL;
PFNGLXIMPORTCONTEXTEXTPROC glext_glXImportContextEXT = NULL;
PFNGLXISDIRECTPROC glext_glXIsDirect = NULL;
PFNGLXJOINSWAPGROUPNVPROC glext_glXJoinSwapGroupNV = NULL;
PFNGLXJOINSWAPGROUPSGIXPROC glext_glXJoinSwapGroupSGIX = NULL;
PFNGLXLOCKVIDEOCAPTUREDEVICENVPROC glext_glXLockVideoCaptureDeviceNV = NULL;
PFNGLXMAKEASSOCIATEDCONTEXTCURRENTAMDPROC
glext_glXMakeAssociatedContextCurrentAMD = NULL;
PFNGLXMAKECONTEXTCURRENTPROC glext_glXMakeContextCurrent = NULL;
PFNGLXMAKECURRENTPROC glext_glXMakeCurrent = NULL;
PFNGLXMAKECURRENTREADSGIPROC glext_glXMakeCurrentReadSGI = NULL;
PFNGLXNAMEDCOPYBUFFERSUBDATANVPROC glext_glXNamedCopyBufferSubDataNV = NULL;
PFNGLXQUERYCHANNELDELTASSGIXPROC glext_glXQueryChannelDeltasSGIX = NULL;
PFNGLXQUERYCHANNELRECTSGIXPROC glext_glXQueryChannelRectSGIX = NULL;
PFNGLXQUERYCONTEXTPROC glext_glXQueryContext = NULL;
PFNGLXQUERYCONTEXTINFOEXTPROC glext_glXQueryContextInfoEXT = NULL;
PFNGLXQUERYCURRENTRENDERERINTEGERMESAPROC
glext_glXQueryCurrentRendererIntegerMESA = NULL;
PFNGLXQUERYCURRENTRENDERERSTRINGMESAPROC
glext_glXQueryCurrentRendererStringMESA = NULL;
PFNGLXQUERYDRAWABLEPROC glext_glXQueryDrawable = NULL;
PFNGLXQUERYEXTENSIONPROC glext_glXQueryExtension = NULL;
PFNGLXQUERYEXTENSIONSSTRINGPROC glext_glXQueryExtensionsString = NULL;
PFNGLXQUERYFRAMECOUNTNVPROC glext_glXQueryFrameCountNV = NULL;
PFNGLXQUERYGLXPBUFFERSGIXPROC glext_glXQueryGLXPbufferSGIX = NULL;
PFNGLXQUERYHYPERPIPEATTRIBSGIXPROC glext_glXQueryHyperpipeAttribSGIX = NULL;
PFNGLXQUERYHYPERPIPEBESTATTRIBSGIXPROC glext_glXQueryHyperpipeBestAttribSGIX
  = NULL;
PFNGLXQUERYHYPERPIPECONFIGSGIXPROC glext_glXQueryHyperpipeConfigSGIX = NULL;
PFNGLXQUERYHYPERPIPENETWORKSGIXPROC glext_glXQueryHyperpipeNetworkSGIX = NULL;
PFNGLXQUERYMAXSWAPBARRIERSSGIXPROC glext_glXQueryMaxSwapBarriersSGIX = NULL;
PFNGLXQUERYMAXSWAPGROUPSNVPROC glext_glXQueryMaxSwapGroupsNV = NULL;
PFNGLXQUERYRENDERERINTEGERMESAPROC glext_glXQueryRendererIntegerMESA = NULL;
PFNGLXQUERYRENDERERSTRINGMESAPROC glext_glXQueryRendererStringMESA = NULL;
PFNGLXQUERYSERVERSTRINGPROC glext_glXQueryServerString = NULL;
PFNGLXQUERYSWAPGROUPNVPROC glext_glXQuerySwapGroupNV = NULL;
PFNGLXQUERYVERSIONPROC glext_glXQueryVersion = NULL;
PFNGLXQUERYVIDEOCAPTUREDEVICENVPROC glext_glXQueryVideoCaptureDeviceNV = NULL;
PFNGLXRELEASEBUFFERSMESAPROC glext_glXReleaseBuffersMESA = NULL;
PFNGLXRELEASETEXIMAGEEXTPROC glext_glXReleaseTexImageEXT = NULL;
PFNGLXRELEASEVIDEOCAPTUREDEVICENVPROC glext_glXReleaseVideoCaptureDeviceNV
  = NULL;
PFNGLXRELEASEVIDEODEVICENVPROC glext_glXReleaseVideoDeviceNV = NULL;
PFNGLXRELEASEVIDEOIMAGENVPROC glext_glXReleaseVideoImageNV = NULL;
PFNGLXRESETFRAMECOUNTNVPROC glext_glXResetFrameCountNV = NULL;
PFNGLXSELECTEVENTPROC glext_glXSelectEvent = NULL;
PFNGLXSELECTEVENTSGIXPROC glext_glXSelectEventSGIX = NULL;
PFNGLXSENDPBUFFERTOVIDEONVPROC glext_glXSendPbufferToVideoNV = NULL;
PFNGLXSET3DFXMODEMESAPROC glext_glXSet3DfxModeMESA = NULL;
PFNGLXSWAPBUFFERSPROC glext_glXSwapBuffers = NULL;
PFNGLXSWAPBUFFERSMSCOMLPROC glext_glXSwapBuffersMscOML = NULL;
PFNGLXSWAPINTERVALEXTPROC glext_glXSwapIntervalEXT = NULL;
PFNGLXSWAPINTERVALMESAPROC glext_glXSwapIntervalMESA = NULL;
PFNGLXSWAPINTERVALSGIPROC glext_glXSwapIntervalSGI = NULL;
PFNGLXUSEXFONTPROC glext_glXUseXFont = NULL;
PFNGLXWAITFORMSCOMLPROC glext_glXWaitForMscOML = NULL;
PFNGLXWAITFORSBCOMLPROC glext_glXWaitForSbcOML = NULL;
PFNGLXWAITGLPROC glext_glXWaitGL = NULL;
PFNGLXWAITVIDEOSYNCSGIPROC glext_glXWaitVideoSyncSGI = NULL;
PFNGLXWAITXPROC glext_glXWaitX = NULL;

static void
glext_glx_load_GLX_VERSION_1_0 (GLEXTuserptrloadfunc load, void* userptr) {
  if (!GLEXT_GLX_VERSION_1_0)
    return;
  glext_glXChooseVisual
    = (PFNGLXCHOOSEVISUALPROC)load (userptr, "glXChooseVisual");
  glext_glXCopyContext
    = (PFNGLXCOPYCONTEXTPROC)load (userptr, "glXCopyContext");
  glext_glXCreateContext
    = (PFNGLXCREATECONTEXTPROC)load (userptr, "glXCreateContext");
  glext_glXCreateGLXPixmap
    = (PFNGLXCREATEGLXPIXMAPPROC)load (userptr, "glXCreateGLXPixmap");
  glext_glXDestroyContext
    = (PFNGLXDESTROYCONTEXTPROC)load (userptr, "glXDestroyContext");
  glext_glXDestroyGLXPixmap
    = (PFNGLXDESTROYGLXPIXMAPPROC)load (userptr, "glXDestroyGLXPixmap");
  glext_glXGetConfig = (PFNGLXGETCONFIGPROC)load (userptr, "glXGetConfig");
  glext_glXGetCurrentContext
    = (PFNGLXGETCURRENTCONTEXTPROC)load (userptr, "glXGetCurrentContext");
  glext_glXGetCurrentDrawable
    = (PFNGLXGETCURRENTDRAWABLEPROC)load (userptr, "glXGetCurrentDrawable");
  glext_glXIsDirect = (PFNGLXISDIRECTPROC)load (userptr, "glXIsDirect");
  glext_glXMakeCurrent
    = (PFNGLXMAKECURRENTPROC)load (userptr, "glXMakeCurrent");
  glext_glXQueryExtension
    = (PFNGLXQUERYEXTENSIONPROC)load (userptr, "glXQueryExtension");
  glext_glXQueryVersion
    = (PFNGLXQUERYVERSIONPROC)load (userptr, "glXQueryVersion");
  glext_glXSwapBuffers
    = (PFNGLXSWAPBUFFERSPROC)load (userptr, "glXSwapBuffers");
  glext_glXUseXFont = (PFNGLXUSEXFONTPROC)load (userptr, "glXUseXFont");
  glext_glXWaitGL = (PFNGLXWAITGLPROC)load (userptr, "glXWaitGL");
  glext_glXWaitX = (PFNGLXWAITXPROC)load (userptr, "glXWaitX");
}
static void
glext_glx_load_GLX_VERSION_1_1 (GLEXTuserptrloadfunc load, void* userptr) {
  if (!GLEXT_GLX_VERSION_1_1)
    return;
  glext_glXGetClientString
    = (PFNGLXGETCLIENTSTRINGPROC)load (userptr, "glXGetClientString");
  glext_glXQueryExtensionsString = (PFNGLXQUERYEXTENSIONSSTRINGPROC)load (
    userptr, "glXQueryExtensionsString");
  glext_glXQueryServerString
    = (PFNGLXQUERYSERVERSTRINGPROC)load (userptr, "glXQueryServerString");
}
static void
glext_glx_load_GLX_VERSION_1_2 (GLEXTuserptrloadfunc load, void* userptr) {
  if (!GLEXT_GLX_VERSION_1_2)
    return;
  glext_glXGetCurrentDisplay
    = (PFNGLXGETCURRENTDISPLAYPROC)load (userptr, "glXGetCurrentDisplay");
}
static void
glext_glx_load_GLX_VERSION_1_3 (GLEXTuserptrloadfunc load, void* userptr) {
  if (!GLEXT_GLX_VERSION_1_3)
    return;
  glext_glXChooseFBConfig
    = (PFNGLXCHOOSEFBCONFIGPROC)load (userptr, "glXChooseFBConfig");
  glext_glXCreateNewContext
    = (PFNGLXCREATENEWCONTEXTPROC)load (userptr, "glXCreateNewContext");
  glext_glXCreatePbuffer
    = (PFNGLXCREATEPBUFFERPROC)load (userptr, "glXCreatePbuffer");
  glext_glXCreatePixmap
    = (PFNGLXCREATEPIXMAPPROC)load (userptr, "glXCreatePixmap");
  glext_glXCreateWindow
    = (PFNGLXCREATEWINDOWPROC)load (userptr, "glXCreateWindow");
  glext_glXDestroyPbuffer
    = (PFNGLXDESTROYPBUFFERPROC)load (userptr, "glXDestroyPbuffer");
  glext_glXDestroyPixmap
    = (PFNGLXDESTROYPIXMAPPROC)load (userptr, "glXDestroyPixmap");
  glext_glXDestroyWindow
    = (PFNGLXDESTROYWINDOWPROC)load (userptr, "glXDestroyWindow");
  glext_glXGetCurrentReadDrawable = (PFNGLXGETCURRENTREADDRAWABLEPROC)load (
    userptr, "glXGetCurrentReadDrawable");
  glext_glXGetFBConfigAttrib
    = (PFNGLXGETFBCONFIGATTRIBPROC)load (userptr, "glXGetFBConfigAttrib");
  glext_glXGetFBConfigs
    = (PFNGLXGETFBCONFIGSPROC)load (userptr, "glXGetFBConfigs");
  glext_glXGetSelectedEvent
    = (PFNGLXGETSELECTEDEVENTPROC)load (userptr, "glXGetSelectedEvent");
  glext_glXGetVisualFromFBConfig = (PFNGLXGETVISUALFROMFBCONFIGPROC)load (
    userptr, "glXGetVisualFromFBConfig");
  glext_glXMakeContextCurrent
    = (PFNGLXMAKECONTEXTCURRENTPROC)load (userptr, "glXMakeContextCurrent");
  glext_glXQueryContext
    = (PFNGLXQUERYCONTEXTPROC)load (userptr, "glXQueryContext");
  glext_glXQueryDrawable
    = (PFNGLXQUERYDRAWABLEPROC)load (userptr, "glXQueryDrawable");
  glext_glXSelectEvent
    = (PFNGLXSELECTEVENTPROC)load (userptr, "glXSelectEvent");
}
static void
glext_glx_load_GLX_VERSION_1_4 (GLEXTuserptrloadfunc load, void* userptr) {
  if (!GLEXT_GLX_VERSION_1_4)
    return;
  glext_glXGetProcAddress
    = (PFNGLXGETPROCADDRESSPROC)load (userptr, "glXGetProcAddress");
}
static void
glext_glx_load_GLX_AMD_gpu_association (GLEXTuserptrloadfunc load,
                                        void* userptr) {
  if (!GLEXT_GLX_AMD_gpu_association)
    return;
  glext_glXBlitContextFramebufferAMD
    = (PFNGLXBLITCONTEXTFRAMEBUFFERAMDPROC)load (
      userptr, "glXBlitContextFramebufferAMD");
  glext_glXCreateAssociatedContextAMD
    = (PFNGLXCREATEASSOCIATEDCONTEXTAMDPROC)load (
      userptr, "glXCreateAssociatedContextAMD");
  glext_glXCreateAssociatedContextAttribsAMD
    = (PFNGLXCREATEASSOCIATEDCONTEXTATTRIBSAMDPROC)load (
      userptr, "glXCreateAssociatedContextAttribsAMD");
  glext_glXDeleteAssociatedContextAMD
    = (PFNGLXDELETEASSOCIATEDCONTEXTAMDPROC)load (
      userptr, "glXDeleteAssociatedContextAMD");
  glext_glXGetContextGPUIDAMD
    = (PFNGLXGETCONTEXTGPUIDAMDPROC)load (userptr, "glXGetContextGPUIDAMD");
  glext_glXGetCurrentAssociatedContextAMD
    = (PFNGLXGETCURRENTASSOCIATEDCONTEXTAMDPROC)load (
      userptr, "glXGetCurrentAssociatedContextAMD");
  glext_glXGetGPUIDsAMD
    = (PFNGLXGETGPUIDSAMDPROC)load (userptr, "glXGetGPUIDsAMD");
  glext_glXGetGPUInfoAMD
    = (PFNGLXGETGPUINFOAMDPROC)load (userptr, "glXGetGPUInfoAMD");
  glext_glXMakeAssociatedContextCurrentAMD
    = (PFNGLXMAKEASSOCIATEDCONTEXTCURRENTAMDPROC)load (
      userptr, "glXMakeAssociatedContextCurrentAMD");
}
static void
glext_glx_load_GLX_ARB_create_context (GLEXTuserptrloadfunc load,
                                       void* userptr) {
  if (!GLEXT_GLX_ARB_create_context)
    return;
  glext_glXCreateContextAttribsARB = (PFNGLXCREATECONTEXTATTRIBSARBPROC)load (
    userptr, "glXCreateContextAttribsARB");
}
static void
glext_glx_load_GLX_ARB_get_proc_address (GLEXTuserptrloadfunc load,
                                         void* userptr) {
  if (!GLEXT_GLX_ARB_get_proc_address)
    return;
  glext_glXGetProcAddressARB
    = (PFNGLXGETPROCADDRESSARBPROC)load (userptr, "glXGetProcAddressARB");
}
static void
glext_glx_load_GLX_EXT_import_context (GLEXTuserptrloadfunc load,
                                       void* userptr) {
  if (!GLEXT_GLX_EXT_import_context)
    return;
  glext_glXFreeContextEXT
    = (PFNGLXFREECONTEXTEXTPROC)load (userptr, "glXFreeContextEXT");
  glext_glXGetContextIDEXT
    = (PFNGLXGETCONTEXTIDEXTPROC)load (userptr, "glXGetContextIDEXT");
  glext_glXGetCurrentDisplayEXT = (PFNGLXGETCURRENTDISPLAYEXTPROC)load (
    userptr, "glXGetCurrentDisplayEXT");
  glext_glXImportContextEXT
    = (PFNGLXIMPORTCONTEXTEXTPROC)load (userptr, "glXImportContextEXT");
  glext_glXQueryContextInfoEXT
    = (PFNGLXQUERYCONTEXTINFOEXTPROC)load (userptr, "glXQueryContextInfoEXT");
}
static void
glext_glx_load_GLX_EXT_swap_control (GLEXTuserptrloadfunc load,
                                     void* userptr) {
  if (!GLEXT_GLX_EXT_swap_control)
    return;
  glext_glXSwapIntervalEXT
    = (PFNGLXSWAPINTERVALEXTPROC)load (userptr, "glXSwapIntervalEXT");
}
static void
glext_glx_load_GLX_EXT_texture_from_pixmap (GLEXTuserptrloadfunc load,
                                            void* userptr) {
  if (!GLEXT_GLX_EXT_texture_from_pixmap)
    return;
  glext_glXBindTexImageEXT
    = (PFNGLXBINDTEXIMAGEEXTPROC)load (userptr, "glXBindTexImageEXT");
  glext_glXReleaseTexImageEXT
    = (PFNGLXRELEASETEXIMAGEEXTPROC)load (userptr, "glXReleaseTexImageEXT");
}
static void
glext_glx_load_GLX_MESA_agp_offset (GLEXTuserptrloadfunc load, void* userptr) {
  if (!GLEXT_GLX_MESA_agp_offset)
    return;
  glext_glXGetAGPOffsetMESA
    = (PFNGLXGETAGPOFFSETMESAPROC)load (userptr, "glXGetAGPOffsetMESA");
}
static void
glext_glx_load_GLX_MESA_copy_sub_buffer (GLEXTuserptrloadfunc load,
                                         void* userptr) {
  if (!GLEXT_GLX_MESA_copy_sub_buffer)
    return;
  glext_glXCopySubBufferMESA
    = (PFNGLXCOPYSUBBUFFERMESAPROC)load (userptr, "glXCopySubBufferMESA");
}
static void
glext_glx_load_GLX_MESA_pixmap_colormap (GLEXTuserptrloadfunc load,
                                         void* userptr) {
  if (!GLEXT_GLX_MESA_pixmap_colormap)
    return;
  glext_glXCreateGLXPixmapMESA
    = (PFNGLXCREATEGLXPIXMAPMESAPROC)load (userptr, "glXCreateGLXPixmapMESA");
}
static void
glext_glx_load_GLX_MESA_query_renderer (GLEXTuserptrloadfunc load,
                                        void* userptr) {
  if (!GLEXT_GLX_MESA_query_renderer)
    return;
  glext_glXQueryCurrentRendererIntegerMESA
    = (PFNGLXQUERYCURRENTRENDERERINTEGERMESAPROC)load (
      userptr, "glXQueryCurrentRendererIntegerMESA");
  glext_glXQueryCurrentRendererStringMESA
    = (PFNGLXQUERYCURRENTRENDERERSTRINGMESAPROC)load (
      userptr, "glXQueryCurrentRendererStringMESA");
  glext_glXQueryRendererIntegerMESA
    = (PFNGLXQUERYRENDERERINTEGERMESAPROC)load (userptr,
                                                "glXQueryRendererIntegerMESA");
  glext_glXQueryRendererStringMESA = (PFNGLXQUERYRENDERERSTRINGMESAPROC)load (
    userptr, "glXQueryRendererStringMESA");
}
static void
glext_glx_load_GLX_MESA_release_buffers (GLEXTuserptrloadfunc load,
                                         void* userptr) {
  if (!GLEXT_GLX_MESA_release_buffers)
    return;
  glext_glXReleaseBuffersMESA
    = (PFNGLXRELEASEBUFFERSMESAPROC)load (userptr, "glXReleaseBuffersMESA");
}
static void
glext_glx_load_GLX_MESA_set_3dfx_mode (GLEXTuserptrloadfunc load,
                                       void* userptr) {
  if (!GLEXT_GLX_MESA_set_3dfx_mode)
    return;
  glext_glXSet3DfxModeMESA
    = (PFNGLXSET3DFXMODEMESAPROC)load (userptr, "glXSet3DfxModeMESA");
}
static void
glext_glx_load_GLX_MESA_swap_control (GLEXTuserptrloadfunc load,
                                      void* userptr) {
  if (!GLEXT_GLX_MESA_swap_control)
    return;
  glext_glXGetSwapIntervalMESA
    = (PFNGLXGETSWAPINTERVALMESAPROC)load (userptr, "glXGetSwapIntervalMESA");
  glext_glXSwapIntervalMESA
    = (PFNGLXSWAPINTERVALMESAPROC)load (userptr, "glXSwapIntervalMESA");
}
static void
glext_glx_load_GLX_NV_copy_buffer (GLEXTuserptrloadfunc load, void* userptr) {
  if (!GLEXT_GLX_NV_copy_buffer)
    return;
  glext_glXCopyBufferSubDataNV
    = (PFNGLXCOPYBUFFERSUBDATANVPROC)load (userptr, "glXCopyBufferSubDataNV");
  glext_glXNamedCopyBufferSubDataNV
    = (PFNGLXNAMEDCOPYBUFFERSUBDATANVPROC)load (userptr,
                                                "glXNamedCopyBufferSubDataNV");
}
static void
glext_glx_load_GLX_NV_copy_image (GLEXTuserptrloadfunc load, void* userptr) {
  if (!GLEXT_GLX_NV_copy_image)
    return;
  glext_glXCopyImageSubDataNV
    = (PFNGLXCOPYIMAGESUBDATANVPROC)load (userptr, "glXCopyImageSubDataNV");
}
static void
glext_glx_load_GLX_NV_delay_before_swap (GLEXTuserptrloadfunc load,
                                         void* userptr) {
  if (!GLEXT_GLX_NV_delay_before_swap)
    return;
  glext_glXDelayBeforeSwapNV
    = (PFNGLXDELAYBEFORESWAPNVPROC)load (userptr, "glXDelayBeforeSwapNV");
}
static void
glext_glx_load_GLX_NV_present_video (GLEXTuserptrloadfunc load,
                                     void* userptr) {
  if (!GLEXT_GLX_NV_present_video)
    return;
  glext_glXBindVideoDeviceNV
    = (PFNGLXBINDVIDEODEVICENVPROC)load (userptr, "glXBindVideoDeviceNV");
  glext_glXEnumerateVideoDevicesNV = (PFNGLXENUMERATEVIDEODEVICESNVPROC)load (
    userptr, "glXEnumerateVideoDevicesNV");
}
static void
glext_glx_load_GLX_NV_swap_group (GLEXTuserptrloadfunc load, void* userptr) {
  if (!GLEXT_GLX_NV_swap_group)
    return;
  glext_glXBindSwapBarrierNV
    = (PFNGLXBINDSWAPBARRIERNVPROC)load (userptr, "glXBindSwapBarrierNV");
  glext_glXJoinSwapGroupNV
    = (PFNGLXJOINSWAPGROUPNVPROC)load (userptr, "glXJoinSwapGroupNV");
  glext_glXQueryFrameCountNV
    = (PFNGLXQUERYFRAMECOUNTNVPROC)load (userptr, "glXQueryFrameCountNV");
  glext_glXQueryMaxSwapGroupsNV = (PFNGLXQUERYMAXSWAPGROUPSNVPROC)load (
    userptr, "glXQueryMaxSwapGroupsNV");
  glext_glXQuerySwapGroupNV
    = (PFNGLXQUERYSWAPGROUPNVPROC)load (userptr, "glXQuerySwapGroupNV");
  glext_glXResetFrameCountNV
    = (PFNGLXRESETFRAMECOUNTNVPROC)load (userptr, "glXResetFrameCountNV");
}
static void
glext_glx_load_GLX_NV_video_capture (GLEXTuserptrloadfunc load,
                                     void* userptr) {
  if (!GLEXT_GLX_NV_video_capture)
    return;
  glext_glXBindVideoCaptureDeviceNV
    = (PFNGLXBINDVIDEOCAPTUREDEVICENVPROC)load (userptr,
                                                "glXBindVideoCaptureDeviceNV");
  glext_glXEnumerateVideoCaptureDevicesNV
    = (PFNGLXENUMERATEVIDEOCAPTUREDEVICESNVPROC)load (
      userptr, "glXEnumerateVideoCaptureDevicesNV");
  glext_glXLockVideoCaptureDeviceNV
    = (PFNGLXLOCKVIDEOCAPTUREDEVICENVPROC)load (userptr,
                                                "glXLockVideoCaptureDeviceNV");
  glext_glXQueryVideoCaptureDeviceNV
    = (PFNGLXQUERYVIDEOCAPTUREDEVICENVPROC)load (
      userptr, "glXQueryVideoCaptureDeviceNV");
  glext_glXReleaseVideoCaptureDeviceNV
    = (PFNGLXRELEASEVIDEOCAPTUREDEVICENVPROC)load (
      userptr, "glXReleaseVideoCaptureDeviceNV");
}
static void
glext_glx_load_GLX_NV_video_out (GLEXTuserptrloadfunc load, void* userptr) {
  if (!GLEXT_GLX_NV_video_out)
    return;
  glext_glXBindVideoImageNV
    = (PFNGLXBINDVIDEOIMAGENVPROC)load (userptr, "glXBindVideoImageNV");
  glext_glXGetVideoDeviceNV
    = (PFNGLXGETVIDEODEVICENVPROC)load (userptr, "glXGetVideoDeviceNV");
  glext_glXGetVideoInfoNV
    = (PFNGLXGETVIDEOINFONVPROC)load (userptr, "glXGetVideoInfoNV");
  glext_glXReleaseVideoDeviceNV = (PFNGLXRELEASEVIDEODEVICENVPROC)load (
    userptr, "glXReleaseVideoDeviceNV");
  glext_glXReleaseVideoImageNV
    = (PFNGLXRELEASEVIDEOIMAGENVPROC)load (userptr, "glXReleaseVideoImageNV");
  glext_glXSendPbufferToVideoNV = (PFNGLXSENDPBUFFERTOVIDEONVPROC)load (
    userptr, "glXSendPbufferToVideoNV");
}
static void
glext_glx_load_GLX_OML_sync_control (GLEXTuserptrloadfunc load,
                                     void* userptr) {
  if (!GLEXT_GLX_OML_sync_control)
    return;
  glext_glXGetMscRateOML
    = (PFNGLXGETMSCRATEOMLPROC)load (userptr, "glXGetMscRateOML");
  glext_glXGetSyncValuesOML
    = (PFNGLXGETSYNCVALUESOMLPROC)load (userptr, "glXGetSyncValuesOML");
  glext_glXSwapBuffersMscOML
    = (PFNGLXSWAPBUFFERSMSCOMLPROC)load (userptr, "glXSwapBuffersMscOML");
  glext_glXWaitForMscOML
    = (PFNGLXWAITFORMSCOMLPROC)load (userptr, "glXWaitForMscOML");
  glext_glXWaitForSbcOML
    = (PFNGLXWAITFORSBCOMLPROC)load (userptr, "glXWaitForSbcOML");
}
static void
glext_glx_load_GLX_SGIX_fbconfig (GLEXTuserptrloadfunc load, void* userptr) {
  if (!GLEXT_GLX_SGIX_fbconfig)
    return;
  glext_glXChooseFBConfigSGIX
    = (PFNGLXCHOOSEFBCONFIGSGIXPROC)load (userptr, "glXChooseFBConfigSGIX");
  glext_glXCreateContextWithConfigSGIX
    = (PFNGLXCREATECONTEXTWITHCONFIGSGIXPROC)load (
      userptr, "glXCreateContextWithConfigSGIX");
  glext_glXCreateGLXPixmapWithConfigSGIX
    = (PFNGLXCREATEGLXPIXMAPWITHCONFIGSGIXPROC)load (
      userptr, "glXCreateGLXPixmapWithConfigSGIX");
  glext_glXGetFBConfigAttribSGIX = (PFNGLXGETFBCONFIGATTRIBSGIXPROC)load (
    userptr, "glXGetFBConfigAttribSGIX");
  glext_glXGetFBConfigFromVisualSGIX
    = (PFNGLXGETFBCONFIGFROMVISUALSGIXPROC)load (
      userptr, "glXGetFBConfigFromVisualSGIX");
  glext_glXGetVisualFromFBConfigSGIX
    = (PFNGLXGETVISUALFROMFBCONFIGSGIXPROC)load (
      userptr, "glXGetVisualFromFBConfigSGIX");
}
static void
glext_glx_load_GLX_SGIX_hyperpipe (GLEXTuserptrloadfunc load, void* userptr) {
  if (!GLEXT_GLX_SGIX_hyperpipe)
    return;
  glext_glXBindHyperpipeSGIX
    = (PFNGLXBINDHYPERPIPESGIXPROC)load (userptr, "glXBindHyperpipeSGIX");
  glext_glXDestroyHyperpipeConfigSGIX
    = (PFNGLXDESTROYHYPERPIPECONFIGSGIXPROC)load (
      userptr, "glXDestroyHyperpipeConfigSGIX");
  glext_glXHyperpipeAttribSGIX
    = (PFNGLXHYPERPIPEATTRIBSGIXPROC)load (userptr, "glXHyperpipeAttribSGIX");
  glext_glXHyperpipeConfigSGIX
    = (PFNGLXHYPERPIPECONFIGSGIXPROC)load (userptr, "glXHyperpipeConfigSGIX");
  glext_glXQueryHyperpipeAttribSGIX
    = (PFNGLXQUERYHYPERPIPEATTRIBSGIXPROC)load (userptr,
                                                "glXQueryHyperpipeAttribSGIX");
  glext_glXQueryHyperpipeBestAttribSGIX
    = (PFNGLXQUERYHYPERPIPEBESTATTRIBSGIXPROC)load (
      userptr, "glXQueryHyperpipeBestAttribSGIX");
  glext_glXQueryHyperpipeConfigSGIX
    = (PFNGLXQUERYHYPERPIPECONFIGSGIXPROC)load (userptr,
                                                "glXQueryHyperpipeConfigSGIX");
  glext_glXQueryHyperpipeNetworkSGIX
    = (PFNGLXQUERYHYPERPIPENETWORKSGIXPROC)load (
      userptr, "glXQueryHyperpipeNetworkSGIX");
}
static void
glext_glx_load_GLX_SGIX_pbuffer (GLEXTuserptrloadfunc load, void* userptr) {
  if (!GLEXT_GLX_SGIX_pbuffer)
    return;
  glext_glXCreateGLXPbufferSGIX = (PFNGLXCREATEGLXPBUFFERSGIXPROC)load (
    userptr, "glXCreateGLXPbufferSGIX");
  glext_glXDestroyGLXPbufferSGIX = (PFNGLXDESTROYGLXPBUFFERSGIXPROC)load (
    userptr, "glXDestroyGLXPbufferSGIX");
  glext_glXGetSelectedEventSGIX = (PFNGLXGETSELECTEDEVENTSGIXPROC)load (
    userptr, "glXGetSelectedEventSGIX");
  glext_glXQueryGLXPbufferSGIX
    = (PFNGLXQUERYGLXPBUFFERSGIXPROC)load (userptr, "glXQueryGLXPbufferSGIX");
  glext_glXSelectEventSGIX
    = (PFNGLXSELECTEVENTSGIXPROC)load (userptr, "glXSelectEventSGIX");
}
static void
glext_glx_load_GLX_SGIX_swap_barrier (GLEXTuserptrloadfunc load,
                                      void* userptr) {
  if (!GLEXT_GLX_SGIX_swap_barrier)
    return;
  glext_glXBindSwapBarrierSGIX
    = (PFNGLXBINDSWAPBARRIERSGIXPROC)load (userptr, "glXBindSwapBarrierSGIX");
  glext_glXQueryMaxSwapBarriersSGIX
    = (PFNGLXQUERYMAXSWAPBARRIERSSGIXPROC)load (userptr,
                                                "glXQueryMaxSwapBarriersSGIX");
}
static void
glext_glx_load_GLX_SGIX_swap_group (GLEXTuserptrloadfunc load, void* userptr) {
  if (!GLEXT_GLX_SGIX_swap_group)
    return;
  glext_glXJoinSwapGroupSGIX
    = (PFNGLXJOINSWAPGROUPSGIXPROC)load (userptr, "glXJoinSwapGroupSGIX");
}
static void
glext_glx_load_GLX_SGIX_video_resize (GLEXTuserptrloadfunc load,
                                      void* userptr) {
  if (!GLEXT_GLX_SGIX_video_resize)
    return;
  glext_glXBindChannelToWindowSGIX = (PFNGLXBINDCHANNELTOWINDOWSGIXPROC)load (
    userptr, "glXBindChannelToWindowSGIX");
  glext_glXChannelRectSGIX
    = (PFNGLXCHANNELRECTSGIXPROC)load (userptr, "glXChannelRectSGIX");
  glext_glXChannelRectSyncSGIX
    = (PFNGLXCHANNELRECTSYNCSGIXPROC)load (userptr, "glXChannelRectSyncSGIX");
  glext_glXQueryChannelDeltasSGIX = (PFNGLXQUERYCHANNELDELTASSGIXPROC)load (
    userptr, "glXQueryChannelDeltasSGIX");
  glext_glXQueryChannelRectSGIX = (PFNGLXQUERYCHANNELRECTSGIXPROC)load (
    userptr, "glXQueryChannelRectSGIX");
}
static void
glext_glx_load_GLX_SGI_cushion (GLEXTuserptrloadfunc load, void* userptr) {
  if (!GLEXT_GLX_SGI_cushion)
    return;
  glext_glXCushionSGI = (PFNGLXCUSHIONSGIPROC)load (userptr, "glXCushionSGI");
}
static void
glext_glx_load_GLX_SGI_make_current_read (GLEXTuserptrloadfunc load,
                                          void* userptr) {
  if (!GLEXT_GLX_SGI_make_current_read)
    return;
  glext_glXGetCurrentReadDrawableSGI
    = (PFNGLXGETCURRENTREADDRAWABLESGIPROC)load (
      userptr, "glXGetCurrentReadDrawableSGI");
  glext_glXMakeCurrentReadSGI
    = (PFNGLXMAKECURRENTREADSGIPROC)load (userptr, "glXMakeCurrentReadSGI");
}
static void
glext_glx_load_GLX_SGI_swap_control (GLEXTuserptrloadfunc load,
                                     void* userptr) {
  if (!GLEXT_GLX_SGI_swap_control)
    return;
  glext_glXSwapIntervalSGI
    = (PFNGLXSWAPINTERVALSGIPROC)load (userptr, "glXSwapIntervalSGI");
}
static void
glext_glx_load_GLX_SGI_video_sync (GLEXTuserptrloadfunc load, void* userptr) {
  if (!GLEXT_GLX_SGI_video_sync)
    return;
  glext_glXGetVideoSyncSGI
    = (PFNGLXGETVIDEOSYNCSGIPROC)load (userptr, "glXGetVideoSyncSGI");
  glext_glXWaitVideoSyncSGI
    = (PFNGLXWAITVIDEOSYNCSGIPROC)load (userptr, "glXWaitVideoSyncSGI");
}
static void
glext_glx_load_GLX_SUN_get_transparent_index (GLEXTuserptrloadfunc load,
                                              void* userptr) {
  if (!GLEXT_GLX_SUN_get_transparent_index)
    return;
  glext_glXGetTransparentIndexSUN = (PFNGLXGETTRANSPARENTINDEXSUNPROC)load (
    userptr, "glXGetTransparentIndexSUN");
}

static void
glext_glx_resolve_aliases (void) {}

static int
glext_glx_has_extension (Display* display, int screen, const char* ext) {
#ifndef GLX_VERSION_1_1
  GLEXT_UNUSED (display);
  GLEXT_UNUSED (screen);
  GLEXT_UNUSED (ext);
#else
  const char* terminator;
  const char* loc;
  const char* extensions;

  if (glXQueryExtensionsString == NULL) {
    return 0;
  }

  extensions = glXQueryExtensionsString (display, screen);

  if (extensions == NULL || ext == NULL) {
    return 0;
  }

  while (1) {
    loc = strstr (extensions, ext);
    if (loc == NULL)
      break;

    terminator = loc + strlen (ext);
    if ((loc == extensions || *(loc - 1) == ' ')
        && (*terminator == ' ' || *terminator == '\0')) {
      return 1;
    }
    extensions = terminator;
  }
#endif

  return 0;
}

static GLEXTapiproc
glext_glx_get_proc_from_userptr (void* userptr, const char* name) {
  return (GLEXT_GNUC_EXTENSION (GLEXTapiproc (*) (const char* name))
            userptr) (name);
}

static int
glext_glx_find_extensions (Display* display, int screen) {
  GLEXT_GLX_3DFX_multisample
    = glext_glx_has_extension (display, screen, "GLX_3DFX_multisample");
  GLEXT_GLX_AMD_gpu_association
    = glext_glx_has_extension (display, screen, "GLX_AMD_gpu_association");
  GLEXT_GLX_ARB_context_flush_control = glext_glx_has_extension (
    display, screen, "GLX_ARB_context_flush_control");
  GLEXT_GLX_ARB_create_context
    = glext_glx_has_extension (display, screen, "GLX_ARB_create_context");
  GLEXT_GLX_ARB_create_context_no_error = glext_glx_has_extension (
    display, screen, "GLX_ARB_create_context_no_error");
  GLEXT_GLX_ARB_create_context_profile = glext_glx_has_extension (
    display, screen, "GLX_ARB_create_context_profile");
  GLEXT_GLX_ARB_create_context_robustness = glext_glx_has_extension (
    display, screen, "GLX_ARB_create_context_robustness");
  GLEXT_GLX_ARB_fbconfig_float
    = glext_glx_has_extension (display, screen, "GLX_ARB_fbconfig_float");
  GLEXT_GLX_ARB_framebuffer_sRGB
    = glext_glx_has_extension (display, screen, "GLX_ARB_framebuffer_sRGB");
  GLEXT_GLX_ARB_get_proc_address
    = glext_glx_has_extension (display, screen, "GLX_ARB_get_proc_address");
  GLEXT_GLX_ARB_multisample
    = glext_glx_has_extension (display, screen, "GLX_ARB_multisample");
  GLEXT_GLX_ARB_robustness_application_isolation = glext_glx_has_extension (
    display, screen, "GLX_ARB_robustness_application_isolation");
  GLEXT_GLX_ARB_robustness_share_group_isolation = glext_glx_has_extension (
    display, screen, "GLX_ARB_robustness_share_group_isolation");
  GLEXT_GLX_ARB_vertex_buffer_object = glext_glx_has_extension (
    display, screen, "GLX_ARB_vertex_buffer_object");
  GLEXT_GLX_EXT_buffer_age
    = glext_glx_has_extension (display, screen, "GLX_EXT_buffer_age");
  GLEXT_GLX_EXT_context_priority
    = glext_glx_has_extension (display, screen, "GLX_EXT_context_priority");
  GLEXT_GLX_EXT_create_context_es2_profile = glext_glx_has_extension (
    display, screen, "GLX_EXT_create_context_es2_profile");
  GLEXT_GLX_EXT_create_context_es_profile = glext_glx_has_extension (
    display, screen, "GLX_EXT_create_context_es_profile");
  GLEXT_GLX_EXT_fbconfig_packed_float = glext_glx_has_extension (
    display, screen, "GLX_EXT_fbconfig_packed_float");
  GLEXT_GLX_EXT_framebuffer_sRGB
    = glext_glx_has_extension (display, screen, "GLX_EXT_framebuffer_sRGB");
  GLEXT_GLX_EXT_get_drawable_type
    = glext_glx_has_extension (display, screen, "GLX_EXT_get_drawable_type");
  GLEXT_GLX_EXT_import_context
    = glext_glx_has_extension (display, screen, "GLX_EXT_import_context");
  GLEXT_GLX_EXT_libglvnd
    = glext_glx_has_extension (display, screen, "GLX_EXT_libglvnd");
  GLEXT_GLX_EXT_no_config_context
    = glext_glx_has_extension (display, screen, "GLX_EXT_no_config_context");
  GLEXT_GLX_EXT_stereo_tree
    = glext_glx_has_extension (display, screen, "GLX_EXT_stereo_tree");
  GLEXT_GLX_EXT_swap_control
    = glext_glx_has_extension (display, screen, "GLX_EXT_swap_control");
  GLEXT_GLX_EXT_swap_control_tear
    = glext_glx_has_extension (display, screen, "GLX_EXT_swap_control_tear");
  GLEXT_GLX_EXT_texture_from_pixmap
    = glext_glx_has_extension (display, screen, "GLX_EXT_texture_from_pixmap");
  GLEXT_GLX_EXT_visual_info
    = glext_glx_has_extension (display, screen, "GLX_EXT_visual_info");
  GLEXT_GLX_EXT_visual_rating
    = glext_glx_has_extension (display, screen, "GLX_EXT_visual_rating");
  GLEXT_GLX_INTEL_swap_event
    = glext_glx_has_extension (display, screen, "GLX_INTEL_swap_event");
  GLEXT_GLX_MESA_agp_offset
    = glext_glx_has_extension (display, screen, "GLX_MESA_agp_offset");
  GLEXT_GLX_MESA_copy_sub_buffer
    = glext_glx_has_extension (display, screen, "GLX_MESA_copy_sub_buffer");
  GLEXT_GLX_MESA_pixmap_colormap
    = glext_glx_has_extension (display, screen, "GLX_MESA_pixmap_colormap");
  GLEXT_GLX_MESA_query_renderer
    = glext_glx_has_extension (display, screen, "GLX_MESA_query_renderer");
  GLEXT_GLX_MESA_release_buffers
    = glext_glx_has_extension (display, screen, "GLX_MESA_release_buffers");
  GLEXT_GLX_MESA_set_3dfx_mode
    = glext_glx_has_extension (display, screen, "GLX_MESA_set_3dfx_mode");
  GLEXT_GLX_MESA_swap_control
    = glext_glx_has_extension (display, screen, "GLX_MESA_swap_control");
  GLEXT_GLX_NV_copy_buffer
    = glext_glx_has_extension (display, screen, "GLX_NV_copy_buffer");
  GLEXT_GLX_NV_copy_image
    = glext_glx_has_extension (display, screen, "GLX_NV_copy_image");
  GLEXT_GLX_NV_delay_before_swap
    = glext_glx_has_extension (display, screen, "GLX_NV_delay_before_swap");
  GLEXT_GLX_NV_float_buffer
    = glext_glx_has_extension (display, screen, "GLX_NV_float_buffer");
  GLEXT_GLX_NV_multigpu_context
    = glext_glx_has_extension (display, screen, "GLX_NV_multigpu_context");
  GLEXT_GLX_NV_multisample_coverage
    = glext_glx_has_extension (display, screen, "GLX_NV_multisample_coverage");
  GLEXT_GLX_NV_present_video
    = glext_glx_has_extension (display, screen, "GLX_NV_present_video");
  GLEXT_GLX_NV_robustness_video_memory_purge = glext_glx_has_extension (
    display, screen, "GLX_NV_robustness_video_memory_purge");
  GLEXT_GLX_NV_swap_group
    = glext_glx_has_extension (display, screen, "GLX_NV_swap_group");
  GLEXT_GLX_NV_video_capture
    = glext_glx_has_extension (display, screen, "GLX_NV_video_capture");
  GLEXT_GLX_NV_video_out
    = glext_glx_has_extension (display, screen, "GLX_NV_video_out");
  GLEXT_GLX_OML_swap_method
    = glext_glx_has_extension (display, screen, "GLX_OML_swap_method");
  GLEXT_GLX_OML_sync_control
    = glext_glx_has_extension (display, screen, "GLX_OML_sync_control");
  GLEXT_GLX_SGIS_blended_overlay
    = glext_glx_has_extension (display, screen, "GLX_SGIS_blended_overlay");
  GLEXT_GLX_SGIS_multisample
    = glext_glx_has_extension (display, screen, "GLX_SGIS_multisample");
  GLEXT_GLX_SGIS_shared_multisample
    = glext_glx_has_extension (display, screen, "GLX_SGIS_shared_multisample");
  GLEXT_GLX_SGIX_fbconfig
    = glext_glx_has_extension (display, screen, "GLX_SGIX_fbconfig");
  GLEXT_GLX_SGIX_hyperpipe
    = glext_glx_has_extension (display, screen, "GLX_SGIX_hyperpipe");
  GLEXT_GLX_SGIX_pbuffer
    = glext_glx_has_extension (display, screen, "GLX_SGIX_pbuffer");
  GLEXT_GLX_SGIX_swap_barrier
    = glext_glx_has_extension (display, screen, "GLX_SGIX_swap_barrier");
  GLEXT_GLX_SGIX_swap_group
    = glext_glx_has_extension (display, screen, "GLX_SGIX_swap_group");
  GLEXT_GLX_SGIX_video_resize
    = glext_glx_has_extension (display, screen, "GLX_SGIX_video_resize");
  GLEXT_GLX_SGIX_visual_select_group = glext_glx_has_extension (
    display, screen, "GLX_SGIX_visual_select_group");
  GLEXT_GLX_SGI_cushion
    = glext_glx_has_extension (display, screen, "GLX_SGI_cushion");
  GLEXT_GLX_SGI_make_current_read
    = glext_glx_has_extension (display, screen, "GLX_SGI_make_current_read");
  GLEXT_GLX_SGI_swap_control
    = glext_glx_has_extension (display, screen, "GLX_SGI_swap_control");
  GLEXT_GLX_SGI_video_sync
    = glext_glx_has_extension (display, screen, "GLX_SGI_video_sync");
  GLEXT_GLX_SUN_get_transparent_index = glext_glx_has_extension (
    display, screen, "GLX_SUN_get_transparent_index");
  return 1;
}

static int
glext_glx_find_core_glx (Display** display, int* screen) {
  int major = 0, minor = 0;
  if (*display == NULL) {
#ifdef GLEXT_GLX_NO_X11
    GLEXT_UNUSED (screen);
    return 0;
#else
    *display = XOpenDisplay (0);
    if (*display == NULL) {
      return 0;
    }
    *screen = XScreenNumberOfScreen (XDefaultScreenOfDisplay (*display));
#endif
  }
  glXQueryVersion (*display, &major, &minor);
  GLEXT_GLX_VERSION_1_0 = (major == 1 && minor >= 0) || major > 1;
  GLEXT_GLX_VERSION_1_1 = (major == 1 && minor >= 1) || major > 1;
  GLEXT_GLX_VERSION_1_2 = (major == 1 && minor >= 2) || major > 1;
  GLEXT_GLX_VERSION_1_3 = (major == 1 && minor >= 3) || major > 1;
  GLEXT_GLX_VERSION_1_4 = (major == 1 && minor >= 4) || major > 1;
  return GLEXT_MAKE_VERSION (major, minor);
}

int
glext_LoadGLXUserPtr (Display* display, int screen, GLEXTuserptrloadfunc load,
                      void* userptr) {
  int version;
  glXQueryVersion = (PFNGLXQUERYVERSIONPROC)load (userptr, "glXQueryVersion");
  if (glXQueryVersion == NULL)
    return 0;
  version = glext_glx_find_core_glx (&display, &screen);

  glext_glx_load_GLX_VERSION_1_0 (load, userptr);
  glext_glx_load_GLX_VERSION_1_1 (load, userptr);
  glext_glx_load_GLX_VERSION_1_2 (load, userptr);
  glext_glx_load_GLX_VERSION_1_3 (load, userptr);
  glext_glx_load_GLX_VERSION_1_4 (load, userptr);

  if (!glext_glx_find_extensions (display, screen))
    return 0;
  glext_glx_load_GLX_AMD_gpu_association (load, userptr);
  glext_glx_load_GLX_ARB_create_context (load, userptr);
  glext_glx_load_GLX_ARB_get_proc_address (load, userptr);
  glext_glx_load_GLX_EXT_import_context (load, userptr);
  glext_glx_load_GLX_EXT_swap_control (load, userptr);
  glext_glx_load_GLX_EXT_texture_from_pixmap (load, userptr);
  glext_glx_load_GLX_MESA_agp_offset (load, userptr);
  glext_glx_load_GLX_MESA_copy_sub_buffer (load, userptr);
  glext_glx_load_GLX_MESA_pixmap_colormap (load, userptr);
  glext_glx_load_GLX_MESA_query_renderer (load, userptr);
  glext_glx_load_GLX_MESA_release_buffers (load, userptr);
  glext_glx_load_GLX_MESA_set_3dfx_mode (load, userptr);
  glext_glx_load_GLX_MESA_swap_control (load, userptr);
  glext_glx_load_GLX_NV_copy_buffer (load, userptr);
  glext_glx_load_GLX_NV_copy_image (load, userptr);
  glext_glx_load_GLX_NV_delay_before_swap (load, userptr);
  glext_glx_load_GLX_NV_present_video (load, userptr);
  glext_glx_load_GLX_NV_swap_group (load, userptr);
  glext_glx_load_GLX_NV_video_capture (load, userptr);
  glext_glx_load_GLX_NV_video_out (load, userptr);
  glext_glx_load_GLX_OML_sync_control (load, userptr);
  glext_glx_load_GLX_SGIX_fbconfig (load, userptr);
  glext_glx_load_GLX_SGIX_hyperpipe (load, userptr);
  glext_glx_load_GLX_SGIX_pbuffer (load, userptr);
  glext_glx_load_GLX_SGIX_swap_barrier (load, userptr);
  glext_glx_load_GLX_SGIX_swap_group (load, userptr);
  glext_glx_load_GLX_SGIX_video_resize (load, userptr);
  glext_glx_load_GLX_SGI_cushion (load, userptr);
  glext_glx_load_GLX_SGI_make_current_read (load, userptr);
  glext_glx_load_GLX_SGI_swap_control (load, userptr);
  glext_glx_load_GLX_SGI_video_sync (load, userptr);
  glext_glx_load_GLX_SUN_get_transparent_index (load, userptr);

  glext_glx_resolve_aliases ();

  return version;
}

int
glext_LoadGLX (Display* display, int screen, GLEXTloadfunc load) {
  return glext_LoadGLXUserPtr (display, screen,
                               glext_glx_get_proc_from_userptr,
                               GLEXT_GNUC_EXTENSION (void*) load);
}

#ifdef GLEXT_GLX

#ifndef GLEXT_LOADER_LIBRARY_C_
#define GLEXT_LOADER_LIBRARY_C_

#include <stddef.h>
#include <stdlib.h>

#if GLEXT_PLATFORM_WIN32
#include <windows.h>
#else
#include <dlfcn.h>
#endif

static void*
glext_get_dlopen_handle (const char* lib_names[], int length) {
  void* handle = NULL;
  int i;

  for (i = 0; i < length; ++i) {
#if GLEXT_PLATFORM_WIN32
#if GLEXT_PLATFORM_UWP
    size_t buffer_size = (strlen (lib_names[i]) + 1) * sizeof (WCHAR);
    LPWSTR buffer = (LPWSTR)malloc (buffer_size);
    if (buffer != NULL) {
      int ret = MultiByteToWideChar (CP_ACP, 0, lib_names[i], -1, buffer,
                                     buffer_size);
      if (ret != 0) {
        handle = (void*)LoadPackagedLibrary (buffer, 0);
      }
      free ((void*)buffer);
    }
#else
    handle = (void*)LoadLibraryA (lib_names[i]);
#endif
#else
    handle = dlopen (lib_names[i], RTLD_LAZY | RTLD_LOCAL);
#endif
    if (handle != NULL) {
      return handle;
    }
  }

  return NULL;
}

static void
glext_close_dlopen_handle (void* handle) {
  if (handle != NULL) {
#if GLEXT_PLATFORM_WIN32
    FreeLibrary ((HMODULE)handle);
#else
    dlclose (handle);
#endif
  }
}

static GLEXTapiproc
glext_dlsym_handle (void* handle, const char* name) {
  if (handle == NULL) {
    return NULL;
  }

#if GLEXT_PLATFORM_WIN32
  return (GLEXTapiproc)GetProcAddress ((HMODULE)handle, name);
#else
  return GLEXT_GNUC_EXTENSION (GLEXTapiproc) dlsym (handle, name);
#endif
}

#endif /* GLEXT_LOADER_LIBRARY_C_ */

typedef void*(GLEXT_API_PTR* GLEXTglxprocaddrfunc) (const char*);

static GLEXTapiproc
glext_glx_get_proc (void* userptr, const char* name) {
  return GLEXT_GNUC_EXTENSION ((GLEXTapiproc (*) (const char* name))userptr) (
    name);
}

static void* _glx_handle;

static void*
glext_glx_dlopen_handle (void) {
  static const char* NAMES[] = {
#if defined __CYGWIN__
    "libGL-1.so",
#endif
    "libGL.so.1", "libGL.so"
  };

  if (_glx_handle == NULL) {
    _glx_handle
      = glext_get_dlopen_handle (NAMES, sizeof (NAMES) / sizeof (NAMES[0]));
  }

  return _glx_handle;
}

int
glext_LoaderLoadGLX (Display* display, int screen) {
  int version = 0;
  void* handle = NULL;
  int did_load = 0;
  GLEXTglxprocaddrfunc loader;

  did_load = _glx_handle == NULL;
  handle = glext_glx_dlopen_handle ();
  if (handle != NULL) {
    loader = (GLEXTglxprocaddrfunc)glext_dlsym_handle (handle,
                                                       "glXGetProcAddressARB");
    if (loader != NULL) {
      version = glext_LoadGLXUserPtr (display, screen, glext_glx_get_proc,
                                      GLEXT_GNUC_EXTENSION (void*) loader);
    }

    if (!version && did_load) {
      glext_LoaderUnloadGLX ();
    }
  }

  return version;
}

void
glext_LoaderUnloadGLX () {
  if (_glx_handle != NULL) {
    glext_close_dlopen_handle (_glx_handle);
    _glx_handle = NULL;
  }
}

#endif /* GLEXT_GLX */

#ifdef __cplusplus
}
#endif

#endif
