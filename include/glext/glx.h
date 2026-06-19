#ifndef GLEXT_GLX_H_
#define GLEXT_GLX_H_

#if __has_include(<X11/Xlib.h>)

#ifdef GLX_H
#error GLX header already included (API: glx), remove previous include!
#endif
#define GLX_H 1

#include <X11/X.h>
#include <X11/Xlib.h>
#include <X11/Xutil.h>

#include <glext/gl.h>

#define GLEXT_GLX
#define GLEXT_OPTION_GLX_ALIAS
#define GLEXT_OPTION_GLX_LOADER

#ifdef __cplusplus
extern "C" {
#endif

#ifndef GLEXT_PLATFORM_H_
#define GLEXT_PLATFORM_H_

#ifndef GLEXT_PLATFORM_WIN32
#if defined(_WIN32) || defined(__WIN32__) || defined(WIN32)                   \
  || defined(__MINGW32__)
#define GLEXT_PLATFORM_WIN32 1
#else
#define GLEXT_PLATFORM_WIN32 0
#endif
#endif

#ifndef GLEXT_PLATFORM_APPLE
#ifdef __APPLE__
#define GLEXT_PLATFORM_APPLE 1
#else
#define GLEXT_PLATFORM_APPLE 0
#endif
#endif

#ifndef GLEXT_PLATFORM_EMSCRIPTEN
#ifdef __EMSCRIPTEN__
#define GLEXT_PLATFORM_EMSCRIPTEN 1
#else
#define GLEXT_PLATFORM_EMSCRIPTEN 0
#endif
#endif

#ifndef GLEXT_PLATFORM_UWP
#if defined(_MSC_VER) && !defined(GLEXT_INTERNAL_HAVE_WINAPIFAMILY)
#ifdef __has_include
#if __has_include(<winapifamily.h>)
#define GLEXT_INTERNAL_HAVE_WINAPIFAMILY 1
#endif
#elif _MSC_VER >= 1700 && !_USING_V110_SDK71_
#define GLEXT_INTERNAL_HAVE_WINAPIFAMILY 1
#endif
#endif

#ifdef GLEXT_INTERNAL_HAVE_WINAPIFAMILY
#include <winapifamily.h>
#if !WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)                        \
  && WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)
#define GLEXT_PLATFORM_UWP 1
#endif
#endif

#ifndef GLEXT_PLATFORM_UWP
#define GLEXT_PLATFORM_UWP 0
#endif
#endif

#ifdef __GNUC__
#define GLEXT_GNUC_EXTENSION __extension__
#else
#define GLEXT_GNUC_EXTENSION
#endif

#define GLEXT_UNUSED(x) (void)(x)

#ifndef GLEXT_API_CALL
#if defined(GLEXT_API_CALL_EXPORT)
#if GLEXT_PLATFORM_WIN32 || defined(__CYGWIN__)
#if defined(GLEXT_API_CALL_EXPORT_BUILD)
#if defined(__GNUC__)
#define GLEXT_API_CALL __attribute__ ((dllexport)) extern
#else
#define GLEXT_API_CALL __declspec (dllexport) extern
#endif
#else
#if defined(__GNUC__)
#define GLEXT_API_CALL __attribute__ ((dllimport)) extern
#else
#define GLEXT_API_CALL __declspec (dllimport) extern
#endif
#endif
#elif defined(__GNUC__) && defined(GLEXT_API_CALL_EXPORT_BUILD)
#define GLEXT_API_CALL __attribute__ ((visibility ("default"))) extern
#else
#define GLEXT_API_CALL extern
#endif
#else
#define GLEXT_API_CALL extern
#endif
#endif

#ifdef APIENTRY
#define GLEXT_API_PTR APIENTRY
#elif GLEXT_PLATFORM_WIN32
#define GLEXT_API_PTR __stdcall
#else
#define GLEXT_API_PTR
#endif

#ifndef GLAPI
#define GLAPI GLEXT_API_CALL
#endif

#ifndef GLAPIENTRY
#define GLAPIENTRY GLEXT_API_PTR
#endif

#define GLEXT_MAKE_VERSION(major, minor) (major * 10000 + minor)
#define GLEXT_VERSION_MAJOR(version) (version / 10000)
#define GLEXT_VERSION_MINOR(version) (version % 10000)

#define GLEXT_GENERATOR_VERSION "2.0.8"

typedef void (*GLEXTapiproc) (void);

typedef GLEXTapiproc (*GLEXTloadfunc) (const char* name);
typedef GLEXTapiproc (*GLEXTuserptrloadfunc) (void* userptr, const char* name);

typedef void (*GLEXTprecallback) (const char* name, GLEXTapiproc apiproc,
                                  int len_args, ...);
typedef void (*GLEXTpostcallback) (void* ret, const char* name,
                                   GLEXTapiproc apiproc, int len_args, ...);

#endif /* GLEXT_PLATFORM_H_ */

