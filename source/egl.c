/**
 * SPDX-License-Identifier: (WTFPL OR CC0-1.0) AND Apache-2.0
 */
#include <stdio.h>
#include <string.h>
#include <glext/egl.h>

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

int GLEXT_EGL_VERSION_1_0 = 0;
int GLEXT_EGL_VERSION_1_1 = 0;
int GLEXT_EGL_VERSION_1_2 = 0;
int GLEXT_EGL_VERSION_1_3 = 0;
int GLEXT_EGL_VERSION_1_4 = 0;
int GLEXT_EGL_VERSION_1_5 = 0;
int GLEXT_EGL_ANDROID_GLES_layers = 0;
int GLEXT_EGL_ANDROID_blob_cache = 0;
int GLEXT_EGL_ANDROID_create_native_client_buffer = 0;
int GLEXT_EGL_ANDROID_framebuffer_target = 0;
int GLEXT_EGL_ANDROID_front_buffer_auto_refresh = 0;
int GLEXT_EGL_ANDROID_get_frame_timestamps = 0;
int GLEXT_EGL_ANDROID_get_native_client_buffer = 0;
int GLEXT_EGL_ANDROID_image_native_buffer = 0;
int GLEXT_EGL_ANDROID_native_fence_sync = 0;
int GLEXT_EGL_ANDROID_presentation_time = 0;
int GLEXT_EGL_ANDROID_recordable = 0;
int GLEXT_EGL_ANDROID_telemetry_hint = 0;
int GLEXT_EGL_ANGLE_d3d_share_handle_client_buffer = 0;
int GLEXT_EGL_ANGLE_device_d3d = 0;
int GLEXT_EGL_ANGLE_query_surface_pointer = 0;
int GLEXT_EGL_ANGLE_surface_d3d_texture_2d_share_handle = 0;
int GLEXT_EGL_ANGLE_sync_control_rate = 0;
int GLEXT_EGL_ANGLE_window_fixed_size = 0;
int GLEXT_EGL_ARM_image_format = 0;
int GLEXT_EGL_ARM_implicit_external_sync = 0;
int GLEXT_EGL_ARM_pixmap_multisample_discard = 0;
int GLEXT_EGL_EXT_bind_to_front = 0;
int GLEXT_EGL_EXT_buffer_age = 0;
int GLEXT_EGL_EXT_client_extensions = 0;
int GLEXT_EGL_EXT_client_sync = 0;
int GLEXT_EGL_EXT_compositor = 0;
int GLEXT_EGL_EXT_config_select_group = 0;
int GLEXT_EGL_EXT_create_context_robustness = 0;
int GLEXT_EGL_EXT_device_base = 0;
int GLEXT_EGL_EXT_device_drm = 0;
int GLEXT_EGL_EXT_device_drm_render_node = 0;
int GLEXT_EGL_EXT_device_enumeration = 0;
int GLEXT_EGL_EXT_device_openwf = 0;
int GLEXT_EGL_EXT_device_persistent_id = 0;
int GLEXT_EGL_EXT_device_query = 0;
int GLEXT_EGL_EXT_device_query_name = 0;
int GLEXT_EGL_EXT_device_type = 0;
int GLEXT_EGL_EXT_display_alloc = 0;
int GLEXT_EGL_EXT_explicit_device = 0;
int GLEXT_EGL_EXT_gl_colorspace_bt2020_hlg = 0;
int GLEXT_EGL_EXT_gl_colorspace_bt2020_linear = 0;
int GLEXT_EGL_EXT_gl_colorspace_bt2020_pq = 0;
int GLEXT_EGL_EXT_gl_colorspace_display_p3 = 0;
int GLEXT_EGL_EXT_gl_colorspace_display_p3_linear = 0;
int GLEXT_EGL_EXT_gl_colorspace_display_p3_passthrough = 0;
int GLEXT_EGL_EXT_gl_colorspace_scrgb = 0;
int GLEXT_EGL_EXT_gl_colorspace_scrgb_linear = 0;
int GLEXT_EGL_EXT_image_dma_buf_import = 0;
int GLEXT_EGL_EXT_image_dma_buf_import_modifiers = 0;
int GLEXT_EGL_EXT_image_gl_colorspace = 0;
int GLEXT_EGL_EXT_image_implicit_sync_control = 0;
int GLEXT_EGL_EXT_multiview_window = 0;
int GLEXT_EGL_EXT_output_base = 0;
int GLEXT_EGL_EXT_output_drm = 0;
int GLEXT_EGL_EXT_output_openwf = 0;
int GLEXT_EGL_EXT_pixel_format_float = 0;
int GLEXT_EGL_EXT_platform_base = 0;
int GLEXT_EGL_EXT_platform_device = 0;
int GLEXT_EGL_EXT_platform_wayland = 0;
int GLEXT_EGL_EXT_platform_x11 = 0;
int GLEXT_EGL_EXT_platform_xcb = 0;
int GLEXT_EGL_EXT_present_opaque = 0;
int GLEXT_EGL_EXT_protected_content = 0;
int GLEXT_EGL_EXT_protected_surface = 0;
int GLEXT_EGL_EXT_query_reset_notification_strategy = 0;
int GLEXT_EGL_EXT_stream_consumer_egloutput = 0;
int GLEXT_EGL_EXT_surface_CTA861_3_metadata = 0;
int GLEXT_EGL_EXT_surface_SMPTE2086_metadata = 0;
int GLEXT_EGL_EXT_surface_compression = 0;
int GLEXT_EGL_EXT_swap_buffers_with_damage = 0;
int GLEXT_EGL_EXT_sync_reuse = 0;
int GLEXT_EGL_EXT_yuv_surface = 0;
int GLEXT_EGL_HI_clientpixmap = 0;
int GLEXT_EGL_HI_colorformats = 0;
int GLEXT_EGL_IMG_context_priority = 0;
int GLEXT_EGL_IMG_image_plane_attribs = 0;
int GLEXT_EGL_KHR_cl_event = 0;
int GLEXT_EGL_KHR_cl_event2 = 0;
int GLEXT_EGL_KHR_client_get_all_proc_addresses = 0;
int GLEXT_EGL_KHR_config_attribs = 0;
int GLEXT_EGL_KHR_context_flush_control = 0;
int GLEXT_EGL_KHR_create_context = 0;
int GLEXT_EGL_KHR_create_context_no_error = 0;
int GLEXT_EGL_KHR_debug = 0;
int GLEXT_EGL_KHR_display_reference = 0;
int GLEXT_EGL_KHR_fence_sync = 0;
int GLEXT_EGL_KHR_get_all_proc_addresses = 0;
int GLEXT_EGL_KHR_gl_colorspace = 0;
int GLEXT_EGL_KHR_gl_renderbuffer_image = 0;
int GLEXT_EGL_KHR_gl_texture_2D_image = 0;
int GLEXT_EGL_KHR_gl_texture_3D_image = 0;
int GLEXT_EGL_KHR_gl_texture_cubemap_image = 0;
int GLEXT_EGL_KHR_image = 0;
int GLEXT_EGL_KHR_image_base = 0;
int GLEXT_EGL_KHR_image_pixmap = 0;
int GLEXT_EGL_KHR_lock_surface = 0;
int GLEXT_EGL_KHR_lock_surface2 = 0;
int GLEXT_EGL_KHR_lock_surface3 = 0;
int GLEXT_EGL_KHR_mutable_render_buffer = 0;
int GLEXT_EGL_KHR_no_config_context = 0;
int GLEXT_EGL_KHR_partial_update = 0;
int GLEXT_EGL_KHR_platform_android = 0;
int GLEXT_EGL_KHR_platform_gbm = 0;
int GLEXT_EGL_KHR_platform_wayland = 0;
int GLEXT_EGL_KHR_platform_x11 = 0;
int GLEXT_EGL_KHR_reusable_sync = 0;
int GLEXT_EGL_KHR_stream = 0;
int GLEXT_EGL_KHR_stream_attrib = 0;
int GLEXT_EGL_KHR_stream_consumer_gltexture = 0;
int GLEXT_EGL_KHR_stream_cross_process_fd = 0;
int GLEXT_EGL_KHR_stream_fifo = 0;
int GLEXT_EGL_KHR_stream_producer_aldatalocator = 0;
int GLEXT_EGL_KHR_stream_producer_eglsurface = 0;
int GLEXT_EGL_KHR_surfaceless_context = 0;
int GLEXT_EGL_KHR_swap_buffers_with_damage = 0;
int GLEXT_EGL_KHR_vg_parent_image = 0;
int GLEXT_EGL_KHR_wait_sync = 0;
int GLEXT_EGL_MESA_drm_image = 0;
int GLEXT_EGL_MESA_image_dma_buf_export = 0;
int GLEXT_EGL_MESA_platform_gbm = 0;
int GLEXT_EGL_MESA_platform_surfaceless = 0;
int GLEXT_EGL_MESA_query_driver = 0;
int GLEXT_EGL_NOK_swap_region = 0;
int GLEXT_EGL_NOK_swap_region2 = 0;
int GLEXT_EGL_NOK_texture_from_pixmap = 0;
int GLEXT_EGL_NV_3dvision_surface = 0;
int GLEXT_EGL_NV_context_priority_realtime = 0;
int GLEXT_EGL_NV_coverage_sample = 0;
int GLEXT_EGL_NV_coverage_sample_resolve = 0;
int GLEXT_EGL_NV_cuda_event = 0;
int GLEXT_EGL_NV_depth_nonlinear = 0;
int GLEXT_EGL_NV_device_cuda = 0;
int GLEXT_EGL_NV_native_query = 0;
int GLEXT_EGL_NV_post_convert_rounding = 0;
int GLEXT_EGL_NV_post_sub_buffer = 0;
int GLEXT_EGL_NV_quadruple_buffer = 0;
int GLEXT_EGL_NV_robustness_video_memory_purge = 0;
int GLEXT_EGL_NV_stream_consumer_eglimage = 0;
int GLEXT_EGL_NV_stream_consumer_eglimage_use_scanout_attrib = 0;
int GLEXT_EGL_NV_stream_consumer_gltexture_yuv = 0;
int GLEXT_EGL_NV_stream_cross_display = 0;
int GLEXT_EGL_NV_stream_cross_object = 0;
int GLEXT_EGL_NV_stream_cross_partition = 0;
int GLEXT_EGL_NV_stream_cross_process = 0;
int GLEXT_EGL_NV_stream_cross_system = 0;
int GLEXT_EGL_NV_stream_dma = 0;
int GLEXT_EGL_NV_stream_fifo_next = 0;
int GLEXT_EGL_NV_stream_fifo_synchronous = 0;
int GLEXT_EGL_NV_stream_flush = 0;
int GLEXT_EGL_NV_stream_frame_limits = 0;
int GLEXT_EGL_NV_stream_metadata = 0;
int GLEXT_EGL_NV_stream_origin = 0;
int GLEXT_EGL_NV_stream_remote = 0;
int GLEXT_EGL_NV_stream_reset = 0;
int GLEXT_EGL_NV_stream_socket = 0;
int GLEXT_EGL_NV_stream_socket_inet = 0;
int GLEXT_EGL_NV_stream_socket_unix = 0;
int GLEXT_EGL_NV_stream_sync = 0;
int GLEXT_EGL_NV_sync = 0;
int GLEXT_EGL_NV_system_time = 0;
int GLEXT_EGL_NV_triple_buffer = 0;
int GLEXT_EGL_QNX_image_native_buffer = 0;
int GLEXT_EGL_QNX_platform_screen = 0;
int GLEXT_EGL_TIZEN_image_native_buffer = 0;
int GLEXT_EGL_TIZEN_image_native_surface = 0;
int GLEXT_EGL_WL_bind_wayland_display = 0;
int GLEXT_EGL_WL_create_wayland_buffer_from_image = 0;

PFNEGLBINDAPIPROC glext_eglBindAPI = NULL;
PFNEGLBINDTEXIMAGEPROC glext_eglBindTexImage = NULL;
PFNEGLBINDWAYLANDDISPLAYWLPROC glext_eglBindWaylandDisplayWL = NULL;
PFNEGLCHOOSECONFIGPROC glext_eglChooseConfig = NULL;
PFNEGLCLIENTSIGNALSYNCEXTPROC glext_eglClientSignalSyncEXT = NULL;
PFNEGLCLIENTWAITSYNCPROC glext_eglClientWaitSync = NULL;
PFNEGLCLIENTWAITSYNCKHRPROC glext_eglClientWaitSyncKHR = NULL;
PFNEGLCLIENTWAITSYNCNVPROC glext_eglClientWaitSyncNV = NULL;
PFNEGLCOMPOSITORBINDTEXWINDOWEXTPROC glext_eglCompositorBindTexWindowEXT
  = NULL;
PFNEGLCOMPOSITORSETCONTEXTATTRIBUTESEXTPROC
glext_eglCompositorSetContextAttributesEXT = NULL;
PFNEGLCOMPOSITORSETCONTEXTLISTEXTPROC glext_eglCompositorSetContextListEXT
  = NULL;
PFNEGLCOMPOSITORSETSIZEEXTPROC glext_eglCompositorSetSizeEXT = NULL;
PFNEGLCOMPOSITORSETWINDOWATTRIBUTESEXTPROC
glext_eglCompositorSetWindowAttributesEXT = NULL;
PFNEGLCOMPOSITORSETWINDOWLISTEXTPROC glext_eglCompositorSetWindowListEXT
  = NULL;
