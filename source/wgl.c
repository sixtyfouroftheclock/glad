/**
 * SPDX-License-Identifier: (WTFPL OR CC0-1.0) AND Apache-2.0
 */
#if __has_include(<Windows.h>)

#include <string.h>
#include <glext/wgl.h>

#ifdef GLEXT_WGL_COMPILE

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

int GLEXT_WGL_VERSION_1_0 = 0;
int GLEXT_WGL_3DFX_multisample = 0;
int GLEXT_WGL_3DL_stereo_control = 0;
int GLEXT_WGL_AMD_gpu_association = 0;
int GLEXT_WGL_ARB_buffer_region = 0;
int GLEXT_WGL_ARB_context_flush_control = 0;
int GLEXT_WGL_ARB_create_context = 0;
int GLEXT_WGL_ARB_create_context_no_error = 0;
int GLEXT_WGL_ARB_create_context_profile = 0;
int GLEXT_WGL_ARB_create_context_robustness = 0;
int GLEXT_WGL_ARB_extensions_string = 0;
int GLEXT_WGL_ARB_framebuffer_sRGB = 0;
int GLEXT_WGL_ARB_make_current_read = 0;
int GLEXT_WGL_ARB_multisample = 0;
int GLEXT_WGL_ARB_pbuffer = 0;
int GLEXT_WGL_ARB_pixel_format = 0;
int GLEXT_WGL_ARB_pixel_format_float = 0;
int GLEXT_WGL_ARB_render_texture = 0;
int GLEXT_WGL_ARB_robustness_application_isolation = 0;
int GLEXT_WGL_ARB_robustness_share_group_isolation = 0;
int GLEXT_WGL_ATI_pixel_format_float = 0;
int GLEXT_WGL_ATI_render_texture_rectangle = 0;
int GLEXT_WGL_EXT_colorspace = 0;
int GLEXT_WGL_EXT_create_context_es2_profile = 0;
int GLEXT_WGL_EXT_create_context_es_profile = 0;
int GLEXT_WGL_EXT_depth_float = 0;
int GLEXT_WGL_EXT_display_color_table = 0;
int GLEXT_WGL_EXT_extensions_string = 0;
int GLEXT_WGL_EXT_framebuffer_sRGB = 0;
int GLEXT_WGL_EXT_make_current_read = 0;
int GLEXT_WGL_EXT_multisample = 0;
int GLEXT_WGL_EXT_pbuffer = 0;
int GLEXT_WGL_EXT_pixel_format = 0;
int GLEXT_WGL_EXT_pixel_format_packed_float = 0;
int GLEXT_WGL_EXT_swap_control = 0;
int GLEXT_WGL_EXT_swap_control_tear = 0;
int GLEXT_WGL_I3D_digital_video_control = 0;
int GLEXT_WGL_I3D_gamma = 0;
int GLEXT_WGL_I3D_genlock = 0;
int GLEXT_WGL_I3D_image_buffer = 0;
int GLEXT_WGL_I3D_swap_frame_lock = 0;
int GLEXT_WGL_I3D_swap_frame_usage = 0;
int GLEXT_WGL_NV_DX_interop = 0;
int GLEXT_WGL_NV_DX_interop2 = 0;
int GLEXT_WGL_NV_copy_image = 0;
int GLEXT_WGL_NV_delay_before_swap = 0;
int GLEXT_WGL_NV_float_buffer = 0;
int GLEXT_WGL_NV_gpu_affinity = 0;
int GLEXT_WGL_NV_multigpu_context = 0;
int GLEXT_WGL_NV_multisample_coverage = 0;
int GLEXT_WGL_NV_present_video = 0;
int GLEXT_WGL_NV_render_depth_texture = 0;
int GLEXT_WGL_NV_render_texture_rectangle = 0;
int GLEXT_WGL_NV_swap_group = 0;
int GLEXT_WGL_NV_vertex_array_range = 0;
int GLEXT_WGL_NV_video_capture = 0;
int GLEXT_WGL_NV_video_output = 0;
int GLEXT_WGL_OML_sync_control = 0;

PFNWGLALLOCATEMEMORYNVPROC glext_wglAllocateMemoryNV = NULL;
PFNWGLASSOCIATEIMAGEBUFFEREVENTSI3DPROC glext_wglAssociateImageBufferEventsI3D
  = NULL;
PFNWGLBEGINFRAMETRACKINGI3DPROC glext_wglBeginFrameTrackingI3D = NULL;
PFNWGLBINDDISPLAYCOLORTABLEEXTPROC glext_wglBindDisplayColorTableEXT = NULL;
PFNWGLBINDSWAPBARRIERNVPROC glext_wglBindSwapBarrierNV = NULL;
PFNWGLBINDTEXIMAGEARBPROC glext_wglBindTexImageARB = NULL;
PFNWGLBINDVIDEOCAPTUREDEVICENVPROC glext_wglBindVideoCaptureDeviceNV = NULL;
PFNWGLBINDVIDEODEVICENVPROC glext_wglBindVideoDeviceNV = NULL;
PFNWGLBINDVIDEOIMAGENVPROC glext_wglBindVideoImageNV = NULL;
PFNWGLBLITCONTEXTFRAMEBUFFERAMDPROC glext_wglBlitContextFramebufferAMD = NULL;
PFNWGLCHOOSEPIXELFORMATARBPROC glext_wglChoosePixelFormatARB = NULL;
PFNWGLCHOOSEPIXELFORMATEXTPROC glext_wglChoosePixelFormatEXT = NULL;
PFNWGLCOPYIMAGESUBDATANVPROC glext_wglCopyImageSubDataNV = NULL;
PFNWGLCREATEAFFINITYDCNVPROC glext_wglCreateAffinityDCNV = NULL;
PFNWGLCREATEASSOCIATEDCONTEXTAMDPROC glext_wglCreateAssociatedContextAMD
  = NULL;
PFNWGLCREATEASSOCIATEDCONTEXTATTRIBSAMDPROC
glext_wglCreateAssociatedContextAttribsAMD = NULL;
PFNWGLCREATEBUFFERREGIONARBPROC glext_wglCreateBufferRegionARB = NULL;
PFNWGLCREATECONTEXTATTRIBSARBPROC glext_wglCreateContextAttribsARB = NULL;
PFNWGLCREATEDISPLAYCOLORTABLEEXTPROC glext_wglCreateDisplayColorTableEXT
  = NULL;
PFNWGLCREATEIMAGEBUFFERI3DPROC glext_wglCreateImageBufferI3D = NULL;
PFNWGLCREATEPBUFFERARBPROC glext_wglCreatePbufferARB = NULL;
PFNWGLCREATEPBUFFEREXTPROC glext_wglCreatePbufferEXT = NULL;
PFNWGLDXCLOSEDEVICENVPROC glext_wglDXCloseDeviceNV = NULL;
PFNWGLDXLOCKOBJECTSNVPROC glext_wglDXLockObjectsNV = NULL;
PFNWGLDXOBJECTACCESSNVPROC glext_wglDXObjectAccessNV = NULL;
PFNWGLDXOPENDEVICENVPROC glext_wglDXOpenDeviceNV = NULL;
PFNWGLDXREGISTEROBJECTNVPROC glext_wglDXRegisterObjectNV = NULL;
PFNWGLDXSETRESOURCESHAREHANDLENVPROC glext_wglDXSetResourceShareHandleNV
  = NULL;