#define GLX_3DFX_FULLSCREEN_MODE_MESA 0x2
#define GLX_3DFX_WINDOW_MODE_MESA 0x1
#define GLX_ACCUM_ALPHA_SIZE 17
#define GLX_ACCUM_BLUE_SIZE 16
#define GLX_ACCUM_BUFFER_BIT 0x00000080
#define GLX_ACCUM_BUFFER_BIT_SGIX 0x00000080
#define GLX_ACCUM_GREEN_SIZE 15
#define GLX_ACCUM_RED_SIZE 14
#define GLX_ALPHA_SIZE 11
#define GLX_AUX0_EXT 0x20E2
#define GLX_AUX1_EXT 0x20E3
#define GLX_AUX2_EXT 0x20E4
#define GLX_AUX3_EXT 0x20E5
#define GLX_AUX4_EXT 0x20E6
#define GLX_AUX5_EXT 0x20E7
#define GLX_AUX6_EXT 0x20E8
#define GLX_AUX7_EXT 0x20E9
#define GLX_AUX8_EXT 0x20EA
#define GLX_AUX9_EXT 0x20EB
#define GLX_AUX_BUFFERS 7
#define GLX_AUX_BUFFERS_BIT 0x00000010
#define GLX_AUX_BUFFERS_BIT_SGIX 0x00000010
#define GLX_BACK_BUFFER_AGE_EXT 0x20F4
#define GLX_BACK_EXT 0x20E0
#define GLX_BACK_LEFT_BUFFER_BIT 0x00000004
#define GLX_BACK_LEFT_BUFFER_BIT_SGIX 0x00000004
#define GLX_BACK_LEFT_EXT 0x20E0
#define GLX_BACK_RIGHT_BUFFER_BIT 0x00000008
#define GLX_BACK_RIGHT_BUFFER_BIT_SGIX 0x00000008
#define GLX_BACK_RIGHT_EXT 0x20E1
#define GLX_BAD_ATTRIBUTE 2
#define GLX_BAD_CONTEXT 5
#define GLX_BAD_ENUM 7
#define GLX_BAD_HYPERPIPE_CONFIG_SGIX 91
#define GLX_BAD_HYPERPIPE_SGIX 92
#define GLX_BAD_SCREEN 1
#define GLX_BAD_VALUE 6
#define GLX_BAD_VISUAL 4
#define GLX_BIND_TO_MIPMAP_TEXTURE_EXT 0x20D2
#define GLX_BIND_TO_TEXTURE_RGBA_EXT 0x20D1
#define GLX_BIND_TO_TEXTURE_RGB_EXT 0x20D0
#define GLX_BIND_TO_TEXTURE_TARGETS_EXT 0x20D3
#define GLX_BLENDED_RGBA_SGIS 0x8025
#define GLX_BLUE_SIZE 10
#define GLX_BUFFER_CLOBBER_MASK_SGIX 0x08000000
#define GLX_BUFFER_SIZE 2
#define GLX_BUFFER_SWAP_COMPLETE_INTEL_MASK 0x04000000
#define GLX_BufferSwapComplete 1
#define GLX_COLOR_INDEX_BIT 0x00000002
#define GLX_COLOR_INDEX_BIT_SGIX 0x00000002
#define GLX_COLOR_INDEX_TYPE 0x8015
#define GLX_COLOR_INDEX_TYPE_SGIX 0x8015
#define GLX_COLOR_SAMPLES_NV 0x20B3
#define GLX_CONFIG_CAVEAT 0x20
#define GLX_CONTEXT_ALLOW_BUFFER_BYTE_ORDER_MISMATCH_ARB 0x2095
#define GLX_CONTEXT_COMPATIBILITY_PROFILE_BIT_ARB 0x00000002
#define GLX_CONTEXT_CORE_PROFILE_BIT_ARB 0x00000001
#define GLX_CONTEXT_DEBUG_BIT_ARB 0x00000001
#define GLX_CONTEXT_ES2_PROFILE_BIT_EXT 0x00000004
#define GLX_CONTEXT_ES_PROFILE_BIT_EXT 0x00000004
#define GLX_CONTEXT_FLAGS_ARB 0x2094
#define GLX_CONTEXT_FORWARD_COMPATIBLE_BIT_ARB 0x00000002
#define GLX_CONTEXT_MAJOR_VERSION_ARB 0x2091
#define GLX_CONTEXT_MINOR_VERSION_ARB 0x2092
#define GLX_CONTEXT_MULTIGPU_ATTRIB_AFR_NV 0x20AC
#define GLX_CONTEXT_MULTIGPU_ATTRIB_MULTICAST_NV 0x20AD
#define GLX_CONTEXT_MULTIGPU_ATTRIB_MULTI_DISPLAY_MULTICAST_NV 0x20AE
#define GLX_CONTEXT_MULTIGPU_ATTRIB_NV 0x20AA
#define GLX_CONTEXT_MULTIGPU_ATTRIB_SINGLE_NV 0x20AB
#define GLX_CONTEXT_OPENGL_NO_ERROR_ARB 0x31B3
#define GLX_CONTEXT_PRIORITY_HIGH_EXT 0x3101
#define GLX_CONTEXT_PRIORITY_LEVEL_EXT 0x3100
#define GLX_CONTEXT_PRIORITY_LOW_EXT 0x3103
#define GLX_CONTEXT_PRIORITY_MEDIUM_EXT 0x3102
#define GLX_CONTEXT_PROFILE_MASK_ARB 0x9126
#define GLX_CONTEXT_RELEASE_BEHAVIOR_ARB 0x2097
#define GLX_CONTEXT_RELEASE_BEHAVIOR_FLUSH_ARB 0x2098
#define GLX_CONTEXT_RELEASE_BEHAVIOR_NONE_ARB 0
#define GLX_CONTEXT_RESET_ISOLATION_BIT_ARB 0x00000008
#define GLX_CONTEXT_RESET_NOTIFICATION_STRATEGY_ARB 0x8256
#define GLX_CONTEXT_ROBUST_ACCESS_BIT_ARB 0x00000004
#define GLX_COPY_COMPLETE_INTEL 0x8181
#define GLX_COVERAGE_SAMPLES_NV 100001
#define GLX_DAMAGED 0x8020
#define GLX_DAMAGED_SGIX 0x8020
#define GLX_DEPTH_BUFFER_BIT 0x00000020
#define GLX_DEPTH_BUFFER_BIT_SGIX 0x00000020
#define GLX_DEPTH_SIZE 12
#define GLX_DEVICE_ID_NV 0x20CD
#define GLX_DIRECT_COLOR 0x8003
#define GLX_DIRECT_COLOR_EXT 0x8003
#define GLX_DONT_CARE 0xFFFFFFFF
#define GLX_DOUBLEBUFFER 5
#define GLX_DRAWABLE_TYPE 0x8010
#define GLX_DRAWABLE_TYPE_SGIX 0x8010
#define GLX_EVENT_MASK 0x801F
#define GLX_EVENT_MASK_SGIX 0x801F
#define GLX_EXCHANGE_COMPLETE_INTEL 0x8180
#define GLX_EXTENSIONS 0x3
#define GLX_EXTENSION_NAME "GLX"
#define GLX_FBCONFIG_ID 0x8013
#define GLX_FBCONFIG_ID_SGIX 0x8013
#define GLX_FLIP_COMPLETE_INTEL 0x8182
#define GLX_FLOAT_COMPONENTS_NV 0x20B0
#define GLX_FRAMEBUFFER_SRGB_CAPABLE_ARB 0x20B2
#define GLX_FRAMEBUFFER_SRGB_CAPABLE_EXT 0x20B2
#define GLX_FRONT_EXT 0x20DE
#define GLX_FRONT_LEFT_BUFFER_BIT 0x00000001
#define GLX_FRONT_LEFT_BUFFER_BIT_SGIX 0x00000001
#define GLX_FRONT_LEFT_EXT 0x20DE
#define GLX_FRONT_RIGHT_BUFFER_BIT 0x00000002
#define GLX_FRONT_RIGHT_BUFFER_BIT_SGIX 0x00000002
#define GLX_FRONT_RIGHT_EXT 0x20DF
#define GLX_GENERATE_RESET_ON_VIDEO_MEMORY_PURGE_NV 0x20F7
#define GLX_GPU_CLOCK_AMD 0x21A4
#define GLX_GPU_FASTEST_TARGET_GPUS_AMD 0x21A2
#define GLX_GPU_NUM_PIPES_AMD 0x21A5
#define GLX_GPU_NUM_RB_AMD 0x21A7
#define GLX_GPU_NUM_SIMD_AMD 0x21A6
#define GLX_GPU_NUM_SPI_AMD 0x21A8
#define GLX_GPU_OPENGL_VERSION_STRING_AMD 0x1F02
#define GLX_GPU_RAM_AMD 0x21A3
#define GLX_GPU_RENDERER_STRING_AMD 0x1F01
#define GLX_GPU_VENDOR_AMD 0x1F00
#define GLX_GRAY_SCALE 0x8006
#define GLX_GRAY_SCALE_EXT 0x8006
#define GLX_GREEN_SIZE 9
#define GLX_HEIGHT 0x801E
#define GLX_HEIGHT_SGIX 0x801E
#define GLX_HYPERPIPE_DISPLAY_PIPE_SGIX 0x00000001
#define GLX_HYPERPIPE_ID_SGIX 0x8030
#define GLX_HYPERPIPE_PIPE_NAME_LENGTH_SGIX 80
#define GLX_HYPERPIPE_PIXEL_AVERAGE_SGIX 0x00000004
#define GLX_HYPERPIPE_RENDER_PIPE_SGIX 0x00000002
#define GLX_HYPERPIPE_STEREO_SGIX 0x00000003
#define GLX_LARGEST_PBUFFER 0x801C
#define GLX_LARGEST_PBUFFER_SGIX 0x801C
#define GLX_LATE_SWAPS_TEAR_EXT 0x20F3
#define GLX_LEVEL 3
#define GLX_LOSE_CONTEXT_ON_RESET_ARB 0x8252
#define GLX_MAX_PBUFFER_HEIGHT 0x8017
#define GLX_MAX_PBUFFER_HEIGHT_SGIX 0x8017
#define GLX_MAX_PBUFFER_PIXELS 0x8018
#define GLX_MAX_PBUFFER_PIXELS_SGIX 0x8018
#define GLX_MAX_PBUFFER_WIDTH 0x8016
#define GLX_MAX_PBUFFER_WIDTH_SGIX 0x8016
#define GLX_MAX_SWAP_INTERVAL_EXT 0x20F2
#define GLX_MIPMAP_TEXTURE_EXT 0x20D7
#define GLX_MULTISAMPLE_SUB_RECT_HEIGHT_SGIS 0x8027
#define GLX_MULTISAMPLE_SUB_RECT_WIDTH_SGIS 0x8026
#define GLX_NONE 0x8000
#define GLX_NONE_EXT 0x8000
#define GLX_NON_CONFORMANT_CONFIG 0x800D
#define GLX_NON_CONFORMANT_VISUAL_EXT 0x800D
#define GLX_NO_EXTENSION 3
#define GLX_NO_RESET_NOTIFICATION_ARB 0x8261
#define GLX_NUM_VIDEO_CAPTURE_SLOTS_NV 0x20CF
#define GLX_NUM_VIDEO_SLOTS_NV 0x20F0
#define GLX_OPTIMAL_PBUFFER_HEIGHT_SGIX 0x801A
#define GLX_OPTIMAL_PBUFFER_WIDTH_SGIX 0x8019
#define GLX_PBUFFER 0x8023
#define GLX_PBUFFER_BIT 0x00000004
#define GLX_PBUFFER_BIT_SGIX 0x00000004
#define GLX_PBUFFER_CLOBBER_MASK 0x08000000
#define GLX_PBUFFER_HEIGHT 0x8040
#define GLX_PBUFFER_SGIX 0x8023
#define GLX_PBUFFER_WIDTH 0x8041
#define GLX_PIPE_RECT_LIMITS_SGIX 0x00000002
#define GLX_PIPE_RECT_SGIX 0x00000001
#define GLX_PIXMAP_BIT 0x00000002
#define GLX_PIXMAP_BIT_SGIX 0x00000002
#define GLX_PRESERVED_CONTENTS 0x801B
#define GLX_PRESERVED_CONTENTS_SGIX 0x801B
#define GLX_PSEUDO_COLOR 0x8004
#define GLX_PSEUDO_COLOR_EXT 0x8004
#define GLX_PbufferClobber 0
#define GLX_RED_SIZE 8
#define GLX_RENDERER_ACCELERATED_MESA 0x8186
#define GLX_RENDERER_DEVICE_ID_MESA 0x8184
#define GLX_RENDERER_OPENGL_COMPATIBILITY_PROFILE_VERSION_MESA 0x818B
#define GLX_RENDERER_OPENGL_CORE_PROFILE_VERSION_MESA 0x818A
#define GLX_RENDERER_OPENGL_ES2_PROFILE_VERSION_MESA 0x818D
#define GLX_RENDERER_OPENGL_ES_PROFILE_VERSION_MESA 0x818C
#define GLX_RENDERER_PREFERRED_PROFILE_MESA 0x8189
#define GLX_RENDERER_UNIFIED_MEMORY_ARCHITECTURE_MESA 0x8188
#define GLX_RENDERER_VENDOR_ID_MESA 0x8183
#define GLX_RENDERER_VERSION_MESA 0x8185
#define GLX_RENDERER_VIDEO_MEMORY_MESA 0x8187
#define GLX_RENDER_TYPE 0x8011
#define GLX_RENDER_TYPE_SGIX 0x8011
#define GLX_RGBA 4
#define GLX_RGBA_BIT 0x00000001
#define GLX_RGBA_BIT_SGIX 0x00000001
#define GLX_RGBA_FLOAT_BIT_ARB 0x00000004
#define GLX_RGBA_FLOAT_TYPE_ARB 0x20B9
#define GLX_RGBA_TYPE 0x8014
#define GLX_RGBA_TYPE_SGIX 0x8014
#define GLX_RGBA_UNSIGNED_FLOAT_BIT_EXT 0x00000008
#define GLX_RGBA_UNSIGNED_FLOAT_TYPE_EXT 0x20B1
#define GLX_SAMPLES 100001
#define GLX_SAMPLES_3DFX 0x8051
#define GLX_SAMPLES_ARB 100001
#define GLX_SAMPLES_SGIS 100001
#define GLX_SAMPLE_BUFFERS 100000
#define GLX_SAMPLE_BUFFERS_3DFX 0x8050
#define GLX_SAMPLE_BUFFERS_ARB 100000
#define GLX_SAMPLE_BUFFERS_BIT_SGIX 0x00000100
#define GLX_SAMPLE_BUFFERS_SGIS 100000
#define GLX_SAVED 0x8021
#define GLX_SAVED_SGIX 0x8021
#define GLX_SCREEN 0x800C
#define GLX_SCREEN_EXT 0x800C
#define GLX_SHARE_CONTEXT_EXT 0x800A
#define GLX_SLOW_CONFIG 0x8001
#define GLX_SLOW_VISUAL_EXT 0x8001
#define GLX_STATIC_COLOR 0x8005
#define GLX_STATIC_COLOR_EXT 0x8005
#define GLX_STATIC_GRAY 0x8007
#define GLX_STATIC_GRAY_EXT 0x8007
#define GLX_STENCIL_BUFFER_BIT 0x00000040
#define GLX_STENCIL_BUFFER_BIT_SGIX 0x00000040
#define GLX_STENCIL_SIZE 13
#define GLX_STEREO 6
#define GLX_STEREO_NOTIFY_EXT 0x00000000
#define GLX_STEREO_NOTIFY_MASK_EXT 0x00000001
#define GLX_STEREO_TREE_EXT 0x20F5
#define GLX_SWAP_COPY_OML 0x8062
#define GLX_SWAP_EXCHANGE_OML 0x8061
#define GLX_SWAP_INTERVAL_EXT 0x20F1
#define GLX_SWAP_METHOD_OML 0x8060
#define GLX_SWAP_UNDEFINED_OML 0x8063
#define GLX_SYNC_FRAME_SGIX 0x00000000
#define GLX_SYNC_SWAP_SGIX 0x00000001
#define GLX_TEXTURE_1D_BIT_EXT 0x00000001
#define GLX_TEXTURE_1D_EXT 0x20DB
#define GLX_TEXTURE_2D_BIT_EXT 0x00000002
#define GLX_TEXTURE_2D_EXT 0x20DC
#define GLX_TEXTURE_FORMAT_EXT 0x20D5
#define GLX_TEXTURE_FORMAT_NONE_EXT 0x20D8
#define GLX_TEXTURE_FORMAT_RGBA_EXT 0x20DA
#define GLX_TEXTURE_FORMAT_RGB_EXT 0x20D9
#define GLX_TEXTURE_RECTANGLE_BIT_EXT 0x00000004
#define GLX_TEXTURE_RECTANGLE_EXT 0x20DD
#define GLX_TEXTURE_TARGET_EXT 0x20D6
#define GLX_TRANSPARENT_ALPHA_VALUE 0x28
#define GLX_TRANSPARENT_ALPHA_VALUE_EXT 0x28
#define GLX_TRANSPARENT_BLUE_VALUE 0x27
#define GLX_TRANSPARENT_BLUE_VALUE_EXT 0x27
#define GLX_TRANSPARENT_GREEN_VALUE 0x26
#define GLX_TRANSPARENT_GREEN_VALUE_EXT 0x26
#define GLX_TRANSPARENT_INDEX 0x8009
#define GLX_TRANSPARENT_INDEX_EXT 0x8009
#define GLX_TRANSPARENT_INDEX_VALUE 0x24
#define GLX_TRANSPARENT_INDEX_VALUE_EXT 0x24
#define GLX_TRANSPARENT_RED_VALUE 0x25
#define GLX_TRANSPARENT_RED_VALUE_EXT 0x25
#define GLX_TRANSPARENT_RGB 0x8008
#define GLX_TRANSPARENT_RGB_EXT 0x8008
#define GLX_TRANSPARENT_TYPE 0x23
#define GLX_TRANSPARENT_TYPE_EXT 0x23
#define GLX_TRUE_COLOR 0x8002
#define GLX_TRUE_COLOR_EXT 0x8002
#define GLX_UNIQUE_ID_NV 0x20CE
#define GLX_USE_GL 1
#define GLX_VENDOR 0x1
#define GLX_VENDOR_NAMES_EXT 0x20F6
#define GLX_VERSION 0x2
#define GLX_VIDEO_OUT_ALPHA_NV 0x20C4
#define GLX_VIDEO_OUT_COLOR_AND_ALPHA_NV 0x20C6
#define GLX_VIDEO_OUT_COLOR_AND_DEPTH_NV 0x20C7
#define GLX_VIDEO_OUT_COLOR_NV 0x20C3
#define GLX_VIDEO_OUT_DEPTH_NV 0x20C5
#define GLX_VIDEO_OUT_FIELD_1_NV 0x20C9
#define GLX_VIDEO_OUT_FIELD_2_NV 0x20CA
#define GLX_VIDEO_OUT_FRAME_NV 0x20C8
#define GLX_VIDEO_OUT_STACKED_FIELDS_1_2_NV 0x20CB
#define GLX_VIDEO_OUT_STACKED_FIELDS_2_1_NV 0x20CC
#define GLX_VISUAL_CAVEAT_EXT 0x20
#define GLX_VISUAL_ID 0x800B
#define GLX_VISUAL_ID_EXT 0x800B
#define GLX_VISUAL_SELECT_GROUP_SGIX 0x8028
#define GLX_WIDTH 0x801D
#define GLX_WIDTH_SGIX 0x801D
#define GLX_WINDOW 0x8022
#define GLX_WINDOW_BIT 0x00000001
#define GLX_WINDOW_BIT_SGIX 0x00000001
#define GLX_WINDOW_SGIX 0x8022
#define GLX_X_RENDERABLE 0x8012
#define GLX_X_RENDERABLE_SGIX 0x8012
#define GLX_X_VISUAL_TYPE 0x22
#define GLX_X_VISUAL_TYPE_EXT 0x22
#define GLX_Y_INVERTED_EXT 0x20D4
#define __GLX_NUMBER_EVENTS 17