PFNEGLCOMPOSITORSWAPPOLICYEXTPROC glext_eglCompositorSwapPolicyEXT = NULL;
PFNEGLCOPYBUFFERSPROC glext_eglCopyBuffers = NULL;
PFNEGLCREATECONTEXTPROC glext_eglCreateContext = NULL;
PFNEGLCREATEDRMIMAGEMESAPROC glext_eglCreateDRMImageMESA = NULL;
PFNEGLCREATEFENCESYNCNVPROC glext_eglCreateFenceSyncNV = NULL;
PFNEGLCREATEIMAGEPROC glext_eglCreateImage = NULL;
PFNEGLCREATEIMAGEKHRPROC glext_eglCreateImageKHR = NULL;
PFNEGLCREATENATIVECLIENTBUFFERANDROIDPROC
glext_eglCreateNativeClientBufferANDROID = NULL;
PFNEGLCREATEPBUFFERFROMCLIENTBUFFERPROC glext_eglCreatePbufferFromClientBuffer
  = NULL;
PFNEGLCREATEPBUFFERSURFACEPROC glext_eglCreatePbufferSurface = NULL;
PFNEGLCREATEPIXMAPSURFACEPROC glext_eglCreatePixmapSurface = NULL;
PFNEGLCREATEPIXMAPSURFACEHIPROC glext_eglCreatePixmapSurfaceHI = NULL;
PFNEGLCREATEPLATFORMPIXMAPSURFACEPROC glext_eglCreatePlatformPixmapSurface
  = NULL;
PFNEGLCREATEPLATFORMPIXMAPSURFACEEXTPROC
glext_eglCreatePlatformPixmapSurfaceEXT = NULL;
PFNEGLCREATEPLATFORMWINDOWSURFACEPROC glext_eglCreatePlatformWindowSurface
  = NULL;
PFNEGLCREATEPLATFORMWINDOWSURFACEEXTPROC
glext_eglCreatePlatformWindowSurfaceEXT = NULL;
PFNEGLCREATESTREAMATTRIBKHRPROC glext_eglCreateStreamAttribKHR = NULL;
PFNEGLCREATESTREAMFROMFILEDESCRIPTORKHRPROC
glext_eglCreateStreamFromFileDescriptorKHR = NULL;
PFNEGLCREATESTREAMKHRPROC glext_eglCreateStreamKHR = NULL;
PFNEGLCREATESTREAMPRODUCERSURFACEKHRPROC
glext_eglCreateStreamProducerSurfaceKHR = NULL;
PFNEGLCREATESTREAMSYNCNVPROC glext_eglCreateStreamSyncNV = NULL;
PFNEGLCREATESYNCPROC glext_eglCreateSync = NULL;
PFNEGLCREATESYNC64KHRPROC glext_eglCreateSync64KHR = NULL;
PFNEGLCREATESYNCKHRPROC glext_eglCreateSyncKHR = NULL;
PFNEGLCREATEWAYLANDBUFFERFROMIMAGEWLPROC
glext_eglCreateWaylandBufferFromImageWL = NULL;
PFNEGLCREATEWINDOWSURFACEPROC glext_eglCreateWindowSurface = NULL;
PFNEGLDEBUGMESSAGECONTROLKHRPROC glext_eglDebugMessageControlKHR = NULL;
PFNEGLDESTROYCONTEXTPROC glext_eglDestroyContext = NULL;
PFNEGLDESTROYDISPLAYEXTPROC glext_eglDestroyDisplayEXT = NULL;
PFNEGLDESTROYIMAGEPROC glext_eglDestroyImage = NULL;
PFNEGLDESTROYIMAGEKHRPROC glext_eglDestroyImageKHR = NULL;
PFNEGLDESTROYSTREAMKHRPROC glext_eglDestroyStreamKHR = NULL;
PFNEGLDESTROYSURFACEPROC glext_eglDestroySurface = NULL;
PFNEGLDESTROYSYNCPROC glext_eglDestroySync = NULL;
PFNEGLDESTROYSYNCKHRPROC glext_eglDestroySyncKHR = NULL;
PFNEGLDESTROYSYNCNVPROC glext_eglDestroySyncNV = NULL;
PFNEGLDUPNATIVEFENCEFDANDROIDPROC glext_eglDupNativeFenceFDANDROID = NULL;
PFNEGLEXPORTDMABUFIMAGEMESAPROC glext_eglExportDMABUFImageMESA = NULL;
PFNEGLEXPORTDMABUFIMAGEQUERYMESAPROC glext_eglExportDMABUFImageQueryMESA
  = NULL;
PFNEGLEXPORTDRMIMAGEMESAPROC glext_eglExportDRMImageMESA = NULL;
PFNEGLFENCENVPROC glext_eglFenceNV = NULL;
PFNEGLGETCOMPOSITORTIMINGANDROIDPROC glext_eglGetCompositorTimingANDROID
  = NULL;
PFNEGLGETCOMPOSITORTIMINGSUPPORTEDANDROIDPROC
glext_eglGetCompositorTimingSupportedANDROID = NULL;
PFNEGLGETCONFIGATTRIBPROC glext_eglGetConfigAttrib = NULL;
PFNEGLGETCONFIGSPROC glext_eglGetConfigs = NULL;
PFNEGLGETCURRENTCONTEXTPROC glext_eglGetCurrentContext = NULL;
PFNEGLGETCURRENTDISPLAYPROC glext_eglGetCurrentDisplay = NULL;
PFNEGLGETCURRENTSURFACEPROC glext_eglGetCurrentSurface = NULL;
PFNEGLGETDISPLAYPROC glext_eglGetDisplay = NULL;
PFNEGLGETDISPLAYDRIVERCONFIGPROC glext_eglGetDisplayDriverConfig = NULL;
PFNEGLGETDISPLAYDRIVERNAMEPROC glext_eglGetDisplayDriverName = NULL;
PFNEGLGETERRORPROC glext_eglGetError = NULL;
PFNEGLGETFRAMETIMESTAMPSUPPORTEDANDROIDPROC
glext_eglGetFrameTimestampSupportedANDROID = NULL;
PFNEGLGETFRAMETIMESTAMPSANDROIDPROC glext_eglGetFrameTimestampsANDROID = NULL;
PFNEGLGETMSCRATEANGLEPROC glext_eglGetMscRateANGLE = NULL;
PFNEGLGETNATIVECLIENTBUFFERANDROIDPROC glext_eglGetNativeClientBufferANDROID
  = NULL;
PFNEGLGETNEXTFRAMEIDANDROIDPROC glext_eglGetNextFrameIdANDROID = NULL;
PFNEGLGETOUTPUTLAYERSEXTPROC glext_eglGetOutputLayersEXT = NULL;
PFNEGLGETOUTPUTPORTSEXTPROC glext_eglGetOutputPortsEXT = NULL;
PFNEGLGETPLATFORMDISPLAYPROC glext_eglGetPlatformDisplay = NULL;
PFNEGLGETPLATFORMDISPLAYEXTPROC glext_eglGetPlatformDisplayEXT = NULL;
PFNEGLGETPROCADDRESSPROC glext_eglGetProcAddress = NULL;
PFNEGLGETSTREAMFILEDESCRIPTORKHRPROC glext_eglGetStreamFileDescriptorKHR
  = NULL;
PFNEGLGETSYNCATTRIBPROC glext_eglGetSyncAttrib = NULL;
PFNEGLGETSYNCATTRIBKHRPROC glext_eglGetSyncAttribKHR = NULL;
PFNEGLGETSYNCATTRIBNVPROC glext_eglGetSyncAttribNV = NULL;
PFNEGLGETSYSTEMTIMEFREQUENCYNVPROC glext_eglGetSystemTimeFrequencyNV = NULL;
PFNEGLGETSYSTEMTIMENVPROC glext_eglGetSystemTimeNV = NULL;
PFNEGLINITIALIZEPROC glext_eglInitialize = NULL;
PFNEGLLABELOBJECTKHRPROC glext_eglLabelObjectKHR = NULL;
PFNEGLLOCKSURFACEKHRPROC glext_eglLockSurfaceKHR = NULL;
PFNEGLMAKECURRENTPROC glext_eglMakeCurrent = NULL;
PFNEGLOUTPUTLAYERATTRIBEXTPROC glext_eglOutputLayerAttribEXT = NULL;
PFNEGLOUTPUTPORTATTRIBEXTPROC glext_eglOutputPortAttribEXT = NULL;
PFNEGLPOSTSUBBUFFERNVPROC glext_eglPostSubBufferNV = NULL;
PFNEGLPRESENTATIONTIMEANDROIDPROC glext_eglPresentationTimeANDROID = NULL;
PFNEGLQUERYAPIPROC glext_eglQueryAPI = NULL;
PFNEGLQUERYCONTEXTPROC glext_eglQueryContext = NULL;
PFNEGLQUERYDEBUGKHRPROC glext_eglQueryDebugKHR = NULL;
PFNEGLQUERYDEVICEATTRIBEXTPROC glext_eglQueryDeviceAttribEXT = NULL;
PFNEGLQUERYDEVICEBINARYEXTPROC glext_eglQueryDeviceBinaryEXT = NULL;
PFNEGLQUERYDEVICESTRINGEXTPROC glext_eglQueryDeviceStringEXT = NULL;
PFNEGLQUERYDEVICESEXTPROC glext_eglQueryDevicesEXT = NULL;
PFNEGLQUERYDISPLAYATTRIBEXTPROC glext_eglQueryDisplayAttribEXT = NULL;
PFNEGLQUERYDISPLAYATTRIBKHRPROC glext_eglQueryDisplayAttribKHR = NULL;
PFNEGLQUERYDISPLAYATTRIBNVPROC glext_eglQueryDisplayAttribNV = NULL;
PFNEGLQUERYDMABUFFORMATSEXTPROC glext_eglQueryDmaBufFormatsEXT = NULL;
PFNEGLQUERYDMABUFMODIFIERSEXTPROC glext_eglQueryDmaBufModifiersEXT = NULL;
PFNEGLQUERYNATIVEDISPLAYNVPROC glext_eglQueryNativeDisplayNV = NULL;
PFNEGLQUERYNATIVEPIXMAPNVPROC glext_eglQueryNativePixmapNV = NULL;
PFNEGLQUERYNATIVEWINDOWNVPROC glext_eglQueryNativeWindowNV = NULL;
PFNEGLQUERYOUTPUTLAYERATTRIBEXTPROC glext_eglQueryOutputLayerAttribEXT = NULL;
PFNEGLQUERYOUTPUTLAYERSTRINGEXTPROC glext_eglQueryOutputLayerStringEXT = NULL;
PFNEGLQUERYOUTPUTPORTATTRIBEXTPROC glext_eglQueryOutputPortAttribEXT = NULL;
PFNEGLQUERYOUTPUTPORTSTRINGEXTPROC glext_eglQueryOutputPortStringEXT = NULL;
PFNEGLQUERYSTREAMATTRIBKHRPROC glext_eglQueryStreamAttribKHR = NULL;
PFNEGLQUERYSTREAMCONSUMEREVENTNVPROC glext_eglQueryStreamConsumerEventNV
  = NULL;
PFNEGLQUERYSTREAMKHRPROC glext_eglQueryStreamKHR = NULL;
PFNEGLQUERYSTREAMMETADATANVPROC glext_eglQueryStreamMetadataNV = NULL;
PFNEGLQUERYSTREAMTIMEKHRPROC glext_eglQueryStreamTimeKHR = NULL;
PFNEGLQUERYSTREAMU64KHRPROC glext_eglQueryStreamu64KHR = NULL;
PFNEGLQUERYSTRINGPROC glext_eglQueryString = NULL;
PFNEGLQUERYSUPPORTEDCOMPRESSIONRATESEXTPROC
glext_eglQuerySupportedCompressionRatesEXT = NULL;
PFNEGLQUERYSURFACEPROC glext_eglQuerySurface = NULL;
PFNEGLQUERYSURFACE64KHRPROC glext_eglQuerySurface64KHR = NULL;
PFNEGLQUERYSURFACEPOINTERANGLEPROC glext_eglQuerySurfacePointerANGLE = NULL;
PFNEGLQUERYWAYLANDBUFFERWLPROC glext_eglQueryWaylandBufferWL = NULL;
PFNEGLRELEASETEXIMAGEPROC glext_eglReleaseTexImage = NULL;
PFNEGLRELEASETHREADPROC glext_eglReleaseThread = NULL;
PFNEGLRESETSTREAMNVPROC glext_eglResetStreamNV = NULL;
PFNEGLSETBLOBCACHEFUNCSANDROIDPROC glext_eglSetBlobCacheFuncsANDROID = NULL;
PFNEGLSETDAMAGEREGIONKHRPROC glext_eglSetDamageRegionKHR = NULL;
PFNEGLSETSTREAMATTRIBKHRPROC glext_eglSetStreamAttribKHR = NULL;
PFNEGLSETSTREAMMETADATANVPROC glext_eglSetStreamMetadataNV = NULL;
PFNEGLSIGNALSYNCKHRPROC glext_eglSignalSyncKHR = NULL;
PFNEGLSIGNALSYNCNVPROC glext_eglSignalSyncNV = NULL;
PFNEGLSTREAMACQUIREIMAGENVPROC glext_eglStreamAcquireImageNV = NULL;
PFNEGLSTREAMATTRIBKHRPROC glext_eglStreamAttribKHR = NULL;
PFNEGLSTREAMCONSUMERACQUIREATTRIBKHRPROC
glext_eglStreamConsumerAcquireAttribKHR = NULL;
PFNEGLSTREAMCONSUMERACQUIREKHRPROC glext_eglStreamConsumerAcquireKHR = NULL;
PFNEGLSTREAMCONSUMERGLTEXTUREEXTERNALATTRIBSNVPROC
glext_eglStreamConsumerGLTextureExternalAttribsNV = NULL;
PFNEGLSTREAMCONSUMERGLTEXTUREEXTERNALKHRPROC
glext_eglStreamConsumerGLTextureExternalKHR = NULL;
PFNEGLSTREAMCONSUMEROUTPUTEXTPROC glext_eglStreamConsumerOutputEXT = NULL;
PFNEGLSTREAMCONSUMERRELEASEATTRIBKHRPROC
glext_eglStreamConsumerReleaseAttribKHR = NULL;
PFNEGLSTREAMCONSUMERRELEASEKHRPROC glext_eglStreamConsumerReleaseKHR = NULL;
PFNEGLSTREAMFLUSHNVPROC glext_eglStreamFlushNV = NULL;
PFNEGLSTREAMIMAGECONSUMERCONNECTNVPROC glext_eglStreamImageConsumerConnectNV
  = NULL;
