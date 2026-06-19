#ifndef GLEXT_WGL_H_
#define GLEXT_WGL_H_

#if __has_include(<Windows.h>)

#include <Windows.h>
#include <glext/gl.h>

#define GLEXT_WGL
#define GLEXT_OPTION_WGL_ALIAS
#define GLEXT_OPTION_WGL_LOADER

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

#define ERROR_INCOMPATIBLE_AFFINITY_MASKS_NV 0x20D0
#define ERROR_INCOMPATIBLE_DEVICE_CONTEXTS_ARB 0x2054
#define ERROR_INVALID_PIXEL_TYPE_ARB 0x2043
#define ERROR_INVALID_PIXEL_TYPE_EXT 0x2043
#define ERROR_INVALID_PROFILE_ARB 0x2096
#define ERROR_INVALID_VERSION_ARB 0x2095
#define ERROR_MISSING_AFFINITY_MASK_NV 0x20D1
#define WGL_ACCELERATION_ARB 0x2003
#define WGL_ACCELERATION_EXT 0x2003
#define WGL_ACCESS_READ_ONLY_NV 0x00000000
#define WGL_ACCESS_READ_WRITE_NV 0x00000001
#define WGL_ACCESS_WRITE_DISCARD_NV 0x00000002
#define WGL_ACCUM_ALPHA_BITS_ARB 0x2021
#define WGL_ACCUM_ALPHA_BITS_EXT 0x2021
#define WGL_ACCUM_BITS_ARB 0x201D
#define WGL_ACCUM_BITS_EXT 0x201D
#define WGL_ACCUM_BLUE_BITS_ARB 0x2020
#define WGL_ACCUM_BLUE_BITS_EXT 0x2020
#define WGL_ACCUM_GREEN_BITS_ARB 0x201F
#define WGL_ACCUM_GREEN_BITS_EXT 0x201F
#define WGL_ACCUM_RED_BITS_ARB 0x201E
#define WGL_ACCUM_RED_BITS_EXT 0x201E
#define WGL_ALPHA_BITS_ARB 0x201B
#define WGL_ALPHA_BITS_EXT 0x201B
#define WGL_ALPHA_SHIFT_ARB 0x201C
#define WGL_ALPHA_SHIFT_EXT 0x201C
#define WGL_AUX0_ARB 0x2087
#define WGL_AUX1_ARB 0x2088
#define WGL_AUX2_ARB 0x2089
#define WGL_AUX3_ARB 0x208A
#define WGL_AUX4_ARB 0x208B
#define WGL_AUX5_ARB 0x208C
#define WGL_AUX6_ARB 0x208D
#define WGL_AUX7_ARB 0x208E
#define WGL_AUX8_ARB 0x208F
#define WGL_AUX9_ARB 0x2090
#define WGL_AUX_BUFFERS_ARB 0x2024
#define WGL_AUX_BUFFERS_EXT 0x2024
#define WGL_BACK_COLOR_BUFFER_BIT_ARB 0x00000002
#define WGL_BACK_LEFT_ARB 0x2085
#define WGL_BACK_RIGHT_ARB 0x2086
#define WGL_BIND_TO_TEXTURE_DEPTH_NV 0x20A3
#define WGL_BIND_TO_TEXTURE_RECTANGLE_DEPTH_NV 0x20A4
#define WGL_BIND_TO_TEXTURE_RECTANGLE_FLOAT_RGBA_NV 0x20B4
#define WGL_BIND_TO_TEXTURE_RECTANGLE_FLOAT_RGB_NV 0x20B3
#define WGL_BIND_TO_TEXTURE_RECTANGLE_FLOAT_RG_NV 0x20B2
#define WGL_BIND_TO_TEXTURE_RECTANGLE_FLOAT_R_NV 0x20B1
#define WGL_BIND_TO_TEXTURE_RECTANGLE_RGBA_NV 0x20A1
#define WGL_BIND_TO_TEXTURE_RECTANGLE_RGB_NV 0x20A0
#define WGL_BIND_TO_TEXTURE_RGBA_ARB 0x2071
#define WGL_BIND_TO_TEXTURE_RGB_ARB 0x2070
#define WGL_BIND_TO_VIDEO_RGBA_NV 0x20C1
#define WGL_BIND_TO_VIDEO_RGB_AND_DEPTH_NV 0x20C2
#define WGL_BIND_TO_VIDEO_RGB_NV 0x20C0
#define WGL_BLUE_BITS_ARB 0x2019
#define WGL_BLUE_BITS_EXT 0x2019
#define WGL_BLUE_SHIFT_ARB 0x201A
#define WGL_BLUE_SHIFT_EXT 0x201A
#define WGL_COLORSPACE_EXT 0x309D
#define WGL_COLORSPACE_LINEAR_EXT 0x308A
#define WGL_COLORSPACE_SRGB_EXT 0x3089
#define WGL_COLOR_BITS_ARB 0x2014
#define WGL_COLOR_BITS_EXT 0x2014
#define WGL_COLOR_SAMPLES_NV 0x20B9
#define WGL_CONTEXT_COMPATIBILITY_PROFILE_BIT_ARB 0x00000002
#define WGL_CONTEXT_CORE_PROFILE_BIT_ARB 0x00000001
#define WGL_CONTEXT_DEBUG_BIT_ARB 0x00000001
#define WGL_CONTEXT_ES2_PROFILE_BIT_EXT 0x00000004
#define WGL_CONTEXT_ES_PROFILE_BIT_EXT 0x00000004
#define WGL_CONTEXT_FLAGS_ARB 0x2094
#define WGL_CONTEXT_FORWARD_COMPATIBLE_BIT_ARB 0x00000002
#define WGL_CONTEXT_LAYER_PLANE_ARB 0x2093
#define WGL_CONTEXT_MAJOR_VERSION_ARB 0x2091
#define WGL_CONTEXT_MINOR_VERSION_ARB 0x2092
#define WGL_CONTEXT_MULTIGPU_ATTRIB_AFR_NV 0x20AC
#define WGL_CONTEXT_MULTIGPU_ATTRIB_MULTICAST_NV 0x20AD
#define WGL_CONTEXT_MULTIGPU_ATTRIB_MULTI_DISPLAY_MULTICAST_NV 0x20AE
#define WGL_CONTEXT_MULTIGPU_ATTRIB_NV 0x20AA
#define WGL_CONTEXT_MULTIGPU_ATTRIB_SINGLE_NV 0x20AB
#define WGL_CONTEXT_OPENGL_NO_ERROR_ARB 0x31B3
#define WGL_CONTEXT_PROFILE_MASK_ARB 0x9126
#define WGL_CONTEXT_RELEASE_BEHAVIOR_ARB 0x2097
#define WGL_CONTEXT_RELEASE_BEHAVIOR_FLUSH_ARB 0x2098
#define WGL_CONTEXT_RELEASE_BEHAVIOR_NONE_ARB 0
#define WGL_CONTEXT_RESET_ISOLATION_BIT_ARB 0x00000008
#define WGL_CONTEXT_RESET_NOTIFICATION_STRATEGY_ARB 0x8256
#define WGL_CONTEXT_ROBUST_ACCESS_BIT_ARB 0x00000004
#define WGL_COVERAGE_SAMPLES_NV 0x2042
#define WGL_CUBE_MAP_FACE_ARB 0x207C
#define WGL_DEPTH_BITS_ARB 0x2022
#define WGL_DEPTH_BITS_EXT 0x2022
#define WGL_DEPTH_BUFFER_BIT_ARB 0x00000004
#define WGL_DEPTH_COMPONENT_NV 0x20A7
#define WGL_DEPTH_FLOAT_EXT 0x2040
#define WGL_DEPTH_TEXTURE_FORMAT_NV 0x20A5
#define WGL_DIGITAL_VIDEO_CURSOR_ALPHA_FRAMEBUFFER_I3D 0x2050
#define WGL_DIGITAL_VIDEO_CURSOR_ALPHA_VALUE_I3D 0x2051
#define WGL_DIGITAL_VIDEO_CURSOR_INCLUDED_I3D 0x2052
#define WGL_DIGITAL_VIDEO_GAMMA_CORRECTED_I3D 0x2053
#define WGL_DOUBLE_BUFFER_ARB 0x2011
#define WGL_DOUBLE_BUFFER_EXT 0x2011
#define WGL_DRAW_TO_BITMAP_ARB 0x2002
#define WGL_DRAW_TO_BITMAP_EXT 0x2002
#define WGL_DRAW_TO_PBUFFER_ARB 0x202D
#define WGL_DRAW_TO_PBUFFER_EXT 0x202D
#define WGL_DRAW_TO_WINDOW_ARB 0x2001
#define WGL_DRAW_TO_WINDOW_EXT 0x2001
#define WGL_FLOAT_COMPONENTS_NV 0x20B0
#define WGL_FONT_LINES 0
#define WGL_FONT_POLYGONS 1
#define WGL_FRAMEBUFFER_SRGB_CAPABLE_ARB 0x20A9
#define WGL_FRAMEBUFFER_SRGB_CAPABLE_EXT 0x20A9
#define WGL_FRONT_COLOR_BUFFER_BIT_ARB 0x00000001
#define WGL_FRONT_LEFT_ARB 0x2083
#define WGL_FRONT_RIGHT_ARB 0x2084
#define WGL_FULL_ACCELERATION_ARB 0x2027
#define WGL_FULL_ACCELERATION_EXT 0x2027
#define WGL_GAMMA_EXCLUDE_DESKTOP_I3D 0x204F
#define WGL_GAMMA_TABLE_SIZE_I3D 0x204E
#define WGL_GENERIC_ACCELERATION_ARB 0x2026
#define WGL_GENERIC_ACCELERATION_EXT 0x2026
#define WGL_GENLOCK_SOURCE_DIGITAL_FIELD_I3D 0x2049
#define WGL_GENLOCK_SOURCE_DIGITAL_SYNC_I3D 0x2048
#define WGL_GENLOCK_SOURCE_EDGE_BOTH_I3D 0x204C
#define WGL_GENLOCK_SOURCE_EDGE_FALLING_I3D 0x204A
#define WGL_GENLOCK_SOURCE_EDGE_RISING_I3D 0x204B
#define WGL_GENLOCK_SOURCE_EXTERNAL_FIELD_I3D 0x2046
#define WGL_GENLOCK_SOURCE_EXTERNAL_SYNC_I3D 0x2045
#define WGL_GENLOCK_SOURCE_EXTERNAL_TTL_I3D 0x2047
#define WGL_GENLOCK_SOURCE_MULTIVIEW_I3D 0x2044
#define WGL_GPU_CLOCK_AMD 0x21A4
#define WGL_GPU_FASTEST_TARGET_GPUS_AMD 0x21A2
#define WGL_GPU_NUM_PIPES_AMD 0x21A5
#define WGL_GPU_NUM_RB_AMD 0x21A7
#define WGL_GPU_NUM_SIMD_AMD 0x21A6
#define WGL_GPU_NUM_SPI_AMD 0x21A8
#define WGL_GPU_OPENGL_VERSION_STRING_AMD 0x1F02
#define WGL_GPU_RAM_AMD 0x21A3
#define WGL_GPU_RENDERER_STRING_AMD 0x1F01
#define WGL_GPU_VENDOR_AMD 0x1F00
#define WGL_GREEN_BITS_ARB 0x2017
#define WGL_GREEN_BITS_EXT 0x2017
#define WGL_GREEN_SHIFT_ARB 0x2018
#define WGL_GREEN_SHIFT_EXT 0x2018
#define WGL_IMAGE_BUFFER_LOCK_I3D 0x00000002
#define WGL_IMAGE_BUFFER_MIN_ACCESS_I3D 0x00000001
#define WGL_LOSE_CONTEXT_ON_RESET_ARB 0x8252
#define WGL_MAX_PBUFFER_HEIGHT_ARB 0x2030
#define WGL_MAX_PBUFFER_HEIGHT_EXT 0x2030
#define WGL_MAX_PBUFFER_PIXELS_ARB 0x202E
#define WGL_MAX_PBUFFER_PIXELS_EXT 0x202E
#define WGL_MAX_PBUFFER_WIDTH_ARB 0x202F
#define WGL_MAX_PBUFFER_WIDTH_EXT 0x202F
#define WGL_MIPMAP_LEVEL_ARB 0x207B
#define WGL_MIPMAP_TEXTURE_ARB 0x2074
#define WGL_NEED_PALETTE_ARB 0x2004
#define WGL_NEED_PALETTE_EXT 0x2004
#define WGL_NEED_SYSTEM_PALETTE_ARB 0x2005
#define WGL_NEED_SYSTEM_PALETTE_EXT 0x2005
#define WGL_NO_ACCELERATION_ARB 0x2025
#define WGL_NO_ACCELERATION_EXT 0x2025
#define WGL_NO_RESET_NOTIFICATION_ARB 0x8261
#define WGL_NO_TEXTURE_ARB 0x2077
#define WGL_NUMBER_OVERLAYS_ARB 0x2008
#define WGL_NUMBER_OVERLAYS_EXT 0x2008
#define WGL_NUMBER_PIXEL_FORMATS_ARB 0x2000
#define WGL_NUMBER_PIXEL_FORMATS_EXT 0x2000
#define WGL_NUMBER_UNDERLAYS_ARB 0x2009
#define WGL_NUMBER_UNDERLAYS_EXT 0x2009
#define WGL_NUM_VIDEO_CAPTURE_SLOTS_NV 0x20CF
#define WGL_NUM_VIDEO_SLOTS_NV 0x20F0
#define WGL_OPTIMAL_PBUFFER_HEIGHT_EXT 0x2032
#define WGL_OPTIMAL_PBUFFER_WIDTH_EXT 0x2031
#define WGL_PBUFFER_HEIGHT_ARB 0x2035
#define WGL_PBUFFER_HEIGHT_EXT 0x2035
#define WGL_PBUFFER_LARGEST_ARB 0x2033
#define WGL_PBUFFER_LARGEST_EXT 0x2033
#define WGL_PBUFFER_LOST_ARB 0x2036
#define WGL_PBUFFER_WIDTH_ARB 0x2034
#define WGL_PBUFFER_WIDTH_EXT 0x2034
#define WGL_PIXEL_TYPE_ARB 0x2013
#define WGL_PIXEL_TYPE_EXT 0x2013
#define WGL_RED_BITS_ARB 0x2015
#define WGL_RED_BITS_EXT 0x2015
#define WGL_RED_SHIFT_ARB 0x2016
#define WGL_RED_SHIFT_EXT 0x2016
#define WGL_SAMPLES_3DFX 0x2061
#define WGL_SAMPLES_ARB 0x2042
#define WGL_SAMPLES_EXT 0x2042
#define WGL_SAMPLE_BUFFERS_3DFX 0x2060
#define WGL_SAMPLE_BUFFERS_ARB 0x2041
#define WGL_SAMPLE_BUFFERS_EXT 0x2041
#define WGL_SHARE_ACCUM_ARB 0x200E
#define WGL_SHARE_ACCUM_EXT 0x200E
#define WGL_SHARE_DEPTH_ARB 0x200C
#define WGL_SHARE_DEPTH_EXT 0x200C
#define WGL_SHARE_STENCIL_ARB 0x200D
#define WGL_SHARE_STENCIL_EXT 0x200D
#define WGL_STENCIL_BITS_ARB 0x2023
#define WGL_STENCIL_BITS_EXT 0x2023
#define WGL_STENCIL_BUFFER_BIT_ARB 0x00000008
#define WGL_STEREO_ARB 0x2012
#define WGL_STEREO_EMITTER_DISABLE_3DL 0x2056
#define WGL_STEREO_EMITTER_ENABLE_3DL 0x2055
#define WGL_STEREO_EXT 0x2012
#define WGL_STEREO_POLARITY_INVERT_3DL 0x2058
#define WGL_STEREO_POLARITY_NORMAL_3DL 0x2057
#define WGL_SUPPORT_GDI_ARB 0x200F
#define WGL_SUPPORT_GDI_EXT 0x200F
#define WGL_SUPPORT_OPENGL_ARB 0x2010
#define WGL_SUPPORT_OPENGL_EXT 0x2010
#define WGL_SWAP_COPY_ARB 0x2029
#define WGL_SWAP_COPY_EXT 0x2029
#define WGL_SWAP_EXCHANGE_ARB 0x2028
#define WGL_SWAP_EXCHANGE_EXT 0x2028
#define WGL_SWAP_LAYER_BUFFERS_ARB 0x2006
#define WGL_SWAP_LAYER_BUFFERS_EXT 0x2006
#define WGL_SWAP_MAIN_PLANE 0x00000001
#define WGL_SWAP_METHOD_ARB 0x2007
#define WGL_SWAP_METHOD_EXT 0x2007
#define WGL_SWAP_OVERLAY1 0x00000002
#define WGL_SWAP_OVERLAY10 0x00000400
#define WGL_SWAP_OVERLAY11 0x00000800
#define WGL_SWAP_OVERLAY12 0x00001000
#define WGL_SWAP_OVERLAY13 0x00002000
#define WGL_SWAP_OVERLAY14 0x00004000
#define WGL_SWAP_OVERLAY15 0x00008000
#define WGL_SWAP_OVERLAY2 0x00000004
#define WGL_SWAP_OVERLAY3 0x00000008
#define WGL_SWAP_OVERLAY4 0x00000010
#define WGL_SWAP_OVERLAY5 0x00000020
#define WGL_SWAP_OVERLAY6 0x00000040
#define WGL_SWAP_OVERLAY7 0x00000080
#define WGL_SWAP_OVERLAY8 0x00000100
#define WGL_SWAP_OVERLAY9 0x00000200
#define WGL_SWAP_UNDEFINED_ARB 0x202A
#define WGL_SWAP_UNDEFINED_EXT 0x202A
#define WGL_SWAP_UNDERLAY1 0x00010000
#define WGL_SWAP_UNDERLAY10 0x02000000
#define WGL_SWAP_UNDERLAY11 0x04000000
#define WGL_SWAP_UNDERLAY12 0x08000000
#define WGL_SWAP_UNDERLAY13 0x10000000
#define WGL_SWAP_UNDERLAY14 0x20000000
#define WGL_SWAP_UNDERLAY15 0x40000000
#define WGL_SWAP_UNDERLAY2 0x00020000
#define WGL_SWAP_UNDERLAY3 0x00040000
#define WGL_SWAP_UNDERLAY4 0x00080000
#define WGL_SWAP_UNDERLAY5 0x00100000
#define WGL_SWAP_UNDERLAY6 0x00200000
#define WGL_SWAP_UNDERLAY7 0x00400000
#define WGL_SWAP_UNDERLAY8 0x00800000
#define WGL_SWAP_UNDERLAY9 0x01000000
#define WGL_TEXTURE_1D_ARB 0x2079
#define WGL_TEXTURE_2D_ARB 0x207A
#define WGL_TEXTURE_CUBE_MAP_ARB 0x2078
#define WGL_TEXTURE_CUBE_MAP_NEGATIVE_X_ARB 0x207E
#define WGL_TEXTURE_CUBE_MAP_NEGATIVE_Y_ARB 0x2080
#define WGL_TEXTURE_CUBE_MAP_NEGATIVE_Z_ARB 0x2082
#define WGL_TEXTURE_CUBE_MAP_POSITIVE_X_ARB 0x207D
#define WGL_TEXTURE_CUBE_MAP_POSITIVE_Y_ARB 0x207F
#define WGL_TEXTURE_CUBE_MAP_POSITIVE_Z_ARB 0x2081
#define WGL_TEXTURE_DEPTH_COMPONENT_NV 0x20A6
#define WGL_TEXTURE_FLOAT_RGBA_NV 0x20B8
#define WGL_TEXTURE_FLOAT_RGB_NV 0x20B7
#define WGL_TEXTURE_FLOAT_RG_NV 0x20B6
#define WGL_TEXTURE_FLOAT_R_NV 0x20B5
#define WGL_TEXTURE_FORMAT_ARB 0x2072
#define WGL_TEXTURE_RECTANGLE_ATI 0x21A5
#define WGL_TEXTURE_RECTANGLE_NV 0x20A2
#define WGL_TEXTURE_RGBA_ARB 0x2076
#define WGL_TEXTURE_RGB_ARB 0x2075
#define WGL_TEXTURE_TARGET_ARB 0x2073
#define WGL_TRANSPARENT_ALPHA_VALUE_ARB 0x203A
#define WGL_TRANSPARENT_ARB 0x200A
#define WGL_TRANSPARENT_BLUE_VALUE_ARB 0x2039
#define WGL_TRANSPARENT_EXT 0x200A
#define WGL_TRANSPARENT_GREEN_VALUE_ARB 0x2038
#define WGL_TRANSPARENT_INDEX_VALUE_ARB 0x203B
#define WGL_TRANSPARENT_RED_VALUE_ARB 0x2037
#define WGL_TRANSPARENT_VALUE_EXT 0x200B
#define WGL_TYPE_COLORINDEX_ARB 0x202C
#define WGL_TYPE_COLORINDEX_EXT 0x202C
#define WGL_TYPE_RGBA_ARB 0x202B
#define WGL_TYPE_RGBA_EXT 0x202B
#define WGL_TYPE_RGBA_FLOAT_ARB 0x21A0
#define WGL_TYPE_RGBA_FLOAT_ATI 0x21A0
#define WGL_TYPE_RGBA_UNSIGNED_FLOAT_EXT 0x20A8
#define WGL_UNIQUE_ID_NV 0x20CE
#define WGL_VIDEO_OUT_ALPHA_NV 0x20C4
#define WGL_VIDEO_OUT_COLOR_AND_ALPHA_NV 0x20C6
#define WGL_VIDEO_OUT_COLOR_AND_DEPTH_NV 0x20C7
#define WGL_VIDEO_OUT_COLOR_NV 0x20C3
#define WGL_VIDEO_OUT_DEPTH_NV 0x20C5
#define WGL_VIDEO_OUT_FIELD_1 0x20C9
#define WGL_VIDEO_OUT_FIELD_2 0x20CA
#define WGL_VIDEO_OUT_FRAME 0x20C8
#define WGL_VIDEO_OUT_STACKED_FIELDS_1_2 0x20CB
#define WGL_VIDEO_OUT_STACKED_FIELDS_2_1 0x20CC