#ifndef GLEXT_64_TYPES_DEFINED
/* This code block is duplicated in glext.h, so must be protected */
#define GLEXT_64_TYPES_DEFINED
/* Define int32_t, int64_t, and uint64_t types for UST/MSC */
/* (as used in the GLX_OML_sync_control extension). */
#if defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L
#include <inttypes.h>
#elif defined(__sun__) || defined(__digital__)
#include <inttypes.h>
#if defined(__STDC__)
#if defined(__arch64__) || defined(_LP64)
typedef long int int64_t;
typedef unsigned long int uint64_t;
#else
typedef long long int int64_t;
typedef unsigned long long int uint64_t;
#endif /* __arch64__ */
#endif /* __STDC__ */
#elif defined(__VMS) || defined(__sgi)
#include <inttypes.h>
#elif defined(__SCO__) || defined(__USLC__)
#include <stdint.h>
#elif defined(__UNIXOS2__) || defined(__SOL64__)
typedef long int int32_t;
typedef long long int int64_t;
typedef unsigned long long int uint64_t;
#elif defined(_WIN32) && defined(__GNUC__)
#include <stdint.h>
#elif defined(_WIN32)
typedef __int32 int32_t;
typedef __int64 int64_t;
typedef unsigned __int64 uint64_t;
#else
/* Fallback if nothing above works */
#include <inttypes.h>
#endif
#endif

#if defined(__ENVIRONMENT_MAC_OS_X_VERSION_MIN_REQUIRED__)                    \
  && (__ENVIRONMENT_MAC_OS_X_VERSION_MIN_REQUIRED__ > 1060)

#else

#endif

#if defined(__ENVIRONMENT_MAC_OS_X_VERSION_MIN_REQUIRED__)                    \
  && (__ENVIRONMENT_MAC_OS_X_VERSION_MIN_REQUIRED__ > 1060)

#else

#endif

typedef XID GLXFBConfigID;
typedef struct __GLXFBConfigRec* GLXFBConfig;
typedef XID GLXContextID;
typedef struct __GLXcontextRec* GLXContext;
typedef XID GLXPixmap;
typedef XID GLXDrawable;
typedef XID GLXWindow;
typedef XID GLXPbuffer;
typedef void (GLEXT_API_PTR* __GLXextFuncPtr) (void);
typedef XID GLXVideoCaptureDeviceNV;
typedef unsigned int GLXVideoDeviceNV;
typedef XID GLXVideoSourceSGIX;
typedef XID GLXFBConfigIDSGIX;
typedef struct __GLXFBConfigRec* GLXFBConfigSGIX;
typedef XID GLXPbufferSGIX;
typedef struct {
  int event_type;           /* GLX_DAMAGED or GLX_SAVED */
  int draw_type;            /* GLX_WINDOW or GLX_PBUFFER */
  unsigned long serial;     /* # of last request processed by server */
  Bool send_event;          /* true if this came for SendEvent request */
  Display* display;         /* display the event was read from */
  GLXDrawable drawable;     /* XID of Drawable */
  unsigned int buffer_mask; /* mask indicating which buffers are affected */
  unsigned int aux_buffer;  /* which aux buffer was affected */
  int x, y;
  int width, height;
  int count; /* if nonzero, at least this many more */
} GLXPbufferClobberEvent;
typedef struct {
  int type;
  unsigned long serial; /* # of last request processed by server */
  Bool send_event;      /* true if this came from a SendEvent request */
  Display* display;     /* Display the event was read from */
  GLXDrawable
    drawable; /* drawable on which event was requested in event mask */
  int event_type;
  int64_t ust;
  int64_t msc;
  int64_t sbc;
} GLXBufferSwapComplete;
typedef union __GLXEvent {
  GLXPbufferClobberEvent glxpbufferclobber;
  GLXBufferSwapComplete glxbufferswapcomplete;
  long pad[24];
} GLXEvent;
typedef struct {
  int type;
  unsigned long serial;
  Bool send_event;
  Display* display;
  int extension;
  int evtype;
  GLXDrawable window;
  Bool stereo_tree;
} GLXStereoNotifyEventEXT;
typedef struct {
  int type;
  unsigned long serial; /* # of last request processed by server */
  Bool send_event;      /* true if this came for SendEvent request */
  Display* display;     /* display the event was read from */
  GLXDrawable drawable; /* i.d. of Drawable */
  int event_type;       /* GLX_DAMAGED_SGIX or GLX_SAVED_SGIX */
  int draw_type;        /* GLX_WINDOW_SGIX or GLX_PBUFFER_SGIX */
  unsigned int mask;    /* mask indicating which buffers are affected*/
  int x, y;
  int width, height;
  int count; /* if nonzero, at least this many more */
} GLXBufferClobberEventSGIX;
typedef struct {
  char pipeName[80]; /* Should be [GLX_HYPERPIPE_PIPE_NAME_LENGTH_SGIX] */
  int networkId;
} GLXHyperpipeNetworkSGIX;
typedef struct {
  char pipeName[80]; /* Should be [GLX_HYPERPIPE_PIPE_NAME_LENGTH_SGIX] */
  int channel;
  unsigned int participationType;
  int timeSlice;
} GLXHyperpipeConfigSGIX;
typedef struct {
  char pipeName[80]; /* Should be [GLX_HYPERPIPE_PIPE_NAME_LENGTH_SGIX] */
  int srcXOrigin, srcYOrigin, srcWidth, srcHeight;
  int destXOrigin, destYOrigin, destWidth, destHeight;
} GLXPipeRect;
typedef struct {
  char pipeName[80]; /* Should be [GLX_HYPERPIPE_PIPE_NAME_LENGTH_SGIX] */
  int XOrigin, YOrigin, maxHeight, maxWidth;
} GLXPipeRectLimits;