PFNWGLDXUNLOCKOBJECTSNVPROC glext_wglDXUnlockObjectsNV = NULL;
PFNWGLDXUNREGISTEROBJECTNVPROC glext_wglDXUnregisterObjectNV = NULL;
PFNWGLDELAYBEFORESWAPNVPROC glext_wglDelayBeforeSwapNV = NULL;
PFNWGLDELETEASSOCIATEDCONTEXTAMDPROC glext_wglDeleteAssociatedContextAMD
  = NULL;
PFNWGLDELETEBUFFERREGIONARBPROC glext_wglDeleteBufferRegionARB = NULL;
PFNWGLDELETEDCNVPROC glext_wglDeleteDCNV = NULL;
PFNWGLDESTROYDISPLAYCOLORTABLEEXTPROC glext_wglDestroyDisplayColorTableEXT
  = NULL;
PFNWGLDESTROYIMAGEBUFFERI3DPROC glext_wglDestroyImageBufferI3D = NULL;
PFNWGLDESTROYPBUFFERARBPROC glext_wglDestroyPbufferARB = NULL;
PFNWGLDESTROYPBUFFEREXTPROC glext_wglDestroyPbufferEXT = NULL;
PFNWGLDISABLEFRAMELOCKI3DPROC glext_wglDisableFrameLockI3D = NULL;
PFNWGLDISABLEGENLOCKI3DPROC glext_wglDisableGenlockI3D = NULL;
PFNWGLENABLEFRAMELOCKI3DPROC glext_wglEnableFrameLockI3D = NULL;
PFNWGLENABLEGENLOCKI3DPROC glext_wglEnableGenlockI3D = NULL;
PFNWGLENDFRAMETRACKINGI3DPROC glext_wglEndFrameTrackingI3D = NULL;
PFNWGLENUMGPUDEVICESNVPROC glext_wglEnumGpuDevicesNV = NULL;
PFNWGLENUMGPUSFROMAFFINITYDCNVPROC glext_wglEnumGpusFromAffinityDCNV = NULL;
PFNWGLENUMGPUSNVPROC glext_wglEnumGpusNV = NULL;
PFNWGLENUMERATEVIDEOCAPTUREDEVICESNVPROC
glext_wglEnumerateVideoCaptureDevicesNV = NULL;
PFNWGLENUMERATEVIDEODEVICESNVPROC glext_wglEnumerateVideoDevicesNV = NULL;
PFNWGLFREEMEMORYNVPROC glext_wglFreeMemoryNV = NULL;
PFNWGLGENLOCKSAMPLERATEI3DPROC glext_wglGenlockSampleRateI3D = NULL;
PFNWGLGENLOCKSOURCEDELAYI3DPROC glext_wglGenlockSourceDelayI3D = NULL;
PFNWGLGENLOCKSOURCEEDGEI3DPROC glext_wglGenlockSourceEdgeI3D = NULL;
PFNWGLGENLOCKSOURCEI3DPROC glext_wglGenlockSourceI3D = NULL;
PFNWGLGETCONTEXTGPUIDAMDPROC glext_wglGetContextGPUIDAMD = NULL;
PFNWGLGETCURRENTASSOCIATEDCONTEXTAMDPROC
glext_wglGetCurrentAssociatedContextAMD = NULL;
PFNWGLGETCURRENTREADDCARBPROC glext_wglGetCurrentReadDCARB = NULL;
PFNWGLGETCURRENTREADDCEXTPROC glext_wglGetCurrentReadDCEXT = NULL;
PFNWGLGETDIGITALVIDEOPARAMETERSI3DPROC glext_wglGetDigitalVideoParametersI3D
  = NULL;
PFNWGLGETEXTENSIONSSTRINGARBPROC glext_wglGetExtensionsStringARB = NULL;
PFNWGLGETEXTENSIONSSTRINGEXTPROC glext_wglGetExtensionsStringEXT = NULL;
PFNWGLGETFRAMEUSAGEI3DPROC glext_wglGetFrameUsageI3D = NULL;
PFNWGLGETGPUIDSAMDPROC glext_wglGetGPUIDsAMD = NULL;
PFNWGLGETGPUINFOAMDPROC glext_wglGetGPUInfoAMD = NULL;
PFNWGLGETGAMMATABLEI3DPROC glext_wglGetGammaTableI3D = NULL;
PFNWGLGETGAMMATABLEPARAMETERSI3DPROC glext_wglGetGammaTableParametersI3D
  = NULL;
PFNWGLGETGENLOCKSAMPLERATEI3DPROC glext_wglGetGenlockSampleRateI3D = NULL;
PFNWGLGETGENLOCKSOURCEDELAYI3DPROC glext_wglGetGenlockSourceDelayI3D = NULL;
PFNWGLGETGENLOCKSOURCEEDGEI3DPROC glext_wglGetGenlockSourceEdgeI3D = NULL;
PFNWGLGETGENLOCKSOURCEI3DPROC glext_wglGetGenlockSourceI3D = NULL;
PFNWGLGETMSCRATEOMLPROC glext_wglGetMscRateOML = NULL;
PFNWGLGETPBUFFERDCARBPROC glext_wglGetPbufferDCARB = NULL;
PFNWGLGETPBUFFERDCEXTPROC glext_wglGetPbufferDCEXT = NULL;
PFNWGLGETPIXELFORMATATTRIBFVARBPROC glext_wglGetPixelFormatAttribfvARB = NULL;
PFNWGLGETPIXELFORMATATTRIBFVEXTPROC glext_wglGetPixelFormatAttribfvEXT = NULL;
PFNWGLGETPIXELFORMATATTRIBIVARBPROC glext_wglGetPixelFormatAttribivARB = NULL;
PFNWGLGETPIXELFORMATATTRIBIVEXTPROC glext_wglGetPixelFormatAttribivEXT = NULL;
PFNWGLGETSWAPINTERVALEXTPROC glext_wglGetSwapIntervalEXT = NULL;
PFNWGLGETSYNCVALUESOMLPROC glext_wglGetSyncValuesOML = NULL;
PFNWGLGETVIDEODEVICENVPROC glext_wglGetVideoDeviceNV = NULL;
PFNWGLGETVIDEOINFONVPROC glext_wglGetVideoInfoNV = NULL;
PFNWGLISENABLEDFRAMELOCKI3DPROC glext_wglIsEnabledFrameLockI3D = NULL;
PFNWGLISENABLEDGENLOCKI3DPROC glext_wglIsEnabledGenlockI3D = NULL;
PFNWGLJOINSWAPGROUPNVPROC glext_wglJoinSwapGroupNV = NULL;
PFNWGLLOADDISPLAYCOLORTABLEEXTPROC glext_wglLoadDisplayColorTableEXT = NULL;
PFNWGLLOCKVIDEOCAPTUREDEVICENVPROC glext_wglLockVideoCaptureDeviceNV = NULL;
PFNWGLMAKEASSOCIATEDCONTEXTCURRENTAMDPROC
glext_wglMakeAssociatedContextCurrentAMD = NULL;
PFNWGLMAKECONTEXTCURRENTARBPROC glext_wglMakeContextCurrentARB = NULL;
PFNWGLMAKECONTEXTCURRENTEXTPROC glext_wglMakeContextCurrentEXT = NULL;
PFNWGLQUERYCURRENTCONTEXTNVPROC glext_wglQueryCurrentContextNV = NULL;
PFNWGLQUERYFRAMECOUNTNVPROC glext_wglQueryFrameCountNV = NULL;
PFNWGLQUERYFRAMELOCKMASTERI3DPROC glext_wglQueryFrameLockMasterI3D = NULL;
PFNWGLQUERYFRAMETRACKINGI3DPROC glext_wglQueryFrameTrackingI3D = NULL;
PFNWGLQUERYGENLOCKMAXSOURCEDELAYI3DPROC glext_wglQueryGenlockMaxSourceDelayI3D
  = NULL;