struct _GPU_DEVICE {
  DWORD cb;
  CHAR DeviceName[32];
  CHAR DeviceString[128];
  DWORD Flags;
  RECT rcVirtualScreen;
};
DECLARE_HANDLE (HPBUFFERARB);
DECLARE_HANDLE (HPBUFFEREXT);
DECLARE_HANDLE (HVIDEOOUTPUTDEVICENV);
DECLARE_HANDLE (HPVIDEODEV);
DECLARE_HANDLE (HPGPUNV);
DECLARE_HANDLE (HGPUNV);
DECLARE_HANDLE (HVIDEOINPUTDEVICENV);
typedef struct _GPU_DEVICE GPU_DEVICE;
typedef struct _GPU_DEVICE* PGPU_DEVICE;

#define WGL_VERSION_1_0 1
GLEXT_API_CALL int GLEXT_WGL_VERSION_1_0;
#define WGL_3DFX_multisample 1
GLEXT_API_CALL int GLEXT_WGL_3DFX_multisample;
#define WGL_3DL_stereo_control 1
GLEXT_API_CALL int GLEXT_WGL_3DL_stereo_control;
#define WGL_AMD_gpu_association 1
GLEXT_API_CALL int GLEXT_WGL_AMD_gpu_association;
#define WGL_ARB_buffer_region 1
GLEXT_API_CALL int GLEXT_WGL_ARB_buffer_region;
#define WGL_ARB_context_flush_control 1
GLEXT_API_CALL int GLEXT_WGL_ARB_context_flush_control;
#define WGL_ARB_create_context 1
GLEXT_API_CALL int GLEXT_WGL_ARB_create_context;
#define WGL_ARB_create_context_no_error 1
GLEXT_API_CALL int GLEXT_WGL_ARB_create_context_no_error;
#define WGL_ARB_create_context_profile 1
GLEXT_API_CALL int GLEXT_WGL_ARB_create_context_profile;
#define WGL_ARB_create_context_robustness 1
GLEXT_API_CALL int GLEXT_WGL_ARB_create_context_robustness;
#define WGL_ARB_extensions_string 1
GLEXT_API_CALL int GLEXT_WGL_ARB_extensions_string;
#define WGL_ARB_framebuffer_sRGB 1
GLEXT_API_CALL int GLEXT_WGL_ARB_framebuffer_sRGB;
#define WGL_ARB_make_current_read 1
GLEXT_API_CALL int GLEXT_WGL_ARB_make_current_read;
#define WGL_ARB_multisample 1
GLEXT_API_CALL int GLEXT_WGL_ARB_multisample;
#define WGL_ARB_pbuffer 1
GLEXT_API_CALL int GLEXT_WGL_ARB_pbuffer;
#define WGL_ARB_pixel_format 1
GLEXT_API_CALL int GLEXT_WGL_ARB_pixel_format;
#define WGL_ARB_pixel_format_float 1
GLEXT_API_CALL int GLEXT_WGL_ARB_pixel_format_float;
#define WGL_ARB_render_texture 1
GLEXT_API_CALL int GLEXT_WGL_ARB_render_texture;
#define WGL_ARB_robustness_application_isolation 1
GLEXT_API_CALL int GLEXT_WGL_ARB_robustness_application_isolation;
#define WGL_ARB_robustness_share_group_isolation 1
GLEXT_API_CALL int GLEXT_WGL_ARB_robustness_share_group_isolation;
#define WGL_ATI_pixel_format_float 1
GLEXT_API_CALL int GLEXT_WGL_ATI_pixel_format_float;
#define WGL_ATI_render_texture_rectangle 1
GLEXT_API_CALL int GLEXT_WGL_ATI_render_texture_rectangle;
#define WGL_EXT_colorspace 1
GLEXT_API_CALL int GLEXT_WGL_EXT_colorspace;
#define WGL_EXT_create_context_es2_profile 1
GLEXT_API_CALL int GLEXT_WGL_EXT_create_context_es2_profile;
#define WGL_EXT_create_context_es_profile 1
GLEXT_API_CALL int GLEXT_WGL_EXT_create_context_es_profile;
#define WGL_EXT_depth_float 1
GLEXT_API_CALL int GLEXT_WGL_EXT_depth_float;
#define WGL_EXT_display_color_table 1
GLEXT_API_CALL int GLEXT_WGL_EXT_display_color_table;
#define WGL_EXT_extensions_string 1
GLEXT_API_CALL int GLEXT_WGL_EXT_extensions_string;
#define WGL_EXT_framebuffer_sRGB 1
GLEXT_API_CALL int GLEXT_WGL_EXT_framebuffer_sRGB;
#define WGL_EXT_make_current_read 1
GLEXT_API_CALL int GLEXT_WGL_EXT_make_current_read;
#define WGL_EXT_multisample 1
GLEXT_API_CALL int GLEXT_WGL_EXT_multisample;
#define WGL_EXT_pbuffer 1
GLEXT_API_CALL int GLEXT_WGL_EXT_pbuffer;
#define WGL_EXT_pixel_format 1
GLEXT_API_CALL int GLEXT_WGL_EXT_pixel_format;
#define WGL_EXT_pixel_format_packed_float 1
GLEXT_API_CALL int GLEXT_WGL_EXT_pixel_format_packed_float;
#define WGL_EXT_swap_control 1
GLEXT_API_CALL int GLEXT_WGL_EXT_swap_control;
#define WGL_EXT_swap_control_tear 1
GLEXT_API_CALL int GLEXT_WGL_EXT_swap_control_tear;
#define WGL_I3D_digital_video_control 1
GLEXT_API_CALL int GLEXT_WGL_I3D_digital_video_control;
#define WGL_I3D_gamma 1
GLEXT_API_CALL int GLEXT_WGL_I3D_gamma;
#define WGL_I3D_genlock 1
GLEXT_API_CALL int GLEXT_WGL_I3D_genlock;
#define WGL_I3D_image_buffer 1
GLEXT_API_CALL int GLEXT_WGL_I3D_image_buffer;
#define WGL_I3D_swap_frame_lock 1
GLEXT_API_CALL int GLEXT_WGL_I3D_swap_frame_lock;
#define WGL_I3D_swap_frame_usage 1
GLEXT_API_CALL int GLEXT_WGL_I3D_swap_frame_usage;
#define WGL_NV_DX_interop 1
GLEXT_API_CALL int GLEXT_WGL_NV_DX_interop;
#define WGL_NV_DX_interop2 1
GLEXT_API_CALL int GLEXT_WGL_NV_DX_interop2;
#define WGL_NV_copy_image 1
GLEXT_API_CALL int GLEXT_WGL_NV_copy_image;
#define WGL_NV_delay_before_swap 1
GLEXT_API_CALL int GLEXT_WGL_NV_delay_before_swap;
#define WGL_NV_float_buffer 1
GLEXT_API_CALL int GLEXT_WGL_NV_float_buffer;
#define WGL_NV_gpu_affinity 1
GLEXT_API_CALL int GLEXT_WGL_NV_gpu_affinity;
#define WGL_NV_multigpu_context 1
GLEXT_API_CALL int GLEXT_WGL_NV_multigpu_context;
#define WGL_NV_multisample_coverage 1
GLEXT_API_CALL int GLEXT_WGL_NV_multisample_coverage;
#define WGL_NV_present_video 1
GLEXT_API_CALL int GLEXT_WGL_NV_present_video;
#define WGL_NV_render_depth_texture 1
GLEXT_API_CALL int GLEXT_WGL_NV_render_depth_texture;
#define WGL_NV_render_texture_rectangle 1
GLEXT_API_CALL int GLEXT_WGL_NV_render_texture_rectangle;
#define WGL_NV_swap_group 1
GLEXT_API_CALL int GLEXT_WGL_NV_swap_group;
#define WGL_NV_vertex_array_range 1
GLEXT_API_CALL int GLEXT_WGL_NV_vertex_array_range;
#define WGL_NV_video_capture 1
GLEXT_API_CALL int GLEXT_WGL_NV_video_capture;
#define WGL_NV_video_output 1
GLEXT_API_CALL int GLEXT_WGL_NV_video_output;
#define WGL_OML_sync_control 1
GLEXT_API_CALL int GLEXT_WGL_OML_sync_control;