#define GLX_VERSION_1_0 1
GLEXT_API_CALL int GLEXT_GLX_VERSION_1_0;
#define GLX_VERSION_1_1 1
GLEXT_API_CALL int GLEXT_GLX_VERSION_1_1;
#define GLX_VERSION_1_2 1
GLEXT_API_CALL int GLEXT_GLX_VERSION_1_2;
#define GLX_VERSION_1_3 1
GLEXT_API_CALL int GLEXT_GLX_VERSION_1_3;
#define GLX_VERSION_1_4 1
GLEXT_API_CALL int GLEXT_GLX_VERSION_1_4;
#define GLX_3DFX_multisample 1
GLEXT_API_CALL int GLEXT_GLX_3DFX_multisample;
#define GLX_AMD_gpu_association 1
GLEXT_API_CALL int GLEXT_GLX_AMD_gpu_association;
#define GLX_ARB_context_flush_control 1
GLEXT_API_CALL int GLEXT_GLX_ARB_context_flush_control;
#define GLX_ARB_create_context 1
GLEXT_API_CALL int GLEXT_GLX_ARB_create_context;
#define GLX_ARB_create_context_no_error 1
GLEXT_API_CALL int GLEXT_GLX_ARB_create_context_no_error;
#define GLX_ARB_create_context_profile 1
GLEXT_API_CALL int GLEXT_GLX_ARB_create_context_profile;
#define GLX_ARB_create_context_robustness 1
GLEXT_API_CALL int GLEXT_GLX_ARB_create_context_robustness;
#define GLX_ARB_fbconfig_float 1
GLEXT_API_CALL int GLEXT_GLX_ARB_fbconfig_float;
#define GLX_ARB_framebuffer_sRGB 1
GLEXT_API_CALL int GLEXT_GLX_ARB_framebuffer_sRGB;
#define GLX_ARB_get_proc_address 1
GLEXT_API_CALL int GLEXT_GLX_ARB_get_proc_address;
#define GLX_ARB_multisample 1
GLEXT_API_CALL int GLEXT_GLX_ARB_multisample;
#define GLX_ARB_robustness_application_isolation 1
GLEXT_API_CALL int GLEXT_GLX_ARB_robustness_application_isolation;
#define GLX_ARB_robustness_share_group_isolation 1
GLEXT_API_CALL int GLEXT_GLX_ARB_robustness_share_group_isolation;
#define GLX_ARB_vertex_buffer_object 1
GLEXT_API_CALL int GLEXT_GLX_ARB_vertex_buffer_object;
#define GLX_EXT_buffer_age 1
GLEXT_API_CALL int GLEXT_GLX_EXT_buffer_age;
#define GLX_EXT_context_priority 1
GLEXT_API_CALL int GLEXT_GLX_EXT_context_priority;
#define GLX_EXT_create_context_es2_profile 1
GLEXT_API_CALL int GLEXT_GLX_EXT_create_context_es2_profile;
#define GLX_EXT_create_context_es_profile 1
GLEXT_API_CALL int GLEXT_GLX_EXT_create_context_es_profile;
#define GLX_EXT_fbconfig_packed_float 1
GLEXT_API_CALL int GLEXT_GLX_EXT_fbconfig_packed_float;
#define GLX_EXT_framebuffer_sRGB 1
GLEXT_API_CALL int GLEXT_GLX_EXT_framebuffer_sRGB;
#define GLX_EXT_get_drawable_type 1
GLEXT_API_CALL int GLEXT_GLX_EXT_get_drawable_type;
#define GLX_EXT_import_context 1
GLEXT_API_CALL int GLEXT_GLX_EXT_import_context;
#define GLX_EXT_libglvnd 1
GLEXT_API_CALL int GLEXT_GLX_EXT_libglvnd;
#define GLX_EXT_no_config_context 1
GLEXT_API_CALL int GLEXT_GLX_EXT_no_config_context;
#define GLX_EXT_stereo_tree 1
GLEXT_API_CALL int GLEXT_GLX_EXT_stereo_tree;
#define GLX_EXT_swap_control 1
GLEXT_API_CALL int GLEXT_GLX_EXT_swap_control;
#define GLX_EXT_swap_control_tear 1
GLEXT_API_CALL int GLEXT_GLX_EXT_swap_control_tear;
#define GLX_EXT_texture_from_pixmap 1
GLEXT_API_CALL int GLEXT_GLX_EXT_texture_from_pixmap;
#define GLX_EXT_visual_info 1
GLEXT_API_CALL int GLEXT_GLX_EXT_visual_info;
#define GLX_EXT_visual_rating 1
GLEXT_API_CALL int GLEXT_GLX_EXT_visual_rating;
#define GLX_INTEL_swap_event 1
GLEXT_API_CALL int GLEXT_GLX_INTEL_swap_event;
#define GLX_MESA_agp_offset 1
GLEXT_API_CALL int GLEXT_GLX_MESA_agp_offset;
#define GLX_MESA_copy_sub_buffer 1
GLEXT_API_CALL int GLEXT_GLX_MESA_copy_sub_buffer;
#define GLX_MESA_pixmap_colormap 1
GLEXT_API_CALL int GLEXT_GLX_MESA_pixmap_colormap;
#define GLX_MESA_query_renderer 1
GLEXT_API_CALL int GLEXT_GLX_MESA_query_renderer;
#define GLX_MESA_release_buffers 1
GLEXT_API_CALL int GLEXT_GLX_MESA_release_buffers;
#define GLX_MESA_set_3dfx_mode 1
GLEXT_API_CALL int GLEXT_GLX_MESA_set_3dfx_mode;
#define GLX_MESA_swap_control 1
GLEXT_API_CALL int GLEXT_GLX_MESA_swap_control;
#define GLX_NV_copy_buffer 1
GLEXT_API_CALL int GLEXT_GLX_NV_copy_buffer;
#define GLX_NV_copy_image 1
GLEXT_API_CALL int GLEXT_GLX_NV_copy_image;
#define GLX_NV_delay_before_swap 1
GLEXT_API_CALL int GLEXT_GLX_NV_delay_before_swap;
#define GLX_NV_float_buffer 1
GLEXT_API_CALL int GLEXT_GLX_NV_float_buffer;
#define GLX_NV_multigpu_context 1
GLEXT_API_CALL int GLEXT_GLX_NV_multigpu_context;
#define GLX_NV_multisample_coverage 1
GLEXT_API_CALL int GLEXT_GLX_NV_multisample_coverage;
#define GLX_NV_present_video 1
GLEXT_API_CALL int GLEXT_GLX_NV_present_video;
#define GLX_NV_robustness_video_memory_purge 1
GLEXT_API_CALL int GLEXT_GLX_NV_robustness_video_memory_purge;
#define GLX_NV_swap_group 1
GLEXT_API_CALL int GLEXT_GLX_NV_swap_group;
#define GLX_NV_video_capture 1
GLEXT_API_CALL int GLEXT_GLX_NV_video_capture;
#define GLX_NV_video_out 1
GLEXT_API_CALL int GLEXT_GLX_NV_video_out;
#define GLX_OML_swap_method 1
GLEXT_API_CALL int GLEXT_GLX_OML_swap_method;
#define GLX_OML_sync_control 1
GLEXT_API_CALL int GLEXT_GLX_OML_sync_control;
#define GLX_SGIS_blended_overlay 1
GLEXT_API_CALL int GLEXT_GLX_SGIS_blended_overlay;
#define GLX_SGIS_multisample 1
GLEXT_API_CALL int GLEXT_GLX_SGIS_multisample;
#define GLX_SGIS_shared_multisample 1
GLEXT_API_CALL int GLEXT_GLX_SGIS_shared_multisample;
#define GLX_SGIX_fbconfig 1
GLEXT_API_CALL int GLEXT_GLX_SGIX_fbconfig;
#define GLX_SGIX_hyperpipe 1
GLEXT_API_CALL int GLEXT_GLX_SGIX_hyperpipe;
#define GLX_SGIX_pbuffer 1
GLEXT_API_CALL int GLEXT_GLX_SGIX_pbuffer;
#define GLX_SGIX_swap_barrier 1
GLEXT_API_CALL int GLEXT_GLX_SGIX_swap_barrier;
#define GLX_SGIX_swap_group 1
GLEXT_API_CALL int GLEXT_GLX_SGIX_swap_group;
#define GLX_SGIX_video_resize 1
GLEXT_API_CALL int GLEXT_GLX_SGIX_video_resize;
#define GLX_SGIX_visual_select_group 1
GLEXT_API_CALL int GLEXT_GLX_SGIX_visual_select_group;
#define GLX_SGI_cushion 1
GLEXT_API_CALL int GLEXT_GLX_SGI_cushion;
#define GLX_SGI_make_current_read 1
GLEXT_API_CALL int GLEXT_GLX_SGI_make_current_read;
#define GLX_SGI_swap_control 1
GLEXT_API_CALL int GLEXT_GLX_SGI_swap_control;
#define GLX_SGI_video_sync 1
GLEXT_API_CALL int GLEXT_GLX_SGI_video_sync;
#define GLX_SUN_get_transparent_index 1
GLEXT_API_CALL int GLEXT_GLX_SUN_get_transparent_index;

typedef int (GLEXT_API_PTR* PFNGLXBINDCHANNELTOWINDOWSGIXPROC) (
  Display* display, int screen, int channel, Window window);
typedef int (GLEXT_API_PTR* PFNGLXBINDHYPERPIPESGIXPROC) (Display* dpy,
                                                          int hpId);
typedef Bool (GLEXT_API_PTR* PFNGLXBINDSWAPBARRIERNVPROC) (Display* dpy,
                                                           GLuint group,
                                                           GLuint barrier);
typedef void (GLEXT_API_PTR* PFNGLXBINDSWAPBARRIERSGIXPROC) (
  Display* dpy, GLXDrawable drawable, int barrier);
typedef void (GLEXT_API_PTR* PFNGLXBINDTEXIMAGEEXTPROC) (
  Display* dpy, GLXDrawable drawable, int buffer, const int* attrib_list);
typedef int (GLEXT_API_PTR* PFNGLXBINDVIDEOCAPTUREDEVICENVPROC) (
  Display* dpy, unsigned int video_capture_slot,
  GLXVideoCaptureDeviceNV device);
typedef int (GLEXT_API_PTR* PFNGLXBINDVIDEODEVICENVPROC) (
  Display* dpy, unsigned int video_slot, unsigned int video_device,
  const int* attrib_list);
typedef int (GLEXT_API_PTR* PFNGLXBINDVIDEOIMAGENVPROC) (
  Display* dpy, GLXVideoDeviceNV VideoDevice, GLXPbuffer pbuf,
  int iVideoBuffer);
typedef void (GLEXT_API_PTR* PFNGLXBLITCONTEXTFRAMEBUFFERAMDPROC) (
  GLXContext dstCtx, GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1,
  GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask,
  GLenum filter);
typedef int (GLEXT_API_PTR* PFNGLXCHANNELRECTSGIXPROC) (Display* display,
                                                        int screen,
                                                        int channel, int x,
                                                        int y, int w, int h);
typedef int (GLEXT_API_PTR* PFNGLXCHANNELRECTSYNCSGIXPROC) (Display* display,
                                                            int screen,
                                                            int channel,
                                                            GLenum synctype);
typedef GLXFBConfig*(GLEXT_API_PTR* PFNGLXCHOOSEFBCONFIGPROC) (
  Display* dpy, int screen, const int* attrib_list, int* nelements);
typedef GLXFBConfigSGIX*(GLEXT_API_PTR* PFNGLXCHOOSEFBCONFIGSGIXPROC) (
  Display* dpy, int screen, int* attrib_list, int* nelements);
typedef XVisualInfo*(GLEXT_API_PTR* PFNGLXCHOOSEVISUALPROC) (Display* dpy,
                                                             int screen,
                                                             int* attribList);
typedef void (GLEXT_API_PTR* PFNGLXCOPYBUFFERSUBDATANVPROC) (
  Display* dpy, GLXContext readCtx, GLXContext writeCtx, GLenum readTarget,
  GLenum writeTarget, GLintptr readOffset, GLintptr writeOffset,
  GLsizeiptr size);
typedef void (GLEXT_API_PTR* PFNGLXCOPYCONTEXTPROC) (Display* dpy,
                                                     GLXContext src,
                                                     GLXContext dst,
                                                     unsigned long mask);
typedef void (GLEXT_API_PTR* PFNGLXCOPYIMAGESUBDATANVPROC) (
  Display* dpy, GLXContext srcCtx, GLuint srcName, GLenum srcTarget,
  GLint srcLevel, GLint srcX, GLint srcY, GLint srcZ, GLXContext dstCtx,
  GLuint dstName, GLenum dstTarget, GLint dstLevel, GLint dstX, GLint dstY,
  GLint dstZ, GLsizei width, GLsizei height, GLsizei depth);
typedef void (GLEXT_API_PTR* PFNGLXCOPYSUBBUFFERMESAPROC) (
  Display* dpy, GLXDrawable drawable, int x, int y, int width, int height);
typedef GLXContext (GLEXT_API_PTR* PFNGLXCREATEASSOCIATEDCONTEXTAMDPROC) (
  unsigned int id, GLXContext share_list);
typedef GLXContext (
  GLEXT_API_PTR* PFNGLXCREATEASSOCIATEDCONTEXTATTRIBSAMDPROC) (
  unsigned int id, GLXContext share_context, const int* attribList);
typedef GLXContext (GLEXT_API_PTR* PFNGLXCREATECONTEXTPROC) (
  Display* dpy, XVisualInfo* vis, GLXContext shareList, Bool direct);
typedef GLXContext (GLEXT_API_PTR* PFNGLXCREATECONTEXTATTRIBSARBPROC) (
  Display* dpy, GLXFBConfig config, GLXContext share_context, Bool direct,
  const int* attrib_list);
typedef GLXContext (GLEXT_API_PTR* PFNGLXCREATECONTEXTWITHCONFIGSGIXPROC) (
  Display* dpy, GLXFBConfigSGIX config, int render_type, GLXContext share_list,
  Bool direct);
typedef GLXPbufferSGIX (GLEXT_API_PTR* PFNGLXCREATEGLXPBUFFERSGIXPROC) (
  Display* dpy, GLXFBConfigSGIX config, unsigned int width,
  unsigned int height, int* attrib_list);
typedef GLXPixmap (GLEXT_API_PTR* PFNGLXCREATEGLXPIXMAPPROC) (
  Display* dpy, XVisualInfo* visual, Pixmap pixmap);
typedef GLXPixmap (GLEXT_API_PTR* PFNGLXCREATEGLXPIXMAPMESAPROC) (
  Display* dpy, XVisualInfo* visual, Pixmap pixmap, Colormap cmap);
typedef GLXPixmap (GLEXT_API_PTR* PFNGLXCREATEGLXPIXMAPWITHCONFIGSGIXPROC) (
  Display* dpy, GLXFBConfigSGIX config, Pixmap pixmap);
typedef GLXContext (GLEXT_API_PTR* PFNGLXCREATENEWCONTEXTPROC) (
  Display* dpy, GLXFBConfig config, int render_type, GLXContext share_list,
  Bool direct);
typedef GLXPbuffer (GLEXT_API_PTR* PFNGLXCREATEPBUFFERPROC) (
  Display* dpy, GLXFBConfig config, const int* attrib_list);
typedef GLXPixmap (GLEXT_API_PTR* PFNGLXCREATEPIXMAPPROC) (
  Display* dpy, GLXFBConfig config, Pixmap pixmap, const int* attrib_list);