PFNWGLQUERYMAXSWAPGROUPSNVPROC glext_wglQueryMaxSwapGroupsNV = NULL;
PFNWGLQUERYPBUFFERARBPROC glext_wglQueryPbufferARB = NULL;
PFNWGLQUERYPBUFFEREXTPROC glext_wglQueryPbufferEXT = NULL;
PFNWGLQUERYSWAPGROUPNVPROC glext_wglQuerySwapGroupNV = NULL;
PFNWGLQUERYVIDEOCAPTUREDEVICENVPROC glext_wglQueryVideoCaptureDeviceNV = NULL;
PFNWGLRELEASEIMAGEBUFFEREVENTSI3DPROC glext_wglReleaseImageBufferEventsI3D
  = NULL;
PFNWGLRELEASEPBUFFERDCARBPROC glext_wglReleasePbufferDCARB = NULL;
PFNWGLRELEASEPBUFFERDCEXTPROC glext_wglReleasePbufferDCEXT = NULL;
PFNWGLRELEASETEXIMAGEARBPROC glext_wglReleaseTexImageARB = NULL;
PFNWGLRELEASEVIDEOCAPTUREDEVICENVPROC glext_wglReleaseVideoCaptureDeviceNV
  = NULL;
PFNWGLRELEASEVIDEODEVICENVPROC glext_wglReleaseVideoDeviceNV = NULL;
PFNWGLRELEASEVIDEOIMAGENVPROC glext_wglReleaseVideoImageNV = NULL;
PFNWGLRESETFRAMECOUNTNVPROC glext_wglResetFrameCountNV = NULL;
PFNWGLRESTOREBUFFERREGIONARBPROC glext_wglRestoreBufferRegionARB = NULL;
PFNWGLSAVEBUFFERREGIONARBPROC glext_wglSaveBufferRegionARB = NULL;
PFNWGLSENDPBUFFERTOVIDEONVPROC glext_wglSendPbufferToVideoNV = NULL;
PFNWGLSETDIGITALVIDEOPARAMETERSI3DPROC glext_wglSetDigitalVideoParametersI3D
  = NULL;
PFNWGLSETGAMMATABLEI3DPROC glext_wglSetGammaTableI3D = NULL;
PFNWGLSETGAMMATABLEPARAMETERSI3DPROC glext_wglSetGammaTableParametersI3D
  = NULL;
PFNWGLSETPBUFFERATTRIBARBPROC glext_wglSetPbufferAttribARB = NULL;
PFNWGLSETSTEREOEMITTERSTATE3DLPROC glext_wglSetStereoEmitterState3DL = NULL;
PFNWGLSWAPBUFFERSMSCOMLPROC glext_wglSwapBuffersMscOML = NULL;
PFNWGLSWAPINTERVALEXTPROC glext_wglSwapIntervalEXT = NULL;
PFNWGLSWAPLAYERBUFFERSMSCOMLPROC glext_wglSwapLayerBuffersMscOML = NULL;
PFNWGLWAITFORMSCOMLPROC glext_wglWaitForMscOML = NULL;
PFNWGLWAITFORSBCOMLPROC glext_wglWaitForSbcOML = NULL;