PFNEGLSTREAMRELEASEIMAGENVPROC glext_eglStreamReleaseImageNV = NULL;
PFNEGLSURFACEATTRIBPROC glext_eglSurfaceAttrib = NULL;
PFNEGLSWAPBUFFERSPROC glext_eglSwapBuffers = NULL;
PFNEGLSWAPBUFFERSREGION2NOKPROC glext_eglSwapBuffersRegion2NOK = NULL;
PFNEGLSWAPBUFFERSREGIONNOKPROC glext_eglSwapBuffersRegionNOK = NULL;
PFNEGLSWAPBUFFERSWITHDAMAGEEXTPROC glext_eglSwapBuffersWithDamageEXT = NULL;
PFNEGLSWAPBUFFERSWITHDAMAGEKHRPROC glext_eglSwapBuffersWithDamageKHR = NULL;
PFNEGLSWAPINTERVALPROC glext_eglSwapInterval = NULL;
PFNEGLTERMINATEPROC glext_eglTerminate = NULL;
PFNEGLUNBINDWAYLANDDISPLAYWLPROC glext_eglUnbindWaylandDisplayWL = NULL;
PFNEGLUNLOCKSURFACEKHRPROC glext_eglUnlockSurfaceKHR = NULL;
PFNEGLUNSIGNALSYNCEXTPROC glext_eglUnsignalSyncEXT = NULL;
PFNEGLWAITCLIENTPROC glext_eglWaitClient = NULL;
PFNEGLWAITGLPROC glext_eglWaitGL = NULL;
PFNEGLWAITNATIVEPROC glext_eglWaitNative = NULL;
PFNEGLWAITSYNCPROC glext_eglWaitSync = NULL;
PFNEGLWAITSYNCKHRPROC glext_eglWaitSyncKHR = NULL;