typedef GLXWindow (GLEXT_API_PTR* PFNGLXCREATEWINDOWPROC) (
  Display* dpy, GLXFBConfig config, Window win, const int* attrib_list);
typedef void (GLEXT_API_PTR* PFNGLXCUSHIONSGIPROC) (Display* dpy,
                                                    Window window,
                                                    float cushion);
typedef Bool (GLEXT_API_PTR* PFNGLXDELAYBEFORESWAPNVPROC) (
  Display* dpy, GLXDrawable drawable, GLfloat seconds);
typedef Bool (GLEXT_API_PTR* PFNGLXDELETEASSOCIATEDCONTEXTAMDPROC) (
  GLXContext ctx);
typedef void (GLEXT_API_PTR* PFNGLXDESTROYCONTEXTPROC) (Display* dpy,
                                                        GLXContext ctx);
typedef void (GLEXT_API_PTR* PFNGLXDESTROYGLXPBUFFERSGIXPROC) (
  Display* dpy, GLXPbufferSGIX pbuf);
typedef void (GLEXT_API_PTR* PFNGLXDESTROYGLXPIXMAPPROC) (Display* dpy,
                                                          GLXPixmap pixmap);
typedef int (GLEXT_API_PTR* PFNGLXDESTROYHYPERPIPECONFIGSGIXPROC) (
  Display* dpy, int hpId);
typedef void (GLEXT_API_PTR* PFNGLXDESTROYPBUFFERPROC) (Display* dpy,
                                                        GLXPbuffer pbuf);
typedef void (GLEXT_API_PTR* PFNGLXDESTROYPIXMAPPROC) (Display* dpy,
                                                       GLXPixmap pixmap);
typedef void (GLEXT_API_PTR* PFNGLXDESTROYWINDOWPROC) (Display* dpy,
                                                       GLXWindow win);
typedef GLXVideoCaptureDeviceNV*(
  GLEXT_API_PTR* PFNGLXENUMERATEVIDEOCAPTUREDEVICESNVPROC) (Display* dpy,
                                                            int screen,
                                                            int* nelements);
typedef unsigned int*(GLEXT_API_PTR* PFNGLXENUMERATEVIDEODEVICESNVPROC) (
  Display* dpy, int screen, int* nelements);
typedef void (GLEXT_API_PTR* PFNGLXFREECONTEXTEXTPROC) (Display* dpy,
                                                        GLXContext context);
typedef unsigned int (GLEXT_API_PTR* PFNGLXGETAGPOFFSETMESAPROC) (
  const void* pointer);
typedef const char*(GLEXT_API_PTR* PFNGLXGETCLIENTSTRINGPROC) (Display* dpy,
                                                               int name);
typedef int (GLEXT_API_PTR* PFNGLXGETCONFIGPROC) (Display* dpy,
                                                  XVisualInfo* visual,
                                                  int attrib, int* value);
typedef unsigned int (GLEXT_API_PTR* PFNGLXGETCONTEXTGPUIDAMDPROC) (
  GLXContext ctx);
typedef GLXContextID (GLEXT_API_PTR* PFNGLXGETCONTEXTIDEXTPROC) (
  const GLXContext context);
typedef GLXContext (GLEXT_API_PTR* PFNGLXGETCURRENTASSOCIATEDCONTEXTAMDPROC) (
  void);
typedef GLXContext (GLEXT_API_PTR* PFNGLXGETCURRENTCONTEXTPROC) (void);
typedef Display*(GLEXT_API_PTR* PFNGLXGETCURRENTDISPLAYPROC) (void);
typedef Display*(GLEXT_API_PTR* PFNGLXGETCURRENTDISPLAYEXTPROC) (void);
typedef GLXDrawable (GLEXT_API_PTR* PFNGLXGETCURRENTDRAWABLEPROC) (void);
typedef GLXDrawable (GLEXT_API_PTR* PFNGLXGETCURRENTREADDRAWABLEPROC) (void);
typedef GLXDrawable (GLEXT_API_PTR* PFNGLXGETCURRENTREADDRAWABLESGIPROC) (
  void);
typedef int (GLEXT_API_PTR* PFNGLXGETFBCONFIGATTRIBPROC) (Display* dpy,
                                                          GLXFBConfig config,
                                                          int attribute,
                                                          int* value);
typedef int (GLEXT_API_PTR* PFNGLXGETFBCONFIGATTRIBSGIXPROC) (
  Display* dpy, GLXFBConfigSGIX config, int attribute, int* value);
typedef GLXFBConfigSGIX (GLEXT_API_PTR* PFNGLXGETFBCONFIGFROMVISUALSGIXPROC) (
  Display* dpy, XVisualInfo* vis);
typedef GLXFBConfig*(GLEXT_API_PTR* PFNGLXGETFBCONFIGSPROC) (Display* dpy,
                                                             int screen,
                                                             int* nelements);
typedef unsigned int (GLEXT_API_PTR* PFNGLXGETGPUIDSAMDPROC) (
  unsigned int maxCount, unsigned int* ids);
typedef int (GLEXT_API_PTR* PFNGLXGETGPUINFOAMDPROC) (unsigned int id,
                                                      int property,
                                                      GLenum dataType,
                                                      unsigned int size,
                                                      void* data);
typedef Bool (GLEXT_API_PTR* PFNGLXGETMSCRATEOMLPROC) (Display* dpy,
                                                       GLXDrawable drawable,
                                                       int32_t* numerator,
                                                       int32_t* denominator);
typedef __GLXextFuncPtr (GLEXT_API_PTR* PFNGLXGETPROCADDRESSPROC) (
  const GLubyte* procName);
typedef __GLXextFuncPtr (GLEXT_API_PTR* PFNGLXGETPROCADDRESSARBPROC) (
  const GLubyte* procName);
typedef void (GLEXT_API_PTR* PFNGLXGETSELECTEDEVENTPROC) (
  Display* dpy, GLXDrawable draw, unsigned long* event_mask);
typedef void (GLEXT_API_PTR* PFNGLXGETSELECTEDEVENTSGIXPROC) (
  Display* dpy, GLXDrawable drawable, unsigned long* mask);
typedef int (GLEXT_API_PTR* PFNGLXGETSWAPINTERVALMESAPROC) (void);
typedef Bool (GLEXT_API_PTR* PFNGLXGETSYNCVALUESOMLPROC) (Display* dpy,
                                                          GLXDrawable drawable,
                                                          int64_t* ust,
                                                          int64_t* msc,
                                                          int64_t* sbc);
typedef Status (GLEXT_API_PTR* PFNGLXGETTRANSPARENTINDEXSUNPROC) (
  Display* dpy, Window overlay, Window underlay,
  unsigned long* pTransparentIndex);
typedef int (GLEXT_API_PTR* PFNGLXGETVIDEODEVICENVPROC) (
  Display* dpy, int screen, int numVideoDevices,
  GLXVideoDeviceNV* pVideoDevice);
typedef int (GLEXT_API_PTR* PFNGLXGETVIDEOINFONVPROC) (
  Display* dpy, int screen, GLXVideoDeviceNV VideoDevice,
  unsigned long* pulCounterOutputPbuffer,
  unsigned long* pulCounterOutputVideo);
typedef int (GLEXT_API_PTR* PFNGLXGETVIDEOSYNCSGIPROC) (unsigned int* count);
typedef XVisualInfo*(GLEXT_API_PTR* PFNGLXGETVISUALFROMFBCONFIGPROC) (
  Display* dpy, GLXFBConfig config);
typedef XVisualInfo*(GLEXT_API_PTR* PFNGLXGETVISUALFROMFBCONFIGSGIXPROC) (
  Display* dpy, GLXFBConfigSGIX config);
typedef int (GLEXT_API_PTR* PFNGLXHYPERPIPEATTRIBSGIXPROC) (
  Display* dpy, int timeSlice, int attrib, int size, void* attribList);
typedef int (GLEXT_API_PTR* PFNGLXHYPERPIPECONFIGSGIXPROC) (
  Display* dpy, int networkId, int npipes, GLXHyperpipeConfigSGIX* cfg,
  int* hpId);
typedef GLXContext (GLEXT_API_PTR* PFNGLXIMPORTCONTEXTEXTPROC) (
  Display* dpy, GLXContextID contextID);
typedef Bool (GLEXT_API_PTR* PFNGLXISDIRECTPROC) (Display* dpy,
                                                  GLXContext ctx);
typedef Bool (GLEXT_API_PTR* PFNGLXJOINSWAPGROUPNVPROC) (Display* dpy,
                                                         GLXDrawable drawable,
                                                         GLuint group);
typedef void (GLEXT_API_PTR* PFNGLXJOINSWAPGROUPSGIXPROC) (
  Display* dpy, GLXDrawable drawable, GLXDrawable member);
typedef void (GLEXT_API_PTR* PFNGLXLOCKVIDEOCAPTUREDEVICENVPROC) (
  Display* dpy, GLXVideoCaptureDeviceNV device);
typedef Bool (GLEXT_API_PTR* PFNGLXMAKEASSOCIATEDCONTEXTCURRENTAMDPROC) (
  GLXContext ctx);
typedef Bool (GLEXT_API_PTR* PFNGLXMAKECONTEXTCURRENTPROC) (Display* dpy,
                                                            GLXDrawable draw,
                                                            GLXDrawable read,
                                                            GLXContext ctx);
typedef Bool (GLEXT_API_PTR* PFNGLXMAKECURRENTPROC) (Display* dpy,
                                                     GLXDrawable drawable,
                                                     GLXContext ctx);
typedef Bool (GLEXT_API_PTR* PFNGLXMAKECURRENTREADSGIPROC) (Display* dpy,
                                                            GLXDrawable draw,
                                                            GLXDrawable read,
                                                            GLXContext ctx);
typedef void (GLEXT_API_PTR* PFNGLXNAMEDCOPYBUFFERSUBDATANVPROC) (
  Display* dpy, GLXContext readCtx, GLXContext writeCtx, GLuint readBuffer,
  GLuint writeBuffer, GLintptr readOffset, GLintptr writeOffset,
  GLsizeiptr size);
typedef int (GLEXT_API_PTR* PFNGLXQUERYCHANNELDELTASSGIXPROC) (
  Display* display, int screen, int channel, int* x, int* y, int* w, int* h);
typedef int (GLEXT_API_PTR* PFNGLXQUERYCHANNELRECTSGIXPROC) (Display* display,
                                                             int screen,
                                                             int channel,
                                                             int* dx, int* dy,
                                                             int* dw, int* dh);
typedef int (GLEXT_API_PTR* PFNGLXQUERYCONTEXTPROC) (Display* dpy,
                                                     GLXContext ctx,
                                                     int attribute,
                                                     int* value);
typedef int (GLEXT_API_PTR* PFNGLXQUERYCONTEXTINFOEXTPROC) (Display* dpy,
                                                            GLXContext context,
                                                            int attribute,
                                                            int* value);
typedef Bool (GLEXT_API_PTR* PFNGLXQUERYCURRENTRENDERERINTEGERMESAPROC) (
  int attribute, unsigned int* value);
typedef const char*(GLEXT_API_PTR* PFNGLXQUERYCURRENTRENDERERSTRINGMESAPROC) (
  int attribute);
typedef void (GLEXT_API_PTR* PFNGLXQUERYDRAWABLEPROC) (Display* dpy,
                                                       GLXDrawable draw,
                                                       int attribute,
                                                       unsigned int* value);
typedef Bool (GLEXT_API_PTR* PFNGLXQUERYEXTENSIONPROC) (Display* dpy,
                                                        int* errorb,
                                                        int* event);