static void
glext_wgl_load_WGL_3DL_stereo_control (GLEXTuserptrloadfunc load,
                                       void* userptr) {
  if (!GLEXT_WGL_3DL_stereo_control)
    return;
  glext_wglSetStereoEmitterState3DL
    = (PFNWGLSETSTEREOEMITTERSTATE3DLPROC)load (userptr,
                                                "wglSetStereoEmitterState3DL");
}
static void
glext_wgl_load_WGL_AMD_gpu_association (GLEXTuserptrloadfunc load,
                                        void* userptr) {
  if (!GLEXT_WGL_AMD_gpu_association)
    return;
  glext_wglBlitContextFramebufferAMD
    = (PFNWGLBLITCONTEXTFRAMEBUFFERAMDPROC)load (
      userptr, "wglBlitContextFramebufferAMD");
  glext_wglCreateAssociatedContextAMD
    = (PFNWGLCREATEASSOCIATEDCONTEXTAMDPROC)load (
      userptr, "wglCreateAssociatedContextAMD");
  glext_wglCreateAssociatedContextAttribsAMD
    = (PFNWGLCREATEASSOCIATEDCONTEXTATTRIBSAMDPROC)load (
      userptr, "wglCreateAssociatedContextAttribsAMD");
  glext_wglDeleteAssociatedContextAMD
    = (PFNWGLDELETEASSOCIATEDCONTEXTAMDPROC)load (
      userptr, "wglDeleteAssociatedContextAMD");
  glext_wglGetContextGPUIDAMD
    = (PFNWGLGETCONTEXTGPUIDAMDPROC)load (userptr, "wglGetContextGPUIDAMD");
  glext_wglGetCurrentAssociatedContextAMD
    = (PFNWGLGETCURRENTASSOCIATEDCONTEXTAMDPROC)load (
      userptr, "wglGetCurrentAssociatedContextAMD");
  glext_wglGetGPUIDsAMD
    = (PFNWGLGETGPUIDSAMDPROC)load (userptr, "wglGetGPUIDsAMD");
  glext_wglGetGPUInfoAMD
    = (PFNWGLGETGPUINFOAMDPROC)load (userptr, "wglGetGPUInfoAMD");
  glext_wglMakeAssociatedContextCurrentAMD
    = (PFNWGLMAKEASSOCIATEDCONTEXTCURRENTAMDPROC)load (
      userptr, "wglMakeAssociatedContextCurrentAMD");
}
static void
glext_wgl_load_WGL_ARB_buffer_region (GLEXTuserptrloadfunc load,
                                      void* userptr) {
  if (!GLEXT_WGL_ARB_buffer_region)
    return;
  glext_wglCreateBufferRegionARB = (PFNWGLCREATEBUFFERREGIONARBPROC)load (
    userptr, "wglCreateBufferRegionARB");
  glext_wglDeleteBufferRegionARB = (PFNWGLDELETEBUFFERREGIONARBPROC)load (
    userptr, "wglDeleteBufferRegionARB");
  glext_wglRestoreBufferRegionARB = (PFNWGLRESTOREBUFFERREGIONARBPROC)load (
    userptr, "wglRestoreBufferRegionARB");
  glext_wglSaveBufferRegionARB
    = (PFNWGLSAVEBUFFERREGIONARBPROC)load (userptr, "wglSaveBufferRegionARB");
}
static void
glext_wgl_load_WGL_ARB_create_context (GLEXTuserptrloadfunc load,
                                       void* userptr) {
  if (!GLEXT_WGL_ARB_create_context)
    return;
  glext_wglCreateContextAttribsARB = (PFNWGLCREATECONTEXTATTRIBSARBPROC)load (
    userptr, "wglCreateContextAttribsARB");
}
static void
glext_wgl_load_WGL_ARB_extensions_string (GLEXTuserptrloadfunc load,
                                          void* userptr) {
  if (!GLEXT_WGL_ARB_extensions_string)
    return;
  glext_wglGetExtensionsStringARB = (PFNWGLGETEXTENSIONSSTRINGARBPROC)load (
    userptr, "wglGetExtensionsStringARB");
}
static void
glext_wgl_load_WGL_ARB_make_current_read (GLEXTuserptrloadfunc load,
                                          void* userptr) {
  if (!GLEXT_WGL_ARB_make_current_read)
    return;
  glext_wglGetCurrentReadDCARB
    = (PFNWGLGETCURRENTREADDCARBPROC)load (userptr, "wglGetCurrentReadDCARB");
  glext_wglMakeContextCurrentARB = (PFNWGLMAKECONTEXTCURRENTARBPROC)load (
    userptr, "wglMakeContextCurrentARB");
}
static void
glext_wgl_load_WGL_ARB_pbuffer (GLEXTuserptrloadfunc load, void* userptr) {
  if (!GLEXT_WGL_ARB_pbuffer)
    return;
  glext_wglCreatePbufferARB
    = (PFNWGLCREATEPBUFFERARBPROC)load (userptr, "wglCreatePbufferARB");
  glext_wglDestroyPbufferARB
    = (PFNWGLDESTROYPBUFFERARBPROC)load (userptr, "wglDestroyPbufferARB");
  glext_wglGetPbufferDCARB
    = (PFNWGLGETPBUFFERDCARBPROC)load (userptr, "wglGetPbufferDCARB");
  glext_wglQueryPbufferARB
    = (PFNWGLQUERYPBUFFERARBPROC)load (userptr, "wglQueryPbufferARB");
  glext_wglReleasePbufferDCARB
    = (PFNWGLRELEASEPBUFFERDCARBPROC)load (userptr, "wglReleasePbufferDCARB");
}
static void
glext_wgl_load_WGL_ARB_pixel_format (GLEXTuserptrloadfunc load,
                                     void* userptr) {
  if (!GLEXT_WGL_ARB_pixel_format)
    return;
  glext_wglChoosePixelFormatARB = (PFNWGLCHOOSEPIXELFORMATARBPROC)load (
    userptr, "wglChoosePixelFormatARB");
  glext_wglGetPixelFormatAttribfvARB
    = (PFNWGLGETPIXELFORMATATTRIBFVARBPROC)load (
      userptr, "wglGetPixelFormatAttribfvARB");
  glext_wglGetPixelFormatAttribivARB
    = (PFNWGLGETPIXELFORMATATTRIBIVARBPROC)load (
      userptr, "wglGetPixelFormatAttribivARB");
}
static void
glext_wgl_load_WGL_ARB_render_texture (GLEXTuserptrloadfunc load,
                                       void* userptr) {
  if (!GLEXT_WGL_ARB_render_texture)
    return;
  glext_wglBindTexImageARB
    = (PFNWGLBINDTEXIMAGEARBPROC)load (userptr, "wglBindTexImageARB");
  glext_wglReleaseTexImageARB
    = (PFNWGLRELEASETEXIMAGEARBPROC)load (userptr, "wglReleaseTexImageARB");
  glext_wglSetPbufferAttribARB
    = (PFNWGLSETPBUFFERATTRIBARBPROC)load (userptr, "wglSetPbufferAttribARB");
}
static void
glext_wgl_load_WGL_EXT_display_color_table (GLEXTuserptrloadfunc load,
                                            void* userptr) {
  if (!GLEXT_WGL_EXT_display_color_table)
    return;
  glext_wglBindDisplayColorTableEXT
    = (PFNWGLBINDDISPLAYCOLORTABLEEXTPROC)load (userptr,
                                                "wglBindDisplayColorTableEXT");
  glext_wglCreateDisplayColorTableEXT
    = (PFNWGLCREATEDISPLAYCOLORTABLEEXTPROC)load (
      userptr, "wglCreateDisplayColorTableEXT");
  glext_wglDestroyDisplayColorTableEXT
    = (PFNWGLDESTROYDISPLAYCOLORTABLEEXTPROC)load (
      userptr, "wglDestroyDisplayColorTableEXT");
  glext_wglLoadDisplayColorTableEXT
    = (PFNWGLLOADDISPLAYCOLORTABLEEXTPROC)load (userptr,
                                                "wglLoadDisplayColorTableEXT");
}
static void
glext_wgl_load_WGL_EXT_extensions_string (GLEXTuserptrloadfunc load,
                                          void* userptr) {
  if (!GLEXT_WGL_EXT_extensions_string)
    return;
  glext_wglGetExtensionsStringEXT = (PFNWGLGETEXTENSIONSSTRINGEXTPROC)load (
    userptr, "wglGetExtensionsStringEXT");
}
static void
glext_wgl_load_WGL_EXT_make_current_read (GLEXTuserptrloadfunc load,
                                          void* userptr) {
  if (!GLEXT_WGL_EXT_make_current_read)
    return;
  glext_wglGetCurrentReadDCEXT
    = (PFNWGLGETCURRENTREADDCEXTPROC)load (userptr, "wglGetCurrentReadDCEXT");
  glext_wglMakeContextCurrentEXT = (PFNWGLMAKECONTEXTCURRENTEXTPROC)load (
    userptr, "wglMakeContextCurrentEXT");
}
static void
glext_wgl_load_WGL_EXT_pbuffer (GLEXTuserptrloadfunc load, void* userptr) {
  if (!GLEXT_WGL_EXT_pbuffer)
    return;
  glext_wglCreatePbufferEXT
    = (PFNWGLCREATEPBUFFEREXTPROC)load (userptr, "wglCreatePbufferEXT");
  glext_wglDestroyPbufferEXT
    = (PFNWGLDESTROYPBUFFEREXTPROC)load (userptr, "wglDestroyPbufferEXT");
  glext_wglGetPbufferDCEXT
    = (PFNWGLGETPBUFFERDCEXTPROC)load (userptr, "wglGetPbufferDCEXT");
  glext_wglQueryPbufferEXT
    = (PFNWGLQUERYPBUFFEREXTPROC)load (userptr, "wglQueryPbufferEXT");
  glext_wglReleasePbufferDCEXT
    = (PFNWGLRELEASEPBUFFERDCEXTPROC)load (userptr, "wglReleasePbufferDCEXT");
}
static void
glext_wgl_load_WGL_EXT_pixel_format (GLEXTuserptrloadfunc load,
                                     void* userptr) {
  if (!GLEXT_WGL_EXT_pixel_format)
    return;
  glext_wglChoosePixelFormatEXT = (PFNWGLCHOOSEPIXELFORMATEXTPROC)load (
    userptr, "wglChoosePixelFormatEXT");
  glext_wglGetPixelFormatAttribfvEXT
    = (PFNWGLGETPIXELFORMATATTRIBFVEXTPROC)load (
      userptr, "wglGetPixelFormatAttribfvEXT");
  glext_wglGetPixelFormatAttribivEXT
    = (PFNWGLGETPIXELFORMATATTRIBIVEXTPROC)load (
      userptr, "wglGetPixelFormatAttribivEXT");
}
static void
glext_wgl_load_WGL_EXT_swap_control (GLEXTuserptrloadfunc load,
                                     void* userptr) {
  if (!GLEXT_WGL_EXT_swap_control)
    return;
  glext_wglGetSwapIntervalEXT
    = (PFNWGLGETSWAPINTERVALEXTPROC)load (userptr, "wglGetSwapIntervalEXT");
  glext_wglSwapIntervalEXT
    = (PFNWGLSWAPINTERVALEXTPROC)load (userptr, "wglSwapIntervalEXT");
}
static void
glext_wgl_load_WGL_I3D_digital_video_control (GLEXTuserptrloadfunc load,
                                              void* userptr) {
  if (!GLEXT_WGL_I3D_digital_video_control)
    return;
  glext_wglGetDigitalVideoParametersI3D
    = (PFNWGLGETDIGITALVIDEOPARAMETERSI3DPROC)load (
      userptr, "wglGetDigitalVideoParametersI3D");
  glext_wglSetDigitalVideoParametersI3D
    = (PFNWGLSETDIGITALVIDEOPARAMETERSI3DPROC)load (
      userptr, "wglSetDigitalVideoParametersI3D");
}
static void
glext_wgl_load_WGL_I3D_gamma (GLEXTuserptrloadfunc load, void* userptr) {
  if (!GLEXT_WGL_I3D_gamma)
    return;
  glext_wglGetGammaTableI3D
    = (PFNWGLGETGAMMATABLEI3DPROC)load (userptr, "wglGetGammaTableI3D");
  glext_wglGetGammaTableParametersI3D
    = (PFNWGLGETGAMMATABLEPARAMETERSI3DPROC)load (
      userptr, "wglGetGammaTableParametersI3D");
  glext_wglSetGammaTableI3D
    = (PFNWGLSETGAMMATABLEI3DPROC)load (userptr, "wglSetGammaTableI3D");
  glext_wglSetGammaTableParametersI3D
    = (PFNWGLSETGAMMATABLEPARAMETERSI3DPROC)load (
      userptr, "wglSetGammaTableParametersI3D");
}
static void
glext_wgl_load_WGL_I3D_genlock (GLEXTuserptrloadfunc load, void* userptr) {
  if (!GLEXT_WGL_I3D_genlock)
    return;
  glext_wglDisableGenlockI3D
    = (PFNWGLDISABLEGENLOCKI3DPROC)load (userptr, "wglDisableGenlockI3D");
  glext_wglEnableGenlockI3D
    = (PFNWGLENABLEGENLOCKI3DPROC)load (userptr, "wglEnableGenlockI3D");
  glext_wglGenlockSampleRateI3D = (PFNWGLGENLOCKSAMPLERATEI3DPROC)load (
    userptr, "wglGenlockSampleRateI3D");
  glext_wglGenlockSourceDelayI3D = (PFNWGLGENLOCKSOURCEDELAYI3DPROC)load (
    userptr, "wglGenlockSourceDelayI3D");
  glext_wglGenlockSourceEdgeI3D = (PFNWGLGENLOCKSOURCEEDGEI3DPROC)load (
    userptr, "wglGenlockSourceEdgeI3D");
  glext_wglGenlockSourceI3D
    = (PFNWGLGENLOCKSOURCEI3DPROC)load (userptr, "wglGenlockSourceI3D");
  glext_wglGetGenlockSampleRateI3D = (PFNWGLGETGENLOCKSAMPLERATEI3DPROC)load (
    userptr, "wglGetGenlockSampleRateI3D");
  glext_wglGetGenlockSourceDelayI3D
    = (PFNWGLGETGENLOCKSOURCEDELAYI3DPROC)load (userptr,
                                                "wglGetGenlockSourceDelayI3D");
  glext_wglGetGenlockSourceEdgeI3D = (PFNWGLGETGENLOCKSOURCEEDGEI3DPROC)load (
    userptr, "wglGetGenlockSourceEdgeI3D");
  glext_wglGetGenlockSourceI3D
    = (PFNWGLGETGENLOCKSOURCEI3DPROC)load (userptr, "wglGetGenlockSourceI3D");
  glext_wglIsEnabledGenlockI3D
    = (PFNWGLISENABLEDGENLOCKI3DPROC)load (userptr, "wglIsEnabledGenlockI3D");
  glext_wglQueryGenlockMaxSourceDelayI3D
    = (PFNWGLQUERYGENLOCKMAXSOURCEDELAYI3DPROC)load (
      userptr, "wglQueryGenlockMaxSourceDelayI3D");
}
static void
glext_wgl_load_WGL_I3D_image_buffer (GLEXTuserptrloadfunc load,
                                     void* userptr) {
  if (!GLEXT_WGL_I3D_image_buffer)
    return;
  glext_wglAssociateImageBufferEventsI3D
    = (PFNWGLASSOCIATEIMAGEBUFFEREVENTSI3DPROC)load (
      userptr, "wglAssociateImageBufferEventsI3D");
  glext_wglCreateImageBufferI3D = (PFNWGLCREATEIMAGEBUFFERI3DPROC)load (
    userptr, "wglCreateImageBufferI3D");
  glext_wglDestroyImageBufferI3D = (PFNWGLDESTROYIMAGEBUFFERI3DPROC)load (
    userptr, "wglDestroyImageBufferI3D");
  glext_wglReleaseImageBufferEventsI3D
    = (PFNWGLRELEASEIMAGEBUFFEREVENTSI3DPROC)load (
      userptr, "wglReleaseImageBufferEventsI3D");
}
static void
glext_wgl_load_WGL_I3D_swap_frame_lock (GLEXTuserptrloadfunc load,
                                        void* userptr) {
  if (!GLEXT_WGL_I3D_swap_frame_lock)
    return;
  glext_wglDisableFrameLockI3D
    = (PFNWGLDISABLEFRAMELOCKI3DPROC)load (userptr, "wglDisableFrameLockI3D");
  glext_wglEnableFrameLockI3D
    = (PFNWGLENABLEFRAMELOCKI3DPROC)load (userptr, "wglEnableFrameLockI3D");
  glext_wglIsEnabledFrameLockI3D = (PFNWGLISENABLEDFRAMELOCKI3DPROC)load (
    userptr, "wglIsEnabledFrameLockI3D");
  glext_wglQueryFrameLockMasterI3D = (PFNWGLQUERYFRAMELOCKMASTERI3DPROC)load (
    userptr, "wglQueryFrameLockMasterI3D");
}
static void
glext_wgl_load_WGL_I3D_swap_frame_usage (GLEXTuserptrloadfunc load,
                                         void* userptr) {
  if (!GLEXT_WGL_I3D_swap_frame_usage)
    return;
  glext_wglBeginFrameTrackingI3D = (PFNWGLBEGINFRAMETRACKINGI3DPROC)load (
    userptr, "wglBeginFrameTrackingI3D");
  glext_wglEndFrameTrackingI3D
    = (PFNWGLENDFRAMETRACKINGI3DPROC)load (userptr, "wglEndFrameTrackingI3D");
  glext_wglGetFrameUsageI3D
    = (PFNWGLGETFRAMEUSAGEI3DPROC)load (userptr, "wglGetFrameUsageI3D");
  glext_wglQueryFrameTrackingI3D = (PFNWGLQUERYFRAMETRACKINGI3DPROC)load (
    userptr, "wglQueryFrameTrackingI3D");
}
static void
glext_wgl_load_WGL_NV_DX_interop (GLEXTuserptrloadfunc load, void* userptr) {
  if (!GLEXT_WGL_NV_DX_interop)
    return;
  glext_wglDXCloseDeviceNV
    = (PFNWGLDXCLOSEDEVICENVPROC)load (userptr, "wglDXCloseDeviceNV");
  glext_wglDXLockObjectsNV
    = (PFNWGLDXLOCKOBJECTSNVPROC)load (userptr, "wglDXLockObjectsNV");
  glext_wglDXObjectAccessNV
    = (PFNWGLDXOBJECTACCESSNVPROC)load (userptr, "wglDXObjectAccessNV");
  glext_wglDXOpenDeviceNV
    = (PFNWGLDXOPENDEVICENVPROC)load (userptr, "wglDXOpenDeviceNV");
  glext_wglDXRegisterObjectNV
    = (PFNWGLDXREGISTEROBJECTNVPROC)load (userptr, "wglDXRegisterObjectNV");
  glext_wglDXSetResourceShareHandleNV
    = (PFNWGLDXSETRESOURCESHAREHANDLENVPROC)load (
      userptr, "wglDXSetResourceShareHandleNV");
  glext_wglDXUnlockObjectsNV
    = (PFNWGLDXUNLOCKOBJECTSNVPROC)load (userptr, "wglDXUnlockObjectsNV");
  glext_wglDXUnregisterObjectNV = (PFNWGLDXUNREGISTEROBJECTNVPROC)load (
    userptr, "wglDXUnregisterObjectNV");
}
static void
glext_wgl_load_WGL_NV_copy_image (GLEXTuserptrloadfunc load, void* userptr) {
  if (!GLEXT_WGL_NV_copy_image)
    return;
  glext_wglCopyImageSubDataNV
    = (PFNWGLCOPYIMAGESUBDATANVPROC)load (userptr, "wglCopyImageSubDataNV");
}
static void
glext_wgl_load_WGL_NV_delay_before_swap (GLEXTuserptrloadfunc load,
                                         void* userptr) {
  if (!GLEXT_WGL_NV_delay_before_swap)
    return;
  glext_wglDelayBeforeSwapNV
    = (PFNWGLDELAYBEFORESWAPNVPROC)load (userptr, "wglDelayBeforeSwapNV");
}
static void
glext_wgl_load_WGL_NV_gpu_affinity (GLEXTuserptrloadfunc load, void* userptr) {
  if (!GLEXT_WGL_NV_gpu_affinity)
    return;
  glext_wglCreateAffinityDCNV
    = (PFNWGLCREATEAFFINITYDCNVPROC)load (userptr, "wglCreateAffinityDCNV");
  glext_wglDeleteDCNV = (PFNWGLDELETEDCNVPROC)load (userptr, "wglDeleteDCNV");
  glext_wglEnumGpuDevicesNV
    = (PFNWGLENUMGPUDEVICESNVPROC)load (userptr, "wglEnumGpuDevicesNV");
  glext_wglEnumGpusFromAffinityDCNV
    = (PFNWGLENUMGPUSFROMAFFINITYDCNVPROC)load (userptr,
                                                "wglEnumGpusFromAffinityDCNV");
  glext_wglEnumGpusNV = (PFNWGLENUMGPUSNVPROC)load (userptr, "wglEnumGpusNV");
}
static void
glext_wgl_load_WGL_NV_present_video (GLEXTuserptrloadfunc load,
                                     void* userptr) {
  if (!GLEXT_WGL_NV_present_video)
    return;
  glext_wglBindVideoDeviceNV
    = (PFNWGLBINDVIDEODEVICENVPROC)load (userptr, "wglBindVideoDeviceNV");
  glext_wglEnumerateVideoDevicesNV = (PFNWGLENUMERATEVIDEODEVICESNVPROC)load (
    userptr, "wglEnumerateVideoDevicesNV");
  glext_wglQueryCurrentContextNV = (PFNWGLQUERYCURRENTCONTEXTNVPROC)load (
    userptr, "wglQueryCurrentContextNV");
}
static void
glext_wgl_load_WGL_NV_swap_group (GLEXTuserptrloadfunc load, void* userptr) {
  if (!GLEXT_WGL_NV_swap_group)
    return;
  glext_wglBindSwapBarrierNV
    = (PFNWGLBINDSWAPBARRIERNVPROC)load (userptr, "wglBindSwapBarrierNV");
  glext_wglJoinSwapGroupNV
    = (PFNWGLJOINSWAPGROUPNVPROC)load (userptr, "wglJoinSwapGroupNV");
  glext_wglQueryFrameCountNV
    = (PFNWGLQUERYFRAMECOUNTNVPROC)load (userptr, "wglQueryFrameCountNV");
  glext_wglQueryMaxSwapGroupsNV = (PFNWGLQUERYMAXSWAPGROUPSNVPROC)load (
    userptr, "wglQueryMaxSwapGroupsNV");
  glext_wglQuerySwapGroupNV
    = (PFNWGLQUERYSWAPGROUPNVPROC)load (userptr, "wglQuerySwapGroupNV");
  glext_wglResetFrameCountNV
    = (PFNWGLRESETFRAMECOUNTNVPROC)load (userptr, "wglResetFrameCountNV");
}
static void
glext_wgl_load_WGL_NV_vertex_array_range (GLEXTuserptrloadfunc load,
                                          void* userptr) {
  if (!GLEXT_WGL_NV_vertex_array_range)
    return;
  glext_wglAllocateMemoryNV
    = (PFNWGLALLOCATEMEMORYNVPROC)load (userptr, "wglAllocateMemoryNV");
  glext_wglFreeMemoryNV
    = (PFNWGLFREEMEMORYNVPROC)load (userptr, "wglFreeMemoryNV");
}
static void
glext_wgl_load_WGL_NV_video_capture (GLEXTuserptrloadfunc load,
                                     void* userptr) {
  if (!GLEXT_WGL_NV_video_capture)
    return;
  glext_wglBindVideoCaptureDeviceNV
    = (PFNWGLBINDVIDEOCAPTUREDEVICENVPROC)load (userptr,
                                                "wglBindVideoCaptureDeviceNV");
  glext_wglEnumerateVideoCaptureDevicesNV
    = (PFNWGLENUMERATEVIDEOCAPTUREDEVICESNVPROC)load (
      userptr, "wglEnumerateVideoCaptureDevicesNV");
  glext_wglLockVideoCaptureDeviceNV
    = (PFNWGLLOCKVIDEOCAPTUREDEVICENVPROC)load (userptr,
                                                "wglLockVideoCaptureDeviceNV");
  glext_wglQueryVideoCaptureDeviceNV
    = (PFNWGLQUERYVIDEOCAPTUREDEVICENVPROC)load (
      userptr, "wglQueryVideoCaptureDeviceNV");
  glext_wglReleaseVideoCaptureDeviceNV
    = (PFNWGLRELEASEVIDEOCAPTUREDEVICENVPROC)load (
      userptr, "wglReleaseVideoCaptureDeviceNV");
}
static void
glext_wgl_load_WGL_NV_video_output (GLEXTuserptrloadfunc load, void* userptr) {
  if (!GLEXT_WGL_NV_video_output)
    return;
  glext_wglBindVideoImageNV
    = (PFNWGLBINDVIDEOIMAGENVPROC)load (userptr, "wglBindVideoImageNV");
  glext_wglGetVideoDeviceNV
    = (PFNWGLGETVIDEODEVICENVPROC)load (userptr, "wglGetVideoDeviceNV");
  glext_wglGetVideoInfoNV
    = (PFNWGLGETVIDEOINFONVPROC)load (userptr, "wglGetVideoInfoNV");
  glext_wglReleaseVideoDeviceNV = (PFNWGLRELEASEVIDEODEVICENVPROC)load (
    userptr, "wglReleaseVideoDeviceNV");
  glext_wglReleaseVideoImageNV
    = (PFNWGLRELEASEVIDEOIMAGENVPROC)load (userptr, "wglReleaseVideoImageNV");
  glext_wglSendPbufferToVideoNV = (PFNWGLSENDPBUFFERTOVIDEONVPROC)load (
    userptr, "wglSendPbufferToVideoNV");
}
static void
glext_wgl_load_WGL_OML_sync_control (GLEXTuserptrloadfunc load,
                                     void* userptr) {
  if (!GLEXT_WGL_OML_sync_control)
    return;
  glext_wglGetMscRateOML
    = (PFNWGLGETMSCRATEOMLPROC)load (userptr, "wglGetMscRateOML");
  glext_wglGetSyncValuesOML
    = (PFNWGLGETSYNCVALUESOMLPROC)load (userptr, "wglGetSyncValuesOML");
  glext_wglSwapBuffersMscOML
    = (PFNWGLSWAPBUFFERSMSCOMLPROC)load (userptr, "wglSwapBuffersMscOML");
  glext_wglSwapLayerBuffersMscOML = (PFNWGLSWAPLAYERBUFFERSMSCOMLPROC)load (
    userptr, "wglSwapLayerBuffersMscOML");
  glext_wglWaitForMscOML
    = (PFNWGLWAITFORMSCOMLPROC)load (userptr, "wglWaitForMscOML");
  glext_wglWaitForSbcOML
    = (PFNWGLWAITFORSBCOMLPROC)load (userptr, "wglWaitForSbcOML");
}