static void
glext_egl_load_EGL_VERSION_1_0 (GLEXTuserptrloadfunc load, void* userptr) {
  if (!GLEXT_EGL_VERSION_1_0)
    return;
  glext_eglChooseConfig
    = (PFNEGLCHOOSECONFIGPROC)load (userptr, "eglChooseConfig");
  glext_eglCopyBuffers
    = (PFNEGLCOPYBUFFERSPROC)load (userptr, "eglCopyBuffers");
  glext_eglCreateContext
    = (PFNEGLCREATECONTEXTPROC)load (userptr, "eglCreateContext");
  glext_eglCreatePbufferSurface = (PFNEGLCREATEPBUFFERSURFACEPROC)load (
    userptr, "eglCreatePbufferSurface");
  glext_eglCreatePixmapSurface
    = (PFNEGLCREATEPIXMAPSURFACEPROC)load (userptr, "eglCreatePixmapSurface");
  glext_eglCreateWindowSurface
    = (PFNEGLCREATEWINDOWSURFACEPROC)load (userptr, "eglCreateWindowSurface");
  glext_eglDestroyContext
    = (PFNEGLDESTROYCONTEXTPROC)load (userptr, "eglDestroyContext");
  glext_eglDestroySurface
    = (PFNEGLDESTROYSURFACEPROC)load (userptr, "eglDestroySurface");
  glext_eglGetConfigAttrib
    = (PFNEGLGETCONFIGATTRIBPROC)load (userptr, "eglGetConfigAttrib");
  glext_eglGetConfigs = (PFNEGLGETCONFIGSPROC)load (userptr, "eglGetConfigs");
  glext_eglGetCurrentDisplay
    = (PFNEGLGETCURRENTDISPLAYPROC)load (userptr, "eglGetCurrentDisplay");
  glext_eglGetCurrentSurface
    = (PFNEGLGETCURRENTSURFACEPROC)load (userptr, "eglGetCurrentSurface");
  glext_eglGetDisplay = (PFNEGLGETDISPLAYPROC)load (userptr, "eglGetDisplay");
  glext_eglGetError = (PFNEGLGETERRORPROC)load (userptr, "eglGetError");
  glext_eglGetProcAddress
    = (PFNEGLGETPROCADDRESSPROC)load (userptr, "eglGetProcAddress");
  glext_eglInitialize = (PFNEGLINITIALIZEPROC)load (userptr, "eglInitialize");
  glext_eglMakeCurrent
    = (PFNEGLMAKECURRENTPROC)load (userptr, "eglMakeCurrent");
  glext_eglQueryContext
    = (PFNEGLQUERYCONTEXTPROC)load (userptr, "eglQueryContext");
  glext_eglQueryString
    = (PFNEGLQUERYSTRINGPROC)load (userptr, "eglQueryString");
  glext_eglQuerySurface
    = (PFNEGLQUERYSURFACEPROC)load (userptr, "eglQuerySurface");
  glext_eglSwapBuffers
    = (PFNEGLSWAPBUFFERSPROC)load (userptr, "eglSwapBuffers");
  glext_eglTerminate = (PFNEGLTERMINATEPROC)load (userptr, "eglTerminate");
  glext_eglWaitGL = (PFNEGLWAITGLPROC)load (userptr, "eglWaitGL");
  glext_eglWaitNative = (PFNEGLWAITNATIVEPROC)load (userptr, "eglWaitNative");
}
static void
glext_egl_load_EGL_VERSION_1_1 (GLEXTuserptrloadfunc load, void* userptr) {
  if (!GLEXT_EGL_VERSION_1_1)
    return;
  glext_eglBindTexImage
    = (PFNEGLBINDTEXIMAGEPROC)load (userptr, "eglBindTexImage");
  glext_eglReleaseTexImage
    = (PFNEGLRELEASETEXIMAGEPROC)load (userptr, "eglReleaseTexImage");
  glext_eglSurfaceAttrib
    = (PFNEGLSURFACEATTRIBPROC)load (userptr, "eglSurfaceAttrib");
  glext_eglSwapInterval
    = (PFNEGLSWAPINTERVALPROC)load (userptr, "eglSwapInterval");
}
static void
glext_egl_load_EGL_VERSION_1_2 (GLEXTuserptrloadfunc load, void* userptr) {
  if (!GLEXT_EGL_VERSION_1_2)
    return;
  glext_eglBindAPI = (PFNEGLBINDAPIPROC)load (userptr, "eglBindAPI");
  glext_eglCreatePbufferFromClientBuffer
    = (PFNEGLCREATEPBUFFERFROMCLIENTBUFFERPROC)load (
      userptr, "eglCreatePbufferFromClientBuffer");
  glext_eglQueryAPI = (PFNEGLQUERYAPIPROC)load (userptr, "eglQueryAPI");
  glext_eglReleaseThread
    = (PFNEGLRELEASETHREADPROC)load (userptr, "eglReleaseThread");
  glext_eglWaitClient = (PFNEGLWAITCLIENTPROC)load (userptr, "eglWaitClient");
}
static void
glext_egl_load_EGL_VERSION_1_4 (GLEXTuserptrloadfunc load, void* userptr) {
  if (!GLEXT_EGL_VERSION_1_4)
    return;
  glext_eglGetCurrentContext
    = (PFNEGLGETCURRENTCONTEXTPROC)load (userptr, "eglGetCurrentContext");
}
static void
glext_egl_load_EGL_VERSION_1_5 (GLEXTuserptrloadfunc load, void* userptr) {
  if (!GLEXT_EGL_VERSION_1_5)
    return;
  glext_eglClientWaitSync
    = (PFNEGLCLIENTWAITSYNCPROC)load (userptr, "eglClientWaitSync");
  glext_eglCreateImage
    = (PFNEGLCREATEIMAGEPROC)load (userptr, "eglCreateImage");
  glext_eglCreatePlatformPixmapSurface
    = (PFNEGLCREATEPLATFORMPIXMAPSURFACEPROC)load (
      userptr, "eglCreatePlatformPixmapSurface");
  glext_eglCreatePlatformWindowSurface
    = (PFNEGLCREATEPLATFORMWINDOWSURFACEPROC)load (
      userptr, "eglCreatePlatformWindowSurface");
  glext_eglCreateSync = (PFNEGLCREATESYNCPROC)load (userptr, "eglCreateSync");
  glext_eglDestroyImage
    = (PFNEGLDESTROYIMAGEPROC)load (userptr, "eglDestroyImage");
  glext_eglDestroySync
    = (PFNEGLDESTROYSYNCPROC)load (userptr, "eglDestroySync");
  glext_eglGetPlatformDisplay
    = (PFNEGLGETPLATFORMDISPLAYPROC)load (userptr, "eglGetPlatformDisplay");
  glext_eglGetSyncAttrib
    = (PFNEGLGETSYNCATTRIBPROC)load (userptr, "eglGetSyncAttrib");
  glext_eglWaitSync = (PFNEGLWAITSYNCPROC)load (userptr, "eglWaitSync");
}
static void
glext_egl_load_EGL_ANDROID_blob_cache (GLEXTuserptrloadfunc load,
                                       void* userptr) {
  if (!GLEXT_EGL_ANDROID_blob_cache)
    return;
  glext_eglSetBlobCacheFuncsANDROID
    = (PFNEGLSETBLOBCACHEFUNCSANDROIDPROC)load (userptr,
                                                "eglSetBlobCacheFuncsANDROID");
}
static void
glext_egl_load_EGL_ANDROID_create_native_client_buffer (
  GLEXTuserptrloadfunc load, void* userptr) {
  if (!GLEXT_EGL_ANDROID_create_native_client_buffer)
    return;
  glext_eglCreateNativeClientBufferANDROID
    = (PFNEGLCREATENATIVECLIENTBUFFERANDROIDPROC)load (
      userptr, "eglCreateNativeClientBufferANDROID");
}
static void
glext_egl_load_EGL_ANDROID_get_frame_timestamps (GLEXTuserptrloadfunc load,
                                                 void* userptr) {
  if (!GLEXT_EGL_ANDROID_get_frame_timestamps)
    return;
  glext_eglGetCompositorTimingANDROID
    = (PFNEGLGETCOMPOSITORTIMINGANDROIDPROC)load (
      userptr, "eglGetCompositorTimingANDROID");
  glext_eglGetCompositorTimingSupportedANDROID
    = (PFNEGLGETCOMPOSITORTIMINGSUPPORTEDANDROIDPROC)load (
      userptr, "eglGetCompositorTimingSupportedANDROID");
  glext_eglGetFrameTimestampSupportedANDROID
    = (PFNEGLGETFRAMETIMESTAMPSUPPORTEDANDROIDPROC)load (
      userptr, "eglGetFrameTimestampSupportedANDROID");
  glext_eglGetFrameTimestampsANDROID
    = (PFNEGLGETFRAMETIMESTAMPSANDROIDPROC)load (
      userptr, "eglGetFrameTimestampsANDROID");
  glext_eglGetNextFrameIdANDROID = (PFNEGLGETNEXTFRAMEIDANDROIDPROC)load (
    userptr, "eglGetNextFrameIdANDROID");
}
static void
glext_egl_load_EGL_ANDROID_get_native_client_buffer (GLEXTuserptrloadfunc load,
                                                     void* userptr) {
  if (!GLEXT_EGL_ANDROID_get_native_client_buffer)
    return;
  glext_eglGetNativeClientBufferANDROID
    = (PFNEGLGETNATIVECLIENTBUFFERANDROIDPROC)load (
      userptr, "eglGetNativeClientBufferANDROID");
}
static void
glext_egl_load_EGL_ANDROID_native_fence_sync (GLEXTuserptrloadfunc load,
                                              void* userptr) {
  if (!GLEXT_EGL_ANDROID_native_fence_sync)
    return;
  glext_eglDupNativeFenceFDANDROID = (PFNEGLDUPNATIVEFENCEFDANDROIDPROC)load (
    userptr, "eglDupNativeFenceFDANDROID");
}
static void
glext_egl_load_EGL_ANDROID_presentation_time (GLEXTuserptrloadfunc load,
                                              void* userptr) {
  if (!GLEXT_EGL_ANDROID_presentation_time)
    return;
  glext_eglPresentationTimeANDROID = (PFNEGLPRESENTATIONTIMEANDROIDPROC)load (
    userptr, "eglPresentationTimeANDROID");
}
static void
glext_egl_load_EGL_ANGLE_query_surface_pointer (GLEXTuserptrloadfunc load,
                                                void* userptr) {
  if (!GLEXT_EGL_ANGLE_query_surface_pointer)
    return;
  glext_eglQuerySurfacePointerANGLE
    = (PFNEGLQUERYSURFACEPOINTERANGLEPROC)load (userptr,
                                                "eglQuerySurfacePointerANGLE");
}
static void
glext_egl_load_EGL_ANGLE_sync_control_rate (GLEXTuserptrloadfunc load,
                                            void* userptr) {
  if (!GLEXT_EGL_ANGLE_sync_control_rate)
    return;
  glext_eglGetMscRateANGLE
    = (PFNEGLGETMSCRATEANGLEPROC)load (userptr, "eglGetMscRateANGLE");
}
static void
glext_egl_load_EGL_EXT_client_sync (GLEXTuserptrloadfunc load, void* userptr) {
  if (!GLEXT_EGL_EXT_client_sync)
    return;
  glext_eglClientSignalSyncEXT
    = (PFNEGLCLIENTSIGNALSYNCEXTPROC)load (userptr, "eglClientSignalSyncEXT");
}
static void
glext_egl_load_EGL_EXT_compositor (GLEXTuserptrloadfunc load, void* userptr) {
  if (!GLEXT_EGL_EXT_compositor)
    return;
  glext_eglCompositorBindTexWindowEXT
    = (PFNEGLCOMPOSITORBINDTEXWINDOWEXTPROC)load (
      userptr, "eglCompositorBindTexWindowEXT");
  glext_eglCompositorSetContextAttributesEXT
    = (PFNEGLCOMPOSITORSETCONTEXTATTRIBUTESEXTPROC)load (
      userptr, "eglCompositorSetContextAttributesEXT");
  glext_eglCompositorSetContextListEXT
    = (PFNEGLCOMPOSITORSETCONTEXTLISTEXTPROC)load (
      userptr, "eglCompositorSetContextListEXT");
  glext_eglCompositorSetSizeEXT = (PFNEGLCOMPOSITORSETSIZEEXTPROC)load (
    userptr, "eglCompositorSetSizeEXT");
  glext_eglCompositorSetWindowAttributesEXT
    = (PFNEGLCOMPOSITORSETWINDOWATTRIBUTESEXTPROC)load (
      userptr, "eglCompositorSetWindowAttributesEXT");
  glext_eglCompositorSetWindowListEXT
    = (PFNEGLCOMPOSITORSETWINDOWLISTEXTPROC)load (
      userptr, "eglCompositorSetWindowListEXT");
  glext_eglCompositorSwapPolicyEXT = (PFNEGLCOMPOSITORSWAPPOLICYEXTPROC)load (
    userptr, "eglCompositorSwapPolicyEXT");
}
static void
glext_egl_load_EGL_EXT_device_base (GLEXTuserptrloadfunc load, void* userptr) {
  if (!GLEXT_EGL_EXT_device_base)
    return;
  glext_eglQueryDeviceAttribEXT = (PFNEGLQUERYDEVICEATTRIBEXTPROC)load (
    userptr, "eglQueryDeviceAttribEXT");
  glext_eglQueryDeviceStringEXT = (PFNEGLQUERYDEVICESTRINGEXTPROC)load (
    userptr, "eglQueryDeviceStringEXT");
  glext_eglQueryDevicesEXT
    = (PFNEGLQUERYDEVICESEXTPROC)load (userptr, "eglQueryDevicesEXT");
  glext_eglQueryDisplayAttribEXT = (PFNEGLQUERYDISPLAYATTRIBEXTPROC)load (
    userptr, "eglQueryDisplayAttribEXT");
}
static void
glext_egl_load_EGL_EXT_device_enumeration (GLEXTuserptrloadfunc load,
                                           void* userptr) {
  if (!GLEXT_EGL_EXT_device_enumeration)
    return;
  glext_eglQueryDevicesEXT
    = (PFNEGLQUERYDEVICESEXTPROC)load (userptr, "eglQueryDevicesEXT");
}
static void
glext_egl_load_EGL_EXT_device_persistent_id (GLEXTuserptrloadfunc load,
                                             void* userptr) {
  if (!GLEXT_EGL_EXT_device_persistent_id)
    return;
  glext_eglQueryDeviceBinaryEXT = (PFNEGLQUERYDEVICEBINARYEXTPROC)load (
    userptr, "eglQueryDeviceBinaryEXT");
}
static void
glext_egl_load_EGL_EXT_device_query (GLEXTuserptrloadfunc load,
                                     void* userptr) {
  if (!GLEXT_EGL_EXT_device_query)
    return;
  glext_eglQueryDeviceAttribEXT = (PFNEGLQUERYDEVICEATTRIBEXTPROC)load (
    userptr, "eglQueryDeviceAttribEXT");
  glext_eglQueryDeviceStringEXT = (PFNEGLQUERYDEVICESTRINGEXTPROC)load (
    userptr, "eglQueryDeviceStringEXT");
  glext_eglQueryDisplayAttribEXT = (PFNEGLQUERYDISPLAYATTRIBEXTPROC)load (
    userptr, "eglQueryDisplayAttribEXT");
}
static void
glext_egl_load_EGL_EXT_display_alloc (GLEXTuserptrloadfunc load,
                                      void* userptr) {
  if (!GLEXT_EGL_EXT_display_alloc)
    return;
  glext_eglDestroyDisplayEXT
    = (PFNEGLDESTROYDISPLAYEXTPROC)load (userptr, "eglDestroyDisplayEXT");
}
static void
glext_egl_load_EGL_EXT_image_dma_buf_import_modifiers (
  GLEXTuserptrloadfunc load, void* userptr) {
  if (!GLEXT_EGL_EXT_image_dma_buf_import_modifiers)
    return;
  glext_eglQueryDmaBufFormatsEXT = (PFNEGLQUERYDMABUFFORMATSEXTPROC)load (
    userptr, "eglQueryDmaBufFormatsEXT");
  glext_eglQueryDmaBufModifiersEXT = (PFNEGLQUERYDMABUFMODIFIERSEXTPROC)load (
    userptr, "eglQueryDmaBufModifiersEXT");
}
static void
glext_egl_load_EGL_EXT_output_base (GLEXTuserptrloadfunc load, void* userptr) {
  if (!GLEXT_EGL_EXT_output_base)
    return;
  glext_eglGetOutputLayersEXT
    = (PFNEGLGETOUTPUTLAYERSEXTPROC)load (userptr, "eglGetOutputLayersEXT");
  glext_eglGetOutputPortsEXT
    = (PFNEGLGETOUTPUTPORTSEXTPROC)load (userptr, "eglGetOutputPortsEXT");
  glext_eglOutputLayerAttribEXT = (PFNEGLOUTPUTLAYERATTRIBEXTPROC)load (
    userptr, "eglOutputLayerAttribEXT");
  glext_eglOutputPortAttribEXT
    = (PFNEGLOUTPUTPORTATTRIBEXTPROC)load (userptr, "eglOutputPortAttribEXT");
  glext_eglQueryOutputLayerAttribEXT
    = (PFNEGLQUERYOUTPUTLAYERATTRIBEXTPROC)load (
      userptr, "eglQueryOutputLayerAttribEXT");
  glext_eglQueryOutputLayerStringEXT
    = (PFNEGLQUERYOUTPUTLAYERSTRINGEXTPROC)load (
      userptr, "eglQueryOutputLayerStringEXT");
  glext_eglQueryOutputPortAttribEXT
    = (PFNEGLQUERYOUTPUTPORTATTRIBEXTPROC)load (userptr,
                                                "eglQueryOutputPortAttribEXT");
  glext_eglQueryOutputPortStringEXT
    = (PFNEGLQUERYOUTPUTPORTSTRINGEXTPROC)load (userptr,
                                                "eglQueryOutputPortStringEXT");
}
static void
glext_egl_load_EGL_EXT_platform_base (GLEXTuserptrloadfunc load,
                                      void* userptr) {
  if (!GLEXT_EGL_EXT_platform_base)
    return;
  glext_eglCreatePlatformPixmapSurfaceEXT
    = (PFNEGLCREATEPLATFORMPIXMAPSURFACEEXTPROC)load (
      userptr, "eglCreatePlatformPixmapSurfaceEXT");
  glext_eglCreatePlatformWindowSurfaceEXT
    = (PFNEGLCREATEPLATFORMWINDOWSURFACEEXTPROC)load (
      userptr, "eglCreatePlatformWindowSurfaceEXT");
  glext_eglGetPlatformDisplayEXT = (PFNEGLGETPLATFORMDISPLAYEXTPROC)load (
    userptr, "eglGetPlatformDisplayEXT");
}
static void
glext_egl_load_EGL_EXT_stream_consumer_egloutput (GLEXTuserptrloadfunc load,
                                                  void* userptr) {
  if (!GLEXT_EGL_EXT_stream_consumer_egloutput)
    return;
  glext_eglStreamConsumerOutputEXT = (PFNEGLSTREAMCONSUMEROUTPUTEXTPROC)load (
    userptr, "eglStreamConsumerOutputEXT");
}
static void
glext_egl_load_EGL_EXT_surface_compression (GLEXTuserptrloadfunc load,
                                            void* userptr) {
  if (!GLEXT_EGL_EXT_surface_compression)
    return;
  glext_eglQuerySupportedCompressionRatesEXT
    = (PFNEGLQUERYSUPPORTEDCOMPRESSIONRATESEXTPROC)load (
      userptr, "eglQuerySupportedCompressionRatesEXT");
}
static void
glext_egl_load_EGL_EXT_swap_buffers_with_damage (GLEXTuserptrloadfunc load,
                                                 void* userptr) {
  if (!GLEXT_EGL_EXT_swap_buffers_with_damage)
    return;
  glext_eglSwapBuffersWithDamageEXT
    = (PFNEGLSWAPBUFFERSWITHDAMAGEEXTPROC)load (userptr,
                                                "eglSwapBuffersWithDamageEXT");
}
static void
glext_egl_load_EGL_EXT_sync_reuse (GLEXTuserptrloadfunc load, void* userptr) {
  if (!GLEXT_EGL_EXT_sync_reuse)
    return;
  glext_eglUnsignalSyncEXT
    = (PFNEGLUNSIGNALSYNCEXTPROC)load (userptr, "eglUnsignalSyncEXT");
}
static void
glext_egl_load_EGL_HI_clientpixmap (GLEXTuserptrloadfunc load, void* userptr) {
  if (!GLEXT_EGL_HI_clientpixmap)
    return;
  glext_eglCreatePixmapSurfaceHI = (PFNEGLCREATEPIXMAPSURFACEHIPROC)load (
    userptr, "eglCreatePixmapSurfaceHI");
}
static void
glext_egl_load_EGL_KHR_cl_event2 (GLEXTuserptrloadfunc load, void* userptr) {
  if (!GLEXT_EGL_KHR_cl_event2)
    return;
  glext_eglCreateSync64KHR
    = (PFNEGLCREATESYNC64KHRPROC)load (userptr, "eglCreateSync64KHR");
}
static void
glext_egl_load_EGL_KHR_debug (GLEXTuserptrloadfunc load, void* userptr) {
  if (!GLEXT_EGL_KHR_debug)
    return;
  glext_eglDebugMessageControlKHR = (PFNEGLDEBUGMESSAGECONTROLKHRPROC)load (
    userptr, "eglDebugMessageControlKHR");
  glext_eglLabelObjectKHR
    = (PFNEGLLABELOBJECTKHRPROC)load (userptr, "eglLabelObjectKHR");
  glext_eglQueryDebugKHR
    = (PFNEGLQUERYDEBUGKHRPROC)load (userptr, "eglQueryDebugKHR");
}
static void
glext_egl_load_EGL_KHR_display_reference (GLEXTuserptrloadfunc load,
                                          void* userptr) {
  if (!GLEXT_EGL_KHR_display_reference)
    return;
  glext_eglQueryDisplayAttribKHR = (PFNEGLQUERYDISPLAYATTRIBKHRPROC)load (
    userptr, "eglQueryDisplayAttribKHR");
}
static void
glext_egl_load_EGL_KHR_fence_sync (GLEXTuserptrloadfunc load, void* userptr) {
  if (!GLEXT_EGL_KHR_fence_sync)
    return;
  glext_eglClientWaitSyncKHR
    = (PFNEGLCLIENTWAITSYNCKHRPROC)load (userptr, "eglClientWaitSyncKHR");
  glext_eglCreateSyncKHR
    = (PFNEGLCREATESYNCKHRPROC)load (userptr, "eglCreateSyncKHR");
  glext_eglDestroySyncKHR
    = (PFNEGLDESTROYSYNCKHRPROC)load (userptr, "eglDestroySyncKHR");
  glext_eglGetSyncAttribKHR
    = (PFNEGLGETSYNCATTRIBKHRPROC)load (userptr, "eglGetSyncAttribKHR");
}
static void
glext_egl_load_EGL_KHR_image (GLEXTuserptrloadfunc load, void* userptr) {
  if (!GLEXT_EGL_KHR_image)
    return;
  glext_eglCreateImageKHR
    = (PFNEGLCREATEIMAGEKHRPROC)load (userptr, "eglCreateImageKHR");
  glext_eglDestroyImageKHR
    = (PFNEGLDESTROYIMAGEKHRPROC)load (userptr, "eglDestroyImageKHR");
}
static void
glext_egl_load_EGL_KHR_image_base (GLEXTuserptrloadfunc load, void* userptr) {
  if (!GLEXT_EGL_KHR_image_base)
    return;
  glext_eglCreateImageKHR
    = (PFNEGLCREATEIMAGEKHRPROC)load (userptr, "eglCreateImageKHR");
  glext_eglDestroyImageKHR
    = (PFNEGLDESTROYIMAGEKHRPROC)load (userptr, "eglDestroyImageKHR");
}
static void
glext_egl_load_EGL_KHR_lock_surface (GLEXTuserptrloadfunc load,
                                     void* userptr) {
  if (!GLEXT_EGL_KHR_lock_surface)
    return;
  glext_eglLockSurfaceKHR
    = (PFNEGLLOCKSURFACEKHRPROC)load (userptr, "eglLockSurfaceKHR");
  glext_eglUnlockSurfaceKHR
    = (PFNEGLUNLOCKSURFACEKHRPROC)load (userptr, "eglUnlockSurfaceKHR");
}
static void
glext_egl_load_EGL_KHR_lock_surface3 (GLEXTuserptrloadfunc load,
                                      void* userptr) {
  if (!GLEXT_EGL_KHR_lock_surface3)
    return;
  glext_eglLockSurfaceKHR
    = (PFNEGLLOCKSURFACEKHRPROC)load (userptr, "eglLockSurfaceKHR");
  glext_eglQuerySurface64KHR
    = (PFNEGLQUERYSURFACE64KHRPROC)load (userptr, "eglQuerySurface64KHR");
  glext_eglUnlockSurfaceKHR
    = (PFNEGLUNLOCKSURFACEKHRPROC)load (userptr, "eglUnlockSurfaceKHR");
}
static void
glext_egl_load_EGL_KHR_partial_update (GLEXTuserptrloadfunc load,
                                       void* userptr) {
  if (!GLEXT_EGL_KHR_partial_update)
    return;
  glext_eglSetDamageRegionKHR
    = (PFNEGLSETDAMAGEREGIONKHRPROC)load (userptr, "eglSetDamageRegionKHR");
}
static void
glext_egl_load_EGL_KHR_reusable_sync (GLEXTuserptrloadfunc load,
                                      void* userptr) {
  if (!GLEXT_EGL_KHR_reusable_sync)
    return;
  glext_eglClientWaitSyncKHR
    = (PFNEGLCLIENTWAITSYNCKHRPROC)load (userptr, "eglClientWaitSyncKHR");
  glext_eglCreateSyncKHR
    = (PFNEGLCREATESYNCKHRPROC)load (userptr, "eglCreateSyncKHR");
  glext_eglDestroySyncKHR
    = (PFNEGLDESTROYSYNCKHRPROC)load (userptr, "eglDestroySyncKHR");
  glext_eglGetSyncAttribKHR
    = (PFNEGLGETSYNCATTRIBKHRPROC)load (userptr, "eglGetSyncAttribKHR");
  glext_eglSignalSyncKHR
    = (PFNEGLSIGNALSYNCKHRPROC)load (userptr, "eglSignalSyncKHR");
}
static void
glext_egl_load_EGL_KHR_stream (GLEXTuserptrloadfunc load, void* userptr) {
  if (!GLEXT_EGL_KHR_stream)
    return;
  glext_eglCreateStreamKHR
    = (PFNEGLCREATESTREAMKHRPROC)load (userptr, "eglCreateStreamKHR");
  glext_eglDestroyStreamKHR
    = (PFNEGLDESTROYSTREAMKHRPROC)load (userptr, "eglDestroyStreamKHR");
  glext_eglQueryStreamKHR
    = (PFNEGLQUERYSTREAMKHRPROC)load (userptr, "eglQueryStreamKHR");
  glext_eglQueryStreamu64KHR
    = (PFNEGLQUERYSTREAMU64KHRPROC)load (userptr, "eglQueryStreamu64KHR");
  glext_eglStreamAttribKHR
    = (PFNEGLSTREAMATTRIBKHRPROC)load (userptr, "eglStreamAttribKHR");
}
static void
glext_egl_load_EGL_KHR_stream_attrib (GLEXTuserptrloadfunc load,
                                      void* userptr) {
  if (!GLEXT_EGL_KHR_stream_attrib)
    return;
  glext_eglCreateStreamAttribKHR = (PFNEGLCREATESTREAMATTRIBKHRPROC)load (
    userptr, "eglCreateStreamAttribKHR");
  glext_eglQueryStreamAttribKHR = (PFNEGLQUERYSTREAMATTRIBKHRPROC)load (
    userptr, "eglQueryStreamAttribKHR");
  glext_eglSetStreamAttribKHR
    = (PFNEGLSETSTREAMATTRIBKHRPROC)load (userptr, "eglSetStreamAttribKHR");
  glext_eglStreamConsumerAcquireAttribKHR
    = (PFNEGLSTREAMCONSUMERACQUIREATTRIBKHRPROC)load (
      userptr, "eglStreamConsumerAcquireAttribKHR");
  glext_eglStreamConsumerReleaseAttribKHR
    = (PFNEGLSTREAMCONSUMERRELEASEATTRIBKHRPROC)load (
      userptr, "eglStreamConsumerReleaseAttribKHR");
}
static void
glext_egl_load_EGL_KHR_stream_consumer_gltexture (GLEXTuserptrloadfunc load,
                                                  void* userptr) {
  if (!GLEXT_EGL_KHR_stream_consumer_gltexture)
    return;
  glext_eglStreamConsumerAcquireKHR
    = (PFNEGLSTREAMCONSUMERACQUIREKHRPROC)load (userptr,
                                                "eglStreamConsumerAcquireKHR");
  glext_eglStreamConsumerGLTextureExternalKHR
    = (PFNEGLSTREAMCONSUMERGLTEXTUREEXTERNALKHRPROC)load (
      userptr, "eglStreamConsumerGLTextureExternalKHR");
  glext_eglStreamConsumerReleaseKHR
    = (PFNEGLSTREAMCONSUMERRELEASEKHRPROC)load (userptr,
                                                "eglStreamConsumerReleaseKHR");
}
static void
glext_egl_load_EGL_KHR_stream_cross_process_fd (GLEXTuserptrloadfunc load,
                                                void* userptr) {
  if (!GLEXT_EGL_KHR_stream_cross_process_fd)
    return;
  glext_eglCreateStreamFromFileDescriptorKHR
    = (PFNEGLCREATESTREAMFROMFILEDESCRIPTORKHRPROC)load (
      userptr, "eglCreateStreamFromFileDescriptorKHR");
  glext_eglGetStreamFileDescriptorKHR
    = (PFNEGLGETSTREAMFILEDESCRIPTORKHRPROC)load (
      userptr, "eglGetStreamFileDescriptorKHR");
}
static void
glext_egl_load_EGL_KHR_stream_fifo (GLEXTuserptrloadfunc load, void* userptr) {
  if (!GLEXT_EGL_KHR_stream_fifo)
    return;
  glext_eglQueryStreamTimeKHR
    = (PFNEGLQUERYSTREAMTIMEKHRPROC)load (userptr, "eglQueryStreamTimeKHR");
}
static void
glext_egl_load_EGL_KHR_stream_producer_eglsurface (GLEXTuserptrloadfunc load,
                                                   void* userptr) {
  if (!GLEXT_EGL_KHR_stream_producer_eglsurface)
    return;
  glext_eglCreateStreamProducerSurfaceKHR
    = (PFNEGLCREATESTREAMPRODUCERSURFACEKHRPROC)load (
      userptr, "eglCreateStreamProducerSurfaceKHR");
}
static void
glext_egl_load_EGL_KHR_swap_buffers_with_damage (GLEXTuserptrloadfunc load,
                                                 void* userptr) {
  if (!GLEXT_EGL_KHR_swap_buffers_with_damage)
    return;
  glext_eglSwapBuffersWithDamageKHR
    = (PFNEGLSWAPBUFFERSWITHDAMAGEKHRPROC)load (userptr,
                                                "eglSwapBuffersWithDamageKHR");
}
static void
glext_egl_load_EGL_KHR_wait_sync (GLEXTuserptrloadfunc load, void* userptr) {
  if (!GLEXT_EGL_KHR_wait_sync)
    return;
  glext_eglWaitSyncKHR
    = (PFNEGLWAITSYNCKHRPROC)load (userptr, "eglWaitSyncKHR");
}
static void
glext_egl_load_EGL_MESA_drm_image (GLEXTuserptrloadfunc load, void* userptr) {
  if (!GLEXT_EGL_MESA_drm_image)
    return;
  glext_eglCreateDRMImageMESA
    = (PFNEGLCREATEDRMIMAGEMESAPROC)load (userptr, "eglCreateDRMImageMESA");
  glext_eglExportDRMImageMESA
    = (PFNEGLEXPORTDRMIMAGEMESAPROC)load (userptr, "eglExportDRMImageMESA");
}
static void
glext_egl_load_EGL_MESA_image_dma_buf_export (GLEXTuserptrloadfunc load,
                                              void* userptr) {
  if (!GLEXT_EGL_MESA_image_dma_buf_export)
    return;
  glext_eglExportDMABUFImageMESA = (PFNEGLEXPORTDMABUFIMAGEMESAPROC)load (
    userptr, "eglExportDMABUFImageMESA");
  glext_eglExportDMABUFImageQueryMESA
    = (PFNEGLEXPORTDMABUFIMAGEQUERYMESAPROC)load (
      userptr, "eglExportDMABUFImageQueryMESA");
}
static void
glext_egl_load_EGL_MESA_query_driver (GLEXTuserptrloadfunc load,
                                      void* userptr) {
  if (!GLEXT_EGL_MESA_query_driver)
    return;
  glext_eglGetDisplayDriverConfig = (PFNEGLGETDISPLAYDRIVERCONFIGPROC)load (
    userptr, "eglGetDisplayDriverConfig");
  glext_eglGetDisplayDriverName = (PFNEGLGETDISPLAYDRIVERNAMEPROC)load (
    userptr, "eglGetDisplayDriverName");
}
static void
glext_egl_load_EGL_NOK_swap_region (GLEXTuserptrloadfunc load, void* userptr) {
  if (!GLEXT_EGL_NOK_swap_region)
    return;
  glext_eglSwapBuffersRegionNOK = (PFNEGLSWAPBUFFERSREGIONNOKPROC)load (
    userptr, "eglSwapBuffersRegionNOK");
}
static void
glext_egl_load_EGL_NOK_swap_region2 (GLEXTuserptrloadfunc load,
                                     void* userptr) {
  if (!GLEXT_EGL_NOK_swap_region2)
    return;
  glext_eglSwapBuffersRegion2NOK = (PFNEGLSWAPBUFFERSREGION2NOKPROC)load (
    userptr, "eglSwapBuffersRegion2NOK");
}
static void
glext_egl_load_EGL_NV_native_query (GLEXTuserptrloadfunc load, void* userptr) {
  if (!GLEXT_EGL_NV_native_query)
    return;
  glext_eglQueryNativeDisplayNV = (PFNEGLQUERYNATIVEDISPLAYNVPROC)load (
    userptr, "eglQueryNativeDisplayNV");
  glext_eglQueryNativePixmapNV
    = (PFNEGLQUERYNATIVEPIXMAPNVPROC)load (userptr, "eglQueryNativePixmapNV");
  glext_eglQueryNativeWindowNV
    = (PFNEGLQUERYNATIVEWINDOWNVPROC)load (userptr, "eglQueryNativeWindowNV");
}
static void
glext_egl_load_EGL_NV_post_sub_buffer (GLEXTuserptrloadfunc load,
                                       void* userptr) {
  if (!GLEXT_EGL_NV_post_sub_buffer)
    return;
  glext_eglPostSubBufferNV
    = (PFNEGLPOSTSUBBUFFERNVPROC)load (userptr, "eglPostSubBufferNV");
}
static void
glext_egl_load_EGL_NV_stream_consumer_eglimage (GLEXTuserptrloadfunc load,
                                                void* userptr) {
  if (!GLEXT_EGL_NV_stream_consumer_eglimage)
    return;
  glext_eglQueryStreamConsumerEventNV
    = (PFNEGLQUERYSTREAMCONSUMEREVENTNVPROC)load (
      userptr, "eglQueryStreamConsumerEventNV");
  glext_eglStreamAcquireImageNV = (PFNEGLSTREAMACQUIREIMAGENVPROC)load (
    userptr, "eglStreamAcquireImageNV");
  glext_eglStreamImageConsumerConnectNV
    = (PFNEGLSTREAMIMAGECONSUMERCONNECTNVPROC)load (
      userptr, "eglStreamImageConsumerConnectNV");
  glext_eglStreamReleaseImageNV = (PFNEGLSTREAMRELEASEIMAGENVPROC)load (
    userptr, "eglStreamReleaseImageNV");
}
static void
glext_egl_load_EGL_NV_stream_consumer_gltexture_yuv (GLEXTuserptrloadfunc load,
                                                     void* userptr) {
  if (!GLEXT_EGL_NV_stream_consumer_gltexture_yuv)
    return;
  glext_eglStreamConsumerGLTextureExternalAttribsNV
    = (PFNEGLSTREAMCONSUMERGLTEXTUREEXTERNALATTRIBSNVPROC)load (
      userptr, "eglStreamConsumerGLTextureExternalAttribsNV");
}
static void
glext_egl_load_EGL_NV_stream_flush (GLEXTuserptrloadfunc load, void* userptr) {
  if (!GLEXT_EGL_NV_stream_flush)
    return;
  glext_eglStreamFlushNV
    = (PFNEGLSTREAMFLUSHNVPROC)load (userptr, "eglStreamFlushNV");
}
static void
glext_egl_load_EGL_NV_stream_metadata (GLEXTuserptrloadfunc load,
                                       void* userptr) {
  if (!GLEXT_EGL_NV_stream_metadata)
    return;
  glext_eglQueryDisplayAttribNV = (PFNEGLQUERYDISPLAYATTRIBNVPROC)load (
    userptr, "eglQueryDisplayAttribNV");
  glext_eglQueryStreamMetadataNV = (PFNEGLQUERYSTREAMMETADATANVPROC)load (
    userptr, "eglQueryStreamMetadataNV");
  glext_eglSetStreamMetadataNV
    = (PFNEGLSETSTREAMMETADATANVPROC)load (userptr, "eglSetStreamMetadataNV");
}
static void
glext_egl_load_EGL_NV_stream_reset (GLEXTuserptrloadfunc load, void* userptr) {
  if (!GLEXT_EGL_NV_stream_reset)
    return;
  glext_eglResetStreamNV
    = (PFNEGLRESETSTREAMNVPROC)load (userptr, "eglResetStreamNV");
}
static void
glext_egl_load_EGL_NV_stream_sync (GLEXTuserptrloadfunc load, void* userptr) {
  if (!GLEXT_EGL_NV_stream_sync)
    return;
  glext_eglCreateStreamSyncNV
    = (PFNEGLCREATESTREAMSYNCNVPROC)load (userptr, "eglCreateStreamSyncNV");
}
static void
glext_egl_load_EGL_NV_sync (GLEXTuserptrloadfunc load, void* userptr) {
  if (!GLEXT_EGL_NV_sync)
    return;
  glext_eglClientWaitSyncNV
    = (PFNEGLCLIENTWAITSYNCNVPROC)load (userptr, "eglClientWaitSyncNV");
  glext_eglCreateFenceSyncNV
    = (PFNEGLCREATEFENCESYNCNVPROC)load (userptr, "eglCreateFenceSyncNV");
  glext_eglDestroySyncNV
    = (PFNEGLDESTROYSYNCNVPROC)load (userptr, "eglDestroySyncNV");
  glext_eglFenceNV = (PFNEGLFENCENVPROC)load (userptr, "eglFenceNV");
  glext_eglGetSyncAttribNV
    = (PFNEGLGETSYNCATTRIBNVPROC)load (userptr, "eglGetSyncAttribNV");
  glext_eglSignalSyncNV
    = (PFNEGLSIGNALSYNCNVPROC)load (userptr, "eglSignalSyncNV");
}
static void
glext_egl_load_EGL_NV_system_time (GLEXTuserptrloadfunc load, void* userptr) {
  if (!GLEXT_EGL_NV_system_time)
    return;
  glext_eglGetSystemTimeFrequencyNV
    = (PFNEGLGETSYSTEMTIMEFREQUENCYNVPROC)load (userptr,
                                                "eglGetSystemTimeFrequencyNV");
  glext_eglGetSystemTimeNV
    = (PFNEGLGETSYSTEMTIMENVPROC)load (userptr, "eglGetSystemTimeNV");
}
static void
glext_egl_load_EGL_WL_bind_wayland_display (GLEXTuserptrloadfunc load,
                                            void* userptr) {
  if (!GLEXT_EGL_WL_bind_wayland_display)
    return;
  glext_eglBindWaylandDisplayWL = (PFNEGLBINDWAYLANDDISPLAYWLPROC)load (
    userptr, "eglBindWaylandDisplayWL");
  glext_eglQueryWaylandBufferWL = (PFNEGLQUERYWAYLANDBUFFERWLPROC)load (
    userptr, "eglQueryWaylandBufferWL");
  glext_eglUnbindWaylandDisplayWL = (PFNEGLUNBINDWAYLANDDISPLAYWLPROC)load (
    userptr, "eglUnbindWaylandDisplayWL");
}
static void
glext_egl_load_EGL_WL_create_wayland_buffer_from_image (
  GLEXTuserptrloadfunc load, void* userptr) {
  if (!GLEXT_EGL_WL_create_wayland_buffer_from_image)
    return;
  glext_eglCreateWaylandBufferFromImageWL
    = (PFNEGLCREATEWAYLANDBUFFERFROMIMAGEWLPROC)load (
      userptr, "eglCreateWaylandBufferFromImageWL");
}