typedef int (GLEXT_API_PTR* PFNCHOOSEPIXELFORMATPROC) (
  HDC hDc, const PIXELFORMATDESCRIPTOR* pPfd);
typedef int (GLEXT_API_PTR* PFNDESCRIBEPIXELFORMATPROC) (
  HDC hdc, int ipfd, UINT cjpfd, PIXELFORMATDESCRIPTOR* ppfd);
typedef UINT (GLEXT_API_PTR* PFNGETENHMETAFILEPIXELFORMATPROC) (
  HENHMETAFILE hemf, UINT cbBuffer, PIXELFORMATDESCRIPTOR* ppfd);
typedef int (GLEXT_API_PTR* PFNGETPIXELFORMATPROC) (HDC hdc);
typedef BOOL (GLEXT_API_PTR* PFNSETPIXELFORMATPROC) (
  HDC hdc, int ipfd, const PIXELFORMATDESCRIPTOR* ppfd);
typedef BOOL (GLEXT_API_PTR* PFNSWAPBUFFERSPROC) (HDC hdc);
typedef void*(GLEXT_API_PTR* PFNWGLALLOCATEMEMORYNVPROC) (GLsizei size,
                                                          GLfloat readfreq,
                                                          GLfloat writefreq,
                                                          GLfloat priority);