static void
glext_wgl_resolve_aliases (void) {}

static int
glext_wgl_has_extension (HDC hdc, const char* ext) {
  const char* terminator;
  const char* loc;
  const char* extensions;

  if (wglGetExtensionsStringEXT == NULL && wglGetExtensionsStringARB == NULL)
    return 0;

  if (wglGetExtensionsStringARB == NULL || hdc == INVALID_HANDLE_VALUE)
    extensions = wglGetExtensionsStringEXT ();
  else
    extensions = wglGetExtensionsStringARB (hdc);

  if (extensions == NULL || ext == NULL)
    return 0;

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

  return 0;
}

static GLEXTapiproc
glext_wgl_get_proc_from_userptr (void* userptr, const char* name) {
  return (GLEXT_GNUC_EXTENSION (GLEXTapiproc (*) (const char* name))
            userptr) (name);
}

static int
glext_wgl_find_extensions_wgl (HDC hdc) {
  GLEXT_WGL_3DFX_multisample
    = glext_wgl_has_extension (hdc, "WGL_3DFX_multisample");
  GLEXT_WGL_3DL_stereo_control
    = glext_wgl_has_extension (hdc, "WGL_3DL_stereo_control");
  GLEXT_WGL_AMD_gpu_association
    = glext_wgl_has_extension (hdc, "WGL_AMD_gpu_association");
  GLEXT_WGL_ARB_buffer_region
    = glext_wgl_has_extension (hdc, "WGL_ARB_buffer_region");
  GLEXT_WGL_ARB_context_flush_control
    = glext_wgl_has_extension (hdc, "WGL_ARB_context_flush_control");
  GLEXT_WGL_ARB_create_context
    = glext_wgl_has_extension (hdc, "WGL_ARB_create_context");
  GLEXT_WGL_ARB_create_context_no_error
    = glext_wgl_has_extension (hdc, "WGL_ARB_create_context_no_error");
  GLEXT_WGL_ARB_create_context_profile
    = glext_wgl_has_extension (hdc, "WGL_ARB_create_context_profile");
  GLEXT_WGL_ARB_create_context_robustness
    = glext_wgl_has_extension (hdc, "WGL_ARB_create_context_robustness");
  GLEXT_WGL_ARB_extensions_string
    = glext_wgl_has_extension (hdc, "WGL_ARB_extensions_string");
  GLEXT_WGL_ARB_framebuffer_sRGB
    = glext_wgl_has_extension (hdc, "WGL_ARB_framebuffer_sRGB");
  GLEXT_WGL_ARB_make_current_read
    = glext_wgl_has_extension (hdc, "WGL_ARB_make_current_read");
  GLEXT_WGL_ARB_multisample
    = glext_wgl_has_extension (hdc, "WGL_ARB_multisample");
  GLEXT_WGL_ARB_pbuffer = glext_wgl_has_extension (hdc, "WGL_ARB_pbuffer");
  GLEXT_WGL_ARB_pixel_format
    = glext_wgl_has_extension (hdc, "WGL_ARB_pixel_format");
  GLEXT_WGL_ARB_pixel_format_float
    = glext_wgl_has_extension (hdc, "WGL_ARB_pixel_format_float");
  GLEXT_WGL_ARB_render_texture
    = glext_wgl_has_extension (hdc, "WGL_ARB_render_texture");
  GLEXT_WGL_ARB_robustness_application_isolation = glext_wgl_has_extension (
    hdc, "WGL_ARB_robustness_application_isolation");
  GLEXT_WGL_ARB_robustness_share_group_isolation = glext_wgl_has_extension (
    hdc, "WGL_ARB_robustness_share_group_isolation");
  GLEXT_WGL_ATI_pixel_format_float
    = glext_wgl_has_extension (hdc, "WGL_ATI_pixel_format_float");
  GLEXT_WGL_ATI_render_texture_rectangle
    = glext_wgl_has_extension (hdc, "WGL_ATI_render_texture_rectangle");
  GLEXT_WGL_EXT_colorspace
    = glext_wgl_has_extension (hdc, "WGL_EXT_colorspace");
  GLEXT_WGL_EXT_create_context_es2_profile
    = glext_wgl_has_extension (hdc, "WGL_EXT_create_context_es2_profile");
  GLEXT_WGL_EXT_create_context_es_profile
    = glext_wgl_has_extension (hdc, "WGL_EXT_create_context_es_profile");
  GLEXT_WGL_EXT_depth_float
    = glext_wgl_has_extension (hdc, "WGL_EXT_depth_float");
  GLEXT_WGL_EXT_display_color_table
    = glext_wgl_has_extension (hdc, "WGL_EXT_display_color_table");
  GLEXT_WGL_EXT_extensions_string
    = glext_wgl_has_extension (hdc, "WGL_EXT_extensions_string");
  GLEXT_WGL_EXT_framebuffer_sRGB
    = glext_wgl_has_extension (hdc, "WGL_EXT_framebuffer_sRGB");
  GLEXT_WGL_EXT_make_current_read
    = glext_wgl_has_extension (hdc, "WGL_EXT_make_current_read");
  GLEXT_WGL_EXT_multisample
    = glext_wgl_has_extension (hdc, "WGL_EXT_multisample");
  GLEXT_WGL_EXT_pbuffer = glext_wgl_has_extension (hdc, "WGL_EXT_pbuffer");
  GLEXT_WGL_EXT_pixel_format
    = glext_wgl_has_extension (hdc, "WGL_EXT_pixel_format");
  GLEXT_WGL_EXT_pixel_format_packed_float
    = glext_wgl_has_extension (hdc, "WGL_EXT_pixel_format_packed_float");
  GLEXT_WGL_EXT_swap_control
    = glext_wgl_has_extension (hdc, "WGL_EXT_swap_control");
  GLEXT_WGL_EXT_swap_control_tear
    = glext_wgl_has_extension (hdc, "WGL_EXT_swap_control_tear");
  GLEXT_WGL_I3D_digital_video_control
    = glext_wgl_has_extension (hdc, "WGL_I3D_digital_video_control");
  GLEXT_WGL_I3D_gamma = glext_wgl_has_extension (hdc, "WGL_I3D_gamma");
  GLEXT_WGL_I3D_genlock = glext_wgl_has_extension (hdc, "WGL_I3D_genlock");
  GLEXT_WGL_I3D_image_buffer
    = glext_wgl_has_extension (hdc, "WGL_I3D_image_buffer");
  GLEXT_WGL_I3D_swap_frame_lock
    = glext_wgl_has_extension (hdc, "WGL_I3D_swap_frame_lock");
  GLEXT_WGL_I3D_swap_frame_usage
    = glext_wgl_has_extension (hdc, "WGL_I3D_swap_frame_usage");
  GLEXT_WGL_NV_DX_interop = glext_wgl_has_extension (hdc, "WGL_NV_DX_interop");
  GLEXT_WGL_NV_DX_interop2
    = glext_wgl_has_extension (hdc, "WGL_NV_DX_interop2");
  GLEXT_WGL_NV_copy_image = glext_wgl_has_extension (hdc, "WGL_NV_copy_image");
  GLEXT_WGL_NV_delay_before_swap
    = glext_wgl_has_extension (hdc, "WGL_NV_delay_before_swap");
  GLEXT_WGL_NV_float_buffer
    = glext_wgl_has_extension (hdc, "WGL_NV_float_buffer");
  GLEXT_WGL_NV_gpu_affinity
    = glext_wgl_has_extension (hdc, "WGL_NV_gpu_affinity");
  GLEXT_WGL_NV_multigpu_context
    = glext_wgl_has_extension (hdc, "WGL_NV_multigpu_context");
  GLEXT_WGL_NV_multisample_coverage
    = glext_wgl_has_extension (hdc, "WGL_NV_multisample_coverage");
  GLEXT_WGL_NV_present_video
    = glext_wgl_has_extension (hdc, "WGL_NV_present_video");
  GLEXT_WGL_NV_render_depth_texture
    = glext_wgl_has_extension (hdc, "WGL_NV_render_depth_texture");
  GLEXT_WGL_NV_render_texture_rectangle
    = glext_wgl_has_extension (hdc, "WGL_NV_render_texture_rectangle");
  GLEXT_WGL_NV_swap_group = glext_wgl_has_extension (hdc, "WGL_NV_swap_group");
  GLEXT_WGL_NV_vertex_array_range
    = glext_wgl_has_extension (hdc, "WGL_NV_vertex_array_range");
  GLEXT_WGL_NV_video_capture
    = glext_wgl_has_extension (hdc, "WGL_NV_video_capture");
  GLEXT_WGL_NV_video_output
    = glext_wgl_has_extension (hdc, "WGL_NV_video_output");
  GLEXT_WGL_OML_sync_control
    = glext_wgl_has_extension (hdc, "WGL_OML_sync_control");
  return 1;
}