typedef const char*(GLEXT_API_PTR* PFNGLXQUERYEXTENSIONSSTRINGPROC) (
  Display* dpy, int screen);
typedef Bool (GLEXT_API_PTR* PFNGLXQUERYFRAMECOUNTNVPROC) (Display* dpy,
                                                           int screen,
                                                           GLuint* count);
typedef void (GLEXT_API_PTR* PFNGLXQUERYGLXPBUFFERSGIXPROC) (
  Display* dpy, GLXPbufferSGIX pbuf, int attribute, unsigned int* value);
typedef int (GLEXT_API_PTR* PFNGLXQUERYHYPERPIPEATTRIBSGIXPROC) (
  Display* dpy, int timeSlice, int attrib, int size, void* returnAttribList);
typedef int (GLEXT_API_PTR* PFNGLXQUERYHYPERPIPEBESTATTRIBSGIXPROC) (
  Display* dpy, int timeSlice, int attrib, int size, void* attribList,
  void* returnAttribList);
typedef GLXHyperpipeConfigSGIX*(
  GLEXT_API_PTR* PFNGLXQUERYHYPERPIPECONFIGSGIXPROC) (Display* dpy, int hpId,
                                                      int* npipes);
typedef GLXHyperpipeNetworkSGIX*(
  GLEXT_API_PTR* PFNGLXQUERYHYPERPIPENETWORKSGIXPROC) (Display* dpy,
                                                       int* npipes);
typedef Bool (GLEXT_API_PTR* PFNGLXQUERYMAXSWAPBARRIERSSGIXPROC) (Display* dpy,
                                                                  int screen,
                                                                  int* max);
typedef Bool (GLEXT_API_PTR* PFNGLXQUERYMAXSWAPGROUPSNVPROC) (
  Display* dpy, int screen, GLuint* maxGroups, GLuint* maxBarriers);
typedef Bool (GLEXT_API_PTR* PFNGLXQUERYRENDERERINTEGERMESAPROC) (
  Display* dpy, int screen, int renderer, int attribute, unsigned int* value);
typedef const char*(GLEXT_API_PTR* PFNGLXQUERYRENDERERSTRINGMESAPROC) (
  Display* dpy, int screen, int renderer, int attribute);
typedef const char*(GLEXT_API_PTR* PFNGLXQUERYSERVERSTRINGPROC) (Display* dpy,
                                                                 int screen,
                                                                 int name);
typedef Bool (GLEXT_API_PTR* PFNGLXQUERYSWAPGROUPNVPROC) (Display* dpy,
                                                          GLXDrawable drawable,
                                                          GLuint* group,
                                                          GLuint* barrier);
typedef Bool (GLEXT_API_PTR* PFNGLXQUERYVERSIONPROC) (Display* dpy, int* maj,
                                                      int* min);
typedef int (GLEXT_API_PTR* PFNGLXQUERYVIDEOCAPTUREDEVICENVPROC) (
  Display* dpy, GLXVideoCaptureDeviceNV device, int attribute, int* value);
typedef Bool (GLEXT_API_PTR* PFNGLXRELEASEBUFFERSMESAPROC) (
  Display* dpy, GLXDrawable drawable);
typedef void (GLEXT_API_PTR* PFNGLXRELEASETEXIMAGEEXTPROC) (
  Display* dpy, GLXDrawable drawable, int buffer);
typedef void (GLEXT_API_PTR* PFNGLXRELEASEVIDEOCAPTUREDEVICENVPROC) (
  Display* dpy, GLXVideoCaptureDeviceNV device);
typedef int (GLEXT_API_PTR* PFNGLXRELEASEVIDEODEVICENVPROC) (
  Display* dpy, int screen, GLXVideoDeviceNV VideoDevice);
typedef int (GLEXT_API_PTR* PFNGLXRELEASEVIDEOIMAGENVPROC) (Display* dpy,
                                                            GLXPbuffer pbuf);
typedef Bool (GLEXT_API_PTR* PFNGLXRESETFRAMECOUNTNVPROC) (Display* dpy,
                                                           int screen);
typedef void (GLEXT_API_PTR* PFNGLXSELECTEVENTPROC) (Display* dpy,
                                                     GLXDrawable draw,
                                                     unsigned long event_mask);
typedef void (GLEXT_API_PTR* PFNGLXSELECTEVENTSGIXPROC) (Display* dpy,
                                                         GLXDrawable drawable,
                                                         unsigned long mask);
typedef int (GLEXT_API_PTR* PFNGLXSENDPBUFFERTOVIDEONVPROC) (
  Display* dpy, GLXPbuffer pbuf, int iBufferType,
  unsigned long* pulCounterPbuffer, GLboolean bBlock);
typedef GLboolean (GLEXT_API_PTR* PFNGLXSET3DFXMODEMESAPROC) (GLint mode);
typedef void (GLEXT_API_PTR* PFNGLXSWAPBUFFERSPROC) (Display* dpy,
                                                     GLXDrawable drawable);
typedef int64_t (GLEXT_API_PTR* PFNGLXSWAPBUFFERSMSCOMLPROC) (
  Display* dpy, GLXDrawable drawable, int64_t target_msc, int64_t divisor,
  int64_t remainder);
typedef void (GLEXT_API_PTR* PFNGLXSWAPINTERVALEXTPROC) (Display* dpy,
                                                         GLXDrawable drawable,
                                                         int interval);
typedef int (GLEXT_API_PTR* PFNGLXSWAPINTERVALMESAPROC) (
  unsigned int interval);
typedef int (GLEXT_API_PTR* PFNGLXSWAPINTERVALSGIPROC) (int interval);
typedef void (GLEXT_API_PTR* PFNGLXUSEXFONTPROC) (Font font, int first,
                                                  int count, int list);
typedef Bool (GLEXT_API_PTR* PFNGLXWAITFORMSCOMLPROC) (
  Display* dpy, GLXDrawable drawable, int64_t target_msc, int64_t divisor,
  int64_t remainder, int64_t* ust, int64_t* msc, int64_t* sbc);
typedef Bool (GLEXT_API_PTR* PFNGLXWAITFORSBCOMLPROC) (
  Display* dpy, GLXDrawable drawable, int64_t target_sbc, int64_t* ust,
  int64_t* msc, int64_t* sbc);
typedef void (GLEXT_API_PTR* PFNGLXWAITGLPROC) (void);
typedef int (GLEXT_API_PTR* PFNGLXWAITVIDEOSYNCSGIPROC) (int divisor,
                                                         int remainder,
                                                         unsigned int* count);
typedef void (GLEXT_API_PTR* PFNGLXWAITXPROC) (void);

GLEXT_API_CALL PFNGLXBINDCHANNELTOWINDOWSGIXPROC
  glext_glXBindChannelToWindowSGIX;
#define glXBindChannelToWindowSGIX glext_glXBindChannelToWindowSGIX
GLEXT_API_CALL PFNGLXBINDHYPERPIPESGIXPROC glext_glXBindHyperpipeSGIX;
#define glXBindHyperpipeSGIX glext_glXBindHyperpipeSGIX
GLEXT_API_CALL PFNGLXBINDSWAPBARRIERNVPROC glext_glXBindSwapBarrierNV;
#define glXBindSwapBarrierNV glext_glXBindSwapBarrierNV
GLEXT_API_CALL PFNGLXBINDSWAPBARRIERSGIXPROC glext_glXBindSwapBarrierSGIX;
#define glXBindSwapBarrierSGIX glext_glXBindSwapBarrierSGIX
GLEXT_API_CALL PFNGLXBINDTEXIMAGEEXTPROC glext_glXBindTexImageEXT;
#define glXBindTexImageEXT glext_glXBindTexImageEXT
GLEXT_API_CALL PFNGLXBINDVIDEOCAPTUREDEVICENVPROC
  glext_glXBindVideoCaptureDeviceNV;
#define glXBindVideoCaptureDeviceNV glext_glXBindVideoCaptureDeviceNV
GLEXT_API_CALL PFNGLXBINDVIDEODEVICENVPROC glext_glXBindVideoDeviceNV;
#define glXBindVideoDeviceNV glext_glXBindVideoDeviceNV
GLEXT_API_CALL PFNGLXBINDVIDEOIMAGENVPROC glext_glXBindVideoImageNV;
#define glXBindVideoImageNV glext_glXBindVideoImageNV
GLEXT_API_CALL PFNGLXBLITCONTEXTFRAMEBUFFERAMDPROC
  glext_glXBlitContextFramebufferAMD;
#define glXBlitContextFramebufferAMD glext_glXBlitContextFramebufferAMD
GLEXT_API_CALL PFNGLXCHANNELRECTSGIXPROC glext_glXChannelRectSGIX;
#define glXChannelRectSGIX glext_glXChannelRectSGIX
GLEXT_API_CALL PFNGLXCHANNELRECTSYNCSGIXPROC glext_glXChannelRectSyncSGIX;
#define glXChannelRectSyncSGIX glext_glXChannelRectSyncSGIX
GLEXT_API_CALL PFNGLXCHOOSEFBCONFIGPROC glext_glXChooseFBConfig;
#define glXChooseFBConfig glext_glXChooseFBConfig
GLEXT_API_CALL PFNGLXCHOOSEFBCONFIGSGIXPROC glext_glXChooseFBConfigSGIX;
#define glXChooseFBConfigSGIX glext_glXChooseFBConfigSGIX
GLEXT_API_CALL PFNGLXCHOOSEVISUALPROC glext_glXChooseVisual;
#define glXChooseVisual glext_glXChooseVisual
GLEXT_API_CALL PFNGLXCOPYBUFFERSUBDATANVPROC glext_glXCopyBufferSubDataNV;
#define glXCopyBufferSubDataNV glext_glXCopyBufferSubDataNV
GLEXT_API_CALL PFNGLXCOPYCONTEXTPROC glext_glXCopyContext;
#define glXCopyContext glext_glXCopyContext
GLEXT_API_CALL PFNGLXCOPYIMAGESUBDATANVPROC glext_glXCopyImageSubDataNV;
#define glXCopyImageSubDataNV glext_glXCopyImageSubDataNV
GLEXT_API_CALL PFNGLXCOPYSUBBUFFERMESAPROC glext_glXCopySubBufferMESA;
#define glXCopySubBufferMESA glext_glXCopySubBufferMESA
GLEXT_API_CALL PFNGLXCREATEASSOCIATEDCONTEXTAMDPROC
  glext_glXCreateAssociatedContextAMD;
#define glXCreateAssociatedContextAMD glext_glXCreateAssociatedContextAMD
GLEXT_API_CALL PFNGLXCREATEASSOCIATEDCONTEXTATTRIBSAMDPROC
  glext_glXCreateAssociatedContextAttribsAMD;
#define glXCreateAssociatedContextAttribsAMD                                  \
  glext_glXCreateAssociatedContextAttribsAMD
GLEXT_API_CALL PFNGLXCREATECONTEXTPROC glext_glXCreateContext;
#define glXCreateContext glext_glXCreateContext
GLEXT_API_CALL PFNGLXCREATECONTEXTATTRIBSARBPROC
  glext_glXCreateContextAttribsARB;
#define glXCreateContextAttribsARB glext_glXCreateContextAttribsARB
GLEXT_API_CALL PFNGLXCREATECONTEXTWITHCONFIGSGIXPROC
  glext_glXCreateContextWithConfigSGIX;