static void
glext_egl_resolve_aliases (void) {
  if (glext_eglClientWaitSync == NULL && glext_eglClientWaitSyncKHR != NULL)
    glext_eglClientWaitSync
      = (PFNEGLCLIENTWAITSYNCPROC)glext_eglClientWaitSyncKHR;
  if (glext_eglClientWaitSyncKHR == NULL && glext_eglClientWaitSync != NULL)
    glext_eglClientWaitSyncKHR
      = (PFNEGLCLIENTWAITSYNCKHRPROC)glext_eglClientWaitSync;
  if (glext_eglCreateSync == NULL && glext_eglCreateSync64KHR != NULL)
    glext_eglCreateSync = (PFNEGLCREATESYNCPROC)glext_eglCreateSync64KHR;
  if (glext_eglCreateSync64KHR == NULL && glext_eglCreateSync != NULL)
    glext_eglCreateSync64KHR = (PFNEGLCREATESYNC64KHRPROC)glext_eglCreateSync;
  if (glext_eglDestroyImage == NULL && glext_eglDestroyImageKHR != NULL)
    glext_eglDestroyImage = (PFNEGLDESTROYIMAGEPROC)glext_eglDestroyImageKHR;
  if (glext_eglDestroyImageKHR == NULL && glext_eglDestroyImage != NULL)
    glext_eglDestroyImageKHR
      = (PFNEGLDESTROYIMAGEKHRPROC)glext_eglDestroyImage;
  if (glext_eglDestroySync == NULL && glext_eglDestroySyncKHR != NULL)
    glext_eglDestroySync = (PFNEGLDESTROYSYNCPROC)glext_eglDestroySyncKHR;
  if (glext_eglDestroySyncKHR == NULL && glext_eglDestroySync != NULL)
    glext_eglDestroySyncKHR = (PFNEGLDESTROYSYNCKHRPROC)glext_eglDestroySync;
  if (glext_eglQueryDisplayAttribEXT == NULL
      && glext_eglQueryDisplayAttribKHR != NULL)
    glext_eglQueryDisplayAttribEXT
      = (PFNEGLQUERYDISPLAYATTRIBEXTPROC)glext_eglQueryDisplayAttribKHR;
  if (glext_eglQueryDisplayAttribEXT == NULL
      && glext_eglQueryDisplayAttribNV != NULL)
    glext_eglQueryDisplayAttribEXT
      = (PFNEGLQUERYDISPLAYATTRIBEXTPROC)glext_eglQueryDisplayAttribNV;
  if (glext_eglQueryDisplayAttribKHR == NULL
      && glext_eglQueryDisplayAttribEXT != NULL)
    glext_eglQueryDisplayAttribKHR
      = (PFNEGLQUERYDISPLAYATTRIBKHRPROC)glext_eglQueryDisplayAttribEXT;
  if (glext_eglQueryDisplayAttribKHR == NULL
      && glext_eglQueryDisplayAttribNV != NULL)
    glext_eglQueryDisplayAttribKHR
      = (PFNEGLQUERYDISPLAYATTRIBKHRPROC)glext_eglQueryDisplayAttribNV;
  if (glext_eglQueryDisplayAttribNV == NULL
      && glext_eglQueryDisplayAttribEXT != NULL)
    glext_eglQueryDisplayAttribNV
      = (PFNEGLQUERYDISPLAYATTRIBNVPROC)glext_eglQueryDisplayAttribEXT;
  if (glext_eglQueryDisplayAttribNV == NULL
      && glext_eglQueryDisplayAttribKHR != NULL)
    glext_eglQueryDisplayAttribNV
      = (PFNEGLQUERYDISPLAYATTRIBNVPROC)glext_eglQueryDisplayAttribKHR;
}