static int
glext_wgl_find_core_wgl (void) {
  int major = 1, minor = 0;
  GLEXT_WGL_VERSION_1_0 = (major == 1 && minor >= 0) || major > 1;
  return GLEXT_MAKE_VERSION (major, minor);
}

int
glext_LoadWGLUserPtr (HDC hdc, GLEXTuserptrloadfunc load, void* userptr) {
  int version;
  wglGetExtensionsStringARB = (PFNWGLGETEXTENSIONSSTRINGARBPROC)load (
    userptr, "wglGetExtensionsStringARB");
  wglGetExtensionsStringEXT = (PFNWGLGETEXTENSIONSSTRINGEXTPROC)load (
    userptr, "wglGetExtensionsStringEXT");
  if (wglGetExtensionsStringARB == NULL && wglGetExtensionsStringEXT == NULL)
    return 0;
  version = glext_wgl_find_core_wgl ();

  if (!glext_wgl_find_extensions_wgl (hdc))
    return 0;
  glext_wgl_load_WGL_3DL_stereo_control (load, userptr);
  glext_wgl_load_WGL_AMD_gpu_association (load, userptr);
  glext_wgl_load_WGL_ARB_buffer_region (load, userptr);
  glext_wgl_load_WGL_ARB_create_context (load, userptr);
  glext_wgl_load_WGL_ARB_extensions_string (load, userptr);
  glext_wgl_load_WGL_ARB_make_current_read (load, userptr);
  glext_wgl_load_WGL_ARB_pbuffer (load, userptr);
  glext_wgl_load_WGL_ARB_pixel_format (load, userptr);
  glext_wgl_load_WGL_ARB_render_texture (load, userptr);
  glext_wgl_load_WGL_EXT_display_color_table (load, userptr);
  glext_wgl_load_WGL_EXT_extensions_string (load, userptr);
  glext_wgl_load_WGL_EXT_make_current_read (load, userptr);
  glext_wgl_load_WGL_EXT_pbuffer (load, userptr);
  glext_wgl_load_WGL_EXT_pixel_format (load, userptr);
  glext_wgl_load_WGL_EXT_swap_control (load, userptr);
  glext_wgl_load_WGL_I3D_digital_video_control (load, userptr);
  glext_wgl_load_WGL_I3D_gamma (load, userptr);
  glext_wgl_load_WGL_I3D_genlock (load, userptr);
  glext_wgl_load_WGL_I3D_image_buffer (load, userptr);
  glext_wgl_load_WGL_I3D_swap_frame_lock (load, userptr);
  glext_wgl_load_WGL_I3D_swap_frame_usage (load, userptr);
  glext_wgl_load_WGL_NV_DX_interop (load, userptr);
  glext_wgl_load_WGL_NV_copy_image (load, userptr);
  glext_wgl_load_WGL_NV_delay_before_swap (load, userptr);
  glext_wgl_load_WGL_NV_gpu_affinity (load, userptr);
  glext_wgl_load_WGL_NV_present_video (load, userptr);
  glext_wgl_load_WGL_NV_swap_group (load, userptr);
  glext_wgl_load_WGL_NV_vertex_array_range (load, userptr);
  glext_wgl_load_WGL_NV_video_capture (load, userptr);
  glext_wgl_load_WGL_NV_video_output (load, userptr);
  glext_wgl_load_WGL_OML_sync_control (load, userptr);

  glext_wgl_resolve_aliases ();

  return version;
}

int
glext_LoadWGL (HDC hdc, GLEXTloadfunc load) {
  return glext_LoadWGLUserPtr (hdc, glext_wgl_get_proc_from_userptr,
                               GLEXT_GNUC_EXTENSION (void*) load);
}

#ifdef GLEXT_WGL

static GLEXTapiproc
glext_wgl_get_proc (void* vuserptr, const char* name) {
  GLEXT_UNUSED (vuserptr);
  return GLEXT_GNUC_EXTENSION (GLEXTapiproc) wglGetProcAddress (name);
}

int
glext_LoaderLoadWGL (HDC hdc) {
  return glext_LoadWGLUserPtr (hdc, glext_wgl_get_proc, NULL);
}

#endif /* GLEXT_WGL */

#ifdef __cplusplus
}
#endif

#endif // GLEXT_WGL_COMPILE 1

#endif // __has_include(<Windows.h>)