typedef BOOL (GLEXT_API_PTR* PFNWGLASSOCIATEIMAGEBUFFEREVENTSI3DPROC) (
  HDC hDC, const HANDLE* pEvent, const LPVOID* pAddress, const DWORD* pSize,
  UINT count);
typedef BOOL (GLEXT_API_PTR* PFNWGLBEGINFRAMETRACKINGI3DPROC) (void);
typedef GLboolean (GLEXT_API_PTR* PFNWGLBINDDISPLAYCOLORTABLEEXTPROC) (
  GLushort id);
typedef BOOL (GLEXT_API_PTR* PFNWGLBINDSWAPBARRIERNVPROC) (GLuint group,
                                                           GLuint barrier);
typedef BOOL (GLEXT_API_PTR* PFNWGLBINDTEXIMAGEARBPROC) (HPBUFFERARB hPbuffer,
                                                         int iBuffer);
typedef BOOL (GLEXT_API_PTR* PFNWGLBINDVIDEOCAPTUREDEVICENVPROC) (
  UINT uVideoSlot, HVIDEOINPUTDEVICENV hDevice);
typedef BOOL (GLEXT_API_PTR* PFNWGLBINDVIDEODEVICENVPROC) (
  HDC hDc, unsigned int uVideoSlot, HVIDEOOUTPUTDEVICENV hVideoDevice,
  const int* piAttribList);
typedef BOOL (GLEXT_API_PTR* PFNWGLBINDVIDEOIMAGENVPROC) (
  HPVIDEODEV hVideoDevice, HPBUFFERARB hPbuffer, int iVideoBuffer);
typedef VOID (GLEXT_API_PTR* PFNWGLBLITCONTEXTFRAMEBUFFERAMDPROC) (
  HGLRC dstCtx, GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1,
  GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask,
  GLenum filter);
typedef BOOL (GLEXT_API_PTR* PFNWGLCHOOSEPIXELFORMATARBPROC) (
  HDC hdc, const int* piAttribIList, const FLOAT* pfAttribFList,
  UINT nMaxFormats, int* piFormats, UINT* nNumFormats);
typedef BOOL (GLEXT_API_PTR* PFNWGLCHOOSEPIXELFORMATEXTPROC) (
  HDC hdc, const int* piAttribIList, const FLOAT* pfAttribFList,
  UINT nMaxFormats, int* piFormats, UINT* nNumFormats);
typedef BOOL (GLEXT_API_PTR* PFNWGLCOPYCONTEXTPROC) (HGLRC hglrcSrc,
                                                     HGLRC hglrcDst,
                                                     UINT mask);
typedef BOOL (GLEXT_API_PTR* PFNWGLCOPYIMAGESUBDATANVPROC) (
  HGLRC hSrcRC, GLuint srcName, GLenum srcTarget, GLint srcLevel, GLint srcX,
  GLint srcY, GLint srcZ, HGLRC hDstRC, GLuint dstName, GLenum dstTarget,
  GLint dstLevel, GLint dstX, GLint dstY, GLint dstZ, GLsizei width,
  GLsizei height, GLsizei depth);
typedef HDC (GLEXT_API_PTR* PFNWGLCREATEAFFINITYDCNVPROC) (
  const HGPUNV* phGpuList);
typedef HGLRC (GLEXT_API_PTR* PFNWGLCREATEASSOCIATEDCONTEXTAMDPROC) (UINT id);
typedef HGLRC (GLEXT_API_PTR* PFNWGLCREATEASSOCIATEDCONTEXTATTRIBSAMDPROC) (
  UINT id, HGLRC hShareContext, const int* attribList);
typedef HANDLE (GLEXT_API_PTR* PFNWGLCREATEBUFFERREGIONARBPROC) (
  HDC hDC, int iLayerPlane, UINT uType);
typedef HGLRC (GLEXT_API_PTR* PFNWGLCREATECONTEXTPROC) (HDC hDc);
typedef HGLRC (GLEXT_API_PTR* PFNWGLCREATECONTEXTATTRIBSARBPROC) (
  HDC hDC, HGLRC hShareContext, const int* attribList);
typedef GLboolean (GLEXT_API_PTR* PFNWGLCREATEDISPLAYCOLORTABLEEXTPROC) (
  GLushort id);
typedef LPVOID (GLEXT_API_PTR* PFNWGLCREATEIMAGEBUFFERI3DPROC) (HDC hDC,
                                                                DWORD dwSize,
                                                                UINT uFlags);
typedef HGLRC (GLEXT_API_PTR* PFNWGLCREATELAYERCONTEXTPROC) (HDC hDc,
                                                             int level);
typedef HPBUFFERARB (GLEXT_API_PTR* PFNWGLCREATEPBUFFERARBPROC) (
  HDC hDC, int iPixelFormat, int iWidth, int iHeight, const int* piAttribList);
typedef HPBUFFEREXT (GLEXT_API_PTR* PFNWGLCREATEPBUFFEREXTPROC) (
  HDC hDC, int iPixelFormat, int iWidth, int iHeight, const int* piAttribList);
typedef BOOL (GLEXT_API_PTR* PFNWGLDXCLOSEDEVICENVPROC) (HANDLE hDevice);
typedef BOOL (GLEXT_API_PTR* PFNWGLDXLOCKOBJECTSNVPROC) (HANDLE hDevice,
                                                         GLint count,
                                                         HANDLE* hObjects);
typedef BOOL (GLEXT_API_PTR* PFNWGLDXOBJECTACCESSNVPROC) (HANDLE hObject,
                                                          GLenum access);
typedef HANDLE (GLEXT_API_PTR* PFNWGLDXOPENDEVICENVPROC) (void* dxDevice);
typedef HANDLE (GLEXT_API_PTR* PFNWGLDXREGISTEROBJECTNVPROC) (
  HANDLE hDevice, void* dxObject, GLuint name, GLenum type, GLenum access);
typedef BOOL (GLEXT_API_PTR* PFNWGLDXSETRESOURCESHAREHANDLENVPROC) (
  void* dxObject, HANDLE shareHandle);
typedef BOOL (GLEXT_API_PTR* PFNWGLDXUNLOCKOBJECTSNVPROC) (HANDLE hDevice,
                                                           GLint count,
                                                           HANDLE* hObjects);
typedef BOOL (GLEXT_API_PTR* PFNWGLDXUNREGISTEROBJECTNVPROC) (HANDLE hDevice,
                                                              HANDLE hObject);
typedef BOOL (GLEXT_API_PTR* PFNWGLDELAYBEFORESWAPNVPROC) (HDC hDC,
                                                           GLfloat seconds);
typedef BOOL (GLEXT_API_PTR* PFNWGLDELETEASSOCIATEDCONTEXTAMDPROC) (
  HGLRC hglrc);
typedef VOID (GLEXT_API_PTR* PFNWGLDELETEBUFFERREGIONARBPROC) (HANDLE hRegion);
typedef BOOL (GLEXT_API_PTR* PFNWGLDELETECONTEXTPROC) (HGLRC oldContext);
typedef BOOL (GLEXT_API_PTR* PFNWGLDELETEDCNVPROC) (HDC hdc);
typedef BOOL (GLEXT_API_PTR* PFNWGLDESCRIBELAYERPLANEPROC) (
  HDC hDc, int pixelFormat, int layerPlane, UINT nBytes,
  LAYERPLANEDESCRIPTOR* plpd);
typedef VOID (GLEXT_API_PTR* PFNWGLDESTROYDISPLAYCOLORTABLEEXTPROC) (
  GLushort id);
typedef BOOL (GLEXT_API_PTR* PFNWGLDESTROYIMAGEBUFFERI3DPROC) (
  HDC hDC, LPVOID pAddress);
typedef BOOL (GLEXT_API_PTR* PFNWGLDESTROYPBUFFERARBPROC) (
  HPBUFFERARB hPbuffer);
typedef BOOL (GLEXT_API_PTR* PFNWGLDESTROYPBUFFEREXTPROC) (
  HPBUFFEREXT hPbuffer);
typedef BOOL (GLEXT_API_PTR* PFNWGLDISABLEFRAMELOCKI3DPROC) (void);
typedef BOOL (GLEXT_API_PTR* PFNWGLDISABLEGENLOCKI3DPROC) (HDC hDC);
typedef BOOL (GLEXT_API_PTR* PFNWGLENABLEFRAMELOCKI3DPROC) (void);
typedef BOOL (GLEXT_API_PTR* PFNWGLENABLEGENLOCKI3DPROC) (HDC hDC);
typedef BOOL (GLEXT_API_PTR* PFNWGLENDFRAMETRACKINGI3DPROC) (void);
typedef BOOL (GLEXT_API_PTR* PFNWGLENUMGPUDEVICESNVPROC) (
  HGPUNV hGpu, UINT iDeviceIndex, PGPU_DEVICE lpGpuDevice);
typedef BOOL (GLEXT_API_PTR* PFNWGLENUMGPUSFROMAFFINITYDCNVPROC) (
  HDC hAffinityDC, UINT iGpuIndex, HGPUNV* hGpu);
typedef BOOL (GLEXT_API_PTR* PFNWGLENUMGPUSNVPROC) (UINT iGpuIndex,
                                                    HGPUNV* phGpu);
typedef UINT (GLEXT_API_PTR* PFNWGLENUMERATEVIDEOCAPTUREDEVICESNVPROC) (
  HDC hDc, HVIDEOINPUTDEVICENV* phDeviceList);
typedef int (GLEXT_API_PTR* PFNWGLENUMERATEVIDEODEVICESNVPROC) (
  HDC hDc, HVIDEOOUTPUTDEVICENV* phDeviceList);
typedef void (GLEXT_API_PTR* PFNWGLFREEMEMORYNVPROC) (void* pointer);
typedef BOOL (GLEXT_API_PTR* PFNWGLGENLOCKSAMPLERATEI3DPROC) (HDC hDC,
                                                              UINT uRate);
typedef BOOL (GLEXT_API_PTR* PFNWGLGENLOCKSOURCEDELAYI3DPROC) (HDC hDC,
                                                               UINT uDelay);
typedef BOOL (GLEXT_API_PTR* PFNWGLGENLOCKSOURCEEDGEI3DPROC) (HDC hDC,
                                                              UINT uEdge);
typedef BOOL (GLEXT_API_PTR* PFNWGLGENLOCKSOURCEI3DPROC) (HDC hDC,
                                                          UINT uSource);