#define glXCreateContextWithConfigSGIX glext_glXCreateContextWithConfigSGIX
GLEXT_API_CALL PFNGLXCREATEGLXPBUFFERSGIXPROC glext_glXCreateGLXPbufferSGIX;
#define glXCreateGLXPbufferSGIX glext_glXCreateGLXPbufferSGIX
GLEXT_API_CALL PFNGLXCREATEGLXPIXMAPPROC glext_glXCreateGLXPixmap;
#define glXCreateGLXPixmap glext_glXCreateGLXPixmap
GLEXT_API_CALL PFNGLXCREATEGLXPIXMAPMESAPROC glext_glXCreateGLXPixmapMESA;
#define glXCreateGLXPixmapMESA glext_glXCreateGLXPixmapMESA
GLEXT_API_CALL PFNGLXCREATEGLXPIXMAPWITHCONFIGSGIXPROC
  glext_glXCreateGLXPixmapWithConfigSGIX;
#define glXCreateGLXPixmapWithConfigSGIX glext_glXCreateGLXPixmapWithConfigSGIX
GLEXT_API_CALL PFNGLXCREATENEWCONTEXTPROC glext_glXCreateNewContext;
#define glXCreateNewContext glext_glXCreateNewContext
GLEXT_API_CALL PFNGLXCREATEPBUFFERPROC glext_glXCreatePbuffer;
#define glXCreatePbuffer glext_glXCreatePbuffer
GLEXT_API_CALL PFNGLXCREATEPIXMAPPROC glext_glXCreatePixmap;
#define glXCreatePixmap glext_glXCreatePixmap
GLEXT_API_CALL PFNGLXCREATEWINDOWPROC glext_glXCreateWindow;
#define glXCreateWindow glext_glXCreateWindow
GLEXT_API_CALL PFNGLXCUSHIONSGIPROC glext_glXCushionSGI;
#define glXCushionSGI glext_glXCushionSGI
GLEXT_API_CALL PFNGLXDELAYBEFORESWAPNVPROC glext_glXDelayBeforeSwapNV;
#define glXDelayBeforeSwapNV glext_glXDelayBeforeSwapNV
GLEXT_API_CALL PFNGLXDELETEASSOCIATEDCONTEXTAMDPROC
  glext_glXDeleteAssociatedContextAMD;
#define glXDeleteAssociatedContextAMD glext_glXDeleteAssociatedContextAMD
GLEXT_API_CALL PFNGLXDESTROYCONTEXTPROC glext_glXDestroyContext;
#define glXDestroyContext glext_glXDestroyContext
GLEXT_API_CALL PFNGLXDESTROYGLXPBUFFERSGIXPROC glext_glXDestroyGLXPbufferSGIX;
#define glXDestroyGLXPbufferSGIX glext_glXDestroyGLXPbufferSGIX
GLEXT_API_CALL PFNGLXDESTROYGLXPIXMAPPROC glext_glXDestroyGLXPixmap;
#define glXDestroyGLXPixmap glext_glXDestroyGLXPixmap
GLEXT_API_CALL PFNGLXDESTROYHYPERPIPECONFIGSGIXPROC
  glext_glXDestroyHyperpipeConfigSGIX;
#define glXDestroyHyperpipeConfigSGIX glext_glXDestroyHyperpipeConfigSGIX
GLEXT_API_CALL PFNGLXDESTROYPBUFFERPROC glext_glXDestroyPbuffer;
#define glXDestroyPbuffer glext_glXDestroyPbuffer
GLEXT_API_CALL PFNGLXDESTROYPIXMAPPROC glext_glXDestroyPixmap;
#define glXDestroyPixmap glext_glXDestroyPixmap
GLEXT_API_CALL PFNGLXDESTROYWINDOWPROC glext_glXDestroyWindow;
#define glXDestroyWindow glext_glXDestroyWindow
GLEXT_API_CALL PFNGLXENUMERATEVIDEOCAPTUREDEVICESNVPROC
  glext_glXEnumerateVideoCaptureDevicesNV;
#define glXEnumerateVideoCaptureDevicesNV                                     \
  glext_glXEnumerateVideoCaptureDevicesNV
GLEXT_API_CALL PFNGLXENUMERATEVIDEODEVICESNVPROC
  glext_glXEnumerateVideoDevicesNV;
#define glXEnumerateVideoDevicesNV glext_glXEnumerateVideoDevicesNV
GLEXT_API_CALL PFNGLXFREECONTEXTEXTPROC glext_glXFreeContextEXT;
#define glXFreeContextEXT glext_glXFreeContextEXT
GLEXT_API_CALL PFNGLXGETAGPOFFSETMESAPROC glext_glXGetAGPOffsetMESA;
#define glXGetAGPOffsetMESA glext_glXGetAGPOffsetMESA
GLEXT_API_CALL PFNGLXGETCLIENTSTRINGPROC glext_glXGetClientString;
#define glXGetClientString glext_glXGetClientString
GLEXT_API_CALL PFNGLXGETCONFIGPROC glext_glXGetConfig;
#define glXGetConfig glext_glXGetConfig
GLEXT_API_CALL PFNGLXGETCONTEXTGPUIDAMDPROC glext_glXGetContextGPUIDAMD;
#define glXGetContextGPUIDAMD glext_glXGetContextGPUIDAMD
GLEXT_API_CALL PFNGLXGETCONTEXTIDEXTPROC glext_glXGetContextIDEXT;
#define glXGetContextIDEXT glext_glXGetContextIDEXT
GLEXT_API_CALL PFNGLXGETCURRENTASSOCIATEDCONTEXTAMDPROC
  glext_glXGetCurrentAssociatedContextAMD;
#define glXGetCurrentAssociatedContextAMD                                     \
  glext_glXGetCurrentAssociatedContextAMD
GLEXT_API_CALL PFNGLXGETCURRENTCONTEXTPROC glext_glXGetCurrentContext;
#define glXGetCurrentContext glext_glXGetCurrentContext
GLEXT_API_CALL PFNGLXGETCURRENTDISPLAYPROC glext_glXGetCurrentDisplay;
#define glXGetCurrentDisplay glext_glXGetCurrentDisplay
GLEXT_API_CALL PFNGLXGETCURRENTDISPLAYEXTPROC glext_glXGetCurrentDisplayEXT;
#define glXGetCurrentDisplayEXT glext_glXGetCurrentDisplayEXT
GLEXT_API_CALL PFNGLXGETCURRENTDRAWABLEPROC glext_glXGetCurrentDrawable;
#define glXGetCurrentDrawable glext_glXGetCurrentDrawable
GLEXT_API_CALL PFNGLXGETCURRENTREADDRAWABLEPROC
  glext_glXGetCurrentReadDrawable;
#define glXGetCurrentReadDrawable glext_glXGetCurrentReadDrawable
GLEXT_API_CALL PFNGLXGETCURRENTREADDRAWABLESGIPROC
  glext_glXGetCurrentReadDrawableSGI;
#define glXGetCurrentReadDrawableSGI glext_glXGetCurrentReadDrawableSGI
GLEXT_API_CALL PFNGLXGETFBCONFIGATTRIBPROC glext_glXGetFBConfigAttrib;
#define glXGetFBConfigAttrib glext_glXGetFBConfigAttrib
GLEXT_API_CALL PFNGLXGETFBCONFIGATTRIBSGIXPROC glext_glXGetFBConfigAttribSGIX;
#define glXGetFBConfigAttribSGIX glext_glXGetFBConfigAttribSGIX
GLEXT_API_CALL PFNGLXGETFBCONFIGFROMVISUALSGIXPROC
  glext_glXGetFBConfigFromVisualSGIX;
#define glXGetFBConfigFromVisualSGIX glext_glXGetFBConfigFromVisualSGIX
GLEXT_API_CALL PFNGLXGETFBCONFIGSPROC glext_glXGetFBConfigs;
#define glXGetFBConfigs glext_glXGetFBConfigs
GLEXT_API_CALL PFNGLXGETGPUIDSAMDPROC glext_glXGetGPUIDsAMD;
#define glXGetGPUIDsAMD glext_glXGetGPUIDsAMD
GLEXT_API_CALL PFNGLXGETGPUINFOAMDPROC glext_glXGetGPUInfoAMD;
#define glXGetGPUInfoAMD glext_glXGetGPUInfoAMD
GLEXT_API_CALL PFNGLXGETMSCRATEOMLPROC glext_glXGetMscRateOML;
#define glXGetMscRateOML glext_glXGetMscRateOML
GLEXT_API_CALL PFNGLXGETPROCADDRESSPROC glext_glXGetProcAddress;
#define glXGetProcAddress glext_glXGetProcAddress
GLEXT_API_CALL PFNGLXGETPROCADDRESSARBPROC glext_glXGetProcAddressARB;
#define glXGetProcAddressARB glext_glXGetProcAddressARB
GLEXT_API_CALL PFNGLXGETSELECTEDEVENTPROC glext_glXGetSelectedEvent;
#define glXGetSelectedEvent glext_glXGetSelectedEvent
GLEXT_API_CALL PFNGLXGETSELECTEDEVENTSGIXPROC glext_glXGetSelectedEventSGIX;
#define glXGetSelectedEventSGIX glext_glXGetSelectedEventSGIX
GLEXT_API_CALL PFNGLXGETSWAPINTERVALMESAPROC glext_glXGetSwapIntervalMESA;
#define glXGetSwapIntervalMESA glext_glXGetSwapIntervalMESA
GLEXT_API_CALL PFNGLXGETSYNCVALUESOMLPROC glext_glXGetSyncValuesOML;
#define glXGetSyncValuesOML glext_glXGetSyncValuesOML
GLEXT_API_CALL PFNGLXGETTRANSPARENTINDEXSUNPROC
  glext_glXGetTransparentIndexSUN;
#define glXGetTransparentIndexSUN glext_glXGetTransparentIndexSUN
GLEXT_API_CALL PFNGLXGETVIDEODEVICENVPROC glext_glXGetVideoDeviceNV;
#define glXGetVideoDeviceNV glext_glXGetVideoDeviceNV
GLEXT_API_CALL PFNGLXGETVIDEOINFONVPROC glext_glXGetVideoInfoNV;
#define glXGetVideoInfoNV glext_glXGetVideoInfoNV
GLEXT_API_CALL PFNGLXGETVIDEOSYNCSGIPROC glext_glXGetVideoSyncSGI;
#define glXGetVideoSyncSGI glext_glXGetVideoSyncSGI
GLEXT_API_CALL PFNGLXGETVISUALFROMFBCONFIGPROC glext_glXGetVisualFromFBConfig;
#define glXGetVisualFromFBConfig glext_glXGetVisualFromFBConfig
GLEXT_API_CALL PFNGLXGETVISUALFROMFBCONFIGSGIXPROC
  glext_glXGetVisualFromFBConfigSGIX;
#define glXGetVisualFromFBConfigSGIX glext_glXGetVisualFromFBConfigSGIX
GLEXT_API_CALL PFNGLXHYPERPIPEATTRIBSGIXPROC glext_glXHyperpipeAttribSGIX;
#define glXHyperpipeAttribSGIX glext_glXHyperpipeAttribSGIX
GLEXT_API_CALL PFNGLXHYPERPIPECONFIGSGIXPROC glext_glXHyperpipeConfigSGIX;
#define glXHyperpipeConfigSGIX glext_glXHyperpipeConfigSGIX
GLEXT_API_CALL PFNGLXIMPORTCONTEXTEXTPROC glext_glXImportContextEXT;
#define glXImportContextEXT glext_glXImportContextEXT
GLEXT_API_CALL PFNGLXISDIRECTPROC glext_glXIsDirect;
#define glXIsDirect glext_glXIsDirect
GLEXT_API_CALL PFNGLXJOINSWAPGROUPNVPROC glext_glXJoinSwapGroupNV;
#define glXJoinSwapGroupNV glext_glXJoinSwapGroupNV
GLEXT_API_CALL PFNGLXJOINSWAPGROUPSGIXPROC glext_glXJoinSwapGroupSGIX;
#define glXJoinSwapGroupSGIX glext_glXJoinSwapGroupSGIX
GLEXT_API_CALL PFNGLXLOCKVIDEOCAPTUREDEVICENVPROC
  glext_glXLockVideoCaptureDeviceNV;