static int
glext_egl_get_extensions (EGLDisplay display, const char** extensions) {
  *extensions = eglQueryString (display, EGL_EXTENSIONS);

  return extensions != NULL;
}

static int
glext_egl_has_extension (const char* extensions, const char* ext) {
  const char* loc;
  const char* terminator;
  if (extensions == NULL) {
    return 0;
  }
  while (1) {
    loc = strstr (extensions, ext);
    if (loc == NULL) {
      return 0;
    }
    terminator = loc + strlen (ext);
    if ((loc == extensions || *(loc - 1) == ' ')
        && (*terminator == ' ' || *terminator == '\0')) {
      return 1;
    }
    extensions = terminator;
  }
}

static GLEXTapiproc
glext_egl_get_proc_from_userptr (void* userptr, const char* name) {
  return (GLEXT_GNUC_EXTENSION (GLEXTapiproc (*) (const char* name))
            userptr) (name);
}

static int
glext_egl_find_extensions_egl (EGLDisplay display) {
  const char* extensions;
  if (!glext_egl_get_extensions (display, &extensions))
    return 0;

  GLEXT_EGL_ANDROID_GLES_layers
    = glext_egl_has_extension (extensions, "EGL_ANDROID_GLES_layers");
  GLEXT_EGL_ANDROID_blob_cache
    = glext_egl_has_extension (extensions, "EGL_ANDROID_blob_cache");
  GLEXT_EGL_ANDROID_create_native_client_buffer = glext_egl_has_extension (
    extensions, "EGL_ANDROID_create_native_client_buffer");
  GLEXT_EGL_ANDROID_framebuffer_target
    = glext_egl_has_extension (extensions, "EGL_ANDROID_framebuffer_target");
  GLEXT_EGL_ANDROID_front_buffer_auto_refresh = glext_egl_has_extension (
    extensions, "EGL_ANDROID_front_buffer_auto_refresh");
  GLEXT_EGL_ANDROID_get_frame_timestamps
    = glext_egl_has_extension (extensions, "EGL_ANDROID_get_frame_timestamps");
  GLEXT_EGL_ANDROID_get_native_client_buffer = glext_egl_has_extension (
    extensions, "EGL_ANDROID_get_native_client_buffer");
  GLEXT_EGL_ANDROID_image_native_buffer
    = glext_egl_has_extension (extensions, "EGL_ANDROID_image_native_buffer");
  GLEXT_EGL_ANDROID_native_fence_sync
    = glext_egl_has_extension (extensions, "EGL_ANDROID_native_fence_sync");
  GLEXT_EGL_ANDROID_presentation_time
    = glext_egl_has_extension (extensions, "EGL_ANDROID_presentation_time");
  GLEXT_EGL_ANDROID_recordable
    = glext_egl_has_extension (extensions, "EGL_ANDROID_recordable");
  GLEXT_EGL_ANDROID_telemetry_hint
    = glext_egl_has_extension (extensions, "EGL_ANDROID_telemetry_hint");
  GLEXT_EGL_ANGLE_d3d_share_handle_client_buffer = glext_egl_has_extension (
    extensions, "EGL_ANGLE_d3d_share_handle_client_buffer");
  GLEXT_EGL_ANGLE_device_d3d
    = glext_egl_has_extension (extensions, "EGL_ANGLE_device_d3d");
  GLEXT_EGL_ANGLE_query_surface_pointer
    = glext_egl_has_extension (extensions, "EGL_ANGLE_query_surface_pointer");
  GLEXT_EGL_ANGLE_surface_d3d_texture_2d_share_handle
    = glext_egl_has_extension (
      extensions, "EGL_ANGLE_surface_d3d_texture_2d_share_handle");
  GLEXT_EGL_ANGLE_sync_control_rate
    = glext_egl_has_extension (extensions, "EGL_ANGLE_sync_control_rate");
  GLEXT_EGL_ANGLE_window_fixed_size
    = glext_egl_has_extension (extensions, "EGL_ANGLE_window_fixed_size");
  GLEXT_EGL_ARM_image_format
    = glext_egl_has_extension (extensions, "EGL_ARM_image_format");
  GLEXT_EGL_ARM_implicit_external_sync
    = glext_egl_has_extension (extensions, "EGL_ARM_implicit_external_sync");
  GLEXT_EGL_ARM_pixmap_multisample_discard = glext_egl_has_extension (
    extensions, "EGL_ARM_pixmap_multisample_discard");
  GLEXT_EGL_EXT_bind_to_front
    = glext_egl_has_extension (extensions, "EGL_EXT_bind_to_front");
  GLEXT_EGL_EXT_buffer_age
    = glext_egl_has_extension (extensions, "EGL_EXT_buffer_age");
  GLEXT_EGL_EXT_client_extensions
    = glext_egl_has_extension (extensions, "EGL_EXT_client_extensions");
  GLEXT_EGL_EXT_client_sync
    = glext_egl_has_extension (extensions, "EGL_EXT_client_sync");
  GLEXT_EGL_EXT_compositor
    = glext_egl_has_extension (extensions, "EGL_EXT_compositor");
  GLEXT_EGL_EXT_config_select_group
    = glext_egl_has_extension (extensions, "EGL_EXT_config_select_group");
  GLEXT_EGL_EXT_create_context_robustness = glext_egl_has_extension (
    extensions, "EGL_EXT_create_context_robustness");
  GLEXT_EGL_EXT_device_base
    = glext_egl_has_extension (extensions, "EGL_EXT_device_base");
  GLEXT_EGL_EXT_device_drm
    = glext_egl_has_extension (extensions, "EGL_EXT_device_drm");
  GLEXT_EGL_EXT_device_drm_render_node
    = glext_egl_has_extension (extensions, "EGL_EXT_device_drm_render_node");
  GLEXT_EGL_EXT_device_enumeration
    = glext_egl_has_extension (extensions, "EGL_EXT_device_enumeration");
  GLEXT_EGL_EXT_device_openwf
    = glext_egl_has_extension (extensions, "EGL_EXT_device_openwf");
  GLEXT_EGL_EXT_device_persistent_id
    = glext_egl_has_extension (extensions, "EGL_EXT_device_persistent_id");
  GLEXT_EGL_EXT_device_query
    = glext_egl_has_extension (extensions, "EGL_EXT_device_query");
  GLEXT_EGL_EXT_device_query_name
    = glext_egl_has_extension (extensions, "EGL_EXT_device_query_name");
  GLEXT_EGL_EXT_device_type
    = glext_egl_has_extension (extensions, "EGL_EXT_device_type");
  GLEXT_EGL_EXT_display_alloc
    = glext_egl_has_extension (extensions, "EGL_EXT_display_alloc");
  GLEXT_EGL_EXT_explicit_device
    = glext_egl_has_extension (extensions, "EGL_EXT_explicit_device");
  GLEXT_EGL_EXT_gl_colorspace_bt2020_hlg
    = glext_egl_has_extension (extensions, "EGL_EXT_gl_colorspace_bt2020_hlg");
  GLEXT_EGL_EXT_gl_colorspace_bt2020_linear = glext_egl_has_extension (
    extensions, "EGL_EXT_gl_colorspace_bt2020_linear");
  GLEXT_EGL_EXT_gl_colorspace_bt2020_pq
    = glext_egl_has_extension (extensions, "EGL_EXT_gl_colorspace_bt2020_pq");
  GLEXT_EGL_EXT_gl_colorspace_display_p3
    = glext_egl_has_extension (extensions, "EGL_EXT_gl_colorspace_display_p3");
  GLEXT_EGL_EXT_gl_colorspace_display_p3_linear = glext_egl_has_extension (
    extensions, "EGL_EXT_gl_colorspace_display_p3_linear");
  GLEXT_EGL_EXT_gl_colorspace_display_p3_passthrough
    = glext_egl_has_extension (extensions,
                               "EGL_EXT_gl_colorspace_display_p3_passthrough");
  GLEXT_EGL_EXT_gl_colorspace_scrgb
    = glext_egl_has_extension (extensions, "EGL_EXT_gl_colorspace_scrgb");
  GLEXT_EGL_EXT_gl_colorspace_scrgb_linear = glext_egl_has_extension (
    extensions, "EGL_EXT_gl_colorspace_scrgb_linear");
  GLEXT_EGL_EXT_image_dma_buf_import
    = glext_egl_has_extension (extensions, "EGL_EXT_image_dma_buf_import");
  GLEXT_EGL_EXT_image_dma_buf_import_modifiers = glext_egl_has_extension (
    extensions, "EGL_EXT_image_dma_buf_import_modifiers");
  GLEXT_EGL_EXT_image_gl_colorspace
    = glext_egl_has_extension (extensions, "EGL_EXT_image_gl_colorspace");
  GLEXT_EGL_EXT_image_implicit_sync_control = glext_egl_has_extension (
    extensions, "EGL_EXT_image_implicit_sync_control");
  GLEXT_EGL_EXT_multiview_window
    = glext_egl_has_extension (extensions, "EGL_EXT_multiview_window");
  GLEXT_EGL_EXT_output_base
    = glext_egl_has_extension (extensions, "EGL_EXT_output_base");
  GLEXT_EGL_EXT_output_drm
    = glext_egl_has_extension (extensions, "EGL_EXT_output_drm");
  GLEXT_EGL_EXT_output_openwf
    = glext_egl_has_extension (extensions, "EGL_EXT_output_openwf");
  GLEXT_EGL_EXT_pixel_format_float
    = glext_egl_has_extension (extensions, "EGL_EXT_pixel_format_float");
  GLEXT_EGL_EXT_platform_base
    = glext_egl_has_extension (extensions, "EGL_EXT_platform_base");
  GLEXT_EGL_EXT_platform_device
    = glext_egl_has_extension (extensions, "EGL_EXT_platform_device");
  GLEXT_EGL_EXT_platform_wayland
    = glext_egl_has_extension (extensions, "EGL_EXT_platform_wayland");
  GLEXT_EGL_EXT_platform_x11
    = glext_egl_has_extension (extensions, "EGL_EXT_platform_x11");
  GLEXT_EGL_EXT_platform_xcb
    = glext_egl_has_extension (extensions, "EGL_EXT_platform_xcb");
  GLEXT_EGL_EXT_present_opaque
    = glext_egl_has_extension (extensions, "EGL_EXT_present_opaque");
  GLEXT_EGL_EXT_protected_content
    = glext_egl_has_extension (extensions, "EGL_EXT_protected_content");
  GLEXT_EGL_EXT_protected_surface
    = glext_egl_has_extension (extensions, "EGL_EXT_protected_surface");
  GLEXT_EGL_EXT_query_reset_notification_strategy = glext_egl_has_extension (
    extensions, "EGL_EXT_query_reset_notification_strategy");
  GLEXT_EGL_EXT_stream_consumer_egloutput = glext_egl_has_extension (
    extensions, "EGL_EXT_stream_consumer_egloutput");
  GLEXT_EGL_EXT_surface_CTA861_3_metadata = glext_egl_has_extension (
    extensions, "EGL_EXT_surface_CTA861_3_metadata");
  GLEXT_EGL_EXT_surface_SMPTE2086_metadata = glext_egl_has_extension (
    extensions, "EGL_EXT_surface_SMPTE2086_metadata");
  GLEXT_EGL_EXT_surface_compression
    = glext_egl_has_extension (extensions, "EGL_EXT_surface_compression");
  GLEXT_EGL_EXT_swap_buffers_with_damage
    = glext_egl_has_extension (extensions, "EGL_EXT_swap_buffers_with_damage");
  GLEXT_EGL_EXT_sync_reuse
    = glext_egl_has_extension (extensions, "EGL_EXT_sync_reuse");
  GLEXT_EGL_EXT_yuv_surface
    = glext_egl_has_extension (extensions, "EGL_EXT_yuv_surface");
  GLEXT_EGL_HI_clientpixmap
    = glext_egl_has_extension (extensions, "EGL_HI_clientpixmap");
  GLEXT_EGL_HI_colorformats
    = glext_egl_has_extension (extensions, "EGL_HI_colorformats");
  GLEXT_EGL_IMG_context_priority
    = glext_egl_has_extension (extensions, "EGL_IMG_context_priority");
  GLEXT_EGL_IMG_image_plane_attribs
    = glext_egl_has_extension (extensions, "EGL_IMG_image_plane_attribs");
  GLEXT_EGL_KHR_cl_event
    = glext_egl_has_extension (extensions, "EGL_KHR_cl_event");
  GLEXT_EGL_KHR_cl_event2
    = glext_egl_has_extension (extensions, "EGL_KHR_cl_event2");
  GLEXT_EGL_KHR_client_get_all_proc_addresses = glext_egl_has_extension (
    extensions, "EGL_KHR_client_get_all_proc_addresses");
  GLEXT_EGL_KHR_config_attribs
    = glext_egl_has_extension (extensions, "EGL_KHR_config_attribs");
  GLEXT_EGL_KHR_context_flush_control
    = glext_egl_has_extension (extensions, "EGL_KHR_context_flush_control");
  GLEXT_EGL_KHR_create_context
    = glext_egl_has_extension (extensions, "EGL_KHR_create_context");
  GLEXT_EGL_KHR_create_context_no_error
    = glext_egl_has_extension (extensions, "EGL_KHR_create_context_no_error");
  GLEXT_EGL_KHR_debug = glext_egl_has_extension (extensions, "EGL_KHR_debug");
  GLEXT_EGL_KHR_display_reference
    = glext_egl_has_extension (extensions, "EGL_KHR_display_reference");
  GLEXT_EGL_KHR_fence_sync
    = glext_egl_has_extension (extensions, "EGL_KHR_fence_sync");
  GLEXT_EGL_KHR_get_all_proc_addresses
    = glext_egl_has_extension (extensions, "EGL_KHR_get_all_proc_addresses");
  GLEXT_EGL_KHR_gl_colorspace
    = glext_egl_has_extension (extensions, "EGL_KHR_gl_colorspace");
  GLEXT_EGL_KHR_gl_renderbuffer_image
    = glext_egl_has_extension (extensions, "EGL_KHR_gl_renderbuffer_image");
  GLEXT_EGL_KHR_gl_texture_2D_image
    = glext_egl_has_extension (extensions, "EGL_KHR_gl_texture_2D_image");
  GLEXT_EGL_KHR_gl_texture_3D_image
    = glext_egl_has_extension (extensions, "EGL_KHR_gl_texture_3D_image");
  GLEXT_EGL_KHR_gl_texture_cubemap_image
    = glext_egl_has_extension (extensions, "EGL_KHR_gl_texture_cubemap_image");
  GLEXT_EGL_KHR_image = glext_egl_has_extension (extensions, "EGL_KHR_image");
  GLEXT_EGL_KHR_image_base
    = glext_egl_has_extension (extensions, "EGL_KHR_image_base");
  GLEXT_EGL_KHR_image_pixmap
    = glext_egl_has_extension (extensions, "EGL_KHR_image_pixmap");
  GLEXT_EGL_KHR_lock_surface
    = glext_egl_has_extension (extensions, "EGL_KHR_lock_surface");
  GLEXT_EGL_KHR_lock_surface2
    = glext_egl_has_extension (extensions, "EGL_KHR_lock_surface2");
  GLEXT_EGL_KHR_lock_surface3
    = glext_egl_has_extension (extensions, "EGL_KHR_lock_surface3");
  GLEXT_EGL_KHR_mutable_render_buffer
    = glext_egl_has_extension (extensions, "EGL_KHR_mutable_render_buffer");
  GLEXT_EGL_KHR_no_config_context
    = glext_egl_has_extension (extensions, "EGL_KHR_no_config_context");
  GLEXT_EGL_KHR_partial_update
    = glext_egl_has_extension (extensions, "EGL_KHR_partial_update");
  GLEXT_EGL_KHR_platform_android
    = glext_egl_has_extension (extensions, "EGL_KHR_platform_android");
  GLEXT_EGL_KHR_platform_gbm
    = glext_egl_has_extension (extensions, "EGL_KHR_platform_gbm");
  GLEXT_EGL_KHR_platform_wayland
    = glext_egl_has_extension (extensions, "EGL_KHR_platform_wayland");
  GLEXT_EGL_KHR_platform_x11
    = glext_egl_has_extension (extensions, "EGL_KHR_platform_x11");
  GLEXT_EGL_KHR_reusable_sync
    = glext_egl_has_extension (extensions, "EGL_KHR_reusable_sync");
  GLEXT_EGL_KHR_stream
    = glext_egl_has_extension (extensions, "EGL_KHR_stream");
  GLEXT_EGL_KHR_stream_attrib
    = glext_egl_has_extension (extensions, "EGL_KHR_stream_attrib");
  GLEXT_EGL_KHR_stream_consumer_gltexture = glext_egl_has_extension (
    extensions, "EGL_KHR_stream_consumer_gltexture");
  GLEXT_EGL_KHR_stream_cross_process_fd
    = glext_egl_has_extension (extensions, "EGL_KHR_stream_cross_process_fd");
  GLEXT_EGL_KHR_stream_fifo
    = glext_egl_has_extension (extensions, "EGL_KHR_stream_fifo");
  GLEXT_EGL_KHR_stream_producer_aldatalocator = glext_egl_has_extension (
    extensions, "EGL_KHR_stream_producer_aldatalocator");
  GLEXT_EGL_KHR_stream_producer_eglsurface = glext_egl_has_extension (
    extensions, "EGL_KHR_stream_producer_eglsurface");
  GLEXT_EGL_KHR_surfaceless_context
    = glext_egl_has_extension (extensions, "EGL_KHR_surfaceless_context");
  GLEXT_EGL_KHR_swap_buffers_with_damage
    = glext_egl_has_extension (extensions, "EGL_KHR_swap_buffers_with_damage");
  GLEXT_EGL_KHR_vg_parent_image
    = glext_egl_has_extension (extensions, "EGL_KHR_vg_parent_image");
  GLEXT_EGL_KHR_wait_sync
    = glext_egl_has_extension (extensions, "EGL_KHR_wait_sync");
  GLEXT_EGL_MESA_drm_image
    = glext_egl_has_extension (extensions, "EGL_MESA_drm_image");
  GLEXT_EGL_MESA_image_dma_buf_export
    = glext_egl_has_extension (extensions, "EGL_MESA_image_dma_buf_export");
  GLEXT_EGL_MESA_platform_gbm
    = glext_egl_has_extension (extensions, "EGL_MESA_platform_gbm");
  GLEXT_EGL_MESA_platform_surfaceless
    = glext_egl_has_extension (extensions, "EGL_MESA_platform_surfaceless");
  GLEXT_EGL_MESA_query_driver
    = glext_egl_has_extension (extensions, "EGL_MESA_query_driver");
  GLEXT_EGL_NOK_swap_region
    = glext_egl_has_extension (extensions, "EGL_NOK_swap_region");
  GLEXT_EGL_NOK_swap_region2
    = glext_egl_has_extension (extensions, "EGL_NOK_swap_region2");
  GLEXT_EGL_NOK_texture_from_pixmap
    = glext_egl_has_extension (extensions, "EGL_NOK_texture_from_pixmap");
  GLEXT_EGL_NV_3dvision_surface
    = glext_egl_has_extension (extensions, "EGL_NV_3dvision_surface");
  GLEXT_EGL_NV_context_priority_realtime
    = glext_egl_has_extension (extensions, "EGL_NV_context_priority_realtime");
  GLEXT_EGL_NV_coverage_sample
    = glext_egl_has_extension (extensions, "EGL_NV_coverage_sample");
  GLEXT_EGL_NV_coverage_sample_resolve
    = glext_egl_has_extension (extensions, "EGL_NV_coverage_sample_resolve");
  GLEXT_EGL_NV_cuda_event
    = glext_egl_has_extension (extensions, "EGL_NV_cuda_event");
  GLEXT_EGL_NV_depth_nonlinear
    = glext_egl_has_extension (extensions, "EGL_NV_depth_nonlinear");
  GLEXT_EGL_NV_device_cuda
    = glext_egl_has_extension (extensions, "EGL_NV_device_cuda");
  GLEXT_EGL_NV_native_query
    = glext_egl_has_extension (extensions, "EGL_NV_native_query");
  GLEXT_EGL_NV_post_convert_rounding
    = glext_egl_has_extension (extensions, "EGL_NV_post_convert_rounding");
  GLEXT_EGL_NV_post_sub_buffer
    = glext_egl_has_extension (extensions, "EGL_NV_post_sub_buffer");
  GLEXT_EGL_NV_quadruple_buffer
    = glext_egl_has_extension (extensions, "EGL_NV_quadruple_buffer");
  GLEXT_EGL_NV_robustness_video_memory_purge = glext_egl_has_extension (
    extensions, "EGL_NV_robustness_video_memory_purge");
  GLEXT_EGL_NV_stream_consumer_eglimage
    = glext_egl_has_extension (extensions, "EGL_NV_stream_consumer_eglimage");
  GLEXT_EGL_NV_stream_consumer_eglimage_use_scanout_attrib
    = glext_egl_has_extension (
      extensions, "EGL_NV_stream_consumer_eglimage_use_scanout_attrib");
  GLEXT_EGL_NV_stream_consumer_gltexture_yuv = glext_egl_has_extension (
    extensions, "EGL_NV_stream_consumer_gltexture_yuv");
  GLEXT_EGL_NV_stream_cross_display
    = glext_egl_has_extension (extensions, "EGL_NV_stream_cross_display");
  GLEXT_EGL_NV_stream_cross_object
    = glext_egl_has_extension (extensions, "EGL_NV_stream_cross_object");
  GLEXT_EGL_NV_stream_cross_partition
    = glext_egl_has_extension (extensions, "EGL_NV_stream_cross_partition");
  GLEXT_EGL_NV_stream_cross_process
    = glext_egl_has_extension (extensions, "EGL_NV_stream_cross_process");
  GLEXT_EGL_NV_stream_cross_system
    = glext_egl_has_extension (extensions, "EGL_NV_stream_cross_system");
  GLEXT_EGL_NV_stream_dma
    = glext_egl_has_extension (extensions, "EGL_NV_stream_dma");
  GLEXT_EGL_NV_stream_fifo_next
    = glext_egl_has_extension (extensions, "EGL_NV_stream_fifo_next");
  GLEXT_EGL_NV_stream_fifo_synchronous
    = glext_egl_has_extension (extensions, "EGL_NV_stream_fifo_synchronous");
  GLEXT_EGL_NV_stream_flush
    = glext_egl_has_extension (extensions, "EGL_NV_stream_flush");
  GLEXT_EGL_NV_stream_frame_limits
    = glext_egl_has_extension (extensions, "EGL_NV_stream_frame_limits");
  GLEXT_EGL_NV_stream_metadata
    = glext_egl_has_extension (extensions, "EGL_NV_stream_metadata");
  GLEXT_EGL_NV_stream_origin
    = glext_egl_has_extension (extensions, "EGL_NV_stream_origin");
  GLEXT_EGL_NV_stream_remote
    = glext_egl_has_extension (extensions, "EGL_NV_stream_remote");
  GLEXT_EGL_NV_stream_reset
    = glext_egl_has_extension (extensions, "EGL_NV_stream_reset");
  GLEXT_EGL_NV_stream_socket
    = glext_egl_has_extension (extensions, "EGL_NV_stream_socket");
  GLEXT_EGL_NV_stream_socket_inet
    = glext_egl_has_extension (extensions, "EGL_NV_stream_socket_inet");
  GLEXT_EGL_NV_stream_socket_unix
    = glext_egl_has_extension (extensions, "EGL_NV_stream_socket_unix");
  GLEXT_EGL_NV_stream_sync
    = glext_egl_has_extension (extensions, "EGL_NV_stream_sync");
  GLEXT_EGL_NV_sync = glext_egl_has_extension (extensions, "EGL_NV_sync");
  GLEXT_EGL_NV_system_time
    = glext_egl_has_extension (extensions, "EGL_NV_system_time");
  GLEXT_EGL_NV_triple_buffer
    = glext_egl_has_extension (extensions, "EGL_NV_triple_buffer");
  GLEXT_EGL_QNX_image_native_buffer
    = glext_egl_has_extension (extensions, "EGL_QNX_image_native_buffer");
  GLEXT_EGL_QNX_platform_screen
    = glext_egl_has_extension (extensions, "EGL_QNX_platform_screen");
  GLEXT_EGL_TIZEN_image_native_buffer
    = glext_egl_has_extension (extensions, "EGL_TIZEN_image_native_buffer");
  GLEXT_EGL_TIZEN_image_native_surface
    = glext_egl_has_extension (extensions, "EGL_TIZEN_image_native_surface");
  GLEXT_EGL_WL_bind_wayland_display
    = glext_egl_has_extension (extensions, "EGL_WL_bind_wayland_display");
  GLEXT_EGL_WL_create_wayland_buffer_from_image = glext_egl_has_extension (
    extensions, "EGL_WL_create_wayland_buffer_from_image");

  return 1;
}