typedef UINT (GLEXT_API_PTR* PFNWGLGETCONTEXTGPUIDAMDPROC) (HGLRC hglrc);
typedef HGLRC (GLEXT_API_PTR* PFNWGLGETCURRENTASSOCIATEDCONTEXTAMDPROC) (void);
typedef HGLRC (GLEXT_API_PTR* PFNWGLGETCURRENTCONTEXTPROC) (void);
typedef HDC (GLEXT_API_PTR* PFNWGLGETCURRENTDCPROC) (void);
typedef HDC (GLEXT_API_PTR* PFNWGLGETCURRENTREADDCARBPROC) (void);
typedef HDC (GLEXT_API_PTR* PFNWGLGETCURRENTREADDCEXTPROC) (void);
typedef BOOL (GLEXT_API_PTR* PFNWGLGETDIGITALVIDEOPARAMETERSI3DPROC) (
  HDC hDC, int iAttribute, int* piValue);
typedef const char*(GLEXT_API_PTR* PFNWGLGETEXTENSIONSSTRINGARBPROC) (HDC hdc);
typedef const char*(GLEXT_API_PTR* PFNWGLGETEXTENSIONSSTRINGEXTPROC) (void);
typedef BOOL (GLEXT_API_PTR* PFNWGLGETFRAMEUSAGEI3DPROC) (float* pUsage);
typedef UINT (GLEXT_API_PTR* PFNWGLGETGPUIDSAMDPROC) (UINT maxCount,
                                                      UINT* ids);
typedef INT (GLEXT_API_PTR* PFNWGLGETGPUINFOAMDPROC) (UINT id, INT property,
                                                      GLenum dataType,
                                                      UINT size, void* data);
typedef BOOL (GLEXT_API_PTR* PFNWGLGETGAMMATABLEI3DPROC) (
  HDC hDC, int iEntries, USHORT* puRed, USHORT* puGreen, USHORT* puBlue);
typedef BOOL (GLEXT_API_PTR* PFNWGLGETGAMMATABLEPARAMETERSI3DPROC) (
  HDC hDC, int iAttribute, int* piValue);
typedef BOOL (GLEXT_API_PTR* PFNWGLGETGENLOCKSAMPLERATEI3DPROC) (HDC hDC,
                                                                 UINT* uRate);
typedef BOOL (GLEXT_API_PTR* PFNWGLGETGENLOCKSOURCEDELAYI3DPROC) (
  HDC hDC, UINT* uDelay);
typedef BOOL (GLEXT_API_PTR* PFNWGLGETGENLOCKSOURCEEDGEI3DPROC) (HDC hDC,
                                                                 UINT* uEdge);
typedef BOOL (GLEXT_API_PTR* PFNWGLGETGENLOCKSOURCEI3DPROC) (HDC hDC,
                                                             UINT* uSource);
typedef int (GLEXT_API_PTR* PFNWGLGETLAYERPALETTEENTRIESPROC) (
  HDC hdc, int iLayerPlane, int iStart, int cEntries, COLORREF* pcr);
typedef BOOL (GLEXT_API_PTR* PFNWGLGETMSCRATEOMLPROC) (HDC hdc,
                                                       INT32* numerator,
                                                       INT32* denominator);
typedef HDC (GLEXT_API_PTR* PFNWGLGETPBUFFERDCARBPROC) (HPBUFFERARB hPbuffer);
typedef HDC (GLEXT_API_PTR* PFNWGLGETPBUFFERDCEXTPROC) (HPBUFFEREXT hPbuffer);
typedef BOOL (GLEXT_API_PTR* PFNWGLGETPIXELFORMATATTRIBFVARBPROC) (
  HDC hdc, int iPixelFormat, int iLayerPlane, UINT nAttributes,
  const int* piAttributes, FLOAT* pfValues);
typedef BOOL (GLEXT_API_PTR* PFNWGLGETPIXELFORMATATTRIBFVEXTPROC) (
  HDC hdc, int iPixelFormat, int iLayerPlane, UINT nAttributes,
  int* piAttributes, FLOAT* pfValues);
typedef BOOL (GLEXT_API_PTR* PFNWGLGETPIXELFORMATATTRIBIVARBPROC) (
  HDC hdc, int iPixelFormat, int iLayerPlane, UINT nAttributes,
  const int* piAttributes, int* piValues);
typedef BOOL (GLEXT_API_PTR* PFNWGLGETPIXELFORMATATTRIBIVEXTPROC) (
  HDC hdc, int iPixelFormat, int iLayerPlane, UINT nAttributes,
  int* piAttributes, int* piValues);
typedef PROC (GLEXT_API_PTR* PFNWGLGETPROCADDRESSPROC) (LPCSTR lpszProc);
typedef int (GLEXT_API_PTR* PFNWGLGETSWAPINTERVALEXTPROC) (void);
typedef BOOL (GLEXT_API_PTR* PFNWGLGETSYNCVALUESOMLPROC) (HDC hdc, INT64* ust,
                                                          INT64* msc,
                                                          INT64* sbc);
typedef BOOL (GLEXT_API_PTR* PFNWGLGETVIDEODEVICENVPROC) (
  HDC hDC, int numDevices, HPVIDEODEV* hVideoDevice);
typedef BOOL (GLEXT_API_PTR* PFNWGLGETVIDEOINFONVPROC) (
  HPVIDEODEV hpVideoDevice, unsigned long* pulCounterOutputPbuffer,
  unsigned long* pulCounterOutputVideo);
typedef BOOL (GLEXT_API_PTR* PFNWGLISENABLEDFRAMELOCKI3DPROC) (BOOL* pFlag);
typedef BOOL (GLEXT_API_PTR* PFNWGLISENABLEDGENLOCKI3DPROC) (HDC hDC,
                                                             BOOL* pFlag);
typedef BOOL (GLEXT_API_PTR* PFNWGLJOINSWAPGROUPNVPROC) (HDC hDC,
                                                         GLuint group);
typedef GLboolean (GLEXT_API_PTR* PFNWGLLOADDISPLAYCOLORTABLEEXTPROC) (
  const GLushort* table, GLuint length);
typedef BOOL (GLEXT_API_PTR* PFNWGLLOCKVIDEOCAPTUREDEVICENVPROC) (
  HDC hDc, HVIDEOINPUTDEVICENV hDevice);
typedef BOOL (GLEXT_API_PTR* PFNWGLMAKEASSOCIATEDCONTEXTCURRENTAMDPROC) (
  HGLRC hglrc);
typedef BOOL (GLEXT_API_PTR* PFNWGLMAKECONTEXTCURRENTARBPROC) (HDC hDrawDC,
                                                               HDC hReadDC,
                                                               HGLRC hglrc);
typedef BOOL (GLEXT_API_PTR* PFNWGLMAKECONTEXTCURRENTEXTPROC) (HDC hDrawDC,
                                                               HDC hReadDC,
                                                               HGLRC hglrc);
typedef BOOL (GLEXT_API_PTR* PFNWGLMAKECURRENTPROC) (HDC hDc,
                                                     HGLRC newContext);
typedef BOOL (GLEXT_API_PTR* PFNWGLQUERYCURRENTCONTEXTNVPROC) (int iAttribute,
                                                               int* piValue);
typedef BOOL (GLEXT_API_PTR* PFNWGLQUERYFRAMECOUNTNVPROC) (HDC hDC,
                                                           GLuint* count);
typedef BOOL (GLEXT_API_PTR* PFNWGLQUERYFRAMELOCKMASTERI3DPROC) (BOOL* pFlag);
typedef BOOL (GLEXT_API_PTR* PFNWGLQUERYFRAMETRACKINGI3DPROC) (
  DWORD* pFrameCount, DWORD* pMissedFrames, float* pLastMissedUsage);
typedef BOOL (GLEXT_API_PTR* PFNWGLQUERYGENLOCKMAXSOURCEDELAYI3DPROC) (
  HDC hDC, UINT* uMaxLineDelay, UINT* uMaxPixelDelay);
typedef BOOL (GLEXT_API_PTR* PFNWGLQUERYMAXSWAPGROUPSNVPROC) (
  HDC hDC, GLuint* maxGroups, GLuint* maxBarriers);
typedef BOOL (GLEXT_API_PTR* PFNWGLQUERYPBUFFERARBPROC) (HPBUFFERARB hPbuffer,
                                                         int iAttribute,
                                                         int* piValue);
typedef BOOL (GLEXT_API_PTR* PFNWGLQUERYPBUFFEREXTPROC) (HPBUFFEREXT hPbuffer,
                                                         int iAttribute,
                                                         int* piValue);
typedef BOOL (GLEXT_API_PTR* PFNWGLQUERYSWAPGROUPNVPROC) (HDC hDC,
                                                          GLuint* group,
                                                          GLuint* barrier);
typedef BOOL (GLEXT_API_PTR* PFNWGLQUERYVIDEOCAPTUREDEVICENVPROC) (
  HDC hDc, HVIDEOINPUTDEVICENV hDevice, int iAttribute, int* piValue);
typedef BOOL (GLEXT_API_PTR* PFNWGLREALIZELAYERPALETTEPROC) (HDC hdc,
                                                             int iLayerPlane,
                                                             BOOL bRealize);
typedef BOOL (GLEXT_API_PTR* PFNWGLRELEASEIMAGEBUFFEREVENTSI3DPROC) (
  HDC hDC, const LPVOID* pAddress, UINT count);
typedef int (GLEXT_API_PTR* PFNWGLRELEASEPBUFFERDCARBPROC) (
  HPBUFFERARB hPbuffer, HDC hDC);
typedef int (GLEXT_API_PTR* PFNWGLRELEASEPBUFFERDCEXTPROC) (
  HPBUFFEREXT hPbuffer, HDC hDC);
typedef BOOL (GLEXT_API_PTR* PFNWGLRELEASETEXIMAGEARBPROC) (
  HPBUFFERARB hPbuffer, int iBuffer);
typedef BOOL (GLEXT_API_PTR* PFNWGLRELEASEVIDEOCAPTUREDEVICENVPROC) (
  HDC hDc, HVIDEOINPUTDEVICENV hDevice);
typedef BOOL (GLEXT_API_PTR* PFNWGLRELEASEVIDEODEVICENVPROC) (
  HPVIDEODEV hVideoDevice);
typedef BOOL (GLEXT_API_PTR* PFNWGLRELEASEVIDEOIMAGENVPROC) (
  HPBUFFERARB hPbuffer, int iVideoBuffer);
typedef BOOL (GLEXT_API_PTR* PFNWGLRESETFRAMECOUNTNVPROC) (HDC hDC);
typedef BOOL (GLEXT_API_PTR* PFNWGLRESTOREBUFFERREGIONARBPROC) (
  HANDLE hRegion, int x, int y, int width, int height, int xSrc, int ySrc);