#define glXLockVideoCaptureDeviceNV glext_glXLockVideoCaptureDeviceNV
GLEXT_API_CALL PFNGLXMAKEASSOCIATEDCONTEXTCURRENTAMDPROC
  glext_glXMakeAssociatedContextCurrentAMD;
#define glXMakeAssociatedContextCurrentAMD                                    \
  glext_glXMakeAssociatedContextCurrentAMD
GLEXT_API_CALL PFNGLXMAKECONTEXTCURRENTPROC glext_glXMakeContextCurrent;
#define glXMakeContextCurrent glext_glXMakeContextCurrent
GLEXT_API_CALL PFNGLXMAKECURRENTPROC glext_glXMakeCurrent;
#define glXMakeCurrent glext_glXMakeCurrent
GLEXT_API_CALL PFNGLXMAKECURRENTREADSGIPROC glext_glXMakeCurrentReadSGI;
#define glXMakeCurrentReadSGI glext_glXMakeCurrentReadSGI
GLEXT_API_CALL PFNGLXNAMEDCOPYBUFFERSUBDATANVPROC
  glext_glXNamedCopyBufferSubDataNV;
#define glXNamedCopyBufferSubDataNV glext_glXNamedCopyBufferSubDataNV
GLEXT_API_CALL PFNGLXQUERYCHANNELDELTASSGIXPROC
  glext_glXQueryChannelDeltasSGIX;
#define glXQueryChannelDeltasSGIX glext_glXQueryChannelDeltasSGIX
GLEXT_API_CALL PFNGLXQUERYCHANNELRECTSGIXPROC glext_glXQueryChannelRectSGIX;
#define glXQueryChannelRectSGIX glext_glXQueryChannelRectSGIX
GLEXT_API_CALL PFNGLXQUERYCONTEXTPROC glext_glXQueryContext;
#define glXQueryContext glext_glXQueryContext
GLEXT_API_CALL PFNGLXQUERYCONTEXTINFOEXTPROC glext_glXQueryContextInfoEXT;
#define glXQueryContextInfoEXT glext_glXQueryContextInfoEXT
GLEXT_API_CALL PFNGLXQUERYCURRENTRENDERERINTEGERMESAPROC
  glext_glXQueryCurrentRendererIntegerMESA;
#define glXQueryCurrentRendererIntegerMESA                                    \
  glext_glXQueryCurrentRendererIntegerMESA
GLEXT_API_CALL PFNGLXQUERYCURRENTRENDERERSTRINGMESAPROC
  glext_glXQueryCurrentRendererStringMESA;
#define glXQueryCurrentRendererStringMESA                                     \
  glext_glXQueryCurrentRendererStringMESA
GLEXT_API_CALL PFNGLXQUERYDRAWABLEPROC glext_glXQueryDrawable;
#define glXQueryDrawable glext_glXQueryDrawable
GLEXT_API_CALL PFNGLXQUERYEXTENSIONPROC glext_glXQueryExtension;
#define glXQueryExtension glext_glXQueryExtension
GLEXT_API_CALL PFNGLXQUERYEXTENSIONSSTRINGPROC glext_glXQueryExtensionsString;
#define glXQueryExtensionsString glext_glXQueryExtensionsString
GLEXT_API_CALL PFNGLXQUERYFRAMECOUNTNVPROC glext_glXQueryFrameCountNV;
#define glXQueryFrameCountNV glext_glXQueryFrameCountNV
GLEXT_API_CALL PFNGLXQUERYGLXPBUFFERSGIXPROC glext_glXQueryGLXPbufferSGIX;
#define glXQueryGLXPbufferSGIX glext_glXQueryGLXPbufferSGIX
GLEXT_API_CALL PFNGLXQUERYHYPERPIPEATTRIBSGIXPROC
  glext_glXQueryHyperpipeAttribSGIX;
#define glXQueryHyperpipeAttribSGIX glext_glXQueryHyperpipeAttribSGIX
GLEXT_API_CALL PFNGLXQUERYHYPERPIPEBESTATTRIBSGIXPROC
  glext_glXQueryHyperpipeBestAttribSGIX;
#define glXQueryHyperpipeBestAttribSGIX glext_glXQueryHyperpipeBestAttribSGIX
GLEXT_API_CALL PFNGLXQUERYHYPERPIPECONFIGSGIXPROC
  glext_glXQueryHyperpipeConfigSGIX;
#define glXQueryHyperpipeConfigSGIX glext_glXQueryHyperpipeConfigSGIX
GLEXT_API_CALL PFNGLXQUERYHYPERPIPENETWORKSGIXPROC
  glext_glXQueryHyperpipeNetworkSGIX;
#define glXQueryHyperpipeNetworkSGIX glext_glXQueryHyperpipeNetworkSGIX
GLEXT_API_CALL PFNGLXQUERYMAXSWAPBARRIERSSGIXPROC
  glext_glXQueryMaxSwapBarriersSGIX;
#define glXQueryMaxSwapBarriersSGIX glext_glXQueryMaxSwapBarriersSGIX
GLEXT_API_CALL PFNGLXQUERYMAXSWAPGROUPSNVPROC glext_glXQueryMaxSwapGroupsNV;
#define glXQueryMaxSwapGroupsNV glext_glXQueryMaxSwapGroupsNV
GLEXT_API_CALL PFNGLXQUERYRENDERERINTEGERMESAPROC
  glext_glXQueryRendererIntegerMESA;
#define glXQueryRendererIntegerMESA glext_glXQueryRendererIntegerMESA
GLEXT_API_CALL PFNGLXQUERYRENDERERSTRINGMESAPROC
  glext_glXQueryRendererStringMESA;
#define glXQueryRendererStringMESA glext_glXQueryRendererStringMESA
GLEXT_API_CALL PFNGLXQUERYSERVERSTRINGPROC glext_glXQueryServerString;
#define glXQueryServerString glext_glXQueryServerString
GLEXT_API_CALL PFNGLXQUERYSWAPGROUPNVPROC glext_glXQuerySwapGroupNV;
#define glXQuerySwapGroupNV glext_glXQuerySwapGroupNV
GLEXT_API_CALL PFNGLXQUERYVERSIONPROC glext_glXQueryVersion;
#define glXQueryVersion glext_glXQueryVersion
GLEXT_API_CALL PFNGLXQUERYVIDEOCAPTUREDEVICENVPROC
  glext_glXQueryVideoCaptureDeviceNV;
#define glXQueryVideoCaptureDeviceNV glext_glXQueryVideoCaptureDeviceNV
GLEXT_API_CALL PFNGLXRELEASEBUFFERSMESAPROC glext_glXReleaseBuffersMESA;
#define glXReleaseBuffersMESA glext_glXReleaseBuffersMESA
GLEXT_API_CALL PFNGLXRELEASETEXIMAGEEXTPROC glext_glXReleaseTexImageEXT;
#define glXReleaseTexImageEXT glext_glXReleaseTexImageEXT
GLEXT_API_CALL PFNGLXRELEASEVIDEOCAPTUREDEVICENVPROC
  glext_glXReleaseVideoCaptureDeviceNV;
#define glXReleaseVideoCaptureDeviceNV glext_glXReleaseVideoCaptureDeviceNV
GLEXT_API_CALL PFNGLXRELEASEVIDEODEVICENVPROC glext_glXReleaseVideoDeviceNV;
#define glXReleaseVideoDeviceNV glext_glXReleaseVideoDeviceNV
GLEXT_API_CALL PFNGLXRELEASEVIDEOIMAGENVPROC glext_glXReleaseVideoImageNV;
#define glXReleaseVideoImageNV glext_glXReleaseVideoImageNV
GLEXT_API_CALL PFNGLXRESETFRAMECOUNTNVPROC glext_glXResetFrameCountNV;
#define glXResetFrameCountNV glext_glXResetFrameCountNV
GLEXT_API_CALL PFNGLXSELECTEVENTPROC glext_glXSelectEvent;
#define glXSelectEvent glext_glXSelectEvent
GLEXT_API_CALL PFNGLXSELECTEVENTSGIXPROC glext_glXSelectEventSGIX;
#define glXSelectEventSGIX glext_glXSelectEventSGIX
GLEXT_API_CALL PFNGLXSENDPBUFFERTOVIDEONVPROC glext_glXSendPbufferToVideoNV;
#define glXSendPbufferToVideoNV glext_glXSendPbufferToVideoNV
GLEXT_API_CALL PFNGLXSET3DFXMODEMESAPROC glext_glXSet3DfxModeMESA;
#define glXSet3DfxModeMESA glext_glXSet3DfxModeMESA
GLEXT_API_CALL PFNGLXSWAPBUFFERSPROC glext_glXSwapBuffers;
#define glXSwapBuffers glext_glXSwapBuffers
GLEXT_API_CALL PFNGLXSWAPBUFFERSMSCOMLPROC glext_glXSwapBuffersMscOML;
#define glXSwapBuffersMscOML glext_glXSwapBuffersMscOML
GLEXT_API_CALL PFNGLXSWAPINTERVALEXTPROC glext_glXSwapIntervalEXT;
#define glXSwapIntervalEXT glext_glXSwapIntervalEXT
GLEXT_API_CALL PFNGLXSWAPINTERVALMESAPROC glext_glXSwapIntervalMESA;
#define glXSwapIntervalMESA glext_glXSwapIntervalMESA
GLEXT_API_CALL PFNGLXSWAPINTERVALSGIPROC glext_glXSwapIntervalSGI;
#define glXSwapIntervalSGI glext_glXSwapIntervalSGI
GLEXT_API_CALL PFNGLXUSEXFONTPROC glext_glXUseXFont;
#define glXUseXFont glext_glXUseXFont
GLEXT_API_CALL PFNGLXWAITFORMSCOMLPROC glext_glXWaitForMscOML;
#define glXWaitForMscOML glext_glXWaitForMscOML
GLEXT_API_CALL PFNGLXWAITFORSBCOMLPROC glext_glXWaitForSbcOML;
#define glXWaitForSbcOML glext_glXWaitForSbcOML
GLEXT_API_CALL PFNGLXWAITGLPROC glext_glXWaitGL;
#define glXWaitGL glext_glXWaitGL
GLEXT_API_CALL PFNGLXWAITVIDEOSYNCSGIPROC glext_glXWaitVideoSyncSGI;
#define glXWaitVideoSyncSGI glext_glXWaitVideoSyncSGI
GLEXT_API_CALL PFNGLXWAITXPROC glext_glXWaitX;
#define glXWaitX glext_glXWaitX

GLEXT_API_CALL int
glext_LoadGLXUserPtr (Display* display, int screen, GLEXTuserptrloadfunc load,
                      void* userptr);
GLEXT_API_CALL int
glext_LoadGLX (Display* display, int screen, GLEXTloadfunc load);

#ifdef GLEXT_GLX

GLEXT_API_CALL int
glext_LoaderLoadGLX (Display* display, int screen);

GLEXT_API_CALL void
glext_LoaderUnloadGLX (void);

#endif
#ifdef __cplusplus
}
#endif

#define GLEXT_GLX_COMPILE 1

#endif // __has included(X11/Xlib.h)

#endif