static int
glext_egl_find_core_egl (EGLDisplay display) {
  int major, minor;
  const char* version;

  if (display == NULL) {
    display
      = EGL_NO_DISPLAY; /* this is usually NULL, better safe than sorry */
  }
  if (display == EGL_NO_DISPLAY) {
    display = eglGetCurrentDisplay ();
  }
#ifdef EGL_VERSION_1_4
  if (display == EGL_NO_DISPLAY) {
    display = eglGetDisplay (EGL_DEFAULT_DISPLAY);
  }
#endif
#ifndef EGL_VERSION_1_5
  if (display == EGL_NO_DISPLAY) {
    return 0;
  }
#endif

  version = eglQueryString (display, EGL_VERSION);
  (void)eglGetError ();

  if (version == NULL) {
    major = 1;
    minor = 0;
  } else {
    GLEXT_IMPL_UTIL_SSCANF (version, "%d.%d", &major, &minor);
  }

  GLEXT_EGL_VERSION_1_0 = (major == 1 && minor >= 0) || major > 1;
  GLEXT_EGL_VERSION_1_1 = (major == 1 && minor >= 1) || major > 1;
  GLEXT_EGL_VERSION_1_2 = (major == 1 && minor >= 2) || major > 1;
  GLEXT_EGL_VERSION_1_3 = (major == 1 && minor >= 3) || major > 1;
  GLEXT_EGL_VERSION_1_4 = (major == 1 && minor >= 4) || major > 1;
  GLEXT_EGL_VERSION_1_5 = (major == 1 && minor >= 5) || major > 1;

  return GLEXT_MAKE_VERSION (major, minor);
}