typedef BOOL (GLEXT_API_PTR* PFNWGLSAVEBUFFERREGIONARBPROC) (HANDLE hRegion,
                                                             int x, int y,
                                                             int width,
                                                             int height);
typedef BOOL (GLEXT_API_PTR* PFNWGLSENDPBUFFERTOVIDEONVPROC) (
  HPBUFFERARB hPbuffer, int iBufferType, unsigned long* pulCounterPbuffer,
  BOOL bBlock);
typedef BOOL (GLEXT_API_PTR* PFNWGLSETDIGITALVIDEOPARAMETERSI3DPROC) (
  HDC hDC, int iAttribute, const int* piValue);
typedef BOOL (GLEXT_API_PTR* PFNWGLSETGAMMATABLEI3DPROC) (
  HDC hDC, int iEntries, const USHORT* puRed, const USHORT* puGreen,
  const USHORT* puBlue);
typedef BOOL (GLEXT_API_PTR* PFNWGLSETGAMMATABLEPARAMETERSI3DPROC) (
  HDC hDC, int iAttribute, const int* piValue);
typedef int (GLEXT_API_PTR* PFNWGLSETLAYERPALETTEENTRIESPROC) (
  HDC hdc, int iLayerPlane, int iStart, int cEntries, const COLORREF* pcr);
typedef BOOL (GLEXT_API_PTR* PFNWGLSETPBUFFERATTRIBARBPROC) (
  HPBUFFERARB hPbuffer, const int* piAttribList);
typedef BOOL (GLEXT_API_PTR* PFNWGLSETSTEREOEMITTERSTATE3DLPROC) (HDC hDC,
                                                                  UINT uState);
typedef BOOL (GLEXT_API_PTR* PFNWGLSHARELISTSPROC) (HGLRC hrcSrvShare,
                                                    HGLRC hrcSrvSource);
typedef INT64 (GLEXT_API_PTR* PFNWGLSWAPBUFFERSMSCOMLPROC) (HDC hdc,
                                                            INT64 target_msc,
                                                            INT64 divisor,
                                                            INT64 remainder);
typedef BOOL (GLEXT_API_PTR* PFNWGLSWAPINTERVALEXTPROC) (int interval);
typedef BOOL (GLEXT_API_PTR* PFNWGLSWAPLAYERBUFFERSPROC) (HDC hdc,
                                                          UINT fuFlags);
typedef INT64 (GLEXT_API_PTR* PFNWGLSWAPLAYERBUFFERSMSCOMLPROC) (
  HDC hdc, INT fuPlanes, INT64 target_msc, INT64 divisor, INT64 remainder);
typedef BOOL (GLEXT_API_PTR* PFNWGLUSEFONTBITMAPSPROC) (HDC hDC, DWORD first,
                                                        DWORD count,
                                                        DWORD listBase);
typedef BOOL (GLEXT_API_PTR* PFNWGLUSEFONTBITMAPSAPROC) (HDC hDC, DWORD first,
                                                         DWORD count,
                                                         DWORD listBase);
typedef BOOL (GLEXT_API_PTR* PFNWGLUSEFONTBITMAPSWPROC) (HDC hDC, DWORD first,
                                                         DWORD count,
                                                         DWORD listBase);
typedef BOOL (GLEXT_API_PTR* PFNWGLUSEFONTOUTLINESPROC) (
  HDC hDC, DWORD first, DWORD count, DWORD listBase, FLOAT deviation,
  FLOAT extrusion, int format, LPGLYPHMETRICSFLOAT lpgmf);
typedef BOOL (GLEXT_API_PTR* PFNWGLUSEFONTOUTLINESAPROC) (
  HDC hDC, DWORD first, DWORD count, DWORD listBase, FLOAT deviation,
  FLOAT extrusion, int format, LPGLYPHMETRICSFLOAT lpgmf);
typedef BOOL (GLEXT_API_PTR* PFNWGLUSEFONTOUTLINESWPROC) (
  HDC hDC, DWORD first, DWORD count, DWORD listBase, FLOAT deviation,
  FLOAT extrusion, int format, LPGLYPHMETRICSFLOAT lpgmf);
typedef BOOL (GLEXT_API_PTR* PFNWGLWAITFORMSCOMLPROC) (
  HDC hdc, INT64 target_msc, INT64 divisor, INT64 remainder, INT64* ust,
  INT64* msc, INT64* sbc);
typedef BOOL (GLEXT_API_PTR* PFNWGLWAITFORSBCOMLPROC) (HDC hdc,
                                                       INT64 target_sbc,
                                                       INT64* ust, INT64* msc,
                                                       INT64* sbc);

GLEXT_API_CALL PFNWGLALLOCATEMEMORYNVPROC glext_wglAllocateMemoryNV;
#define wglAllocateMemoryNV glext_wglAllocateMemoryNV
GLEXT_API_CALL PFNWGLASSOCIATEIMAGEBUFFEREVENTSI3DPROC
  glext_wglAssociateImageBufferEventsI3D;
#define wglAssociateImageBufferEventsI3D glext_wglAssociateImageBufferEventsI3D
GLEXT_API_CALL PFNWGLBEGINFRAMETRACKINGI3DPROC glext_wglBeginFrameTrackingI3D;
#define wglBeginFrameTrackingI3D glext_wglBeginFrameTrackingI3D
GLEXT_API_CALL PFNWGLBINDDISPLAYCOLORTABLEEXTPROC
  glext_wglBindDisplayColorTableEXT;
#define wglBindDisplayColorTableEXT glext_wglBindDisplayColorTableEXT
GLEXT_API_CALL PFNWGLBINDSWAPBARRIERNVPROC glext_wglBindSwapBarrierNV;
#define wglBindSwapBarrierNV glext_wglBindSwapBarrierNV
GLEXT_API_CALL PFNWGLBINDTEXIMAGEARBPROC glext_wglBindTexImageARB;
#define wglBindTexImageARB glext_wglBindTexImageARB
GLEXT_API_CALL PFNWGLBINDVIDEOCAPTUREDEVICENVPROC
  glext_wglBindVideoCaptureDeviceNV;
#define wglBindVideoCaptureDeviceNV glext_wglBindVideoCaptureDeviceNV
GLEXT_API_CALL PFNWGLBINDVIDEODEVICENVPROC glext_wglBindVideoDeviceNV;
#define wglBindVideoDeviceNV glext_wglBindVideoDeviceNV
GLEXT_API_CALL PFNWGLBINDVIDEOIMAGENVPROC glext_wglBindVideoImageNV;
#define wglBindVideoImageNV glext_wglBindVideoImageNV
GLEXT_API_CALL PFNWGLBLITCONTEXTFRAMEBUFFERAMDPROC
  glext_wglBlitContextFramebufferAMD;
#define wglBlitContextFramebufferAMD glext_wglBlitContextFramebufferAMD
GLEXT_API_CALL PFNWGLCHOOSEPIXELFORMATARBPROC glext_wglChoosePixelFormatARB;
#define wglChoosePixelFormatARB glext_wglChoosePixelFormatARB
GLEXT_API_CALL PFNWGLCHOOSEPIXELFORMATEXTPROC glext_wglChoosePixelFormatEXT;
#define wglChoosePixelFormatEXT glext_wglChoosePixelFormatEXT
GLEXT_API_CALL PFNWGLCOPYIMAGESUBDATANVPROC glext_wglCopyImageSubDataNV;
#define wglCopyImageSubDataNV glext_wglCopyImageSubDataNV
GLEXT_API_CALL PFNWGLCREATEAFFINITYDCNVPROC glext_wglCreateAffinityDCNV;
#define wglCreateAffinityDCNV glext_wglCreateAffinityDCNV
GLEXT_API_CALL PFNWGLCREATEASSOCIATEDCONTEXTAMDPROC
  glext_wglCreateAssociatedContextAMD;
#define wglCreateAssociatedContextAMD glext_wglCreateAssociatedContextAMD
GLEXT_API_CALL PFNWGLCREATEASSOCIATEDCONTEXTATTRIBSAMDPROC
  glext_wglCreateAssociatedContextAttribsAMD;
#define wglCreateAssociatedContextAttribsAMD                                  \
  glext_wglCreateAssociatedContextAttribsAMD
GLEXT_API_CALL PFNWGLCREATEBUFFERREGIONARBPROC glext_wglCreateBufferRegionARB;
#define wglCreateBufferRegionARB glext_wglCreateBufferRegionARB
GLEXT_API_CALL PFNWGLCREATECONTEXTATTRIBSARBPROC
  glext_wglCreateContextAttribsARB;
#define wglCreateContextAttribsARB glext_wglCreateContextAttribsARB
GLEXT_API_CALL PFNWGLCREATEDISPLAYCOLORTABLEEXTPROC
  glext_wglCreateDisplayColorTableEXT;
#define wglCreateDisplayColorTableEXT glext_wglCreateDisplayColorTableEXT
GLEXT_API_CALL PFNWGLCREATEIMAGEBUFFERI3DPROC glext_wglCreateImageBufferI3D;
#define wglCreateImageBufferI3D glext_wglCreateImageBufferI3D
GLEXT_API_CALL PFNWGLCREATEPBUFFERARBPROC glext_wglCreatePbufferARB;
#define wglCreatePbufferARB glext_wglCreatePbufferARB
GLEXT_API_CALL PFNWGLCREATEPBUFFEREXTPROC glext_wglCreatePbufferEXT;
#define wglCreatePbufferEXT glext_wglCreatePbufferEXT
GLEXT_API_CALL PFNWGLDXCLOSEDEVICENVPROC glext_wglDXCloseDeviceNV;
#define wglDXCloseDeviceNV glext_wglDXCloseDeviceNV
GLEXT_API_CALL PFNWGLDXLOCKOBJECTSNVPROC glext_wglDXLockObjectsNV;
#define wglDXLockObjectsNV glext_wglDXLockObjectsNV
GLEXT_API_CALL PFNWGLDXOBJECTACCESSNVPROC glext_wglDXObjectAccessNV;
#define wglDXObjectAccessNV glext_wglDXObjectAccessNV
GLEXT_API_CALL PFNWGLDXOPENDEVICENVPROC glext_wglDXOpenDeviceNV;
#define wglDXOpenDeviceNV glext_wglDXOpenDeviceNV
GLEXT_API_CALL PFNWGLDXREGISTEROBJECTNVPROC glext_wglDXRegisterObjectNV;
#define wglDXRegisterObjectNV glext_wglDXRegisterObjectNV
GLEXT_API_CALL PFNWGLDXSETRESOURCESHAREHANDLENVPROC
  glext_wglDXSetResourceShareHandleNV;
#define wglDXSetResourceShareHandleNV glext_wglDXSetResourceShareHandleNV
GLEXT_API_CALL PFNWGLDXUNLOCKOBJECTSNVPROC glext_wglDXUnlockObjectsNV;
#define wglDXUnlockObjectsNV glext_wglDXUnlockObjectsNV
GLEXT_API_CALL PFNWGLDXUNREGISTEROBJECTNVPROC glext_wglDXUnregisterObjectNV;
#define wglDXUnregisterObjectNV glext_wglDXUnregisterObjectNV
GLEXT_API_CALL PFNWGLDELAYBEFORESWAPNVPROC glext_wglDelayBeforeSwapNV;
#define wglDelayBeforeSwapNV glext_wglDelayBeforeSwapNV
GLEXT_API_CALL PFNWGLDELETEASSOCIATEDCONTEXTAMDPROC
  glext_wglDeleteAssociatedContextAMD;
#define wglDeleteAssociatedContextAMD glext_wglDeleteAssociatedContextAMD
GLEXT_API_CALL PFNWGLDELETEBUFFERREGIONARBPROC glext_wglDeleteBufferRegionARB;
#define wglDeleteBufferRegionARB glext_wglDeleteBufferRegionARB
GLEXT_API_CALL PFNWGLDELETEDCNVPROC glext_wglDeleteDCNV;
#define wglDeleteDCNV glext_wglDeleteDCNV
GLEXT_API_CALL PFNWGLDESTROYDISPLAYCOLORTABLEEXTPROC
  glext_wglDestroyDisplayColorTableEXT;
#define wglDestroyDisplayColorTableEXT glext_wglDestroyDisplayColorTableEXT
GLEXT_API_CALL PFNWGLDESTROYIMAGEBUFFERI3DPROC glext_wglDestroyImageBufferI3D;
#define wglDestroyImageBufferI3D glext_wglDestroyImageBufferI3D
GLEXT_API_CALL PFNWGLDESTROYPBUFFERARBPROC glext_wglDestroyPbufferARB;
#define wglDestroyPbufferARB glext_wglDestroyPbufferARB
GLEXT_API_CALL PFNWGLDESTROYPBUFFEREXTPROC glext_wglDestroyPbufferEXT;
#define wglDestroyPbufferEXT glext_wglDestroyPbufferEXT
GLEXT_API_CALL PFNWGLDISABLEFRAMELOCKI3DPROC glext_wglDisableFrameLockI3D;
#define wglDisableFrameLockI3D glext_wglDisableFrameLockI3D
GLEXT_API_CALL PFNWGLDISABLEGENLOCKI3DPROC glext_wglDisableGenlockI3D;
#define wglDisableGenlockI3D glext_wglDisableGenlockI3D
GLEXT_API_CALL PFNWGLENABLEFRAMELOCKI3DPROC glext_wglEnableFrameLockI3D;
#define wglEnableFrameLockI3D glext_wglEnableFrameLockI3D
GLEXT_API_CALL PFNWGLENABLEGENLOCKI3DPROC glext_wglEnableGenlockI3D;
#define wglEnableGenlockI3D glext_wglEnableGenlockI3D
GLEXT_API_CALL PFNWGLENDFRAMETRACKINGI3DPROC glext_wglEndFrameTrackingI3D;
#define wglEndFrameTrackingI3D glext_wglEndFrameTrackingI3D
GLEXT_API_CALL PFNWGLENUMGPUDEVICESNVPROC glext_wglEnumGpuDevicesNV;
#define wglEnumGpuDevicesNV glext_wglEnumGpuDevicesNV
GLEXT_API_CALL PFNWGLENUMGPUSFROMAFFINITYDCNVPROC
  glext_wglEnumGpusFromAffinityDCNV;
#define wglEnumGpusFromAffinityDCNV glext_wglEnumGpusFromAffinityDCNV
GLEXT_API_CALL PFNWGLENUMGPUSNVPROC glext_wglEnumGpusNV;
#define wglEnumGpusNV glext_wglEnumGpusNV
GLEXT_API_CALL PFNWGLENUMERATEVIDEOCAPTUREDEVICESNVPROC
  glext_wglEnumerateVideoCaptureDevicesNV;
#define wglEnumerateVideoCaptureDevicesNV                                     \
  glext_wglEnumerateVideoCaptureDevicesNV
GLEXT_API_CALL PFNWGLENUMERATEVIDEODEVICESNVPROC
  glext_wglEnumerateVideoDevicesNV;
#define wglEnumerateVideoDevicesNV glext_wglEnumerateVideoDevicesNV
GLEXT_API_CALL PFNWGLFREEMEMORYNVPROC glext_wglFreeMemoryNV;
#define wglFreeMemoryNV glext_wglFreeMemoryNV
GLEXT_API_CALL PFNWGLGENLOCKSAMPLERATEI3DPROC glext_wglGenlockSampleRateI3D;
#define wglGenlockSampleRateI3D glext_wglGenlockSampleRateI3D
GLEXT_API_CALL PFNWGLGENLOCKSOURCEDELAYI3DPROC glext_wglGenlockSourceDelayI3D;
#define wglGenlockSourceDelayI3D glext_wglGenlockSourceDelayI3D
GLEXT_API_CALL PFNWGLGENLOCKSOURCEEDGEI3DPROC glext_wglGenlockSourceEdgeI3D;
#define wglGenlockSourceEdgeI3D glext_wglGenlockSourceEdgeI3D
GLEXT_API_CALL PFNWGLGENLOCKSOURCEI3DPROC glext_wglGenlockSourceI3D;
#define wglGenlockSourceI3D glext_wglGenlockSourceI3D
GLEXT_API_CALL PFNWGLGETCONTEXTGPUIDAMDPROC glext_wglGetContextGPUIDAMD;
#define wglGetContextGPUIDAMD glext_wglGetContextGPUIDAMD
GLEXT_API_CALL PFNWGLGETCURRENTASSOCIATEDCONTEXTAMDPROC
  glext_wglGetCurrentAssociatedContextAMD;
#define wglGetCurrentAssociatedContextAMD                                     \
  glext_wglGetCurrentAssociatedContextAMD
GLEXT_API_CALL PFNWGLGETCURRENTREADDCARBPROC glext_wglGetCurrentReadDCARB;
#define wglGetCurrentReadDCARB glext_wglGetCurrentReadDCARB
GLEXT_API_CALL PFNWGLGETCURRENTREADDCEXTPROC glext_wglGetCurrentReadDCEXT;
#define wglGetCurrentReadDCEXT glext_wglGetCurrentReadDCEXT
GLEXT_API_CALL PFNWGLGETDIGITALVIDEOPARAMETERSI3DPROC
  glext_wglGetDigitalVideoParametersI3D;
#define wglGetDigitalVideoParametersI3D glext_wglGetDigitalVideoParametersI3D
GLEXT_API_CALL PFNWGLGETEXTENSIONSSTRINGARBPROC
  glext_wglGetExtensionsStringARB;
#define wglGetExtensionsStringARB glext_wglGetExtensionsStringARB
GLEXT_API_CALL PFNWGLGETEXTENSIONSSTRINGEXTPROC
  glext_wglGetExtensionsStringEXT;
#define wglGetExtensionsStringEXT glext_wglGetExtensionsStringEXT
GLEXT_API_CALL PFNWGLGETFRAMEUSAGEI3DPROC glext_wglGetFrameUsageI3D;
#define wglGetFrameUsageI3D glext_wglGetFrameUsageI3D
GLEXT_API_CALL PFNWGLGETGPUIDSAMDPROC glext_wglGetGPUIDsAMD;
#define wglGetGPUIDsAMD glext_wglGetGPUIDsAMD
GLEXT_API_CALL PFNWGLGETGPUINFOAMDPROC glext_wglGetGPUInfoAMD;
#define wglGetGPUInfoAMD glext_wglGetGPUInfoAMD
GLEXT_API_CALL PFNWGLGETGAMMATABLEI3DPROC glext_wglGetGammaTableI3D;
#define wglGetGammaTableI3D glext_wglGetGammaTableI3D
GLEXT_API_CALL PFNWGLGETGAMMATABLEPARAMETERSI3DPROC
  glext_wglGetGammaTableParametersI3D;
#define wglGetGammaTableParametersI3D glext_wglGetGammaTableParametersI3D
GLEXT_API_CALL PFNWGLGETGENLOCKSAMPLERATEI3DPROC
  glext_wglGetGenlockSampleRateI3D;
#define wglGetGenlockSampleRateI3D glext_wglGetGenlockSampleRateI3D
GLEXT_API_CALL PFNWGLGETGENLOCKSOURCEDELAYI3DPROC
  glext_wglGetGenlockSourceDelayI3D;
#define wglGetGenlockSourceDelayI3D glext_wglGetGenlockSourceDelayI3D
GLEXT_API_CALL PFNWGLGETGENLOCKSOURCEEDGEI3DPROC
  glext_wglGetGenlockSourceEdgeI3D;
#define wglGetGenlockSourceEdgeI3D glext_wglGetGenlockSourceEdgeI3D
GLEXT_API_CALL PFNWGLGETGENLOCKSOURCEI3DPROC glext_wglGetGenlockSourceI3D;
#define wglGetGenlockSourceI3D glext_wglGetGenlockSourceI3D
GLEXT_API_CALL PFNWGLGETMSCRATEOMLPROC glext_wglGetMscRateOML;
#define wglGetMscRateOML glext_wglGetMscRateOML
GLEXT_API_CALL PFNWGLGETPBUFFERDCARBPROC glext_wglGetPbufferDCARB;
#define wglGetPbufferDCARB glext_wglGetPbufferDCARB
GLEXT_API_CALL PFNWGLGETPBUFFERDCEXTPROC glext_wglGetPbufferDCEXT;
#define wglGetPbufferDCEXT glext_wglGetPbufferDCEXT
GLEXT_API_CALL PFNWGLGETPIXELFORMATATTRIBFVARBPROC
  glext_wglGetPixelFormatAttribfvARB;
#define wglGetPixelFormatAttribfvARB glext_wglGetPixelFormatAttribfvARB
GLEXT_API_CALL PFNWGLGETPIXELFORMATATTRIBFVEXTPROC
  glext_wglGetPixelFormatAttribfvEXT;
#define wglGetPixelFormatAttribfvEXT glext_wglGetPixelFormatAttribfvEXT
GLEXT_API_CALL PFNWGLGETPIXELFORMATATTRIBIVARBPROC
  glext_wglGetPixelFormatAttribivARB;