int
glext_LoadEGLUserPtr (EGLDisplay display, GLEXTuserptrloadfunc load,
                      void* userptr) {
  int version;
  eglGetDisplay = (PFNEGLGETDISPLAYPROC)load (userptr, "eglGetDisplay");
  eglGetCurrentDisplay
    = (PFNEGLGETCURRENTDISPLAYPROC)load (userptr, "eglGetCurrentDisplay");
  eglQueryString = (PFNEGLQUERYSTRINGPROC)load (userptr, "eglQueryString");
  eglGetError = (PFNEGLGETERRORPROC)load (userptr, "eglGetError");
  if (eglGetDisplay == NULL || eglGetCurrentDisplay == NULL
      || eglQueryString == NULL || eglGetError == NULL)
    return 0;

  version = glext_egl_find_core_egl (display);
  if (!version)
    return 0;
  glext_egl_load_EGL_VERSION_1_0 (load, userptr);
  glext_egl_load_EGL_VERSION_1_1 (load, userptr);
  glext_egl_load_EGL_VERSION_1_2 (load, userptr);
  glext_egl_load_EGL_VERSION_1_4 (load, userptr);
  glext_egl_load_EGL_VERSION_1_5 (load, userptr);

  if (!glext_egl_find_extensions_egl (display))
    return 0;
  glext_egl_load_EGL_ANDROID_blob_cache (load, userptr);
  glext_egl_load_EGL_ANDROID_create_native_client_buffer (load, userptr);
  glext_egl_load_EGL_ANDROID_get_frame_timestamps (load, userptr);
  glext_egl_load_EGL_ANDROID_get_native_client_buffer (load, userptr);
  glext_egl_load_EGL_ANDROID_native_fence_sync (load, userptr);
  glext_egl_load_EGL_ANDROID_presentation_time (load, userptr);
  glext_egl_load_EGL_ANGLE_query_surface_pointer (load, userptr);
  glext_egl_load_EGL_ANGLE_sync_control_rate (load, userptr);
  glext_egl_load_EGL_EXT_client_sync (load, userptr);
  glext_egl_load_EGL_EXT_compositor (load, userptr);
  glext_egl_load_EGL_EXT_device_base (load, userptr);
  glext_egl_load_EGL_EXT_device_enumeration (load, userptr);
  glext_egl_load_EGL_EXT_device_persistent_id (load, userptr);
  glext_egl_load_EGL_EXT_device_query (load, userptr);
  glext_egl_load_EGL_EXT_display_alloc (load, userptr);
  glext_egl_load_EGL_EXT_image_dma_buf_import_modifiers (load, userptr);
  glext_egl_load_EGL_EXT_output_base (load, userptr);
  glext_egl_load_EGL_EXT_platform_base (load, userptr);
  glext_egl_load_EGL_EXT_stream_consumer_egloutput (load, userptr);
  glext_egl_load_EGL_EXT_surface_compression (load, userptr);
  glext_egl_load_EGL_EXT_swap_buffers_with_damage (load, userptr);
  glext_egl_load_EGL_EXT_sync_reuse (load, userptr);
  glext_egl_load_EGL_HI_clientpixmap (load, userptr);
  glext_egl_load_EGL_KHR_cl_event2 (load, userptr);
  glext_egl_load_EGL_KHR_debug (load, userptr);
  glext_egl_load_EGL_KHR_display_reference (load, userptr);
  glext_egl_load_EGL_KHR_fence_sync (load, userptr);
  glext_egl_load_EGL_KHR_image (load, userptr);
  glext_egl_load_EGL_KHR_image_base (load, userptr);
  glext_egl_load_EGL_KHR_lock_surface (load, userptr);
  glext_egl_load_EGL_KHR_lock_surface3 (load, userptr);
  glext_egl_load_EGL_KHR_partial_update (load, userptr);
  glext_egl_load_EGL_KHR_reusable_sync (load, userptr);
  glext_egl_load_EGL_KHR_stream (load, userptr);
  glext_egl_load_EGL_KHR_stream_attrib (load, userptr);
  glext_egl_load_EGL_KHR_stream_consumer_gltexture (load, userptr);
  glext_egl_load_EGL_KHR_stream_cross_process_fd (load, userptr);
  glext_egl_load_EGL_KHR_stream_fifo (load, userptr);
  glext_egl_load_EGL_KHR_stream_producer_eglsurface (load, userptr);
  glext_egl_load_EGL_KHR_swap_buffers_with_damage (load, userptr);
  glext_egl_load_EGL_KHR_wait_sync (load, userptr);
  glext_egl_load_EGL_MESA_drm_image (load, userptr);
  glext_egl_load_EGL_MESA_image_dma_buf_export (load, userptr);
  glext_egl_load_EGL_MESA_query_driver (load, userptr);
  glext_egl_load_EGL_NOK_swap_region (load, userptr);
  glext_egl_load_EGL_NOK_swap_region2 (load, userptr);
  glext_egl_load_EGL_NV_native_query (load, userptr);
  glext_egl_load_EGL_NV_post_sub_buffer (load, userptr);
  glext_egl_load_EGL_NV_stream_consumer_eglimage (load, userptr);
  glext_egl_load_EGL_NV_stream_consumer_gltexture_yuv (load, userptr);
  glext_egl_load_EGL_NV_stream_flush (load, userptr);
  glext_egl_load_EGL_NV_stream_metadata (load, userptr);
  glext_egl_load_EGL_NV_stream_reset (load, userptr);
  glext_egl_load_EGL_NV_stream_sync (load, userptr);
  glext_egl_load_EGL_NV_sync (load, userptr);
  glext_egl_load_EGL_NV_system_time (load, userptr);
  glext_egl_load_EGL_WL_bind_wayland_display (load, userptr);
  glext_egl_load_EGL_WL_create_wayland_buffer_from_image (load, userptr);

  glext_egl_resolve_aliases ();

  return version;
}

int
glext_LoadEGL (EGLDisplay display, GLEXTloadfunc load) {
  return glext_LoadEGLUserPtr (display, glext_egl_get_proc_from_userptr,
                               GLEXT_GNUC_EXTENSION (void*) load);
}

#ifdef GLEXT_EGL

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

struct _glext_egl_userptr {
  void* handle;
  PFNEGLGETPROCADDRESSPROC get_proc_address_ptr;
};

static GLEXTapiproc
glext_egl_get_proc (void* vuserptr, const char* name) {
  struct _glext_egl_userptr userptr = *(struct _glext_egl_userptr*)vuserptr;
  GLEXTapiproc result = NULL;

  result = glext_dlsym_handle (userptr.handle, name);
  if (result == NULL) {
    result = GLEXT_GNUC_EXTENSION (GLEXTapiproc)
               userptr.get_proc_address_ptr (name);
  }

  return result;
}

static void* _egl_handle = NULL;

static void*
glext_egl_dlopen_handle (void) {
#if GLEXT_PLATFORM_APPLE
  static const char* NAMES[] = { "libEGL.dylib" };
#elif GLEXT_PLATFORM_WIN32
  static const char* NAMES[] = { "libEGL.dll", "EGL.dll" };
#else
  static const char* NAMES[] = { "libEGL.so.1", "libEGL.so" };
#endif

  if (_egl_handle == NULL) {
    _egl_handle
      = glext_get_dlopen_handle (NAMES, sizeof (NAMES) / sizeof (NAMES[0]));
  }

  return _egl_handle;
}

static struct _glext_egl_userptr
glext_egl_build_userptr (void* handle) {
  struct _glext_egl_userptr userptr;
  userptr.handle = handle;
  userptr.get_proc_address_ptr = (PFNEGLGETPROCADDRESSPROC)glext_dlsym_handle (
    handle, "eglGetProcAddress");
  return userptr;
}

int
glext_LoaderLoadEGL (EGLDisplay display) {
  int version = 0;
  void* handle = NULL;
  int did_load = 0;
  struct _glext_egl_userptr userptr;

  did_load = _egl_handle == NULL;
  handle = glext_egl_dlopen_handle ();
  if (handle != NULL) {
    userptr = glext_egl_build_userptr (handle);

    if (userptr.get_proc_address_ptr != NULL) {
      version = glext_LoadEGLUserPtr (display, glext_egl_get_proc, &userptr);
    }

    if (!version && did_load) {
      glext_LoaderUnloadEGL ();
    }
  }

  return version;
}

void
glext_LoaderUnloadEGL (void) {
  if (_egl_handle != NULL) {
    glext_close_dlopen_handle (_egl_handle);
    _egl_handle = NULL;
  }
}

#endif /* GLEXT_EGL */

#ifdef __cplusplus
}
#endif