#define wglGetPixelFormatAttribivARB glext_wglGetPixelFormatAttribivARB
GLEXT_API_CALL PFNWGLGETPIXELFORMATATTRIBIVEXTPROC
  glext_wglGetPixelFormatAttribivEXT;
#define wglGetPixelFormatAttribivEXT glext_wglGetPixelFormatAttribivEXT
GLEXT_API_CALL PFNWGLGETSWAPINTERVALEXTPROC glext_wglGetSwapIntervalEXT;
#define wglGetSwapIntervalEXT glext_wglGetSwapIntervalEXT
GLEXT_API_CALL PFNWGLGETSYNCVALUESOMLPROC glext_wglGetSyncValuesOML;
#define wglGetSyncValuesOML glext_wglGetSyncValuesOML
GLEXT_API_CALL PFNWGLGETVIDEODEVICENVPROC glext_wglGetVideoDeviceNV;
#define wglGetVideoDeviceNV glext_wglGetVideoDeviceNV
GLEXT_API_CALL PFNWGLGETVIDEOINFONVPROC glext_wglGetVideoInfoNV;
#define wglGetVideoInfoNV glext_wglGetVideoInfoNV
GLEXT_API_CALL PFNWGLISENABLEDFRAMELOCKI3DPROC glext_wglIsEnabledFrameLockI3D;
#define wglIsEnabledFrameLockI3D glext_wglIsEnabledFrameLockI3D
GLEXT_API_CALL PFNWGLISENABLEDGENLOCKI3DPROC glext_wglIsEnabledGenlockI3D;
#define wglIsEnabledGenlockI3D glext_wglIsEnabledGenlockI3D
GLEXT_API_CALL PFNWGLJOINSWAPGROUPNVPROC glext_wglJoinSwapGroupNV;
#define wglJoinSwapGroupNV glext_wglJoinSwapGroupNV
GLEXT_API_CALL PFNWGLLOADDISPLAYCOLORTABLEEXTPROC
  glext_wglLoadDisplayColorTableEXT;
#define wglLoadDisplayColorTableEXT glext_wglLoadDisplayColorTableEXT
GLEXT_API_CALL PFNWGLLOCKVIDEOCAPTUREDEVICENVPROC
  glext_wglLockVideoCaptureDeviceNV;
#define wglLockVideoCaptureDeviceNV glext_wglLockVideoCaptureDeviceNV
GLEXT_API_CALL PFNWGLMAKEASSOCIATEDCONTEXTCURRENTAMDPROC
  glext_wglMakeAssociatedContextCurrentAMD;
#define wglMakeAssociatedContextCurrentAMD                                    \
  glext_wglMakeAssociatedContextCurrentAMD
GLEXT_API_CALL PFNWGLMAKECONTEXTCURRENTARBPROC glext_wglMakeContextCurrentARB;
#define wglMakeContextCurrentARB glext_wglMakeContextCurrentARB
GLEXT_API_CALL PFNWGLMAKECONTEXTCURRENTEXTPROC glext_wglMakeContextCurrentEXT;
#define wglMakeContextCurrentEXT glext_wglMakeContextCurrentEXT
GLEXT_API_CALL PFNWGLQUERYCURRENTCONTEXTNVPROC glext_wglQueryCurrentContextNV;
#define wglQueryCurrentContextNV glext_wglQueryCurrentContextNV
GLEXT_API_CALL PFNWGLQUERYFRAMECOUNTNVPROC glext_wglQueryFrameCountNV;
#define wglQueryFrameCountNV glext_wglQueryFrameCountNV
GLEXT_API_CALL PFNWGLQUERYFRAMELOCKMASTERI3DPROC
  glext_wglQueryFrameLockMasterI3D;
#define wglQueryFrameLockMasterI3D glext_wglQueryFrameLockMasterI3D
GLEXT_API_CALL PFNWGLQUERYFRAMETRACKINGI3DPROC glext_wglQueryFrameTrackingI3D;
#define wglQueryFrameTrackingI3D glext_wglQueryFrameTrackingI3D
GLEXT_API_CALL PFNWGLQUERYGENLOCKMAXSOURCEDELAYI3DPROC
  glext_wglQueryGenlockMaxSourceDelayI3D;
#define wglQueryGenlockMaxSourceDelayI3D glext_wglQueryGenlockMaxSourceDelayI3D
GLEXT_API_CALL PFNWGLQUERYMAXSWAPGROUPSNVPROC glext_wglQueryMaxSwapGroupsNV;
#define wglQueryMaxSwapGroupsNV glext_wglQueryMaxSwapGroupsNV
GLEXT_API_CALL PFNWGLQUERYPBUFFERARBPROC glext_wglQueryPbufferARB;
#define wglQueryPbufferARB glext_wglQueryPbufferARB
GLEXT_API_CALL PFNWGLQUERYPBUFFEREXTPROC glext_wglQueryPbufferEXT;
#define wglQueryPbufferEXT glext_wglQueryPbufferEXT
GLEXT_API_CALL PFNWGLQUERYSWAPGROUPNVPROC glext_wglQuerySwapGroupNV;
#define wglQuerySwapGroupNV glext_wglQuerySwapGroupNV
GLEXT_API_CALL PFNWGLQUERYVIDEOCAPTUREDEVICENVPROC
  glext_wglQueryVideoCaptureDeviceNV;
#define wglQueryVideoCaptureDeviceNV glext_wglQueryVideoCaptureDeviceNV
GLEXT_API_CALL PFNWGLRELEASEIMAGEBUFFEREVENTSI3DPROC
  glext_wglReleaseImageBufferEventsI3D;
#define wglReleaseImageBufferEventsI3D glext_wglReleaseImageBufferEventsI3D
GLEXT_API_CALL PFNWGLRELEASEPBUFFERDCARBPROC glext_wglReleasePbufferDCARB;
#define wglReleasePbufferDCARB glext_wglReleasePbufferDCARB
GLEXT_API_CALL PFNWGLRELEASEPBUFFERDCEXTPROC glext_wglReleasePbufferDCEXT;
#define wglReleasePbufferDCEXT glext_wglReleasePbufferDCEXT
GLEXT_API_CALL PFNWGLRELEASETEXIMAGEARBPROC glext_wglReleaseTexImageARB;
#define wglReleaseTexImageARB glext_wglReleaseTexImageARB
GLEXT_API_CALL PFNWGLRELEASEVIDEOCAPTUREDEVICENVPROC
  glext_wglReleaseVideoCaptureDeviceNV;
#define wglReleaseVideoCaptureDeviceNV glext_wglReleaseVideoCaptureDeviceNV
GLEXT_API_CALL PFNWGLRELEASEVIDEODEVICENVPROC glext_wglReleaseVideoDeviceNV;
#define wglReleaseVideoDeviceNV glext_wglReleaseVideoDeviceNV
GLEXT_API_CALL PFNWGLRELEASEVIDEOIMAGENVPROC glext_wglReleaseVideoImageNV;
#define wglReleaseVideoImageNV glext_wglReleaseVideoImageNV
GLEXT_API_CALL PFNWGLRESETFRAMECOUNTNVPROC glext_wglResetFrameCountNV;
#define wglResetFrameCountNV glext_wglResetFrameCountNV
GLEXT_API_CALL PFNWGLRESTOREBUFFERREGIONARBPROC
  glext_wglRestoreBufferRegionARB;
#define wglRestoreBufferRegionARB glext_wglRestoreBufferRegionARB
GLEXT_API_CALL PFNWGLSAVEBUFFERREGIONARBPROC glext_wglSaveBufferRegionARB;
#define wglSaveBufferRegionARB glext_wglSaveBufferRegionARB
GLEXT_API_CALL PFNWGLSENDPBUFFERTOVIDEONVPROC glext_wglSendPbufferToVideoNV;
#define wglSendPbufferToVideoNV glext_wglSendPbufferToVideoNV
GLEXT_API_CALL PFNWGLSETDIGITALVIDEOPARAMETERSI3DPROC
  glext_wglSetDigitalVideoParametersI3D;
#define wglSetDigitalVideoParametersI3D glext_wglSetDigitalVideoParametersI3D
GLEXT_API_CALL PFNWGLSETGAMMATABLEI3DPROC glext_wglSetGammaTableI3D;
#define wglSetGammaTableI3D glext_wglSetGammaTableI3D
GLEXT_API_CALL PFNWGLSETGAMMATABLEPARAMETERSI3DPROC
  glext_wglSetGammaTableParametersI3D;
#define wglSetGammaTableParametersI3D glext_wglSetGammaTableParametersI3D
GLEXT_API_CALL PFNWGLSETPBUFFERATTRIBARBPROC glext_wglSetPbufferAttribARB;
#define wglSetPbufferAttribARB glext_wglSetPbufferAttribARB
GLEXT_API_CALL PFNWGLSETSTEREOEMITTERSTATE3DLPROC
  glext_wglSetStereoEmitterState3DL;
#define wglSetStereoEmitterState3DL glext_wglSetStereoEmitterState3DL
GLEXT_API_CALL PFNWGLSWAPBUFFERSMSCOMLPROC glext_wglSwapBuffersMscOML;
#define wglSwapBuffersMscOML glext_wglSwapBuffersMscOML
GLEXT_API_CALL PFNWGLSWAPINTERVALEXTPROC glext_wglSwapIntervalEXT;
#define wglSwapIntervalEXT glext_wglSwapIntervalEXT
GLEXT_API_CALL PFNWGLSWAPLAYERBUFFERSMSCOMLPROC
  glext_wglSwapLayerBuffersMscOML;
#define wglSwapLayerBuffersMscOML glext_wglSwapLayerBuffersMscOML
GLEXT_API_CALL PFNWGLWAITFORMSCOMLPROC glext_wglWaitForMscOML;
#define wglWaitForMscOML glext_wglWaitForMscOML
GLEXT_API_CALL PFNWGLWAITFORSBCOMLPROC glext_wglWaitForSbcOML;
#define wglWaitForSbcOML glext_wglWaitForSbcOML

GLEXT_API_CALL int
glext_LoadWGLUserPtr (HDC hdc, GLEXTuserptrloadfunc load, void* userptr);
GLEXT_API_CALL int
glext_LoadWGL (HDC hdc, GLEXTloadfunc load);

#ifdef GLEXT_WGL

GLEXT_API_CALL int
glext_LoaderLoadWGL (HDC hdc);

#endif
#ifdef __cplusplus
}
#endif

#define GLEXT_WGL_COMPILE 1

#endif // __has_include(<Windows.h>)

#endif
