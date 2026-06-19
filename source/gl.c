/**
 * SPDX-License-Identifier: (WTFPL OR CC0-1.0) AND Apache-2.0
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <glext/gl.h>

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

int GLEXT_GL_VERSION_1_0 = 0;
int GLEXT_GL_VERSION_1_1 = 0;
int GLEXT_GL_VERSION_1_2 = 0;
int GLEXT_GL_VERSION_1_3 = 0;
int GLEXT_GL_VERSION_1_4 = 0;
int GLEXT_GL_VERSION_1_5 = 0;
int GLEXT_GL_VERSION_2_0 = 0;
int GLEXT_GL_VERSION_2_1 = 0;
int GLEXT_GL_VERSION_3_0 = 0;
int GLEXT_GL_VERSION_3_1 = 0;
int GLEXT_GL_VERSION_3_2 = 0;
int GLEXT_GL_VERSION_3_3 = 0;
int GLEXT_GL_VERSION_4_0 = 0;
int GLEXT_GL_VERSION_4_1 = 0;
int GLEXT_GL_VERSION_4_2 = 0;
int GLEXT_GL_VERSION_4_3 = 0;
int GLEXT_GL_VERSION_4_4 = 0;
int GLEXT_GL_VERSION_4_5 = 0;
int GLEXT_GL_VERSION_4_6 = 0;
int GLEXT_GL_3DFX_multisample = 0;
int GLEXT_GL_3DFX_tbuffer = 0;
int GLEXT_GL_3DFX_texture_compression_FXT1 = 0;
int GLEXT_GL_AMD_blend_minmax_factor = 0;
int GLEXT_GL_AMD_conservative_depth = 0;
int GLEXT_GL_AMD_debug_output = 0;
int GLEXT_GL_AMD_depth_clamp_separate = 0;
int GLEXT_GL_AMD_draw_buffers_blend = 0;
int GLEXT_GL_AMD_framebuffer_multisample_advanced = 0;
int GLEXT_GL_AMD_framebuffer_sample_positions = 0;
int GLEXT_GL_AMD_gcn_shader = 0;
int GLEXT_GL_AMD_gpu_shader_half_float = 0;
int GLEXT_GL_AMD_gpu_shader_int16 = 0;
int GLEXT_GL_AMD_gpu_shader_int64 = 0;
int GLEXT_GL_AMD_interleaved_elements = 0;
int GLEXT_GL_AMD_multi_draw_indirect = 0;
int GLEXT_GL_AMD_name_gen_delete = 0;
int GLEXT_GL_AMD_occlusion_query_event = 0;
int GLEXT_GL_AMD_performance_monitor = 0;
int GLEXT_GL_AMD_pinned_memory = 0;
int GLEXT_GL_AMD_query_buffer_object = 0;
int GLEXT_GL_AMD_sample_positions = 0;
int GLEXT_GL_AMD_seamless_cubemap_per_texture = 0;
int GLEXT_GL_AMD_shader_atomic_counter_ops = 0;
int GLEXT_GL_AMD_shader_ballot = 0;
int GLEXT_GL_AMD_shader_explicit_vertex_parameter = 0;
int GLEXT_GL_AMD_shader_gpu_shader_half_float_fetch = 0;
int GLEXT_GL_AMD_shader_image_load_store_lod = 0;
int GLEXT_GL_AMD_shader_stencil_export = 0;
int GLEXT_GL_AMD_shader_trinary_minmax = 0;
int GLEXT_GL_AMD_sparse_texture = 0;
int GLEXT_GL_AMD_stencil_operation_extended = 0;
int GLEXT_GL_AMD_texture_gather_bias_lod = 0;
int GLEXT_GL_AMD_texture_texture4 = 0;
int GLEXT_GL_AMD_transform_feedback3_lines_triangles = 0;
int GLEXT_GL_AMD_transform_feedback4 = 0;
int GLEXT_GL_AMD_vertex_shader_layer = 0;
int GLEXT_GL_AMD_vertex_shader_tessellator = 0;
int GLEXT_GL_AMD_vertex_shader_viewport_index = 0;
int GLEXT_GL_APPLE_aux_depth_stencil = 0;
int GLEXT_GL_APPLE_client_storage = 0;
int GLEXT_GL_APPLE_element_array = 0;
int GLEXT_GL_APPLE_fence = 0;
int GLEXT_GL_APPLE_float_pixels = 0;
int GLEXT_GL_APPLE_flush_buffer_range = 0;
int GLEXT_GL_APPLE_object_purgeable = 0;
int GLEXT_GL_APPLE_rgb_422 = 0;
int GLEXT_GL_APPLE_row_bytes = 0;
int GLEXT_GL_APPLE_specular_vector = 0;
int GLEXT_GL_APPLE_texture_range = 0;
int GLEXT_GL_APPLE_transform_hint = 0;
int GLEXT_GL_APPLE_vertex_array_object = 0;
int GLEXT_GL_APPLE_vertex_array_range = 0;
int GLEXT_GL_APPLE_vertex_program_evaluators = 0;
int GLEXT_GL_APPLE_ycbcr_422 = 0;
int GLEXT_GL_ARB_ES2_compatibility = 0;
int GLEXT_GL_ARB_ES3_1_compatibility = 0;
int GLEXT_GL_ARB_ES3_2_compatibility = 0;
int GLEXT_GL_ARB_ES3_compatibility = 0;
int GLEXT_GL_ARB_arrays_of_arrays = 0;
int GLEXT_GL_ARB_base_instance = 0;
int GLEXT_GL_ARB_bindless_texture = 0;
int GLEXT_GL_ARB_blend_func_extended = 0;
int GLEXT_GL_ARB_buffer_storage = 0;
int GLEXT_GL_ARB_cl_event = 0;
int GLEXT_GL_ARB_clear_buffer_object = 0;
int GLEXT_GL_ARB_clear_texture = 0;
int GLEXT_GL_ARB_clip_control = 0;
int GLEXT_GL_ARB_color_buffer_float = 0;
int GLEXT_GL_ARB_compatibility = 0;
int GLEXT_GL_ARB_compressed_texture_pixel_storage = 0;
int GLEXT_GL_ARB_compute_shader = 0;
int GLEXT_GL_ARB_compute_variable_group_size = 0;
int GLEXT_GL_ARB_conditional_render_inverted = 0;
int GLEXT_GL_ARB_conservative_depth = 0;
int GLEXT_GL_ARB_copy_buffer = 0;
int GLEXT_GL_ARB_copy_image = 0;
int GLEXT_GL_ARB_cull_distance = 0;
int GLEXT_GL_ARB_debug_output = 0;
int GLEXT_GL_ARB_depth_buffer_float = 0;
int GLEXT_GL_ARB_depth_clamp = 0;
int GLEXT_GL_ARB_depth_texture = 0;
int GLEXT_GL_ARB_derivative_control = 0;
int GLEXT_GL_ARB_direct_state_access = 0;
int GLEXT_GL_ARB_draw_buffers = 0;
int GLEXT_GL_ARB_draw_buffers_blend = 0;
int GLEXT_GL_ARB_draw_elements_base_vertex = 0;
int GLEXT_GL_ARB_draw_indirect = 0;
int GLEXT_GL_ARB_draw_instanced = 0;
int GLEXT_GL_ARB_enhanced_layouts = 0;
int GLEXT_GL_ARB_explicit_attrib_location = 0;
int GLEXT_GL_ARB_explicit_uniform_location = 0;
int GLEXT_GL_ARB_fragment_coord_conventions = 0;
int GLEXT_GL_ARB_fragment_layer_viewport = 0;
int GLEXT_GL_ARB_fragment_program = 0;
int GLEXT_GL_ARB_fragment_program_shadow = 0;
int GLEXT_GL_ARB_fragment_shader = 0;
int GLEXT_GL_ARB_fragment_shader_interlock = 0;
int GLEXT_GL_ARB_framebuffer_no_attachments = 0;
int GLEXT_GL_ARB_framebuffer_object = 0;
int GLEXT_GL_ARB_framebuffer_sRGB = 0;
int GLEXT_GL_ARB_geometry_shader4 = 0;
int GLEXT_GL_ARB_get_program_binary = 0;
int GLEXT_GL_ARB_get_texture_sub_image = 0;
int GLEXT_GL_ARB_gl_spirv = 0;
int GLEXT_GL_ARB_gpu_shader5 = 0;
int GLEXT_GL_ARB_gpu_shader_fp64 = 0;
int GLEXT_GL_ARB_gpu_shader_int64 = 0;
int GLEXT_GL_ARB_half_float_pixel = 0;
int GLEXT_GL_ARB_half_float_vertex = 0;
int GLEXT_GL_ARB_imaging = 0;
int GLEXT_GL_ARB_indirect_parameters = 0;
int GLEXT_GL_ARB_instanced_arrays = 0;
int GLEXT_GL_ARB_internalformat_query = 0;
int GLEXT_GL_ARB_internalformat_query2 = 0;
int GLEXT_GL_ARB_invalidate_subdata = 0;
int GLEXT_GL_ARB_map_buffer_alignment = 0;
int GLEXT_GL_ARB_map_buffer_range = 0;
int GLEXT_GL_ARB_matrix_palette = 0;
int GLEXT_GL_ARB_multi_bind = 0;
int GLEXT_GL_ARB_multi_draw_indirect = 0;
int GLEXT_GL_ARB_multisample = 0;
int GLEXT_GL_ARB_multitexture = 0;
int GLEXT_GL_ARB_occlusion_query = 0;
int GLEXT_GL_ARB_occlusion_query2 = 0;
int GLEXT_GL_ARB_parallel_shader_compile = 0;
int GLEXT_GL_ARB_pipeline_statistics_query = 0;
int GLEXT_GL_ARB_pixel_buffer_object = 0;
int GLEXT_GL_ARB_point_parameters = 0;
int GLEXT_GL_ARB_point_sprite = 0;
int GLEXT_GL_ARB_polygon_offset_clamp = 0;
int GLEXT_GL_ARB_post_depth_coverage = 0;
int GLEXT_GL_ARB_program_interface_query = 0;
int GLEXT_GL_ARB_provoking_vertex = 0;
int GLEXT_GL_ARB_query_buffer_object = 0;
int GLEXT_GL_ARB_robust_buffer_access_behavior = 0;
int GLEXT_GL_ARB_robustness = 0;
int GLEXT_GL_ARB_robustness_isolation = 0;
int GLEXT_GL_ARB_sample_locations = 0;
int GLEXT_GL_ARB_sample_shading = 0;
int GLEXT_GL_ARB_sampler_objects = 0;
int GLEXT_GL_ARB_seamless_cube_map = 0;
int GLEXT_GL_ARB_seamless_cubemap_per_texture = 0;
int GLEXT_GL_ARB_separate_shader_objects = 0;
int GLEXT_GL_ARB_shader_atomic_counter_ops = 0;
int GLEXT_GL_ARB_shader_atomic_counters = 0;
int GLEXT_GL_ARB_shader_ballot = 0;
int GLEXT_GL_ARB_shader_bit_encoding = 0;
int GLEXT_GL_ARB_shader_clock = 0;
int GLEXT_GL_ARB_shader_draw_parameters = 0;
int GLEXT_GL_ARB_shader_group_vote = 0;
int GLEXT_GL_ARB_shader_image_load_store = 0;
int GLEXT_GL_ARB_shader_image_size = 0;
int GLEXT_GL_ARB_shader_objects = 0;
int GLEXT_GL_ARB_shader_precision = 0;
int GLEXT_GL_ARB_shader_stencil_export = 0;
int GLEXT_GL_ARB_shader_storage_buffer_object = 0;
int GLEXT_GL_ARB_shader_subroutine = 0;
int GLEXT_GL_ARB_shader_texture_image_samples = 0;
int GLEXT_GL_ARB_shader_texture_lod = 0;
int GLEXT_GL_ARB_shader_viewport_layer_array = 0;
int GLEXT_GL_ARB_shading_language_100 = 0;
int GLEXT_GL_ARB_shading_language_420pack = 0;
int GLEXT_GL_ARB_shading_language_include = 0;
int GLEXT_GL_ARB_shading_language_packing = 0;
int GLEXT_GL_ARB_shadow = 0;
int GLEXT_GL_ARB_shadow_ambient = 0;
int GLEXT_GL_ARB_sparse_buffer = 0;
int GLEXT_GL_ARB_sparse_texture = 0;
int GLEXT_GL_ARB_sparse_texture2 = 0;
int GLEXT_GL_ARB_sparse_texture_clamp = 0;
int GLEXT_GL_ARB_spirv_extensions = 0;
int GLEXT_GL_ARB_stencil_texturing = 0;
int GLEXT_GL_ARB_sync = 0;
int GLEXT_GL_ARB_tessellation_shader = 0;
int GLEXT_GL_ARB_texture_barrier = 0;
int GLEXT_GL_ARB_texture_border_clamp = 0;
int GLEXT_GL_ARB_texture_buffer_object = 0;
int GLEXT_GL_ARB_texture_buffer_object_rgb32 = 0;
int GLEXT_GL_ARB_texture_buffer_range = 0;
int GLEXT_GL_ARB_texture_compression = 0;
int GLEXT_GL_ARB_texture_compression_bptc = 0;
int GLEXT_GL_ARB_texture_compression_rgtc = 0;
int GLEXT_GL_ARB_texture_cube_map = 0;
int GLEXT_GL_ARB_texture_cube_map_array = 0;
int GLEXT_GL_ARB_texture_env_add = 0;
int GLEXT_GL_ARB_texture_env_combine = 0;
int GLEXT_GL_ARB_texture_env_crossbar = 0;
int GLEXT_GL_ARB_texture_env_dot3 = 0;
int GLEXT_GL_ARB_texture_filter_anisotropic = 0;
int GLEXT_GL_ARB_texture_filter_minmax = 0;
int GLEXT_GL_ARB_texture_float = 0;
int GLEXT_GL_ARB_texture_gather = 0;
int GLEXT_GL_ARB_texture_mirror_clamp_to_edge = 0;
int GLEXT_GL_ARB_texture_mirrored_repeat = 0;
int GLEXT_GL_ARB_texture_multisample = 0;
int GLEXT_GL_ARB_texture_non_power_of_two = 0;
int GLEXT_GL_ARB_texture_query_levels = 0;
int GLEXT_GL_ARB_texture_query_lod = 0;
int GLEXT_GL_ARB_texture_rectangle = 0;
int GLEXT_GL_ARB_texture_rg = 0;
int GLEXT_GL_ARB_texture_rgb10_a2ui = 0;
int GLEXT_GL_ARB_texture_stencil8 = 0;
int GLEXT_GL_ARB_texture_storage = 0;
int GLEXT_GL_ARB_texture_storage_multisample = 0;
int GLEXT_GL_ARB_texture_swizzle = 0;
int GLEXT_GL_ARB_texture_view = 0;
int GLEXT_GL_ARB_timer_query = 0;
int GLEXT_GL_ARB_transform_feedback2 = 0;
int GLEXT_GL_ARB_transform_feedback3 = 0;
int GLEXT_GL_ARB_transform_feedback_instanced = 0;
int GLEXT_GL_ARB_transform_feedback_overflow_query = 0;
int GLEXT_GL_ARB_transpose_matrix = 0;
int GLEXT_GL_ARB_uniform_buffer_object = 0;
int GLEXT_GL_ARB_vertex_array_bgra = 0;
int GLEXT_GL_ARB_vertex_array_object = 0;
int GLEXT_GL_ARB_vertex_attrib_64bit = 0;
int GLEXT_GL_ARB_vertex_attrib_binding = 0;
int GLEXT_GL_ARB_vertex_blend = 0;
int GLEXT_GL_ARB_vertex_buffer_object = 0;
int GLEXT_GL_ARB_vertex_program = 0;
int GLEXT_GL_ARB_vertex_shader = 0;
int GLEXT_GL_ARB_vertex_type_10f_11f_11f_rev = 0;
int GLEXT_GL_ARB_vertex_type_2_10_10_10_rev = 0;
int GLEXT_GL_ARB_viewport_array = 0;
int GLEXT_GL_ARB_window_pos = 0;
int GLEXT_GL_ATI_draw_buffers = 0;
int GLEXT_GL_ATI_element_array = 0;
int GLEXT_GL_ATI_envmap_bumpmap = 0;
int GLEXT_GL_ATI_fragment_shader = 0;
int GLEXT_GL_ATI_map_object_buffer = 0;
int GLEXT_GL_ATI_meminfo = 0;
int GLEXT_GL_ATI_pixel_format_float = 0;
int GLEXT_GL_ATI_pn_triangles = 0;
int GLEXT_GL_ATI_separate_stencil = 0;
int GLEXT_GL_ATI_text_fragment_shader = 0;
int GLEXT_GL_ATI_texture_env_combine3 = 0;
int GLEXT_GL_ATI_texture_float = 0;
int GLEXT_GL_ATI_texture_mirror_once = 0;
int GLEXT_GL_ATI_vertex_array_object = 0;
int GLEXT_GL_ATI_vertex_attrib_array_object = 0;
int GLEXT_GL_ATI_vertex_streams = 0;
int GLEXT_GL_EXT_422_pixels = 0;
int GLEXT_GL_EXT_EGL_image_storage = 0;
int GLEXT_GL_EXT_EGL_sync = 0;
int GLEXT_GL_EXT_abgr = 0;
int GLEXT_GL_EXT_bgra = 0;
int GLEXT_GL_EXT_bindable_uniform = 0;
int GLEXT_GL_EXT_blend_color = 0;
int GLEXT_GL_EXT_blend_equation_separate = 0;
int GLEXT_GL_EXT_blend_func_separate = 0;
int GLEXT_GL_EXT_blend_logic_op = 0;
int GLEXT_GL_EXT_blend_minmax = 0;
int GLEXT_GL_EXT_blend_subtract = 0;
int GLEXT_GL_EXT_clip_volume_hint = 0;
int GLEXT_GL_EXT_cmyka = 0;
int GLEXT_GL_EXT_color_subtable = 0;
int GLEXT_GL_EXT_compiled_vertex_array = 0;
int GLEXT_GL_EXT_convolution = 0;
int GLEXT_GL_EXT_coordinate_frame = 0;
int GLEXT_GL_EXT_copy_texture = 0;
int GLEXT_GL_EXT_cull_vertex = 0;
int GLEXT_GL_EXT_debug_label = 0;
int GLEXT_GL_EXT_debug_marker = 0;
int GLEXT_GL_EXT_depth_bounds_test = 0;
int GLEXT_GL_EXT_direct_state_access = 0;
int GLEXT_GL_EXT_draw_buffers2 = 0;
int GLEXT_GL_EXT_draw_instanced = 0;
int GLEXT_GL_EXT_draw_range_elements = 0;
int GLEXT_GL_EXT_external_buffer = 0;
int GLEXT_GL_EXT_fog_coord = 0;
int GLEXT_GL_EXT_fragment_shading_rate = 0;
int GLEXT_GL_EXT_framebuffer_blit = 0;
int GLEXT_GL_EXT_framebuffer_blit_layers = 0;
int GLEXT_GL_EXT_framebuffer_multisample = 0;
int GLEXT_GL_EXT_framebuffer_multisample_blit_scaled = 0;
int GLEXT_GL_EXT_framebuffer_object = 0;
int GLEXT_GL_EXT_framebuffer_sRGB = 0;
int GLEXT_GL_EXT_geometry_shader4 = 0;
int GLEXT_GL_EXT_gpu_program_parameters = 0;
int GLEXT_GL_EXT_gpu_shader4 = 0;
int GLEXT_GL_EXT_histogram = 0;
int GLEXT_GL_EXT_index_array_formats = 0;
int GLEXT_GL_EXT_index_func = 0;
int GLEXT_GL_EXT_index_material = 0;
int GLEXT_GL_EXT_index_texture = 0;
int GLEXT_GL_EXT_light_texture = 0;
int GLEXT_GL_EXT_memory_object = 0;
int GLEXT_GL_EXT_memory_object_fd = 0;
int GLEXT_GL_EXT_memory_object_win32 = 0;
int GLEXT_GL_EXT_mesh_shader = 0;
int GLEXT_GL_EXT_misc_attribute = 0;
int GLEXT_GL_EXT_multi_draw_arrays = 0;
int GLEXT_GL_EXT_multisample = 0;
int GLEXT_GL_EXT_multiview_tessellation_geometry_shader = 0;
int GLEXT_GL_EXT_multiview_texture_multisample = 0;
int GLEXT_GL_EXT_multiview_timer_query = 0;
int GLEXT_GL_EXT_packed_depth_stencil = 0;
int GLEXT_GL_EXT_packed_float = 0;
int GLEXT_GL_EXT_packed_pixels = 0;
int GLEXT_GL_EXT_paletted_texture = 0;
int GLEXT_GL_EXT_pixel_buffer_object = 0;
int GLEXT_GL_EXT_pixel_transform = 0;
int GLEXT_GL_EXT_pixel_transform_color_table = 0;
int GLEXT_GL_EXT_point_parameters = 0;
int GLEXT_GL_EXT_polygon_offset = 0;
int GLEXT_GL_EXT_polygon_offset_clamp = 0;
int GLEXT_GL_EXT_post_depth_coverage = 0;
int GLEXT_GL_EXT_provoking_vertex = 0;
int GLEXT_GL_EXT_raster_multisample = 0;
int GLEXT_GL_EXT_rescale_normal = 0;
int GLEXT_GL_EXT_secondary_color = 0;
int GLEXT_GL_EXT_semaphore = 0;
int GLEXT_GL_EXT_semaphore_fd = 0;
int GLEXT_GL_EXT_semaphore_win32 = 0;
int GLEXT_GL_EXT_separate_shader_objects = 0;
int GLEXT_GL_EXT_separate_specular_color = 0;
int GLEXT_GL_EXT_shader_framebuffer_fetch = 0;
int GLEXT_GL_EXT_shader_framebuffer_fetch_non_coherent = 0;
int GLEXT_GL_EXT_shader_image_load_formatted = 0;
int GLEXT_GL_EXT_shader_image_load_store = 0;
int GLEXT_GL_EXT_shader_integer_mix = 0;
int GLEXT_GL_EXT_shader_samples_identical = 0;
int GLEXT_GL_EXT_shadow_funcs = 0;
int GLEXT_GL_EXT_shared_texture_palette = 0;
int GLEXT_GL_EXT_sparse_texture2 = 0;
int GLEXT_GL_EXT_stencil_clear_tag = 0;
int GLEXT_GL_EXT_stencil_two_side = 0;
int GLEXT_GL_EXT_stencil_wrap = 0;
int GLEXT_GL_EXT_subtexture = 0;
int GLEXT_GL_EXT_texture = 0;
int GLEXT_GL_EXT_texture3D = 0;
int GLEXT_GL_EXT_texture_array = 0;
int GLEXT_GL_EXT_texture_buffer_object = 0;
int GLEXT_GL_EXT_texture_compression_latc = 0;
int GLEXT_GL_EXT_texture_compression_rgtc = 0;
int GLEXT_GL_EXT_texture_compression_s3tc = 0;
int GLEXT_GL_EXT_texture_cube_map = 0;
int GLEXT_GL_EXT_texture_env_add = 0;
int GLEXT_GL_EXT_texture_env_combine = 0;
int GLEXT_GL_EXT_texture_env_dot3 = 0;
int GLEXT_GL_EXT_texture_filter_anisotropic = 0;
int GLEXT_GL_EXT_texture_filter_minmax = 0;
int GLEXT_GL_EXT_texture_integer = 0;
int GLEXT_GL_EXT_texture_lod_bias = 0;
int GLEXT_GL_EXT_texture_mirror_clamp = 0;
int GLEXT_GL_EXT_texture_object = 0;
int GLEXT_GL_EXT_texture_perturb_normal = 0;
int GLEXT_GL_EXT_texture_sRGB = 0;
int GLEXT_GL_EXT_texture_sRGB_R8 = 0;
int GLEXT_GL_EXT_texture_sRGB_RG8 = 0;
int GLEXT_GL_EXT_texture_sRGB_decode = 0;
int GLEXT_GL_EXT_texture_shadow_lod = 0;
int GLEXT_GL_EXT_texture_shared_exponent = 0;
int GLEXT_GL_EXT_texture_snorm = 0;
int GLEXT_GL_EXT_texture_storage = 0;
int GLEXT_GL_EXT_texture_swizzle = 0;
int GLEXT_GL_EXT_timer_query = 0;
int GLEXT_GL_EXT_transform_feedback = 0;
int GLEXT_GL_EXT_vertex_array = 0;
int GLEXT_GL_EXT_vertex_array_bgra = 0;
int GLEXT_GL_EXT_vertex_attrib_64bit = 0;
int GLEXT_GL_EXT_vertex_shader = 0;
int GLEXT_GL_EXT_vertex_weighting = 0;
int GLEXT_GL_EXT_win32_keyed_mutex = 0;
int GLEXT_GL_EXT_window_rectangles = 0;
int GLEXT_GL_EXT_x11_sync_object = 0;
int GLEXT_GL_GREMEDY_frame_terminator = 0;
int GLEXT_GL_GREMEDY_string_marker = 0;
int GLEXT_GL_HP_convolution_border_modes = 0;
int GLEXT_GL_HP_image_transform = 0;
int GLEXT_GL_HP_occlusion_test = 0;
int GLEXT_GL_HP_texture_lighting = 0;
int GLEXT_GL_IBM_cull_vertex = 0;
int GLEXT_GL_IBM_multimode_draw_arrays = 0;
int GLEXT_GL_IBM_rasterpos_clip = 0;
int GLEXT_GL_IBM_static_data = 0;
int GLEXT_GL_IBM_texture_mirrored_repeat = 0;
int GLEXT_GL_IBM_vertex_array_lists = 0;
int GLEXT_GL_INGR_blend_func_separate = 0;
int GLEXT_GL_INGR_color_clamp = 0;
int GLEXT_GL_INGR_interlace_read = 0;
int GLEXT_GL_INTEL_blackhole_render = 0;
int GLEXT_GL_INTEL_conservative_rasterization = 0;
int GLEXT_GL_INTEL_fragment_shader_ordering = 0;
int GLEXT_GL_INTEL_framebuffer_CMAA = 0;
int GLEXT_GL_INTEL_map_texture = 0;
int GLEXT_GL_INTEL_parallel_arrays = 0;
int GLEXT_GL_INTEL_performance_query = 0;
int GLEXT_GL_KHR_blend_equation_advanced = 0;
int GLEXT_GL_KHR_blend_equation_advanced_coherent = 0;
int GLEXT_GL_KHR_context_flush_control = 0;
int GLEXT_GL_KHR_debug = 0;
int GLEXT_GL_KHR_no_error = 0;
int GLEXT_GL_KHR_parallel_shader_compile = 0;
int GLEXT_GL_KHR_robust_buffer_access_behavior = 0;
int GLEXT_GL_KHR_robustness = 0;
int GLEXT_GL_KHR_shader_subgroup = 0;
int GLEXT_GL_KHR_texture_compression_astc_hdr = 0;
int GLEXT_GL_KHR_texture_compression_astc_ldr = 0;
int GLEXT_GL_KHR_texture_compression_astc_sliced_3d = 0;
int GLEXT_GL_MESAX_texture_stack = 0;
int GLEXT_GL_MESA_framebuffer_flip_x = 0;
int GLEXT_GL_MESA_framebuffer_flip_y = 0;
int GLEXT_GL_MESA_framebuffer_swap_xy = 0;
int GLEXT_GL_MESA_pack_invert = 0;
int GLEXT_GL_MESA_program_binary_formats = 0;
int GLEXT_GL_MESA_resize_buffers = 0;
int GLEXT_GL_MESA_shader_integer_functions = 0;
int GLEXT_GL_MESA_texture_const_bandwidth = 0;
int GLEXT_GL_MESA_tile_raster_order = 0;
int GLEXT_GL_MESA_window_pos = 0;
int GLEXT_GL_MESA_ycbcr_texture = 0;
int GLEXT_GL_NVX_blend_equation_advanced_multi_draw_buffers = 0;
int GLEXT_GL_NVX_conditional_render = 0;
int GLEXT_GL_NVX_gpu_memory_info = 0;
int GLEXT_GL_NVX_gpu_multicast2 = 0;
int GLEXT_GL_NVX_linked_gpu_multicast = 0;
int GLEXT_GL_NVX_progress_fence = 0;
int GLEXT_GL_NV_alpha_to_coverage_dither_control = 0;
int GLEXT_GL_NV_bindless_multi_draw_indirect = 0;
int GLEXT_GL_NV_bindless_multi_draw_indirect_count = 0;
int GLEXT_GL_NV_bindless_texture = 0;
int GLEXT_GL_NV_blend_equation_advanced = 0;
int GLEXT_GL_NV_blend_equation_advanced_coherent = 0;
int GLEXT_GL_NV_blend_minmax_factor = 0;
int GLEXT_GL_NV_blend_square = 0;
int GLEXT_GL_NV_clip_space_w_scaling = 0;
int GLEXT_GL_NV_command_list = 0;
int GLEXT_GL_NV_compute_program5 = 0;
int GLEXT_GL_NV_compute_shader_derivatives = 0;
int GLEXT_GL_NV_conditional_render = 0;
int GLEXT_GL_NV_conservative_raster = 0;
int GLEXT_GL_NV_conservative_raster_dilate = 0;
int GLEXT_GL_NV_conservative_raster_pre_snap = 0;
int GLEXT_GL_NV_conservative_raster_pre_snap_triangles = 0;
int GLEXT_GL_NV_conservative_raster_underestimation = 0;
int GLEXT_GL_NV_copy_depth_to_color = 0;
int GLEXT_GL_NV_copy_image = 0;
int GLEXT_GL_NV_deep_texture3D = 0;
int GLEXT_GL_NV_depth_buffer_float = 0;
int GLEXT_GL_NV_depth_clamp = 0;
int GLEXT_GL_NV_draw_texture = 0;
int GLEXT_GL_NV_draw_vulkan_image = 0;
int GLEXT_GL_NV_evaluators = 0;
int GLEXT_GL_NV_explicit_multisample = 0;
int GLEXT_GL_NV_fence = 0;
int GLEXT_GL_NV_fill_rectangle = 0;
int GLEXT_GL_NV_float_buffer = 0;
int GLEXT_GL_NV_fog_distance = 0;
int GLEXT_GL_NV_fragment_coverage_to_color = 0;
int GLEXT_GL_NV_fragment_program = 0;
int GLEXT_GL_NV_fragment_program2 = 0;
int GLEXT_GL_NV_fragment_program4 = 0;
int GLEXT_GL_NV_fragment_program_option = 0;
int GLEXT_GL_NV_fragment_shader_barycentric = 0;
int GLEXT_GL_NV_fragment_shader_interlock = 0;
int GLEXT_GL_NV_framebuffer_mixed_samples = 0;
int GLEXT_GL_NV_framebuffer_multisample_coverage = 0;
int GLEXT_GL_NV_geometry_program4 = 0;
int GLEXT_GL_NV_geometry_shader4 = 0;
int GLEXT_GL_NV_geometry_shader_passthrough = 0;
int GLEXT_GL_NV_gpu_multicast = 0;
int GLEXT_GL_NV_gpu_program4 = 0;
int GLEXT_GL_NV_gpu_program5 = 0;
int GLEXT_GL_NV_gpu_program5_mem_extended = 0;
int GLEXT_GL_NV_gpu_shader5 = 0;
int GLEXT_GL_NV_half_float = 0;
int GLEXT_GL_NV_internalformat_sample_query = 0;
int GLEXT_GL_NV_light_max_exponent = 0;
int GLEXT_GL_NV_memory_attachment = 0;
int GLEXT_GL_NV_memory_object_sparse = 0;
int GLEXT_GL_NV_mesh_shader = 0;
int GLEXT_GL_NV_multisample_coverage = 0;
int GLEXT_GL_NV_multisample_filter_hint = 0;
int GLEXT_GL_NV_occlusion_query = 0;
int GLEXT_GL_NV_packed_depth_stencil = 0;
int GLEXT_GL_NV_parameter_buffer_object = 0;
int GLEXT_GL_NV_parameter_buffer_object2 = 0;
int GLEXT_GL_NV_path_rendering = 0;
int GLEXT_GL_NV_path_rendering_shared_edge = 0;
int GLEXT_GL_NV_pixel_data_range = 0;
int GLEXT_GL_NV_point_sprite = 0;
int GLEXT_GL_NV_present_video = 0;
int GLEXT_GL_NV_primitive_restart = 0;
int GLEXT_GL_NV_primitive_shading_rate = 0;
int GLEXT_GL_NV_query_resource = 0;
int GLEXT_GL_NV_query_resource_tag = 0;
int GLEXT_GL_NV_register_combiners = 0;
int GLEXT_GL_NV_register_combiners2 = 0;
int GLEXT_GL_NV_representative_fragment_test = 0;
int GLEXT_GL_NV_robustness_video_memory_purge = 0;
int GLEXT_GL_NV_sample_locations = 0;
int GLEXT_GL_NV_sample_mask_override_coverage = 0;
int GLEXT_GL_NV_scissor_exclusive = 0;
int GLEXT_GL_NV_shader_atomic_counters = 0;
int GLEXT_GL_NV_shader_atomic_float = 0;
int GLEXT_GL_NV_shader_atomic_float64 = 0;
int GLEXT_GL_NV_shader_atomic_fp16_vector = 0;
int GLEXT_GL_NV_shader_atomic_int64 = 0;
int GLEXT_GL_NV_shader_buffer_load = 0;
int GLEXT_GL_NV_shader_buffer_store = 0;
int GLEXT_GL_NV_shader_storage_buffer_object = 0;
int GLEXT_GL_NV_shader_subgroup_partitioned = 0;
int GLEXT_GL_NV_shader_texture_footprint = 0;
int GLEXT_GL_NV_shader_thread_group = 0;
int GLEXT_GL_NV_shader_thread_shuffle = 0;
int GLEXT_GL_NV_shading_rate_image = 0;
int GLEXT_GL_NV_stereo_view_rendering = 0;
int GLEXT_GL_NV_tessellation_program5 = 0;
int GLEXT_GL_NV_texgen_emboss = 0;
int GLEXT_GL_NV_texgen_reflection = 0;
int GLEXT_GL_NV_texture_barrier = 0;
int GLEXT_GL_NV_texture_compression_vtc = 0;
int GLEXT_GL_NV_texture_env_combine4 = 0;
int GLEXT_GL_NV_texture_expand_normal = 0;
int GLEXT_GL_NV_texture_multisample = 0;
int GLEXT_GL_NV_texture_rectangle = 0;
int GLEXT_GL_NV_texture_rectangle_compressed = 0;
int GLEXT_GL_NV_texture_shader = 0;
int GLEXT_GL_NV_texture_shader2 = 0;
int GLEXT_GL_NV_texture_shader3 = 0;
int GLEXT_GL_NV_timeline_semaphore = 0;
int GLEXT_GL_NV_transform_feedback = 0;
int GLEXT_GL_NV_transform_feedback2 = 0;
int GLEXT_GL_NV_uniform_buffer_std430_layout = 0;
int GLEXT_GL_NV_uniform_buffer_unified_memory = 0;
int GLEXT_GL_NV_vdpau_interop = 0;
int GLEXT_GL_NV_vdpau_interop2 = 0;
int GLEXT_GL_NV_vertex_array_range = 0;
int GLEXT_GL_NV_vertex_array_range2 = 0;
int GLEXT_GL_NV_vertex_attrib_integer_64bit = 0;
int GLEXT_GL_NV_vertex_buffer_unified_memory = 0;
int GLEXT_GL_NV_vertex_program = 0;
int GLEXT_GL_NV_vertex_program1_1 = 0;
int GLEXT_GL_NV_vertex_program2 = 0;
int GLEXT_GL_NV_vertex_program2_option = 0;
int GLEXT_GL_NV_vertex_program3 = 0;
int GLEXT_GL_NV_vertex_program4 = 0;
int GLEXT_GL_NV_video_capture = 0;
int GLEXT_GL_NV_viewport_array2 = 0;
int GLEXT_GL_NV_viewport_swizzle = 0;
int GLEXT_GL_OES_byte_coordinates = 0;
int GLEXT_GL_OES_compressed_paletted_texture = 0;
int GLEXT_GL_OES_fixed_point = 0;
int GLEXT_GL_OES_query_matrix = 0;
int GLEXT_GL_OES_read_format = 0;
int GLEXT_GL_OES_single_precision = 0;
int GLEXT_GL_OML_interlace = 0;
int GLEXT_GL_OML_resample = 0;
int GLEXT_GL_OML_subsample = 0;
int GLEXT_GL_OVR_multiview = 0;
int GLEXT_GL_OVR_multiview2 = 0;
int GLEXT_GL_PGI_misc_hints = 0;
int GLEXT_GL_PGI_vertex_hints = 0;
int GLEXT_GL_REND_screen_coordinates = 0;
int GLEXT_GL_S3_s3tc = 0;
int GLEXT_GL_SGIS_detail_texture = 0;
int GLEXT_GL_SGIS_fog_function = 0;
int GLEXT_GL_SGIS_generate_mipmap = 0;
int GLEXT_GL_SGIS_multisample = 0;
int GLEXT_GL_SGIS_pixel_texture = 0;
int GLEXT_GL_SGIS_point_line_texgen = 0;
int GLEXT_GL_SGIS_point_parameters = 0;
int GLEXT_GL_SGIS_sharpen_texture = 0;
int GLEXT_GL_SGIS_texture4D = 0;
int GLEXT_GL_SGIS_texture_border_clamp = 0;
int GLEXT_GL_SGIS_texture_color_mask = 0;
int GLEXT_GL_SGIS_texture_edge_clamp = 0;
int GLEXT_GL_SGIS_texture_filter4 = 0;
int GLEXT_GL_SGIS_texture_lod = 0;
int GLEXT_GL_SGIS_texture_select = 0;
int GLEXT_GL_SGIX_async = 0;
int GLEXT_GL_SGIX_async_histogram = 0;
int GLEXT_GL_SGIX_async_pixel = 0;
int GLEXT_GL_SGIX_blend_alpha_minmax = 0;
int GLEXT_GL_SGIX_calligraphic_fragment = 0;
int GLEXT_GL_SGIX_clipmap = 0;
int GLEXT_GL_SGIX_convolution_accuracy = 0;
int GLEXT_GL_SGIX_depth_pass_instrument = 0;
int GLEXT_GL_SGIX_depth_texture = 0;
int GLEXT_GL_SGIX_flush_raster = 0;
int GLEXT_GL_SGIX_fog_offset = 0;
int GLEXT_GL_SGIX_fragment_lighting = 0;
int GLEXT_GL_SGIX_framezoom = 0;
int GLEXT_GL_SGIX_igloo_interface = 0;
int GLEXT_GL_SGIX_instruments = 0;
int GLEXT_GL_SGIX_interlace = 0;
int GLEXT_GL_SGIX_ir_instrument1 = 0;
int GLEXT_GL_SGIX_list_priority = 0;
int GLEXT_GL_SGIX_pixel_texture = 0;
int GLEXT_GL_SGIX_pixel_tiles = 0;
int GLEXT_GL_SGIX_polynomial_ffd = 0;
int GLEXT_GL_SGIX_reference_plane = 0;
int GLEXT_GL_SGIX_resample = 0;
int GLEXT_GL_SGIX_scalebias_hint = 0;
int GLEXT_GL_SGIX_shadow = 0;
int GLEXT_GL_SGIX_shadow_ambient = 0;
int GLEXT_GL_SGIX_sprite = 0;
int GLEXT_GL_SGIX_subsample = 0;
int GLEXT_GL_SGIX_tag_sample_buffer = 0;
int GLEXT_GL_SGIX_texture_add_env = 0;
int GLEXT_GL_SGIX_texture_coordinate_clamp = 0;
int GLEXT_GL_SGIX_texture_lod_bias = 0;
int GLEXT_GL_SGIX_texture_multi_buffer = 0;
int GLEXT_GL_SGIX_texture_scale_bias = 0;
int GLEXT_GL_SGIX_vertex_preclip = 0;
int GLEXT_GL_SGIX_ycrcb = 0;
int GLEXT_GL_SGIX_ycrcb_subsample = 0;
int GLEXT_GL_SGIX_ycrcba = 0;
int GLEXT_GL_SGI_color_matrix = 0;
int GLEXT_GL_SGI_color_table = 0;
int GLEXT_GL_SGI_texture_color_table = 0;
int GLEXT_GL_SUNX_constant_data = 0;
int GLEXT_GL_SUN_convolution_border_modes = 0;
int GLEXT_GL_SUN_global_alpha = 0;
int GLEXT_GL_SUN_mesh_array = 0;
int GLEXT_GL_SUN_slice_accum = 0;
int GLEXT_GL_SUN_triangle_list = 0;
int GLEXT_GL_SUN_vertex = 0;
int GLEXT_GL_WIN_phong_shading = 0;
int GLEXT_GL_WIN_specular_fog = 0;

PFNGLACCUMXOESPROC glext_glAccumxOES = NULL;
PFNGLACQUIREKEYEDMUTEXWIN32EXTPROC glext_glAcquireKeyedMutexWin32EXT = NULL;
PFNGLACTIVEPROGRAMEXTPROC glext_glActiveProgramEXT = NULL;
PFNGLACTIVESHADERPROGRAMPROC glext_glActiveShaderProgram = NULL;
PFNGLACTIVESTENCILFACEEXTPROC glext_glActiveStencilFaceEXT = NULL;
PFNGLACTIVETEXTUREPROC glext_glActiveTexture = NULL;
PFNGLACTIVETEXTUREARBPROC glext_glActiveTextureARB = NULL;
PFNGLACTIVEVARYINGNVPROC glext_glActiveVaryingNV = NULL;
PFNGLALPHAFRAGMENTOP1ATIPROC glext_glAlphaFragmentOp1ATI = NULL;
PFNGLALPHAFRAGMENTOP2ATIPROC glext_glAlphaFragmentOp2ATI = NULL;
PFNGLALPHAFRAGMENTOP3ATIPROC glext_glAlphaFragmentOp3ATI = NULL;
PFNGLALPHAFUNCXOESPROC glext_glAlphaFuncxOES = NULL;
PFNGLALPHATOCOVERAGEDITHERCONTROLNVPROC glext_glAlphaToCoverageDitherControlNV
  = NULL;
PFNGLAPPLYFRAMEBUFFERATTACHMENTCMAAINTELPROC
glext_glApplyFramebufferAttachmentCMAAINTEL = NULL;
PFNGLAPPLYTEXTUREEXTPROC glext_glApplyTextureEXT = NULL;
PFNGLAREPROGRAMSRESIDENTNVPROC glext_glAreProgramsResidentNV = NULL;
PFNGLARETEXTURESRESIDENTEXTPROC glext_glAreTexturesResidentEXT = NULL;
PFNGLARRAYELEMENTEXTPROC glext_glArrayElementEXT = NULL;
PFNGLARRAYOBJECTATIPROC glext_glArrayObjectATI = NULL;
PFNGLASYNCCOPYBUFFERSUBDATANVXPROC glext_glAsyncCopyBufferSubDataNVX = NULL;
PFNGLASYNCCOPYIMAGESUBDATANVXPROC glext_glAsyncCopyImageSubDataNVX = NULL;
PFNGLASYNCMARKERSGIXPROC glext_glAsyncMarkerSGIX = NULL;
PFNGLATTACHOBJECTARBPROC glext_glAttachObjectARB = NULL;
PFNGLATTACHSHADERPROC glext_glAttachShader = NULL;
PFNGLBEGINCONDITIONALRENDERPROC glext_glBeginConditionalRender = NULL;
PFNGLBEGINCONDITIONALRENDERNVPROC glext_glBeginConditionalRenderNV = NULL;
PFNGLBEGINCONDITIONALRENDERNVXPROC glext_glBeginConditionalRenderNVX = NULL;
PFNGLBEGINFRAGMENTSHADERATIPROC glext_glBeginFragmentShaderATI = NULL;
PFNGLBEGINOCCLUSIONQUERYNVPROC glext_glBeginOcclusionQueryNV = NULL;
PFNGLBEGINPERFMONITORAMDPROC glext_glBeginPerfMonitorAMD = NULL;
PFNGLBEGINPERFQUERYINTELPROC glext_glBeginPerfQueryINTEL = NULL;
PFNGLBEGINQUERYPROC glext_glBeginQuery = NULL;
PFNGLBEGINQUERYARBPROC glext_glBeginQueryARB = NULL;
PFNGLBEGINQUERYINDEXEDPROC glext_glBeginQueryIndexed = NULL;
PFNGLBEGINTRANSFORMFEEDBACKPROC glext_glBeginTransformFeedback = NULL;
PFNGLBEGINTRANSFORMFEEDBACKEXTPROC glext_glBeginTransformFeedbackEXT = NULL;
PFNGLBEGINTRANSFORMFEEDBACKNVPROC glext_glBeginTransformFeedbackNV = NULL;
PFNGLBEGINVERTEXSHADEREXTPROC glext_glBeginVertexShaderEXT = NULL;
PFNGLBEGINVIDEOCAPTURENVPROC glext_glBeginVideoCaptureNV = NULL;
PFNGLBINDATTRIBLOCATIONPROC glext_glBindAttribLocation = NULL;
PFNGLBINDATTRIBLOCATIONARBPROC glext_glBindAttribLocationARB = NULL;
PFNGLBINDBUFFERPROC glext_glBindBuffer = NULL;
PFNGLBINDBUFFERARBPROC glext_glBindBufferARB = NULL;
PFNGLBINDBUFFERBASEPROC glext_glBindBufferBase = NULL;
PFNGLBINDBUFFERBASEEXTPROC glext_glBindBufferBaseEXT = NULL;
PFNGLBINDBUFFERBASENVPROC glext_glBindBufferBaseNV = NULL;
PFNGLBINDBUFFEROFFSETEXTPROC glext_glBindBufferOffsetEXT = NULL;
PFNGLBINDBUFFEROFFSETNVPROC glext_glBindBufferOffsetNV = NULL;
PFNGLBINDBUFFERRANGEPROC glext_glBindBufferRange = NULL;
PFNGLBINDBUFFERRANGEEXTPROC glext_glBindBufferRangeEXT = NULL;
PFNGLBINDBUFFERRANGENVPROC glext_glBindBufferRangeNV = NULL;
PFNGLBINDBUFFERSBASEPROC glext_glBindBuffersBase = NULL;
PFNGLBINDBUFFERSRANGEPROC glext_glBindBuffersRange = NULL;
PFNGLBINDFRAGDATALOCATIONPROC glext_glBindFragDataLocation = NULL;
PFNGLBINDFRAGDATALOCATIONEXTPROC glext_glBindFragDataLocationEXT = NULL;
PFNGLBINDFRAGDATALOCATIONINDEXEDPROC glext_glBindFragDataLocationIndexed
  = NULL;
PFNGLBINDFRAGMENTSHADERATIPROC glext_glBindFragmentShaderATI = NULL;
PFNGLBINDFRAMEBUFFERPROC glext_glBindFramebuffer = NULL;
PFNGLBINDFRAMEBUFFEREXTPROC glext_glBindFramebufferEXT = NULL;
PFNGLBINDIMAGETEXTUREPROC glext_glBindImageTexture = NULL;
PFNGLBINDIMAGETEXTUREEXTPROC glext_glBindImageTextureEXT = NULL;
PFNGLBINDIMAGETEXTURESPROC glext_glBindImageTextures = NULL;
PFNGLBINDLIGHTPARAMETEREXTPROC glext_glBindLightParameterEXT = NULL;
PFNGLBINDMATERIALPARAMETEREXTPROC glext_glBindMaterialParameterEXT = NULL;
PFNGLBINDMULTITEXTUREEXTPROC glext_glBindMultiTextureEXT = NULL;
PFNGLBINDPARAMETEREXTPROC glext_glBindParameterEXT = NULL;
PFNGLBINDPROGRAMARBPROC glext_glBindProgramARB = NULL;
PFNGLBINDPROGRAMNVPROC glext_glBindProgramNV = NULL;
PFNGLBINDPROGRAMPIPELINEPROC glext_glBindProgramPipeline = NULL;
PFNGLBINDRENDERBUFFERPROC glext_glBindRenderbuffer = NULL;
PFNGLBINDRENDERBUFFEREXTPROC glext_glBindRenderbufferEXT = NULL;
PFNGLBINDSAMPLERPROC glext_glBindSampler = NULL;
PFNGLBINDSAMPLERSPROC glext_glBindSamplers = NULL;
PFNGLBINDSHADINGRATEIMAGENVPROC glext_glBindShadingRateImageNV = NULL;
PFNGLBINDTEXGENPARAMETEREXTPROC glext_glBindTexGenParameterEXT = NULL;
PFNGLBINDTEXTUREPROC glext_glBindTexture = NULL;
PFNGLBINDTEXTUREEXTPROC glext_glBindTextureEXT = NULL;
PFNGLBINDTEXTUREUNITPROC glext_glBindTextureUnit = NULL;
PFNGLBINDTEXTUREUNITPARAMETEREXTPROC glext_glBindTextureUnitParameterEXT
  = NULL;
PFNGLBINDTEXTURESPROC glext_glBindTextures = NULL;
PFNGLBINDTRANSFORMFEEDBACKPROC glext_glBindTransformFeedback = NULL;
PFNGLBINDTRANSFORMFEEDBACKNVPROC glext_glBindTransformFeedbackNV = NULL;
PFNGLBINDVERTEXARRAYPROC glext_glBindVertexArray = NULL;
PFNGLBINDVERTEXARRAYAPPLEPROC glext_glBindVertexArrayAPPLE = NULL;
PFNGLBINDVERTEXBUFFERPROC glext_glBindVertexBuffer = NULL;
PFNGLBINDVERTEXBUFFERSPROC glext_glBindVertexBuffers = NULL;
PFNGLBINDVERTEXSHADEREXTPROC glext_glBindVertexShaderEXT = NULL;
PFNGLBINDVIDEOCAPTURESTREAMBUFFERNVPROC glext_glBindVideoCaptureStreamBufferNV
  = NULL;
PFNGLBINDVIDEOCAPTURESTREAMTEXTURENVPROC
glext_glBindVideoCaptureStreamTextureNV = NULL;
PFNGLBINORMAL3BEXTPROC glext_glBinormal3bEXT = NULL;
PFNGLBINORMAL3BVEXTPROC glext_glBinormal3bvEXT = NULL;
PFNGLBINORMAL3DEXTPROC glext_glBinormal3dEXT = NULL;
PFNGLBINORMAL3DVEXTPROC glext_glBinormal3dvEXT = NULL;
PFNGLBINORMAL3FEXTPROC glext_glBinormal3fEXT = NULL;
PFNGLBINORMAL3FVEXTPROC glext_glBinormal3fvEXT = NULL;
PFNGLBINORMAL3IEXTPROC glext_glBinormal3iEXT = NULL;
PFNGLBINORMAL3IVEXTPROC glext_glBinormal3ivEXT = NULL;
PFNGLBINORMAL3SEXTPROC glext_glBinormal3sEXT = NULL;
PFNGLBINORMAL3SVEXTPROC glext_glBinormal3svEXT = NULL;
PFNGLBINORMALPOINTEREXTPROC glext_glBinormalPointerEXT = NULL;
PFNGLBITMAPXOESPROC glext_glBitmapxOES = NULL;
PFNGLBLENDBARRIERKHRPROC glext_glBlendBarrierKHR = NULL;
PFNGLBLENDBARRIERNVPROC glext_glBlendBarrierNV = NULL;
PFNGLBLENDCOLORPROC glext_glBlendColor = NULL;
PFNGLBLENDCOLOREXTPROC glext_glBlendColorEXT = NULL;
PFNGLBLENDCOLORXOESPROC glext_glBlendColorxOES = NULL;
PFNGLBLENDEQUATIONPROC glext_glBlendEquation = NULL;
PFNGLBLENDEQUATIONEXTPROC glext_glBlendEquationEXT = NULL;
PFNGLBLENDEQUATIONINDEXEDAMDPROC glext_glBlendEquationIndexedAMD = NULL;
PFNGLBLENDEQUATIONSEPARATEPROC glext_glBlendEquationSeparate = NULL;
PFNGLBLENDEQUATIONSEPARATEEXTPROC glext_glBlendEquationSeparateEXT = NULL;
PFNGLBLENDEQUATIONSEPARATEINDEXEDAMDPROC
glext_glBlendEquationSeparateIndexedAMD = NULL;
PFNGLBLENDEQUATIONSEPARATEIPROC glext_glBlendEquationSeparatei = NULL;
PFNGLBLENDEQUATIONSEPARATEIARBPROC glext_glBlendEquationSeparateiARB = NULL;
PFNGLBLENDEQUATIONIPROC glext_glBlendEquationi = NULL;
PFNGLBLENDEQUATIONIARBPROC glext_glBlendEquationiARB = NULL;
PFNGLBLENDFUNCPROC glext_glBlendFunc = NULL;
PFNGLBLENDFUNCINDEXEDAMDPROC glext_glBlendFuncIndexedAMD = NULL;
PFNGLBLENDFUNCSEPARATEPROC glext_glBlendFuncSeparate = NULL;
PFNGLBLENDFUNCSEPARATEEXTPROC glext_glBlendFuncSeparateEXT = NULL;
PFNGLBLENDFUNCSEPARATEINGRPROC glext_glBlendFuncSeparateINGR = NULL;
PFNGLBLENDFUNCSEPARATEINDEXEDAMDPROC glext_glBlendFuncSeparateIndexedAMD
  = NULL;
PFNGLBLENDFUNCSEPARATEIPROC glext_glBlendFuncSeparatei = NULL;
PFNGLBLENDFUNCSEPARATEIARBPROC glext_glBlendFuncSeparateiARB = NULL;
PFNGLBLENDFUNCIPROC glext_glBlendFunci = NULL;
PFNGLBLENDFUNCIARBPROC glext_glBlendFunciARB = NULL;
PFNGLBLENDPARAMETERINVPROC glext_glBlendParameteriNV = NULL;
PFNGLBLITFRAMEBUFFERPROC glext_glBlitFramebuffer = NULL;
PFNGLBLITFRAMEBUFFEREXTPROC glext_glBlitFramebufferEXT = NULL;
PFNGLBLITFRAMEBUFFERLAYEREXTPROC glext_glBlitFramebufferLayerEXT = NULL;
PFNGLBLITFRAMEBUFFERLAYERSEXTPROC glext_glBlitFramebufferLayersEXT = NULL;
PFNGLBLITNAMEDFRAMEBUFFERPROC glext_glBlitNamedFramebuffer = NULL;
PFNGLBUFFERADDRESSRANGENVPROC glext_glBufferAddressRangeNV = NULL;
PFNGLBUFFERATTACHMEMORYNVPROC glext_glBufferAttachMemoryNV = NULL;
PFNGLBUFFERDATAPROC glext_glBufferData = NULL;
PFNGLBUFFERDATAARBPROC glext_glBufferDataARB = NULL;
PFNGLBUFFERPAGECOMMITMENTARBPROC glext_glBufferPageCommitmentARB = NULL;
PFNGLBUFFERPAGECOMMITMENTMEMNVPROC glext_glBufferPageCommitmentMemNV = NULL;
PFNGLBUFFERPARAMETERIAPPLEPROC glext_glBufferParameteriAPPLE = NULL;
PFNGLBUFFERSTORAGEPROC glext_glBufferStorage = NULL;
PFNGLBUFFERSTORAGEEXTERNALEXTPROC glext_glBufferStorageExternalEXT = NULL;
PFNGLBUFFERSTORAGEMEMEXTPROC glext_glBufferStorageMemEXT = NULL;
PFNGLBUFFERSUBDATAPROC glext_glBufferSubData = NULL;
PFNGLBUFFERSUBDATAARBPROC glext_glBufferSubDataARB = NULL;
PFNGLCALLCOMMANDLISTNVPROC glext_glCallCommandListNV = NULL;
PFNGLCHECKFRAMEBUFFERSTATUSPROC glext_glCheckFramebufferStatus = NULL;
PFNGLCHECKFRAMEBUFFERSTATUSEXTPROC glext_glCheckFramebufferStatusEXT = NULL;
PFNGLCHECKNAMEDFRAMEBUFFERSTATUSPROC glext_glCheckNamedFramebufferStatus
  = NULL;
PFNGLCHECKNAMEDFRAMEBUFFERSTATUSEXTPROC glext_glCheckNamedFramebufferStatusEXT
  = NULL;
PFNGLCLAMPCOLORPROC glext_glClampColor = NULL;
PFNGLCLAMPCOLORARBPROC glext_glClampColorARB = NULL;
PFNGLCLEARPROC glext_glClear = NULL;
PFNGLCLEARACCUMXOESPROC glext_glClearAccumxOES = NULL;
PFNGLCLEARBUFFERDATAPROC glext_glClearBufferData = NULL;
PFNGLCLEARBUFFERSUBDATAPROC glext_glClearBufferSubData = NULL;
PFNGLCLEARBUFFERFIPROC glext_glClearBufferfi = NULL;
PFNGLCLEARBUFFERFVPROC glext_glClearBufferfv = NULL;
PFNGLCLEARBUFFERIVPROC glext_glClearBufferiv = NULL;
PFNGLCLEARBUFFERUIVPROC glext_glClearBufferuiv = NULL;
PFNGLCLEARCOLORPROC glext_glClearColor = NULL;
PFNGLCLEARCOLORIIEXTPROC glext_glClearColorIiEXT = NULL;
PFNGLCLEARCOLORIUIEXTPROC glext_glClearColorIuiEXT = NULL;
PFNGLCLEARCOLORXOESPROC glext_glClearColorxOES = NULL;
PFNGLCLEARDEPTHPROC glext_glClearDepth = NULL;
PFNGLCLEARDEPTHDNVPROC glext_glClearDepthdNV = NULL;
PFNGLCLEARDEPTHFPROC glext_glClearDepthf = NULL;
PFNGLCLEARDEPTHFOESPROC glext_glClearDepthfOES = NULL;
PFNGLCLEARDEPTHXOESPROC glext_glClearDepthxOES = NULL;
PFNGLCLEARNAMEDBUFFERDATAPROC glext_glClearNamedBufferData = NULL;
PFNGLCLEARNAMEDBUFFERDATAEXTPROC glext_glClearNamedBufferDataEXT = NULL;
PFNGLCLEARNAMEDBUFFERSUBDATAPROC glext_glClearNamedBufferSubData = NULL;
PFNGLCLEARNAMEDBUFFERSUBDATAEXTPROC glext_glClearNamedBufferSubDataEXT = NULL;
PFNGLCLEARNAMEDFRAMEBUFFERFIPROC glext_glClearNamedFramebufferfi = NULL;
PFNGLCLEARNAMEDFRAMEBUFFERFVPROC glext_glClearNamedFramebufferfv = NULL;
PFNGLCLEARNAMEDFRAMEBUFFERIVPROC glext_glClearNamedFramebufferiv = NULL;
PFNGLCLEARNAMEDFRAMEBUFFERUIVPROC glext_glClearNamedFramebufferuiv = NULL;
PFNGLCLEARSTENCILPROC glext_glClearStencil = NULL;
PFNGLCLEARTEXIMAGEPROC glext_glClearTexImage = NULL;
PFNGLCLEARTEXSUBIMAGEPROC glext_glClearTexSubImage = NULL;
PFNGLCLIENTACTIVETEXTUREARBPROC glext_glClientActiveTextureARB = NULL;
PFNGLCLIENTACTIVEVERTEXSTREAMATIPROC glext_glClientActiveVertexStreamATI
  = NULL;
PFNGLCLIENTATTRIBDEFAULTEXTPROC glext_glClientAttribDefaultEXT = NULL;
PFNGLCLIENTWAITSEMAPHOREUI64NVXPROC glext_glClientWaitSemaphoreui64NVX = NULL;
PFNGLCLIENTWAITSYNCPROC glext_glClientWaitSync = NULL;
PFNGLCLIPCONTROLPROC glext_glClipControl = NULL;
PFNGLCLIPPLANEFOESPROC glext_glClipPlanefOES = NULL;
PFNGLCLIPPLANEXOESPROC glext_glClipPlanexOES = NULL;
PFNGLCOLOR3FVERTEX3FSUNPROC glext_glColor3fVertex3fSUN = NULL;
PFNGLCOLOR3FVERTEX3FVSUNPROC glext_glColor3fVertex3fvSUN = NULL;
PFNGLCOLOR3HNVPROC glext_glColor3hNV = NULL;
PFNGLCOLOR3HVNVPROC glext_glColor3hvNV = NULL;
PFNGLCOLOR3XOESPROC glext_glColor3xOES = NULL;
PFNGLCOLOR3XVOESPROC glext_glColor3xvOES = NULL;
PFNGLCOLOR4FNORMAL3FVERTEX3FSUNPROC glext_glColor4fNormal3fVertex3fSUN = NULL;
PFNGLCOLOR4FNORMAL3FVERTEX3FVSUNPROC glext_glColor4fNormal3fVertex3fvSUN
  = NULL;
PFNGLCOLOR4HNVPROC glext_glColor4hNV = NULL;
PFNGLCOLOR4HVNVPROC glext_glColor4hvNV = NULL;
PFNGLCOLOR4UBVERTEX2FSUNPROC glext_glColor4ubVertex2fSUN = NULL;
PFNGLCOLOR4UBVERTEX2FVSUNPROC glext_glColor4ubVertex2fvSUN = NULL;
PFNGLCOLOR4UBVERTEX3FSUNPROC glext_glColor4ubVertex3fSUN = NULL;
PFNGLCOLOR4UBVERTEX3FVSUNPROC glext_glColor4ubVertex3fvSUN = NULL;
PFNGLCOLOR4XOESPROC glext_glColor4xOES = NULL;
PFNGLCOLOR4XVOESPROC glext_glColor4xvOES = NULL;
PFNGLCOLORFORMATNVPROC glext_glColorFormatNV = NULL;
PFNGLCOLORFRAGMENTOP1ATIPROC glext_glColorFragmentOp1ATI = NULL;
PFNGLCOLORFRAGMENTOP2ATIPROC glext_glColorFragmentOp2ATI = NULL;
PFNGLCOLORFRAGMENTOP3ATIPROC glext_glColorFragmentOp3ATI = NULL;
PFNGLCOLORMASKPROC glext_glColorMask = NULL;
PFNGLCOLORMASKINDEXEDEXTPROC glext_glColorMaskIndexedEXT = NULL;
PFNGLCOLORMASKIPROC glext_glColorMaski = NULL;
PFNGLCOLORPOINTEREXTPROC glext_glColorPointerEXT = NULL;
PFNGLCOLORPOINTERLISTIBMPROC glext_glColorPointerListIBM = NULL;
PFNGLCOLORPOINTERVINTELPROC glext_glColorPointervINTEL = NULL;
PFNGLCOLORSUBTABLEEXTPROC glext_glColorSubTableEXT = NULL;
PFNGLCOLORTABLEEXTPROC glext_glColorTableEXT = NULL;
PFNGLCOLORTABLEPARAMETERFVSGIPROC glext_glColorTableParameterfvSGI = NULL;
PFNGLCOLORTABLEPARAMETERIVSGIPROC glext_glColorTableParameterivSGI = NULL;
PFNGLCOLORTABLESGIPROC glext_glColorTableSGI = NULL;
PFNGLCOMBINERINPUTNVPROC glext_glCombinerInputNV = NULL;
PFNGLCOMBINEROUTPUTNVPROC glext_glCombinerOutputNV = NULL;
PFNGLCOMBINERPARAMETERFNVPROC glext_glCombinerParameterfNV = NULL;
PFNGLCOMBINERPARAMETERFVNVPROC glext_glCombinerParameterfvNV = NULL;
PFNGLCOMBINERPARAMETERINVPROC glext_glCombinerParameteriNV = NULL;
PFNGLCOMBINERPARAMETERIVNVPROC glext_glCombinerParameterivNV = NULL;
PFNGLCOMBINERSTAGEPARAMETERFVNVPROC glext_glCombinerStageParameterfvNV = NULL;
PFNGLCOMMANDLISTSEGMENTSNVPROC glext_glCommandListSegmentsNV = NULL;
PFNGLCOMPILECOMMANDLISTNVPROC glext_glCompileCommandListNV = NULL;
PFNGLCOMPILESHADERPROC glext_glCompileShader = NULL;
PFNGLCOMPILESHADERARBPROC glext_glCompileShaderARB = NULL;
PFNGLCOMPILESHADERINCLUDEARBPROC glext_glCompileShaderIncludeARB = NULL;
PFNGLCOMPRESSEDMULTITEXIMAGE1DEXTPROC glext_glCompressedMultiTexImage1DEXT
  = NULL;
PFNGLCOMPRESSEDMULTITEXIMAGE2DEXTPROC glext_glCompressedMultiTexImage2DEXT
  = NULL;
PFNGLCOMPRESSEDMULTITEXIMAGE3DEXTPROC glext_glCompressedMultiTexImage3DEXT
  = NULL;
PFNGLCOMPRESSEDMULTITEXSUBIMAGE1DEXTPROC
glext_glCompressedMultiTexSubImage1DEXT = NULL;
PFNGLCOMPRESSEDMULTITEXSUBIMAGE2DEXTPROC
glext_glCompressedMultiTexSubImage2DEXT = NULL;
PFNGLCOMPRESSEDMULTITEXSUBIMAGE3DEXTPROC
glext_glCompressedMultiTexSubImage3DEXT = NULL;
PFNGLCOMPRESSEDTEXIMAGE1DPROC glext_glCompressedTexImage1D = NULL;
PFNGLCOMPRESSEDTEXIMAGE1DARBPROC glext_glCompressedTexImage1DARB = NULL;
PFNGLCOMPRESSEDTEXIMAGE2DPROC glext_glCompressedTexImage2D = NULL;
PFNGLCOMPRESSEDTEXIMAGE2DARBPROC glext_glCompressedTexImage2DARB = NULL;
PFNGLCOMPRESSEDTEXIMAGE3DPROC glext_glCompressedTexImage3D = NULL;
PFNGLCOMPRESSEDTEXIMAGE3DARBPROC glext_glCompressedTexImage3DARB = NULL;
PFNGLCOMPRESSEDTEXSUBIMAGE1DPROC glext_glCompressedTexSubImage1D = NULL;
PFNGLCOMPRESSEDTEXSUBIMAGE1DARBPROC glext_glCompressedTexSubImage1DARB = NULL;
PFNGLCOMPRESSEDTEXSUBIMAGE2DPROC glext_glCompressedTexSubImage2D = NULL;
PFNGLCOMPRESSEDTEXSUBIMAGE2DARBPROC glext_glCompressedTexSubImage2DARB = NULL;
PFNGLCOMPRESSEDTEXSUBIMAGE3DPROC glext_glCompressedTexSubImage3D = NULL;
PFNGLCOMPRESSEDTEXSUBIMAGE3DARBPROC glext_glCompressedTexSubImage3DARB = NULL;
PFNGLCOMPRESSEDTEXTUREIMAGE1DEXTPROC glext_glCompressedTextureImage1DEXT
  = NULL;
PFNGLCOMPRESSEDTEXTUREIMAGE2DEXTPROC glext_glCompressedTextureImage2DEXT
  = NULL;
PFNGLCOMPRESSEDTEXTUREIMAGE3DEXTPROC glext_glCompressedTextureImage3DEXT
  = NULL;
PFNGLCOMPRESSEDTEXTURESUBIMAGE1DPROC glext_glCompressedTextureSubImage1D
  = NULL;
PFNGLCOMPRESSEDTEXTURESUBIMAGE1DEXTPROC glext_glCompressedTextureSubImage1DEXT
  = NULL;
PFNGLCOMPRESSEDTEXTURESUBIMAGE2DPROC glext_glCompressedTextureSubImage2D
  = NULL;
PFNGLCOMPRESSEDTEXTURESUBIMAGE2DEXTPROC glext_glCompressedTextureSubImage2DEXT
  = NULL;
PFNGLCOMPRESSEDTEXTURESUBIMAGE3DPROC glext_glCompressedTextureSubImage3D
  = NULL;
PFNGLCOMPRESSEDTEXTURESUBIMAGE3DEXTPROC glext_glCompressedTextureSubImage3DEXT
  = NULL;
PFNGLCONSERVATIVERASTERPARAMETERFNVPROC glext_glConservativeRasterParameterfNV
  = NULL;
PFNGLCONSERVATIVERASTERPARAMETERINVPROC glext_glConservativeRasterParameteriNV
  = NULL;
PFNGLCONVOLUTIONFILTER1DEXTPROC glext_glConvolutionFilter1DEXT = NULL;
PFNGLCONVOLUTIONFILTER2DEXTPROC glext_glConvolutionFilter2DEXT = NULL;
PFNGLCONVOLUTIONPARAMETERFEXTPROC glext_glConvolutionParameterfEXT = NULL;
PFNGLCONVOLUTIONPARAMETERFVEXTPROC glext_glConvolutionParameterfvEXT = NULL;
PFNGLCONVOLUTIONPARAMETERIEXTPROC glext_glConvolutionParameteriEXT = NULL;
PFNGLCONVOLUTIONPARAMETERIVEXTPROC glext_glConvolutionParameterivEXT = NULL;
PFNGLCONVOLUTIONPARAMETERXOESPROC glext_glConvolutionParameterxOES = NULL;
PFNGLCONVOLUTIONPARAMETERXVOESPROC glext_glConvolutionParameterxvOES = NULL;
PFNGLCOPYBUFFERSUBDATAPROC glext_glCopyBufferSubData = NULL;
PFNGLCOPYCOLORSUBTABLEEXTPROC glext_glCopyColorSubTableEXT = NULL;
PFNGLCOPYCOLORTABLESGIPROC glext_glCopyColorTableSGI = NULL;
PFNGLCOPYCONVOLUTIONFILTER1DEXTPROC glext_glCopyConvolutionFilter1DEXT = NULL;
PFNGLCOPYCONVOLUTIONFILTER2DEXTPROC glext_glCopyConvolutionFilter2DEXT = NULL;
PFNGLCOPYIMAGESUBDATAPROC glext_glCopyImageSubData = NULL;
PFNGLCOPYIMAGESUBDATANVPROC glext_glCopyImageSubDataNV = NULL;
PFNGLCOPYMULTITEXIMAGE1DEXTPROC glext_glCopyMultiTexImage1DEXT = NULL;
PFNGLCOPYMULTITEXIMAGE2DEXTPROC glext_glCopyMultiTexImage2DEXT = NULL;
PFNGLCOPYMULTITEXSUBIMAGE1DEXTPROC glext_glCopyMultiTexSubImage1DEXT = NULL;
PFNGLCOPYMULTITEXSUBIMAGE2DEXTPROC glext_glCopyMultiTexSubImage2DEXT = NULL;
PFNGLCOPYMULTITEXSUBIMAGE3DEXTPROC glext_glCopyMultiTexSubImage3DEXT = NULL;
PFNGLCOPYNAMEDBUFFERSUBDATAPROC glext_glCopyNamedBufferSubData = NULL;
PFNGLCOPYPATHNVPROC glext_glCopyPathNV = NULL;
PFNGLCOPYTEXIMAGE1DPROC glext_glCopyTexImage1D = NULL;
PFNGLCOPYTEXIMAGE1DEXTPROC glext_glCopyTexImage1DEXT = NULL;
PFNGLCOPYTEXIMAGE2DPROC glext_glCopyTexImage2D = NULL;
PFNGLCOPYTEXIMAGE2DEXTPROC glext_glCopyTexImage2DEXT = NULL;
PFNGLCOPYTEXSUBIMAGE1DPROC glext_glCopyTexSubImage1D = NULL;
PFNGLCOPYTEXSUBIMAGE1DEXTPROC glext_glCopyTexSubImage1DEXT = NULL;
PFNGLCOPYTEXSUBIMAGE2DPROC glext_glCopyTexSubImage2D = NULL;
PFNGLCOPYTEXSUBIMAGE2DEXTPROC glext_glCopyTexSubImage2DEXT = NULL;
PFNGLCOPYTEXSUBIMAGE3DPROC glext_glCopyTexSubImage3D = NULL;
PFNGLCOPYTEXSUBIMAGE3DEXTPROC glext_glCopyTexSubImage3DEXT = NULL;
PFNGLCOPYTEXTUREIMAGE1DEXTPROC glext_glCopyTextureImage1DEXT = NULL;
PFNGLCOPYTEXTUREIMAGE2DEXTPROC glext_glCopyTextureImage2DEXT = NULL;
PFNGLCOPYTEXTURESUBIMAGE1DPROC glext_glCopyTextureSubImage1D = NULL;
PFNGLCOPYTEXTURESUBIMAGE1DEXTPROC glext_glCopyTextureSubImage1DEXT = NULL;
PFNGLCOPYTEXTURESUBIMAGE2DPROC glext_glCopyTextureSubImage2D = NULL;
PFNGLCOPYTEXTURESUBIMAGE2DEXTPROC glext_glCopyTextureSubImage2DEXT = NULL;
PFNGLCOPYTEXTURESUBIMAGE3DPROC glext_glCopyTextureSubImage3D = NULL;
PFNGLCOPYTEXTURESUBIMAGE3DEXTPROC glext_glCopyTextureSubImage3DEXT = NULL;
PFNGLCOVERFILLPATHINSTANCEDNVPROC glext_glCoverFillPathInstancedNV = NULL;
PFNGLCOVERFILLPATHNVPROC glext_glCoverFillPathNV = NULL;
PFNGLCOVERSTROKEPATHINSTANCEDNVPROC glext_glCoverStrokePathInstancedNV = NULL;
PFNGLCOVERSTROKEPATHNVPROC glext_glCoverStrokePathNV = NULL;
PFNGLCOVERAGEMODULATIONNVPROC glext_glCoverageModulationNV = NULL;
PFNGLCOVERAGEMODULATIONTABLENVPROC glext_glCoverageModulationTableNV = NULL;
PFNGLCREATEBUFFERSPROC glext_glCreateBuffers = NULL;
PFNGLCREATECOMMANDLISTSNVPROC glext_glCreateCommandListsNV = NULL;
PFNGLCREATEFRAMEBUFFERSPROC glext_glCreateFramebuffers = NULL;
PFNGLCREATEMEMORYOBJECTSEXTPROC glext_glCreateMemoryObjectsEXT = NULL;
PFNGLCREATEPERFQUERYINTELPROC glext_glCreatePerfQueryINTEL = NULL;
PFNGLCREATEPROGRAMPROC glext_glCreateProgram = NULL;
PFNGLCREATEPROGRAMOBJECTARBPROC glext_glCreateProgramObjectARB = NULL;
PFNGLCREATEPROGRAMPIPELINESPROC glext_glCreateProgramPipelines = NULL;
PFNGLCREATEPROGRESSFENCENVXPROC glext_glCreateProgressFenceNVX = NULL;
PFNGLCREATEQUERIESPROC glext_glCreateQueries = NULL;
PFNGLCREATERENDERBUFFERSPROC glext_glCreateRenderbuffers = NULL;
PFNGLCREATESAMPLERSPROC glext_glCreateSamplers = NULL;
PFNGLCREATESEMAPHORESNVPROC glext_glCreateSemaphoresNV = NULL;
PFNGLCREATESHADERPROC glext_glCreateShader = NULL;
PFNGLCREATESHADEROBJECTARBPROC glext_glCreateShaderObjectARB = NULL;
PFNGLCREATESHADERPROGRAMEXTPROC glext_glCreateShaderProgramEXT = NULL;
PFNGLCREATESHADERPROGRAMVPROC glext_glCreateShaderProgramv = NULL;
PFNGLCREATESTATESNVPROC glext_glCreateStatesNV = NULL;
PFNGLCREATESYNCFROMCLEVENTARBPROC glext_glCreateSyncFromCLeventARB = NULL;
PFNGLCREATETEXTURESPROC glext_glCreateTextures = NULL;
PFNGLCREATETRANSFORMFEEDBACKSPROC glext_glCreateTransformFeedbacks = NULL;
PFNGLCREATEVERTEXARRAYSPROC glext_glCreateVertexArrays = NULL;
PFNGLCULLFACEPROC glext_glCullFace = NULL;
PFNGLCULLPARAMETERDVEXTPROC glext_glCullParameterdvEXT = NULL;
PFNGLCULLPARAMETERFVEXTPROC glext_glCullParameterfvEXT = NULL;
PFNGLCURRENTPALETTEMATRIXARBPROC glext_glCurrentPaletteMatrixARB = NULL;
PFNGLDEBUGMESSAGECALLBACKPROC glext_glDebugMessageCallback = NULL;
PFNGLDEBUGMESSAGECALLBACKAMDPROC glext_glDebugMessageCallbackAMD = NULL;
PFNGLDEBUGMESSAGECALLBACKARBPROC glext_glDebugMessageCallbackARB = NULL;
PFNGLDEBUGMESSAGECONTROLPROC glext_glDebugMessageControl = NULL;
PFNGLDEBUGMESSAGECONTROLARBPROC glext_glDebugMessageControlARB = NULL;
PFNGLDEBUGMESSAGEENABLEAMDPROC glext_glDebugMessageEnableAMD = NULL;
PFNGLDEBUGMESSAGEINSERTPROC glext_glDebugMessageInsert = NULL;
PFNGLDEBUGMESSAGEINSERTAMDPROC glext_glDebugMessageInsertAMD = NULL;
PFNGLDEBUGMESSAGEINSERTARBPROC glext_glDebugMessageInsertARB = NULL;
PFNGLDEFORMSGIXPROC glext_glDeformSGIX = NULL;
PFNGLDEFORMATIONMAP3DSGIXPROC glext_glDeformationMap3dSGIX = NULL;
PFNGLDEFORMATIONMAP3FSGIXPROC glext_glDeformationMap3fSGIX = NULL;
PFNGLDELETEASYNCMARKERSSGIXPROC glext_glDeleteAsyncMarkersSGIX = NULL;
PFNGLDELETEBUFFERSPROC glext_glDeleteBuffers = NULL;
PFNGLDELETEBUFFERSARBPROC glext_glDeleteBuffersARB = NULL;
PFNGLDELETECOMMANDLISTSNVPROC glext_glDeleteCommandListsNV = NULL;
PFNGLDELETEFENCESAPPLEPROC glext_glDeleteFencesAPPLE = NULL;
PFNGLDELETEFENCESNVPROC glext_glDeleteFencesNV = NULL;
PFNGLDELETEFRAGMENTSHADERATIPROC glext_glDeleteFragmentShaderATI = NULL;
PFNGLDELETEFRAMEBUFFERSPROC glext_glDeleteFramebuffers = NULL;
PFNGLDELETEFRAMEBUFFERSEXTPROC glext_glDeleteFramebuffersEXT = NULL;
PFNGLDELETEMEMORYOBJECTSEXTPROC glext_glDeleteMemoryObjectsEXT = NULL;
PFNGLDELETENAMEDSTRINGARBPROC glext_glDeleteNamedStringARB = NULL;
PFNGLDELETENAMESAMDPROC glext_glDeleteNamesAMD = NULL;
PFNGLDELETEOBJECTARBPROC glext_glDeleteObjectARB = NULL;
PFNGLDELETEOCCLUSIONQUERIESNVPROC glext_glDeleteOcclusionQueriesNV = NULL;
PFNGLDELETEPATHSNVPROC glext_glDeletePathsNV = NULL;
PFNGLDELETEPERFMONITORSAMDPROC glext_glDeletePerfMonitorsAMD = NULL;
PFNGLDELETEPERFQUERYINTELPROC glext_glDeletePerfQueryINTEL = NULL;
PFNGLDELETEPROGRAMPROC glext_glDeleteProgram = NULL;
PFNGLDELETEPROGRAMPIPELINESPROC glext_glDeleteProgramPipelines = NULL;
PFNGLDELETEPROGRAMSARBPROC glext_glDeleteProgramsARB = NULL;
PFNGLDELETEPROGRAMSNVPROC glext_glDeleteProgramsNV = NULL;
PFNGLDELETEQUERIESPROC glext_glDeleteQueries = NULL;
PFNGLDELETEQUERIESARBPROC glext_glDeleteQueriesARB = NULL;
PFNGLDELETEQUERYRESOURCETAGNVPROC glext_glDeleteQueryResourceTagNV = NULL;
PFNGLDELETERENDERBUFFERSPROC glext_glDeleteRenderbuffers = NULL;
PFNGLDELETERENDERBUFFERSEXTPROC glext_glDeleteRenderbuffersEXT = NULL;
PFNGLDELETESAMPLERSPROC glext_glDeleteSamplers = NULL;
PFNGLDELETESEMAPHORESEXTPROC glext_glDeleteSemaphoresEXT = NULL;
PFNGLDELETESHADERPROC glext_glDeleteShader = NULL;
PFNGLDELETESTATESNVPROC glext_glDeleteStatesNV = NULL;
PFNGLDELETESYNCPROC glext_glDeleteSync = NULL;
PFNGLDELETETEXTURESPROC glext_glDeleteTextures = NULL;
PFNGLDELETETEXTURESEXTPROC glext_glDeleteTexturesEXT = NULL;
PFNGLDELETETRANSFORMFEEDBACKSPROC glext_glDeleteTransformFeedbacks = NULL;
PFNGLDELETETRANSFORMFEEDBACKSNVPROC glext_glDeleteTransformFeedbacksNV = NULL;
PFNGLDELETEVERTEXARRAYSPROC glext_glDeleteVertexArrays = NULL;
PFNGLDELETEVERTEXARRAYSAPPLEPROC glext_glDeleteVertexArraysAPPLE = NULL;
PFNGLDELETEVERTEXSHADEREXTPROC glext_glDeleteVertexShaderEXT = NULL;
PFNGLDEPTHBOUNDSEXTPROC glext_glDepthBoundsEXT = NULL;
PFNGLDEPTHBOUNDSDNVPROC glext_glDepthBoundsdNV = NULL;
PFNGLDEPTHFUNCPROC glext_glDepthFunc = NULL;
PFNGLDEPTHMASKPROC glext_glDepthMask = NULL;
PFNGLDEPTHRANGEPROC glext_glDepthRange = NULL;
PFNGLDEPTHRANGEARRAYDVNVPROC glext_glDepthRangeArraydvNV = NULL;
PFNGLDEPTHRANGEARRAYVPROC glext_glDepthRangeArrayv = NULL;
PFNGLDEPTHRANGEINDEXEDPROC glext_glDepthRangeIndexed = NULL;
PFNGLDEPTHRANGEINDEXEDDNVPROC glext_glDepthRangeIndexeddNV = NULL;
PFNGLDEPTHRANGEDNVPROC glext_glDepthRangedNV = NULL;
PFNGLDEPTHRANGEFPROC glext_glDepthRangef = NULL;
PFNGLDEPTHRANGEFOESPROC glext_glDepthRangefOES = NULL;
PFNGLDEPTHRANGEXOESPROC glext_glDepthRangexOES = NULL;
PFNGLDETACHOBJECTARBPROC glext_glDetachObjectARB = NULL;
PFNGLDETACHSHADERPROC glext_glDetachShader = NULL;
PFNGLDETAILTEXFUNCSGISPROC glext_glDetailTexFuncSGIS = NULL;
PFNGLDISABLEPROC glext_glDisable = NULL;
PFNGLDISABLECLIENTSTATEINDEXEDEXTPROC glext_glDisableClientStateIndexedEXT
  = NULL;
PFNGLDISABLECLIENTSTATEIEXTPROC glext_glDisableClientStateiEXT = NULL;
PFNGLDISABLEINDEXEDEXTPROC glext_glDisableIndexedEXT = NULL;
PFNGLDISABLEVARIANTCLIENTSTATEEXTPROC glext_glDisableVariantClientStateEXT
  = NULL;
PFNGLDISABLEVERTEXARRAYATTRIBPROC glext_glDisableVertexArrayAttrib = NULL;
PFNGLDISABLEVERTEXARRAYATTRIBEXTPROC glext_glDisableVertexArrayAttribEXT
  = NULL;
PFNGLDISABLEVERTEXARRAYEXTPROC glext_glDisableVertexArrayEXT = NULL;
PFNGLDISABLEVERTEXATTRIBAPPLEPROC glext_glDisableVertexAttribAPPLE = NULL;
PFNGLDISABLEVERTEXATTRIBARRAYPROC glext_glDisableVertexAttribArray = NULL;
PFNGLDISABLEVERTEXATTRIBARRAYARBPROC glext_glDisableVertexAttribArrayARB
  = NULL;
PFNGLDISABLEIPROC glext_glDisablei = NULL;
PFNGLDISPATCHCOMPUTEPROC glext_glDispatchCompute = NULL;
PFNGLDISPATCHCOMPUTEGROUPSIZEARBPROC glext_glDispatchComputeGroupSizeARB
  = NULL;
PFNGLDISPATCHCOMPUTEINDIRECTPROC glext_glDispatchComputeIndirect = NULL;
PFNGLDRAWARRAYSPROC glext_glDrawArrays = NULL;
PFNGLDRAWARRAYSEXTPROC glext_glDrawArraysEXT = NULL;
PFNGLDRAWARRAYSINDIRECTPROC glext_glDrawArraysIndirect = NULL;
PFNGLDRAWARRAYSINSTANCEDPROC glext_glDrawArraysInstanced = NULL;
PFNGLDRAWARRAYSINSTANCEDARBPROC glext_glDrawArraysInstancedARB = NULL;
PFNGLDRAWARRAYSINSTANCEDBASEINSTANCEPROC
glext_glDrawArraysInstancedBaseInstance = NULL;
PFNGLDRAWARRAYSINSTANCEDEXTPROC glext_glDrawArraysInstancedEXT = NULL;
PFNGLDRAWBUFFERPROC glext_glDrawBuffer = NULL;
PFNGLDRAWBUFFERSPROC glext_glDrawBuffers = NULL;
PFNGLDRAWBUFFERSARBPROC glext_glDrawBuffersARB = NULL;
PFNGLDRAWBUFFERSATIPROC glext_glDrawBuffersATI = NULL;
PFNGLDRAWCOMMANDSADDRESSNVPROC glext_glDrawCommandsAddressNV = NULL;
PFNGLDRAWCOMMANDSNVPROC glext_glDrawCommandsNV = NULL;
PFNGLDRAWCOMMANDSSTATESADDRESSNVPROC glext_glDrawCommandsStatesAddressNV
  = NULL;
PFNGLDRAWCOMMANDSSTATESNVPROC glext_glDrawCommandsStatesNV = NULL;
PFNGLDRAWELEMENTARRAYAPPLEPROC glext_glDrawElementArrayAPPLE = NULL;
PFNGLDRAWELEMENTARRAYATIPROC glext_glDrawElementArrayATI = NULL;
PFNGLDRAWELEMENTSPROC glext_glDrawElements = NULL;
PFNGLDRAWELEMENTSBASEVERTEXPROC glext_glDrawElementsBaseVertex = NULL;
PFNGLDRAWELEMENTSINDIRECTPROC glext_glDrawElementsIndirect = NULL;
PFNGLDRAWELEMENTSINSTANCEDPROC glext_glDrawElementsInstanced = NULL;
PFNGLDRAWELEMENTSINSTANCEDARBPROC glext_glDrawElementsInstancedARB = NULL;
PFNGLDRAWELEMENTSINSTANCEDBASEINSTANCEPROC
glext_glDrawElementsInstancedBaseInstance = NULL;
PFNGLDRAWELEMENTSINSTANCEDBASEVERTEXPROC
glext_glDrawElementsInstancedBaseVertex = NULL;
PFNGLDRAWELEMENTSINSTANCEDBASEVERTEXBASEINSTANCEPROC
glext_glDrawElementsInstancedBaseVertexBaseInstance = NULL;
PFNGLDRAWELEMENTSINSTANCEDEXTPROC glext_glDrawElementsInstancedEXT = NULL;
PFNGLDRAWMESHARRAYSSUNPROC glext_glDrawMeshArraysSUN = NULL;
PFNGLDRAWMESHTASKSEXTPROC glext_glDrawMeshTasksEXT = NULL;
PFNGLDRAWMESHTASKSINDIRECTEXTPROC glext_glDrawMeshTasksIndirectEXT = NULL;
PFNGLDRAWMESHTASKSINDIRECTNVPROC glext_glDrawMeshTasksIndirectNV = NULL;
PFNGLDRAWMESHTASKSNVPROC glext_glDrawMeshTasksNV = NULL;
PFNGLDRAWRANGEELEMENTARRAYAPPLEPROC glext_glDrawRangeElementArrayAPPLE = NULL;
PFNGLDRAWRANGEELEMENTARRAYATIPROC glext_glDrawRangeElementArrayATI = NULL;
PFNGLDRAWRANGEELEMENTSPROC glext_glDrawRangeElements = NULL;
PFNGLDRAWRANGEELEMENTSBASEVERTEXPROC glext_glDrawRangeElementsBaseVertex
  = NULL;
PFNGLDRAWRANGEELEMENTSEXTPROC glext_glDrawRangeElementsEXT = NULL;
PFNGLDRAWTEXTURENVPROC glext_glDrawTextureNV = NULL;
PFNGLDRAWTRANSFORMFEEDBACKPROC glext_glDrawTransformFeedback = NULL;
PFNGLDRAWTRANSFORMFEEDBACKINSTANCEDPROC glext_glDrawTransformFeedbackInstanced
  = NULL;
PFNGLDRAWTRANSFORMFEEDBACKNVPROC glext_glDrawTransformFeedbackNV = NULL;
PFNGLDRAWTRANSFORMFEEDBACKSTREAMPROC glext_glDrawTransformFeedbackStream
  = NULL;
PFNGLDRAWTRANSFORMFEEDBACKSTREAMINSTANCEDPROC
glext_glDrawTransformFeedbackStreamInstanced = NULL;
PFNGLDRAWVKIMAGENVPROC glext_glDrawVkImageNV = NULL;
PFNGLEGLIMAGETARGETTEXSTORAGEEXTPROC glext_glEGLImageTargetTexStorageEXT
  = NULL;
PFNGLEGLIMAGETARGETTEXTURESTORAGEEXTPROC
glext_glEGLImageTargetTextureStorageEXT = NULL;
PFNGLEDGEFLAGFORMATNVPROC glext_glEdgeFlagFormatNV = NULL;
PFNGLEDGEFLAGPOINTEREXTPROC glext_glEdgeFlagPointerEXT = NULL;
PFNGLEDGEFLAGPOINTERLISTIBMPROC glext_glEdgeFlagPointerListIBM = NULL;
PFNGLELEMENTPOINTERAPPLEPROC glext_glElementPointerAPPLE = NULL;
PFNGLELEMENTPOINTERATIPROC glext_glElementPointerATI = NULL;
PFNGLENABLEPROC glext_glEnable = NULL;
PFNGLENABLECLIENTSTATEINDEXEDEXTPROC glext_glEnableClientStateIndexedEXT
  = NULL;
PFNGLENABLECLIENTSTATEIEXTPROC glext_glEnableClientStateiEXT = NULL;
PFNGLENABLEINDEXEDEXTPROC glext_glEnableIndexedEXT = NULL;
PFNGLENABLEVARIANTCLIENTSTATEEXTPROC glext_glEnableVariantClientStateEXT
  = NULL;
PFNGLENABLEVERTEXARRAYATTRIBPROC glext_glEnableVertexArrayAttrib = NULL;
PFNGLENABLEVERTEXARRAYATTRIBEXTPROC glext_glEnableVertexArrayAttribEXT = NULL;
PFNGLENABLEVERTEXARRAYEXTPROC glext_glEnableVertexArrayEXT = NULL;
PFNGLENABLEVERTEXATTRIBAPPLEPROC glext_glEnableVertexAttribAPPLE = NULL;
PFNGLENABLEVERTEXATTRIBARRAYPROC glext_glEnableVertexAttribArray = NULL;
PFNGLENABLEVERTEXATTRIBARRAYARBPROC glext_glEnableVertexAttribArrayARB = NULL;
PFNGLENABLEIPROC glext_glEnablei = NULL;
PFNGLENDCONDITIONALRENDERPROC glext_glEndConditionalRender = NULL;
PFNGLENDCONDITIONALRENDERNVPROC glext_glEndConditionalRenderNV = NULL;
PFNGLENDCONDITIONALRENDERNVXPROC glext_glEndConditionalRenderNVX = NULL;
PFNGLENDFRAGMENTSHADERATIPROC glext_glEndFragmentShaderATI = NULL;
PFNGLENDOCCLUSIONQUERYNVPROC glext_glEndOcclusionQueryNV = NULL;
PFNGLENDPERFMONITORAMDPROC glext_glEndPerfMonitorAMD = NULL;
PFNGLENDPERFQUERYINTELPROC glext_glEndPerfQueryINTEL = NULL;
PFNGLENDQUERYPROC glext_glEndQuery = NULL;
PFNGLENDQUERYARBPROC glext_glEndQueryARB = NULL;
PFNGLENDQUERYINDEXEDPROC glext_glEndQueryIndexed = NULL;
PFNGLENDTRANSFORMFEEDBACKPROC glext_glEndTransformFeedback = NULL;
PFNGLENDTRANSFORMFEEDBACKEXTPROC glext_glEndTransformFeedbackEXT = NULL;
PFNGLENDTRANSFORMFEEDBACKNVPROC glext_glEndTransformFeedbackNV = NULL;
PFNGLENDVERTEXSHADEREXTPROC glext_glEndVertexShaderEXT = NULL;
PFNGLENDVIDEOCAPTURENVPROC glext_glEndVideoCaptureNV = NULL;
PFNGLEVALCOORD1XOESPROC glext_glEvalCoord1xOES = NULL;
PFNGLEVALCOORD1XVOESPROC glext_glEvalCoord1xvOES = NULL;
PFNGLEVALCOORD2XOESPROC glext_glEvalCoord2xOES = NULL;
PFNGLEVALCOORD2XVOESPROC glext_glEvalCoord2xvOES = NULL;
PFNGLEVALMAPSNVPROC glext_glEvalMapsNV = NULL;
PFNGLEVALUATEDEPTHVALUESARBPROC glext_glEvaluateDepthValuesARB = NULL;
PFNGLEXECUTEPROGRAMNVPROC glext_glExecuteProgramNV = NULL;
PFNGLEXTRACTCOMPONENTEXTPROC glext_glExtractComponentEXT = NULL;
PFNGLFEEDBACKBUFFERXOESPROC glext_glFeedbackBufferxOES = NULL;
PFNGLFENCESYNCPROC glext_glFenceSync = NULL;
PFNGLFINALCOMBINERINPUTNVPROC glext_glFinalCombinerInputNV = NULL;
PFNGLFINISHPROC glext_glFinish = NULL;
PFNGLFINISHASYNCSGIXPROC glext_glFinishAsyncSGIX = NULL;
PFNGLFINISHFENCEAPPLEPROC glext_glFinishFenceAPPLE = NULL;
PFNGLFINISHFENCENVPROC glext_glFinishFenceNV = NULL;
PFNGLFINISHOBJECTAPPLEPROC glext_glFinishObjectAPPLE = NULL;
PFNGLFINISHTEXTURESUNXPROC glext_glFinishTextureSUNX = NULL;
PFNGLFLUSHPROC glext_glFlush = NULL;
PFNGLFLUSHMAPPEDBUFFERRANGEPROC glext_glFlushMappedBufferRange = NULL;
PFNGLFLUSHMAPPEDBUFFERRANGEAPPLEPROC glext_glFlushMappedBufferRangeAPPLE
  = NULL;
PFNGLFLUSHMAPPEDNAMEDBUFFERRANGEPROC glext_glFlushMappedNamedBufferRange
  = NULL;
PFNGLFLUSHMAPPEDNAMEDBUFFERRANGEEXTPROC glext_glFlushMappedNamedBufferRangeEXT
  = NULL;
PFNGLFLUSHPIXELDATARANGENVPROC glext_glFlushPixelDataRangeNV = NULL;
PFNGLFLUSHRASTERSGIXPROC glext_glFlushRasterSGIX = NULL;
PFNGLFLUSHSTATICDATAIBMPROC glext_glFlushStaticDataIBM = NULL;
PFNGLFLUSHVERTEXARRAYRANGEAPPLEPROC glext_glFlushVertexArrayRangeAPPLE = NULL;
PFNGLFLUSHVERTEXARRAYRANGENVPROC glext_glFlushVertexArrayRangeNV = NULL;
PFNGLFOGCOORDFORMATNVPROC glext_glFogCoordFormatNV = NULL;
PFNGLFOGCOORDPOINTEREXTPROC glext_glFogCoordPointerEXT = NULL;
PFNGLFOGCOORDPOINTERLISTIBMPROC glext_glFogCoordPointerListIBM = NULL;
PFNGLFOGCOORDDEXTPROC glext_glFogCoorddEXT = NULL;
PFNGLFOGCOORDDVEXTPROC glext_glFogCoorddvEXT = NULL;
PFNGLFOGCOORDFEXTPROC glext_glFogCoordfEXT = NULL;
PFNGLFOGCOORDFVEXTPROC glext_glFogCoordfvEXT = NULL;
PFNGLFOGCOORDHNVPROC glext_glFogCoordhNV = NULL;
PFNGLFOGCOORDHVNVPROC glext_glFogCoordhvNV = NULL;
PFNGLFOGFUNCSGISPROC glext_glFogFuncSGIS = NULL;
PFNGLFOGXOESPROC glext_glFogxOES = NULL;
PFNGLFOGXVOESPROC glext_glFogxvOES = NULL;
PFNGLFRAGMENTCOLORMATERIALSGIXPROC glext_glFragmentColorMaterialSGIX = NULL;
PFNGLFRAGMENTCOVERAGECOLORNVPROC glext_glFragmentCoverageColorNV = NULL;
PFNGLFRAGMENTLIGHTMODELFSGIXPROC glext_glFragmentLightModelfSGIX = NULL;
PFNGLFRAGMENTLIGHTMODELFVSGIXPROC glext_glFragmentLightModelfvSGIX = NULL;
PFNGLFRAGMENTLIGHTMODELISGIXPROC glext_glFragmentLightModeliSGIX = NULL;
PFNGLFRAGMENTLIGHTMODELIVSGIXPROC glext_glFragmentLightModelivSGIX = NULL;
PFNGLFRAGMENTLIGHTFSGIXPROC glext_glFragmentLightfSGIX = NULL;
PFNGLFRAGMENTLIGHTFVSGIXPROC glext_glFragmentLightfvSGIX = NULL;
PFNGLFRAGMENTLIGHTISGIXPROC glext_glFragmentLightiSGIX = NULL;
PFNGLFRAGMENTLIGHTIVSGIXPROC glext_glFragmentLightivSGIX = NULL;
PFNGLFRAGMENTMATERIALFSGIXPROC glext_glFragmentMaterialfSGIX = NULL;
PFNGLFRAGMENTMATERIALFVSGIXPROC glext_glFragmentMaterialfvSGIX = NULL;
PFNGLFRAGMENTMATERIALISGIXPROC glext_glFragmentMaterialiSGIX = NULL;
PFNGLFRAGMENTMATERIALIVSGIXPROC glext_glFragmentMaterialivSGIX = NULL;
PFNGLFRAMETERMINATORGREMEDYPROC glext_glFrameTerminatorGREMEDY = NULL;
PFNGLFRAMEZOOMSGIXPROC glext_glFrameZoomSGIX = NULL;
PFNGLFRAMEBUFFERDRAWBUFFEREXTPROC glext_glFramebufferDrawBufferEXT = NULL;
PFNGLFRAMEBUFFERDRAWBUFFERSEXTPROC glext_glFramebufferDrawBuffersEXT = NULL;
PFNGLFRAMEBUFFERFETCHBARRIEREXTPROC glext_glFramebufferFetchBarrierEXT = NULL;
PFNGLFRAMEBUFFERPARAMETERIPROC glext_glFramebufferParameteri = NULL;
PFNGLFRAMEBUFFERPARAMETERIMESAPROC glext_glFramebufferParameteriMESA = NULL;
PFNGLFRAMEBUFFERREADBUFFEREXTPROC glext_glFramebufferReadBufferEXT = NULL;
PFNGLFRAMEBUFFERRENDERBUFFERPROC glext_glFramebufferRenderbuffer = NULL;
PFNGLFRAMEBUFFERRENDERBUFFEREXTPROC glext_glFramebufferRenderbufferEXT = NULL;
PFNGLFRAMEBUFFERSAMPLELOCATIONSFVARBPROC
glext_glFramebufferSampleLocationsfvARB = NULL;
PFNGLFRAMEBUFFERSAMPLELOCATIONSFVNVPROC glext_glFramebufferSampleLocationsfvNV
  = NULL;
PFNGLFRAMEBUFFERSAMPLEPOSITIONSFVAMDPROC
glext_glFramebufferSamplePositionsfvAMD = NULL;
PFNGLFRAMEBUFFERSHADINGRATEEXTPROC glext_glFramebufferShadingRateEXT = NULL;
PFNGLFRAMEBUFFERTEXTUREPROC glext_glFramebufferTexture = NULL;
PFNGLFRAMEBUFFERTEXTURE1DPROC glext_glFramebufferTexture1D = NULL;
PFNGLFRAMEBUFFERTEXTURE1DEXTPROC glext_glFramebufferTexture1DEXT = NULL;
PFNGLFRAMEBUFFERTEXTURE2DPROC glext_glFramebufferTexture2D = NULL;
PFNGLFRAMEBUFFERTEXTURE2DEXTPROC glext_glFramebufferTexture2DEXT = NULL;
PFNGLFRAMEBUFFERTEXTURE3DPROC glext_glFramebufferTexture3D = NULL;
PFNGLFRAMEBUFFERTEXTURE3DEXTPROC glext_glFramebufferTexture3DEXT = NULL;
PFNGLFRAMEBUFFERTEXTUREARBPROC glext_glFramebufferTextureARB = NULL;
PFNGLFRAMEBUFFERTEXTUREEXTPROC glext_glFramebufferTextureEXT = NULL;
PFNGLFRAMEBUFFERTEXTUREFACEARBPROC glext_glFramebufferTextureFaceARB = NULL;
PFNGLFRAMEBUFFERTEXTUREFACEEXTPROC glext_glFramebufferTextureFaceEXT = NULL;
PFNGLFRAMEBUFFERTEXTURELAYERPROC glext_glFramebufferTextureLayer = NULL;
PFNGLFRAMEBUFFERTEXTURELAYERARBPROC glext_glFramebufferTextureLayerARB = NULL;
PFNGLFRAMEBUFFERTEXTURELAYEREXTPROC glext_glFramebufferTextureLayerEXT = NULL;
PFNGLFRAMEBUFFERTEXTUREMULTIVIEWOVRPROC glext_glFramebufferTextureMultiviewOVR
  = NULL;
PFNGLFREEOBJECTBUFFERATIPROC glext_glFreeObjectBufferATI = NULL;
PFNGLFRONTFACEPROC glext_glFrontFace = NULL;
PFNGLFRUSTUMFOESPROC glext_glFrustumfOES = NULL;
PFNGLFRUSTUMXOESPROC glext_glFrustumxOES = NULL;
PFNGLGENASYNCMARKERSSGIXPROC glext_glGenAsyncMarkersSGIX = NULL;
PFNGLGENBUFFERSPROC glext_glGenBuffers = NULL;
PFNGLGENBUFFERSARBPROC glext_glGenBuffersARB = NULL;
PFNGLGENFENCESAPPLEPROC glext_glGenFencesAPPLE = NULL;
PFNGLGENFENCESNVPROC glext_glGenFencesNV = NULL;
PFNGLGENFRAGMENTSHADERSATIPROC glext_glGenFragmentShadersATI = NULL;
PFNGLGENFRAMEBUFFERSPROC glext_glGenFramebuffers = NULL;
PFNGLGENFRAMEBUFFERSEXTPROC glext_glGenFramebuffersEXT = NULL;
PFNGLGENNAMESAMDPROC glext_glGenNamesAMD = NULL;
PFNGLGENOCCLUSIONQUERIESNVPROC glext_glGenOcclusionQueriesNV = NULL;
PFNGLGENPATHSNVPROC glext_glGenPathsNV = NULL;
PFNGLGENPERFMONITORSAMDPROC glext_glGenPerfMonitorsAMD = NULL;
PFNGLGENPROGRAMPIPELINESPROC glext_glGenProgramPipelines = NULL;
PFNGLGENPROGRAMSARBPROC glext_glGenProgramsARB = NULL;
PFNGLGENPROGRAMSNVPROC glext_glGenProgramsNV = NULL;
PFNGLGENQUERIESPROC glext_glGenQueries = NULL;
PFNGLGENQUERIESARBPROC glext_glGenQueriesARB = NULL;
PFNGLGENQUERYRESOURCETAGNVPROC glext_glGenQueryResourceTagNV = NULL;
PFNGLGENRENDERBUFFERSPROC glext_glGenRenderbuffers = NULL;
PFNGLGENRENDERBUFFERSEXTPROC glext_glGenRenderbuffersEXT = NULL;
PFNGLGENSAMPLERSPROC glext_glGenSamplers = NULL;
PFNGLGENSEMAPHORESEXTPROC glext_glGenSemaphoresEXT = NULL;
PFNGLGENSYMBOLSEXTPROC glext_glGenSymbolsEXT = NULL;
PFNGLGENTEXTURESPROC glext_glGenTextures = NULL;
PFNGLGENTEXTURESEXTPROC glext_glGenTexturesEXT = NULL;
PFNGLGENTRANSFORMFEEDBACKSPROC glext_glGenTransformFeedbacks = NULL;
PFNGLGENTRANSFORMFEEDBACKSNVPROC glext_glGenTransformFeedbacksNV = NULL;
PFNGLGENVERTEXARRAYSPROC glext_glGenVertexArrays = NULL;
PFNGLGENVERTEXARRAYSAPPLEPROC glext_glGenVertexArraysAPPLE = NULL;
PFNGLGENVERTEXSHADERSEXTPROC glext_glGenVertexShadersEXT = NULL;
PFNGLGENERATEMIPMAPPROC glext_glGenerateMipmap = NULL;
PFNGLGENERATEMIPMAPEXTPROC glext_glGenerateMipmapEXT = NULL;
PFNGLGENERATEMULTITEXMIPMAPEXTPROC glext_glGenerateMultiTexMipmapEXT = NULL;
PFNGLGENERATETEXTUREMIPMAPPROC glext_glGenerateTextureMipmap = NULL;
PFNGLGENERATETEXTUREMIPMAPEXTPROC glext_glGenerateTextureMipmapEXT = NULL;
PFNGLGETACTIVEATOMICCOUNTERBUFFERIVPROC glext_glGetActiveAtomicCounterBufferiv
  = NULL;
PFNGLGETACTIVEATTRIBPROC glext_glGetActiveAttrib = NULL;
PFNGLGETACTIVEATTRIBARBPROC glext_glGetActiveAttribARB = NULL;
PFNGLGETACTIVESUBROUTINENAMEPROC glext_glGetActiveSubroutineName = NULL;
PFNGLGETACTIVESUBROUTINEUNIFORMNAMEPROC glext_glGetActiveSubroutineUniformName
  = NULL;
PFNGLGETACTIVESUBROUTINEUNIFORMIVPROC glext_glGetActiveSubroutineUniformiv
  = NULL;
PFNGLGETACTIVEUNIFORMPROC glext_glGetActiveUniform = NULL;
PFNGLGETACTIVEUNIFORMARBPROC glext_glGetActiveUniformARB = NULL;
PFNGLGETACTIVEUNIFORMBLOCKNAMEPROC glext_glGetActiveUniformBlockName = NULL;
PFNGLGETACTIVEUNIFORMBLOCKIVPROC glext_glGetActiveUniformBlockiv = NULL;
PFNGLGETACTIVEUNIFORMNAMEPROC glext_glGetActiveUniformName = NULL;
PFNGLGETACTIVEUNIFORMSIVPROC glext_glGetActiveUniformsiv = NULL;
PFNGLGETACTIVEVARYINGNVPROC glext_glGetActiveVaryingNV = NULL;
PFNGLGETARRAYOBJECTFVATIPROC glext_glGetArrayObjectfvATI = NULL;
PFNGLGETARRAYOBJECTIVATIPROC glext_glGetArrayObjectivATI = NULL;
PFNGLGETATTACHEDOBJECTSARBPROC glext_glGetAttachedObjectsARB = NULL;
PFNGLGETATTACHEDSHADERSPROC glext_glGetAttachedShaders = NULL;
PFNGLGETATTRIBLOCATIONPROC glext_glGetAttribLocation = NULL;
PFNGLGETATTRIBLOCATIONARBPROC glext_glGetAttribLocationARB = NULL;
PFNGLGETBOOLEANINDEXEDVEXTPROC glext_glGetBooleanIndexedvEXT = NULL;
PFNGLGETBOOLEANI_VPROC glext_glGetBooleani_v = NULL;
PFNGLGETBOOLEANVPROC glext_glGetBooleanv = NULL;
PFNGLGETBUFFERPARAMETERI64VPROC glext_glGetBufferParameteri64v = NULL;
PFNGLGETBUFFERPARAMETERIVPROC glext_glGetBufferParameteriv = NULL;
PFNGLGETBUFFERPARAMETERIVARBPROC glext_glGetBufferParameterivARB = NULL;
PFNGLGETBUFFERPARAMETERUI64VNVPROC glext_glGetBufferParameterui64vNV = NULL;
PFNGLGETBUFFERPOINTERVPROC glext_glGetBufferPointerv = NULL;
PFNGLGETBUFFERPOINTERVARBPROC glext_glGetBufferPointervARB = NULL;
PFNGLGETBUFFERSUBDATAPROC glext_glGetBufferSubData = NULL;
PFNGLGETBUFFERSUBDATAARBPROC glext_glGetBufferSubDataARB = NULL;
PFNGLGETCLIPPLANEFOESPROC glext_glGetClipPlanefOES = NULL;
PFNGLGETCLIPPLANEXOESPROC glext_glGetClipPlanexOES = NULL;
PFNGLGETCOLORTABLEEXTPROC glext_glGetColorTableEXT = NULL;
PFNGLGETCOLORTABLEPARAMETERFVEXTPROC glext_glGetColorTableParameterfvEXT
  = NULL;
PFNGLGETCOLORTABLEPARAMETERFVSGIPROC glext_glGetColorTableParameterfvSGI
  = NULL;
PFNGLGETCOLORTABLEPARAMETERIVEXTPROC glext_glGetColorTableParameterivEXT
  = NULL;
PFNGLGETCOLORTABLEPARAMETERIVSGIPROC glext_glGetColorTableParameterivSGI
  = NULL;
PFNGLGETCOLORTABLESGIPROC glext_glGetColorTableSGI = NULL;
PFNGLGETCOMBINERINPUTPARAMETERFVNVPROC glext_glGetCombinerInputParameterfvNV
  = NULL;
PFNGLGETCOMBINERINPUTPARAMETERIVNVPROC glext_glGetCombinerInputParameterivNV
  = NULL;
PFNGLGETCOMBINEROUTPUTPARAMETERFVNVPROC glext_glGetCombinerOutputParameterfvNV
  = NULL;
PFNGLGETCOMBINEROUTPUTPARAMETERIVNVPROC glext_glGetCombinerOutputParameterivNV
  = NULL;
PFNGLGETCOMBINERSTAGEPARAMETERFVNVPROC glext_glGetCombinerStageParameterfvNV
  = NULL;
PFNGLGETCOMMANDHEADERNVPROC glext_glGetCommandHeaderNV = NULL;
PFNGLGETCOMPRESSEDMULTITEXIMAGEEXTPROC glext_glGetCompressedMultiTexImageEXT
  = NULL;
PFNGLGETCOMPRESSEDTEXIMAGEPROC glext_glGetCompressedTexImage = NULL;
PFNGLGETCOMPRESSEDTEXIMAGEARBPROC glext_glGetCompressedTexImageARB = NULL;
PFNGLGETCOMPRESSEDTEXTUREIMAGEPROC glext_glGetCompressedTextureImage = NULL;
PFNGLGETCOMPRESSEDTEXTUREIMAGEEXTPROC glext_glGetCompressedTextureImageEXT
  = NULL;
PFNGLGETCOMPRESSEDTEXTURESUBIMAGEPROC glext_glGetCompressedTextureSubImage
  = NULL;
PFNGLGETCONVOLUTIONFILTEREXTPROC glext_glGetConvolutionFilterEXT = NULL;
PFNGLGETCONVOLUTIONPARAMETERFVEXTPROC glext_glGetConvolutionParameterfvEXT
  = NULL;
PFNGLGETCONVOLUTIONPARAMETERIVEXTPROC glext_glGetConvolutionParameterivEXT
  = NULL;
PFNGLGETCONVOLUTIONPARAMETERXVOESPROC glext_glGetConvolutionParameterxvOES
  = NULL;
PFNGLGETCOVERAGEMODULATIONTABLENVPROC glext_glGetCoverageModulationTableNV
  = NULL;
PFNGLGETDEBUGMESSAGELOGPROC glext_glGetDebugMessageLog = NULL;
PFNGLGETDEBUGMESSAGELOGAMDPROC glext_glGetDebugMessageLogAMD = NULL;
PFNGLGETDEBUGMESSAGELOGARBPROC glext_glGetDebugMessageLogARB = NULL;
PFNGLGETDETAILTEXFUNCSGISPROC glext_glGetDetailTexFuncSGIS = NULL;
PFNGLGETDOUBLEINDEXEDVEXTPROC glext_glGetDoubleIndexedvEXT = NULL;
PFNGLGETDOUBLEI_VPROC glext_glGetDoublei_v = NULL;
PFNGLGETDOUBLEI_VEXTPROC glext_glGetDoublei_vEXT = NULL;
PFNGLGETDOUBLEVPROC glext_glGetDoublev = NULL;
PFNGLGETERRORPROC glext_glGetError = NULL;
PFNGLGETFENCEIVNVPROC glext_glGetFenceivNV = NULL;
PFNGLGETFINALCOMBINERINPUTPARAMETERFVNVPROC
glext_glGetFinalCombinerInputParameterfvNV = NULL;
PFNGLGETFINALCOMBINERINPUTPARAMETERIVNVPROC
glext_glGetFinalCombinerInputParameterivNV = NULL;
PFNGLGETFIRSTPERFQUERYIDINTELPROC glext_glGetFirstPerfQueryIdINTEL = NULL;
PFNGLGETFIXEDVOESPROC glext_glGetFixedvOES = NULL;
PFNGLGETFLOATINDEXEDVEXTPROC glext_glGetFloatIndexedvEXT = NULL;
PFNGLGETFLOATI_VPROC glext_glGetFloati_v = NULL;
PFNGLGETFLOATI_VEXTPROC glext_glGetFloati_vEXT = NULL;
PFNGLGETFLOATVPROC glext_glGetFloatv = NULL;
PFNGLGETFOGFUNCSGISPROC glext_glGetFogFuncSGIS = NULL;
PFNGLGETFRAGDATAINDEXPROC glext_glGetFragDataIndex = NULL;
PFNGLGETFRAGDATALOCATIONPROC glext_glGetFragDataLocation = NULL;
PFNGLGETFRAGDATALOCATIONEXTPROC glext_glGetFragDataLocationEXT = NULL;
PFNGLGETFRAGMENTLIGHTFVSGIXPROC glext_glGetFragmentLightfvSGIX = NULL;
PFNGLGETFRAGMENTLIGHTIVSGIXPROC glext_glGetFragmentLightivSGIX = NULL;
PFNGLGETFRAGMENTMATERIALFVSGIXPROC glext_glGetFragmentMaterialfvSGIX = NULL;
PFNGLGETFRAGMENTMATERIALIVSGIXPROC glext_glGetFragmentMaterialivSGIX = NULL;
PFNGLGETFRAGMENTSHADINGRATESEXTPROC glext_glGetFragmentShadingRatesEXT = NULL;
PFNGLGETFRAMEBUFFERATTACHMENTPARAMETERIVPROC
glext_glGetFramebufferAttachmentParameteriv = NULL;
PFNGLGETFRAMEBUFFERATTACHMENTPARAMETERIVEXTPROC
glext_glGetFramebufferAttachmentParameterivEXT = NULL;
PFNGLGETFRAMEBUFFERPARAMETERFVAMDPROC glext_glGetFramebufferParameterfvAMD
  = NULL;
PFNGLGETFRAMEBUFFERPARAMETERIVPROC glext_glGetFramebufferParameteriv = NULL;
PFNGLGETFRAMEBUFFERPARAMETERIVEXTPROC glext_glGetFramebufferParameterivEXT
  = NULL;
PFNGLGETFRAMEBUFFERPARAMETERIVMESAPROC glext_glGetFramebufferParameterivMESA
  = NULL;
PFNGLGETGRAPHICSRESETSTATUSPROC glext_glGetGraphicsResetStatus = NULL;
PFNGLGETGRAPHICSRESETSTATUSARBPROC glext_glGetGraphicsResetStatusARB = NULL;
PFNGLGETHANDLEARBPROC glext_glGetHandleARB = NULL;
PFNGLGETHISTOGRAMEXTPROC glext_glGetHistogramEXT = NULL;
PFNGLGETHISTOGRAMPARAMETERFVEXTPROC glext_glGetHistogramParameterfvEXT = NULL;
PFNGLGETHISTOGRAMPARAMETERIVEXTPROC glext_glGetHistogramParameterivEXT = NULL;
PFNGLGETHISTOGRAMPARAMETERXVOESPROC glext_glGetHistogramParameterxvOES = NULL;
PFNGLGETIMAGEHANDLEARBPROC glext_glGetImageHandleARB = NULL;
PFNGLGETIMAGEHANDLENVPROC glext_glGetImageHandleNV = NULL;
PFNGLGETIMAGETRANSFORMPARAMETERFVHPPROC glext_glGetImageTransformParameterfvHP
  = NULL;
PFNGLGETIMAGETRANSFORMPARAMETERIVHPPROC glext_glGetImageTransformParameterivHP
  = NULL;
PFNGLGETINFOLOGARBPROC glext_glGetInfoLogARB = NULL;
PFNGLGETINSTRUMENTSSGIXPROC glext_glGetInstrumentsSGIX = NULL;
PFNGLGETINTEGER64I_VPROC glext_glGetInteger64i_v = NULL;
PFNGLGETINTEGER64VPROC glext_glGetInteger64v = NULL;
PFNGLGETINTEGERINDEXEDVEXTPROC glext_glGetIntegerIndexedvEXT = NULL;
PFNGLGETINTEGERI_VPROC glext_glGetIntegeri_v = NULL;
PFNGLGETINTEGERUI64I_VNVPROC glext_glGetIntegerui64i_vNV = NULL;
PFNGLGETINTEGERUI64VNVPROC glext_glGetIntegerui64vNV = NULL;
PFNGLGETINTEGERVPROC glext_glGetIntegerv = NULL;
PFNGLGETINTERNALFORMATSAMPLEIVNVPROC glext_glGetInternalformatSampleivNV
  = NULL;
PFNGLGETINTERNALFORMATI64VPROC glext_glGetInternalformati64v = NULL;
PFNGLGETINTERNALFORMATIVPROC glext_glGetInternalformativ = NULL;
PFNGLGETINVARIANTBOOLEANVEXTPROC glext_glGetInvariantBooleanvEXT = NULL;
PFNGLGETINVARIANTFLOATVEXTPROC glext_glGetInvariantFloatvEXT = NULL;
PFNGLGETINVARIANTINTEGERVEXTPROC glext_glGetInvariantIntegervEXT = NULL;
PFNGLGETLIGHTXOESPROC glext_glGetLightxOES = NULL;
PFNGLGETLISTPARAMETERFVSGIXPROC glext_glGetListParameterfvSGIX = NULL;
PFNGLGETLISTPARAMETERIVSGIXPROC glext_glGetListParameterivSGIX = NULL;
PFNGLGETLOCALCONSTANTBOOLEANVEXTPROC glext_glGetLocalConstantBooleanvEXT
  = NULL;
PFNGLGETLOCALCONSTANTFLOATVEXTPROC glext_glGetLocalConstantFloatvEXT = NULL;
PFNGLGETLOCALCONSTANTINTEGERVEXTPROC glext_glGetLocalConstantIntegervEXT
  = NULL;
PFNGLGETMAPATTRIBPARAMETERFVNVPROC glext_glGetMapAttribParameterfvNV = NULL;
PFNGLGETMAPATTRIBPARAMETERIVNVPROC glext_glGetMapAttribParameterivNV = NULL;
PFNGLGETMAPCONTROLPOINTSNVPROC glext_glGetMapControlPointsNV = NULL;
PFNGLGETMAPPARAMETERFVNVPROC glext_glGetMapParameterfvNV = NULL;
PFNGLGETMAPPARAMETERIVNVPROC glext_glGetMapParameterivNV = NULL;
PFNGLGETMAPXVOESPROC glext_glGetMapxvOES = NULL;
PFNGLGETMATERIALXOESPROC glext_glGetMaterialxOES = NULL;
PFNGLGETMEMORYOBJECTDETACHEDRESOURCESUIVNVPROC
glext_glGetMemoryObjectDetachedResourcesuivNV = NULL;
PFNGLGETMEMORYOBJECTPARAMETERIVEXTPROC glext_glGetMemoryObjectParameterivEXT
  = NULL;
PFNGLGETMINMAXEXTPROC glext_glGetMinmaxEXT = NULL;
PFNGLGETMINMAXPARAMETERFVEXTPROC glext_glGetMinmaxParameterfvEXT = NULL;
PFNGLGETMINMAXPARAMETERIVEXTPROC glext_glGetMinmaxParameterivEXT = NULL;
PFNGLGETMULTITEXENVFVEXTPROC glext_glGetMultiTexEnvfvEXT = NULL;
PFNGLGETMULTITEXENVIVEXTPROC glext_glGetMultiTexEnvivEXT = NULL;
PFNGLGETMULTITEXGENDVEXTPROC glext_glGetMultiTexGendvEXT = NULL;
PFNGLGETMULTITEXGENFVEXTPROC glext_glGetMultiTexGenfvEXT = NULL;
PFNGLGETMULTITEXGENIVEXTPROC glext_glGetMultiTexGenivEXT = NULL;
PFNGLGETMULTITEXIMAGEEXTPROC glext_glGetMultiTexImageEXT = NULL;
PFNGLGETMULTITEXLEVELPARAMETERFVEXTPROC glext_glGetMultiTexLevelParameterfvEXT
  = NULL;
PFNGLGETMULTITEXLEVELPARAMETERIVEXTPROC glext_glGetMultiTexLevelParameterivEXT
  = NULL;
PFNGLGETMULTITEXPARAMETERIIVEXTPROC glext_glGetMultiTexParameterIivEXT = NULL;
PFNGLGETMULTITEXPARAMETERIUIVEXTPROC glext_glGetMultiTexParameterIuivEXT
  = NULL;
PFNGLGETMULTITEXPARAMETERFVEXTPROC glext_glGetMultiTexParameterfvEXT = NULL;
PFNGLGETMULTITEXPARAMETERIVEXTPROC glext_glGetMultiTexParameterivEXT = NULL;
PFNGLGETMULTISAMPLEFVPROC glext_glGetMultisamplefv = NULL;
PFNGLGETMULTISAMPLEFVNVPROC glext_glGetMultisamplefvNV = NULL;
PFNGLGETNAMEDBUFFERPARAMETERI64VPROC glext_glGetNamedBufferParameteri64v
  = NULL;
PFNGLGETNAMEDBUFFERPARAMETERIVPROC glext_glGetNamedBufferParameteriv = NULL;
PFNGLGETNAMEDBUFFERPARAMETERIVEXTPROC glext_glGetNamedBufferParameterivEXT
  = NULL;
PFNGLGETNAMEDBUFFERPARAMETERUI64VNVPROC glext_glGetNamedBufferParameterui64vNV
  = NULL;
PFNGLGETNAMEDBUFFERPOINTERVPROC glext_glGetNamedBufferPointerv = NULL;
PFNGLGETNAMEDBUFFERPOINTERVEXTPROC glext_glGetNamedBufferPointervEXT = NULL;
PFNGLGETNAMEDBUFFERSUBDATAPROC glext_glGetNamedBufferSubData = NULL;
PFNGLGETNAMEDBUFFERSUBDATAEXTPROC glext_glGetNamedBufferSubDataEXT = NULL;
PFNGLGETNAMEDFRAMEBUFFERATTACHMENTPARAMETERIVPROC
glext_glGetNamedFramebufferAttachmentParameteriv = NULL;
PFNGLGETNAMEDFRAMEBUFFERATTACHMENTPARAMETERIVEXTPROC
glext_glGetNamedFramebufferAttachmentParameterivEXT = NULL;
PFNGLGETNAMEDFRAMEBUFFERPARAMETERFVAMDPROC
glext_glGetNamedFramebufferParameterfvAMD = NULL;
PFNGLGETNAMEDFRAMEBUFFERPARAMETERIVPROC glext_glGetNamedFramebufferParameteriv
  = NULL;
PFNGLGETNAMEDFRAMEBUFFERPARAMETERIVEXTPROC
glext_glGetNamedFramebufferParameterivEXT = NULL;
PFNGLGETNAMEDPROGRAMLOCALPARAMETERIIVEXTPROC
glext_glGetNamedProgramLocalParameterIivEXT = NULL;
PFNGLGETNAMEDPROGRAMLOCALPARAMETERIUIVEXTPROC
glext_glGetNamedProgramLocalParameterIuivEXT = NULL;
PFNGLGETNAMEDPROGRAMLOCALPARAMETERDVEXTPROC
glext_glGetNamedProgramLocalParameterdvEXT = NULL;
PFNGLGETNAMEDPROGRAMLOCALPARAMETERFVEXTPROC
glext_glGetNamedProgramLocalParameterfvEXT = NULL;
PFNGLGETNAMEDPROGRAMSTRINGEXTPROC glext_glGetNamedProgramStringEXT = NULL;
PFNGLGETNAMEDPROGRAMIVEXTPROC glext_glGetNamedProgramivEXT = NULL;
PFNGLGETNAMEDRENDERBUFFERPARAMETERIVPROC
glext_glGetNamedRenderbufferParameteriv = NULL;
PFNGLGETNAMEDRENDERBUFFERPARAMETERIVEXTPROC
glext_glGetNamedRenderbufferParameterivEXT = NULL;
PFNGLGETNAMEDSTRINGARBPROC glext_glGetNamedStringARB = NULL;
PFNGLGETNAMEDSTRINGIVARBPROC glext_glGetNamedStringivARB = NULL;
PFNGLGETNEXTPERFQUERYIDINTELPROC glext_glGetNextPerfQueryIdINTEL = NULL;
PFNGLGETOBJECTBUFFERFVATIPROC glext_glGetObjectBufferfvATI = NULL;
PFNGLGETOBJECTBUFFERIVATIPROC glext_glGetObjectBufferivATI = NULL;
PFNGLGETOBJECTLABELPROC glext_glGetObjectLabel = NULL;
PFNGLGETOBJECTLABELEXTPROC glext_glGetObjectLabelEXT = NULL;
PFNGLGETOBJECTPARAMETERFVARBPROC glext_glGetObjectParameterfvARB = NULL;
PFNGLGETOBJECTPARAMETERIVAPPLEPROC glext_glGetObjectParameterivAPPLE = NULL;
PFNGLGETOBJECTPARAMETERIVARBPROC glext_glGetObjectParameterivARB = NULL;
PFNGLGETOBJECTPTRLABELPROC glext_glGetObjectPtrLabel = NULL;
PFNGLGETOCCLUSIONQUERYIVNVPROC glext_glGetOcclusionQueryivNV = NULL;
PFNGLGETOCCLUSIONQUERYUIVNVPROC glext_glGetOcclusionQueryuivNV = NULL;
PFNGLGETPATHCOMMANDSNVPROC glext_glGetPathCommandsNV = NULL;
PFNGLGETPATHCOORDSNVPROC glext_glGetPathCoordsNV = NULL;
PFNGLGETPATHDASHARRAYNVPROC glext_glGetPathDashArrayNV = NULL;
PFNGLGETPATHLENGTHNVPROC glext_glGetPathLengthNV = NULL;
PFNGLGETPATHMETRICRANGENVPROC glext_glGetPathMetricRangeNV = NULL;
PFNGLGETPATHMETRICSNVPROC glext_glGetPathMetricsNV = NULL;
PFNGLGETPATHPARAMETERFVNVPROC glext_glGetPathParameterfvNV = NULL;
PFNGLGETPATHPARAMETERIVNVPROC glext_glGetPathParameterivNV = NULL;
PFNGLGETPATHSPACINGNVPROC glext_glGetPathSpacingNV = NULL;
PFNGLGETPERFCOUNTERINFOINTELPROC glext_glGetPerfCounterInfoINTEL = NULL;
PFNGLGETPERFMONITORCOUNTERDATAAMDPROC glext_glGetPerfMonitorCounterDataAMD
  = NULL;
PFNGLGETPERFMONITORCOUNTERINFOAMDPROC glext_glGetPerfMonitorCounterInfoAMD
  = NULL;
PFNGLGETPERFMONITORCOUNTERSTRINGAMDPROC glext_glGetPerfMonitorCounterStringAMD
  = NULL;
PFNGLGETPERFMONITORCOUNTERSAMDPROC glext_glGetPerfMonitorCountersAMD = NULL;
PFNGLGETPERFMONITORGROUPSTRINGAMDPROC glext_glGetPerfMonitorGroupStringAMD
  = NULL;
PFNGLGETPERFMONITORGROUPSAMDPROC glext_glGetPerfMonitorGroupsAMD = NULL;
PFNGLGETPERFQUERYDATAINTELPROC glext_glGetPerfQueryDataINTEL = NULL;
PFNGLGETPERFQUERYIDBYNAMEINTELPROC glext_glGetPerfQueryIdByNameINTEL = NULL;
PFNGLGETPERFQUERYINFOINTELPROC glext_glGetPerfQueryInfoINTEL = NULL;
PFNGLGETPIXELMAPXVPROC glext_glGetPixelMapxv = NULL;
PFNGLGETPIXELTEXGENPARAMETERFVSGISPROC glext_glGetPixelTexGenParameterfvSGIS
  = NULL;
PFNGLGETPIXELTEXGENPARAMETERIVSGISPROC glext_glGetPixelTexGenParameterivSGIS
  = NULL;
PFNGLGETPIXELTRANSFORMPARAMETERFVEXTPROC
glext_glGetPixelTransformParameterfvEXT = NULL;
PFNGLGETPIXELTRANSFORMPARAMETERIVEXTPROC
glext_glGetPixelTransformParameterivEXT = NULL;
PFNGLGETPOINTERINDEXEDVEXTPROC glext_glGetPointerIndexedvEXT = NULL;
PFNGLGETPOINTERI_VEXTPROC glext_glGetPointeri_vEXT = NULL;
PFNGLGETPOINTERVPROC glext_glGetPointerv = NULL;
PFNGLGETPOINTERVEXTPROC glext_glGetPointervEXT = NULL;
PFNGLGETPROGRAMBINARYPROC glext_glGetProgramBinary = NULL;
PFNGLGETPROGRAMENVPARAMETERIIVNVPROC glext_glGetProgramEnvParameterIivNV
  = NULL;
PFNGLGETPROGRAMENVPARAMETERIUIVNVPROC glext_glGetProgramEnvParameterIuivNV
  = NULL;
PFNGLGETPROGRAMENVPARAMETERDVARBPROC glext_glGetProgramEnvParameterdvARB
  = NULL;
PFNGLGETPROGRAMENVPARAMETERFVARBPROC glext_glGetProgramEnvParameterfvARB
  = NULL;
PFNGLGETPROGRAMINFOLOGPROC glext_glGetProgramInfoLog = NULL;
PFNGLGETPROGRAMINTERFACEIVPROC glext_glGetProgramInterfaceiv = NULL;
PFNGLGETPROGRAMLOCALPARAMETERIIVNVPROC glext_glGetProgramLocalParameterIivNV
  = NULL;
PFNGLGETPROGRAMLOCALPARAMETERIUIVNVPROC glext_glGetProgramLocalParameterIuivNV
  = NULL;
PFNGLGETPROGRAMLOCALPARAMETERDVARBPROC glext_glGetProgramLocalParameterdvARB
  = NULL;
PFNGLGETPROGRAMLOCALPARAMETERFVARBPROC glext_glGetProgramLocalParameterfvARB
  = NULL;
PFNGLGETPROGRAMNAMEDPARAMETERDVNVPROC glext_glGetProgramNamedParameterdvNV
  = NULL;
PFNGLGETPROGRAMNAMEDPARAMETERFVNVPROC glext_glGetProgramNamedParameterfvNV
  = NULL;
PFNGLGETPROGRAMPARAMETERDVNVPROC glext_glGetProgramParameterdvNV = NULL;
PFNGLGETPROGRAMPARAMETERFVNVPROC glext_glGetProgramParameterfvNV = NULL;
PFNGLGETPROGRAMPIPELINEINFOLOGPROC glext_glGetProgramPipelineInfoLog = NULL;
PFNGLGETPROGRAMPIPELINEIVPROC glext_glGetProgramPipelineiv = NULL;
PFNGLGETPROGRAMRESOURCEINDEXPROC glext_glGetProgramResourceIndex = NULL;
PFNGLGETPROGRAMRESOURCELOCATIONPROC glext_glGetProgramResourceLocation = NULL;
PFNGLGETPROGRAMRESOURCELOCATIONINDEXPROC
glext_glGetProgramResourceLocationIndex = NULL;
PFNGLGETPROGRAMRESOURCENAMEPROC glext_glGetProgramResourceName = NULL;
PFNGLGETPROGRAMRESOURCEFVNVPROC glext_glGetProgramResourcefvNV = NULL;
PFNGLGETPROGRAMRESOURCEIVPROC glext_glGetProgramResourceiv = NULL;
PFNGLGETPROGRAMSTAGEIVPROC glext_glGetProgramStageiv = NULL;
PFNGLGETPROGRAMSTRINGARBPROC glext_glGetProgramStringARB = NULL;
PFNGLGETPROGRAMSTRINGNVPROC glext_glGetProgramStringNV = NULL;
PFNGLGETPROGRAMSUBROUTINEPARAMETERUIVNVPROC
glext_glGetProgramSubroutineParameteruivNV = NULL;
PFNGLGETPROGRAMIVPROC glext_glGetProgramiv = NULL;
PFNGLGETPROGRAMIVARBPROC glext_glGetProgramivARB = NULL;
PFNGLGETPROGRAMIVNVPROC glext_glGetProgramivNV = NULL;
PFNGLGETQUERYBUFFEROBJECTI64VPROC glext_glGetQueryBufferObjecti64v = NULL;
PFNGLGETQUERYBUFFEROBJECTIVPROC glext_glGetQueryBufferObjectiv = NULL;
PFNGLGETQUERYBUFFEROBJECTUI64VPROC glext_glGetQueryBufferObjectui64v = NULL;
PFNGLGETQUERYBUFFEROBJECTUIVPROC glext_glGetQueryBufferObjectuiv = NULL;
PFNGLGETQUERYINDEXEDIVPROC glext_glGetQueryIndexediv = NULL;
PFNGLGETQUERYOBJECTI64VPROC glext_glGetQueryObjecti64v = NULL;
PFNGLGETQUERYOBJECTI64VEXTPROC glext_glGetQueryObjecti64vEXT = NULL;
PFNGLGETQUERYOBJECTIVPROC glext_glGetQueryObjectiv = NULL;
PFNGLGETQUERYOBJECTIVARBPROC glext_glGetQueryObjectivARB = NULL;
PFNGLGETQUERYOBJECTUI64VPROC glext_glGetQueryObjectui64v = NULL;
PFNGLGETQUERYOBJECTUI64VEXTPROC glext_glGetQueryObjectui64vEXT = NULL;
PFNGLGETQUERYOBJECTUIVPROC glext_glGetQueryObjectuiv = NULL;
PFNGLGETQUERYOBJECTUIVARBPROC glext_glGetQueryObjectuivARB = NULL;
PFNGLGETQUERYIVPROC glext_glGetQueryiv = NULL;
PFNGLGETQUERYIVARBPROC glext_glGetQueryivARB = NULL;
PFNGLGETRENDERBUFFERPARAMETERIVPROC glext_glGetRenderbufferParameteriv = NULL;
PFNGLGETRENDERBUFFERPARAMETERIVEXTPROC glext_glGetRenderbufferParameterivEXT
  = NULL;
PFNGLGETSAMPLERPARAMETERIIVPROC glext_glGetSamplerParameterIiv = NULL;
PFNGLGETSAMPLERPARAMETERIUIVPROC glext_glGetSamplerParameterIuiv = NULL;
PFNGLGETSAMPLERPARAMETERFVPROC glext_glGetSamplerParameterfv = NULL;
PFNGLGETSAMPLERPARAMETERIVPROC glext_glGetSamplerParameteriv = NULL;
PFNGLGETSEMAPHOREPARAMETERIVNVPROC glext_glGetSemaphoreParameterivNV = NULL;
PFNGLGETSEMAPHOREPARAMETERUI64VEXTPROC glext_glGetSemaphoreParameterui64vEXT
  = NULL;
PFNGLGETSEPARABLEFILTEREXTPROC glext_glGetSeparableFilterEXT = NULL;
PFNGLGETSHADERINFOLOGPROC glext_glGetShaderInfoLog = NULL;
PFNGLGETSHADERPRECISIONFORMATPROC glext_glGetShaderPrecisionFormat = NULL;
PFNGLGETSHADERSOURCEPROC glext_glGetShaderSource = NULL;
PFNGLGETSHADERSOURCEARBPROC glext_glGetShaderSourceARB = NULL;
PFNGLGETSHADERIVPROC glext_glGetShaderiv = NULL;
PFNGLGETSHADINGRATEIMAGEPALETTENVPROC glext_glGetShadingRateImagePaletteNV
  = NULL;
PFNGLGETSHADINGRATESAMPLELOCATIONIVNVPROC
glext_glGetShadingRateSampleLocationivNV = NULL;
PFNGLGETSHARPENTEXFUNCSGISPROC glext_glGetSharpenTexFuncSGIS = NULL;
PFNGLGETSTAGEINDEXNVPROC glext_glGetStageIndexNV = NULL;
PFNGLGETSTRINGPROC glext_glGetString = NULL;
PFNGLGETSTRINGIPROC glext_glGetStringi = NULL;
PFNGLGETSUBROUTINEINDEXPROC glext_glGetSubroutineIndex = NULL;
PFNGLGETSUBROUTINEUNIFORMLOCATIONPROC glext_glGetSubroutineUniformLocation
  = NULL;
PFNGLGETSYNCIVPROC glext_glGetSynciv = NULL;
PFNGLGETTEXBUMPPARAMETERFVATIPROC glext_glGetTexBumpParameterfvATI = NULL;
PFNGLGETTEXBUMPPARAMETERIVATIPROC glext_glGetTexBumpParameterivATI = NULL;
PFNGLGETTEXENVXVOESPROC glext_glGetTexEnvxvOES = NULL;
PFNGLGETTEXFILTERFUNCSGISPROC glext_glGetTexFilterFuncSGIS = NULL;
PFNGLGETTEXGENXVOESPROC glext_glGetTexGenxvOES = NULL;
PFNGLGETTEXIMAGEPROC glext_glGetTexImage = NULL;
PFNGLGETTEXLEVELPARAMETERFVPROC glext_glGetTexLevelParameterfv = NULL;
PFNGLGETTEXLEVELPARAMETERIVPROC glext_glGetTexLevelParameteriv = NULL;
PFNGLGETTEXLEVELPARAMETERXVOESPROC glext_glGetTexLevelParameterxvOES = NULL;
PFNGLGETTEXPARAMETERIIVPROC glext_glGetTexParameterIiv = NULL;
PFNGLGETTEXPARAMETERIIVEXTPROC glext_glGetTexParameterIivEXT = NULL;
PFNGLGETTEXPARAMETERIUIVPROC glext_glGetTexParameterIuiv = NULL;
PFNGLGETTEXPARAMETERIUIVEXTPROC glext_glGetTexParameterIuivEXT = NULL;
PFNGLGETTEXPARAMETERPOINTERVAPPLEPROC glext_glGetTexParameterPointervAPPLE
  = NULL;
PFNGLGETTEXPARAMETERFVPROC glext_glGetTexParameterfv = NULL;
PFNGLGETTEXPARAMETERIVPROC glext_glGetTexParameteriv = NULL;
PFNGLGETTEXPARAMETERXVOESPROC glext_glGetTexParameterxvOES = NULL;
PFNGLGETTEXTUREHANDLEARBPROC glext_glGetTextureHandleARB = NULL;
PFNGLGETTEXTUREHANDLENVPROC glext_glGetTextureHandleNV = NULL;
PFNGLGETTEXTUREIMAGEPROC glext_glGetTextureImage = NULL;
PFNGLGETTEXTUREIMAGEEXTPROC glext_glGetTextureImageEXT = NULL;
PFNGLGETTEXTURELEVELPARAMETERFVPROC glext_glGetTextureLevelParameterfv = NULL;
PFNGLGETTEXTURELEVELPARAMETERFVEXTPROC glext_glGetTextureLevelParameterfvEXT
  = NULL;
PFNGLGETTEXTURELEVELPARAMETERIVPROC glext_glGetTextureLevelParameteriv = NULL;
PFNGLGETTEXTURELEVELPARAMETERIVEXTPROC glext_glGetTextureLevelParameterivEXT
  = NULL;
PFNGLGETTEXTUREPARAMETERIIVPROC glext_glGetTextureParameterIiv = NULL;
PFNGLGETTEXTUREPARAMETERIIVEXTPROC glext_glGetTextureParameterIivEXT = NULL;
PFNGLGETTEXTUREPARAMETERIUIVPROC glext_glGetTextureParameterIuiv = NULL;
PFNGLGETTEXTUREPARAMETERIUIVEXTPROC glext_glGetTextureParameterIuivEXT = NULL;
PFNGLGETTEXTUREPARAMETERFVPROC glext_glGetTextureParameterfv = NULL;
PFNGLGETTEXTUREPARAMETERFVEXTPROC glext_glGetTextureParameterfvEXT = NULL;
PFNGLGETTEXTUREPARAMETERIVPROC glext_glGetTextureParameteriv = NULL;
PFNGLGETTEXTUREPARAMETERIVEXTPROC glext_glGetTextureParameterivEXT = NULL;
PFNGLGETTEXTURESAMPLERHANDLEARBPROC glext_glGetTextureSamplerHandleARB = NULL;
PFNGLGETTEXTURESAMPLERHANDLENVPROC glext_glGetTextureSamplerHandleNV = NULL;
PFNGLGETTEXTURESUBIMAGEPROC glext_glGetTextureSubImage = NULL;
PFNGLGETTRACKMATRIXIVNVPROC glext_glGetTrackMatrixivNV = NULL;
PFNGLGETTRANSFORMFEEDBACKVARYINGPROC glext_glGetTransformFeedbackVarying
  = NULL;
PFNGLGETTRANSFORMFEEDBACKVARYINGEXTPROC glext_glGetTransformFeedbackVaryingEXT
  = NULL;
PFNGLGETTRANSFORMFEEDBACKVARYINGNVPROC glext_glGetTransformFeedbackVaryingNV
  = NULL;
PFNGLGETTRANSFORMFEEDBACKI64_VPROC glext_glGetTransformFeedbacki64_v = NULL;
PFNGLGETTRANSFORMFEEDBACKI_VPROC glext_glGetTransformFeedbacki_v = NULL;
PFNGLGETTRANSFORMFEEDBACKIVPROC glext_glGetTransformFeedbackiv = NULL;
PFNGLGETUNIFORMBLOCKINDEXPROC glext_glGetUniformBlockIndex = NULL;
PFNGLGETUNIFORMBUFFERSIZEEXTPROC glext_glGetUniformBufferSizeEXT = NULL;
PFNGLGETUNIFORMINDICESPROC glext_glGetUniformIndices = NULL;
PFNGLGETUNIFORMLOCATIONPROC glext_glGetUniformLocation = NULL;
PFNGLGETUNIFORMLOCATIONARBPROC glext_glGetUniformLocationARB = NULL;
PFNGLGETUNIFORMOFFSETEXTPROC glext_glGetUniformOffsetEXT = NULL;
PFNGLGETUNIFORMSUBROUTINEUIVPROC glext_glGetUniformSubroutineuiv = NULL;
PFNGLGETUNIFORMDVPROC glext_glGetUniformdv = NULL;
PFNGLGETUNIFORMFVPROC glext_glGetUniformfv = NULL;
PFNGLGETUNIFORMFVARBPROC glext_glGetUniformfvARB = NULL;
PFNGLGETUNIFORMI64VARBPROC glext_glGetUniformi64vARB = NULL;
PFNGLGETUNIFORMI64VNVPROC glext_glGetUniformi64vNV = NULL;
PFNGLGETUNIFORMIVPROC glext_glGetUniformiv = NULL;
PFNGLGETUNIFORMIVARBPROC glext_glGetUniformivARB = NULL;
PFNGLGETUNIFORMUI64VARBPROC glext_glGetUniformui64vARB = NULL;
PFNGLGETUNIFORMUI64VNVPROC glext_glGetUniformui64vNV = NULL;
PFNGLGETUNIFORMUIVPROC glext_glGetUniformuiv = NULL;
PFNGLGETUNIFORMUIVEXTPROC glext_glGetUniformuivEXT = NULL;
PFNGLGETUNSIGNEDBYTEI_VEXTPROC glext_glGetUnsignedBytei_vEXT = NULL;
PFNGLGETUNSIGNEDBYTEVEXTPROC glext_glGetUnsignedBytevEXT = NULL;
PFNGLGETVARIANTARRAYOBJECTFVATIPROC glext_glGetVariantArrayObjectfvATI = NULL;
PFNGLGETVARIANTARRAYOBJECTIVATIPROC glext_glGetVariantArrayObjectivATI = NULL;
PFNGLGETVARIANTBOOLEANVEXTPROC glext_glGetVariantBooleanvEXT = NULL;
PFNGLGETVARIANTFLOATVEXTPROC glext_glGetVariantFloatvEXT = NULL;
PFNGLGETVARIANTINTEGERVEXTPROC glext_glGetVariantIntegervEXT = NULL;
PFNGLGETVARIANTPOINTERVEXTPROC glext_glGetVariantPointervEXT = NULL;
PFNGLGETVARYINGLOCATIONNVPROC glext_glGetVaryingLocationNV = NULL;
PFNGLGETVERTEXARRAYINDEXED64IVPROC glext_glGetVertexArrayIndexed64iv = NULL;
PFNGLGETVERTEXARRAYINDEXEDIVPROC glext_glGetVertexArrayIndexediv = NULL;
PFNGLGETVERTEXARRAYINTEGERI_VEXTPROC glext_glGetVertexArrayIntegeri_vEXT
  = NULL;
PFNGLGETVERTEXARRAYINTEGERVEXTPROC glext_glGetVertexArrayIntegervEXT = NULL;
PFNGLGETVERTEXARRAYPOINTERI_VEXTPROC glext_glGetVertexArrayPointeri_vEXT
  = NULL;
PFNGLGETVERTEXARRAYPOINTERVEXTPROC glext_glGetVertexArrayPointervEXT = NULL;
PFNGLGETVERTEXARRAYIVPROC glext_glGetVertexArrayiv = NULL;
PFNGLGETVERTEXATTRIBARRAYOBJECTFVATIPROC
glext_glGetVertexAttribArrayObjectfvATI = NULL;
PFNGLGETVERTEXATTRIBARRAYOBJECTIVATIPROC
glext_glGetVertexAttribArrayObjectivATI = NULL;
PFNGLGETVERTEXATTRIBIIVPROC glext_glGetVertexAttribIiv = NULL;
PFNGLGETVERTEXATTRIBIIVEXTPROC glext_glGetVertexAttribIivEXT = NULL;
PFNGLGETVERTEXATTRIBIUIVPROC glext_glGetVertexAttribIuiv = NULL;
PFNGLGETVERTEXATTRIBIUIVEXTPROC glext_glGetVertexAttribIuivEXT = NULL;
PFNGLGETVERTEXATTRIBLDVPROC glext_glGetVertexAttribLdv = NULL;
PFNGLGETVERTEXATTRIBLDVEXTPROC glext_glGetVertexAttribLdvEXT = NULL;
PFNGLGETVERTEXATTRIBLI64VNVPROC glext_glGetVertexAttribLi64vNV = NULL;
PFNGLGETVERTEXATTRIBLUI64VARBPROC glext_glGetVertexAttribLui64vARB = NULL;
PFNGLGETVERTEXATTRIBLUI64VNVPROC glext_glGetVertexAttribLui64vNV = NULL;
PFNGLGETVERTEXATTRIBPOINTERVPROC glext_glGetVertexAttribPointerv = NULL;
PFNGLGETVERTEXATTRIBPOINTERVARBPROC glext_glGetVertexAttribPointervARB = NULL;
PFNGLGETVERTEXATTRIBPOINTERVNVPROC glext_glGetVertexAttribPointervNV = NULL;
PFNGLGETVERTEXATTRIBDVPROC glext_glGetVertexAttribdv = NULL;
PFNGLGETVERTEXATTRIBDVARBPROC glext_glGetVertexAttribdvARB = NULL;
PFNGLGETVERTEXATTRIBDVNVPROC glext_glGetVertexAttribdvNV = NULL;
PFNGLGETVERTEXATTRIBFVPROC glext_glGetVertexAttribfv = NULL;
PFNGLGETVERTEXATTRIBFVARBPROC glext_glGetVertexAttribfvARB = NULL;
PFNGLGETVERTEXATTRIBFVNVPROC glext_glGetVertexAttribfvNV = NULL;
PFNGLGETVERTEXATTRIBIVPROC glext_glGetVertexAttribiv = NULL;
PFNGLGETVERTEXATTRIBIVARBPROC glext_glGetVertexAttribivARB = NULL;
PFNGLGETVERTEXATTRIBIVNVPROC glext_glGetVertexAttribivNV = NULL;
PFNGLGETVIDEOCAPTURESTREAMDVNVPROC glext_glGetVideoCaptureStreamdvNV = NULL;
PFNGLGETVIDEOCAPTURESTREAMFVNVPROC glext_glGetVideoCaptureStreamfvNV = NULL;
PFNGLGETVIDEOCAPTURESTREAMIVNVPROC glext_glGetVideoCaptureStreamivNV = NULL;
PFNGLGETVIDEOCAPTUREIVNVPROC glext_glGetVideoCaptureivNV = NULL;
PFNGLGETVIDEOI64VNVPROC glext_glGetVideoi64vNV = NULL;
PFNGLGETVIDEOIVNVPROC glext_glGetVideoivNV = NULL;
PFNGLGETVIDEOUI64VNVPROC glext_glGetVideoui64vNV = NULL;
PFNGLGETVIDEOUIVNVPROC glext_glGetVideouivNV = NULL;
PFNGLGETVKPROCADDRNVPROC glext_glGetVkProcAddrNV = NULL;
PFNGLGETNCOMPRESSEDTEXIMAGEPROC glext_glGetnCompressedTexImage = NULL;
PFNGLGETNCOMPRESSEDTEXIMAGEARBPROC glext_glGetnCompressedTexImageARB = NULL;
PFNGLGETNTEXIMAGEPROC glext_glGetnTexImage = NULL;
PFNGLGETNTEXIMAGEARBPROC glext_glGetnTexImageARB = NULL;
PFNGLGETNUNIFORMDVPROC glext_glGetnUniformdv = NULL;
PFNGLGETNUNIFORMDVARBPROC glext_glGetnUniformdvARB = NULL;
PFNGLGETNUNIFORMFVPROC glext_glGetnUniformfv = NULL;
PFNGLGETNUNIFORMFVARBPROC glext_glGetnUniformfvARB = NULL;
PFNGLGETNUNIFORMI64VARBPROC glext_glGetnUniformi64vARB = NULL;
PFNGLGETNUNIFORMIVPROC glext_glGetnUniformiv = NULL;
PFNGLGETNUNIFORMIVARBPROC glext_glGetnUniformivARB = NULL;
PFNGLGETNUNIFORMUI64VARBPROC glext_glGetnUniformui64vARB = NULL;
PFNGLGETNUNIFORMUIVPROC glext_glGetnUniformuiv = NULL;
PFNGLGETNUNIFORMUIVARBPROC glext_glGetnUniformuivARB = NULL;
PFNGLGLOBALALPHAFACTORBSUNPROC glext_glGlobalAlphaFactorbSUN = NULL;
PFNGLGLOBALALPHAFACTORDSUNPROC glext_glGlobalAlphaFactordSUN = NULL;
PFNGLGLOBALALPHAFACTORFSUNPROC glext_glGlobalAlphaFactorfSUN = NULL;
PFNGLGLOBALALPHAFACTORISUNPROC glext_glGlobalAlphaFactoriSUN = NULL;
PFNGLGLOBALALPHAFACTORSSUNPROC glext_glGlobalAlphaFactorsSUN = NULL;
PFNGLGLOBALALPHAFACTORUBSUNPROC glext_glGlobalAlphaFactorubSUN = NULL;
PFNGLGLOBALALPHAFACTORUISUNPROC glext_glGlobalAlphaFactoruiSUN = NULL;
PFNGLGLOBALALPHAFACTORUSSUNPROC glext_glGlobalAlphaFactorusSUN = NULL;
PFNGLHINTPROC glext_glHint = NULL;
PFNGLHINTPGIPROC glext_glHintPGI = NULL;
PFNGLHISTOGRAMEXTPROC glext_glHistogramEXT = NULL;
PFNGLIGLOOINTERFACESGIXPROC glext_glIglooInterfaceSGIX = NULL;
PFNGLIMAGETRANSFORMPARAMETERFHPPROC glext_glImageTransformParameterfHP = NULL;
PFNGLIMAGETRANSFORMPARAMETERFVHPPROC glext_glImageTransformParameterfvHP
  = NULL;
PFNGLIMAGETRANSFORMPARAMETERIHPPROC glext_glImageTransformParameteriHP = NULL;
PFNGLIMAGETRANSFORMPARAMETERIVHPPROC glext_glImageTransformParameterivHP
  = NULL;
PFNGLIMPORTMEMORYFDEXTPROC glext_glImportMemoryFdEXT = NULL;
PFNGLIMPORTMEMORYWIN32HANDLEEXTPROC glext_glImportMemoryWin32HandleEXT = NULL;
PFNGLIMPORTMEMORYWIN32NAMEEXTPROC glext_glImportMemoryWin32NameEXT = NULL;
PFNGLIMPORTSEMAPHOREFDEXTPROC glext_glImportSemaphoreFdEXT = NULL;
PFNGLIMPORTSEMAPHOREWIN32HANDLEEXTPROC glext_glImportSemaphoreWin32HandleEXT
  = NULL;
PFNGLIMPORTSEMAPHOREWIN32NAMEEXTPROC glext_glImportSemaphoreWin32NameEXT
  = NULL;
PFNGLIMPORTSYNCEXTPROC glext_glImportSyncEXT = NULL;
PFNGLINDEXFORMATNVPROC glext_glIndexFormatNV = NULL;
PFNGLINDEXFUNCEXTPROC glext_glIndexFuncEXT = NULL;
PFNGLINDEXMATERIALEXTPROC glext_glIndexMaterialEXT = NULL;
PFNGLINDEXPOINTEREXTPROC glext_glIndexPointerEXT = NULL;
PFNGLINDEXPOINTERLISTIBMPROC glext_glIndexPointerListIBM = NULL;
PFNGLINDEXXOESPROC glext_glIndexxOES = NULL;
PFNGLINDEXXVOESPROC glext_glIndexxvOES = NULL;
PFNGLINSERTCOMPONENTEXTPROC glext_glInsertComponentEXT = NULL;
PFNGLINSERTEVENTMARKEREXTPROC glext_glInsertEventMarkerEXT = NULL;
PFNGLINSTRUMENTSBUFFERSGIXPROC glext_glInstrumentsBufferSGIX = NULL;
PFNGLINTERPOLATEPATHSNVPROC glext_glInterpolatePathsNV = NULL;
PFNGLINVALIDATEBUFFERDATAPROC glext_glInvalidateBufferData = NULL;
PFNGLINVALIDATEBUFFERSUBDATAPROC glext_glInvalidateBufferSubData = NULL;
PFNGLINVALIDATEFRAMEBUFFERPROC glext_glInvalidateFramebuffer = NULL;
PFNGLINVALIDATENAMEDFRAMEBUFFERDATAPROC glext_glInvalidateNamedFramebufferData
  = NULL;
PFNGLINVALIDATENAMEDFRAMEBUFFERSUBDATAPROC
glext_glInvalidateNamedFramebufferSubData = NULL;
PFNGLINVALIDATESUBFRAMEBUFFERPROC glext_glInvalidateSubFramebuffer = NULL;
PFNGLINVALIDATETEXIMAGEPROC glext_glInvalidateTexImage = NULL;
PFNGLINVALIDATETEXSUBIMAGEPROC glext_glInvalidateTexSubImage = NULL;
PFNGLISASYNCMARKERSGIXPROC glext_glIsAsyncMarkerSGIX = NULL;
PFNGLISBUFFERPROC glext_glIsBuffer = NULL;
PFNGLISBUFFERARBPROC glext_glIsBufferARB = NULL;
PFNGLISBUFFERRESIDENTNVPROC glext_glIsBufferResidentNV = NULL;
PFNGLISCOMMANDLISTNVPROC glext_glIsCommandListNV = NULL;
PFNGLISENABLEDPROC glext_glIsEnabled = NULL;
PFNGLISENABLEDINDEXEDEXTPROC glext_glIsEnabledIndexedEXT = NULL;
PFNGLISENABLEDIPROC glext_glIsEnabledi = NULL;
PFNGLISFENCEAPPLEPROC glext_glIsFenceAPPLE = NULL;
PFNGLISFENCENVPROC glext_glIsFenceNV = NULL;
PFNGLISFRAMEBUFFERPROC glext_glIsFramebuffer = NULL;
PFNGLISFRAMEBUFFEREXTPROC glext_glIsFramebufferEXT = NULL;
PFNGLISIMAGEHANDLERESIDENTARBPROC glext_glIsImageHandleResidentARB = NULL;
PFNGLISIMAGEHANDLERESIDENTNVPROC glext_glIsImageHandleResidentNV = NULL;
PFNGLISMEMORYOBJECTEXTPROC glext_glIsMemoryObjectEXT = NULL;
PFNGLISNAMEAMDPROC glext_glIsNameAMD = NULL;
PFNGLISNAMEDBUFFERRESIDENTNVPROC glext_glIsNamedBufferResidentNV = NULL;
PFNGLISNAMEDSTRINGARBPROC glext_glIsNamedStringARB = NULL;
PFNGLISOBJECTBUFFERATIPROC glext_glIsObjectBufferATI = NULL;
PFNGLISOCCLUSIONQUERYNVPROC glext_glIsOcclusionQueryNV = NULL;
PFNGLISPATHNVPROC glext_glIsPathNV = NULL;
PFNGLISPOINTINFILLPATHNVPROC glext_glIsPointInFillPathNV = NULL;
PFNGLISPOINTINSTROKEPATHNVPROC glext_glIsPointInStrokePathNV = NULL;
PFNGLISPROGRAMPROC glext_glIsProgram = NULL;
PFNGLISPROGRAMARBPROC glext_glIsProgramARB = NULL;
PFNGLISPROGRAMNVPROC glext_glIsProgramNV = NULL;
PFNGLISPROGRAMPIPELINEPROC glext_glIsProgramPipeline = NULL;
PFNGLISQUERYPROC glext_glIsQuery = NULL;
PFNGLISQUERYARBPROC glext_glIsQueryARB = NULL;
PFNGLISRENDERBUFFERPROC glext_glIsRenderbuffer = NULL;
PFNGLISRENDERBUFFEREXTPROC glext_glIsRenderbufferEXT = NULL;
PFNGLISSAMPLERPROC glext_glIsSampler = NULL;
PFNGLISSEMAPHOREEXTPROC glext_glIsSemaphoreEXT = NULL;
PFNGLISSHADERPROC glext_glIsShader = NULL;
PFNGLISSTATENVPROC glext_glIsStateNV = NULL;
PFNGLISSYNCPROC glext_glIsSync = NULL;
PFNGLISTEXTUREPROC glext_glIsTexture = NULL;
PFNGLISTEXTUREEXTPROC glext_glIsTextureEXT = NULL;
PFNGLISTEXTUREHANDLERESIDENTARBPROC glext_glIsTextureHandleResidentARB = NULL;
PFNGLISTEXTUREHANDLERESIDENTNVPROC glext_glIsTextureHandleResidentNV = NULL;
PFNGLISTRANSFORMFEEDBACKPROC glext_glIsTransformFeedback = NULL;
PFNGLISTRANSFORMFEEDBACKNVPROC glext_glIsTransformFeedbackNV = NULL;
PFNGLISVARIANTENABLEDEXTPROC glext_glIsVariantEnabledEXT = NULL;
PFNGLISVERTEXARRAYPROC glext_glIsVertexArray = NULL;
PFNGLISVERTEXARRAYAPPLEPROC glext_glIsVertexArrayAPPLE = NULL;
PFNGLISVERTEXATTRIBENABLEDAPPLEPROC glext_glIsVertexAttribEnabledAPPLE = NULL;
PFNGLLGPUCOPYIMAGESUBDATANVXPROC glext_glLGPUCopyImageSubDataNVX = NULL;
PFNGLLGPUINTERLOCKNVXPROC glext_glLGPUInterlockNVX = NULL;
PFNGLLGPUNAMEDBUFFERSUBDATANVXPROC glext_glLGPUNamedBufferSubDataNVX = NULL;
PFNGLLABELOBJECTEXTPROC glext_glLabelObjectEXT = NULL;
PFNGLLIGHTENVISGIXPROC glext_glLightEnviSGIX = NULL;
PFNGLLIGHTMODELXOESPROC glext_glLightModelxOES = NULL;
PFNGLLIGHTMODELXVOESPROC glext_glLightModelxvOES = NULL;
PFNGLLIGHTXOESPROC glext_glLightxOES = NULL;
PFNGLLIGHTXVOESPROC glext_glLightxvOES = NULL;
PFNGLLINEWIDTHPROC glext_glLineWidth = NULL;
PFNGLLINEWIDTHXOESPROC glext_glLineWidthxOES = NULL;
PFNGLLINKPROGRAMPROC glext_glLinkProgram = NULL;
PFNGLLINKPROGRAMARBPROC glext_glLinkProgramARB = NULL;
PFNGLLISTDRAWCOMMANDSSTATESCLIENTNVPROC glext_glListDrawCommandsStatesClientNV
  = NULL;
PFNGLLISTPARAMETERFSGIXPROC glext_glListParameterfSGIX = NULL;
PFNGLLISTPARAMETERFVSGIXPROC glext_glListParameterfvSGIX = NULL;
PFNGLLISTPARAMETERISGIXPROC glext_glListParameteriSGIX = NULL;
PFNGLLISTPARAMETERIVSGIXPROC glext_glListParameterivSGIX = NULL;
PFNGLLOADIDENTITYDEFORMATIONMAPSGIXPROC glext_glLoadIdentityDeformationMapSGIX
  = NULL;
PFNGLLOADMATRIXXOESPROC glext_glLoadMatrixxOES = NULL;
PFNGLLOADPROGRAMNVPROC glext_glLoadProgramNV = NULL;
PFNGLLOADTRANSPOSEMATRIXDARBPROC glext_glLoadTransposeMatrixdARB = NULL;
PFNGLLOADTRANSPOSEMATRIXFARBPROC glext_glLoadTransposeMatrixfARB = NULL;
PFNGLLOADTRANSPOSEMATRIXXOESPROC glext_glLoadTransposeMatrixxOES = NULL;
PFNGLLOCKARRAYSEXTPROC glext_glLockArraysEXT = NULL;
PFNGLLOGICOPPROC glext_glLogicOp = NULL;
PFNGLMAKEBUFFERNONRESIDENTNVPROC glext_glMakeBufferNonResidentNV = NULL;
PFNGLMAKEBUFFERRESIDENTNVPROC glext_glMakeBufferResidentNV = NULL;
PFNGLMAKEIMAGEHANDLENONRESIDENTARBPROC glext_glMakeImageHandleNonResidentARB
  = NULL;
PFNGLMAKEIMAGEHANDLENONRESIDENTNVPROC glext_glMakeImageHandleNonResidentNV
  = NULL;
PFNGLMAKEIMAGEHANDLERESIDENTARBPROC glext_glMakeImageHandleResidentARB = NULL;
PFNGLMAKEIMAGEHANDLERESIDENTNVPROC glext_glMakeImageHandleResidentNV = NULL;
PFNGLMAKENAMEDBUFFERNONRESIDENTNVPROC glext_glMakeNamedBufferNonResidentNV
  = NULL;
PFNGLMAKENAMEDBUFFERRESIDENTNVPROC glext_glMakeNamedBufferResidentNV = NULL;
PFNGLMAKETEXTUREHANDLENONRESIDENTARBPROC
glext_glMakeTextureHandleNonResidentARB = NULL;
PFNGLMAKETEXTUREHANDLENONRESIDENTNVPROC glext_glMakeTextureHandleNonResidentNV
  = NULL;
PFNGLMAKETEXTUREHANDLERESIDENTARBPROC glext_glMakeTextureHandleResidentARB
  = NULL;
PFNGLMAKETEXTUREHANDLERESIDENTNVPROC glext_glMakeTextureHandleResidentNV
  = NULL;
PFNGLMAP1XOESPROC glext_glMap1xOES = NULL;
PFNGLMAP2XOESPROC glext_glMap2xOES = NULL;
PFNGLMAPBUFFERPROC glext_glMapBuffer = NULL;
PFNGLMAPBUFFERARBPROC glext_glMapBufferARB = NULL;
PFNGLMAPBUFFERRANGEPROC glext_glMapBufferRange = NULL;
PFNGLMAPCONTROLPOINTSNVPROC glext_glMapControlPointsNV = NULL;
PFNGLMAPGRID1XOESPROC glext_glMapGrid1xOES = NULL;
PFNGLMAPGRID2XOESPROC glext_glMapGrid2xOES = NULL;
PFNGLMAPNAMEDBUFFERPROC glext_glMapNamedBuffer = NULL;
PFNGLMAPNAMEDBUFFEREXTPROC glext_glMapNamedBufferEXT = NULL;
PFNGLMAPNAMEDBUFFERRANGEPROC glext_glMapNamedBufferRange = NULL;
PFNGLMAPNAMEDBUFFERRANGEEXTPROC glext_glMapNamedBufferRangeEXT = NULL;
PFNGLMAPOBJECTBUFFERATIPROC glext_glMapObjectBufferATI = NULL;
PFNGLMAPPARAMETERFVNVPROC glext_glMapParameterfvNV = NULL;
PFNGLMAPPARAMETERIVNVPROC glext_glMapParameterivNV = NULL;
PFNGLMAPTEXTURE2DINTELPROC glext_glMapTexture2DINTEL = NULL;
PFNGLMAPVERTEXATTRIB1DAPPLEPROC glext_glMapVertexAttrib1dAPPLE = NULL;
PFNGLMAPVERTEXATTRIB1FAPPLEPROC glext_glMapVertexAttrib1fAPPLE = NULL;
PFNGLMAPVERTEXATTRIB2DAPPLEPROC glext_glMapVertexAttrib2dAPPLE = NULL;
PFNGLMAPVERTEXATTRIB2FAPPLEPROC glext_glMapVertexAttrib2fAPPLE = NULL;
PFNGLMATERIALXOESPROC glext_glMaterialxOES = NULL;
PFNGLMATERIALXVOESPROC glext_glMaterialxvOES = NULL;
PFNGLMATRIXFRUSTUMEXTPROC glext_glMatrixFrustumEXT = NULL;
PFNGLMATRIXINDEXPOINTERARBPROC glext_glMatrixIndexPointerARB = NULL;
PFNGLMATRIXINDEXUBVARBPROC glext_glMatrixIndexubvARB = NULL;
PFNGLMATRIXINDEXUIVARBPROC glext_glMatrixIndexuivARB = NULL;
PFNGLMATRIXINDEXUSVARBPROC glext_glMatrixIndexusvARB = NULL;
PFNGLMATRIXLOAD3X2FNVPROC glext_glMatrixLoad3x2fNV = NULL;
PFNGLMATRIXLOAD3X3FNVPROC glext_glMatrixLoad3x3fNV = NULL;
PFNGLMATRIXLOADIDENTITYEXTPROC glext_glMatrixLoadIdentityEXT = NULL;
PFNGLMATRIXLOADTRANSPOSE3X3FNVPROC glext_glMatrixLoadTranspose3x3fNV = NULL;
PFNGLMATRIXLOADTRANSPOSEDEXTPROC glext_glMatrixLoadTransposedEXT = NULL;
PFNGLMATRIXLOADTRANSPOSEFEXTPROC glext_glMatrixLoadTransposefEXT = NULL;
PFNGLMATRIXLOADDEXTPROC glext_glMatrixLoaddEXT = NULL;
PFNGLMATRIXLOADFEXTPROC glext_glMatrixLoadfEXT = NULL;
PFNGLMATRIXMULT3X2FNVPROC glext_glMatrixMult3x2fNV = NULL;
PFNGLMATRIXMULT3X3FNVPROC glext_glMatrixMult3x3fNV = NULL;
PFNGLMATRIXMULTTRANSPOSE3X3FNVPROC glext_glMatrixMultTranspose3x3fNV = NULL;
PFNGLMATRIXMULTTRANSPOSEDEXTPROC glext_glMatrixMultTransposedEXT = NULL;
PFNGLMATRIXMULTTRANSPOSEFEXTPROC glext_glMatrixMultTransposefEXT = NULL;
PFNGLMATRIXMULTDEXTPROC glext_glMatrixMultdEXT = NULL;
PFNGLMATRIXMULTFEXTPROC glext_glMatrixMultfEXT = NULL;
PFNGLMATRIXORTHOEXTPROC glext_glMatrixOrthoEXT = NULL;
PFNGLMATRIXPOPEXTPROC glext_glMatrixPopEXT = NULL;
PFNGLMATRIXPUSHEXTPROC glext_glMatrixPushEXT = NULL;
PFNGLMATRIXROTATEDEXTPROC glext_glMatrixRotatedEXT = NULL;
PFNGLMATRIXROTATEFEXTPROC glext_glMatrixRotatefEXT = NULL;
PFNGLMATRIXSCALEDEXTPROC glext_glMatrixScaledEXT = NULL;
PFNGLMATRIXSCALEFEXTPROC glext_glMatrixScalefEXT = NULL;
PFNGLMATRIXTRANSLATEDEXTPROC glext_glMatrixTranslatedEXT = NULL;
PFNGLMATRIXTRANSLATEFEXTPROC glext_glMatrixTranslatefEXT = NULL;
PFNGLMAXSHADERCOMPILERTHREADSARBPROC glext_glMaxShaderCompilerThreadsARB
  = NULL;
PFNGLMAXSHADERCOMPILERTHREADSKHRPROC glext_glMaxShaderCompilerThreadsKHR
  = NULL;
PFNGLMEMORYBARRIERPROC glext_glMemoryBarrier = NULL;
PFNGLMEMORYBARRIERBYREGIONPROC glext_glMemoryBarrierByRegion = NULL;
PFNGLMEMORYBARRIEREXTPROC glext_glMemoryBarrierEXT = NULL;
PFNGLMEMORYOBJECTPARAMETERIVEXTPROC glext_glMemoryObjectParameterivEXT = NULL;
PFNGLMINSAMPLESHADINGPROC glext_glMinSampleShading = NULL;
PFNGLMINSAMPLESHADINGARBPROC glext_glMinSampleShadingARB = NULL;
PFNGLMINMAXEXTPROC glext_glMinmaxEXT = NULL;
PFNGLMULTMATRIXXOESPROC glext_glMultMatrixxOES = NULL;
PFNGLMULTTRANSPOSEMATRIXDARBPROC glext_glMultTransposeMatrixdARB = NULL;
PFNGLMULTTRANSPOSEMATRIXFARBPROC glext_glMultTransposeMatrixfARB = NULL;
PFNGLMULTTRANSPOSEMATRIXXOESPROC glext_glMultTransposeMatrixxOES = NULL;
PFNGLMULTIDRAWARRAYSPROC glext_glMultiDrawArrays = NULL;
PFNGLMULTIDRAWARRAYSEXTPROC glext_glMultiDrawArraysEXT = NULL;
PFNGLMULTIDRAWARRAYSINDIRECTPROC glext_glMultiDrawArraysIndirect = NULL;
PFNGLMULTIDRAWARRAYSINDIRECTAMDPROC glext_glMultiDrawArraysIndirectAMD = NULL;
PFNGLMULTIDRAWARRAYSINDIRECTBINDLESSCOUNTNVPROC
glext_glMultiDrawArraysIndirectBindlessCountNV = NULL;
PFNGLMULTIDRAWARRAYSINDIRECTBINDLESSNVPROC
glext_glMultiDrawArraysIndirectBindlessNV = NULL;
PFNGLMULTIDRAWARRAYSINDIRECTCOUNTPROC glext_glMultiDrawArraysIndirectCount
  = NULL;
PFNGLMULTIDRAWARRAYSINDIRECTCOUNTARBPROC
glext_glMultiDrawArraysIndirectCountARB = NULL;
PFNGLMULTIDRAWELEMENTARRAYAPPLEPROC glext_glMultiDrawElementArrayAPPLE = NULL;
PFNGLMULTIDRAWELEMENTSPROC glext_glMultiDrawElements = NULL;
PFNGLMULTIDRAWELEMENTSBASEVERTEXPROC glext_glMultiDrawElementsBaseVertex
  = NULL;
PFNGLMULTIDRAWELEMENTSEXTPROC glext_glMultiDrawElementsEXT = NULL;
PFNGLMULTIDRAWELEMENTSINDIRECTPROC glext_glMultiDrawElementsIndirect = NULL;
PFNGLMULTIDRAWELEMENTSINDIRECTAMDPROC glext_glMultiDrawElementsIndirectAMD
  = NULL;
PFNGLMULTIDRAWELEMENTSINDIRECTBINDLESSCOUNTNVPROC
glext_glMultiDrawElementsIndirectBindlessCountNV = NULL;
PFNGLMULTIDRAWELEMENTSINDIRECTBINDLESSNVPROC
glext_glMultiDrawElementsIndirectBindlessNV = NULL;
PFNGLMULTIDRAWELEMENTSINDIRECTCOUNTPROC glext_glMultiDrawElementsIndirectCount
  = NULL;
PFNGLMULTIDRAWELEMENTSINDIRECTCOUNTARBPROC
glext_glMultiDrawElementsIndirectCountARB = NULL;
PFNGLMULTIDRAWMESHTASKSINDIRECTCOUNTEXTPROC
glext_glMultiDrawMeshTasksIndirectCountEXT = NULL;
PFNGLMULTIDRAWMESHTASKSINDIRECTCOUNTNVPROC
glext_glMultiDrawMeshTasksIndirectCountNV = NULL;
PFNGLMULTIDRAWMESHTASKSINDIRECTEXTPROC glext_glMultiDrawMeshTasksIndirectEXT
  = NULL;
PFNGLMULTIDRAWMESHTASKSINDIRECTNVPROC glext_glMultiDrawMeshTasksIndirectNV
  = NULL;
PFNGLMULTIDRAWRANGEELEMENTARRAYAPPLEPROC
glext_glMultiDrawRangeElementArrayAPPLE = NULL;
PFNGLMULTIMODEDRAWARRAYSIBMPROC glext_glMultiModeDrawArraysIBM = NULL;
PFNGLMULTIMODEDRAWELEMENTSIBMPROC glext_glMultiModeDrawElementsIBM = NULL;
PFNGLMULTITEXBUFFEREXTPROC glext_glMultiTexBufferEXT = NULL;
PFNGLMULTITEXCOORD1BOESPROC glext_glMultiTexCoord1bOES = NULL;
PFNGLMULTITEXCOORD1BVOESPROC glext_glMultiTexCoord1bvOES = NULL;
PFNGLMULTITEXCOORD1DARBPROC glext_glMultiTexCoord1dARB = NULL;
PFNGLMULTITEXCOORD1DVARBPROC glext_glMultiTexCoord1dvARB = NULL;
PFNGLMULTITEXCOORD1FARBPROC glext_glMultiTexCoord1fARB = NULL;
PFNGLMULTITEXCOORD1FVARBPROC glext_glMultiTexCoord1fvARB = NULL;
PFNGLMULTITEXCOORD1HNVPROC glext_glMultiTexCoord1hNV = NULL;
PFNGLMULTITEXCOORD1HVNVPROC glext_glMultiTexCoord1hvNV = NULL;
PFNGLMULTITEXCOORD1IARBPROC glext_glMultiTexCoord1iARB = NULL;
PFNGLMULTITEXCOORD1IVARBPROC glext_glMultiTexCoord1ivARB = NULL;
PFNGLMULTITEXCOORD1SARBPROC glext_glMultiTexCoord1sARB = NULL;
PFNGLMULTITEXCOORD1SVARBPROC glext_glMultiTexCoord1svARB = NULL;
PFNGLMULTITEXCOORD1XOESPROC glext_glMultiTexCoord1xOES = NULL;
PFNGLMULTITEXCOORD1XVOESPROC glext_glMultiTexCoord1xvOES = NULL;
PFNGLMULTITEXCOORD2BOESPROC glext_glMultiTexCoord2bOES = NULL;
PFNGLMULTITEXCOORD2BVOESPROC glext_glMultiTexCoord2bvOES = NULL;
PFNGLMULTITEXCOORD2DARBPROC glext_glMultiTexCoord2dARB = NULL;
PFNGLMULTITEXCOORD2DVARBPROC glext_glMultiTexCoord2dvARB = NULL;
PFNGLMULTITEXCOORD2FARBPROC glext_glMultiTexCoord2fARB = NULL;
PFNGLMULTITEXCOORD2FVARBPROC glext_glMultiTexCoord2fvARB = NULL;
PFNGLMULTITEXCOORD2HNVPROC glext_glMultiTexCoord2hNV = NULL;
PFNGLMULTITEXCOORD2HVNVPROC glext_glMultiTexCoord2hvNV = NULL;
PFNGLMULTITEXCOORD2IARBPROC glext_glMultiTexCoord2iARB = NULL;
PFNGLMULTITEXCOORD2IVARBPROC glext_glMultiTexCoord2ivARB = NULL;
PFNGLMULTITEXCOORD2SARBPROC glext_glMultiTexCoord2sARB = NULL;
PFNGLMULTITEXCOORD2SVARBPROC glext_glMultiTexCoord2svARB = NULL;
PFNGLMULTITEXCOORD2XOESPROC glext_glMultiTexCoord2xOES = NULL;
PFNGLMULTITEXCOORD2XVOESPROC glext_glMultiTexCoord2xvOES = NULL;
PFNGLMULTITEXCOORD3BOESPROC glext_glMultiTexCoord3bOES = NULL;
PFNGLMULTITEXCOORD3BVOESPROC glext_glMultiTexCoord3bvOES = NULL;
PFNGLMULTITEXCOORD3DARBPROC glext_glMultiTexCoord3dARB = NULL;
PFNGLMULTITEXCOORD3DVARBPROC glext_glMultiTexCoord3dvARB = NULL;
PFNGLMULTITEXCOORD3FARBPROC glext_glMultiTexCoord3fARB = NULL;
PFNGLMULTITEXCOORD3FVARBPROC glext_glMultiTexCoord3fvARB = NULL;
PFNGLMULTITEXCOORD3HNVPROC glext_glMultiTexCoord3hNV = NULL;
PFNGLMULTITEXCOORD3HVNVPROC glext_glMultiTexCoord3hvNV = NULL;
PFNGLMULTITEXCOORD3IARBPROC glext_glMultiTexCoord3iARB = NULL;
PFNGLMULTITEXCOORD3IVARBPROC glext_glMultiTexCoord3ivARB = NULL;
PFNGLMULTITEXCOORD3SARBPROC glext_glMultiTexCoord3sARB = NULL;
PFNGLMULTITEXCOORD3SVARBPROC glext_glMultiTexCoord3svARB = NULL;
PFNGLMULTITEXCOORD3XOESPROC glext_glMultiTexCoord3xOES = NULL;
PFNGLMULTITEXCOORD3XVOESPROC glext_glMultiTexCoord3xvOES = NULL;
PFNGLMULTITEXCOORD4BOESPROC glext_glMultiTexCoord4bOES = NULL;
PFNGLMULTITEXCOORD4BVOESPROC glext_glMultiTexCoord4bvOES = NULL;
PFNGLMULTITEXCOORD4DARBPROC glext_glMultiTexCoord4dARB = NULL;
PFNGLMULTITEXCOORD4DVARBPROC glext_glMultiTexCoord4dvARB = NULL;
PFNGLMULTITEXCOORD4FARBPROC glext_glMultiTexCoord4fARB = NULL;
PFNGLMULTITEXCOORD4FVARBPROC glext_glMultiTexCoord4fvARB = NULL;
PFNGLMULTITEXCOORD4HNVPROC glext_glMultiTexCoord4hNV = NULL;
PFNGLMULTITEXCOORD4HVNVPROC glext_glMultiTexCoord4hvNV = NULL;
PFNGLMULTITEXCOORD4IARBPROC glext_glMultiTexCoord4iARB = NULL;
PFNGLMULTITEXCOORD4IVARBPROC glext_glMultiTexCoord4ivARB = NULL;
PFNGLMULTITEXCOORD4SARBPROC glext_glMultiTexCoord4sARB = NULL;
PFNGLMULTITEXCOORD4SVARBPROC glext_glMultiTexCoord4svARB = NULL;
PFNGLMULTITEXCOORD4XOESPROC glext_glMultiTexCoord4xOES = NULL;
PFNGLMULTITEXCOORD4XVOESPROC glext_glMultiTexCoord4xvOES = NULL;
PFNGLMULTITEXCOORDPOINTEREXTPROC glext_glMultiTexCoordPointerEXT = NULL;
PFNGLMULTITEXENVFEXTPROC glext_glMultiTexEnvfEXT = NULL;
PFNGLMULTITEXENVFVEXTPROC glext_glMultiTexEnvfvEXT = NULL;
PFNGLMULTITEXENVIEXTPROC glext_glMultiTexEnviEXT = NULL;
PFNGLMULTITEXENVIVEXTPROC glext_glMultiTexEnvivEXT = NULL;
PFNGLMULTITEXGENDEXTPROC glext_glMultiTexGendEXT = NULL;
PFNGLMULTITEXGENDVEXTPROC glext_glMultiTexGendvEXT = NULL;
PFNGLMULTITEXGENFEXTPROC glext_glMultiTexGenfEXT = NULL;
PFNGLMULTITEXGENFVEXTPROC glext_glMultiTexGenfvEXT = NULL;
PFNGLMULTITEXGENIEXTPROC glext_glMultiTexGeniEXT = NULL;
PFNGLMULTITEXGENIVEXTPROC glext_glMultiTexGenivEXT = NULL;
PFNGLMULTITEXIMAGE1DEXTPROC glext_glMultiTexImage1DEXT = NULL;
PFNGLMULTITEXIMAGE2DEXTPROC glext_glMultiTexImage2DEXT = NULL;
PFNGLMULTITEXIMAGE3DEXTPROC glext_glMultiTexImage3DEXT = NULL;
PFNGLMULTITEXPARAMETERIIVEXTPROC glext_glMultiTexParameterIivEXT = NULL;
PFNGLMULTITEXPARAMETERIUIVEXTPROC glext_glMultiTexParameterIuivEXT = NULL;
PFNGLMULTITEXPARAMETERFEXTPROC glext_glMultiTexParameterfEXT = NULL;
PFNGLMULTITEXPARAMETERFVEXTPROC glext_glMultiTexParameterfvEXT = NULL;
PFNGLMULTITEXPARAMETERIEXTPROC glext_glMultiTexParameteriEXT = NULL;
PFNGLMULTITEXPARAMETERIVEXTPROC glext_glMultiTexParameterivEXT = NULL;
PFNGLMULTITEXRENDERBUFFEREXTPROC glext_glMultiTexRenderbufferEXT = NULL;
PFNGLMULTITEXSUBIMAGE1DEXTPROC glext_glMultiTexSubImage1DEXT = NULL;
PFNGLMULTITEXSUBIMAGE2DEXTPROC glext_glMultiTexSubImage2DEXT = NULL;
PFNGLMULTITEXSUBIMAGE3DEXTPROC glext_glMultiTexSubImage3DEXT = NULL;
PFNGLMULTICASTBARRIERNVPROC glext_glMulticastBarrierNV = NULL;
PFNGLMULTICASTBLITFRAMEBUFFERNVPROC glext_glMulticastBlitFramebufferNV = NULL;
PFNGLMULTICASTBUFFERSUBDATANVPROC glext_glMulticastBufferSubDataNV = NULL;
PFNGLMULTICASTCOPYBUFFERSUBDATANVPROC glext_glMulticastCopyBufferSubDataNV
  = NULL;
PFNGLMULTICASTCOPYIMAGESUBDATANVPROC glext_glMulticastCopyImageSubDataNV
  = NULL;
PFNGLMULTICASTFRAMEBUFFERSAMPLELOCATIONSFVNVPROC
glext_glMulticastFramebufferSampleLocationsfvNV = NULL;
PFNGLMULTICASTGETQUERYOBJECTI64VNVPROC glext_glMulticastGetQueryObjecti64vNV
  = NULL;
PFNGLMULTICASTGETQUERYOBJECTIVNVPROC glext_glMulticastGetQueryObjectivNV
  = NULL;
PFNGLMULTICASTGETQUERYOBJECTUI64VNVPROC glext_glMulticastGetQueryObjectui64vNV
  = NULL;
PFNGLMULTICASTGETQUERYOBJECTUIVNVPROC glext_glMulticastGetQueryObjectuivNV
  = NULL;
PFNGLMULTICASTSCISSORARRAYVNVXPROC glext_glMulticastScissorArrayvNVX = NULL;
PFNGLMULTICASTVIEWPORTARRAYVNVXPROC glext_glMulticastViewportArrayvNVX = NULL;
PFNGLMULTICASTVIEWPORTPOSITIONWSCALENVXPROC
glext_glMulticastViewportPositionWScaleNVX = NULL;
PFNGLMULTICASTWAITSYNCNVPROC glext_glMulticastWaitSyncNV = NULL;
PFNGLNAMEDBUFFERATTACHMEMORYNVPROC glext_glNamedBufferAttachMemoryNV = NULL;
PFNGLNAMEDBUFFERDATAPROC glext_glNamedBufferData = NULL;
PFNGLNAMEDBUFFERDATAEXTPROC glext_glNamedBufferDataEXT = NULL;
PFNGLNAMEDBUFFERPAGECOMMITMENTARBPROC glext_glNamedBufferPageCommitmentARB
  = NULL;
PFNGLNAMEDBUFFERPAGECOMMITMENTEXTPROC glext_glNamedBufferPageCommitmentEXT
  = NULL;
PFNGLNAMEDBUFFERPAGECOMMITMENTMEMNVPROC glext_glNamedBufferPageCommitmentMemNV
  = NULL;
PFNGLNAMEDBUFFERSTORAGEPROC glext_glNamedBufferStorage = NULL;
PFNGLNAMEDBUFFERSTORAGEEXTPROC glext_glNamedBufferStorageEXT = NULL;
PFNGLNAMEDBUFFERSTORAGEEXTERNALEXTPROC glext_glNamedBufferStorageExternalEXT
  = NULL;
PFNGLNAMEDBUFFERSTORAGEMEMEXTPROC glext_glNamedBufferStorageMemEXT = NULL;
PFNGLNAMEDBUFFERSUBDATAPROC glext_glNamedBufferSubData = NULL;
PFNGLNAMEDBUFFERSUBDATAEXTPROC glext_glNamedBufferSubDataEXT = NULL;
PFNGLNAMEDCOPYBUFFERSUBDATAEXTPROC glext_glNamedCopyBufferSubDataEXT = NULL;
PFNGLNAMEDFRAMEBUFFERDRAWBUFFERPROC glext_glNamedFramebufferDrawBuffer = NULL;
PFNGLNAMEDFRAMEBUFFERDRAWBUFFERSPROC glext_glNamedFramebufferDrawBuffers
  = NULL;
PFNGLNAMEDFRAMEBUFFERPARAMETERIPROC glext_glNamedFramebufferParameteri = NULL;
PFNGLNAMEDFRAMEBUFFERPARAMETERIEXTPROC glext_glNamedFramebufferParameteriEXT
  = NULL;
PFNGLNAMEDFRAMEBUFFERREADBUFFERPROC glext_glNamedFramebufferReadBuffer = NULL;
PFNGLNAMEDFRAMEBUFFERRENDERBUFFERPROC glext_glNamedFramebufferRenderbuffer
  = NULL;
PFNGLNAMEDFRAMEBUFFERRENDERBUFFEREXTPROC
glext_glNamedFramebufferRenderbufferEXT = NULL;
PFNGLNAMEDFRAMEBUFFERSAMPLELOCATIONSFVARBPROC
glext_glNamedFramebufferSampleLocationsfvARB = NULL;
PFNGLNAMEDFRAMEBUFFERSAMPLELOCATIONSFVNVPROC
glext_glNamedFramebufferSampleLocationsfvNV = NULL;
PFNGLNAMEDFRAMEBUFFERSAMPLEPOSITIONSFVAMDPROC
glext_glNamedFramebufferSamplePositionsfvAMD = NULL;
PFNGLNAMEDFRAMEBUFFERTEXTUREPROC glext_glNamedFramebufferTexture = NULL;
PFNGLNAMEDFRAMEBUFFERTEXTURE1DEXTPROC glext_glNamedFramebufferTexture1DEXT
  = NULL;
PFNGLNAMEDFRAMEBUFFERTEXTURE2DEXTPROC glext_glNamedFramebufferTexture2DEXT
  = NULL;
PFNGLNAMEDFRAMEBUFFERTEXTURE3DEXTPROC glext_glNamedFramebufferTexture3DEXT
  = NULL;
PFNGLNAMEDFRAMEBUFFERTEXTUREEXTPROC glext_glNamedFramebufferTextureEXT = NULL;
PFNGLNAMEDFRAMEBUFFERTEXTUREFACEEXTPROC glext_glNamedFramebufferTextureFaceEXT
  = NULL;
PFNGLNAMEDFRAMEBUFFERTEXTURELAYERPROC glext_glNamedFramebufferTextureLayer
  = NULL;
PFNGLNAMEDFRAMEBUFFERTEXTURELAYEREXTPROC
glext_glNamedFramebufferTextureLayerEXT = NULL;
PFNGLNAMEDFRAMEBUFFERTEXTUREMULTIVIEWOVRPROC
glext_glNamedFramebufferTextureMultiviewOVR = NULL;
PFNGLNAMEDPROGRAMLOCALPARAMETER4DEXTPROC
glext_glNamedProgramLocalParameter4dEXT = NULL;
PFNGLNAMEDPROGRAMLOCALPARAMETER4DVEXTPROC
glext_glNamedProgramLocalParameter4dvEXT = NULL;
PFNGLNAMEDPROGRAMLOCALPARAMETER4FEXTPROC
glext_glNamedProgramLocalParameter4fEXT = NULL;
PFNGLNAMEDPROGRAMLOCALPARAMETER4FVEXTPROC
glext_glNamedProgramLocalParameter4fvEXT = NULL;
PFNGLNAMEDPROGRAMLOCALPARAMETERI4IEXTPROC
glext_glNamedProgramLocalParameterI4iEXT = NULL;
PFNGLNAMEDPROGRAMLOCALPARAMETERI4IVEXTPROC
glext_glNamedProgramLocalParameterI4ivEXT = NULL;
PFNGLNAMEDPROGRAMLOCALPARAMETERI4UIEXTPROC
glext_glNamedProgramLocalParameterI4uiEXT = NULL;
PFNGLNAMEDPROGRAMLOCALPARAMETERI4UIVEXTPROC
glext_glNamedProgramLocalParameterI4uivEXT = NULL;
PFNGLNAMEDPROGRAMLOCALPARAMETERS4FVEXTPROC
glext_glNamedProgramLocalParameters4fvEXT = NULL;
PFNGLNAMEDPROGRAMLOCALPARAMETERSI4IVEXTPROC
glext_glNamedProgramLocalParametersI4ivEXT = NULL;
PFNGLNAMEDPROGRAMLOCALPARAMETERSI4UIVEXTPROC
glext_glNamedProgramLocalParametersI4uivEXT = NULL;
PFNGLNAMEDPROGRAMSTRINGEXTPROC glext_glNamedProgramStringEXT = NULL;
PFNGLNAMEDRENDERBUFFERSTORAGEPROC glext_glNamedRenderbufferStorage = NULL;
PFNGLNAMEDRENDERBUFFERSTORAGEEXTPROC glext_glNamedRenderbufferStorageEXT
  = NULL;
PFNGLNAMEDRENDERBUFFERSTORAGEMULTISAMPLEPROC
glext_glNamedRenderbufferStorageMultisample = NULL;
PFNGLNAMEDRENDERBUFFERSTORAGEMULTISAMPLEADVANCEDAMDPROC
glext_glNamedRenderbufferStorageMultisampleAdvancedAMD = NULL;
PFNGLNAMEDRENDERBUFFERSTORAGEMULTISAMPLECOVERAGEEXTPROC
glext_glNamedRenderbufferStorageMultisampleCoverageEXT = NULL;
PFNGLNAMEDRENDERBUFFERSTORAGEMULTISAMPLEEXTPROC
glext_glNamedRenderbufferStorageMultisampleEXT = NULL;
PFNGLNAMEDSTRINGARBPROC glext_glNamedStringARB = NULL;
PFNGLNEWOBJECTBUFFERATIPROC glext_glNewObjectBufferATI = NULL;
PFNGLNORMAL3FVERTEX3FSUNPROC glext_glNormal3fVertex3fSUN = NULL;
PFNGLNORMAL3FVERTEX3FVSUNPROC glext_glNormal3fVertex3fvSUN = NULL;
PFNGLNORMAL3HNVPROC glext_glNormal3hNV = NULL;
PFNGLNORMAL3HVNVPROC glext_glNormal3hvNV = NULL;
PFNGLNORMAL3XOESPROC glext_glNormal3xOES = NULL;
PFNGLNORMAL3XVOESPROC glext_glNormal3xvOES = NULL;
PFNGLNORMALFORMATNVPROC glext_glNormalFormatNV = NULL;
PFNGLNORMALPOINTEREXTPROC glext_glNormalPointerEXT = NULL;
PFNGLNORMALPOINTERLISTIBMPROC glext_glNormalPointerListIBM = NULL;
PFNGLNORMALPOINTERVINTELPROC glext_glNormalPointervINTEL = NULL;
PFNGLNORMALSTREAM3BATIPROC glext_glNormalStream3bATI = NULL;
PFNGLNORMALSTREAM3BVATIPROC glext_glNormalStream3bvATI = NULL;
PFNGLNORMALSTREAM3DATIPROC glext_glNormalStream3dATI = NULL;
PFNGLNORMALSTREAM3DVATIPROC glext_glNormalStream3dvATI = NULL;
PFNGLNORMALSTREAM3FATIPROC glext_glNormalStream3fATI = NULL;
PFNGLNORMALSTREAM3FVATIPROC glext_glNormalStream3fvATI = NULL;
PFNGLNORMALSTREAM3IATIPROC glext_glNormalStream3iATI = NULL;
PFNGLNORMALSTREAM3IVATIPROC glext_glNormalStream3ivATI = NULL;
PFNGLNORMALSTREAM3SATIPROC glext_glNormalStream3sATI = NULL;
PFNGLNORMALSTREAM3SVATIPROC glext_glNormalStream3svATI = NULL;
PFNGLOBJECTLABELPROC glext_glObjectLabel = NULL;
PFNGLOBJECTPTRLABELPROC glext_glObjectPtrLabel = NULL;
PFNGLOBJECTPURGEABLEAPPLEPROC glext_glObjectPurgeableAPPLE = NULL;
PFNGLOBJECTUNPURGEABLEAPPLEPROC glext_glObjectUnpurgeableAPPLE = NULL;
PFNGLORTHOFOESPROC glext_glOrthofOES = NULL;
PFNGLORTHOXOESPROC glext_glOrthoxOES = NULL;
PFNGLPNTRIANGLESFATIPROC glext_glPNTrianglesfATI = NULL;
PFNGLPNTRIANGLESIATIPROC glext_glPNTrianglesiATI = NULL;
PFNGLPASSTEXCOORDATIPROC glext_glPassTexCoordATI = NULL;
PFNGLPASSTHROUGHXOESPROC glext_glPassThroughxOES = NULL;
PFNGLPATCHPARAMETERFVPROC glext_glPatchParameterfv = NULL;
PFNGLPATCHPARAMETERIPROC glext_glPatchParameteri = NULL;
PFNGLPATHCOMMANDSNVPROC glext_glPathCommandsNV = NULL;
PFNGLPATHCOORDSNVPROC glext_glPathCoordsNV = NULL;
PFNGLPATHCOVERDEPTHFUNCNVPROC glext_glPathCoverDepthFuncNV = NULL;
PFNGLPATHDASHARRAYNVPROC glext_glPathDashArrayNV = NULL;
PFNGLPATHGLYPHINDEXARRAYNVPROC glext_glPathGlyphIndexArrayNV = NULL;
PFNGLPATHGLYPHINDEXRANGENVPROC glext_glPathGlyphIndexRangeNV = NULL;
PFNGLPATHGLYPHRANGENVPROC glext_glPathGlyphRangeNV = NULL;
PFNGLPATHGLYPHSNVPROC glext_glPathGlyphsNV = NULL;
PFNGLPATHMEMORYGLYPHINDEXARRAYNVPROC glext_glPathMemoryGlyphIndexArrayNV
  = NULL;
PFNGLPATHPARAMETERFNVPROC glext_glPathParameterfNV = NULL;
PFNGLPATHPARAMETERFVNVPROC glext_glPathParameterfvNV = NULL;
PFNGLPATHPARAMETERINVPROC glext_glPathParameteriNV = NULL;
PFNGLPATHPARAMETERIVNVPROC glext_glPathParameterivNV = NULL;
PFNGLPATHSTENCILDEPTHOFFSETNVPROC glext_glPathStencilDepthOffsetNV = NULL;
PFNGLPATHSTENCILFUNCNVPROC glext_glPathStencilFuncNV = NULL;
PFNGLPATHSTRINGNVPROC glext_glPathStringNV = NULL;
PFNGLPATHSUBCOMMANDSNVPROC glext_glPathSubCommandsNV = NULL;
PFNGLPATHSUBCOORDSNVPROC glext_glPathSubCoordsNV = NULL;
PFNGLPAUSETRANSFORMFEEDBACKPROC glext_glPauseTransformFeedback = NULL;
PFNGLPAUSETRANSFORMFEEDBACKNVPROC glext_glPauseTransformFeedbackNV = NULL;
PFNGLPIXELDATARANGENVPROC glext_glPixelDataRangeNV = NULL;
PFNGLPIXELMAPXPROC glext_glPixelMapx = NULL;
PFNGLPIXELSTOREFPROC glext_glPixelStoref = NULL;
PFNGLPIXELSTOREIPROC glext_glPixelStorei = NULL;
PFNGLPIXELSTOREXPROC glext_glPixelStorex = NULL;
PFNGLPIXELTEXGENPARAMETERFSGISPROC glext_glPixelTexGenParameterfSGIS = NULL;
PFNGLPIXELTEXGENPARAMETERFVSGISPROC glext_glPixelTexGenParameterfvSGIS = NULL;
PFNGLPIXELTEXGENPARAMETERISGISPROC glext_glPixelTexGenParameteriSGIS = NULL;
PFNGLPIXELTEXGENPARAMETERIVSGISPROC glext_glPixelTexGenParameterivSGIS = NULL;
PFNGLPIXELTEXGENSGIXPROC glext_glPixelTexGenSGIX = NULL;
PFNGLPIXELTRANSFERXOESPROC glext_glPixelTransferxOES = NULL;
PFNGLPIXELTRANSFORMPARAMETERFEXTPROC glext_glPixelTransformParameterfEXT
  = NULL;
PFNGLPIXELTRANSFORMPARAMETERFVEXTPROC glext_glPixelTransformParameterfvEXT
  = NULL;
PFNGLPIXELTRANSFORMPARAMETERIEXTPROC glext_glPixelTransformParameteriEXT
  = NULL;
PFNGLPIXELTRANSFORMPARAMETERIVEXTPROC glext_glPixelTransformParameterivEXT
  = NULL;
PFNGLPIXELZOOMXOESPROC glext_glPixelZoomxOES = NULL;
PFNGLPOINTALONGPATHNVPROC glext_glPointAlongPathNV = NULL;
PFNGLPOINTPARAMETERFPROC glext_glPointParameterf = NULL;
PFNGLPOINTPARAMETERFARBPROC glext_glPointParameterfARB = NULL;
PFNGLPOINTPARAMETERFEXTPROC glext_glPointParameterfEXT = NULL;
PFNGLPOINTPARAMETERFSGISPROC glext_glPointParameterfSGIS = NULL;
PFNGLPOINTPARAMETERFVPROC glext_glPointParameterfv = NULL;
PFNGLPOINTPARAMETERFVARBPROC glext_glPointParameterfvARB = NULL;
PFNGLPOINTPARAMETERFVEXTPROC glext_glPointParameterfvEXT = NULL;
PFNGLPOINTPARAMETERFVSGISPROC glext_glPointParameterfvSGIS = NULL;
PFNGLPOINTPARAMETERIPROC glext_glPointParameteri = NULL;
PFNGLPOINTPARAMETERINVPROC glext_glPointParameteriNV = NULL;
PFNGLPOINTPARAMETERIVPROC glext_glPointParameteriv = NULL;
PFNGLPOINTPARAMETERIVNVPROC glext_glPointParameterivNV = NULL;
PFNGLPOINTPARAMETERXVOESPROC glext_glPointParameterxvOES = NULL;
PFNGLPOINTSIZEPROC glext_glPointSize = NULL;
PFNGLPOINTSIZEXOESPROC glext_glPointSizexOES = NULL;
PFNGLPOLLASYNCSGIXPROC glext_glPollAsyncSGIX = NULL;
PFNGLPOLLINSTRUMENTSSGIXPROC glext_glPollInstrumentsSGIX = NULL;
PFNGLPOLYGONMODEPROC glext_glPolygonMode = NULL;
PFNGLPOLYGONOFFSETPROC glext_glPolygonOffset = NULL;
PFNGLPOLYGONOFFSETCLAMPPROC glext_glPolygonOffsetClamp = NULL;
PFNGLPOLYGONOFFSETCLAMPEXTPROC glext_glPolygonOffsetClampEXT = NULL;
PFNGLPOLYGONOFFSETEXTPROC glext_glPolygonOffsetEXT = NULL;
PFNGLPOLYGONOFFSETXOESPROC glext_glPolygonOffsetxOES = NULL;
PFNGLPOPDEBUGGROUPPROC glext_glPopDebugGroup = NULL;
PFNGLPOPGROUPMARKEREXTPROC glext_glPopGroupMarkerEXT = NULL;
PFNGLPRESENTFRAMEDUALFILLNVPROC glext_glPresentFrameDualFillNV = NULL;
PFNGLPRESENTFRAMEKEYEDNVPROC glext_glPresentFrameKeyedNV = NULL;
PFNGLPRIMITIVEBOUNDINGBOXARBPROC glext_glPrimitiveBoundingBoxARB = NULL;
PFNGLPRIMITIVERESTARTINDEXPROC glext_glPrimitiveRestartIndex = NULL;
PFNGLPRIMITIVERESTARTINDEXNVPROC glext_glPrimitiveRestartIndexNV = NULL;
PFNGLPRIMITIVERESTARTNVPROC glext_glPrimitiveRestartNV = NULL;
PFNGLPRIORITIZETEXTURESEXTPROC glext_glPrioritizeTexturesEXT = NULL;
PFNGLPRIORITIZETEXTURESXOESPROC glext_glPrioritizeTexturesxOES = NULL;
PFNGLPROGRAMBINARYPROC glext_glProgramBinary = NULL;
PFNGLPROGRAMBUFFERPARAMETERSIIVNVPROC glext_glProgramBufferParametersIivNV
  = NULL;
PFNGLPROGRAMBUFFERPARAMETERSIUIVNVPROC glext_glProgramBufferParametersIuivNV
  = NULL;
PFNGLPROGRAMBUFFERPARAMETERSFVNVPROC glext_glProgramBufferParametersfvNV
  = NULL;
PFNGLPROGRAMENVPARAMETER4DARBPROC glext_glProgramEnvParameter4dARB = NULL;
PFNGLPROGRAMENVPARAMETER4DVARBPROC glext_glProgramEnvParameter4dvARB = NULL;
PFNGLPROGRAMENVPARAMETER4FARBPROC glext_glProgramEnvParameter4fARB = NULL;
PFNGLPROGRAMENVPARAMETER4FVARBPROC glext_glProgramEnvParameter4fvARB = NULL;
PFNGLPROGRAMENVPARAMETERI4INVPROC glext_glProgramEnvParameterI4iNV = NULL;
PFNGLPROGRAMENVPARAMETERI4IVNVPROC glext_glProgramEnvParameterI4ivNV = NULL;
PFNGLPROGRAMENVPARAMETERI4UINVPROC glext_glProgramEnvParameterI4uiNV = NULL;
PFNGLPROGRAMENVPARAMETERI4UIVNVPROC glext_glProgramEnvParameterI4uivNV = NULL;
PFNGLPROGRAMENVPARAMETERS4FVEXTPROC glext_glProgramEnvParameters4fvEXT = NULL;
PFNGLPROGRAMENVPARAMETERSI4IVNVPROC glext_glProgramEnvParametersI4ivNV = NULL;
PFNGLPROGRAMENVPARAMETERSI4UIVNVPROC glext_glProgramEnvParametersI4uivNV
  = NULL;
PFNGLPROGRAMLOCALPARAMETER4DARBPROC glext_glProgramLocalParameter4dARB = NULL;
PFNGLPROGRAMLOCALPARAMETER4DVARBPROC glext_glProgramLocalParameter4dvARB
  = NULL;
PFNGLPROGRAMLOCALPARAMETER4FARBPROC glext_glProgramLocalParameter4fARB = NULL;
PFNGLPROGRAMLOCALPARAMETER4FVARBPROC glext_glProgramLocalParameter4fvARB
  = NULL;
PFNGLPROGRAMLOCALPARAMETERI4INVPROC glext_glProgramLocalParameterI4iNV = NULL;
PFNGLPROGRAMLOCALPARAMETERI4IVNVPROC glext_glProgramLocalParameterI4ivNV
  = NULL;
PFNGLPROGRAMLOCALPARAMETERI4UINVPROC glext_glProgramLocalParameterI4uiNV
  = NULL;
PFNGLPROGRAMLOCALPARAMETERI4UIVNVPROC glext_glProgramLocalParameterI4uivNV
  = NULL;
PFNGLPROGRAMLOCALPARAMETERS4FVEXTPROC glext_glProgramLocalParameters4fvEXT
  = NULL;
PFNGLPROGRAMLOCALPARAMETERSI4IVNVPROC glext_glProgramLocalParametersI4ivNV
  = NULL;
PFNGLPROGRAMLOCALPARAMETERSI4UIVNVPROC glext_glProgramLocalParametersI4uivNV
  = NULL;
PFNGLPROGRAMNAMEDPARAMETER4DNVPROC glext_glProgramNamedParameter4dNV = NULL;
PFNGLPROGRAMNAMEDPARAMETER4DVNVPROC glext_glProgramNamedParameter4dvNV = NULL;
PFNGLPROGRAMNAMEDPARAMETER4FNVPROC glext_glProgramNamedParameter4fNV = NULL;
PFNGLPROGRAMNAMEDPARAMETER4FVNVPROC glext_glProgramNamedParameter4fvNV = NULL;
PFNGLPROGRAMPARAMETER4DNVPROC glext_glProgramParameter4dNV = NULL;
PFNGLPROGRAMPARAMETER4DVNVPROC glext_glProgramParameter4dvNV = NULL;
PFNGLPROGRAMPARAMETER4FNVPROC glext_glProgramParameter4fNV = NULL;
PFNGLPROGRAMPARAMETER4FVNVPROC glext_glProgramParameter4fvNV = NULL;
PFNGLPROGRAMPARAMETERIPROC glext_glProgramParameteri = NULL;
PFNGLPROGRAMPARAMETERIARBPROC glext_glProgramParameteriARB = NULL;
PFNGLPROGRAMPARAMETERIEXTPROC glext_glProgramParameteriEXT = NULL;
PFNGLPROGRAMPARAMETERS4DVNVPROC glext_glProgramParameters4dvNV = NULL;
PFNGLPROGRAMPARAMETERS4FVNVPROC glext_glProgramParameters4fvNV = NULL;
PFNGLPROGRAMPATHFRAGMENTINPUTGENNVPROC glext_glProgramPathFragmentInputGenNV
  = NULL;
PFNGLPROGRAMSTRINGARBPROC glext_glProgramStringARB = NULL;
PFNGLPROGRAMSUBROUTINEPARAMETERSUIVNVPROC
glext_glProgramSubroutineParametersuivNV = NULL;
PFNGLPROGRAMUNIFORM1DPROC glext_glProgramUniform1d = NULL;
PFNGLPROGRAMUNIFORM1DEXTPROC glext_glProgramUniform1dEXT = NULL;
PFNGLPROGRAMUNIFORM1DVPROC glext_glProgramUniform1dv = NULL;
PFNGLPROGRAMUNIFORM1DVEXTPROC glext_glProgramUniform1dvEXT = NULL;
PFNGLPROGRAMUNIFORM1FPROC glext_glProgramUniform1f = NULL;
PFNGLPROGRAMUNIFORM1FEXTPROC glext_glProgramUniform1fEXT = NULL;
PFNGLPROGRAMUNIFORM1FVPROC glext_glProgramUniform1fv = NULL;
PFNGLPROGRAMUNIFORM1FVEXTPROC glext_glProgramUniform1fvEXT = NULL;
PFNGLPROGRAMUNIFORM1IPROC glext_glProgramUniform1i = NULL;
PFNGLPROGRAMUNIFORM1I64ARBPROC glext_glProgramUniform1i64ARB = NULL;
PFNGLPROGRAMUNIFORM1I64NVPROC glext_glProgramUniform1i64NV = NULL;
PFNGLPROGRAMUNIFORM1I64VARBPROC glext_glProgramUniform1i64vARB = NULL;
PFNGLPROGRAMUNIFORM1I64VNVPROC glext_glProgramUniform1i64vNV = NULL;
PFNGLPROGRAMUNIFORM1IEXTPROC glext_glProgramUniform1iEXT = NULL;
PFNGLPROGRAMUNIFORM1IVPROC glext_glProgramUniform1iv = NULL;
PFNGLPROGRAMUNIFORM1IVEXTPROC glext_glProgramUniform1ivEXT = NULL;
PFNGLPROGRAMUNIFORM1UIPROC glext_glProgramUniform1ui = NULL;
PFNGLPROGRAMUNIFORM1UI64ARBPROC glext_glProgramUniform1ui64ARB = NULL;
PFNGLPROGRAMUNIFORM1UI64NVPROC glext_glProgramUniform1ui64NV = NULL;
PFNGLPROGRAMUNIFORM1UI64VARBPROC glext_glProgramUniform1ui64vARB = NULL;
PFNGLPROGRAMUNIFORM1UI64VNVPROC glext_glProgramUniform1ui64vNV = NULL;
PFNGLPROGRAMUNIFORM1UIEXTPROC glext_glProgramUniform1uiEXT = NULL;
PFNGLPROGRAMUNIFORM1UIVPROC glext_glProgramUniform1uiv = NULL;
PFNGLPROGRAMUNIFORM1UIVEXTPROC glext_glProgramUniform1uivEXT = NULL;
PFNGLPROGRAMUNIFORM2DPROC glext_glProgramUniform2d = NULL;
PFNGLPROGRAMUNIFORM2DEXTPROC glext_glProgramUniform2dEXT = NULL;
PFNGLPROGRAMUNIFORM2DVPROC glext_glProgramUniform2dv = NULL;
PFNGLPROGRAMUNIFORM2DVEXTPROC glext_glProgramUniform2dvEXT = NULL;
PFNGLPROGRAMUNIFORM2FPROC glext_glProgramUniform2f = NULL;
PFNGLPROGRAMUNIFORM2FEXTPROC glext_glProgramUniform2fEXT = NULL;
PFNGLPROGRAMUNIFORM2FVPROC glext_glProgramUniform2fv = NULL;
PFNGLPROGRAMUNIFORM2FVEXTPROC glext_glProgramUniform2fvEXT = NULL;
PFNGLPROGRAMUNIFORM2IPROC glext_glProgramUniform2i = NULL;
PFNGLPROGRAMUNIFORM2I64ARBPROC glext_glProgramUniform2i64ARB = NULL;
PFNGLPROGRAMUNIFORM2I64NVPROC glext_glProgramUniform2i64NV = NULL;
PFNGLPROGRAMUNIFORM2I64VARBPROC glext_glProgramUniform2i64vARB = NULL;
PFNGLPROGRAMUNIFORM2I64VNVPROC glext_glProgramUniform2i64vNV = NULL;
PFNGLPROGRAMUNIFORM2IEXTPROC glext_glProgramUniform2iEXT = NULL;
PFNGLPROGRAMUNIFORM2IVPROC glext_glProgramUniform2iv = NULL;
PFNGLPROGRAMUNIFORM2IVEXTPROC glext_glProgramUniform2ivEXT = NULL;
PFNGLPROGRAMUNIFORM2UIPROC glext_glProgramUniform2ui = NULL;
PFNGLPROGRAMUNIFORM2UI64ARBPROC glext_glProgramUniform2ui64ARB = NULL;
PFNGLPROGRAMUNIFORM2UI64NVPROC glext_glProgramUniform2ui64NV = NULL;
PFNGLPROGRAMUNIFORM2UI64VARBPROC glext_glProgramUniform2ui64vARB = NULL;
PFNGLPROGRAMUNIFORM2UI64VNVPROC glext_glProgramUniform2ui64vNV = NULL;
PFNGLPROGRAMUNIFORM2UIEXTPROC glext_glProgramUniform2uiEXT = NULL;
PFNGLPROGRAMUNIFORM2UIVPROC glext_glProgramUniform2uiv = NULL;
PFNGLPROGRAMUNIFORM2UIVEXTPROC glext_glProgramUniform2uivEXT = NULL;
PFNGLPROGRAMUNIFORM3DPROC glext_glProgramUniform3d = NULL;
PFNGLPROGRAMUNIFORM3DEXTPROC glext_glProgramUniform3dEXT = NULL;
PFNGLPROGRAMUNIFORM3DVPROC glext_glProgramUniform3dv = NULL;
PFNGLPROGRAMUNIFORM3DVEXTPROC glext_glProgramUniform3dvEXT = NULL;
PFNGLPROGRAMUNIFORM3FPROC glext_glProgramUniform3f = NULL;
PFNGLPROGRAMUNIFORM3FEXTPROC glext_glProgramUniform3fEXT = NULL;
PFNGLPROGRAMUNIFORM3FVPROC glext_glProgramUniform3fv = NULL;
PFNGLPROGRAMUNIFORM3FVEXTPROC glext_glProgramUniform3fvEXT = NULL;
PFNGLPROGRAMUNIFORM3IPROC glext_glProgramUniform3i = NULL;
PFNGLPROGRAMUNIFORM3I64ARBPROC glext_glProgramUniform3i64ARB = NULL;
PFNGLPROGRAMUNIFORM3I64NVPROC glext_glProgramUniform3i64NV = NULL;
PFNGLPROGRAMUNIFORM3I64VARBPROC glext_glProgramUniform3i64vARB = NULL;
PFNGLPROGRAMUNIFORM3I64VNVPROC glext_glProgramUniform3i64vNV = NULL;
PFNGLPROGRAMUNIFORM3IEXTPROC glext_glProgramUniform3iEXT = NULL;
PFNGLPROGRAMUNIFORM3IVPROC glext_glProgramUniform3iv = NULL;
PFNGLPROGRAMUNIFORM3IVEXTPROC glext_glProgramUniform3ivEXT = NULL;
PFNGLPROGRAMUNIFORM3UIPROC glext_glProgramUniform3ui = NULL;
PFNGLPROGRAMUNIFORM3UI64ARBPROC glext_glProgramUniform3ui64ARB = NULL;
PFNGLPROGRAMUNIFORM3UI64NVPROC glext_glProgramUniform3ui64NV = NULL;
PFNGLPROGRAMUNIFORM3UI64VARBPROC glext_glProgramUniform3ui64vARB = NULL;
PFNGLPROGRAMUNIFORM3UI64VNVPROC glext_glProgramUniform3ui64vNV = NULL;
PFNGLPROGRAMUNIFORM3UIEXTPROC glext_glProgramUniform3uiEXT = NULL;
PFNGLPROGRAMUNIFORM3UIVPROC glext_glProgramUniform3uiv = NULL;
PFNGLPROGRAMUNIFORM3UIVEXTPROC glext_glProgramUniform3uivEXT = NULL;
PFNGLPROGRAMUNIFORM4DPROC glext_glProgramUniform4d = NULL;
PFNGLPROGRAMUNIFORM4DEXTPROC glext_glProgramUniform4dEXT = NULL;
PFNGLPROGRAMUNIFORM4DVPROC glext_glProgramUniform4dv = NULL;
PFNGLPROGRAMUNIFORM4DVEXTPROC glext_glProgramUniform4dvEXT = NULL;
PFNGLPROGRAMUNIFORM4FPROC glext_glProgramUniform4f = NULL;
PFNGLPROGRAMUNIFORM4FEXTPROC glext_glProgramUniform4fEXT = NULL;
PFNGLPROGRAMUNIFORM4FVPROC glext_glProgramUniform4fv = NULL;
PFNGLPROGRAMUNIFORM4FVEXTPROC glext_glProgramUniform4fvEXT = NULL;
PFNGLPROGRAMUNIFORM4IPROC glext_glProgramUniform4i = NULL;
PFNGLPROGRAMUNIFORM4I64ARBPROC glext_glProgramUniform4i64ARB = NULL;
PFNGLPROGRAMUNIFORM4I64NVPROC glext_glProgramUniform4i64NV = NULL;
PFNGLPROGRAMUNIFORM4I64VARBPROC glext_glProgramUniform4i64vARB = NULL;
PFNGLPROGRAMUNIFORM4I64VNVPROC glext_glProgramUniform4i64vNV = NULL;
PFNGLPROGRAMUNIFORM4IEXTPROC glext_glProgramUniform4iEXT = NULL;
PFNGLPROGRAMUNIFORM4IVPROC glext_glProgramUniform4iv = NULL;
PFNGLPROGRAMUNIFORM4IVEXTPROC glext_glProgramUniform4ivEXT = NULL;
PFNGLPROGRAMUNIFORM4UIPROC glext_glProgramUniform4ui = NULL;
PFNGLPROGRAMUNIFORM4UI64ARBPROC glext_glProgramUniform4ui64ARB = NULL;
PFNGLPROGRAMUNIFORM4UI64NVPROC glext_glProgramUniform4ui64NV = NULL;
PFNGLPROGRAMUNIFORM4UI64VARBPROC glext_glProgramUniform4ui64vARB = NULL;
PFNGLPROGRAMUNIFORM4UI64VNVPROC glext_glProgramUniform4ui64vNV = NULL;
PFNGLPROGRAMUNIFORM4UIEXTPROC glext_glProgramUniform4uiEXT = NULL;
PFNGLPROGRAMUNIFORM4UIVPROC glext_glProgramUniform4uiv = NULL;
PFNGLPROGRAMUNIFORM4UIVEXTPROC glext_glProgramUniform4uivEXT = NULL;
PFNGLPROGRAMUNIFORMHANDLEUI64ARBPROC glext_glProgramUniformHandleui64ARB
  = NULL;
PFNGLPROGRAMUNIFORMHANDLEUI64NVPROC glext_glProgramUniformHandleui64NV = NULL;
PFNGLPROGRAMUNIFORMHANDLEUI64VARBPROC glext_glProgramUniformHandleui64vARB
  = NULL;
PFNGLPROGRAMUNIFORMHANDLEUI64VNVPROC glext_glProgramUniformHandleui64vNV
  = NULL;
PFNGLPROGRAMUNIFORMMATRIX2DVPROC glext_glProgramUniformMatrix2dv = NULL;
PFNGLPROGRAMUNIFORMMATRIX2DVEXTPROC glext_glProgramUniformMatrix2dvEXT = NULL;
PFNGLPROGRAMUNIFORMMATRIX2FVPROC glext_glProgramUniformMatrix2fv = NULL;
PFNGLPROGRAMUNIFORMMATRIX2FVEXTPROC glext_glProgramUniformMatrix2fvEXT = NULL;
PFNGLPROGRAMUNIFORMMATRIX2X3DVPROC glext_glProgramUniformMatrix2x3dv = NULL;
PFNGLPROGRAMUNIFORMMATRIX2X3DVEXTPROC glext_glProgramUniformMatrix2x3dvEXT
  = NULL;
PFNGLPROGRAMUNIFORMMATRIX2X3FVPROC glext_glProgramUniformMatrix2x3fv = NULL;
PFNGLPROGRAMUNIFORMMATRIX2X3FVEXTPROC glext_glProgramUniformMatrix2x3fvEXT
  = NULL;
PFNGLPROGRAMUNIFORMMATRIX2X4DVPROC glext_glProgramUniformMatrix2x4dv = NULL;
PFNGLPROGRAMUNIFORMMATRIX2X4DVEXTPROC glext_glProgramUniformMatrix2x4dvEXT
  = NULL;
PFNGLPROGRAMUNIFORMMATRIX2X4FVPROC glext_glProgramUniformMatrix2x4fv = NULL;
PFNGLPROGRAMUNIFORMMATRIX2X4FVEXTPROC glext_glProgramUniformMatrix2x4fvEXT
  = NULL;
PFNGLPROGRAMUNIFORMMATRIX3DVPROC glext_glProgramUniformMatrix3dv = NULL;
PFNGLPROGRAMUNIFORMMATRIX3DVEXTPROC glext_glProgramUniformMatrix3dvEXT = NULL;
PFNGLPROGRAMUNIFORMMATRIX3FVPROC glext_glProgramUniformMatrix3fv = NULL;
PFNGLPROGRAMUNIFORMMATRIX3FVEXTPROC glext_glProgramUniformMatrix3fvEXT = NULL;
PFNGLPROGRAMUNIFORMMATRIX3X2DVPROC glext_glProgramUniformMatrix3x2dv = NULL;
PFNGLPROGRAMUNIFORMMATRIX3X2DVEXTPROC glext_glProgramUniformMatrix3x2dvEXT
  = NULL;
PFNGLPROGRAMUNIFORMMATRIX3X2FVPROC glext_glProgramUniformMatrix3x2fv = NULL;
PFNGLPROGRAMUNIFORMMATRIX3X2FVEXTPROC glext_glProgramUniformMatrix3x2fvEXT
  = NULL;
PFNGLPROGRAMUNIFORMMATRIX3X4DVPROC glext_glProgramUniformMatrix3x4dv = NULL;
PFNGLPROGRAMUNIFORMMATRIX3X4DVEXTPROC glext_glProgramUniformMatrix3x4dvEXT
  = NULL;
PFNGLPROGRAMUNIFORMMATRIX3X4FVPROC glext_glProgramUniformMatrix3x4fv = NULL;
PFNGLPROGRAMUNIFORMMATRIX3X4FVEXTPROC glext_glProgramUniformMatrix3x4fvEXT
  = NULL;
PFNGLPROGRAMUNIFORMMATRIX4DVPROC glext_glProgramUniformMatrix4dv = NULL;
PFNGLPROGRAMUNIFORMMATRIX4DVEXTPROC glext_glProgramUniformMatrix4dvEXT = NULL;
PFNGLPROGRAMUNIFORMMATRIX4FVPROC glext_glProgramUniformMatrix4fv = NULL;
PFNGLPROGRAMUNIFORMMATRIX4FVEXTPROC glext_glProgramUniformMatrix4fvEXT = NULL;
PFNGLPROGRAMUNIFORMMATRIX4X2DVPROC glext_glProgramUniformMatrix4x2dv = NULL;
PFNGLPROGRAMUNIFORMMATRIX4X2DVEXTPROC glext_glProgramUniformMatrix4x2dvEXT
  = NULL;
PFNGLPROGRAMUNIFORMMATRIX4X2FVPROC glext_glProgramUniformMatrix4x2fv = NULL;
PFNGLPROGRAMUNIFORMMATRIX4X2FVEXTPROC glext_glProgramUniformMatrix4x2fvEXT
  = NULL;
PFNGLPROGRAMUNIFORMMATRIX4X3DVPROC glext_glProgramUniformMatrix4x3dv = NULL;
PFNGLPROGRAMUNIFORMMATRIX4X3DVEXTPROC glext_glProgramUniformMatrix4x3dvEXT
  = NULL;
PFNGLPROGRAMUNIFORMMATRIX4X3FVPROC glext_glProgramUniformMatrix4x3fv = NULL;
PFNGLPROGRAMUNIFORMMATRIX4X3FVEXTPROC glext_glProgramUniformMatrix4x3fvEXT
  = NULL;
PFNGLPROGRAMUNIFORMUI64NVPROC glext_glProgramUniformui64NV = NULL;
PFNGLPROGRAMUNIFORMUI64VNVPROC glext_glProgramUniformui64vNV = NULL;
PFNGLPROGRAMVERTEXLIMITNVPROC glext_glProgramVertexLimitNV = NULL;
PFNGLPROVOKINGVERTEXPROC glext_glProvokingVertex = NULL;
PFNGLPROVOKINGVERTEXEXTPROC glext_glProvokingVertexEXT = NULL;
PFNGLPUSHCLIENTATTRIBDEFAULTEXTPROC glext_glPushClientAttribDefaultEXT = NULL;
PFNGLPUSHDEBUGGROUPPROC glext_glPushDebugGroup = NULL;
PFNGLPUSHGROUPMARKEREXTPROC glext_glPushGroupMarkerEXT = NULL;
PFNGLQUERYCOUNTERPROC glext_glQueryCounter = NULL;
PFNGLQUERYMATRIXXOESPROC glext_glQueryMatrixxOES = NULL;
PFNGLQUERYOBJECTPARAMETERUIAMDPROC glext_glQueryObjectParameteruiAMD = NULL;
PFNGLQUERYRESOURCENVPROC glext_glQueryResourceNV = NULL;
PFNGLQUERYRESOURCETAGNVPROC glext_glQueryResourceTagNV = NULL;
PFNGLRASTERPOS2XOESPROC glext_glRasterPos2xOES = NULL;
PFNGLRASTERPOS2XVOESPROC glext_glRasterPos2xvOES = NULL;
PFNGLRASTERPOS3XOESPROC glext_glRasterPos3xOES = NULL;
PFNGLRASTERPOS3XVOESPROC glext_glRasterPos3xvOES = NULL;
PFNGLRASTERPOS4XOESPROC glext_glRasterPos4xOES = NULL;
PFNGLRASTERPOS4XVOESPROC glext_glRasterPos4xvOES = NULL;
PFNGLRASTERSAMPLESEXTPROC glext_glRasterSamplesEXT = NULL;
PFNGLREADBUFFERPROC glext_glReadBuffer = NULL;
PFNGLREADINSTRUMENTSSGIXPROC glext_glReadInstrumentsSGIX = NULL;
PFNGLREADPIXELSPROC glext_glReadPixels = NULL;
PFNGLREADNPIXELSPROC glext_glReadnPixels = NULL;
PFNGLREADNPIXELSARBPROC glext_glReadnPixelsARB = NULL;
PFNGLRECTXOESPROC glext_glRectxOES = NULL;
PFNGLRECTXVOESPROC glext_glRectxvOES = NULL;
PFNGLREFERENCEPLANESGIXPROC glext_glReferencePlaneSGIX = NULL;
PFNGLRELEASEKEYEDMUTEXWIN32EXTPROC glext_glReleaseKeyedMutexWin32EXT = NULL;
PFNGLRELEASESHADERCOMPILERPROC glext_glReleaseShaderCompiler = NULL;
PFNGLRENDERGPUMASKNVPROC glext_glRenderGpuMaskNV = NULL;
PFNGLRENDERBUFFERSTORAGEPROC glext_glRenderbufferStorage = NULL;
PFNGLRENDERBUFFERSTORAGEEXTPROC glext_glRenderbufferStorageEXT = NULL;
PFNGLRENDERBUFFERSTORAGEMULTISAMPLEPROC glext_glRenderbufferStorageMultisample
  = NULL;
PFNGLRENDERBUFFERSTORAGEMULTISAMPLEADVANCEDAMDPROC
glext_glRenderbufferStorageMultisampleAdvancedAMD = NULL;
PFNGLRENDERBUFFERSTORAGEMULTISAMPLECOVERAGENVPROC
glext_glRenderbufferStorageMultisampleCoverageNV = NULL;
PFNGLRENDERBUFFERSTORAGEMULTISAMPLEEXTPROC
glext_glRenderbufferStorageMultisampleEXT = NULL;
PFNGLREPLACEMENTCODEPOINTERSUNPROC glext_glReplacementCodePointerSUN = NULL;
PFNGLREPLACEMENTCODEUBSUNPROC glext_glReplacementCodeubSUN = NULL;
PFNGLREPLACEMENTCODEUBVSUNPROC glext_glReplacementCodeubvSUN = NULL;
PFNGLREPLACEMENTCODEUICOLOR3FVERTEX3FSUNPROC
glext_glReplacementCodeuiColor3fVertex3fSUN = NULL;
PFNGLREPLACEMENTCODEUICOLOR3FVERTEX3FVSUNPROC
glext_glReplacementCodeuiColor3fVertex3fvSUN = NULL;
PFNGLREPLACEMENTCODEUICOLOR4FNORMAL3FVERTEX3FSUNPROC
glext_glReplacementCodeuiColor4fNormal3fVertex3fSUN = NULL;
PFNGLREPLACEMENTCODEUICOLOR4FNORMAL3FVERTEX3FVSUNPROC
glext_glReplacementCodeuiColor4fNormal3fVertex3fvSUN = NULL;
PFNGLREPLACEMENTCODEUICOLOR4UBVERTEX3FSUNPROC
glext_glReplacementCodeuiColor4ubVertex3fSUN = NULL;
PFNGLREPLACEMENTCODEUICOLOR4UBVERTEX3FVSUNPROC
glext_glReplacementCodeuiColor4ubVertex3fvSUN = NULL;
PFNGLREPLACEMENTCODEUINORMAL3FVERTEX3FSUNPROC
glext_glReplacementCodeuiNormal3fVertex3fSUN = NULL;
PFNGLREPLACEMENTCODEUINORMAL3FVERTEX3FVSUNPROC
glext_glReplacementCodeuiNormal3fVertex3fvSUN = NULL;
PFNGLREPLACEMENTCODEUISUNPROC glext_glReplacementCodeuiSUN = NULL;
PFNGLREPLACEMENTCODEUITEXCOORD2FCOLOR4FNORMAL3FVERTEX3FSUNPROC
glext_glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fSUN = NULL;
PFNGLREPLACEMENTCODEUITEXCOORD2FCOLOR4FNORMAL3FVERTEX3FVSUNPROC
glext_glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fvSUN = NULL;
PFNGLREPLACEMENTCODEUITEXCOORD2FNORMAL3FVERTEX3FSUNPROC
glext_glReplacementCodeuiTexCoord2fNormal3fVertex3fSUN = NULL;
PFNGLREPLACEMENTCODEUITEXCOORD2FNORMAL3FVERTEX3FVSUNPROC
glext_glReplacementCodeuiTexCoord2fNormal3fVertex3fvSUN = NULL;
PFNGLREPLACEMENTCODEUITEXCOORD2FVERTEX3FSUNPROC
glext_glReplacementCodeuiTexCoord2fVertex3fSUN = NULL;
PFNGLREPLACEMENTCODEUITEXCOORD2FVERTEX3FVSUNPROC
glext_glReplacementCodeuiTexCoord2fVertex3fvSUN = NULL;
PFNGLREPLACEMENTCODEUIVERTEX3FSUNPROC glext_glReplacementCodeuiVertex3fSUN
  = NULL;
PFNGLREPLACEMENTCODEUIVERTEX3FVSUNPROC glext_glReplacementCodeuiVertex3fvSUN
  = NULL;
PFNGLREPLACEMENTCODEUIVSUNPROC glext_glReplacementCodeuivSUN = NULL;
PFNGLREPLACEMENTCODEUSSUNPROC glext_glReplacementCodeusSUN = NULL;
PFNGLREPLACEMENTCODEUSVSUNPROC glext_glReplacementCodeusvSUN = NULL;
PFNGLREQUESTRESIDENTPROGRAMSNVPROC glext_glRequestResidentProgramsNV = NULL;
PFNGLRESETHISTOGRAMEXTPROC glext_glResetHistogramEXT = NULL;
PFNGLRESETMEMORYOBJECTPARAMETERNVPROC glext_glResetMemoryObjectParameterNV
  = NULL;
PFNGLRESETMINMAXEXTPROC glext_glResetMinmaxEXT = NULL;
PFNGLRESIZEBUFFERSMESAPROC glext_glResizeBuffersMESA = NULL;
PFNGLRESOLVEDEPTHVALUESNVPROC glext_glResolveDepthValuesNV = NULL;
PFNGLRESUMETRANSFORMFEEDBACKPROC glext_glResumeTransformFeedback = NULL;
PFNGLRESUMETRANSFORMFEEDBACKNVPROC glext_glResumeTransformFeedbackNV = NULL;
PFNGLROTATEXOESPROC glext_glRotatexOES = NULL;
PFNGLSAMPLECOVERAGEPROC glext_glSampleCoverage = NULL;
PFNGLSAMPLECOVERAGEARBPROC glext_glSampleCoverageARB = NULL;
PFNGLSAMPLEMAPATIPROC glext_glSampleMapATI = NULL;
PFNGLSAMPLEMASKEXTPROC glext_glSampleMaskEXT = NULL;
PFNGLSAMPLEMASKINDEXEDNVPROC glext_glSampleMaskIndexedNV = NULL;
PFNGLSAMPLEMASKSGISPROC glext_glSampleMaskSGIS = NULL;
PFNGLSAMPLEMASKIPROC glext_glSampleMaski = NULL;
PFNGLSAMPLEPATTERNEXTPROC glext_glSamplePatternEXT = NULL;
PFNGLSAMPLEPATTERNSGISPROC glext_glSamplePatternSGIS = NULL;
PFNGLSAMPLERPARAMETERIIVPROC glext_glSamplerParameterIiv = NULL;
PFNGLSAMPLERPARAMETERIUIVPROC glext_glSamplerParameterIuiv = NULL;
PFNGLSAMPLERPARAMETERFPROC glext_glSamplerParameterf = NULL;
PFNGLSAMPLERPARAMETERFVPROC glext_glSamplerParameterfv = NULL;
PFNGLSAMPLERPARAMETERIPROC glext_glSamplerParameteri = NULL;
PFNGLSAMPLERPARAMETERIVPROC glext_glSamplerParameteriv = NULL;
PFNGLSCALEXOESPROC glext_glScalexOES = NULL;
PFNGLSCISSORPROC glext_glScissor = NULL;
PFNGLSCISSORARRAYVPROC glext_glScissorArrayv = NULL;
PFNGLSCISSOREXCLUSIVEARRAYVNVPROC glext_glScissorExclusiveArrayvNV = NULL;
PFNGLSCISSOREXCLUSIVENVPROC glext_glScissorExclusiveNV = NULL;
PFNGLSCISSORINDEXEDPROC glext_glScissorIndexed = NULL;
PFNGLSCISSORINDEXEDVPROC glext_glScissorIndexedv = NULL;
PFNGLSECONDARYCOLOR3BEXTPROC glext_glSecondaryColor3bEXT = NULL;
PFNGLSECONDARYCOLOR3BVEXTPROC glext_glSecondaryColor3bvEXT = NULL;
PFNGLSECONDARYCOLOR3DEXTPROC glext_glSecondaryColor3dEXT = NULL;
PFNGLSECONDARYCOLOR3DVEXTPROC glext_glSecondaryColor3dvEXT = NULL;
PFNGLSECONDARYCOLOR3FEXTPROC glext_glSecondaryColor3fEXT = NULL;
PFNGLSECONDARYCOLOR3FVEXTPROC glext_glSecondaryColor3fvEXT = NULL;
PFNGLSECONDARYCOLOR3HNVPROC glext_glSecondaryColor3hNV = NULL;
PFNGLSECONDARYCOLOR3HVNVPROC glext_glSecondaryColor3hvNV = NULL;
PFNGLSECONDARYCOLOR3IEXTPROC glext_glSecondaryColor3iEXT = NULL;
PFNGLSECONDARYCOLOR3IVEXTPROC glext_glSecondaryColor3ivEXT = NULL;
PFNGLSECONDARYCOLOR3SEXTPROC glext_glSecondaryColor3sEXT = NULL;
PFNGLSECONDARYCOLOR3SVEXTPROC glext_glSecondaryColor3svEXT = NULL;
PFNGLSECONDARYCOLOR3UBEXTPROC glext_glSecondaryColor3ubEXT = NULL;
PFNGLSECONDARYCOLOR3UBVEXTPROC glext_glSecondaryColor3ubvEXT = NULL;
PFNGLSECONDARYCOLOR3UIEXTPROC glext_glSecondaryColor3uiEXT = NULL;
PFNGLSECONDARYCOLOR3UIVEXTPROC glext_glSecondaryColor3uivEXT = NULL;
PFNGLSECONDARYCOLOR3USEXTPROC glext_glSecondaryColor3usEXT = NULL;
PFNGLSECONDARYCOLOR3USVEXTPROC glext_glSecondaryColor3usvEXT = NULL;
PFNGLSECONDARYCOLORFORMATNVPROC glext_glSecondaryColorFormatNV = NULL;
PFNGLSECONDARYCOLORPOINTEREXTPROC glext_glSecondaryColorPointerEXT = NULL;
PFNGLSECONDARYCOLORPOINTERLISTIBMPROC glext_glSecondaryColorPointerListIBM
  = NULL;
PFNGLSELECTPERFMONITORCOUNTERSAMDPROC glext_glSelectPerfMonitorCountersAMD
  = NULL;
PFNGLSEMAPHOREPARAMETERIVNVPROC glext_glSemaphoreParameterivNV = NULL;
PFNGLSEMAPHOREPARAMETERUI64VEXTPROC glext_glSemaphoreParameterui64vEXT = NULL;
PFNGLSEPARABLEFILTER2DEXTPROC glext_glSeparableFilter2DEXT = NULL;
PFNGLSETFENCEAPPLEPROC glext_glSetFenceAPPLE = NULL;
PFNGLSETFENCENVPROC glext_glSetFenceNV = NULL;
PFNGLSETFRAGMENTSHADERCONSTANTATIPROC glext_glSetFragmentShaderConstantATI
  = NULL;
PFNGLSETINVARIANTEXTPROC glext_glSetInvariantEXT = NULL;
PFNGLSETLOCALCONSTANTEXTPROC glext_glSetLocalConstantEXT = NULL;
PFNGLSETMULTISAMPLEFVAMDPROC glext_glSetMultisamplefvAMD = NULL;
PFNGLSHADERBINARYPROC glext_glShaderBinary = NULL;
PFNGLSHADEROP1EXTPROC glext_glShaderOp1EXT = NULL;
PFNGLSHADEROP2EXTPROC glext_glShaderOp2EXT = NULL;
PFNGLSHADEROP3EXTPROC glext_glShaderOp3EXT = NULL;
PFNGLSHADERSOURCEPROC glext_glShaderSource = NULL;
PFNGLSHADERSOURCEARBPROC glext_glShaderSourceARB = NULL;
PFNGLSHADERSTORAGEBLOCKBINDINGPROC glext_glShaderStorageBlockBinding = NULL;
PFNGLSHADINGRATECOMBINEROPSEXTPROC glext_glShadingRateCombinerOpsEXT = NULL;
PFNGLSHADINGRATEEXTPROC glext_glShadingRateEXT = NULL;
PFNGLSHADINGRATEIMAGEBARRIERNVPROC glext_glShadingRateImageBarrierNV = NULL;
PFNGLSHADINGRATEIMAGEPALETTENVPROC glext_glShadingRateImagePaletteNV = NULL;
PFNGLSHADINGRATESAMPLEORDERCUSTOMNVPROC glext_glShadingRateSampleOrderCustomNV
  = NULL;
PFNGLSHADINGRATESAMPLEORDERNVPROC glext_glShadingRateSampleOrderNV = NULL;
PFNGLSHARPENTEXFUNCSGISPROC glext_glSharpenTexFuncSGIS = NULL;
PFNGLSIGNALSEMAPHOREEXTPROC glext_glSignalSemaphoreEXT = NULL;
PFNGLSIGNALSEMAPHOREUI64NVXPROC glext_glSignalSemaphoreui64NVX = NULL;
PFNGLSIGNALVKFENCENVPROC glext_glSignalVkFenceNV = NULL;
PFNGLSIGNALVKSEMAPHORENVPROC glext_glSignalVkSemaphoreNV = NULL;
PFNGLSPECIALIZESHADERPROC glext_glSpecializeShader = NULL;
PFNGLSPECIALIZESHADERARBPROC glext_glSpecializeShaderARB = NULL;
PFNGLSPRITEPARAMETERFSGIXPROC glext_glSpriteParameterfSGIX = NULL;
PFNGLSPRITEPARAMETERFVSGIXPROC glext_glSpriteParameterfvSGIX = NULL;
PFNGLSPRITEPARAMETERISGIXPROC glext_glSpriteParameteriSGIX = NULL;
PFNGLSPRITEPARAMETERIVSGIXPROC glext_glSpriteParameterivSGIX = NULL;
PFNGLSTARTINSTRUMENTSSGIXPROC glext_glStartInstrumentsSGIX = NULL;
PFNGLSTATECAPTURENVPROC glext_glStateCaptureNV = NULL;
PFNGLSTENCILCLEARTAGEXTPROC glext_glStencilClearTagEXT = NULL;
PFNGLSTENCILFILLPATHINSTANCEDNVPROC glext_glStencilFillPathInstancedNV = NULL;
PFNGLSTENCILFILLPATHNVPROC glext_glStencilFillPathNV = NULL;
PFNGLSTENCILFUNCPROC glext_glStencilFunc = NULL;
PFNGLSTENCILFUNCSEPARATEPROC glext_glStencilFuncSeparate = NULL;
PFNGLSTENCILFUNCSEPARATEATIPROC glext_glStencilFuncSeparateATI = NULL;
PFNGLSTENCILMASKPROC glext_glStencilMask = NULL;
PFNGLSTENCILMASKSEPARATEPROC glext_glStencilMaskSeparate = NULL;
PFNGLSTENCILOPPROC glext_glStencilOp = NULL;
PFNGLSTENCILOPSEPARATEPROC glext_glStencilOpSeparate = NULL;
PFNGLSTENCILOPSEPARATEATIPROC glext_glStencilOpSeparateATI = NULL;
PFNGLSTENCILOPVALUEAMDPROC glext_glStencilOpValueAMD = NULL;
PFNGLSTENCILSTROKEPATHINSTANCEDNVPROC glext_glStencilStrokePathInstancedNV
  = NULL;
PFNGLSTENCILSTROKEPATHNVPROC glext_glStencilStrokePathNV = NULL;
PFNGLSTENCILTHENCOVERFILLPATHINSTANCEDNVPROC
glext_glStencilThenCoverFillPathInstancedNV = NULL;
PFNGLSTENCILTHENCOVERFILLPATHNVPROC glext_glStencilThenCoverFillPathNV = NULL;
PFNGLSTENCILTHENCOVERSTROKEPATHINSTANCEDNVPROC
glext_glStencilThenCoverStrokePathInstancedNV = NULL;
PFNGLSTENCILTHENCOVERSTROKEPATHNVPROC glext_glStencilThenCoverStrokePathNV
  = NULL;
PFNGLSTOPINSTRUMENTSSGIXPROC glext_glStopInstrumentsSGIX = NULL;
PFNGLSTRINGMARKERGREMEDYPROC glext_glStringMarkerGREMEDY = NULL;
PFNGLSUBPIXELPRECISIONBIASNVPROC glext_glSubpixelPrecisionBiasNV = NULL;
PFNGLSWIZZLEEXTPROC glext_glSwizzleEXT = NULL;
PFNGLSYNCTEXTUREINTELPROC glext_glSyncTextureINTEL = NULL;
PFNGLTAGSAMPLEBUFFERSGIXPROC glext_glTagSampleBufferSGIX = NULL;
PFNGLTANGENT3BEXTPROC glext_glTangent3bEXT = NULL;
PFNGLTANGENT3BVEXTPROC glext_glTangent3bvEXT = NULL;
PFNGLTANGENT3DEXTPROC glext_glTangent3dEXT = NULL;
PFNGLTANGENT3DVEXTPROC glext_glTangent3dvEXT = NULL;
PFNGLTANGENT3FEXTPROC glext_glTangent3fEXT = NULL;
PFNGLTANGENT3FVEXTPROC glext_glTangent3fvEXT = NULL;
PFNGLTANGENT3IEXTPROC glext_glTangent3iEXT = NULL;
PFNGLTANGENT3IVEXTPROC glext_glTangent3ivEXT = NULL;
PFNGLTANGENT3SEXTPROC glext_glTangent3sEXT = NULL;
PFNGLTANGENT3SVEXTPROC glext_glTangent3svEXT = NULL;
PFNGLTANGENTPOINTEREXTPROC glext_glTangentPointerEXT = NULL;
PFNGLTBUFFERMASK3DFXPROC glext_glTbufferMask3DFX = NULL;
PFNGLTESSELLATIONFACTORAMDPROC glext_glTessellationFactorAMD = NULL;
PFNGLTESSELLATIONMODEAMDPROC glext_glTessellationModeAMD = NULL;
PFNGLTESTFENCEAPPLEPROC glext_glTestFenceAPPLE = NULL;
PFNGLTESTFENCENVPROC glext_glTestFenceNV = NULL;
PFNGLTESTOBJECTAPPLEPROC glext_glTestObjectAPPLE = NULL;
PFNGLTEXATTACHMEMORYNVPROC glext_glTexAttachMemoryNV = NULL;
PFNGLTEXBUFFERPROC glext_glTexBuffer = NULL;
PFNGLTEXBUFFERARBPROC glext_glTexBufferARB = NULL;
PFNGLTEXBUFFEREXTPROC glext_glTexBufferEXT = NULL;
PFNGLTEXBUFFERRANGEPROC glext_glTexBufferRange = NULL;
PFNGLTEXBUMPPARAMETERFVATIPROC glext_glTexBumpParameterfvATI = NULL;
PFNGLTEXBUMPPARAMETERIVATIPROC glext_glTexBumpParameterivATI = NULL;
PFNGLTEXCOORD1BOESPROC glext_glTexCoord1bOES = NULL;
PFNGLTEXCOORD1BVOESPROC glext_glTexCoord1bvOES = NULL;
PFNGLTEXCOORD1HNVPROC glext_glTexCoord1hNV = NULL;
PFNGLTEXCOORD1HVNVPROC glext_glTexCoord1hvNV = NULL;
PFNGLTEXCOORD1XOESPROC glext_glTexCoord1xOES = NULL;
PFNGLTEXCOORD1XVOESPROC glext_glTexCoord1xvOES = NULL;
PFNGLTEXCOORD2BOESPROC glext_glTexCoord2bOES = NULL;
PFNGLTEXCOORD2BVOESPROC glext_glTexCoord2bvOES = NULL;
PFNGLTEXCOORD2FCOLOR3FVERTEX3FSUNPROC glext_glTexCoord2fColor3fVertex3fSUN
  = NULL;
PFNGLTEXCOORD2FCOLOR3FVERTEX3FVSUNPROC glext_glTexCoord2fColor3fVertex3fvSUN
  = NULL;
PFNGLTEXCOORD2FCOLOR4FNORMAL3FVERTEX3FSUNPROC
glext_glTexCoord2fColor4fNormal3fVertex3fSUN = NULL;
PFNGLTEXCOORD2FCOLOR4FNORMAL3FVERTEX3FVSUNPROC
glext_glTexCoord2fColor4fNormal3fVertex3fvSUN = NULL;
PFNGLTEXCOORD2FCOLOR4UBVERTEX3FSUNPROC glext_glTexCoord2fColor4ubVertex3fSUN
  = NULL;
PFNGLTEXCOORD2FCOLOR4UBVERTEX3FVSUNPROC glext_glTexCoord2fColor4ubVertex3fvSUN
  = NULL;
PFNGLTEXCOORD2FNORMAL3FVERTEX3FSUNPROC glext_glTexCoord2fNormal3fVertex3fSUN
  = NULL;
PFNGLTEXCOORD2FNORMAL3FVERTEX3FVSUNPROC glext_glTexCoord2fNormal3fVertex3fvSUN
  = NULL;
PFNGLTEXCOORD2FVERTEX3FSUNPROC glext_glTexCoord2fVertex3fSUN = NULL;
PFNGLTEXCOORD2FVERTEX3FVSUNPROC glext_glTexCoord2fVertex3fvSUN = NULL;
PFNGLTEXCOORD2HNVPROC glext_glTexCoord2hNV = NULL;
PFNGLTEXCOORD2HVNVPROC glext_glTexCoord2hvNV = NULL;
PFNGLTEXCOORD2XOESPROC glext_glTexCoord2xOES = NULL;
PFNGLTEXCOORD2XVOESPROC glext_glTexCoord2xvOES = NULL;
PFNGLTEXCOORD3BOESPROC glext_glTexCoord3bOES = NULL;
PFNGLTEXCOORD3BVOESPROC glext_glTexCoord3bvOES = NULL;
PFNGLTEXCOORD3HNVPROC glext_glTexCoord3hNV = NULL;
PFNGLTEXCOORD3HVNVPROC glext_glTexCoord3hvNV = NULL;
PFNGLTEXCOORD3XOESPROC glext_glTexCoord3xOES = NULL;
PFNGLTEXCOORD3XVOESPROC glext_glTexCoord3xvOES = NULL;
PFNGLTEXCOORD4BOESPROC glext_glTexCoord4bOES = NULL;
PFNGLTEXCOORD4BVOESPROC glext_glTexCoord4bvOES = NULL;
PFNGLTEXCOORD4FCOLOR4FNORMAL3FVERTEX4FSUNPROC
glext_glTexCoord4fColor4fNormal3fVertex4fSUN = NULL;
PFNGLTEXCOORD4FCOLOR4FNORMAL3FVERTEX4FVSUNPROC
glext_glTexCoord4fColor4fNormal3fVertex4fvSUN = NULL;
PFNGLTEXCOORD4FVERTEX4FSUNPROC glext_glTexCoord4fVertex4fSUN = NULL;
PFNGLTEXCOORD4FVERTEX4FVSUNPROC glext_glTexCoord4fVertex4fvSUN = NULL;
PFNGLTEXCOORD4HNVPROC glext_glTexCoord4hNV = NULL;
PFNGLTEXCOORD4HVNVPROC glext_glTexCoord4hvNV = NULL;
PFNGLTEXCOORD4XOESPROC glext_glTexCoord4xOES = NULL;
PFNGLTEXCOORD4XVOESPROC glext_glTexCoord4xvOES = NULL;
PFNGLTEXCOORDFORMATNVPROC glext_glTexCoordFormatNV = NULL;
PFNGLTEXCOORDPOINTEREXTPROC glext_glTexCoordPointerEXT = NULL;
PFNGLTEXCOORDPOINTERLISTIBMPROC glext_glTexCoordPointerListIBM = NULL;
PFNGLTEXCOORDPOINTERVINTELPROC glext_glTexCoordPointervINTEL = NULL;
PFNGLTEXENVXOESPROC glext_glTexEnvxOES = NULL;
PFNGLTEXENVXVOESPROC glext_glTexEnvxvOES = NULL;
PFNGLTEXFILTERFUNCSGISPROC glext_glTexFilterFuncSGIS = NULL;
PFNGLTEXGENXOESPROC glext_glTexGenxOES = NULL;
PFNGLTEXGENXVOESPROC glext_glTexGenxvOES = NULL;
PFNGLTEXIMAGE1DPROC glext_glTexImage1D = NULL;
PFNGLTEXIMAGE2DPROC glext_glTexImage2D = NULL;
PFNGLTEXIMAGE2DMULTISAMPLEPROC glext_glTexImage2DMultisample = NULL;
PFNGLTEXIMAGE2DMULTISAMPLECOVERAGENVPROC
glext_glTexImage2DMultisampleCoverageNV = NULL;
PFNGLTEXIMAGE3DPROC glext_glTexImage3D = NULL;
PFNGLTEXIMAGE3DEXTPROC glext_glTexImage3DEXT = NULL;
PFNGLTEXIMAGE3DMULTISAMPLEPROC glext_glTexImage3DMultisample = NULL;
PFNGLTEXIMAGE3DMULTISAMPLECOVERAGENVPROC
glext_glTexImage3DMultisampleCoverageNV = NULL;
PFNGLTEXIMAGE4DSGISPROC glext_glTexImage4DSGIS = NULL;
PFNGLTEXPAGECOMMITMENTARBPROC glext_glTexPageCommitmentARB = NULL;
PFNGLTEXPAGECOMMITMENTMEMNVPROC glext_glTexPageCommitmentMemNV = NULL;
PFNGLTEXPARAMETERIIVPROC glext_glTexParameterIiv = NULL;
PFNGLTEXPARAMETERIIVEXTPROC glext_glTexParameterIivEXT = NULL;
PFNGLTEXPARAMETERIUIVPROC glext_glTexParameterIuiv = NULL;
PFNGLTEXPARAMETERIUIVEXTPROC glext_glTexParameterIuivEXT = NULL;
PFNGLTEXPARAMETERFPROC glext_glTexParameterf = NULL;
PFNGLTEXPARAMETERFVPROC glext_glTexParameterfv = NULL;
PFNGLTEXPARAMETERIPROC glext_glTexParameteri = NULL;
PFNGLTEXPARAMETERIVPROC glext_glTexParameteriv = NULL;
PFNGLTEXPARAMETERXOESPROC glext_glTexParameterxOES = NULL;
PFNGLTEXPARAMETERXVOESPROC glext_glTexParameterxvOES = NULL;
PFNGLTEXRENDERBUFFERNVPROC glext_glTexRenderbufferNV = NULL;
PFNGLTEXSTORAGE1DPROC glext_glTexStorage1D = NULL;
PFNGLTEXSTORAGE1DEXTPROC glext_glTexStorage1DEXT = NULL;
PFNGLTEXSTORAGE2DPROC glext_glTexStorage2D = NULL;
PFNGLTEXSTORAGE2DEXTPROC glext_glTexStorage2DEXT = NULL;
PFNGLTEXSTORAGE2DMULTISAMPLEPROC glext_glTexStorage2DMultisample = NULL;
PFNGLTEXSTORAGE3DPROC glext_glTexStorage3D = NULL;
PFNGLTEXSTORAGE3DEXTPROC glext_glTexStorage3DEXT = NULL;
PFNGLTEXSTORAGE3DMULTISAMPLEPROC glext_glTexStorage3DMultisample = NULL;
PFNGLTEXSTORAGEMEM1DEXTPROC glext_glTexStorageMem1DEXT = NULL;
PFNGLTEXSTORAGEMEM2DEXTPROC glext_glTexStorageMem2DEXT = NULL;
PFNGLTEXSTORAGEMEM2DMULTISAMPLEEXTPROC glext_glTexStorageMem2DMultisampleEXT
  = NULL;
PFNGLTEXSTORAGEMEM3DEXTPROC glext_glTexStorageMem3DEXT = NULL;
PFNGLTEXSTORAGEMEM3DMULTISAMPLEEXTPROC glext_glTexStorageMem3DMultisampleEXT
  = NULL;
PFNGLTEXSTORAGESPARSEAMDPROC glext_glTexStorageSparseAMD = NULL;
PFNGLTEXSUBIMAGE1DPROC glext_glTexSubImage1D = NULL;
PFNGLTEXSUBIMAGE1DEXTPROC glext_glTexSubImage1DEXT = NULL;
PFNGLTEXSUBIMAGE2DPROC glext_glTexSubImage2D = NULL;
PFNGLTEXSUBIMAGE2DEXTPROC glext_glTexSubImage2DEXT = NULL;
PFNGLTEXSUBIMAGE3DPROC glext_glTexSubImage3D = NULL;
PFNGLTEXSUBIMAGE3DEXTPROC glext_glTexSubImage3DEXT = NULL;
PFNGLTEXSUBIMAGE4DSGISPROC glext_glTexSubImage4DSGIS = NULL;
PFNGLTEXTUREATTACHMEMORYNVPROC glext_glTextureAttachMemoryNV = NULL;
PFNGLTEXTUREBARRIERPROC glext_glTextureBarrier = NULL;
PFNGLTEXTUREBARRIERNVPROC glext_glTextureBarrierNV = NULL;
PFNGLTEXTUREBUFFERPROC glext_glTextureBuffer = NULL;
PFNGLTEXTUREBUFFEREXTPROC glext_glTextureBufferEXT = NULL;
PFNGLTEXTUREBUFFERRANGEPROC glext_glTextureBufferRange = NULL;
PFNGLTEXTUREBUFFERRANGEEXTPROC glext_glTextureBufferRangeEXT = NULL;
PFNGLTEXTURECOLORMASKSGISPROC glext_glTextureColorMaskSGIS = NULL;
PFNGLTEXTUREIMAGE1DEXTPROC glext_glTextureImage1DEXT = NULL;
PFNGLTEXTUREIMAGE2DEXTPROC glext_glTextureImage2DEXT = NULL;
PFNGLTEXTUREIMAGE2DMULTISAMPLECOVERAGENVPROC
glext_glTextureImage2DMultisampleCoverageNV = NULL;
PFNGLTEXTUREIMAGE2DMULTISAMPLENVPROC glext_glTextureImage2DMultisampleNV
  = NULL;
PFNGLTEXTUREIMAGE3DEXTPROC glext_glTextureImage3DEXT = NULL;
PFNGLTEXTUREIMAGE3DMULTISAMPLECOVERAGENVPROC
glext_glTextureImage3DMultisampleCoverageNV = NULL;
PFNGLTEXTUREIMAGE3DMULTISAMPLENVPROC glext_glTextureImage3DMultisampleNV
  = NULL;
PFNGLTEXTURELIGHTEXTPROC glext_glTextureLightEXT = NULL;
PFNGLTEXTUREMATERIALEXTPROC glext_glTextureMaterialEXT = NULL;
PFNGLTEXTURENORMALEXTPROC glext_glTextureNormalEXT = NULL;
PFNGLTEXTUREPAGECOMMITMENTEXTPROC glext_glTexturePageCommitmentEXT = NULL;
PFNGLTEXTUREPAGECOMMITMENTMEMNVPROC glext_glTexturePageCommitmentMemNV = NULL;
PFNGLTEXTUREPARAMETERIIVPROC glext_glTextureParameterIiv = NULL;
PFNGLTEXTUREPARAMETERIIVEXTPROC glext_glTextureParameterIivEXT = NULL;
PFNGLTEXTUREPARAMETERIUIVPROC glext_glTextureParameterIuiv = NULL;
PFNGLTEXTUREPARAMETERIUIVEXTPROC glext_glTextureParameterIuivEXT = NULL;
PFNGLTEXTUREPARAMETERFPROC glext_glTextureParameterf = NULL;
PFNGLTEXTUREPARAMETERFEXTPROC glext_glTextureParameterfEXT = NULL;
PFNGLTEXTUREPARAMETERFVPROC glext_glTextureParameterfv = NULL;
PFNGLTEXTUREPARAMETERFVEXTPROC glext_glTextureParameterfvEXT = NULL;
PFNGLTEXTUREPARAMETERIPROC glext_glTextureParameteri = NULL;
PFNGLTEXTUREPARAMETERIEXTPROC glext_glTextureParameteriEXT = NULL;
PFNGLTEXTUREPARAMETERIVPROC glext_glTextureParameteriv = NULL;
PFNGLTEXTUREPARAMETERIVEXTPROC glext_glTextureParameterivEXT = NULL;
PFNGLTEXTURERANGEAPPLEPROC glext_glTextureRangeAPPLE = NULL;
PFNGLTEXTURERENDERBUFFEREXTPROC glext_glTextureRenderbufferEXT = NULL;
PFNGLTEXTURESTORAGE1DPROC glext_glTextureStorage1D = NULL;
PFNGLTEXTURESTORAGE1DEXTPROC glext_glTextureStorage1DEXT = NULL;
PFNGLTEXTURESTORAGE2DPROC glext_glTextureStorage2D = NULL;
PFNGLTEXTURESTORAGE2DEXTPROC glext_glTextureStorage2DEXT = NULL;
PFNGLTEXTURESTORAGE2DMULTISAMPLEPROC glext_glTextureStorage2DMultisample
  = NULL;
PFNGLTEXTURESTORAGE2DMULTISAMPLEEXTPROC glext_glTextureStorage2DMultisampleEXT
  = NULL;
PFNGLTEXTURESTORAGE3DPROC glext_glTextureStorage3D = NULL;
PFNGLTEXTURESTORAGE3DEXTPROC glext_glTextureStorage3DEXT = NULL;
PFNGLTEXTURESTORAGE3DMULTISAMPLEPROC glext_glTextureStorage3DMultisample
  = NULL;
PFNGLTEXTURESTORAGE3DMULTISAMPLEEXTPROC glext_glTextureStorage3DMultisampleEXT
  = NULL;
PFNGLTEXTURESTORAGEMEM1DEXTPROC glext_glTextureStorageMem1DEXT = NULL;
PFNGLTEXTURESTORAGEMEM2DEXTPROC glext_glTextureStorageMem2DEXT = NULL;
PFNGLTEXTURESTORAGEMEM2DMULTISAMPLEEXTPROC
glext_glTextureStorageMem2DMultisampleEXT = NULL;
PFNGLTEXTURESTORAGEMEM3DEXTPROC glext_glTextureStorageMem3DEXT = NULL;
PFNGLTEXTURESTORAGEMEM3DMULTISAMPLEEXTPROC
glext_glTextureStorageMem3DMultisampleEXT = NULL;
PFNGLTEXTURESTORAGESPARSEAMDPROC glext_glTextureStorageSparseAMD = NULL;
PFNGLTEXTURESUBIMAGE1DPROC glext_glTextureSubImage1D = NULL;
PFNGLTEXTURESUBIMAGE1DEXTPROC glext_glTextureSubImage1DEXT = NULL;
PFNGLTEXTURESUBIMAGE2DPROC glext_glTextureSubImage2D = NULL;
PFNGLTEXTURESUBIMAGE2DEXTPROC glext_glTextureSubImage2DEXT = NULL;
PFNGLTEXTURESUBIMAGE3DPROC glext_glTextureSubImage3D = NULL;
PFNGLTEXTURESUBIMAGE3DEXTPROC glext_glTextureSubImage3DEXT = NULL;
PFNGLTEXTUREVIEWPROC glext_glTextureView = NULL;
PFNGLTRACKMATRIXNVPROC glext_glTrackMatrixNV = NULL;
PFNGLTRANSFORMFEEDBACKATTRIBSNVPROC glext_glTransformFeedbackAttribsNV = NULL;
PFNGLTRANSFORMFEEDBACKBUFFERBASEPROC glext_glTransformFeedbackBufferBase
  = NULL;
PFNGLTRANSFORMFEEDBACKBUFFERRANGEPROC glext_glTransformFeedbackBufferRange
  = NULL;
PFNGLTRANSFORMFEEDBACKSTREAMATTRIBSNVPROC
glext_glTransformFeedbackStreamAttribsNV = NULL;
PFNGLTRANSFORMFEEDBACKVARYINGSPROC glext_glTransformFeedbackVaryings = NULL;
PFNGLTRANSFORMFEEDBACKVARYINGSEXTPROC glext_glTransformFeedbackVaryingsEXT
  = NULL;
PFNGLTRANSFORMFEEDBACKVARYINGSNVPROC glext_glTransformFeedbackVaryingsNV
  = NULL;
PFNGLTRANSFORMPATHNVPROC glext_glTransformPathNV = NULL;
PFNGLTRANSLATEXOESPROC glext_glTranslatexOES = NULL;
PFNGLUNIFORM1DPROC glext_glUniform1d = NULL;
PFNGLUNIFORM1DVPROC glext_glUniform1dv = NULL;
PFNGLUNIFORM1FPROC glext_glUniform1f = NULL;
PFNGLUNIFORM1FARBPROC glext_glUniform1fARB = NULL;
PFNGLUNIFORM1FVPROC glext_glUniform1fv = NULL;
PFNGLUNIFORM1FVARBPROC glext_glUniform1fvARB = NULL;
PFNGLUNIFORM1IPROC glext_glUniform1i = NULL;
PFNGLUNIFORM1I64ARBPROC glext_glUniform1i64ARB = NULL;
PFNGLUNIFORM1I64NVPROC glext_glUniform1i64NV = NULL;
PFNGLUNIFORM1I64VARBPROC glext_glUniform1i64vARB = NULL;
PFNGLUNIFORM1I64VNVPROC glext_glUniform1i64vNV = NULL;
PFNGLUNIFORM1IARBPROC glext_glUniform1iARB = NULL;
PFNGLUNIFORM1IVPROC glext_glUniform1iv = NULL;
PFNGLUNIFORM1IVARBPROC glext_glUniform1ivARB = NULL;
PFNGLUNIFORM1UIPROC glext_glUniform1ui = NULL;
PFNGLUNIFORM1UI64ARBPROC glext_glUniform1ui64ARB = NULL;
PFNGLUNIFORM1UI64NVPROC glext_glUniform1ui64NV = NULL;
PFNGLUNIFORM1UI64VARBPROC glext_glUniform1ui64vARB = NULL;
PFNGLUNIFORM1UI64VNVPROC glext_glUniform1ui64vNV = NULL;
PFNGLUNIFORM1UIEXTPROC glext_glUniform1uiEXT = NULL;
PFNGLUNIFORM1UIVPROC glext_glUniform1uiv = NULL;
PFNGLUNIFORM1UIVEXTPROC glext_glUniform1uivEXT = NULL;
PFNGLUNIFORM2DPROC glext_glUniform2d = NULL;
PFNGLUNIFORM2DVPROC glext_glUniform2dv = NULL;
PFNGLUNIFORM2FPROC glext_glUniform2f = NULL;
PFNGLUNIFORM2FARBPROC glext_glUniform2fARB = NULL;
PFNGLUNIFORM2FVPROC glext_glUniform2fv = NULL;
PFNGLUNIFORM2FVARBPROC glext_glUniform2fvARB = NULL;
PFNGLUNIFORM2IPROC glext_glUniform2i = NULL;
PFNGLUNIFORM2I64ARBPROC glext_glUniform2i64ARB = NULL;
PFNGLUNIFORM2I64NVPROC glext_glUniform2i64NV = NULL;
PFNGLUNIFORM2I64VARBPROC glext_glUniform2i64vARB = NULL;
PFNGLUNIFORM2I64VNVPROC glext_glUniform2i64vNV = NULL;
PFNGLUNIFORM2IARBPROC glext_glUniform2iARB = NULL;
PFNGLUNIFORM2IVPROC glext_glUniform2iv = NULL;
PFNGLUNIFORM2IVARBPROC glext_glUniform2ivARB = NULL;
PFNGLUNIFORM2UIPROC glext_glUniform2ui = NULL;
PFNGLUNIFORM2UI64ARBPROC glext_glUniform2ui64ARB = NULL;
PFNGLUNIFORM2UI64NVPROC glext_glUniform2ui64NV = NULL;
PFNGLUNIFORM2UI64VARBPROC glext_glUniform2ui64vARB = NULL;
PFNGLUNIFORM2UI64VNVPROC glext_glUniform2ui64vNV = NULL;
PFNGLUNIFORM2UIEXTPROC glext_glUniform2uiEXT = NULL;
PFNGLUNIFORM2UIVPROC glext_glUniform2uiv = NULL;
PFNGLUNIFORM2UIVEXTPROC glext_glUniform2uivEXT = NULL;
PFNGLUNIFORM3DPROC glext_glUniform3d = NULL;
PFNGLUNIFORM3DVPROC glext_glUniform3dv = NULL;
PFNGLUNIFORM3FPROC glext_glUniform3f = NULL;
PFNGLUNIFORM3FARBPROC glext_glUniform3fARB = NULL;
PFNGLUNIFORM3FVPROC glext_glUniform3fv = NULL;
PFNGLUNIFORM3FVARBPROC glext_glUniform3fvARB = NULL;
PFNGLUNIFORM3IPROC glext_glUniform3i = NULL;
PFNGLUNIFORM3I64ARBPROC glext_glUniform3i64ARB = NULL;
PFNGLUNIFORM3I64NVPROC glext_glUniform3i64NV = NULL;
PFNGLUNIFORM3I64VARBPROC glext_glUniform3i64vARB = NULL;
PFNGLUNIFORM3I64VNVPROC glext_glUniform3i64vNV = NULL;
PFNGLUNIFORM3IARBPROC glext_glUniform3iARB = NULL;
PFNGLUNIFORM3IVPROC glext_glUniform3iv = NULL;
PFNGLUNIFORM3IVARBPROC glext_glUniform3ivARB = NULL;
PFNGLUNIFORM3UIPROC glext_glUniform3ui = NULL;
PFNGLUNIFORM3UI64ARBPROC glext_glUniform3ui64ARB = NULL;
PFNGLUNIFORM3UI64NVPROC glext_glUniform3ui64NV = NULL;
PFNGLUNIFORM3UI64VARBPROC glext_glUniform3ui64vARB = NULL;
PFNGLUNIFORM3UI64VNVPROC glext_glUniform3ui64vNV = NULL;
PFNGLUNIFORM3UIEXTPROC glext_glUniform3uiEXT = NULL;
PFNGLUNIFORM3UIVPROC glext_glUniform3uiv = NULL;
PFNGLUNIFORM3UIVEXTPROC glext_glUniform3uivEXT = NULL;
PFNGLUNIFORM4DPROC glext_glUniform4d = NULL;
PFNGLUNIFORM4DVPROC glext_glUniform4dv = NULL;
PFNGLUNIFORM4FPROC glext_glUniform4f = NULL;
PFNGLUNIFORM4FARBPROC glext_glUniform4fARB = NULL;
PFNGLUNIFORM4FVPROC glext_glUniform4fv = NULL;
PFNGLUNIFORM4FVARBPROC glext_glUniform4fvARB = NULL;
PFNGLUNIFORM4IPROC glext_glUniform4i = NULL;
PFNGLUNIFORM4I64ARBPROC glext_glUniform4i64ARB = NULL;
PFNGLUNIFORM4I64NVPROC glext_glUniform4i64NV = NULL;
PFNGLUNIFORM4I64VARBPROC glext_glUniform4i64vARB = NULL;
PFNGLUNIFORM4I64VNVPROC glext_glUniform4i64vNV = NULL;
PFNGLUNIFORM4IARBPROC glext_glUniform4iARB = NULL;
PFNGLUNIFORM4IVPROC glext_glUniform4iv = NULL;
PFNGLUNIFORM4IVARBPROC glext_glUniform4ivARB = NULL;
PFNGLUNIFORM4UIPROC glext_glUniform4ui = NULL;
PFNGLUNIFORM4UI64ARBPROC glext_glUniform4ui64ARB = NULL;
PFNGLUNIFORM4UI64NVPROC glext_glUniform4ui64NV = NULL;
PFNGLUNIFORM4UI64VARBPROC glext_glUniform4ui64vARB = NULL;
PFNGLUNIFORM4UI64VNVPROC glext_glUniform4ui64vNV = NULL;
PFNGLUNIFORM4UIEXTPROC glext_glUniform4uiEXT = NULL;
PFNGLUNIFORM4UIVPROC glext_glUniform4uiv = NULL;
PFNGLUNIFORM4UIVEXTPROC glext_glUniform4uivEXT = NULL;
PFNGLUNIFORMBLOCKBINDINGPROC glext_glUniformBlockBinding = NULL;
PFNGLUNIFORMBUFFEREXTPROC glext_glUniformBufferEXT = NULL;
PFNGLUNIFORMHANDLEUI64ARBPROC glext_glUniformHandleui64ARB = NULL;
PFNGLUNIFORMHANDLEUI64NVPROC glext_glUniformHandleui64NV = NULL;
PFNGLUNIFORMHANDLEUI64VARBPROC glext_glUniformHandleui64vARB = NULL;
PFNGLUNIFORMHANDLEUI64VNVPROC glext_glUniformHandleui64vNV = NULL;
PFNGLUNIFORMMATRIX2DVPROC glext_glUniformMatrix2dv = NULL;
PFNGLUNIFORMMATRIX2FVPROC glext_glUniformMatrix2fv = NULL;
PFNGLUNIFORMMATRIX2FVARBPROC glext_glUniformMatrix2fvARB = NULL;
PFNGLUNIFORMMATRIX2X3DVPROC glext_glUniformMatrix2x3dv = NULL;
PFNGLUNIFORMMATRIX2X3FVPROC glext_glUniformMatrix2x3fv = NULL;
PFNGLUNIFORMMATRIX2X4DVPROC glext_glUniformMatrix2x4dv = NULL;
PFNGLUNIFORMMATRIX2X4FVPROC glext_glUniformMatrix2x4fv = NULL;
PFNGLUNIFORMMATRIX3DVPROC glext_glUniformMatrix3dv = NULL;
PFNGLUNIFORMMATRIX3FVPROC glext_glUniformMatrix3fv = NULL;
PFNGLUNIFORMMATRIX3FVARBPROC glext_glUniformMatrix3fvARB = NULL;
PFNGLUNIFORMMATRIX3X2DVPROC glext_glUniformMatrix3x2dv = NULL;
PFNGLUNIFORMMATRIX3X2FVPROC glext_glUniformMatrix3x2fv = NULL;
PFNGLUNIFORMMATRIX3X4DVPROC glext_glUniformMatrix3x4dv = NULL;
PFNGLUNIFORMMATRIX3X4FVPROC glext_glUniformMatrix3x4fv = NULL;
PFNGLUNIFORMMATRIX4DVPROC glext_glUniformMatrix4dv = NULL;
PFNGLUNIFORMMATRIX4FVPROC glext_glUniformMatrix4fv = NULL;
PFNGLUNIFORMMATRIX4FVARBPROC glext_glUniformMatrix4fvARB = NULL;
PFNGLUNIFORMMATRIX4X2DVPROC glext_glUniformMatrix4x2dv = NULL;
PFNGLUNIFORMMATRIX4X2FVPROC glext_glUniformMatrix4x2fv = NULL;
PFNGLUNIFORMMATRIX4X3DVPROC glext_glUniformMatrix4x3dv = NULL;
PFNGLUNIFORMMATRIX4X3FVPROC glext_glUniformMatrix4x3fv = NULL;
PFNGLUNIFORMSUBROUTINESUIVPROC glext_glUniformSubroutinesuiv = NULL;
PFNGLUNIFORMUI64NVPROC glext_glUniformui64NV = NULL;
PFNGLUNIFORMUI64VNVPROC glext_glUniformui64vNV = NULL;
PFNGLUNLOCKARRAYSEXTPROC glext_glUnlockArraysEXT = NULL;
PFNGLUNMAPBUFFERPROC glext_glUnmapBuffer = NULL;
PFNGLUNMAPBUFFERARBPROC glext_glUnmapBufferARB = NULL;
PFNGLUNMAPNAMEDBUFFERPROC glext_glUnmapNamedBuffer = NULL;
PFNGLUNMAPNAMEDBUFFEREXTPROC glext_glUnmapNamedBufferEXT = NULL;
PFNGLUNMAPOBJECTBUFFERATIPROC glext_glUnmapObjectBufferATI = NULL;
PFNGLUNMAPTEXTURE2DINTELPROC glext_glUnmapTexture2DINTEL = NULL;
PFNGLUPDATEOBJECTBUFFERATIPROC glext_glUpdateObjectBufferATI = NULL;
PFNGLUPLOADGPUMASKNVXPROC glext_glUploadGpuMaskNVX = NULL;
PFNGLUSEPROGRAMPROC glext_glUseProgram = NULL;
PFNGLUSEPROGRAMOBJECTARBPROC glext_glUseProgramObjectARB = NULL;
PFNGLUSEPROGRAMSTAGESPROC glext_glUseProgramStages = NULL;
PFNGLUSESHADERPROGRAMEXTPROC glext_glUseShaderProgramEXT = NULL;
PFNGLVDPAUFININVPROC glext_glVDPAUFiniNV = NULL;
PFNGLVDPAUGETSURFACEIVNVPROC glext_glVDPAUGetSurfaceivNV = NULL;
PFNGLVDPAUINITNVPROC glext_glVDPAUInitNV = NULL;
PFNGLVDPAUISSURFACENVPROC glext_glVDPAUIsSurfaceNV = NULL;
PFNGLVDPAUMAPSURFACESNVPROC glext_glVDPAUMapSurfacesNV = NULL;
PFNGLVDPAUREGISTEROUTPUTSURFACENVPROC glext_glVDPAURegisterOutputSurfaceNV
  = NULL;
PFNGLVDPAUREGISTERVIDEOSURFACENVPROC glext_glVDPAURegisterVideoSurfaceNV
  = NULL;
PFNGLVDPAUREGISTERVIDEOSURFACEWITHPICTURESTRUCTURENVPROC
glext_glVDPAURegisterVideoSurfaceWithPictureStructureNV = NULL;
PFNGLVDPAUSURFACEACCESSNVPROC glext_glVDPAUSurfaceAccessNV = NULL;
PFNGLVDPAUUNMAPSURFACESNVPROC glext_glVDPAUUnmapSurfacesNV = NULL;
PFNGLVDPAUUNREGISTERSURFACENVPROC glext_glVDPAUUnregisterSurfaceNV = NULL;
PFNGLVALIDATEPROGRAMPROC glext_glValidateProgram = NULL;
PFNGLVALIDATEPROGRAMARBPROC glext_glValidateProgramARB = NULL;
PFNGLVALIDATEPROGRAMPIPELINEPROC glext_glValidateProgramPipeline = NULL;
PFNGLVARIANTARRAYOBJECTATIPROC glext_glVariantArrayObjectATI = NULL;
PFNGLVARIANTPOINTEREXTPROC glext_glVariantPointerEXT = NULL;
PFNGLVARIANTBVEXTPROC glext_glVariantbvEXT = NULL;
PFNGLVARIANTDVEXTPROC glext_glVariantdvEXT = NULL;
PFNGLVARIANTFVEXTPROC glext_glVariantfvEXT = NULL;
PFNGLVARIANTIVEXTPROC glext_glVariantivEXT = NULL;
PFNGLVARIANTSVEXTPROC glext_glVariantsvEXT = NULL;
PFNGLVARIANTUBVEXTPROC glext_glVariantubvEXT = NULL;
PFNGLVARIANTUIVEXTPROC glext_glVariantuivEXT = NULL;
PFNGLVARIANTUSVEXTPROC glext_glVariantusvEXT = NULL;
PFNGLVERTEX2BOESPROC glext_glVertex2bOES = NULL;
PFNGLVERTEX2BVOESPROC glext_glVertex2bvOES = NULL;
PFNGLVERTEX2HNVPROC glext_glVertex2hNV = NULL;
PFNGLVERTEX2HVNVPROC glext_glVertex2hvNV = NULL;
PFNGLVERTEX2XOESPROC glext_glVertex2xOES = NULL;
PFNGLVERTEX2XVOESPROC glext_glVertex2xvOES = NULL;
PFNGLVERTEX3BOESPROC glext_glVertex3bOES = NULL;
PFNGLVERTEX3BVOESPROC glext_glVertex3bvOES = NULL;
PFNGLVERTEX3HNVPROC glext_glVertex3hNV = NULL;
PFNGLVERTEX3HVNVPROC glext_glVertex3hvNV = NULL;
PFNGLVERTEX3XOESPROC glext_glVertex3xOES = NULL;
PFNGLVERTEX3XVOESPROC glext_glVertex3xvOES = NULL;
PFNGLVERTEX4BOESPROC glext_glVertex4bOES = NULL;
PFNGLVERTEX4BVOESPROC glext_glVertex4bvOES = NULL;
PFNGLVERTEX4HNVPROC glext_glVertex4hNV = NULL;
PFNGLVERTEX4HVNVPROC glext_glVertex4hvNV = NULL;
PFNGLVERTEX4XOESPROC glext_glVertex4xOES = NULL;
PFNGLVERTEX4XVOESPROC glext_glVertex4xvOES = NULL;
PFNGLVERTEXARRAYATTRIBBINDINGPROC glext_glVertexArrayAttribBinding = NULL;
PFNGLVERTEXARRAYATTRIBFORMATPROC glext_glVertexArrayAttribFormat = NULL;
PFNGLVERTEXARRAYATTRIBIFORMATPROC glext_glVertexArrayAttribIFormat = NULL;
PFNGLVERTEXARRAYATTRIBLFORMATPROC glext_glVertexArrayAttribLFormat = NULL;
PFNGLVERTEXARRAYBINDVERTEXBUFFEREXTPROC glext_glVertexArrayBindVertexBufferEXT
  = NULL;
PFNGLVERTEXARRAYBINDINGDIVISORPROC glext_glVertexArrayBindingDivisor = NULL;
PFNGLVERTEXARRAYCOLOROFFSETEXTPROC glext_glVertexArrayColorOffsetEXT = NULL;
PFNGLVERTEXARRAYEDGEFLAGOFFSETEXTPROC glext_glVertexArrayEdgeFlagOffsetEXT
  = NULL;
PFNGLVERTEXARRAYELEMENTBUFFERPROC glext_glVertexArrayElementBuffer = NULL;
PFNGLVERTEXARRAYFOGCOORDOFFSETEXTPROC glext_glVertexArrayFogCoordOffsetEXT
  = NULL;
PFNGLVERTEXARRAYINDEXOFFSETEXTPROC glext_glVertexArrayIndexOffsetEXT = NULL;
PFNGLVERTEXARRAYMULTITEXCOORDOFFSETEXTPROC
glext_glVertexArrayMultiTexCoordOffsetEXT = NULL;
PFNGLVERTEXARRAYNORMALOFFSETEXTPROC glext_glVertexArrayNormalOffsetEXT = NULL;
PFNGLVERTEXARRAYPARAMETERIAPPLEPROC glext_glVertexArrayParameteriAPPLE = NULL;
PFNGLVERTEXARRAYRANGEAPPLEPROC glext_glVertexArrayRangeAPPLE = NULL;
PFNGLVERTEXARRAYRANGENVPROC glext_glVertexArrayRangeNV = NULL;
PFNGLVERTEXARRAYSECONDARYCOLOROFFSETEXTPROC
glext_glVertexArraySecondaryColorOffsetEXT = NULL;
PFNGLVERTEXARRAYTEXCOORDOFFSETEXTPROC glext_glVertexArrayTexCoordOffsetEXT
  = NULL;
PFNGLVERTEXARRAYVERTEXATTRIBBINDINGEXTPROC
glext_glVertexArrayVertexAttribBindingEXT = NULL;
PFNGLVERTEXARRAYVERTEXATTRIBDIVISOREXTPROC
glext_glVertexArrayVertexAttribDivisorEXT = NULL;
PFNGLVERTEXARRAYVERTEXATTRIBFORMATEXTPROC
glext_glVertexArrayVertexAttribFormatEXT = NULL;
PFNGLVERTEXARRAYVERTEXATTRIBIFORMATEXTPROC
glext_glVertexArrayVertexAttribIFormatEXT = NULL;
PFNGLVERTEXARRAYVERTEXATTRIBIOFFSETEXTPROC
glext_glVertexArrayVertexAttribIOffsetEXT = NULL;
PFNGLVERTEXARRAYVERTEXATTRIBLFORMATEXTPROC
glext_glVertexArrayVertexAttribLFormatEXT = NULL;
PFNGLVERTEXARRAYVERTEXATTRIBLOFFSETEXTPROC
glext_glVertexArrayVertexAttribLOffsetEXT = NULL;
PFNGLVERTEXARRAYVERTEXATTRIBOFFSETEXTPROC
glext_glVertexArrayVertexAttribOffsetEXT = NULL;
PFNGLVERTEXARRAYVERTEXBINDINGDIVISOREXTPROC
glext_glVertexArrayVertexBindingDivisorEXT = NULL;
PFNGLVERTEXARRAYVERTEXBUFFERPROC glext_glVertexArrayVertexBuffer = NULL;
PFNGLVERTEXARRAYVERTEXBUFFERSPROC glext_glVertexArrayVertexBuffers = NULL;
PFNGLVERTEXARRAYVERTEXOFFSETEXTPROC glext_glVertexArrayVertexOffsetEXT = NULL;
PFNGLVERTEXATTRIB1DPROC glext_glVertexAttrib1d = NULL;
PFNGLVERTEXATTRIB1DARBPROC glext_glVertexAttrib1dARB = NULL;
PFNGLVERTEXATTRIB1DNVPROC glext_glVertexAttrib1dNV = NULL;
PFNGLVERTEXATTRIB1DVPROC glext_glVertexAttrib1dv = NULL;
PFNGLVERTEXATTRIB1DVARBPROC glext_glVertexAttrib1dvARB = NULL;
PFNGLVERTEXATTRIB1DVNVPROC glext_glVertexAttrib1dvNV = NULL;
PFNGLVERTEXATTRIB1FPROC glext_glVertexAttrib1f = NULL;
PFNGLVERTEXATTRIB1FARBPROC glext_glVertexAttrib1fARB = NULL;
PFNGLVERTEXATTRIB1FNVPROC glext_glVertexAttrib1fNV = NULL;
PFNGLVERTEXATTRIB1FVPROC glext_glVertexAttrib1fv = NULL;
PFNGLVERTEXATTRIB1FVARBPROC glext_glVertexAttrib1fvARB = NULL;
PFNGLVERTEXATTRIB1FVNVPROC glext_glVertexAttrib1fvNV = NULL;
PFNGLVERTEXATTRIB1HNVPROC glext_glVertexAttrib1hNV = NULL;
PFNGLVERTEXATTRIB1HVNVPROC glext_glVertexAttrib1hvNV = NULL;
PFNGLVERTEXATTRIB1SPROC glext_glVertexAttrib1s = NULL;
PFNGLVERTEXATTRIB1SARBPROC glext_glVertexAttrib1sARB = NULL;
PFNGLVERTEXATTRIB1SNVPROC glext_glVertexAttrib1sNV = NULL;
PFNGLVERTEXATTRIB1SVPROC glext_glVertexAttrib1sv = NULL;
PFNGLVERTEXATTRIB1SVARBPROC glext_glVertexAttrib1svARB = NULL;
PFNGLVERTEXATTRIB1SVNVPROC glext_glVertexAttrib1svNV = NULL;
PFNGLVERTEXATTRIB2DPROC glext_glVertexAttrib2d = NULL;
PFNGLVERTEXATTRIB2DARBPROC glext_glVertexAttrib2dARB = NULL;
PFNGLVERTEXATTRIB2DNVPROC glext_glVertexAttrib2dNV = NULL;
PFNGLVERTEXATTRIB2DVPROC glext_glVertexAttrib2dv = NULL;
PFNGLVERTEXATTRIB2DVARBPROC glext_glVertexAttrib2dvARB = NULL;
PFNGLVERTEXATTRIB2DVNVPROC glext_glVertexAttrib2dvNV = NULL;
PFNGLVERTEXATTRIB2FPROC glext_glVertexAttrib2f = NULL;
PFNGLVERTEXATTRIB2FARBPROC glext_glVertexAttrib2fARB = NULL;
PFNGLVERTEXATTRIB2FNVPROC glext_glVertexAttrib2fNV = NULL;
PFNGLVERTEXATTRIB2FVPROC glext_glVertexAttrib2fv = NULL;
PFNGLVERTEXATTRIB2FVARBPROC glext_glVertexAttrib2fvARB = NULL;
PFNGLVERTEXATTRIB2FVNVPROC glext_glVertexAttrib2fvNV = NULL;
PFNGLVERTEXATTRIB2HNVPROC glext_glVertexAttrib2hNV = NULL;
PFNGLVERTEXATTRIB2HVNVPROC glext_glVertexAttrib2hvNV = NULL;
PFNGLVERTEXATTRIB2SPROC glext_glVertexAttrib2s = NULL;
PFNGLVERTEXATTRIB2SARBPROC glext_glVertexAttrib2sARB = NULL;
PFNGLVERTEXATTRIB2SNVPROC glext_glVertexAttrib2sNV = NULL;
PFNGLVERTEXATTRIB2SVPROC glext_glVertexAttrib2sv = NULL;
PFNGLVERTEXATTRIB2SVARBPROC glext_glVertexAttrib2svARB = NULL;
PFNGLVERTEXATTRIB2SVNVPROC glext_glVertexAttrib2svNV = NULL;
PFNGLVERTEXATTRIB3DPROC glext_glVertexAttrib3d = NULL;
PFNGLVERTEXATTRIB3DARBPROC glext_glVertexAttrib3dARB = NULL;
PFNGLVERTEXATTRIB3DNVPROC glext_glVertexAttrib3dNV = NULL;
PFNGLVERTEXATTRIB3DVPROC glext_glVertexAttrib3dv = NULL;
PFNGLVERTEXATTRIB3DVARBPROC glext_glVertexAttrib3dvARB = NULL;
PFNGLVERTEXATTRIB3DVNVPROC glext_glVertexAttrib3dvNV = NULL;
PFNGLVERTEXATTRIB3FPROC glext_glVertexAttrib3f = NULL;
PFNGLVERTEXATTRIB3FARBPROC glext_glVertexAttrib3fARB = NULL;
PFNGLVERTEXATTRIB3FNVPROC glext_glVertexAttrib3fNV = NULL;
PFNGLVERTEXATTRIB3FVPROC glext_glVertexAttrib3fv = NULL;
PFNGLVERTEXATTRIB3FVARBPROC glext_glVertexAttrib3fvARB = NULL;
PFNGLVERTEXATTRIB3FVNVPROC glext_glVertexAttrib3fvNV = NULL;
PFNGLVERTEXATTRIB3HNVPROC glext_glVertexAttrib3hNV = NULL;
PFNGLVERTEXATTRIB3HVNVPROC glext_glVertexAttrib3hvNV = NULL;
PFNGLVERTEXATTRIB3SPROC glext_glVertexAttrib3s = NULL;
PFNGLVERTEXATTRIB3SARBPROC glext_glVertexAttrib3sARB = NULL;
PFNGLVERTEXATTRIB3SNVPROC glext_glVertexAttrib3sNV = NULL;
PFNGLVERTEXATTRIB3SVPROC glext_glVertexAttrib3sv = NULL;
PFNGLVERTEXATTRIB3SVARBPROC glext_glVertexAttrib3svARB = NULL;
PFNGLVERTEXATTRIB3SVNVPROC glext_glVertexAttrib3svNV = NULL;
PFNGLVERTEXATTRIB4NBVPROC glext_glVertexAttrib4Nbv = NULL;
PFNGLVERTEXATTRIB4NBVARBPROC glext_glVertexAttrib4NbvARB = NULL;
PFNGLVERTEXATTRIB4NIVPROC glext_glVertexAttrib4Niv = NULL;
PFNGLVERTEXATTRIB4NIVARBPROC glext_glVertexAttrib4NivARB = NULL;
PFNGLVERTEXATTRIB4NSVPROC glext_glVertexAttrib4Nsv = NULL;
PFNGLVERTEXATTRIB4NSVARBPROC glext_glVertexAttrib4NsvARB = NULL;
PFNGLVERTEXATTRIB4NUBPROC glext_glVertexAttrib4Nub = NULL;
PFNGLVERTEXATTRIB4NUBARBPROC glext_glVertexAttrib4NubARB = NULL;
PFNGLVERTEXATTRIB4NUBVPROC glext_glVertexAttrib4Nubv = NULL;
PFNGLVERTEXATTRIB4NUBVARBPROC glext_glVertexAttrib4NubvARB = NULL;
PFNGLVERTEXATTRIB4NUIVPROC glext_glVertexAttrib4Nuiv = NULL;
PFNGLVERTEXATTRIB4NUIVARBPROC glext_glVertexAttrib4NuivARB = NULL;
PFNGLVERTEXATTRIB4NUSVPROC glext_glVertexAttrib4Nusv = NULL;
PFNGLVERTEXATTRIB4NUSVARBPROC glext_glVertexAttrib4NusvARB = NULL;
PFNGLVERTEXATTRIB4BVPROC glext_glVertexAttrib4bv = NULL;
PFNGLVERTEXATTRIB4BVARBPROC glext_glVertexAttrib4bvARB = NULL;
PFNGLVERTEXATTRIB4DPROC glext_glVertexAttrib4d = NULL;
PFNGLVERTEXATTRIB4DARBPROC glext_glVertexAttrib4dARB = NULL;
PFNGLVERTEXATTRIB4DNVPROC glext_glVertexAttrib4dNV = NULL;
PFNGLVERTEXATTRIB4DVPROC glext_glVertexAttrib4dv = NULL;
PFNGLVERTEXATTRIB4DVARBPROC glext_glVertexAttrib4dvARB = NULL;
PFNGLVERTEXATTRIB4DVNVPROC glext_glVertexAttrib4dvNV = NULL;
PFNGLVERTEXATTRIB4FPROC glext_glVertexAttrib4f = NULL;
PFNGLVERTEXATTRIB4FARBPROC glext_glVertexAttrib4fARB = NULL;
PFNGLVERTEXATTRIB4FNVPROC glext_glVertexAttrib4fNV = NULL;
PFNGLVERTEXATTRIB4FVPROC glext_glVertexAttrib4fv = NULL;
PFNGLVERTEXATTRIB4FVARBPROC glext_glVertexAttrib4fvARB = NULL;
PFNGLVERTEXATTRIB4FVNVPROC glext_glVertexAttrib4fvNV = NULL;
PFNGLVERTEXATTRIB4HNVPROC glext_glVertexAttrib4hNV = NULL;
PFNGLVERTEXATTRIB4HVNVPROC glext_glVertexAttrib4hvNV = NULL;
PFNGLVERTEXATTRIB4IVPROC glext_glVertexAttrib4iv = NULL;
PFNGLVERTEXATTRIB4IVARBPROC glext_glVertexAttrib4ivARB = NULL;
PFNGLVERTEXATTRIB4SPROC glext_glVertexAttrib4s = NULL;
PFNGLVERTEXATTRIB4SARBPROC glext_glVertexAttrib4sARB = NULL;
PFNGLVERTEXATTRIB4SNVPROC glext_glVertexAttrib4sNV = NULL;
PFNGLVERTEXATTRIB4SVPROC glext_glVertexAttrib4sv = NULL;
PFNGLVERTEXATTRIB4SVARBPROC glext_glVertexAttrib4svARB = NULL;
PFNGLVERTEXATTRIB4SVNVPROC glext_glVertexAttrib4svNV = NULL;
PFNGLVERTEXATTRIB4UBNVPROC glext_glVertexAttrib4ubNV = NULL;
PFNGLVERTEXATTRIB4UBVPROC glext_glVertexAttrib4ubv = NULL;
PFNGLVERTEXATTRIB4UBVARBPROC glext_glVertexAttrib4ubvARB = NULL;
PFNGLVERTEXATTRIB4UBVNVPROC glext_glVertexAttrib4ubvNV = NULL;
PFNGLVERTEXATTRIB4UIVPROC glext_glVertexAttrib4uiv = NULL;
PFNGLVERTEXATTRIB4UIVARBPROC glext_glVertexAttrib4uivARB = NULL;
PFNGLVERTEXATTRIB4USVPROC glext_glVertexAttrib4usv = NULL;
PFNGLVERTEXATTRIB4USVARBPROC glext_glVertexAttrib4usvARB = NULL;
PFNGLVERTEXATTRIBARRAYOBJECTATIPROC glext_glVertexAttribArrayObjectATI = NULL;
PFNGLVERTEXATTRIBBINDINGPROC glext_glVertexAttribBinding = NULL;
PFNGLVERTEXATTRIBDIVISORPROC glext_glVertexAttribDivisor = NULL;
PFNGLVERTEXATTRIBDIVISORARBPROC glext_glVertexAttribDivisorARB = NULL;
PFNGLVERTEXATTRIBFORMATPROC glext_glVertexAttribFormat = NULL;
PFNGLVERTEXATTRIBFORMATNVPROC glext_glVertexAttribFormatNV = NULL;
PFNGLVERTEXATTRIBI1IPROC glext_glVertexAttribI1i = NULL;
PFNGLVERTEXATTRIBI1IEXTPROC glext_glVertexAttribI1iEXT = NULL;
PFNGLVERTEXATTRIBI1IVPROC glext_glVertexAttribI1iv = NULL;
PFNGLVERTEXATTRIBI1IVEXTPROC glext_glVertexAttribI1ivEXT = NULL;
PFNGLVERTEXATTRIBI1UIPROC glext_glVertexAttribI1ui = NULL;
PFNGLVERTEXATTRIBI1UIEXTPROC glext_glVertexAttribI1uiEXT = NULL;
PFNGLVERTEXATTRIBI1UIVPROC glext_glVertexAttribI1uiv = NULL;
PFNGLVERTEXATTRIBI1UIVEXTPROC glext_glVertexAttribI1uivEXT = NULL;
PFNGLVERTEXATTRIBI2IPROC glext_glVertexAttribI2i = NULL;
PFNGLVERTEXATTRIBI2IEXTPROC glext_glVertexAttribI2iEXT = NULL;
PFNGLVERTEXATTRIBI2IVPROC glext_glVertexAttribI2iv = NULL;
PFNGLVERTEXATTRIBI2IVEXTPROC glext_glVertexAttribI2ivEXT = NULL;
PFNGLVERTEXATTRIBI2UIPROC glext_glVertexAttribI2ui = NULL;
PFNGLVERTEXATTRIBI2UIEXTPROC glext_glVertexAttribI2uiEXT = NULL;
PFNGLVERTEXATTRIBI2UIVPROC glext_glVertexAttribI2uiv = NULL;
PFNGLVERTEXATTRIBI2UIVEXTPROC glext_glVertexAttribI2uivEXT = NULL;
PFNGLVERTEXATTRIBI3IPROC glext_glVertexAttribI3i = NULL;
PFNGLVERTEXATTRIBI3IEXTPROC glext_glVertexAttribI3iEXT = NULL;
PFNGLVERTEXATTRIBI3IVPROC glext_glVertexAttribI3iv = NULL;
PFNGLVERTEXATTRIBI3IVEXTPROC glext_glVertexAttribI3ivEXT = NULL;
PFNGLVERTEXATTRIBI3UIPROC glext_glVertexAttribI3ui = NULL;
PFNGLVERTEXATTRIBI3UIEXTPROC glext_glVertexAttribI3uiEXT = NULL;
PFNGLVERTEXATTRIBI3UIVPROC glext_glVertexAttribI3uiv = NULL;
PFNGLVERTEXATTRIBI3UIVEXTPROC glext_glVertexAttribI3uivEXT = NULL;
PFNGLVERTEXATTRIBI4BVPROC glext_glVertexAttribI4bv = NULL;
PFNGLVERTEXATTRIBI4BVEXTPROC glext_glVertexAttribI4bvEXT = NULL;
PFNGLVERTEXATTRIBI4IPROC glext_glVertexAttribI4i = NULL;
PFNGLVERTEXATTRIBI4IEXTPROC glext_glVertexAttribI4iEXT = NULL;
PFNGLVERTEXATTRIBI4IVPROC glext_glVertexAttribI4iv = NULL;
PFNGLVERTEXATTRIBI4IVEXTPROC glext_glVertexAttribI4ivEXT = NULL;
PFNGLVERTEXATTRIBI4SVPROC glext_glVertexAttribI4sv = NULL;
PFNGLVERTEXATTRIBI4SVEXTPROC glext_glVertexAttribI4svEXT = NULL;
PFNGLVERTEXATTRIBI4UBVPROC glext_glVertexAttribI4ubv = NULL;
PFNGLVERTEXATTRIBI4UBVEXTPROC glext_glVertexAttribI4ubvEXT = NULL;
PFNGLVERTEXATTRIBI4UIPROC glext_glVertexAttribI4ui = NULL;
PFNGLVERTEXATTRIBI4UIEXTPROC glext_glVertexAttribI4uiEXT = NULL;
PFNGLVERTEXATTRIBI4UIVPROC glext_glVertexAttribI4uiv = NULL;
PFNGLVERTEXATTRIBI4UIVEXTPROC glext_glVertexAttribI4uivEXT = NULL;
PFNGLVERTEXATTRIBI4USVPROC glext_glVertexAttribI4usv = NULL;
PFNGLVERTEXATTRIBI4USVEXTPROC glext_glVertexAttribI4usvEXT = NULL;
PFNGLVERTEXATTRIBIFORMATPROC glext_glVertexAttribIFormat = NULL;
PFNGLVERTEXATTRIBIFORMATNVPROC glext_glVertexAttribIFormatNV = NULL;
PFNGLVERTEXATTRIBIPOINTERPROC glext_glVertexAttribIPointer = NULL;
PFNGLVERTEXATTRIBIPOINTEREXTPROC glext_glVertexAttribIPointerEXT = NULL;
PFNGLVERTEXATTRIBL1DPROC glext_glVertexAttribL1d = NULL;
PFNGLVERTEXATTRIBL1DEXTPROC glext_glVertexAttribL1dEXT = NULL;
PFNGLVERTEXATTRIBL1DVPROC glext_glVertexAttribL1dv = NULL;
PFNGLVERTEXATTRIBL1DVEXTPROC glext_glVertexAttribL1dvEXT = NULL;
PFNGLVERTEXATTRIBL1I64NVPROC glext_glVertexAttribL1i64NV = NULL;
PFNGLVERTEXATTRIBL1I64VNVPROC glext_glVertexAttribL1i64vNV = NULL;
PFNGLVERTEXATTRIBL1UI64ARBPROC glext_glVertexAttribL1ui64ARB = NULL;
PFNGLVERTEXATTRIBL1UI64NVPROC glext_glVertexAttribL1ui64NV = NULL;
PFNGLVERTEXATTRIBL1UI64VARBPROC glext_glVertexAttribL1ui64vARB = NULL;
PFNGLVERTEXATTRIBL1UI64VNVPROC glext_glVertexAttribL1ui64vNV = NULL;
PFNGLVERTEXATTRIBL2DPROC glext_glVertexAttribL2d = NULL;
PFNGLVERTEXATTRIBL2DEXTPROC glext_glVertexAttribL2dEXT = NULL;
PFNGLVERTEXATTRIBL2DVPROC glext_glVertexAttribL2dv = NULL;
PFNGLVERTEXATTRIBL2DVEXTPROC glext_glVertexAttribL2dvEXT = NULL;
PFNGLVERTEXATTRIBL2I64NVPROC glext_glVertexAttribL2i64NV = NULL;
PFNGLVERTEXATTRIBL2I64VNVPROC glext_glVertexAttribL2i64vNV = NULL;
PFNGLVERTEXATTRIBL2UI64NVPROC glext_glVertexAttribL2ui64NV = NULL;
PFNGLVERTEXATTRIBL2UI64VNVPROC glext_glVertexAttribL2ui64vNV = NULL;
PFNGLVERTEXATTRIBL3DPROC glext_glVertexAttribL3d = NULL;
PFNGLVERTEXATTRIBL3DEXTPROC glext_glVertexAttribL3dEXT = NULL;
PFNGLVERTEXATTRIBL3DVPROC glext_glVertexAttribL3dv = NULL;
PFNGLVERTEXATTRIBL3DVEXTPROC glext_glVertexAttribL3dvEXT = NULL;
PFNGLVERTEXATTRIBL3I64NVPROC glext_glVertexAttribL3i64NV = NULL;
PFNGLVERTEXATTRIBL3I64VNVPROC glext_glVertexAttribL3i64vNV = NULL;
PFNGLVERTEXATTRIBL3UI64NVPROC glext_glVertexAttribL3ui64NV = NULL;
PFNGLVERTEXATTRIBL3UI64VNVPROC glext_glVertexAttribL3ui64vNV = NULL;
PFNGLVERTEXATTRIBL4DPROC glext_glVertexAttribL4d = NULL;
PFNGLVERTEXATTRIBL4DEXTPROC glext_glVertexAttribL4dEXT = NULL;
PFNGLVERTEXATTRIBL4DVPROC glext_glVertexAttribL4dv = NULL;
PFNGLVERTEXATTRIBL4DVEXTPROC glext_glVertexAttribL4dvEXT = NULL;
PFNGLVERTEXATTRIBL4I64NVPROC glext_glVertexAttribL4i64NV = NULL;
PFNGLVERTEXATTRIBL4I64VNVPROC glext_glVertexAttribL4i64vNV = NULL;
PFNGLVERTEXATTRIBL4UI64NVPROC glext_glVertexAttribL4ui64NV = NULL;
PFNGLVERTEXATTRIBL4UI64VNVPROC glext_glVertexAttribL4ui64vNV = NULL;
PFNGLVERTEXATTRIBLFORMATPROC glext_glVertexAttribLFormat = NULL;
PFNGLVERTEXATTRIBLFORMATNVPROC glext_glVertexAttribLFormatNV = NULL;
PFNGLVERTEXATTRIBLPOINTERPROC glext_glVertexAttribLPointer = NULL;
PFNGLVERTEXATTRIBLPOINTEREXTPROC glext_glVertexAttribLPointerEXT = NULL;
PFNGLVERTEXATTRIBP1UIPROC glext_glVertexAttribP1ui = NULL;
PFNGLVERTEXATTRIBP1UIVPROC glext_glVertexAttribP1uiv = NULL;
PFNGLVERTEXATTRIBP2UIPROC glext_glVertexAttribP2ui = NULL;
PFNGLVERTEXATTRIBP2UIVPROC glext_glVertexAttribP2uiv = NULL;
PFNGLVERTEXATTRIBP3UIPROC glext_glVertexAttribP3ui = NULL;
PFNGLVERTEXATTRIBP3UIVPROC glext_glVertexAttribP3uiv = NULL;
PFNGLVERTEXATTRIBP4UIPROC glext_glVertexAttribP4ui = NULL;
PFNGLVERTEXATTRIBP4UIVPROC glext_glVertexAttribP4uiv = NULL;
PFNGLVERTEXATTRIBPARAMETERIAMDPROC glext_glVertexAttribParameteriAMD = NULL;
PFNGLVERTEXATTRIBPOINTERPROC glext_glVertexAttribPointer = NULL;
PFNGLVERTEXATTRIBPOINTERARBPROC glext_glVertexAttribPointerARB = NULL;
PFNGLVERTEXATTRIBPOINTERNVPROC glext_glVertexAttribPointerNV = NULL;
PFNGLVERTEXATTRIBS1DVNVPROC glext_glVertexAttribs1dvNV = NULL;
PFNGLVERTEXATTRIBS1FVNVPROC glext_glVertexAttribs1fvNV = NULL;
PFNGLVERTEXATTRIBS1HVNVPROC glext_glVertexAttribs1hvNV = NULL;
PFNGLVERTEXATTRIBS1SVNVPROC glext_glVertexAttribs1svNV = NULL;
PFNGLVERTEXATTRIBS2DVNVPROC glext_glVertexAttribs2dvNV = NULL;
PFNGLVERTEXATTRIBS2FVNVPROC glext_glVertexAttribs2fvNV = NULL;
PFNGLVERTEXATTRIBS2HVNVPROC glext_glVertexAttribs2hvNV = NULL;
PFNGLVERTEXATTRIBS2SVNVPROC glext_glVertexAttribs2svNV = NULL;
PFNGLVERTEXATTRIBS3DVNVPROC glext_glVertexAttribs3dvNV = NULL;
PFNGLVERTEXATTRIBS3FVNVPROC glext_glVertexAttribs3fvNV = NULL;
PFNGLVERTEXATTRIBS3HVNVPROC glext_glVertexAttribs3hvNV = NULL;
PFNGLVERTEXATTRIBS3SVNVPROC glext_glVertexAttribs3svNV = NULL;
PFNGLVERTEXATTRIBS4DVNVPROC glext_glVertexAttribs4dvNV = NULL;
PFNGLVERTEXATTRIBS4FVNVPROC glext_glVertexAttribs4fvNV = NULL;
PFNGLVERTEXATTRIBS4HVNVPROC glext_glVertexAttribs4hvNV = NULL;
PFNGLVERTEXATTRIBS4SVNVPROC glext_glVertexAttribs4svNV = NULL;
PFNGLVERTEXATTRIBS4UBVNVPROC glext_glVertexAttribs4ubvNV = NULL;
PFNGLVERTEXBINDINGDIVISORPROC glext_glVertexBindingDivisor = NULL;
PFNGLVERTEXBLENDARBPROC glext_glVertexBlendARB = NULL;
PFNGLVERTEXBLENDENVFATIPROC glext_glVertexBlendEnvfATI = NULL;
PFNGLVERTEXBLENDENVIATIPROC glext_glVertexBlendEnviATI = NULL;
PFNGLVERTEXFORMATNVPROC glext_glVertexFormatNV = NULL;
PFNGLVERTEXPOINTEREXTPROC glext_glVertexPointerEXT = NULL;
PFNGLVERTEXPOINTERLISTIBMPROC glext_glVertexPointerListIBM = NULL;
PFNGLVERTEXPOINTERVINTELPROC glext_glVertexPointervINTEL = NULL;
PFNGLVERTEXSTREAM1DATIPROC glext_glVertexStream1dATI = NULL;
PFNGLVERTEXSTREAM1DVATIPROC glext_glVertexStream1dvATI = NULL;
PFNGLVERTEXSTREAM1FATIPROC glext_glVertexStream1fATI = NULL;
PFNGLVERTEXSTREAM1FVATIPROC glext_glVertexStream1fvATI = NULL;
PFNGLVERTEXSTREAM1IATIPROC glext_glVertexStream1iATI = NULL;
PFNGLVERTEXSTREAM1IVATIPROC glext_glVertexStream1ivATI = NULL;
PFNGLVERTEXSTREAM1SATIPROC glext_glVertexStream1sATI = NULL;
PFNGLVERTEXSTREAM1SVATIPROC glext_glVertexStream1svATI = NULL;
PFNGLVERTEXSTREAM2DATIPROC glext_glVertexStream2dATI = NULL;
PFNGLVERTEXSTREAM2DVATIPROC glext_glVertexStream2dvATI = NULL;
PFNGLVERTEXSTREAM2FATIPROC glext_glVertexStream2fATI = NULL;
PFNGLVERTEXSTREAM2FVATIPROC glext_glVertexStream2fvATI = NULL;
PFNGLVERTEXSTREAM2IATIPROC glext_glVertexStream2iATI = NULL;
PFNGLVERTEXSTREAM2IVATIPROC glext_glVertexStream2ivATI = NULL;
PFNGLVERTEXSTREAM2SATIPROC glext_glVertexStream2sATI = NULL;
PFNGLVERTEXSTREAM2SVATIPROC glext_glVertexStream2svATI = NULL;
PFNGLVERTEXSTREAM3DATIPROC glext_glVertexStream3dATI = NULL;
PFNGLVERTEXSTREAM3DVATIPROC glext_glVertexStream3dvATI = NULL;
PFNGLVERTEXSTREAM3FATIPROC glext_glVertexStream3fATI = NULL;
PFNGLVERTEXSTREAM3FVATIPROC glext_glVertexStream3fvATI = NULL;
PFNGLVERTEXSTREAM3IATIPROC glext_glVertexStream3iATI = NULL;
PFNGLVERTEXSTREAM3IVATIPROC glext_glVertexStream3ivATI = NULL;
PFNGLVERTEXSTREAM3SATIPROC glext_glVertexStream3sATI = NULL;
PFNGLVERTEXSTREAM3SVATIPROC glext_glVertexStream3svATI = NULL;
PFNGLVERTEXSTREAM4DATIPROC glext_glVertexStream4dATI = NULL;
PFNGLVERTEXSTREAM4DVATIPROC glext_glVertexStream4dvATI = NULL;
PFNGLVERTEXSTREAM4FATIPROC glext_glVertexStream4fATI = NULL;
PFNGLVERTEXSTREAM4FVATIPROC glext_glVertexStream4fvATI = NULL;
PFNGLVERTEXSTREAM4IATIPROC glext_glVertexStream4iATI = NULL;
PFNGLVERTEXSTREAM4IVATIPROC glext_glVertexStream4ivATI = NULL;
PFNGLVERTEXSTREAM4SATIPROC glext_glVertexStream4sATI = NULL;
PFNGLVERTEXSTREAM4SVATIPROC glext_glVertexStream4svATI = NULL;
PFNGLVERTEXWEIGHTPOINTEREXTPROC glext_glVertexWeightPointerEXT = NULL;
PFNGLVERTEXWEIGHTFEXTPROC glext_glVertexWeightfEXT = NULL;
PFNGLVERTEXWEIGHTFVEXTPROC glext_glVertexWeightfvEXT = NULL;
PFNGLVERTEXWEIGHTHNVPROC glext_glVertexWeighthNV = NULL;
PFNGLVERTEXWEIGHTHVNVPROC glext_glVertexWeighthvNV = NULL;
PFNGLVIDEOCAPTURENVPROC glext_glVideoCaptureNV = NULL;
PFNGLVIDEOCAPTURESTREAMPARAMETERDVNVPROC
glext_glVideoCaptureStreamParameterdvNV = NULL;
PFNGLVIDEOCAPTURESTREAMPARAMETERFVNVPROC
glext_glVideoCaptureStreamParameterfvNV = NULL;
PFNGLVIDEOCAPTURESTREAMPARAMETERIVNVPROC
glext_glVideoCaptureStreamParameterivNV = NULL;
PFNGLVIEWPORTPROC glext_glViewport = NULL;
PFNGLVIEWPORTARRAYVPROC glext_glViewportArrayv = NULL;
PFNGLVIEWPORTINDEXEDFPROC glext_glViewportIndexedf = NULL;
PFNGLVIEWPORTINDEXEDFVPROC glext_glViewportIndexedfv = NULL;
PFNGLVIEWPORTPOSITIONWSCALENVPROC glext_glViewportPositionWScaleNV = NULL;
PFNGLVIEWPORTSWIZZLENVPROC glext_glViewportSwizzleNV = NULL;
PFNGLWAITSEMAPHOREEXTPROC glext_glWaitSemaphoreEXT = NULL;
PFNGLWAITSEMAPHOREUI64NVXPROC glext_glWaitSemaphoreui64NVX = NULL;
PFNGLWAITSYNCPROC glext_glWaitSync = NULL;
PFNGLWAITVKSEMAPHORENVPROC glext_glWaitVkSemaphoreNV = NULL;
PFNGLWEIGHTPATHSNVPROC glext_glWeightPathsNV = NULL;
PFNGLWEIGHTPOINTERARBPROC glext_glWeightPointerARB = NULL;
PFNGLWEIGHTBVARBPROC glext_glWeightbvARB = NULL;
PFNGLWEIGHTDVARBPROC glext_glWeightdvARB = NULL;
PFNGLWEIGHTFVARBPROC glext_glWeightfvARB = NULL;
PFNGLWEIGHTIVARBPROC glext_glWeightivARB = NULL;
PFNGLWEIGHTSVARBPROC glext_glWeightsvARB = NULL;
PFNGLWEIGHTUBVARBPROC glext_glWeightubvARB = NULL;
PFNGLWEIGHTUIVARBPROC glext_glWeightuivARB = NULL;
PFNGLWEIGHTUSVARBPROC glext_glWeightusvARB = NULL;
PFNGLWINDOWPOS2DARBPROC glext_glWindowPos2dARB = NULL;
PFNGLWINDOWPOS2DMESAPROC glext_glWindowPos2dMESA = NULL;
PFNGLWINDOWPOS2DVARBPROC glext_glWindowPos2dvARB = NULL;
PFNGLWINDOWPOS2DVMESAPROC glext_glWindowPos2dvMESA = NULL;
PFNGLWINDOWPOS2FARBPROC glext_glWindowPos2fARB = NULL;
PFNGLWINDOWPOS2FMESAPROC glext_glWindowPos2fMESA = NULL;
PFNGLWINDOWPOS2FVARBPROC glext_glWindowPos2fvARB = NULL;
PFNGLWINDOWPOS2FVMESAPROC glext_glWindowPos2fvMESA = NULL;
PFNGLWINDOWPOS2IARBPROC glext_glWindowPos2iARB = NULL;
PFNGLWINDOWPOS2IMESAPROC glext_glWindowPos2iMESA = NULL;
PFNGLWINDOWPOS2IVARBPROC glext_glWindowPos2ivARB = NULL;
PFNGLWINDOWPOS2IVMESAPROC glext_glWindowPos2ivMESA = NULL;
PFNGLWINDOWPOS2SARBPROC glext_glWindowPos2sARB = NULL;
PFNGLWINDOWPOS2SMESAPROC glext_glWindowPos2sMESA = NULL;
PFNGLWINDOWPOS2SVARBPROC glext_glWindowPos2svARB = NULL;
PFNGLWINDOWPOS2SVMESAPROC glext_glWindowPos2svMESA = NULL;
PFNGLWINDOWPOS3DARBPROC glext_glWindowPos3dARB = NULL;
PFNGLWINDOWPOS3DMESAPROC glext_glWindowPos3dMESA = NULL;
PFNGLWINDOWPOS3DVARBPROC glext_glWindowPos3dvARB = NULL;
PFNGLWINDOWPOS3DVMESAPROC glext_glWindowPos3dvMESA = NULL;
PFNGLWINDOWPOS3FARBPROC glext_glWindowPos3fARB = NULL;
PFNGLWINDOWPOS3FMESAPROC glext_glWindowPos3fMESA = NULL;
PFNGLWINDOWPOS3FVARBPROC glext_glWindowPos3fvARB = NULL;
PFNGLWINDOWPOS3FVMESAPROC glext_glWindowPos3fvMESA = NULL;
PFNGLWINDOWPOS3IARBPROC glext_glWindowPos3iARB = NULL;
PFNGLWINDOWPOS3IMESAPROC glext_glWindowPos3iMESA = NULL;
PFNGLWINDOWPOS3IVARBPROC glext_glWindowPos3ivARB = NULL;
PFNGLWINDOWPOS3IVMESAPROC glext_glWindowPos3ivMESA = NULL;
PFNGLWINDOWPOS3SARBPROC glext_glWindowPos3sARB = NULL;
PFNGLWINDOWPOS3SMESAPROC glext_glWindowPos3sMESA = NULL;
PFNGLWINDOWPOS3SVARBPROC glext_glWindowPos3svARB = NULL;
PFNGLWINDOWPOS3SVMESAPROC glext_glWindowPos3svMESA = NULL;
PFNGLWINDOWPOS4DMESAPROC glext_glWindowPos4dMESA = NULL;
PFNGLWINDOWPOS4DVMESAPROC glext_glWindowPos4dvMESA = NULL;
PFNGLWINDOWPOS4FMESAPROC glext_glWindowPos4fMESA = NULL;
PFNGLWINDOWPOS4FVMESAPROC glext_glWindowPos4fvMESA = NULL;
PFNGLWINDOWPOS4IMESAPROC glext_glWindowPos4iMESA = NULL;
PFNGLWINDOWPOS4IVMESAPROC glext_glWindowPos4ivMESA = NULL;
PFNGLWINDOWPOS4SMESAPROC glext_glWindowPos4sMESA = NULL;
PFNGLWINDOWPOS4SVMESAPROC glext_glWindowPos4svMESA = NULL;
PFNGLWINDOWRECTANGLESEXTPROC glext_glWindowRectanglesEXT = NULL;
PFNGLWRITEMASKEXTPROC glext_glWriteMaskEXT = NULL;

static void
glext_gl_load_GL_VERSION_1_0 (GLEXTuserptrloadfunc load, void* userptr) {
  if (!GLEXT_GL_VERSION_1_0)
    return;
  glext_glBlendFunc = (PFNGLBLENDFUNCPROC)load (userptr, "glBlendFunc");
  glext_glClear = (PFNGLCLEARPROC)load (userptr, "glClear");
  glext_glClearColor = (PFNGLCLEARCOLORPROC)load (userptr, "glClearColor");
  glext_glClearDepth = (PFNGLCLEARDEPTHPROC)load (userptr, "glClearDepth");
  glext_glClearStencil
    = (PFNGLCLEARSTENCILPROC)load (userptr, "glClearStencil");
  glext_glColorMask = (PFNGLCOLORMASKPROC)load (userptr, "glColorMask");
  glext_glCullFace = (PFNGLCULLFACEPROC)load (userptr, "glCullFace");
  glext_glDepthFunc = (PFNGLDEPTHFUNCPROC)load (userptr, "glDepthFunc");
  glext_glDepthMask = (PFNGLDEPTHMASKPROC)load (userptr, "glDepthMask");
  glext_glDepthRange = (PFNGLDEPTHRANGEPROC)load (userptr, "glDepthRange");
  glext_glDisable = (PFNGLDISABLEPROC)load (userptr, "glDisable");
  glext_glDrawBuffer = (PFNGLDRAWBUFFERPROC)load (userptr, "glDrawBuffer");
  glext_glEnable = (PFNGLENABLEPROC)load (userptr, "glEnable");
  glext_glFinish = (PFNGLFINISHPROC)load (userptr, "glFinish");
  glext_glFlush = (PFNGLFLUSHPROC)load (userptr, "glFlush");
  glext_glFrontFace = (PFNGLFRONTFACEPROC)load (userptr, "glFrontFace");
  glext_glGetBooleanv = (PFNGLGETBOOLEANVPROC)load (userptr, "glGetBooleanv");
  glext_glGetDoublev = (PFNGLGETDOUBLEVPROC)load (userptr, "glGetDoublev");
  glext_glGetError = (PFNGLGETERRORPROC)load (userptr, "glGetError");
  glext_glGetFloatv = (PFNGLGETFLOATVPROC)load (userptr, "glGetFloatv");
  glext_glGetIntegerv = (PFNGLGETINTEGERVPROC)load (userptr, "glGetIntegerv");
  glext_glGetString = (PFNGLGETSTRINGPROC)load (userptr, "glGetString");
  glext_glGetTexImage = (PFNGLGETTEXIMAGEPROC)load (userptr, "glGetTexImage");
  glext_glGetTexLevelParameterfv = (PFNGLGETTEXLEVELPARAMETERFVPROC)load (
    userptr, "glGetTexLevelParameterfv");
  glext_glGetTexLevelParameteriv = (PFNGLGETTEXLEVELPARAMETERIVPROC)load (
    userptr, "glGetTexLevelParameteriv");
  glext_glGetTexParameterfv
    = (PFNGLGETTEXPARAMETERFVPROC)load (userptr, "glGetTexParameterfv");
  glext_glGetTexParameteriv
    = (PFNGLGETTEXPARAMETERIVPROC)load (userptr, "glGetTexParameteriv");
  glext_glHint = (PFNGLHINTPROC)load (userptr, "glHint");
  glext_glIsEnabled = (PFNGLISENABLEDPROC)load (userptr, "glIsEnabled");
  glext_glLineWidth = (PFNGLLINEWIDTHPROC)load (userptr, "glLineWidth");
  glext_glLogicOp = (PFNGLLOGICOPPROC)load (userptr, "glLogicOp");
  glext_glPixelStoref = (PFNGLPIXELSTOREFPROC)load (userptr, "glPixelStoref");
  glext_glPixelStorei = (PFNGLPIXELSTOREIPROC)load (userptr, "glPixelStorei");
  glext_glPointSize = (PFNGLPOINTSIZEPROC)load (userptr, "glPointSize");
  glext_glPolygonMode = (PFNGLPOLYGONMODEPROC)load (userptr, "glPolygonMode");
  glext_glReadBuffer = (PFNGLREADBUFFERPROC)load (userptr, "glReadBuffer");
  glext_glReadPixels = (PFNGLREADPIXELSPROC)load (userptr, "glReadPixels");
  glext_glScissor = (PFNGLSCISSORPROC)load (userptr, "glScissor");
  glext_glStencilFunc = (PFNGLSTENCILFUNCPROC)load (userptr, "glStencilFunc");
  glext_glStencilMask = (PFNGLSTENCILMASKPROC)load (userptr, "glStencilMask");
  glext_glStencilOp = (PFNGLSTENCILOPPROC)load (userptr, "glStencilOp");
  glext_glTexImage1D = (PFNGLTEXIMAGE1DPROC)load (userptr, "glTexImage1D");
  glext_glTexImage2D = (PFNGLTEXIMAGE2DPROC)load (userptr, "glTexImage2D");
  glext_glTexParameterf
    = (PFNGLTEXPARAMETERFPROC)load (userptr, "glTexParameterf");
  glext_glTexParameterfv
    = (PFNGLTEXPARAMETERFVPROC)load (userptr, "glTexParameterfv");
  glext_glTexParameteri
    = (PFNGLTEXPARAMETERIPROC)load (userptr, "glTexParameteri");
  glext_glTexParameteriv
    = (PFNGLTEXPARAMETERIVPROC)load (userptr, "glTexParameteriv");
  glext_glViewport = (PFNGLVIEWPORTPROC)load (userptr, "glViewport");
}
static void
glext_gl_load_GL_VERSION_1_1 (GLEXTuserptrloadfunc load, void* userptr) {
  if (!GLEXT_GL_VERSION_1_1)
    return;
  glext_glBindTexture = (PFNGLBINDTEXTUREPROC)load (userptr, "glBindTexture");
  glext_glCopyTexImage1D
    = (PFNGLCOPYTEXIMAGE1DPROC)load (userptr, "glCopyTexImage1D");
  glext_glCopyTexImage2D
    = (PFNGLCOPYTEXIMAGE2DPROC)load (userptr, "glCopyTexImage2D");
  glext_glCopyTexSubImage1D
    = (PFNGLCOPYTEXSUBIMAGE1DPROC)load (userptr, "glCopyTexSubImage1D");
  glext_glCopyTexSubImage2D
    = (PFNGLCOPYTEXSUBIMAGE2DPROC)load (userptr, "glCopyTexSubImage2D");
  glext_glDeleteTextures
    = (PFNGLDELETETEXTURESPROC)load (userptr, "glDeleteTextures");
  glext_glDrawArrays = (PFNGLDRAWARRAYSPROC)load (userptr, "glDrawArrays");
  glext_glDrawElements
    = (PFNGLDRAWELEMENTSPROC)load (userptr, "glDrawElements");
  glext_glGenTextures = (PFNGLGENTEXTURESPROC)load (userptr, "glGenTextures");
  glext_glGetPointerv = (PFNGLGETPOINTERVPROC)load (userptr, "glGetPointerv");
  glext_glIsTexture = (PFNGLISTEXTUREPROC)load (userptr, "glIsTexture");
  glext_glPolygonOffset
    = (PFNGLPOLYGONOFFSETPROC)load (userptr, "glPolygonOffset");
  glext_glTexSubImage1D
    = (PFNGLTEXSUBIMAGE1DPROC)load (userptr, "glTexSubImage1D");
  glext_glTexSubImage2D
    = (PFNGLTEXSUBIMAGE2DPROC)load (userptr, "glTexSubImage2D");
}
static void
glext_gl_load_GL_VERSION_1_2 (GLEXTuserptrloadfunc load, void* userptr) {
  if (!GLEXT_GL_VERSION_1_2)
    return;
  glext_glCopyTexSubImage3D
    = (PFNGLCOPYTEXSUBIMAGE3DPROC)load (userptr, "glCopyTexSubImage3D");
  glext_glDrawRangeElements
    = (PFNGLDRAWRANGEELEMENTSPROC)load (userptr, "glDrawRangeElements");
  glext_glTexImage3D = (PFNGLTEXIMAGE3DPROC)load (userptr, "glTexImage3D");
  glext_glTexSubImage3D
    = (PFNGLTEXSUBIMAGE3DPROC)load (userptr, "glTexSubImage3D");
}
static void
glext_gl_load_GL_VERSION_1_3 (GLEXTuserptrloadfunc load, void* userptr) {
  if (!GLEXT_GL_VERSION_1_3)
    return;
  glext_glActiveTexture
    = (PFNGLACTIVETEXTUREPROC)load (userptr, "glActiveTexture");
  glext_glCompressedTexImage1D
    = (PFNGLCOMPRESSEDTEXIMAGE1DPROC)load (userptr, "glCompressedTexImage1D");
  glext_glCompressedTexImage2D
    = (PFNGLCOMPRESSEDTEXIMAGE2DPROC)load (userptr, "glCompressedTexImage2D");
  glext_glCompressedTexImage3D
    = (PFNGLCOMPRESSEDTEXIMAGE3DPROC)load (userptr, "glCompressedTexImage3D");
  glext_glCompressedTexSubImage1D = (PFNGLCOMPRESSEDTEXSUBIMAGE1DPROC)load (
    userptr, "glCompressedTexSubImage1D");
  glext_glCompressedTexSubImage2D = (PFNGLCOMPRESSEDTEXSUBIMAGE2DPROC)load (
    userptr, "glCompressedTexSubImage2D");
  glext_glCompressedTexSubImage3D = (PFNGLCOMPRESSEDTEXSUBIMAGE3DPROC)load (
    userptr, "glCompressedTexSubImage3D");
  glext_glGetCompressedTexImage = (PFNGLGETCOMPRESSEDTEXIMAGEPROC)load (
    userptr, "glGetCompressedTexImage");
  glext_glSampleCoverage
    = (PFNGLSAMPLECOVERAGEPROC)load (userptr, "glSampleCoverage");
}
static void
glext_gl_load_GL_VERSION_1_4 (GLEXTuserptrloadfunc load, void* userptr) {
  if (!GLEXT_GL_VERSION_1_4)
    return;
  glext_glBlendColor = (PFNGLBLENDCOLORPROC)load (userptr, "glBlendColor");
  glext_glBlendEquation
    = (PFNGLBLENDEQUATIONPROC)load (userptr, "glBlendEquation");
  glext_glBlendFuncSeparate
    = (PFNGLBLENDFUNCSEPARATEPROC)load (userptr, "glBlendFuncSeparate");
  glext_glMultiDrawArrays
    = (PFNGLMULTIDRAWARRAYSPROC)load (userptr, "glMultiDrawArrays");
  glext_glMultiDrawElements
    = (PFNGLMULTIDRAWELEMENTSPROC)load (userptr, "glMultiDrawElements");
  glext_glPointParameterf
    = (PFNGLPOINTPARAMETERFPROC)load (userptr, "glPointParameterf");
  glext_glPointParameterfv
    = (PFNGLPOINTPARAMETERFVPROC)load (userptr, "glPointParameterfv");
  glext_glPointParameteri
    = (PFNGLPOINTPARAMETERIPROC)load (userptr, "glPointParameteri");
  glext_glPointParameteriv
    = (PFNGLPOINTPARAMETERIVPROC)load (userptr, "glPointParameteriv");
}
static void
glext_gl_load_GL_VERSION_1_5 (GLEXTuserptrloadfunc load, void* userptr) {
  if (!GLEXT_GL_VERSION_1_5)
    return;
  glext_glBeginQuery = (PFNGLBEGINQUERYPROC)load (userptr, "glBeginQuery");
  glext_glBindBuffer = (PFNGLBINDBUFFERPROC)load (userptr, "glBindBuffer");
  glext_glBufferData = (PFNGLBUFFERDATAPROC)load (userptr, "glBufferData");
  glext_glBufferSubData
    = (PFNGLBUFFERSUBDATAPROC)load (userptr, "glBufferSubData");
  glext_glDeleteBuffers
    = (PFNGLDELETEBUFFERSPROC)load (userptr, "glDeleteBuffers");
  glext_glDeleteQueries
    = (PFNGLDELETEQUERIESPROC)load (userptr, "glDeleteQueries");
  glext_glEndQuery = (PFNGLENDQUERYPROC)load (userptr, "glEndQuery");
  glext_glGenBuffers = (PFNGLGENBUFFERSPROC)load (userptr, "glGenBuffers");
  glext_glGenQueries = (PFNGLGENQUERIESPROC)load (userptr, "glGenQueries");
  glext_glGetBufferParameteriv
    = (PFNGLGETBUFFERPARAMETERIVPROC)load (userptr, "glGetBufferParameteriv");
  glext_glGetBufferPointerv
    = (PFNGLGETBUFFERPOINTERVPROC)load (userptr, "glGetBufferPointerv");
  glext_glGetBufferSubData
    = (PFNGLGETBUFFERSUBDATAPROC)load (userptr, "glGetBufferSubData");
  glext_glGetQueryObjectiv
    = (PFNGLGETQUERYOBJECTIVPROC)load (userptr, "glGetQueryObjectiv");
  glext_glGetQueryObjectuiv
    = (PFNGLGETQUERYOBJECTUIVPROC)load (userptr, "glGetQueryObjectuiv");
  glext_glGetQueryiv = (PFNGLGETQUERYIVPROC)load (userptr, "glGetQueryiv");
  glext_glIsBuffer = (PFNGLISBUFFERPROC)load (userptr, "glIsBuffer");
  glext_glIsQuery = (PFNGLISQUERYPROC)load (userptr, "glIsQuery");
  glext_glMapBuffer = (PFNGLMAPBUFFERPROC)load (userptr, "glMapBuffer");
  glext_glUnmapBuffer = (PFNGLUNMAPBUFFERPROC)load (userptr, "glUnmapBuffer");
}
static void
glext_gl_load_GL_VERSION_2_0 (GLEXTuserptrloadfunc load, void* userptr) {
  if (!GLEXT_GL_VERSION_2_0)
    return;
  glext_glAttachShader
    = (PFNGLATTACHSHADERPROC)load (userptr, "glAttachShader");
  glext_glBindAttribLocation
    = (PFNGLBINDATTRIBLOCATIONPROC)load (userptr, "glBindAttribLocation");
  glext_glBlendEquationSeparate = (PFNGLBLENDEQUATIONSEPARATEPROC)load (
    userptr, "glBlendEquationSeparate");
  glext_glCompileShader
    = (PFNGLCOMPILESHADERPROC)load (userptr, "glCompileShader");
  glext_glCreateProgram
    = (PFNGLCREATEPROGRAMPROC)load (userptr, "glCreateProgram");
  glext_glCreateShader
    = (PFNGLCREATESHADERPROC)load (userptr, "glCreateShader");
  glext_glDeleteProgram
    = (PFNGLDELETEPROGRAMPROC)load (userptr, "glDeleteProgram");
  glext_glDeleteShader
    = (PFNGLDELETESHADERPROC)load (userptr, "glDeleteShader");
  glext_glDetachShader
    = (PFNGLDETACHSHADERPROC)load (userptr, "glDetachShader");
  glext_glDisableVertexAttribArray = (PFNGLDISABLEVERTEXATTRIBARRAYPROC)load (
    userptr, "glDisableVertexAttribArray");
  glext_glDrawBuffers = (PFNGLDRAWBUFFERSPROC)load (userptr, "glDrawBuffers");
  glext_glEnableVertexAttribArray = (PFNGLENABLEVERTEXATTRIBARRAYPROC)load (
    userptr, "glEnableVertexAttribArray");
  glext_glGetActiveAttrib
    = (PFNGLGETACTIVEATTRIBPROC)load (userptr, "glGetActiveAttrib");
  glext_glGetActiveUniform
    = (PFNGLGETACTIVEUNIFORMPROC)load (userptr, "glGetActiveUniform");
  glext_glGetAttachedShaders
    = (PFNGLGETATTACHEDSHADERSPROC)load (userptr, "glGetAttachedShaders");
  glext_glGetAttribLocation
    = (PFNGLGETATTRIBLOCATIONPROC)load (userptr, "glGetAttribLocation");
  glext_glGetProgramInfoLog
    = (PFNGLGETPROGRAMINFOLOGPROC)load (userptr, "glGetProgramInfoLog");
  glext_glGetProgramiv
    = (PFNGLGETPROGRAMIVPROC)load (userptr, "glGetProgramiv");
  glext_glGetShaderInfoLog
    = (PFNGLGETSHADERINFOLOGPROC)load (userptr, "glGetShaderInfoLog");
  glext_glGetShaderSource
    = (PFNGLGETSHADERSOURCEPROC)load (userptr, "glGetShaderSource");
  glext_glGetShaderiv = (PFNGLGETSHADERIVPROC)load (userptr, "glGetShaderiv");
  glext_glGetUniformLocation
    = (PFNGLGETUNIFORMLOCATIONPROC)load (userptr, "glGetUniformLocation");
  glext_glGetUniformfv
    = (PFNGLGETUNIFORMFVPROC)load (userptr, "glGetUniformfv");
  glext_glGetUniformiv
    = (PFNGLGETUNIFORMIVPROC)load (userptr, "glGetUniformiv");
  glext_glGetVertexAttribPointerv = (PFNGLGETVERTEXATTRIBPOINTERVPROC)load (
    userptr, "glGetVertexAttribPointerv");
  glext_glGetVertexAttribdv
    = (PFNGLGETVERTEXATTRIBDVPROC)load (userptr, "glGetVertexAttribdv");
  glext_glGetVertexAttribfv
    = (PFNGLGETVERTEXATTRIBFVPROC)load (userptr, "glGetVertexAttribfv");
  glext_glGetVertexAttribiv
    = (PFNGLGETVERTEXATTRIBIVPROC)load (userptr, "glGetVertexAttribiv");
  glext_glIsProgram = (PFNGLISPROGRAMPROC)load (userptr, "glIsProgram");
  glext_glIsShader = (PFNGLISSHADERPROC)load (userptr, "glIsShader");
  glext_glLinkProgram = (PFNGLLINKPROGRAMPROC)load (userptr, "glLinkProgram");
  glext_glShaderSource
    = (PFNGLSHADERSOURCEPROC)load (userptr, "glShaderSource");
  glext_glStencilFuncSeparate
    = (PFNGLSTENCILFUNCSEPARATEPROC)load (userptr, "glStencilFuncSeparate");
  glext_glStencilMaskSeparate
    = (PFNGLSTENCILMASKSEPARATEPROC)load (userptr, "glStencilMaskSeparate");
  glext_glStencilOpSeparate
    = (PFNGLSTENCILOPSEPARATEPROC)load (userptr, "glStencilOpSeparate");
  glext_glUniform1f = (PFNGLUNIFORM1FPROC)load (userptr, "glUniform1f");
  glext_glUniform1fv = (PFNGLUNIFORM1FVPROC)load (userptr, "glUniform1fv");
  glext_glUniform1i = (PFNGLUNIFORM1IPROC)load (userptr, "glUniform1i");
  glext_glUniform1iv = (PFNGLUNIFORM1IVPROC)load (userptr, "glUniform1iv");
  glext_glUniform2f = (PFNGLUNIFORM2FPROC)load (userptr, "glUniform2f");
  glext_glUniform2fv = (PFNGLUNIFORM2FVPROC)load (userptr, "glUniform2fv");
  glext_glUniform2i = (PFNGLUNIFORM2IPROC)load (userptr, "glUniform2i");
  glext_glUniform2iv = (PFNGLUNIFORM2IVPROC)load (userptr, "glUniform2iv");
  glext_glUniform3f = (PFNGLUNIFORM3FPROC)load (userptr, "glUniform3f");
  glext_glUniform3fv = (PFNGLUNIFORM3FVPROC)load (userptr, "glUniform3fv");
  glext_glUniform3i = (PFNGLUNIFORM3IPROC)load (userptr, "glUniform3i");
  glext_glUniform3iv = (PFNGLUNIFORM3IVPROC)load (userptr, "glUniform3iv");
  glext_glUniform4f = (PFNGLUNIFORM4FPROC)load (userptr, "glUniform4f");
  glext_glUniform4fv = (PFNGLUNIFORM4FVPROC)load (userptr, "glUniform4fv");
  glext_glUniform4i = (PFNGLUNIFORM4IPROC)load (userptr, "glUniform4i");
  glext_glUniform4iv = (PFNGLUNIFORM4IVPROC)load (userptr, "glUniform4iv");
  glext_glUniformMatrix2fv
    = (PFNGLUNIFORMMATRIX2FVPROC)load (userptr, "glUniformMatrix2fv");
  glext_glUniformMatrix3fv
    = (PFNGLUNIFORMMATRIX3FVPROC)load (userptr, "glUniformMatrix3fv");
  glext_glUniformMatrix4fv
    = (PFNGLUNIFORMMATRIX4FVPROC)load (userptr, "glUniformMatrix4fv");
  glext_glUseProgram = (PFNGLUSEPROGRAMPROC)load (userptr, "glUseProgram");
  glext_glValidateProgram
    = (PFNGLVALIDATEPROGRAMPROC)load (userptr, "glValidateProgram");
  glext_glVertexAttrib1d
    = (PFNGLVERTEXATTRIB1DPROC)load (userptr, "glVertexAttrib1d");
  glext_glVertexAttrib1dv
    = (PFNGLVERTEXATTRIB1DVPROC)load (userptr, "glVertexAttrib1dv");
  glext_glVertexAttrib1f
    = (PFNGLVERTEXATTRIB1FPROC)load (userptr, "glVertexAttrib1f");
  glext_glVertexAttrib1fv
    = (PFNGLVERTEXATTRIB1FVPROC)load (userptr, "glVertexAttrib1fv");
  glext_glVertexAttrib1s
    = (PFNGLVERTEXATTRIB1SPROC)load (userptr, "glVertexAttrib1s");
  glext_glVertexAttrib1sv
    = (PFNGLVERTEXATTRIB1SVPROC)load (userptr, "glVertexAttrib1sv");
  glext_glVertexAttrib2d
    = (PFNGLVERTEXATTRIB2DPROC)load (userptr, "glVertexAttrib2d");
  glext_glVertexAttrib2dv
    = (PFNGLVERTEXATTRIB2DVPROC)load (userptr, "glVertexAttrib2dv");
  glext_glVertexAttrib2f
    = (PFNGLVERTEXATTRIB2FPROC)load (userptr, "glVertexAttrib2f");
  glext_glVertexAttrib2fv
    = (PFNGLVERTEXATTRIB2FVPROC)load (userptr, "glVertexAttrib2fv");
  glext_glVertexAttrib2s
    = (PFNGLVERTEXATTRIB2SPROC)load (userptr, "glVertexAttrib2s");
  glext_glVertexAttrib2sv
    = (PFNGLVERTEXATTRIB2SVPROC)load (userptr, "glVertexAttrib2sv");
  glext_glVertexAttrib3d
    = (PFNGLVERTEXATTRIB3DPROC)load (userptr, "glVertexAttrib3d");
  glext_glVertexAttrib3dv
    = (PFNGLVERTEXATTRIB3DVPROC)load (userptr, "glVertexAttrib3dv");
  glext_glVertexAttrib3f
    = (PFNGLVERTEXATTRIB3FPROC)load (userptr, "glVertexAttrib3f");
  glext_glVertexAttrib3fv
    = (PFNGLVERTEXATTRIB3FVPROC)load (userptr, "glVertexAttrib3fv");
  glext_glVertexAttrib3s
    = (PFNGLVERTEXATTRIB3SPROC)load (userptr, "glVertexAttrib3s");
  glext_glVertexAttrib3sv
    = (PFNGLVERTEXATTRIB3SVPROC)load (userptr, "glVertexAttrib3sv");
  glext_glVertexAttrib4Nbv
    = (PFNGLVERTEXATTRIB4NBVPROC)load (userptr, "glVertexAttrib4Nbv");
  glext_glVertexAttrib4Niv
    = (PFNGLVERTEXATTRIB4NIVPROC)load (userptr, "glVertexAttrib4Niv");
  glext_glVertexAttrib4Nsv
    = (PFNGLVERTEXATTRIB4NSVPROC)load (userptr, "glVertexAttrib4Nsv");
  glext_glVertexAttrib4Nub
    = (PFNGLVERTEXATTRIB4NUBPROC)load (userptr, "glVertexAttrib4Nub");
  glext_glVertexAttrib4Nubv
    = (PFNGLVERTEXATTRIB4NUBVPROC)load (userptr, "glVertexAttrib4Nubv");
  glext_glVertexAttrib4Nuiv
    = (PFNGLVERTEXATTRIB4NUIVPROC)load (userptr, "glVertexAttrib4Nuiv");
  glext_glVertexAttrib4Nusv
    = (PFNGLVERTEXATTRIB4NUSVPROC)load (userptr, "glVertexAttrib4Nusv");
  glext_glVertexAttrib4bv
    = (PFNGLVERTEXATTRIB4BVPROC)load (userptr, "glVertexAttrib4bv");
  glext_glVertexAttrib4d
    = (PFNGLVERTEXATTRIB4DPROC)load (userptr, "glVertexAttrib4d");
  glext_glVertexAttrib4dv
    = (PFNGLVERTEXATTRIB4DVPROC)load (userptr, "glVertexAttrib4dv");
  glext_glVertexAttrib4f
    = (PFNGLVERTEXATTRIB4FPROC)load (userptr, "glVertexAttrib4f");
  glext_glVertexAttrib4fv
    = (PFNGLVERTEXATTRIB4FVPROC)load (userptr, "glVertexAttrib4fv");
  glext_glVertexAttrib4iv
    = (PFNGLVERTEXATTRIB4IVPROC)load (userptr, "glVertexAttrib4iv");
  glext_glVertexAttrib4s
    = (PFNGLVERTEXATTRIB4SPROC)load (userptr, "glVertexAttrib4s");
  glext_glVertexAttrib4sv
    = (PFNGLVERTEXATTRIB4SVPROC)load (userptr, "glVertexAttrib4sv");
  glext_glVertexAttrib4ubv
    = (PFNGLVERTEXATTRIB4UBVPROC)load (userptr, "glVertexAttrib4ubv");
  glext_glVertexAttrib4uiv
    = (PFNGLVERTEXATTRIB4UIVPROC)load (userptr, "glVertexAttrib4uiv");
  glext_glVertexAttrib4usv
    = (PFNGLVERTEXATTRIB4USVPROC)load (userptr, "glVertexAttrib4usv");
  glext_glVertexAttribPointer
    = (PFNGLVERTEXATTRIBPOINTERPROC)load (userptr, "glVertexAttribPointer");
}
static void
glext_gl_load_GL_VERSION_2_1 (GLEXTuserptrloadfunc load, void* userptr) {
  if (!GLEXT_GL_VERSION_2_1)
    return;
  glext_glUniformMatrix2x3fv
    = (PFNGLUNIFORMMATRIX2X3FVPROC)load (userptr, "glUniformMatrix2x3fv");
  glext_glUniformMatrix2x4fv
    = (PFNGLUNIFORMMATRIX2X4FVPROC)load (userptr, "glUniformMatrix2x4fv");
  glext_glUniformMatrix3x2fv
    = (PFNGLUNIFORMMATRIX3X2FVPROC)load (userptr, "glUniformMatrix3x2fv");
  glext_glUniformMatrix3x4fv
    = (PFNGLUNIFORMMATRIX3X4FVPROC)load (userptr, "glUniformMatrix3x4fv");
  glext_glUniformMatrix4x2fv
    = (PFNGLUNIFORMMATRIX4X2FVPROC)load (userptr, "glUniformMatrix4x2fv");
  glext_glUniformMatrix4x3fv
    = (PFNGLUNIFORMMATRIX4X3FVPROC)load (userptr, "glUniformMatrix4x3fv");
}
static void
glext_gl_load_GL_VERSION_3_0 (GLEXTuserptrloadfunc load, void* userptr) {
  if (!GLEXT_GL_VERSION_3_0)
    return;
  glext_glBeginConditionalRender = (PFNGLBEGINCONDITIONALRENDERPROC)load (
    userptr, "glBeginConditionalRender");
  glext_glBeginTransformFeedback = (PFNGLBEGINTRANSFORMFEEDBACKPROC)load (
    userptr, "glBeginTransformFeedback");
  glext_glBindBufferBase
    = (PFNGLBINDBUFFERBASEPROC)load (userptr, "glBindBufferBase");
  glext_glBindBufferRange
    = (PFNGLBINDBUFFERRANGEPROC)load (userptr, "glBindBufferRange");
  glext_glBindFragDataLocation
    = (PFNGLBINDFRAGDATALOCATIONPROC)load (userptr, "glBindFragDataLocation");
  glext_glBindFramebuffer
    = (PFNGLBINDFRAMEBUFFERPROC)load (userptr, "glBindFramebuffer");
  glext_glBindRenderbuffer
    = (PFNGLBINDRENDERBUFFERPROC)load (userptr, "glBindRenderbuffer");
  glext_glBindVertexArray
    = (PFNGLBINDVERTEXARRAYPROC)load (userptr, "glBindVertexArray");
  glext_glBlitFramebuffer
    = (PFNGLBLITFRAMEBUFFERPROC)load (userptr, "glBlitFramebuffer");
  glext_glCheckFramebufferStatus = (PFNGLCHECKFRAMEBUFFERSTATUSPROC)load (
    userptr, "glCheckFramebufferStatus");
  glext_glClampColor = (PFNGLCLAMPCOLORPROC)load (userptr, "glClampColor");
  glext_glClearBufferfi
    = (PFNGLCLEARBUFFERFIPROC)load (userptr, "glClearBufferfi");
  glext_glClearBufferfv
    = (PFNGLCLEARBUFFERFVPROC)load (userptr, "glClearBufferfv");
  glext_glClearBufferiv
    = (PFNGLCLEARBUFFERIVPROC)load (userptr, "glClearBufferiv");
  glext_glClearBufferuiv
    = (PFNGLCLEARBUFFERUIVPROC)load (userptr, "glClearBufferuiv");
  glext_glColorMaski = (PFNGLCOLORMASKIPROC)load (userptr, "glColorMaski");
  glext_glDeleteFramebuffers
    = (PFNGLDELETEFRAMEBUFFERSPROC)load (userptr, "glDeleteFramebuffers");
  glext_glDeleteRenderbuffers
    = (PFNGLDELETERENDERBUFFERSPROC)load (userptr, "glDeleteRenderbuffers");
  glext_glDeleteVertexArrays
    = (PFNGLDELETEVERTEXARRAYSPROC)load (userptr, "glDeleteVertexArrays");
  glext_glDisablei = (PFNGLDISABLEIPROC)load (userptr, "glDisablei");
  glext_glEnablei = (PFNGLENABLEIPROC)load (userptr, "glEnablei");
  glext_glEndConditionalRender
    = (PFNGLENDCONDITIONALRENDERPROC)load (userptr, "glEndConditionalRender");
  glext_glEndTransformFeedback
    = (PFNGLENDTRANSFORMFEEDBACKPROC)load (userptr, "glEndTransformFeedback");
  glext_glFlushMappedBufferRange = (PFNGLFLUSHMAPPEDBUFFERRANGEPROC)load (
    userptr, "glFlushMappedBufferRange");
  glext_glFramebufferRenderbuffer = (PFNGLFRAMEBUFFERRENDERBUFFERPROC)load (
    userptr, "glFramebufferRenderbuffer");
  glext_glFramebufferTexture1D
    = (PFNGLFRAMEBUFFERTEXTURE1DPROC)load (userptr, "glFramebufferTexture1D");
  glext_glFramebufferTexture2D
    = (PFNGLFRAMEBUFFERTEXTURE2DPROC)load (userptr, "glFramebufferTexture2D");
  glext_glFramebufferTexture3D
    = (PFNGLFRAMEBUFFERTEXTURE3DPROC)load (userptr, "glFramebufferTexture3D");
  glext_glFramebufferTextureLayer = (PFNGLFRAMEBUFFERTEXTURELAYERPROC)load (
    userptr, "glFramebufferTextureLayer");
  glext_glGenFramebuffers
    = (PFNGLGENFRAMEBUFFERSPROC)load (userptr, "glGenFramebuffers");
  glext_glGenRenderbuffers
    = (PFNGLGENRENDERBUFFERSPROC)load (userptr, "glGenRenderbuffers");
  glext_glGenVertexArrays
    = (PFNGLGENVERTEXARRAYSPROC)load (userptr, "glGenVertexArrays");
  glext_glGenerateMipmap
    = (PFNGLGENERATEMIPMAPPROC)load (userptr, "glGenerateMipmap");
  glext_glGetBooleani_v
    = (PFNGLGETBOOLEANI_VPROC)load (userptr, "glGetBooleani_v");
  glext_glGetFragDataLocation
    = (PFNGLGETFRAGDATALOCATIONPROC)load (userptr, "glGetFragDataLocation");
  glext_glGetFramebufferAttachmentParameteriv
    = (PFNGLGETFRAMEBUFFERATTACHMENTPARAMETERIVPROC)load (
      userptr, "glGetFramebufferAttachmentParameteriv");
  glext_glGetIntegeri_v
    = (PFNGLGETINTEGERI_VPROC)load (userptr, "glGetIntegeri_v");
  glext_glGetRenderbufferParameteriv
    = (PFNGLGETRENDERBUFFERPARAMETERIVPROC)load (
      userptr, "glGetRenderbufferParameteriv");
  glext_glGetStringi = (PFNGLGETSTRINGIPROC)load (userptr, "glGetStringi");
  glext_glGetTexParameterIiv
    = (PFNGLGETTEXPARAMETERIIVPROC)load (userptr, "glGetTexParameterIiv");
  glext_glGetTexParameterIuiv
    = (PFNGLGETTEXPARAMETERIUIVPROC)load (userptr, "glGetTexParameterIuiv");
  glext_glGetTransformFeedbackVarying
    = (PFNGLGETTRANSFORMFEEDBACKVARYINGPROC)load (
      userptr, "glGetTransformFeedbackVarying");
  glext_glGetUniformuiv
    = (PFNGLGETUNIFORMUIVPROC)load (userptr, "glGetUniformuiv");
  glext_glGetVertexAttribIiv
    = (PFNGLGETVERTEXATTRIBIIVPROC)load (userptr, "glGetVertexAttribIiv");
  glext_glGetVertexAttribIuiv
    = (PFNGLGETVERTEXATTRIBIUIVPROC)load (userptr, "glGetVertexAttribIuiv");
  glext_glIsEnabledi = (PFNGLISENABLEDIPROC)load (userptr, "glIsEnabledi");
  glext_glIsFramebuffer
    = (PFNGLISFRAMEBUFFERPROC)load (userptr, "glIsFramebuffer");
  glext_glIsRenderbuffer
    = (PFNGLISRENDERBUFFERPROC)load (userptr, "glIsRenderbuffer");
  glext_glIsVertexArray
    = (PFNGLISVERTEXARRAYPROC)load (userptr, "glIsVertexArray");
  glext_glMapBufferRange
    = (PFNGLMAPBUFFERRANGEPROC)load (userptr, "glMapBufferRange");
  glext_glRenderbufferStorage
    = (PFNGLRENDERBUFFERSTORAGEPROC)load (userptr, "glRenderbufferStorage");
  glext_glRenderbufferStorageMultisample
    = (PFNGLRENDERBUFFERSTORAGEMULTISAMPLEPROC)load (
      userptr, "glRenderbufferStorageMultisample");
  glext_glTexParameterIiv
    = (PFNGLTEXPARAMETERIIVPROC)load (userptr, "glTexParameterIiv");
  glext_glTexParameterIuiv
    = (PFNGLTEXPARAMETERIUIVPROC)load (userptr, "glTexParameterIuiv");
  glext_glTransformFeedbackVaryings
    = (PFNGLTRANSFORMFEEDBACKVARYINGSPROC)load (userptr,
                                                "glTransformFeedbackVaryings");
  glext_glUniform1ui = (PFNGLUNIFORM1UIPROC)load (userptr, "glUniform1ui");
  glext_glUniform1uiv = (PFNGLUNIFORM1UIVPROC)load (userptr, "glUniform1uiv");
  glext_glUniform2ui = (PFNGLUNIFORM2UIPROC)load (userptr, "glUniform2ui");
  glext_glUniform2uiv = (PFNGLUNIFORM2UIVPROC)load (userptr, "glUniform2uiv");
  glext_glUniform3ui = (PFNGLUNIFORM3UIPROC)load (userptr, "glUniform3ui");
  glext_glUniform3uiv = (PFNGLUNIFORM3UIVPROC)load (userptr, "glUniform3uiv");
  glext_glUniform4ui = (PFNGLUNIFORM4UIPROC)load (userptr, "glUniform4ui");
  glext_glUniform4uiv = (PFNGLUNIFORM4UIVPROC)load (userptr, "glUniform4uiv");
  glext_glVertexAttribI1i
    = (PFNGLVERTEXATTRIBI1IPROC)load (userptr, "glVertexAttribI1i");
  glext_glVertexAttribI1iv
    = (PFNGLVERTEXATTRIBI1IVPROC)load (userptr, "glVertexAttribI1iv");
  glext_glVertexAttribI1ui
    = (PFNGLVERTEXATTRIBI1UIPROC)load (userptr, "glVertexAttribI1ui");
  glext_glVertexAttribI1uiv
    = (PFNGLVERTEXATTRIBI1UIVPROC)load (userptr, "glVertexAttribI1uiv");
  glext_glVertexAttribI2i
    = (PFNGLVERTEXATTRIBI2IPROC)load (userptr, "glVertexAttribI2i");
  glext_glVertexAttribI2iv
    = (PFNGLVERTEXATTRIBI2IVPROC)load (userptr, "glVertexAttribI2iv");
  glext_glVertexAttribI2ui
    = (PFNGLVERTEXATTRIBI2UIPROC)load (userptr, "glVertexAttribI2ui");
  glext_glVertexAttribI2uiv
    = (PFNGLVERTEXATTRIBI2UIVPROC)load (userptr, "glVertexAttribI2uiv");
  glext_glVertexAttribI3i
    = (PFNGLVERTEXATTRIBI3IPROC)load (userptr, "glVertexAttribI3i");
  glext_glVertexAttribI3iv
    = (PFNGLVERTEXATTRIBI3IVPROC)load (userptr, "glVertexAttribI3iv");
  glext_glVertexAttribI3ui
    = (PFNGLVERTEXATTRIBI3UIPROC)load (userptr, "glVertexAttribI3ui");
  glext_glVertexAttribI3uiv
    = (PFNGLVERTEXATTRIBI3UIVPROC)load (userptr, "glVertexAttribI3uiv");
  glext_glVertexAttribI4bv
    = (PFNGLVERTEXATTRIBI4BVPROC)load (userptr, "glVertexAttribI4bv");
  glext_glVertexAttribI4i
    = (PFNGLVERTEXATTRIBI4IPROC)load (userptr, "glVertexAttribI4i");
  glext_glVertexAttribI4iv
    = (PFNGLVERTEXATTRIBI4IVPROC)load (userptr, "glVertexAttribI4iv");
  glext_glVertexAttribI4sv
    = (PFNGLVERTEXATTRIBI4SVPROC)load (userptr, "glVertexAttribI4sv");
  glext_glVertexAttribI4ubv
    = (PFNGLVERTEXATTRIBI4UBVPROC)load (userptr, "glVertexAttribI4ubv");
  glext_glVertexAttribI4ui
    = (PFNGLVERTEXATTRIBI4UIPROC)load (userptr, "glVertexAttribI4ui");
  glext_glVertexAttribI4uiv
    = (PFNGLVERTEXATTRIBI4UIVPROC)load (userptr, "glVertexAttribI4uiv");
  glext_glVertexAttribI4usv
    = (PFNGLVERTEXATTRIBI4USVPROC)load (userptr, "glVertexAttribI4usv");
  glext_glVertexAttribIPointer
    = (PFNGLVERTEXATTRIBIPOINTERPROC)load (userptr, "glVertexAttribIPointer");
}
static void
glext_gl_load_GL_VERSION_3_1 (GLEXTuserptrloadfunc load, void* userptr) {
  if (!GLEXT_GL_VERSION_3_1)
    return;
  glext_glBindBufferBase
    = (PFNGLBINDBUFFERBASEPROC)load (userptr, "glBindBufferBase");
  glext_glBindBufferRange
    = (PFNGLBINDBUFFERRANGEPROC)load (userptr, "glBindBufferRange");
  glext_glCopyBufferSubData
    = (PFNGLCOPYBUFFERSUBDATAPROC)load (userptr, "glCopyBufferSubData");
  glext_glDrawArraysInstanced
    = (PFNGLDRAWARRAYSINSTANCEDPROC)load (userptr, "glDrawArraysInstanced");
  glext_glDrawElementsInstanced = (PFNGLDRAWELEMENTSINSTANCEDPROC)load (
    userptr, "glDrawElementsInstanced");
  glext_glGetActiveUniformBlockName
    = (PFNGLGETACTIVEUNIFORMBLOCKNAMEPROC)load (userptr,
                                                "glGetActiveUniformBlockName");
  glext_glGetActiveUniformBlockiv = (PFNGLGETACTIVEUNIFORMBLOCKIVPROC)load (
    userptr, "glGetActiveUniformBlockiv");
  glext_glGetActiveUniformName
    = (PFNGLGETACTIVEUNIFORMNAMEPROC)load (userptr, "glGetActiveUniformName");
  glext_glGetActiveUniformsiv
    = (PFNGLGETACTIVEUNIFORMSIVPROC)load (userptr, "glGetActiveUniformsiv");
  glext_glGetIntegeri_v
    = (PFNGLGETINTEGERI_VPROC)load (userptr, "glGetIntegeri_v");
  glext_glGetUniformBlockIndex
    = (PFNGLGETUNIFORMBLOCKINDEXPROC)load (userptr, "glGetUniformBlockIndex");
  glext_glGetUniformIndices
    = (PFNGLGETUNIFORMINDICESPROC)load (userptr, "glGetUniformIndices");
  glext_glPrimitiveRestartIndex = (PFNGLPRIMITIVERESTARTINDEXPROC)load (
    userptr, "glPrimitiveRestartIndex");
  glext_glTexBuffer = (PFNGLTEXBUFFERPROC)load (userptr, "glTexBuffer");
  glext_glUniformBlockBinding
    = (PFNGLUNIFORMBLOCKBINDINGPROC)load (userptr, "glUniformBlockBinding");
}
static void
glext_gl_load_GL_VERSION_3_2 (GLEXTuserptrloadfunc load, void* userptr) {
  if (!GLEXT_GL_VERSION_3_2)
    return;
  glext_glClientWaitSync
    = (PFNGLCLIENTWAITSYNCPROC)load (userptr, "glClientWaitSync");
  glext_glDeleteSync = (PFNGLDELETESYNCPROC)load (userptr, "glDeleteSync");
  glext_glDrawElementsBaseVertex = (PFNGLDRAWELEMENTSBASEVERTEXPROC)load (
    userptr, "glDrawElementsBaseVertex");
  glext_glDrawElementsInstancedBaseVertex
    = (PFNGLDRAWELEMENTSINSTANCEDBASEVERTEXPROC)load (
      userptr, "glDrawElementsInstancedBaseVertex");
  glext_glDrawRangeElementsBaseVertex
    = (PFNGLDRAWRANGEELEMENTSBASEVERTEXPROC)load (
      userptr, "glDrawRangeElementsBaseVertex");
  glext_glFenceSync = (PFNGLFENCESYNCPROC)load (userptr, "glFenceSync");
  glext_glFramebufferTexture
    = (PFNGLFRAMEBUFFERTEXTUREPROC)load (userptr, "glFramebufferTexture");
  glext_glGetBufferParameteri64v = (PFNGLGETBUFFERPARAMETERI64VPROC)load (
    userptr, "glGetBufferParameteri64v");
  glext_glGetInteger64i_v
    = (PFNGLGETINTEGER64I_VPROC)load (userptr, "glGetInteger64i_v");
  glext_glGetInteger64v
    = (PFNGLGETINTEGER64VPROC)load (userptr, "glGetInteger64v");
  glext_glGetMultisamplefv
    = (PFNGLGETMULTISAMPLEFVPROC)load (userptr, "glGetMultisamplefv");
  glext_glGetSynciv = (PFNGLGETSYNCIVPROC)load (userptr, "glGetSynciv");
  glext_glIsSync = (PFNGLISSYNCPROC)load (userptr, "glIsSync");
  glext_glMultiDrawElementsBaseVertex
    = (PFNGLMULTIDRAWELEMENTSBASEVERTEXPROC)load (
      userptr, "glMultiDrawElementsBaseVertex");
  glext_glProvokingVertex
    = (PFNGLPROVOKINGVERTEXPROC)load (userptr, "glProvokingVertex");
  glext_glSampleMaski = (PFNGLSAMPLEMASKIPROC)load (userptr, "glSampleMaski");
  glext_glTexImage2DMultisample = (PFNGLTEXIMAGE2DMULTISAMPLEPROC)load (
    userptr, "glTexImage2DMultisample");
  glext_glTexImage3DMultisample = (PFNGLTEXIMAGE3DMULTISAMPLEPROC)load (
    userptr, "glTexImage3DMultisample");
  glext_glWaitSync = (PFNGLWAITSYNCPROC)load (userptr, "glWaitSync");
}
static void
glext_gl_load_GL_VERSION_3_3 (GLEXTuserptrloadfunc load, void* userptr) {
  if (!GLEXT_GL_VERSION_3_3)
    return;
  glext_glBindFragDataLocationIndexed
    = (PFNGLBINDFRAGDATALOCATIONINDEXEDPROC)load (
      userptr, "glBindFragDataLocationIndexed");
  glext_glBindSampler = (PFNGLBINDSAMPLERPROC)load (userptr, "glBindSampler");
  glext_glDeleteSamplers
    = (PFNGLDELETESAMPLERSPROC)load (userptr, "glDeleteSamplers");
  glext_glGenSamplers = (PFNGLGENSAMPLERSPROC)load (userptr, "glGenSamplers");
  glext_glGetFragDataIndex
    = (PFNGLGETFRAGDATAINDEXPROC)load (userptr, "glGetFragDataIndex");
  glext_glGetQueryObjecti64v
    = (PFNGLGETQUERYOBJECTI64VPROC)load (userptr, "glGetQueryObjecti64v");
  glext_glGetQueryObjectui64v
    = (PFNGLGETQUERYOBJECTUI64VPROC)load (userptr, "glGetQueryObjectui64v");
  glext_glGetSamplerParameterIiv = (PFNGLGETSAMPLERPARAMETERIIVPROC)load (
    userptr, "glGetSamplerParameterIiv");
  glext_glGetSamplerParameterIuiv = (PFNGLGETSAMPLERPARAMETERIUIVPROC)load (
    userptr, "glGetSamplerParameterIuiv");
  glext_glGetSamplerParameterfv = (PFNGLGETSAMPLERPARAMETERFVPROC)load (
    userptr, "glGetSamplerParameterfv");
  glext_glGetSamplerParameteriv = (PFNGLGETSAMPLERPARAMETERIVPROC)load (
    userptr, "glGetSamplerParameteriv");
  glext_glIsSampler = (PFNGLISSAMPLERPROC)load (userptr, "glIsSampler");
  glext_glQueryCounter
    = (PFNGLQUERYCOUNTERPROC)load (userptr, "glQueryCounter");
  glext_glSamplerParameterIiv
    = (PFNGLSAMPLERPARAMETERIIVPROC)load (userptr, "glSamplerParameterIiv");
  glext_glSamplerParameterIuiv
    = (PFNGLSAMPLERPARAMETERIUIVPROC)load (userptr, "glSamplerParameterIuiv");
  glext_glSamplerParameterf
    = (PFNGLSAMPLERPARAMETERFPROC)load (userptr, "glSamplerParameterf");
  glext_glSamplerParameterfv
    = (PFNGLSAMPLERPARAMETERFVPROC)load (userptr, "glSamplerParameterfv");
  glext_glSamplerParameteri
    = (PFNGLSAMPLERPARAMETERIPROC)load (userptr, "glSamplerParameteri");
  glext_glSamplerParameteriv
    = (PFNGLSAMPLERPARAMETERIVPROC)load (userptr, "glSamplerParameteriv");
  glext_glVertexAttribDivisor
    = (PFNGLVERTEXATTRIBDIVISORPROC)load (userptr, "glVertexAttribDivisor");
  glext_glVertexAttribP1ui
    = (PFNGLVERTEXATTRIBP1UIPROC)load (userptr, "glVertexAttribP1ui");
  glext_glVertexAttribP1uiv
    = (PFNGLVERTEXATTRIBP1UIVPROC)load (userptr, "glVertexAttribP1uiv");
  glext_glVertexAttribP2ui
    = (PFNGLVERTEXATTRIBP2UIPROC)load (userptr, "glVertexAttribP2ui");
  glext_glVertexAttribP2uiv
    = (PFNGLVERTEXATTRIBP2UIVPROC)load (userptr, "glVertexAttribP2uiv");
  glext_glVertexAttribP3ui
    = (PFNGLVERTEXATTRIBP3UIPROC)load (userptr, "glVertexAttribP3ui");
  glext_glVertexAttribP3uiv
    = (PFNGLVERTEXATTRIBP3UIVPROC)load (userptr, "glVertexAttribP3uiv");
  glext_glVertexAttribP4ui
    = (PFNGLVERTEXATTRIBP4UIPROC)load (userptr, "glVertexAttribP4ui");
  glext_glVertexAttribP4uiv
    = (PFNGLVERTEXATTRIBP4UIVPROC)load (userptr, "glVertexAttribP4uiv");
}
static void
glext_gl_load_GL_VERSION_4_0 (GLEXTuserptrloadfunc load, void* userptr) {
  if (!GLEXT_GL_VERSION_4_0)
    return;
  glext_glBeginQueryIndexed
    = (PFNGLBEGINQUERYINDEXEDPROC)load (userptr, "glBeginQueryIndexed");
  glext_glBindTransformFeedback = (PFNGLBINDTRANSFORMFEEDBACKPROC)load (
    userptr, "glBindTransformFeedback");
  glext_glBlendEquationSeparatei = (PFNGLBLENDEQUATIONSEPARATEIPROC)load (
    userptr, "glBlendEquationSeparatei");
  glext_glBlendEquationi
    = (PFNGLBLENDEQUATIONIPROC)load (userptr, "glBlendEquationi");
  glext_glBlendFuncSeparatei
    = (PFNGLBLENDFUNCSEPARATEIPROC)load (userptr, "glBlendFuncSeparatei");
  glext_glBlendFunci = (PFNGLBLENDFUNCIPROC)load (userptr, "glBlendFunci");
  glext_glDeleteTransformFeedbacks = (PFNGLDELETETRANSFORMFEEDBACKSPROC)load (
    userptr, "glDeleteTransformFeedbacks");
  glext_glDrawArraysIndirect
    = (PFNGLDRAWARRAYSINDIRECTPROC)load (userptr, "glDrawArraysIndirect");
  glext_glDrawElementsIndirect
    = (PFNGLDRAWELEMENTSINDIRECTPROC)load (userptr, "glDrawElementsIndirect");
  glext_glDrawTransformFeedback = (PFNGLDRAWTRANSFORMFEEDBACKPROC)load (
    userptr, "glDrawTransformFeedback");
  glext_glDrawTransformFeedbackStream
    = (PFNGLDRAWTRANSFORMFEEDBACKSTREAMPROC)load (
      userptr, "glDrawTransformFeedbackStream");
  glext_glEndQueryIndexed
    = (PFNGLENDQUERYINDEXEDPROC)load (userptr, "glEndQueryIndexed");
  glext_glGenTransformFeedbacks = (PFNGLGENTRANSFORMFEEDBACKSPROC)load (
    userptr, "glGenTransformFeedbacks");
  glext_glGetActiveSubroutineName = (PFNGLGETACTIVESUBROUTINENAMEPROC)load (
    userptr, "glGetActiveSubroutineName");
  glext_glGetActiveSubroutineUniformName
    = (PFNGLGETACTIVESUBROUTINEUNIFORMNAMEPROC)load (
      userptr, "glGetActiveSubroutineUniformName");
  glext_glGetActiveSubroutineUniformiv
    = (PFNGLGETACTIVESUBROUTINEUNIFORMIVPROC)load (
      userptr, "glGetActiveSubroutineUniformiv");
  glext_glGetProgramStageiv
    = (PFNGLGETPROGRAMSTAGEIVPROC)load (userptr, "glGetProgramStageiv");
  glext_glGetQueryIndexediv
    = (PFNGLGETQUERYINDEXEDIVPROC)load (userptr, "glGetQueryIndexediv");
  glext_glGetSubroutineIndex
    = (PFNGLGETSUBROUTINEINDEXPROC)load (userptr, "glGetSubroutineIndex");
  glext_glGetSubroutineUniformLocation
    = (PFNGLGETSUBROUTINEUNIFORMLOCATIONPROC)load (
      userptr, "glGetSubroutineUniformLocation");
  glext_glGetUniformSubroutineuiv = (PFNGLGETUNIFORMSUBROUTINEUIVPROC)load (
    userptr, "glGetUniformSubroutineuiv");
  glext_glGetUniformdv
    = (PFNGLGETUNIFORMDVPROC)load (userptr, "glGetUniformdv");
  glext_glIsTransformFeedback
    = (PFNGLISTRANSFORMFEEDBACKPROC)load (userptr, "glIsTransformFeedback");
  glext_glMinSampleShading
    = (PFNGLMINSAMPLESHADINGPROC)load (userptr, "glMinSampleShading");
  glext_glPatchParameterfv
    = (PFNGLPATCHPARAMETERFVPROC)load (userptr, "glPatchParameterfv");
  glext_glPatchParameteri
    = (PFNGLPATCHPARAMETERIPROC)load (userptr, "glPatchParameteri");
  glext_glPauseTransformFeedback = (PFNGLPAUSETRANSFORMFEEDBACKPROC)load (
    userptr, "glPauseTransformFeedback");
  glext_glResumeTransformFeedback = (PFNGLRESUMETRANSFORMFEEDBACKPROC)load (
    userptr, "glResumeTransformFeedback");
  glext_glUniform1d = (PFNGLUNIFORM1DPROC)load (userptr, "glUniform1d");
  glext_glUniform1dv = (PFNGLUNIFORM1DVPROC)load (userptr, "glUniform1dv");
  glext_glUniform2d = (PFNGLUNIFORM2DPROC)load (userptr, "glUniform2d");
  glext_glUniform2dv = (PFNGLUNIFORM2DVPROC)load (userptr, "glUniform2dv");
  glext_glUniform3d = (PFNGLUNIFORM3DPROC)load (userptr, "glUniform3d");
  glext_glUniform3dv = (PFNGLUNIFORM3DVPROC)load (userptr, "glUniform3dv");
  glext_glUniform4d = (PFNGLUNIFORM4DPROC)load (userptr, "glUniform4d");
  glext_glUniform4dv = (PFNGLUNIFORM4DVPROC)load (userptr, "glUniform4dv");
  glext_glUniformMatrix2dv
    = (PFNGLUNIFORMMATRIX2DVPROC)load (userptr, "glUniformMatrix2dv");
  glext_glUniformMatrix2x3dv
    = (PFNGLUNIFORMMATRIX2X3DVPROC)load (userptr, "glUniformMatrix2x3dv");
  glext_glUniformMatrix2x4dv
    = (PFNGLUNIFORMMATRIX2X4DVPROC)load (userptr, "glUniformMatrix2x4dv");
  glext_glUniformMatrix3dv
    = (PFNGLUNIFORMMATRIX3DVPROC)load (userptr, "glUniformMatrix3dv");
  glext_glUniformMatrix3x2dv
    = (PFNGLUNIFORMMATRIX3X2DVPROC)load (userptr, "glUniformMatrix3x2dv");
  glext_glUniformMatrix3x4dv
    = (PFNGLUNIFORMMATRIX3X4DVPROC)load (userptr, "glUniformMatrix3x4dv");
  glext_glUniformMatrix4dv
    = (PFNGLUNIFORMMATRIX4DVPROC)load (userptr, "glUniformMatrix4dv");
  glext_glUniformMatrix4x2dv
    = (PFNGLUNIFORMMATRIX4X2DVPROC)load (userptr, "glUniformMatrix4x2dv");
  glext_glUniformMatrix4x3dv
    = (PFNGLUNIFORMMATRIX4X3DVPROC)load (userptr, "glUniformMatrix4x3dv");
  glext_glUniformSubroutinesuiv = (PFNGLUNIFORMSUBROUTINESUIVPROC)load (
    userptr, "glUniformSubroutinesuiv");
}
static void
glext_gl_load_GL_VERSION_4_1 (GLEXTuserptrloadfunc load, void* userptr) {
  if (!GLEXT_GL_VERSION_4_1)
    return;
  glext_glActiveShaderProgram
    = (PFNGLACTIVESHADERPROGRAMPROC)load (userptr, "glActiveShaderProgram");
  glext_glBindProgramPipeline
    = (PFNGLBINDPROGRAMPIPELINEPROC)load (userptr, "glBindProgramPipeline");
  glext_glClearDepthf = (PFNGLCLEARDEPTHFPROC)load (userptr, "glClearDepthf");
  glext_glCreateShaderProgramv
    = (PFNGLCREATESHADERPROGRAMVPROC)load (userptr, "glCreateShaderProgramv");
  glext_glDeleteProgramPipelines = (PFNGLDELETEPROGRAMPIPELINESPROC)load (
    userptr, "glDeleteProgramPipelines");
  glext_glDepthRangeArrayv
    = (PFNGLDEPTHRANGEARRAYVPROC)load (userptr, "glDepthRangeArrayv");
  glext_glDepthRangeIndexed
    = (PFNGLDEPTHRANGEINDEXEDPROC)load (userptr, "glDepthRangeIndexed");
  glext_glDepthRangef = (PFNGLDEPTHRANGEFPROC)load (userptr, "glDepthRangef");
  glext_glGenProgramPipelines
    = (PFNGLGENPROGRAMPIPELINESPROC)load (userptr, "glGenProgramPipelines");
  glext_glGetDoublei_v
    = (PFNGLGETDOUBLEI_VPROC)load (userptr, "glGetDoublei_v");
  glext_glGetFloati_v = (PFNGLGETFLOATI_VPROC)load (userptr, "glGetFloati_v");
  glext_glGetProgramBinary
    = (PFNGLGETPROGRAMBINARYPROC)load (userptr, "glGetProgramBinary");
  glext_glGetProgramPipelineInfoLog
    = (PFNGLGETPROGRAMPIPELINEINFOLOGPROC)load (userptr,
                                                "glGetProgramPipelineInfoLog");
  glext_glGetProgramPipelineiv
    = (PFNGLGETPROGRAMPIPELINEIVPROC)load (userptr, "glGetProgramPipelineiv");
  glext_glGetShaderPrecisionFormat = (PFNGLGETSHADERPRECISIONFORMATPROC)load (
    userptr, "glGetShaderPrecisionFormat");
  glext_glGetVertexAttribLdv
    = (PFNGLGETVERTEXATTRIBLDVPROC)load (userptr, "glGetVertexAttribLdv");
  glext_glIsProgramPipeline
    = (PFNGLISPROGRAMPIPELINEPROC)load (userptr, "glIsProgramPipeline");
  glext_glProgramBinary
    = (PFNGLPROGRAMBINARYPROC)load (userptr, "glProgramBinary");
  glext_glProgramParameteri
    = (PFNGLPROGRAMPARAMETERIPROC)load (userptr, "glProgramParameteri");
  glext_glProgramUniform1d
    = (PFNGLPROGRAMUNIFORM1DPROC)load (userptr, "glProgramUniform1d");
  glext_glProgramUniform1dv
    = (PFNGLPROGRAMUNIFORM1DVPROC)load (userptr, "glProgramUniform1dv");
  glext_glProgramUniform1f
    = (PFNGLPROGRAMUNIFORM1FPROC)load (userptr, "glProgramUniform1f");
  glext_glProgramUniform1fv
    = (PFNGLPROGRAMUNIFORM1FVPROC)load (userptr, "glProgramUniform1fv");
  glext_glProgramUniform1i
    = (PFNGLPROGRAMUNIFORM1IPROC)load (userptr, "glProgramUniform1i");
  glext_glProgramUniform1iv
    = (PFNGLPROGRAMUNIFORM1IVPROC)load (userptr, "glProgramUniform1iv");
  glext_glProgramUniform1ui
    = (PFNGLPROGRAMUNIFORM1UIPROC)load (userptr, "glProgramUniform1ui");
  glext_glProgramUniform1uiv
    = (PFNGLPROGRAMUNIFORM1UIVPROC)load (userptr, "glProgramUniform1uiv");
  glext_glProgramUniform2d
    = (PFNGLPROGRAMUNIFORM2DPROC)load (userptr, "glProgramUniform2d");
  glext_glProgramUniform2dv
    = (PFNGLPROGRAMUNIFORM2DVPROC)load (userptr, "glProgramUniform2dv");
  glext_glProgramUniform2f
    = (PFNGLPROGRAMUNIFORM2FPROC)load (userptr, "glProgramUniform2f");
  glext_glProgramUniform2fv
    = (PFNGLPROGRAMUNIFORM2FVPROC)load (userptr, "glProgramUniform2fv");
  glext_glProgramUniform2i
    = (PFNGLPROGRAMUNIFORM2IPROC)load (userptr, "glProgramUniform2i");
  glext_glProgramUniform2iv
    = (PFNGLPROGRAMUNIFORM2IVPROC)load (userptr, "glProgramUniform2iv");
  glext_glProgramUniform2ui
    = (PFNGLPROGRAMUNIFORM2UIPROC)load (userptr, "glProgramUniform2ui");
  glext_glProgramUniform2uiv
    = (PFNGLPROGRAMUNIFORM2UIVPROC)load (userptr, "glProgramUniform2uiv");
  glext_glProgramUniform3d
    = (PFNGLPROGRAMUNIFORM3DPROC)load (userptr, "glProgramUniform3d");
  glext_glProgramUniform3dv
    = (PFNGLPROGRAMUNIFORM3DVPROC)load (userptr, "glProgramUniform3dv");
  glext_glProgramUniform3f
    = (PFNGLPROGRAMUNIFORM3FPROC)load (userptr, "glProgramUniform3f");
  glext_glProgramUniform3fv
    = (PFNGLPROGRAMUNIFORM3FVPROC)load (userptr, "glProgramUniform3fv");
  glext_glProgramUniform3i
    = (PFNGLPROGRAMUNIFORM3IPROC)load (userptr, "glProgramUniform3i");
  glext_glProgramUniform3iv
    = (PFNGLPROGRAMUNIFORM3IVPROC)load (userptr, "glProgramUniform3iv");
  glext_glProgramUniform3ui
    = (PFNGLPROGRAMUNIFORM3UIPROC)load (userptr, "glProgramUniform3ui");
  glext_glProgramUniform3uiv
    = (PFNGLPROGRAMUNIFORM3UIVPROC)load (userptr, "glProgramUniform3uiv");
  glext_glProgramUniform4d
    = (PFNGLPROGRAMUNIFORM4DPROC)load (userptr, "glProgramUniform4d");
  glext_glProgramUniform4dv
    = (PFNGLPROGRAMUNIFORM4DVPROC)load (userptr, "glProgramUniform4dv");
  glext_glProgramUniform4f
    = (PFNGLPROGRAMUNIFORM4FPROC)load (userptr, "glProgramUniform4f");
  glext_glProgramUniform4fv
    = (PFNGLPROGRAMUNIFORM4FVPROC)load (userptr, "glProgramUniform4fv");
  glext_glProgramUniform4i
    = (PFNGLPROGRAMUNIFORM4IPROC)load (userptr, "glProgramUniform4i");
  glext_glProgramUniform4iv
    = (PFNGLPROGRAMUNIFORM4IVPROC)load (userptr, "glProgramUniform4iv");
  glext_glProgramUniform4ui
    = (PFNGLPROGRAMUNIFORM4UIPROC)load (userptr, "glProgramUniform4ui");
  glext_glProgramUniform4uiv
    = (PFNGLPROGRAMUNIFORM4UIVPROC)load (userptr, "glProgramUniform4uiv");
  glext_glProgramUniformMatrix2dv = (PFNGLPROGRAMUNIFORMMATRIX2DVPROC)load (
    userptr, "glProgramUniformMatrix2dv");
  glext_glProgramUniformMatrix2fv = (PFNGLPROGRAMUNIFORMMATRIX2FVPROC)load (
    userptr, "glProgramUniformMatrix2fv");
  glext_glProgramUniformMatrix2x3dv
    = (PFNGLPROGRAMUNIFORMMATRIX2X3DVPROC)load (userptr,
                                                "glProgramUniformMatrix2x3dv");
  glext_glProgramUniformMatrix2x3fv
    = (PFNGLPROGRAMUNIFORMMATRIX2X3FVPROC)load (userptr,
                                                "glProgramUniformMatrix2x3fv");
  glext_glProgramUniformMatrix2x4dv
    = (PFNGLPROGRAMUNIFORMMATRIX2X4DVPROC)load (userptr,
                                                "glProgramUniformMatrix2x4dv");
  glext_glProgramUniformMatrix2x4fv
    = (PFNGLPROGRAMUNIFORMMATRIX2X4FVPROC)load (userptr,
                                                "glProgramUniformMatrix2x4fv");
  glext_glProgramUniformMatrix3dv = (PFNGLPROGRAMUNIFORMMATRIX3DVPROC)load (
    userptr, "glProgramUniformMatrix3dv");
  glext_glProgramUniformMatrix3fv = (PFNGLPROGRAMUNIFORMMATRIX3FVPROC)load (
    userptr, "glProgramUniformMatrix3fv");
  glext_glProgramUniformMatrix3x2dv
    = (PFNGLPROGRAMUNIFORMMATRIX3X2DVPROC)load (userptr,
                                                "glProgramUniformMatrix3x2dv");
  glext_glProgramUniformMatrix3x2fv
    = (PFNGLPROGRAMUNIFORMMATRIX3X2FVPROC)load (userptr,
                                                "glProgramUniformMatrix3x2fv");
  glext_glProgramUniformMatrix3x4dv
    = (PFNGLPROGRAMUNIFORMMATRIX3X4DVPROC)load (userptr,
                                                "glProgramUniformMatrix3x4dv");
  glext_glProgramUniformMatrix3x4fv
    = (PFNGLPROGRAMUNIFORMMATRIX3X4FVPROC)load (userptr,
                                                "glProgramUniformMatrix3x4fv");
  glext_glProgramUniformMatrix4dv = (PFNGLPROGRAMUNIFORMMATRIX4DVPROC)load (
    userptr, "glProgramUniformMatrix4dv");
  glext_glProgramUniformMatrix4fv = (PFNGLPROGRAMUNIFORMMATRIX4FVPROC)load (
    userptr, "glProgramUniformMatrix4fv");
  glext_glProgramUniformMatrix4x2dv
    = (PFNGLPROGRAMUNIFORMMATRIX4X2DVPROC)load (userptr,
                                                "glProgramUniformMatrix4x2dv");
  glext_glProgramUniformMatrix4x2fv
    = (PFNGLPROGRAMUNIFORMMATRIX4X2FVPROC)load (userptr,
                                                "glProgramUniformMatrix4x2fv");
  glext_glProgramUniformMatrix4x3dv
    = (PFNGLPROGRAMUNIFORMMATRIX4X3DVPROC)load (userptr,
                                                "glProgramUniformMatrix4x3dv");
  glext_glProgramUniformMatrix4x3fv
    = (PFNGLPROGRAMUNIFORMMATRIX4X3FVPROC)load (userptr,
                                                "glProgramUniformMatrix4x3fv");
  glext_glReleaseShaderCompiler = (PFNGLRELEASESHADERCOMPILERPROC)load (
    userptr, "glReleaseShaderCompiler");
  glext_glScissorArrayv
    = (PFNGLSCISSORARRAYVPROC)load (userptr, "glScissorArrayv");
  glext_glScissorIndexed
    = (PFNGLSCISSORINDEXEDPROC)load (userptr, "glScissorIndexed");
  glext_glScissorIndexedv
    = (PFNGLSCISSORINDEXEDVPROC)load (userptr, "glScissorIndexedv");
  glext_glShaderBinary
    = (PFNGLSHADERBINARYPROC)load (userptr, "glShaderBinary");
  glext_glUseProgramStages
    = (PFNGLUSEPROGRAMSTAGESPROC)load (userptr, "glUseProgramStages");
  glext_glValidateProgramPipeline = (PFNGLVALIDATEPROGRAMPIPELINEPROC)load (
    userptr, "glValidateProgramPipeline");
  glext_glVertexAttribL1d
    = (PFNGLVERTEXATTRIBL1DPROC)load (userptr, "glVertexAttribL1d");
  glext_glVertexAttribL1dv
    = (PFNGLVERTEXATTRIBL1DVPROC)load (userptr, "glVertexAttribL1dv");
  glext_glVertexAttribL2d
    = (PFNGLVERTEXATTRIBL2DPROC)load (userptr, "glVertexAttribL2d");
  glext_glVertexAttribL2dv
    = (PFNGLVERTEXATTRIBL2DVPROC)load (userptr, "glVertexAttribL2dv");
  glext_glVertexAttribL3d
    = (PFNGLVERTEXATTRIBL3DPROC)load (userptr, "glVertexAttribL3d");
  glext_glVertexAttribL3dv
    = (PFNGLVERTEXATTRIBL3DVPROC)load (userptr, "glVertexAttribL3dv");
  glext_glVertexAttribL4d
    = (PFNGLVERTEXATTRIBL4DPROC)load (userptr, "glVertexAttribL4d");
  glext_glVertexAttribL4dv
    = (PFNGLVERTEXATTRIBL4DVPROC)load (userptr, "glVertexAttribL4dv");
  glext_glVertexAttribLPointer
    = (PFNGLVERTEXATTRIBLPOINTERPROC)load (userptr, "glVertexAttribLPointer");
  glext_glViewportArrayv
    = (PFNGLVIEWPORTARRAYVPROC)load (userptr, "glViewportArrayv");
  glext_glViewportIndexedf
    = (PFNGLVIEWPORTINDEXEDFPROC)load (userptr, "glViewportIndexedf");
  glext_glViewportIndexedfv
    = (PFNGLVIEWPORTINDEXEDFVPROC)load (userptr, "glViewportIndexedfv");
}
static void
glext_gl_load_GL_VERSION_4_2 (GLEXTuserptrloadfunc load, void* userptr) {
  if (!GLEXT_GL_VERSION_4_2)
    return;
  glext_glBindImageTexture
    = (PFNGLBINDIMAGETEXTUREPROC)load (userptr, "glBindImageTexture");
  glext_glDrawArraysInstancedBaseInstance
    = (PFNGLDRAWARRAYSINSTANCEDBASEINSTANCEPROC)load (
      userptr, "glDrawArraysInstancedBaseInstance");
  glext_glDrawElementsInstancedBaseInstance
    = (PFNGLDRAWELEMENTSINSTANCEDBASEINSTANCEPROC)load (
      userptr, "glDrawElementsInstancedBaseInstance");
  glext_glDrawElementsInstancedBaseVertexBaseInstance
    = (PFNGLDRAWELEMENTSINSTANCEDBASEVERTEXBASEINSTANCEPROC)load (
      userptr, "glDrawElementsInstancedBaseVertexBaseInstance");
  glext_glDrawTransformFeedbackInstanced
    = (PFNGLDRAWTRANSFORMFEEDBACKINSTANCEDPROC)load (
      userptr, "glDrawTransformFeedbackInstanced");
  glext_glDrawTransformFeedbackStreamInstanced
    = (PFNGLDRAWTRANSFORMFEEDBACKSTREAMINSTANCEDPROC)load (
      userptr, "glDrawTransformFeedbackStreamInstanced");
  glext_glGetActiveAtomicCounterBufferiv
    = (PFNGLGETACTIVEATOMICCOUNTERBUFFERIVPROC)load (
      userptr, "glGetActiveAtomicCounterBufferiv");
  glext_glGetInternalformativ
    = (PFNGLGETINTERNALFORMATIVPROC)load (userptr, "glGetInternalformativ");
  glext_glMemoryBarrier
    = (PFNGLMEMORYBARRIERPROC)load (userptr, "glMemoryBarrier");
  glext_glTexStorage1D
    = (PFNGLTEXSTORAGE1DPROC)load (userptr, "glTexStorage1D");
  glext_glTexStorage2D
    = (PFNGLTEXSTORAGE2DPROC)load (userptr, "glTexStorage2D");
  glext_glTexStorage3D
    = (PFNGLTEXSTORAGE3DPROC)load (userptr, "glTexStorage3D");
}
static void
glext_gl_load_GL_VERSION_4_3 (GLEXTuserptrloadfunc load, void* userptr) {
  if (!GLEXT_GL_VERSION_4_3)
    return;
  glext_glBindVertexBuffer
    = (PFNGLBINDVERTEXBUFFERPROC)load (userptr, "glBindVertexBuffer");
  glext_glClearBufferData
    = (PFNGLCLEARBUFFERDATAPROC)load (userptr, "glClearBufferData");
  glext_glClearBufferSubData
    = (PFNGLCLEARBUFFERSUBDATAPROC)load (userptr, "glClearBufferSubData");
  glext_glCopyImageSubData
    = (PFNGLCOPYIMAGESUBDATAPROC)load (userptr, "glCopyImageSubData");
  glext_glDebugMessageCallback
    = (PFNGLDEBUGMESSAGECALLBACKPROC)load (userptr, "glDebugMessageCallback");
  glext_glDebugMessageControl
    = (PFNGLDEBUGMESSAGECONTROLPROC)load (userptr, "glDebugMessageControl");
  glext_glDebugMessageInsert
    = (PFNGLDEBUGMESSAGEINSERTPROC)load (userptr, "glDebugMessageInsert");
  glext_glDispatchCompute
    = (PFNGLDISPATCHCOMPUTEPROC)load (userptr, "glDispatchCompute");
  glext_glDispatchComputeIndirect = (PFNGLDISPATCHCOMPUTEINDIRECTPROC)load (
    userptr, "glDispatchComputeIndirect");
  glext_glFramebufferParameteri = (PFNGLFRAMEBUFFERPARAMETERIPROC)load (
    userptr, "glFramebufferParameteri");
  glext_glGetDebugMessageLog
    = (PFNGLGETDEBUGMESSAGELOGPROC)load (userptr, "glGetDebugMessageLog");
  glext_glGetFramebufferParameteriv
    = (PFNGLGETFRAMEBUFFERPARAMETERIVPROC)load (userptr,
                                                "glGetFramebufferParameteriv");
  glext_glGetInternalformati64v = (PFNGLGETINTERNALFORMATI64VPROC)load (
    userptr, "glGetInternalformati64v");
  glext_glGetObjectLabel
    = (PFNGLGETOBJECTLABELPROC)load (userptr, "glGetObjectLabel");
  glext_glGetObjectPtrLabel
    = (PFNGLGETOBJECTPTRLABELPROC)load (userptr, "glGetObjectPtrLabel");
  glext_glGetPointerv = (PFNGLGETPOINTERVPROC)load (userptr, "glGetPointerv");
  glext_glGetProgramInterfaceiv = (PFNGLGETPROGRAMINTERFACEIVPROC)load (
    userptr, "glGetProgramInterfaceiv");
  glext_glGetProgramResourceIndex = (PFNGLGETPROGRAMRESOURCEINDEXPROC)load (
    userptr, "glGetProgramResourceIndex");
  glext_glGetProgramResourceLocation
    = (PFNGLGETPROGRAMRESOURCELOCATIONPROC)load (
      userptr, "glGetProgramResourceLocation");
  glext_glGetProgramResourceLocationIndex
    = (PFNGLGETPROGRAMRESOURCELOCATIONINDEXPROC)load (
      userptr, "glGetProgramResourceLocationIndex");
  glext_glGetProgramResourceName = (PFNGLGETPROGRAMRESOURCENAMEPROC)load (
    userptr, "glGetProgramResourceName");
  glext_glGetProgramResourceiv
    = (PFNGLGETPROGRAMRESOURCEIVPROC)load (userptr, "glGetProgramResourceiv");
  glext_glInvalidateBufferData
    = (PFNGLINVALIDATEBUFFERDATAPROC)load (userptr, "glInvalidateBufferData");
  glext_glInvalidateBufferSubData = (PFNGLINVALIDATEBUFFERSUBDATAPROC)load (
    userptr, "glInvalidateBufferSubData");
  glext_glInvalidateFramebuffer = (PFNGLINVALIDATEFRAMEBUFFERPROC)load (
    userptr, "glInvalidateFramebuffer");
  glext_glInvalidateSubFramebuffer = (PFNGLINVALIDATESUBFRAMEBUFFERPROC)load (
    userptr, "glInvalidateSubFramebuffer");
  glext_glInvalidateTexImage
    = (PFNGLINVALIDATETEXIMAGEPROC)load (userptr, "glInvalidateTexImage");
  glext_glInvalidateTexSubImage = (PFNGLINVALIDATETEXSUBIMAGEPROC)load (
    userptr, "glInvalidateTexSubImage");
  glext_glMultiDrawArraysIndirect = (PFNGLMULTIDRAWARRAYSINDIRECTPROC)load (
    userptr, "glMultiDrawArraysIndirect");
  glext_glMultiDrawElementsIndirect
    = (PFNGLMULTIDRAWELEMENTSINDIRECTPROC)load (userptr,
                                                "glMultiDrawElementsIndirect");
  glext_glObjectLabel = (PFNGLOBJECTLABELPROC)load (userptr, "glObjectLabel");
  glext_glObjectPtrLabel
    = (PFNGLOBJECTPTRLABELPROC)load (userptr, "glObjectPtrLabel");
  glext_glPopDebugGroup
    = (PFNGLPOPDEBUGGROUPPROC)load (userptr, "glPopDebugGroup");
  glext_glPushDebugGroup
    = (PFNGLPUSHDEBUGGROUPPROC)load (userptr, "glPushDebugGroup");
  glext_glShaderStorageBlockBinding
    = (PFNGLSHADERSTORAGEBLOCKBINDINGPROC)load (userptr,
                                                "glShaderStorageBlockBinding");
  glext_glTexBufferRange
    = (PFNGLTEXBUFFERRANGEPROC)load (userptr, "glTexBufferRange");
  glext_glTexStorage2DMultisample = (PFNGLTEXSTORAGE2DMULTISAMPLEPROC)load (
    userptr, "glTexStorage2DMultisample");
  glext_glTexStorage3DMultisample = (PFNGLTEXSTORAGE3DMULTISAMPLEPROC)load (
    userptr, "glTexStorage3DMultisample");
  glext_glTextureView = (PFNGLTEXTUREVIEWPROC)load (userptr, "glTextureView");
  glext_glVertexAttribBinding
    = (PFNGLVERTEXATTRIBBINDINGPROC)load (userptr, "glVertexAttribBinding");
  glext_glVertexAttribFormat
    = (PFNGLVERTEXATTRIBFORMATPROC)load (userptr, "glVertexAttribFormat");
  glext_glVertexAttribIFormat
    = (PFNGLVERTEXATTRIBIFORMATPROC)load (userptr, "glVertexAttribIFormat");
  glext_glVertexAttribLFormat
    = (PFNGLVERTEXATTRIBLFORMATPROC)load (userptr, "glVertexAttribLFormat");
  glext_glVertexBindingDivisor
    = (PFNGLVERTEXBINDINGDIVISORPROC)load (userptr, "glVertexBindingDivisor");
}
static void
glext_gl_load_GL_VERSION_4_4 (GLEXTuserptrloadfunc load, void* userptr) {
  if (!GLEXT_GL_VERSION_4_4)
    return;
  glext_glBindBuffersBase
    = (PFNGLBINDBUFFERSBASEPROC)load (userptr, "glBindBuffersBase");
  glext_glBindBuffersRange
    = (PFNGLBINDBUFFERSRANGEPROC)load (userptr, "glBindBuffersRange");
  glext_glBindImageTextures
    = (PFNGLBINDIMAGETEXTURESPROC)load (userptr, "glBindImageTextures");
  glext_glBindSamplers
    = (PFNGLBINDSAMPLERSPROC)load (userptr, "glBindSamplers");
  glext_glBindTextures
    = (PFNGLBINDTEXTURESPROC)load (userptr, "glBindTextures");
  glext_glBindVertexBuffers
    = (PFNGLBINDVERTEXBUFFERSPROC)load (userptr, "glBindVertexBuffers");
  glext_glBufferStorage
    = (PFNGLBUFFERSTORAGEPROC)load (userptr, "glBufferStorage");
  glext_glClearTexImage
    = (PFNGLCLEARTEXIMAGEPROC)load (userptr, "glClearTexImage");
  glext_glClearTexSubImage
    = (PFNGLCLEARTEXSUBIMAGEPROC)load (userptr, "glClearTexSubImage");
}
static void
glext_gl_load_GL_VERSION_4_5 (GLEXTuserptrloadfunc load, void* userptr) {
  if (!GLEXT_GL_VERSION_4_5)
    return;
  glext_glBindTextureUnit
    = (PFNGLBINDTEXTUREUNITPROC)load (userptr, "glBindTextureUnit");
  glext_glBlitNamedFramebuffer
    = (PFNGLBLITNAMEDFRAMEBUFFERPROC)load (userptr, "glBlitNamedFramebuffer");
  glext_glCheckNamedFramebufferStatus
    = (PFNGLCHECKNAMEDFRAMEBUFFERSTATUSPROC)load (
      userptr, "glCheckNamedFramebufferStatus");
  glext_glClearNamedBufferData
    = (PFNGLCLEARNAMEDBUFFERDATAPROC)load (userptr, "glClearNamedBufferData");
  glext_glClearNamedBufferSubData = (PFNGLCLEARNAMEDBUFFERSUBDATAPROC)load (
    userptr, "glClearNamedBufferSubData");
  glext_glClearNamedFramebufferfi = (PFNGLCLEARNAMEDFRAMEBUFFERFIPROC)load (
    userptr, "glClearNamedFramebufferfi");
  glext_glClearNamedFramebufferfv = (PFNGLCLEARNAMEDFRAMEBUFFERFVPROC)load (
    userptr, "glClearNamedFramebufferfv");
  glext_glClearNamedFramebufferiv = (PFNGLCLEARNAMEDFRAMEBUFFERIVPROC)load (
    userptr, "glClearNamedFramebufferiv");
  glext_glClearNamedFramebufferuiv = (PFNGLCLEARNAMEDFRAMEBUFFERUIVPROC)load (
    userptr, "glClearNamedFramebufferuiv");
  glext_glClipControl = (PFNGLCLIPCONTROLPROC)load (userptr, "glClipControl");
  glext_glCompressedTextureSubImage1D
    = (PFNGLCOMPRESSEDTEXTURESUBIMAGE1DPROC)load (
      userptr, "glCompressedTextureSubImage1D");
  glext_glCompressedTextureSubImage2D
    = (PFNGLCOMPRESSEDTEXTURESUBIMAGE2DPROC)load (
      userptr, "glCompressedTextureSubImage2D");
  glext_glCompressedTextureSubImage3D
    = (PFNGLCOMPRESSEDTEXTURESUBIMAGE3DPROC)load (
      userptr, "glCompressedTextureSubImage3D");
  glext_glCopyNamedBufferSubData = (PFNGLCOPYNAMEDBUFFERSUBDATAPROC)load (
    userptr, "glCopyNamedBufferSubData");
  glext_glCopyTextureSubImage1D = (PFNGLCOPYTEXTURESUBIMAGE1DPROC)load (
    userptr, "glCopyTextureSubImage1D");
  glext_glCopyTextureSubImage2D = (PFNGLCOPYTEXTURESUBIMAGE2DPROC)load (
    userptr, "glCopyTextureSubImage2D");
  glext_glCopyTextureSubImage3D = (PFNGLCOPYTEXTURESUBIMAGE3DPROC)load (
    userptr, "glCopyTextureSubImage3D");
  glext_glCreateBuffers
    = (PFNGLCREATEBUFFERSPROC)load (userptr, "glCreateBuffers");
  glext_glCreateFramebuffers
    = (PFNGLCREATEFRAMEBUFFERSPROC)load (userptr, "glCreateFramebuffers");
  glext_glCreateProgramPipelines = (PFNGLCREATEPROGRAMPIPELINESPROC)load (
    userptr, "glCreateProgramPipelines");
  glext_glCreateQueries
    = (PFNGLCREATEQUERIESPROC)load (userptr, "glCreateQueries");
  glext_glCreateRenderbuffers
    = (PFNGLCREATERENDERBUFFERSPROC)load (userptr, "glCreateRenderbuffers");
  glext_glCreateSamplers
    = (PFNGLCREATESAMPLERSPROC)load (userptr, "glCreateSamplers");
  glext_glCreateTextures
    = (PFNGLCREATETEXTURESPROC)load (userptr, "glCreateTextures");
  glext_glCreateTransformFeedbacks = (PFNGLCREATETRANSFORMFEEDBACKSPROC)load (
    userptr, "glCreateTransformFeedbacks");
  glext_glCreateVertexArrays
    = (PFNGLCREATEVERTEXARRAYSPROC)load (userptr, "glCreateVertexArrays");
  glext_glDisableVertexArrayAttrib = (PFNGLDISABLEVERTEXARRAYATTRIBPROC)load (
    userptr, "glDisableVertexArrayAttrib");
  glext_glEnableVertexArrayAttrib = (PFNGLENABLEVERTEXARRAYATTRIBPROC)load (
    userptr, "glEnableVertexArrayAttrib");
  glext_glFlushMappedNamedBufferRange
    = (PFNGLFLUSHMAPPEDNAMEDBUFFERRANGEPROC)load (
      userptr, "glFlushMappedNamedBufferRange");
  glext_glGenerateTextureMipmap = (PFNGLGENERATETEXTUREMIPMAPPROC)load (
    userptr, "glGenerateTextureMipmap");
  glext_glGetCompressedTextureImage
    = (PFNGLGETCOMPRESSEDTEXTUREIMAGEPROC)load (userptr,
                                                "glGetCompressedTextureImage");
  glext_glGetCompressedTextureSubImage
    = (PFNGLGETCOMPRESSEDTEXTURESUBIMAGEPROC)load (
      userptr, "glGetCompressedTextureSubImage");
  glext_glGetGraphicsResetStatus = (PFNGLGETGRAPHICSRESETSTATUSPROC)load (
    userptr, "glGetGraphicsResetStatus");
  glext_glGetNamedBufferParameteri64v
    = (PFNGLGETNAMEDBUFFERPARAMETERI64VPROC)load (
      userptr, "glGetNamedBufferParameteri64v");
  glext_glGetNamedBufferParameteriv
    = (PFNGLGETNAMEDBUFFERPARAMETERIVPROC)load (userptr,
                                                "glGetNamedBufferParameteriv");
  glext_glGetNamedBufferPointerv = (PFNGLGETNAMEDBUFFERPOINTERVPROC)load (
    userptr, "glGetNamedBufferPointerv");
  glext_glGetNamedBufferSubData = (PFNGLGETNAMEDBUFFERSUBDATAPROC)load (
    userptr, "glGetNamedBufferSubData");
  glext_glGetNamedFramebufferAttachmentParameteriv
    = (PFNGLGETNAMEDFRAMEBUFFERATTACHMENTPARAMETERIVPROC)load (
      userptr, "glGetNamedFramebufferAttachmentParameteriv");
  glext_glGetNamedFramebufferParameteriv
    = (PFNGLGETNAMEDFRAMEBUFFERPARAMETERIVPROC)load (
      userptr, "glGetNamedFramebufferParameteriv");
  glext_glGetNamedRenderbufferParameteriv
    = (PFNGLGETNAMEDRENDERBUFFERPARAMETERIVPROC)load (
      userptr, "glGetNamedRenderbufferParameteriv");
  glext_glGetQueryBufferObjecti64v = (PFNGLGETQUERYBUFFEROBJECTI64VPROC)load (
    userptr, "glGetQueryBufferObjecti64v");
  glext_glGetQueryBufferObjectiv = (PFNGLGETQUERYBUFFEROBJECTIVPROC)load (
    userptr, "glGetQueryBufferObjectiv");
  glext_glGetQueryBufferObjectui64v
    = (PFNGLGETQUERYBUFFEROBJECTUI64VPROC)load (userptr,
                                                "glGetQueryBufferObjectui64v");
  glext_glGetQueryBufferObjectuiv = (PFNGLGETQUERYBUFFEROBJECTUIVPROC)load (
    userptr, "glGetQueryBufferObjectuiv");
  glext_glGetTextureImage
    = (PFNGLGETTEXTUREIMAGEPROC)load (userptr, "glGetTextureImage");
  glext_glGetTextureLevelParameterfv
    = (PFNGLGETTEXTURELEVELPARAMETERFVPROC)load (
      userptr, "glGetTextureLevelParameterfv");
  glext_glGetTextureLevelParameteriv
    = (PFNGLGETTEXTURELEVELPARAMETERIVPROC)load (
      userptr, "glGetTextureLevelParameteriv");
  glext_glGetTextureParameterIiv = (PFNGLGETTEXTUREPARAMETERIIVPROC)load (
    userptr, "glGetTextureParameterIiv");
  glext_glGetTextureParameterIuiv = (PFNGLGETTEXTUREPARAMETERIUIVPROC)load (
    userptr, "glGetTextureParameterIuiv");
  glext_glGetTextureParameterfv = (PFNGLGETTEXTUREPARAMETERFVPROC)load (
    userptr, "glGetTextureParameterfv");
  glext_glGetTextureParameteriv = (PFNGLGETTEXTUREPARAMETERIVPROC)load (
    userptr, "glGetTextureParameteriv");
  glext_glGetTextureSubImage
    = (PFNGLGETTEXTURESUBIMAGEPROC)load (userptr, "glGetTextureSubImage");
  glext_glGetTransformFeedbacki64_v
    = (PFNGLGETTRANSFORMFEEDBACKI64_VPROC)load (userptr,
                                                "glGetTransformFeedbacki64_v");
  glext_glGetTransformFeedbacki_v = (PFNGLGETTRANSFORMFEEDBACKI_VPROC)load (
    userptr, "glGetTransformFeedbacki_v");
  glext_glGetTransformFeedbackiv = (PFNGLGETTRANSFORMFEEDBACKIVPROC)load (
    userptr, "glGetTransformFeedbackiv");
  glext_glGetVertexArrayIndexed64iv
    = (PFNGLGETVERTEXARRAYINDEXED64IVPROC)load (userptr,
                                                "glGetVertexArrayIndexed64iv");
  glext_glGetVertexArrayIndexediv = (PFNGLGETVERTEXARRAYINDEXEDIVPROC)load (
    userptr, "glGetVertexArrayIndexediv");
  glext_glGetVertexArrayiv
    = (PFNGLGETVERTEXARRAYIVPROC)load (userptr, "glGetVertexArrayiv");
  glext_glGetnCompressedTexImage = (PFNGLGETNCOMPRESSEDTEXIMAGEPROC)load (
    userptr, "glGetnCompressedTexImage");
  glext_glGetnTexImage
    = (PFNGLGETNTEXIMAGEPROC)load (userptr, "glGetnTexImage");
  glext_glGetnUniformdv
    = (PFNGLGETNUNIFORMDVPROC)load (userptr, "glGetnUniformdv");
  glext_glGetnUniformfv
    = (PFNGLGETNUNIFORMFVPROC)load (userptr, "glGetnUniformfv");
  glext_glGetnUniformiv
    = (PFNGLGETNUNIFORMIVPROC)load (userptr, "glGetnUniformiv");
  glext_glGetnUniformuiv
    = (PFNGLGETNUNIFORMUIVPROC)load (userptr, "glGetnUniformuiv");
  glext_glInvalidateNamedFramebufferData
    = (PFNGLINVALIDATENAMEDFRAMEBUFFERDATAPROC)load (
      userptr, "glInvalidateNamedFramebufferData");
  glext_glInvalidateNamedFramebufferSubData
    = (PFNGLINVALIDATENAMEDFRAMEBUFFERSUBDATAPROC)load (
      userptr, "glInvalidateNamedFramebufferSubData");
  glext_glMapNamedBuffer
    = (PFNGLMAPNAMEDBUFFERPROC)load (userptr, "glMapNamedBuffer");
  glext_glMapNamedBufferRange
    = (PFNGLMAPNAMEDBUFFERRANGEPROC)load (userptr, "glMapNamedBufferRange");
  glext_glMemoryBarrierByRegion = (PFNGLMEMORYBARRIERBYREGIONPROC)load (
    userptr, "glMemoryBarrierByRegion");
  glext_glNamedBufferData
    = (PFNGLNAMEDBUFFERDATAPROC)load (userptr, "glNamedBufferData");
  glext_glNamedBufferStorage
    = (PFNGLNAMEDBUFFERSTORAGEPROC)load (userptr, "glNamedBufferStorage");
  glext_glNamedBufferSubData
    = (PFNGLNAMEDBUFFERSUBDATAPROC)load (userptr, "glNamedBufferSubData");
  glext_glNamedFramebufferDrawBuffer
    = (PFNGLNAMEDFRAMEBUFFERDRAWBUFFERPROC)load (
      userptr, "glNamedFramebufferDrawBuffer");
  glext_glNamedFramebufferDrawBuffers
    = (PFNGLNAMEDFRAMEBUFFERDRAWBUFFERSPROC)load (
      userptr, "glNamedFramebufferDrawBuffers");
  glext_glNamedFramebufferParameteri
    = (PFNGLNAMEDFRAMEBUFFERPARAMETERIPROC)load (
      userptr, "glNamedFramebufferParameteri");
  glext_glNamedFramebufferReadBuffer
    = (PFNGLNAMEDFRAMEBUFFERREADBUFFERPROC)load (
      userptr, "glNamedFramebufferReadBuffer");
  glext_glNamedFramebufferRenderbuffer
    = (PFNGLNAMEDFRAMEBUFFERRENDERBUFFERPROC)load (
      userptr, "glNamedFramebufferRenderbuffer");
  glext_glNamedFramebufferTexture = (PFNGLNAMEDFRAMEBUFFERTEXTUREPROC)load (
    userptr, "glNamedFramebufferTexture");
  glext_glNamedFramebufferTextureLayer
    = (PFNGLNAMEDFRAMEBUFFERTEXTURELAYERPROC)load (
      userptr, "glNamedFramebufferTextureLayer");
  glext_glNamedRenderbufferStorage = (PFNGLNAMEDRENDERBUFFERSTORAGEPROC)load (
    userptr, "glNamedRenderbufferStorage");
  glext_glNamedRenderbufferStorageMultisample
    = (PFNGLNAMEDRENDERBUFFERSTORAGEMULTISAMPLEPROC)load (
      userptr, "glNamedRenderbufferStorageMultisample");
  glext_glReadnPixels = (PFNGLREADNPIXELSPROC)load (userptr, "glReadnPixels");
  glext_glTextureBarrier
    = (PFNGLTEXTUREBARRIERPROC)load (userptr, "glTextureBarrier");
  glext_glTextureBuffer
    = (PFNGLTEXTUREBUFFERPROC)load (userptr, "glTextureBuffer");
  glext_glTextureBufferRange
    = (PFNGLTEXTUREBUFFERRANGEPROC)load (userptr, "glTextureBufferRange");
  glext_glTextureParameterIiv
    = (PFNGLTEXTUREPARAMETERIIVPROC)load (userptr, "glTextureParameterIiv");
  glext_glTextureParameterIuiv
    = (PFNGLTEXTUREPARAMETERIUIVPROC)load (userptr, "glTextureParameterIuiv");
  glext_glTextureParameterf
    = (PFNGLTEXTUREPARAMETERFPROC)load (userptr, "glTextureParameterf");
  glext_glTextureParameterfv
    = (PFNGLTEXTUREPARAMETERFVPROC)load (userptr, "glTextureParameterfv");
  glext_glTextureParameteri
    = (PFNGLTEXTUREPARAMETERIPROC)load (userptr, "glTextureParameteri");
  glext_glTextureParameteriv
    = (PFNGLTEXTUREPARAMETERIVPROC)load (userptr, "glTextureParameteriv");
  glext_glTextureStorage1D
    = (PFNGLTEXTURESTORAGE1DPROC)load (userptr, "glTextureStorage1D");
  glext_glTextureStorage2D
    = (PFNGLTEXTURESTORAGE2DPROC)load (userptr, "glTextureStorage2D");
  glext_glTextureStorage2DMultisample
    = (PFNGLTEXTURESTORAGE2DMULTISAMPLEPROC)load (
      userptr, "glTextureStorage2DMultisample");
  glext_glTextureStorage3D
    = (PFNGLTEXTURESTORAGE3DPROC)load (userptr, "glTextureStorage3D");
  glext_glTextureStorage3DMultisample
    = (PFNGLTEXTURESTORAGE3DMULTISAMPLEPROC)load (
      userptr, "glTextureStorage3DMultisample");
  glext_glTextureSubImage1D
    = (PFNGLTEXTURESUBIMAGE1DPROC)load (userptr, "glTextureSubImage1D");
  glext_glTextureSubImage2D
    = (PFNGLTEXTURESUBIMAGE2DPROC)load (userptr, "glTextureSubImage2D");
  glext_glTextureSubImage3D
    = (PFNGLTEXTURESUBIMAGE3DPROC)load (userptr, "glTextureSubImage3D");
  glext_glTransformFeedbackBufferBase
    = (PFNGLTRANSFORMFEEDBACKBUFFERBASEPROC)load (
      userptr, "glTransformFeedbackBufferBase");
  glext_glTransformFeedbackBufferRange
    = (PFNGLTRANSFORMFEEDBACKBUFFERRANGEPROC)load (
      userptr, "glTransformFeedbackBufferRange");
  glext_glUnmapNamedBuffer
    = (PFNGLUNMAPNAMEDBUFFERPROC)load (userptr, "glUnmapNamedBuffer");
  glext_glVertexArrayAttribBinding = (PFNGLVERTEXARRAYATTRIBBINDINGPROC)load (
    userptr, "glVertexArrayAttribBinding");
  glext_glVertexArrayAttribFormat = (PFNGLVERTEXARRAYATTRIBFORMATPROC)load (
    userptr, "glVertexArrayAttribFormat");
  glext_glVertexArrayAttribIFormat = (PFNGLVERTEXARRAYATTRIBIFORMATPROC)load (
    userptr, "glVertexArrayAttribIFormat");
  glext_glVertexArrayAttribLFormat = (PFNGLVERTEXARRAYATTRIBLFORMATPROC)load (
    userptr, "glVertexArrayAttribLFormat");
  glext_glVertexArrayBindingDivisor
    = (PFNGLVERTEXARRAYBINDINGDIVISORPROC)load (userptr,
                                                "glVertexArrayBindingDivisor");
  glext_glVertexArrayElementBuffer = (PFNGLVERTEXARRAYELEMENTBUFFERPROC)load (
    userptr, "glVertexArrayElementBuffer");
  glext_glVertexArrayVertexBuffer = (PFNGLVERTEXARRAYVERTEXBUFFERPROC)load (
    userptr, "glVertexArrayVertexBuffer");
  glext_glVertexArrayVertexBuffers = (PFNGLVERTEXARRAYVERTEXBUFFERSPROC)load (
    userptr, "glVertexArrayVertexBuffers");
}
static void
glext_gl_load_GL_VERSION_4_6 (GLEXTuserptrloadfunc load, void* userptr) {
  if (!GLEXT_GL_VERSION_4_6)
    return;
  glext_glMultiDrawArraysIndirectCount
    = (PFNGLMULTIDRAWARRAYSINDIRECTCOUNTPROC)load (
      userptr, "glMultiDrawArraysIndirectCount");
  glext_glMultiDrawElementsIndirectCount
    = (PFNGLMULTIDRAWELEMENTSINDIRECTCOUNTPROC)load (
      userptr, "glMultiDrawElementsIndirectCount");
  glext_glPolygonOffsetClamp
    = (PFNGLPOLYGONOFFSETCLAMPPROC)load (userptr, "glPolygonOffsetClamp");
  glext_glSpecializeShader
    = (PFNGLSPECIALIZESHADERPROC)load (userptr, "glSpecializeShader");
}
static void
glext_gl_load_GL_3DFX_tbuffer (GLEXTuserptrloadfunc load, void* userptr) {
  if (!GLEXT_GL_3DFX_tbuffer)
    return;
  glext_glTbufferMask3DFX
    = (PFNGLTBUFFERMASK3DFXPROC)load (userptr, "glTbufferMask3DFX");
}
static void
glext_gl_load_GL_AMD_debug_output (GLEXTuserptrloadfunc load, void* userptr) {
  if (!GLEXT_GL_AMD_debug_output)
    return;
  glext_glDebugMessageCallbackAMD = (PFNGLDEBUGMESSAGECALLBACKAMDPROC)load (
    userptr, "glDebugMessageCallbackAMD");
  glext_glDebugMessageEnableAMD = (PFNGLDEBUGMESSAGEENABLEAMDPROC)load (
    userptr, "glDebugMessageEnableAMD");
  glext_glDebugMessageInsertAMD = (PFNGLDEBUGMESSAGEINSERTAMDPROC)load (
    userptr, "glDebugMessageInsertAMD");
  glext_glGetDebugMessageLogAMD = (PFNGLGETDEBUGMESSAGELOGAMDPROC)load (
    userptr, "glGetDebugMessageLogAMD");
}
static void
glext_gl_load_GL_AMD_draw_buffers_blend (GLEXTuserptrloadfunc load,
                                         void* userptr) {
  if (!GLEXT_GL_AMD_draw_buffers_blend)
    return;
  glext_glBlendEquationIndexedAMD = (PFNGLBLENDEQUATIONINDEXEDAMDPROC)load (
    userptr, "glBlendEquationIndexedAMD");
  glext_glBlendEquationSeparateIndexedAMD
    = (PFNGLBLENDEQUATIONSEPARATEINDEXEDAMDPROC)load (
      userptr, "glBlendEquationSeparateIndexedAMD");
  glext_glBlendFuncIndexedAMD
    = (PFNGLBLENDFUNCINDEXEDAMDPROC)load (userptr, "glBlendFuncIndexedAMD");
  glext_glBlendFuncSeparateIndexedAMD
    = (PFNGLBLENDFUNCSEPARATEINDEXEDAMDPROC)load (
      userptr, "glBlendFuncSeparateIndexedAMD");
}
static void
glext_gl_load_GL_AMD_framebuffer_multisample_advanced (
  GLEXTuserptrloadfunc load, void* userptr) {
  if (!GLEXT_GL_AMD_framebuffer_multisample_advanced)
    return;
  glext_glNamedRenderbufferStorageMultisampleAdvancedAMD
    = (PFNGLNAMEDRENDERBUFFERSTORAGEMULTISAMPLEADVANCEDAMDPROC)load (
      userptr, "glNamedRenderbufferStorageMultisampleAdvancedAMD");
  glext_glRenderbufferStorageMultisampleAdvancedAMD
    = (PFNGLRENDERBUFFERSTORAGEMULTISAMPLEADVANCEDAMDPROC)load (
      userptr, "glRenderbufferStorageMultisampleAdvancedAMD");
}
static void
glext_gl_load_GL_AMD_framebuffer_sample_positions (GLEXTuserptrloadfunc load,
                                                   void* userptr) {
  if (!GLEXT_GL_AMD_framebuffer_sample_positions)
    return;
  glext_glFramebufferSamplePositionsfvAMD
    = (PFNGLFRAMEBUFFERSAMPLEPOSITIONSFVAMDPROC)load (
      userptr, "glFramebufferSamplePositionsfvAMD");
  glext_glGetFramebufferParameterfvAMD
    = (PFNGLGETFRAMEBUFFERPARAMETERFVAMDPROC)load (
      userptr, "glGetFramebufferParameterfvAMD");
  glext_glGetNamedFramebufferParameterfvAMD
    = (PFNGLGETNAMEDFRAMEBUFFERPARAMETERFVAMDPROC)load (
      userptr, "glGetNamedFramebufferParameterfvAMD");
  glext_glNamedFramebufferSamplePositionsfvAMD
    = (PFNGLNAMEDFRAMEBUFFERSAMPLEPOSITIONSFVAMDPROC)load (
      userptr, "glNamedFramebufferSamplePositionsfvAMD");
}
static void
glext_gl_load_GL_AMD_gpu_shader_int64 (GLEXTuserptrloadfunc load,
                                       void* userptr) {
  if (!GLEXT_GL_AMD_gpu_shader_int64)
    return;
  glext_glGetUniformi64vNV
    = (PFNGLGETUNIFORMI64VNVPROC)load (userptr, "glGetUniformi64vNV");
  glext_glGetUniformui64vNV
    = (PFNGLGETUNIFORMUI64VNVPROC)load (userptr, "glGetUniformui64vNV");
  glext_glProgramUniform1i64NV
    = (PFNGLPROGRAMUNIFORM1I64NVPROC)load (userptr, "glProgramUniform1i64NV");
  glext_glProgramUniform1i64vNV = (PFNGLPROGRAMUNIFORM1I64VNVPROC)load (
    userptr, "glProgramUniform1i64vNV");
  glext_glProgramUniform1ui64NV = (PFNGLPROGRAMUNIFORM1UI64NVPROC)load (
    userptr, "glProgramUniform1ui64NV");
  glext_glProgramUniform1ui64vNV = (PFNGLPROGRAMUNIFORM1UI64VNVPROC)load (
    userptr, "glProgramUniform1ui64vNV");
  glext_glProgramUniform2i64NV
    = (PFNGLPROGRAMUNIFORM2I64NVPROC)load (userptr, "glProgramUniform2i64NV");
  glext_glProgramUniform2i64vNV = (PFNGLPROGRAMUNIFORM2I64VNVPROC)load (
    userptr, "glProgramUniform2i64vNV");
  glext_glProgramUniform2ui64NV = (PFNGLPROGRAMUNIFORM2UI64NVPROC)load (
    userptr, "glProgramUniform2ui64NV");
  glext_glProgramUniform2ui64vNV = (PFNGLPROGRAMUNIFORM2UI64VNVPROC)load (
    userptr, "glProgramUniform2ui64vNV");
  glext_glProgramUniform3i64NV
    = (PFNGLPROGRAMUNIFORM3I64NVPROC)load (userptr, "glProgramUniform3i64NV");
  glext_glProgramUniform3i64vNV = (PFNGLPROGRAMUNIFORM3I64VNVPROC)load (
    userptr, "glProgramUniform3i64vNV");
  glext_glProgramUniform3ui64NV = (PFNGLPROGRAMUNIFORM3UI64NVPROC)load (
    userptr, "glProgramUniform3ui64NV");
  glext_glProgramUniform3ui64vNV = (PFNGLPROGRAMUNIFORM3UI64VNVPROC)load (
    userptr, "glProgramUniform3ui64vNV");
  glext_glProgramUniform4i64NV
    = (PFNGLPROGRAMUNIFORM4I64NVPROC)load (userptr, "glProgramUniform4i64NV");
  glext_glProgramUniform4i64vNV = (PFNGLPROGRAMUNIFORM4I64VNVPROC)load (
    userptr, "glProgramUniform4i64vNV");
  glext_glProgramUniform4ui64NV = (PFNGLPROGRAMUNIFORM4UI64NVPROC)load (
    userptr, "glProgramUniform4ui64NV");
  glext_glProgramUniform4ui64vNV = (PFNGLPROGRAMUNIFORM4UI64VNVPROC)load (
    userptr, "glProgramUniform4ui64vNV");
  glext_glUniform1i64NV
    = (PFNGLUNIFORM1I64NVPROC)load (userptr, "glUniform1i64NV");
  glext_glUniform1i64vNV
    = (PFNGLUNIFORM1I64VNVPROC)load (userptr, "glUniform1i64vNV");
  glext_glUniform1ui64NV
    = (PFNGLUNIFORM1UI64NVPROC)load (userptr, "glUniform1ui64NV");
  glext_glUniform1ui64vNV
    = (PFNGLUNIFORM1UI64VNVPROC)load (userptr, "glUniform1ui64vNV");
  glext_glUniform2i64NV
    = (PFNGLUNIFORM2I64NVPROC)load (userptr, "glUniform2i64NV");
  glext_glUniform2i64vNV
    = (PFNGLUNIFORM2I64VNVPROC)load (userptr, "glUniform2i64vNV");
  glext_glUniform2ui64NV
    = (PFNGLUNIFORM2UI64NVPROC)load (userptr, "glUniform2ui64NV");
  glext_glUniform2ui64vNV
    = (PFNGLUNIFORM2UI64VNVPROC)load (userptr, "glUniform2ui64vNV");
  glext_glUniform3i64NV
    = (PFNGLUNIFORM3I64NVPROC)load (userptr, "glUniform3i64NV");
  glext_glUniform3i64vNV
    = (PFNGLUNIFORM3I64VNVPROC)load (userptr, "glUniform3i64vNV");
  glext_glUniform3ui64NV
    = (PFNGLUNIFORM3UI64NVPROC)load (userptr, "glUniform3ui64NV");
  glext_glUniform3ui64vNV
    = (PFNGLUNIFORM3UI64VNVPROC)load (userptr, "glUniform3ui64vNV");
  glext_glUniform4i64NV
    = (PFNGLUNIFORM4I64NVPROC)load (userptr, "glUniform4i64NV");
  glext_glUniform4i64vNV
    = (PFNGLUNIFORM4I64VNVPROC)load (userptr, "glUniform4i64vNV");
  glext_glUniform4ui64NV
    = (PFNGLUNIFORM4UI64NVPROC)load (userptr, "glUniform4ui64NV");
  glext_glUniform4ui64vNV
    = (PFNGLUNIFORM4UI64VNVPROC)load (userptr, "glUniform4ui64vNV");
}
static void
glext_gl_load_GL_AMD_interleaved_elements (GLEXTuserptrloadfunc load,
                                           void* userptr) {
  if (!GLEXT_GL_AMD_interleaved_elements)
    return;
  glext_glVertexAttribParameteriAMD
    = (PFNGLVERTEXATTRIBPARAMETERIAMDPROC)load (userptr,
                                                "glVertexAttribParameteriAMD");
}
static void
glext_gl_load_GL_AMD_multi_draw_indirect (GLEXTuserptrloadfunc load,
                                          void* userptr) {
  if (!GLEXT_GL_AMD_multi_draw_indirect)
    return;
  glext_glMultiDrawArraysIndirectAMD
    = (PFNGLMULTIDRAWARRAYSINDIRECTAMDPROC)load (
      userptr, "glMultiDrawArraysIndirectAMD");
  glext_glMultiDrawElementsIndirectAMD
    = (PFNGLMULTIDRAWELEMENTSINDIRECTAMDPROC)load (
      userptr, "glMultiDrawElementsIndirectAMD");
}
static void
glext_gl_load_GL_AMD_name_gen_delete (GLEXTuserptrloadfunc load,
                                      void* userptr) {
  if (!GLEXT_GL_AMD_name_gen_delete)
    return;
  glext_glDeleteNamesAMD
    = (PFNGLDELETENAMESAMDPROC)load (userptr, "glDeleteNamesAMD");
  glext_glGenNamesAMD = (PFNGLGENNAMESAMDPROC)load (userptr, "glGenNamesAMD");
  glext_glIsNameAMD = (PFNGLISNAMEAMDPROC)load (userptr, "glIsNameAMD");
}
static void
glext_gl_load_GL_AMD_occlusion_query_event (GLEXTuserptrloadfunc load,
                                            void* userptr) {
  if (!GLEXT_GL_AMD_occlusion_query_event)
    return;
  glext_glQueryObjectParameteruiAMD
    = (PFNGLQUERYOBJECTPARAMETERUIAMDPROC)load (userptr,
                                                "glQueryObjectParameteruiAMD");
}
static void
glext_gl_load_GL_AMD_performance_monitor (GLEXTuserptrloadfunc load,
                                          void* userptr) {
  if (!GLEXT_GL_AMD_performance_monitor)
    return;
  glext_glBeginPerfMonitorAMD
    = (PFNGLBEGINPERFMONITORAMDPROC)load (userptr, "glBeginPerfMonitorAMD");
  glext_glDeletePerfMonitorsAMD = (PFNGLDELETEPERFMONITORSAMDPROC)load (
    userptr, "glDeletePerfMonitorsAMD");
  glext_glEndPerfMonitorAMD
    = (PFNGLENDPERFMONITORAMDPROC)load (userptr, "glEndPerfMonitorAMD");
  glext_glGenPerfMonitorsAMD
    = (PFNGLGENPERFMONITORSAMDPROC)load (userptr, "glGenPerfMonitorsAMD");
  glext_glGetPerfMonitorCounterDataAMD
    = (PFNGLGETPERFMONITORCOUNTERDATAAMDPROC)load (
      userptr, "glGetPerfMonitorCounterDataAMD");
  glext_glGetPerfMonitorCounterInfoAMD
    = (PFNGLGETPERFMONITORCOUNTERINFOAMDPROC)load (
      userptr, "glGetPerfMonitorCounterInfoAMD");
  glext_glGetPerfMonitorCounterStringAMD
    = (PFNGLGETPERFMONITORCOUNTERSTRINGAMDPROC)load (
      userptr, "glGetPerfMonitorCounterStringAMD");
  glext_glGetPerfMonitorCountersAMD
    = (PFNGLGETPERFMONITORCOUNTERSAMDPROC)load (userptr,
                                                "glGetPerfMonitorCountersAMD");
  glext_glGetPerfMonitorGroupStringAMD
    = (PFNGLGETPERFMONITORGROUPSTRINGAMDPROC)load (
      userptr, "glGetPerfMonitorGroupStringAMD");
  glext_glGetPerfMonitorGroupsAMD = (PFNGLGETPERFMONITORGROUPSAMDPROC)load (
    userptr, "glGetPerfMonitorGroupsAMD");
  glext_glSelectPerfMonitorCountersAMD
    = (PFNGLSELECTPERFMONITORCOUNTERSAMDPROC)load (
      userptr, "glSelectPerfMonitorCountersAMD");
}
static void
glext_gl_load_GL_AMD_sample_positions (GLEXTuserptrloadfunc load,
                                       void* userptr) {
  if (!GLEXT_GL_AMD_sample_positions)
    return;
  glext_glSetMultisamplefvAMD
    = (PFNGLSETMULTISAMPLEFVAMDPROC)load (userptr, "glSetMultisamplefvAMD");
}
static void
glext_gl_load_GL_AMD_sparse_texture (GLEXTuserptrloadfunc load,
                                     void* userptr) {
  if (!GLEXT_GL_AMD_sparse_texture)
    return;
  glext_glTexStorageSparseAMD
    = (PFNGLTEXSTORAGESPARSEAMDPROC)load (userptr, "glTexStorageSparseAMD");
  glext_glTextureStorageSparseAMD = (PFNGLTEXTURESTORAGESPARSEAMDPROC)load (
    userptr, "glTextureStorageSparseAMD");
}
static void
glext_gl_load_GL_AMD_stencil_operation_extended (GLEXTuserptrloadfunc load,
                                                 void* userptr) {
  if (!GLEXT_GL_AMD_stencil_operation_extended)
    return;
  glext_glStencilOpValueAMD
    = (PFNGLSTENCILOPVALUEAMDPROC)load (userptr, "glStencilOpValueAMD");
}
static void
glext_gl_load_GL_AMD_vertex_shader_tessellator (GLEXTuserptrloadfunc load,
                                                void* userptr) {
  if (!GLEXT_GL_AMD_vertex_shader_tessellator)
    return;
  glext_glTessellationFactorAMD = (PFNGLTESSELLATIONFACTORAMDPROC)load (
    userptr, "glTessellationFactorAMD");
  glext_glTessellationModeAMD
    = (PFNGLTESSELLATIONMODEAMDPROC)load (userptr, "glTessellationModeAMD");
}
static void
glext_gl_load_GL_APPLE_element_array (GLEXTuserptrloadfunc load,
                                      void* userptr) {
  if (!GLEXT_GL_APPLE_element_array)
    return;
  glext_glDrawElementArrayAPPLE = (PFNGLDRAWELEMENTARRAYAPPLEPROC)load (
    userptr, "glDrawElementArrayAPPLE");
  glext_glDrawRangeElementArrayAPPLE
    = (PFNGLDRAWRANGEELEMENTARRAYAPPLEPROC)load (
      userptr, "glDrawRangeElementArrayAPPLE");
  glext_glElementPointerAPPLE
    = (PFNGLELEMENTPOINTERAPPLEPROC)load (userptr, "glElementPointerAPPLE");
  glext_glMultiDrawElementArrayAPPLE
    = (PFNGLMULTIDRAWELEMENTARRAYAPPLEPROC)load (
      userptr, "glMultiDrawElementArrayAPPLE");
  glext_glMultiDrawRangeElementArrayAPPLE
    = (PFNGLMULTIDRAWRANGEELEMENTARRAYAPPLEPROC)load (
      userptr, "glMultiDrawRangeElementArrayAPPLE");
}
static void
glext_gl_load_GL_APPLE_fence (GLEXTuserptrloadfunc load, void* userptr) {
  if (!GLEXT_GL_APPLE_fence)
    return;
  glext_glDeleteFencesAPPLE
    = (PFNGLDELETEFENCESAPPLEPROC)load (userptr, "glDeleteFencesAPPLE");
  glext_glFinishFenceAPPLE
    = (PFNGLFINISHFENCEAPPLEPROC)load (userptr, "glFinishFenceAPPLE");
  glext_glFinishObjectAPPLE
    = (PFNGLFINISHOBJECTAPPLEPROC)load (userptr, "glFinishObjectAPPLE");
  glext_glGenFencesAPPLE
    = (PFNGLGENFENCESAPPLEPROC)load (userptr, "glGenFencesAPPLE");
  glext_glIsFenceAPPLE
    = (PFNGLISFENCEAPPLEPROC)load (userptr, "glIsFenceAPPLE");
  glext_glSetFenceAPPLE
    = (PFNGLSETFENCEAPPLEPROC)load (userptr, "glSetFenceAPPLE");
  glext_glTestFenceAPPLE
    = (PFNGLTESTFENCEAPPLEPROC)load (userptr, "glTestFenceAPPLE");
  glext_glTestObjectAPPLE
    = (PFNGLTESTOBJECTAPPLEPROC)load (userptr, "glTestObjectAPPLE");
}
static void
glext_gl_load_GL_APPLE_flush_buffer_range (GLEXTuserptrloadfunc load,
                                           void* userptr) {
  if (!GLEXT_GL_APPLE_flush_buffer_range)
    return;
  glext_glBufferParameteriAPPLE = (PFNGLBUFFERPARAMETERIAPPLEPROC)load (
    userptr, "glBufferParameteriAPPLE");
  glext_glFlushMappedBufferRangeAPPLE
    = (PFNGLFLUSHMAPPEDBUFFERRANGEAPPLEPROC)load (
      userptr, "glFlushMappedBufferRangeAPPLE");
}
static void
glext_gl_load_GL_APPLE_object_purgeable (GLEXTuserptrloadfunc load,
                                         void* userptr) {
  if (!GLEXT_GL_APPLE_object_purgeable)
    return;
  glext_glGetObjectParameterivAPPLE
    = (PFNGLGETOBJECTPARAMETERIVAPPLEPROC)load (userptr,
                                                "glGetObjectParameterivAPPLE");
  glext_glObjectPurgeableAPPLE
    = (PFNGLOBJECTPURGEABLEAPPLEPROC)load (userptr, "glObjectPurgeableAPPLE");
  glext_glObjectUnpurgeableAPPLE = (PFNGLOBJECTUNPURGEABLEAPPLEPROC)load (
    userptr, "glObjectUnpurgeableAPPLE");
}
static void
glext_gl_load_GL_APPLE_texture_range (GLEXTuserptrloadfunc load,
                                      void* userptr) {
  if (!GLEXT_GL_APPLE_texture_range)
    return;
  glext_glGetTexParameterPointervAPPLE
    = (PFNGLGETTEXPARAMETERPOINTERVAPPLEPROC)load (
      userptr, "glGetTexParameterPointervAPPLE");
  glext_glTextureRangeAPPLE
    = (PFNGLTEXTURERANGEAPPLEPROC)load (userptr, "glTextureRangeAPPLE");
}
static void
glext_gl_load_GL_APPLE_vertex_array_object (GLEXTuserptrloadfunc load,
                                            void* userptr) {
  if (!GLEXT_GL_APPLE_vertex_array_object)
    return;
  glext_glBindVertexArrayAPPLE
    = (PFNGLBINDVERTEXARRAYAPPLEPROC)load (userptr, "glBindVertexArrayAPPLE");
  glext_glDeleteVertexArraysAPPLE = (PFNGLDELETEVERTEXARRAYSAPPLEPROC)load (
    userptr, "glDeleteVertexArraysAPPLE");
  glext_glGenVertexArraysAPPLE
    = (PFNGLGENVERTEXARRAYSAPPLEPROC)load (userptr, "glGenVertexArraysAPPLE");
  glext_glIsVertexArrayAPPLE
    = (PFNGLISVERTEXARRAYAPPLEPROC)load (userptr, "glIsVertexArrayAPPLE");
}
static void
glext_gl_load_GL_APPLE_vertex_array_range (GLEXTuserptrloadfunc load,
                                           void* userptr) {
  if (!GLEXT_GL_APPLE_vertex_array_range)
    return;
  glext_glFlushVertexArrayRangeAPPLE
    = (PFNGLFLUSHVERTEXARRAYRANGEAPPLEPROC)load (
      userptr, "glFlushVertexArrayRangeAPPLE");
  glext_glVertexArrayParameteriAPPLE
    = (PFNGLVERTEXARRAYPARAMETERIAPPLEPROC)load (
      userptr, "glVertexArrayParameteriAPPLE");
  glext_glVertexArrayRangeAPPLE = (PFNGLVERTEXARRAYRANGEAPPLEPROC)load (
    userptr, "glVertexArrayRangeAPPLE");
}
static void
glext_gl_load_GL_APPLE_vertex_program_evaluators (GLEXTuserptrloadfunc load,
                                                  void* userptr) {
  if (!GLEXT_GL_APPLE_vertex_program_evaluators)
    return;
  glext_glDisableVertexAttribAPPLE = (PFNGLDISABLEVERTEXATTRIBAPPLEPROC)load (
    userptr, "glDisableVertexAttribAPPLE");
  glext_glEnableVertexAttribAPPLE = (PFNGLENABLEVERTEXATTRIBAPPLEPROC)load (
    userptr, "glEnableVertexAttribAPPLE");
  glext_glIsVertexAttribEnabledAPPLE
    = (PFNGLISVERTEXATTRIBENABLEDAPPLEPROC)load (
      userptr, "glIsVertexAttribEnabledAPPLE");
  glext_glMapVertexAttrib1dAPPLE = (PFNGLMAPVERTEXATTRIB1DAPPLEPROC)load (
    userptr, "glMapVertexAttrib1dAPPLE");
  glext_glMapVertexAttrib1fAPPLE = (PFNGLMAPVERTEXATTRIB1FAPPLEPROC)load (
    userptr, "glMapVertexAttrib1fAPPLE");
  glext_glMapVertexAttrib2dAPPLE = (PFNGLMAPVERTEXATTRIB2DAPPLEPROC)load (
    userptr, "glMapVertexAttrib2dAPPLE");
  glext_glMapVertexAttrib2fAPPLE = (PFNGLMAPVERTEXATTRIB2FAPPLEPROC)load (
    userptr, "glMapVertexAttrib2fAPPLE");
}
static void
glext_gl_load_GL_ARB_ES2_compatibility (GLEXTuserptrloadfunc load,
                                        void* userptr) {
  if (!GLEXT_GL_ARB_ES2_compatibility)
    return;
  glext_glClearDepthf = (PFNGLCLEARDEPTHFPROC)load (userptr, "glClearDepthf");
  glext_glDepthRangef = (PFNGLDEPTHRANGEFPROC)load (userptr, "glDepthRangef");
  glext_glGetShaderPrecisionFormat = (PFNGLGETSHADERPRECISIONFORMATPROC)load (
    userptr, "glGetShaderPrecisionFormat");
  glext_glReleaseShaderCompiler = (PFNGLRELEASESHADERCOMPILERPROC)load (
    userptr, "glReleaseShaderCompiler");
  glext_glShaderBinary
    = (PFNGLSHADERBINARYPROC)load (userptr, "glShaderBinary");
}
static void
glext_gl_load_GL_ARB_ES3_1_compatibility (GLEXTuserptrloadfunc load,
                                          void* userptr) {
  if (!GLEXT_GL_ARB_ES3_1_compatibility)
    return;
  glext_glMemoryBarrierByRegion = (PFNGLMEMORYBARRIERBYREGIONPROC)load (
    userptr, "glMemoryBarrierByRegion");
}
static void
glext_gl_load_GL_ARB_ES3_2_compatibility (GLEXTuserptrloadfunc load,
                                          void* userptr) {
  if (!GLEXT_GL_ARB_ES3_2_compatibility)
    return;
  glext_glPrimitiveBoundingBoxARB = (PFNGLPRIMITIVEBOUNDINGBOXARBPROC)load (
    userptr, "glPrimitiveBoundingBoxARB");
}
static void
glext_gl_load_GL_ARB_base_instance (GLEXTuserptrloadfunc load, void* userptr) {
  if (!GLEXT_GL_ARB_base_instance)
    return;
  glext_glDrawArraysInstancedBaseInstance
    = (PFNGLDRAWARRAYSINSTANCEDBASEINSTANCEPROC)load (
      userptr, "glDrawArraysInstancedBaseInstance");
  glext_glDrawElementsInstancedBaseInstance
    = (PFNGLDRAWELEMENTSINSTANCEDBASEINSTANCEPROC)load (
      userptr, "glDrawElementsInstancedBaseInstance");
  glext_glDrawElementsInstancedBaseVertexBaseInstance
    = (PFNGLDRAWELEMENTSINSTANCEDBASEVERTEXBASEINSTANCEPROC)load (
      userptr, "glDrawElementsInstancedBaseVertexBaseInstance");
}
static void
glext_gl_load_GL_ARB_bindless_texture (GLEXTuserptrloadfunc load,
                                       void* userptr) {
  if (!GLEXT_GL_ARB_bindless_texture)
    return;
  glext_glGetImageHandleARB
    = (PFNGLGETIMAGEHANDLEARBPROC)load (userptr, "glGetImageHandleARB");
  glext_glGetTextureHandleARB
    = (PFNGLGETTEXTUREHANDLEARBPROC)load (userptr, "glGetTextureHandleARB");
  glext_glGetTextureSamplerHandleARB
    = (PFNGLGETTEXTURESAMPLERHANDLEARBPROC)load (
      userptr, "glGetTextureSamplerHandleARB");
  glext_glGetVertexAttribLui64vARB = (PFNGLGETVERTEXATTRIBLUI64VARBPROC)load (
    userptr, "glGetVertexAttribLui64vARB");
  glext_glIsImageHandleResidentARB = (PFNGLISIMAGEHANDLERESIDENTARBPROC)load (
    userptr, "glIsImageHandleResidentARB");
  glext_glIsTextureHandleResidentARB
    = (PFNGLISTEXTUREHANDLERESIDENTARBPROC)load (
      userptr, "glIsTextureHandleResidentARB");
  glext_glMakeImageHandleNonResidentARB
    = (PFNGLMAKEIMAGEHANDLENONRESIDENTARBPROC)load (
      userptr, "glMakeImageHandleNonResidentARB");
  glext_glMakeImageHandleResidentARB
    = (PFNGLMAKEIMAGEHANDLERESIDENTARBPROC)load (
      userptr, "glMakeImageHandleResidentARB");
  glext_glMakeTextureHandleNonResidentARB
    = (PFNGLMAKETEXTUREHANDLENONRESIDENTARBPROC)load (
      userptr, "glMakeTextureHandleNonResidentARB");
  glext_glMakeTextureHandleResidentARB
    = (PFNGLMAKETEXTUREHANDLERESIDENTARBPROC)load (
      userptr, "glMakeTextureHandleResidentARB");
  glext_glProgramUniformHandleui64ARB
    = (PFNGLPROGRAMUNIFORMHANDLEUI64ARBPROC)load (
      userptr, "glProgramUniformHandleui64ARB");
  glext_glProgramUniformHandleui64vARB
    = (PFNGLPROGRAMUNIFORMHANDLEUI64VARBPROC)load (
      userptr, "glProgramUniformHandleui64vARB");
  glext_glUniformHandleui64ARB
    = (PFNGLUNIFORMHANDLEUI64ARBPROC)load (userptr, "glUniformHandleui64ARB");
  glext_glUniformHandleui64vARB = (PFNGLUNIFORMHANDLEUI64VARBPROC)load (
    userptr, "glUniformHandleui64vARB");
  glext_glVertexAttribL1ui64ARB = (PFNGLVERTEXATTRIBL1UI64ARBPROC)load (
    userptr, "glVertexAttribL1ui64ARB");
  glext_glVertexAttribL1ui64vARB = (PFNGLVERTEXATTRIBL1UI64VARBPROC)load (
    userptr, "glVertexAttribL1ui64vARB");
}
static void
glext_gl_load_GL_ARB_blend_func_extended (GLEXTuserptrloadfunc load,
                                          void* userptr) {
  if (!GLEXT_GL_ARB_blend_func_extended)
    return;
  glext_glBindFragDataLocationIndexed
    = (PFNGLBINDFRAGDATALOCATIONINDEXEDPROC)load (
      userptr, "glBindFragDataLocationIndexed");
  glext_glGetFragDataIndex
    = (PFNGLGETFRAGDATAINDEXPROC)load (userptr, "glGetFragDataIndex");
}
static void
glext_gl_load_GL_ARB_buffer_storage (GLEXTuserptrloadfunc load,
                                     void* userptr) {
  if (!GLEXT_GL_ARB_buffer_storage)
    return;
  glext_glBufferStorage
    = (PFNGLBUFFERSTORAGEPROC)load (userptr, "glBufferStorage");
}
static void
glext_gl_load_GL_ARB_cl_event (GLEXTuserptrloadfunc load, void* userptr) {
  if (!GLEXT_GL_ARB_cl_event)
    return;
  glext_glCreateSyncFromCLeventARB = (PFNGLCREATESYNCFROMCLEVENTARBPROC)load (
    userptr, "glCreateSyncFromCLeventARB");
}
static void
glext_gl_load_GL_ARB_clear_buffer_object (GLEXTuserptrloadfunc load,
                                          void* userptr) {
  if (!GLEXT_GL_ARB_clear_buffer_object)
    return;
  glext_glClearBufferData
    = (PFNGLCLEARBUFFERDATAPROC)load (userptr, "glClearBufferData");
  glext_glClearBufferSubData
    = (PFNGLCLEARBUFFERSUBDATAPROC)load (userptr, "glClearBufferSubData");
}
static void
glext_gl_load_GL_ARB_clear_texture (GLEXTuserptrloadfunc load, void* userptr) {
  if (!GLEXT_GL_ARB_clear_texture)
    return;
  glext_glClearTexImage
    = (PFNGLCLEARTEXIMAGEPROC)load (userptr, "glClearTexImage");
  glext_glClearTexSubImage
    = (PFNGLCLEARTEXSUBIMAGEPROC)load (userptr, "glClearTexSubImage");
}
static void
glext_gl_load_GL_ARB_clip_control (GLEXTuserptrloadfunc load, void* userptr) {
  if (!GLEXT_GL_ARB_clip_control)
    return;
  glext_glClipControl = (PFNGLCLIPCONTROLPROC)load (userptr, "glClipControl");
}
static void
glext_gl_load_GL_ARB_color_buffer_float (GLEXTuserptrloadfunc load,
                                         void* userptr) {
  if (!GLEXT_GL_ARB_color_buffer_float)
    return;
  glext_glClampColorARB
    = (PFNGLCLAMPCOLORARBPROC)load (userptr, "glClampColorARB");
}
static void
glext_gl_load_GL_ARB_compute_shader (GLEXTuserptrloadfunc load,
                                     void* userptr) {
  if (!GLEXT_GL_ARB_compute_shader)
    return;
  glext_glDispatchCompute
    = (PFNGLDISPATCHCOMPUTEPROC)load (userptr, "glDispatchCompute");
  glext_glDispatchComputeIndirect = (PFNGLDISPATCHCOMPUTEINDIRECTPROC)load (
    userptr, "glDispatchComputeIndirect");
}
static void
glext_gl_load_GL_ARB_compute_variable_group_size (GLEXTuserptrloadfunc load,
                                                  void* userptr) {
  if (!GLEXT_GL_ARB_compute_variable_group_size)
    return;
  glext_glDispatchComputeGroupSizeARB
    = (PFNGLDISPATCHCOMPUTEGROUPSIZEARBPROC)load (
      userptr, "glDispatchComputeGroupSizeARB");
}
static void
glext_gl_load_GL_ARB_copy_buffer (GLEXTuserptrloadfunc load, void* userptr) {
  if (!GLEXT_GL_ARB_copy_buffer)
    return;
  glext_glCopyBufferSubData
    = (PFNGLCOPYBUFFERSUBDATAPROC)load (userptr, "glCopyBufferSubData");
}
static void
glext_gl_load_GL_ARB_copy_image (GLEXTuserptrloadfunc load, void* userptr) {
  if (!GLEXT_GL_ARB_copy_image)
    return;
  glext_glCopyImageSubData
    = (PFNGLCOPYIMAGESUBDATAPROC)load (userptr, "glCopyImageSubData");
}
static void
glext_gl_load_GL_ARB_debug_output (GLEXTuserptrloadfunc load, void* userptr) {
  if (!GLEXT_GL_ARB_debug_output)
    return;
  glext_glDebugMessageCallbackARB = (PFNGLDEBUGMESSAGECALLBACKARBPROC)load (
    userptr, "glDebugMessageCallbackARB");
  glext_glDebugMessageControlARB = (PFNGLDEBUGMESSAGECONTROLARBPROC)load (
    userptr, "glDebugMessageControlARB");
  glext_glDebugMessageInsertARB = (PFNGLDEBUGMESSAGEINSERTARBPROC)load (
    userptr, "glDebugMessageInsertARB");
  glext_glGetDebugMessageLogARB = (PFNGLGETDEBUGMESSAGELOGARBPROC)load (
    userptr, "glGetDebugMessageLogARB");
}
static void
glext_gl_load_GL_ARB_direct_state_access (GLEXTuserptrloadfunc load,
                                          void* userptr) {
  if (!GLEXT_GL_ARB_direct_state_access)
    return;
  glext_glBindTextureUnit
    = (PFNGLBINDTEXTUREUNITPROC)load (userptr, "glBindTextureUnit");
  glext_glBlitNamedFramebuffer
    = (PFNGLBLITNAMEDFRAMEBUFFERPROC)load (userptr, "glBlitNamedFramebuffer");
  glext_glCheckNamedFramebufferStatus
    = (PFNGLCHECKNAMEDFRAMEBUFFERSTATUSPROC)load (
      userptr, "glCheckNamedFramebufferStatus");
  glext_glClearNamedBufferData
    = (PFNGLCLEARNAMEDBUFFERDATAPROC)load (userptr, "glClearNamedBufferData");
  glext_glClearNamedBufferSubData = (PFNGLCLEARNAMEDBUFFERSUBDATAPROC)load (
    userptr, "glClearNamedBufferSubData");
  glext_glClearNamedFramebufferfi = (PFNGLCLEARNAMEDFRAMEBUFFERFIPROC)load (
    userptr, "glClearNamedFramebufferfi");
  glext_glClearNamedFramebufferfv = (PFNGLCLEARNAMEDFRAMEBUFFERFVPROC)load (
    userptr, "glClearNamedFramebufferfv");
  glext_glClearNamedFramebufferiv = (PFNGLCLEARNAMEDFRAMEBUFFERIVPROC)load (
    userptr, "glClearNamedFramebufferiv");
  glext_glClearNamedFramebufferuiv = (PFNGLCLEARNAMEDFRAMEBUFFERUIVPROC)load (
    userptr, "glClearNamedFramebufferuiv");
  glext_glCompressedTextureSubImage1D
    = (PFNGLCOMPRESSEDTEXTURESUBIMAGE1DPROC)load (
      userptr, "glCompressedTextureSubImage1D");
  glext_glCompressedTextureSubImage2D
    = (PFNGLCOMPRESSEDTEXTURESUBIMAGE2DPROC)load (
      userptr, "glCompressedTextureSubImage2D");
  glext_glCompressedTextureSubImage3D
    = (PFNGLCOMPRESSEDTEXTURESUBIMAGE3DPROC)load (
      userptr, "glCompressedTextureSubImage3D");
  glext_glCopyNamedBufferSubData = (PFNGLCOPYNAMEDBUFFERSUBDATAPROC)load (
    userptr, "glCopyNamedBufferSubData");
  glext_glCopyTextureSubImage1D = (PFNGLCOPYTEXTURESUBIMAGE1DPROC)load (
    userptr, "glCopyTextureSubImage1D");
  glext_glCopyTextureSubImage2D = (PFNGLCOPYTEXTURESUBIMAGE2DPROC)load (
    userptr, "glCopyTextureSubImage2D");
  glext_glCopyTextureSubImage3D = (PFNGLCOPYTEXTURESUBIMAGE3DPROC)load (
    userptr, "glCopyTextureSubImage3D");
  glext_glCreateBuffers
    = (PFNGLCREATEBUFFERSPROC)load (userptr, "glCreateBuffers");
  glext_glCreateFramebuffers
    = (PFNGLCREATEFRAMEBUFFERSPROC)load (userptr, "glCreateFramebuffers");
  glext_glCreateProgramPipelines = (PFNGLCREATEPROGRAMPIPELINESPROC)load (
    userptr, "glCreateProgramPipelines");
  glext_glCreateQueries
    = (PFNGLCREATEQUERIESPROC)load (userptr, "glCreateQueries");
  glext_glCreateRenderbuffers
    = (PFNGLCREATERENDERBUFFERSPROC)load (userptr, "glCreateRenderbuffers");
  glext_glCreateSamplers
    = (PFNGLCREATESAMPLERSPROC)load (userptr, "glCreateSamplers");
  glext_glCreateTextures
    = (PFNGLCREATETEXTURESPROC)load (userptr, "glCreateTextures");
  glext_glCreateTransformFeedbacks = (PFNGLCREATETRANSFORMFEEDBACKSPROC)load (
    userptr, "glCreateTransformFeedbacks");
  glext_glCreateVertexArrays
    = (PFNGLCREATEVERTEXARRAYSPROC)load (userptr, "glCreateVertexArrays");
  glext_glDisableVertexArrayAttrib = (PFNGLDISABLEVERTEXARRAYATTRIBPROC)load (
    userptr, "glDisableVertexArrayAttrib");
  glext_glEnableVertexArrayAttrib = (PFNGLENABLEVERTEXARRAYATTRIBPROC)load (
    userptr, "glEnableVertexArrayAttrib");
  glext_glFlushMappedNamedBufferRange
    = (PFNGLFLUSHMAPPEDNAMEDBUFFERRANGEPROC)load (
      userptr, "glFlushMappedNamedBufferRange");
  glext_glGenerateTextureMipmap = (PFNGLGENERATETEXTUREMIPMAPPROC)load (
    userptr, "glGenerateTextureMipmap");
  glext_glGetCompressedTextureImage
    = (PFNGLGETCOMPRESSEDTEXTUREIMAGEPROC)load (userptr,
                                                "glGetCompressedTextureImage");
  glext_glGetNamedBufferParameteri64v
    = (PFNGLGETNAMEDBUFFERPARAMETERI64VPROC)load (
      userptr, "glGetNamedBufferParameteri64v");
  glext_glGetNamedBufferParameteriv
    = (PFNGLGETNAMEDBUFFERPARAMETERIVPROC)load (userptr,
                                                "glGetNamedBufferParameteriv");
  glext_glGetNamedBufferPointerv = (PFNGLGETNAMEDBUFFERPOINTERVPROC)load (
    userptr, "glGetNamedBufferPointerv");
  glext_glGetNamedBufferSubData = (PFNGLGETNAMEDBUFFERSUBDATAPROC)load (
    userptr, "glGetNamedBufferSubData");
  glext_glGetNamedFramebufferAttachmentParameteriv
    = (PFNGLGETNAMEDFRAMEBUFFERATTACHMENTPARAMETERIVPROC)load (
      userptr, "glGetNamedFramebufferAttachmentParameteriv");
  glext_glGetNamedFramebufferParameteriv
    = (PFNGLGETNAMEDFRAMEBUFFERPARAMETERIVPROC)load (
      userptr, "glGetNamedFramebufferParameteriv");
  glext_glGetNamedRenderbufferParameteriv
    = (PFNGLGETNAMEDRENDERBUFFERPARAMETERIVPROC)load (
      userptr, "glGetNamedRenderbufferParameteriv");
  glext_glGetQueryBufferObjecti64v = (PFNGLGETQUERYBUFFEROBJECTI64VPROC)load (
    userptr, "glGetQueryBufferObjecti64v");
  glext_glGetQueryBufferObjectiv = (PFNGLGETQUERYBUFFEROBJECTIVPROC)load (
    userptr, "glGetQueryBufferObjectiv");
  glext_glGetQueryBufferObjectui64v
    = (PFNGLGETQUERYBUFFEROBJECTUI64VPROC)load (userptr,
                                                "glGetQueryBufferObjectui64v");
  glext_glGetQueryBufferObjectuiv = (PFNGLGETQUERYBUFFEROBJECTUIVPROC)load (
    userptr, "glGetQueryBufferObjectuiv");
  glext_glGetTextureImage
    = (PFNGLGETTEXTUREIMAGEPROC)load (userptr, "glGetTextureImage");
  glext_glGetTextureLevelParameterfv
    = (PFNGLGETTEXTURELEVELPARAMETERFVPROC)load (
      userptr, "glGetTextureLevelParameterfv");
  glext_glGetTextureLevelParameteriv
    = (PFNGLGETTEXTURELEVELPARAMETERIVPROC)load (
      userptr, "glGetTextureLevelParameteriv");
  glext_glGetTextureParameterIiv = (PFNGLGETTEXTUREPARAMETERIIVPROC)load (
    userptr, "glGetTextureParameterIiv");
  glext_glGetTextureParameterIuiv = (PFNGLGETTEXTUREPARAMETERIUIVPROC)load (
    userptr, "glGetTextureParameterIuiv");
  glext_glGetTextureParameterfv = (PFNGLGETTEXTUREPARAMETERFVPROC)load (
    userptr, "glGetTextureParameterfv");
  glext_glGetTextureParameteriv = (PFNGLGETTEXTUREPARAMETERIVPROC)load (
    userptr, "glGetTextureParameteriv");
  glext_glGetTransformFeedbacki64_v
    = (PFNGLGETTRANSFORMFEEDBACKI64_VPROC)load (userptr,
                                                "glGetTransformFeedbacki64_v");
  glext_glGetTransformFeedbacki_v = (PFNGLGETTRANSFORMFEEDBACKI_VPROC)load (
    userptr, "glGetTransformFeedbacki_v");
  glext_glGetTransformFeedbackiv = (PFNGLGETTRANSFORMFEEDBACKIVPROC)load (
    userptr, "glGetTransformFeedbackiv");
  glext_glGetVertexArrayIndexed64iv
    = (PFNGLGETVERTEXARRAYINDEXED64IVPROC)load (userptr,
                                                "glGetVertexArrayIndexed64iv");
  glext_glGetVertexArrayIndexediv = (PFNGLGETVERTEXARRAYINDEXEDIVPROC)load (
    userptr, "glGetVertexArrayIndexediv");
  glext_glGetVertexArrayiv
    = (PFNGLGETVERTEXARRAYIVPROC)load (userptr, "glGetVertexArrayiv");
  glext_glInvalidateNamedFramebufferData
    = (PFNGLINVALIDATENAMEDFRAMEBUFFERDATAPROC)load (
      userptr, "glInvalidateNamedFramebufferData");
  glext_glInvalidateNamedFramebufferSubData
    = (PFNGLINVALIDATENAMEDFRAMEBUFFERSUBDATAPROC)load (
      userptr, "glInvalidateNamedFramebufferSubData");
  glext_glMapNamedBuffer
    = (PFNGLMAPNAMEDBUFFERPROC)load (userptr, "glMapNamedBuffer");
  glext_glMapNamedBufferRange
    = (PFNGLMAPNAMEDBUFFERRANGEPROC)load (userptr, "glMapNamedBufferRange");
  glext_glNamedBufferData
    = (PFNGLNAMEDBUFFERDATAPROC)load (userptr, "glNamedBufferData");
  glext_glNamedBufferStorage
    = (PFNGLNAMEDBUFFERSTORAGEPROC)load (userptr, "glNamedBufferStorage");
  glext_glNamedBufferSubData
    = (PFNGLNAMEDBUFFERSUBDATAPROC)load (userptr, "glNamedBufferSubData");
  glext_glNamedFramebufferDrawBuffer
    = (PFNGLNAMEDFRAMEBUFFERDRAWBUFFERPROC)load (
      userptr, "glNamedFramebufferDrawBuffer");
  glext_glNamedFramebufferDrawBuffers
    = (PFNGLNAMEDFRAMEBUFFERDRAWBUFFERSPROC)load (
      userptr, "glNamedFramebufferDrawBuffers");
  glext_glNamedFramebufferParameteri
    = (PFNGLNAMEDFRAMEBUFFERPARAMETERIPROC)load (
      userptr, "glNamedFramebufferParameteri");
  glext_glNamedFramebufferReadBuffer
    = (PFNGLNAMEDFRAMEBUFFERREADBUFFERPROC)load (
      userptr, "glNamedFramebufferReadBuffer");
  glext_glNamedFramebufferRenderbuffer
    = (PFNGLNAMEDFRAMEBUFFERRENDERBUFFERPROC)load (
      userptr, "glNamedFramebufferRenderbuffer");
  glext_glNamedFramebufferTexture = (PFNGLNAMEDFRAMEBUFFERTEXTUREPROC)load (
    userptr, "glNamedFramebufferTexture");
  glext_glNamedFramebufferTextureLayer
    = (PFNGLNAMEDFRAMEBUFFERTEXTURELAYERPROC)load (
      userptr, "glNamedFramebufferTextureLayer");
  glext_glNamedRenderbufferStorage = (PFNGLNAMEDRENDERBUFFERSTORAGEPROC)load (
    userptr, "glNamedRenderbufferStorage");
  glext_glNamedRenderbufferStorageMultisample
    = (PFNGLNAMEDRENDERBUFFERSTORAGEMULTISAMPLEPROC)load (
      userptr, "glNamedRenderbufferStorageMultisample");
  glext_glTextureBuffer
    = (PFNGLTEXTUREBUFFERPROC)load (userptr, "glTextureBuffer");
  glext_glTextureBufferRange
    = (PFNGLTEXTUREBUFFERRANGEPROC)load (userptr, "glTextureBufferRange");
  glext_glTextureParameterIiv
    = (PFNGLTEXTUREPARAMETERIIVPROC)load (userptr, "glTextureParameterIiv");
  glext_glTextureParameterIuiv
    = (PFNGLTEXTUREPARAMETERIUIVPROC)load (userptr, "glTextureParameterIuiv");
  glext_glTextureParameterf
    = (PFNGLTEXTUREPARAMETERFPROC)load (userptr, "glTextureParameterf");
  glext_glTextureParameterfv
    = (PFNGLTEXTUREPARAMETERFVPROC)load (userptr, "glTextureParameterfv");
  glext_glTextureParameteri
    = (PFNGLTEXTUREPARAMETERIPROC)load (userptr, "glTextureParameteri");
  glext_glTextureParameteriv
    = (PFNGLTEXTUREPARAMETERIVPROC)load (userptr, "glTextureParameteriv");
  glext_glTextureStorage1D
    = (PFNGLTEXTURESTORAGE1DPROC)load (userptr, "glTextureStorage1D");
  glext_glTextureStorage2D
    = (PFNGLTEXTURESTORAGE2DPROC)load (userptr, "glTextureStorage2D");
  glext_glTextureStorage2DMultisample
    = (PFNGLTEXTURESTORAGE2DMULTISAMPLEPROC)load (
      userptr, "glTextureStorage2DMultisample");
  glext_glTextureStorage3D
    = (PFNGLTEXTURESTORAGE3DPROC)load (userptr, "glTextureStorage3D");
  glext_glTextureStorage3DMultisample
    = (PFNGLTEXTURESTORAGE3DMULTISAMPLEPROC)load (
      userptr, "glTextureStorage3DMultisample");
  glext_glTextureSubImage1D
    = (PFNGLTEXTURESUBIMAGE1DPROC)load (userptr, "glTextureSubImage1D");
  glext_glTextureSubImage2D
    = (PFNGLTEXTURESUBIMAGE2DPROC)load (userptr, "glTextureSubImage2D");
  glext_glTextureSubImage3D
    = (PFNGLTEXTURESUBIMAGE3DPROC)load (userptr, "glTextureSubImage3D");
  glext_glTransformFeedbackBufferBase
    = (PFNGLTRANSFORMFEEDBACKBUFFERBASEPROC)load (
      userptr, "glTransformFeedbackBufferBase");
  glext_glTransformFeedbackBufferRange
    = (PFNGLTRANSFORMFEEDBACKBUFFERRANGEPROC)load (
      userptr, "glTransformFeedbackBufferRange");
  glext_glUnmapNamedBuffer
    = (PFNGLUNMAPNAMEDBUFFERPROC)load (userptr, "glUnmapNamedBuffer");
  glext_glVertexArrayAttribBinding = (PFNGLVERTEXARRAYATTRIBBINDINGPROC)load (
    userptr, "glVertexArrayAttribBinding");
  glext_glVertexArrayAttribFormat = (PFNGLVERTEXARRAYATTRIBFORMATPROC)load (
    userptr, "glVertexArrayAttribFormat");
  glext_glVertexArrayAttribIFormat = (PFNGLVERTEXARRAYATTRIBIFORMATPROC)load (
    userptr, "glVertexArrayAttribIFormat");
  glext_glVertexArrayAttribLFormat = (PFNGLVERTEXARRAYATTRIBLFORMATPROC)load (
    userptr, "glVertexArrayAttribLFormat");
  glext_glVertexArrayBindingDivisor
    = (PFNGLVERTEXARRAYBINDINGDIVISORPROC)load (userptr,
                                                "glVertexArrayBindingDivisor");
  glext_glVertexArrayElementBuffer = (PFNGLVERTEXARRAYELEMENTBUFFERPROC)load (
    userptr, "glVertexArrayElementBuffer");
  glext_glVertexArrayVertexBuffer = (PFNGLVERTEXARRAYVERTEXBUFFERPROC)load (
    userptr, "glVertexArrayVertexBuffer");
  glext_glVertexArrayVertexBuffers = (PFNGLVERTEXARRAYVERTEXBUFFERSPROC)load (
    userptr, "glVertexArrayVertexBuffers");
}
static void
glext_gl_load_GL_ARB_draw_buffers (GLEXTuserptrloadfunc load, void* userptr) {
  if (!GLEXT_GL_ARB_draw_buffers)
    return;
  glext_glDrawBuffersARB
    = (PFNGLDRAWBUFFERSARBPROC)load (userptr, "glDrawBuffersARB");
}
static void
glext_gl_load_GL_ARB_draw_buffers_blend (GLEXTuserptrloadfunc load,
                                         void* userptr) {
  if (!GLEXT_GL_ARB_draw_buffers_blend)
    return;
  glext_glBlendEquationSeparateiARB
    = (PFNGLBLENDEQUATIONSEPARATEIARBPROC)load (userptr,
                                                "glBlendEquationSeparateiARB");
  glext_glBlendEquationiARB
    = (PFNGLBLENDEQUATIONIARBPROC)load (userptr, "glBlendEquationiARB");
  glext_glBlendFuncSeparateiARB = (PFNGLBLENDFUNCSEPARATEIARBPROC)load (
    userptr, "glBlendFuncSeparateiARB");
  glext_glBlendFunciARB
    = (PFNGLBLENDFUNCIARBPROC)load (userptr, "glBlendFunciARB");
}
static void
glext_gl_load_GL_ARB_draw_elements_base_vertex (GLEXTuserptrloadfunc load,
                                                void* userptr) {
  if (!GLEXT_GL_ARB_draw_elements_base_vertex)
    return;
  glext_glDrawElementsBaseVertex = (PFNGLDRAWELEMENTSBASEVERTEXPROC)load (
    userptr, "glDrawElementsBaseVertex");
  glext_glDrawElementsInstancedBaseVertex
    = (PFNGLDRAWELEMENTSINSTANCEDBASEVERTEXPROC)load (
      userptr, "glDrawElementsInstancedBaseVertex");
  glext_glDrawRangeElementsBaseVertex
    = (PFNGLDRAWRANGEELEMENTSBASEVERTEXPROC)load (
      userptr, "glDrawRangeElementsBaseVertex");
  glext_glMultiDrawElementsBaseVertex
    = (PFNGLMULTIDRAWELEMENTSBASEVERTEXPROC)load (
      userptr, "glMultiDrawElementsBaseVertex");
}
static void
glext_gl_load_GL_ARB_draw_indirect (GLEXTuserptrloadfunc load, void* userptr) {
  if (!GLEXT_GL_ARB_draw_indirect)
    return;
  glext_glDrawArraysIndirect
    = (PFNGLDRAWARRAYSINDIRECTPROC)load (userptr, "glDrawArraysIndirect");
  glext_glDrawElementsIndirect
    = (PFNGLDRAWELEMENTSINDIRECTPROC)load (userptr, "glDrawElementsIndirect");
}
static void
glext_gl_load_GL_ARB_draw_instanced (GLEXTuserptrloadfunc load,
                                     void* userptr) {
  if (!GLEXT_GL_ARB_draw_instanced)
    return;
  glext_glDrawArraysInstancedARB = (PFNGLDRAWARRAYSINSTANCEDARBPROC)load (
    userptr, "glDrawArraysInstancedARB");
  glext_glDrawElementsInstancedARB = (PFNGLDRAWELEMENTSINSTANCEDARBPROC)load (
    userptr, "glDrawElementsInstancedARB");
}
static void
glext_gl_load_GL_ARB_fragment_program (GLEXTuserptrloadfunc load,
                                       void* userptr) {
  if (!GLEXT_GL_ARB_fragment_program)
    return;
  glext_glBindProgramARB
    = (PFNGLBINDPROGRAMARBPROC)load (userptr, "glBindProgramARB");
  glext_glDeleteProgramsARB
    = (PFNGLDELETEPROGRAMSARBPROC)load (userptr, "glDeleteProgramsARB");
  glext_glGenProgramsARB
    = (PFNGLGENPROGRAMSARBPROC)load (userptr, "glGenProgramsARB");
  glext_glGetProgramEnvParameterdvARB
    = (PFNGLGETPROGRAMENVPARAMETERDVARBPROC)load (
      userptr, "glGetProgramEnvParameterdvARB");
  glext_glGetProgramEnvParameterfvARB
    = (PFNGLGETPROGRAMENVPARAMETERFVARBPROC)load (
      userptr, "glGetProgramEnvParameterfvARB");
  glext_glGetProgramLocalParameterdvARB
    = (PFNGLGETPROGRAMLOCALPARAMETERDVARBPROC)load (
      userptr, "glGetProgramLocalParameterdvARB");
  glext_glGetProgramLocalParameterfvARB
    = (PFNGLGETPROGRAMLOCALPARAMETERFVARBPROC)load (
      userptr, "glGetProgramLocalParameterfvARB");
  glext_glGetProgramStringARB
    = (PFNGLGETPROGRAMSTRINGARBPROC)load (userptr, "glGetProgramStringARB");
  glext_glGetProgramivARB
    = (PFNGLGETPROGRAMIVARBPROC)load (userptr, "glGetProgramivARB");
  glext_glIsProgramARB
    = (PFNGLISPROGRAMARBPROC)load (userptr, "glIsProgramARB");
  glext_glProgramEnvParameter4dARB = (PFNGLPROGRAMENVPARAMETER4DARBPROC)load (
    userptr, "glProgramEnvParameter4dARB");
  glext_glProgramEnvParameter4dvARB
    = (PFNGLPROGRAMENVPARAMETER4DVARBPROC)load (userptr,
                                                "glProgramEnvParameter4dvARB");
  glext_glProgramEnvParameter4fARB = (PFNGLPROGRAMENVPARAMETER4FARBPROC)load (
    userptr, "glProgramEnvParameter4fARB");
  glext_glProgramEnvParameter4fvARB
    = (PFNGLPROGRAMENVPARAMETER4FVARBPROC)load (userptr,
                                                "glProgramEnvParameter4fvARB");
  glext_glProgramLocalParameter4dARB
    = (PFNGLPROGRAMLOCALPARAMETER4DARBPROC)load (
      userptr, "glProgramLocalParameter4dARB");
  glext_glProgramLocalParameter4dvARB
    = (PFNGLPROGRAMLOCALPARAMETER4DVARBPROC)load (
      userptr, "glProgramLocalParameter4dvARB");
  glext_glProgramLocalParameter4fARB
    = (PFNGLPROGRAMLOCALPARAMETER4FARBPROC)load (
      userptr, "glProgramLocalParameter4fARB");
  glext_glProgramLocalParameter4fvARB
    = (PFNGLPROGRAMLOCALPARAMETER4FVARBPROC)load (
      userptr, "glProgramLocalParameter4fvARB");
  glext_glProgramStringARB
    = (PFNGLPROGRAMSTRINGARBPROC)load (userptr, "glProgramStringARB");
}
static void
glext_gl_load_GL_ARB_framebuffer_no_attachments (GLEXTuserptrloadfunc load,
                                                 void* userptr) {
  if (!GLEXT_GL_ARB_framebuffer_no_attachments)
    return;
  glext_glFramebufferParameteri = (PFNGLFRAMEBUFFERPARAMETERIPROC)load (
    userptr, "glFramebufferParameteri");
  glext_glGetFramebufferParameteriv
    = (PFNGLGETFRAMEBUFFERPARAMETERIVPROC)load (userptr,
                                                "glGetFramebufferParameteriv");
}
static void
glext_gl_load_GL_ARB_framebuffer_object (GLEXTuserptrloadfunc load,
                                         void* userptr) {
  if (!GLEXT_GL_ARB_framebuffer_object)
    return;
  glext_glBindFramebuffer
    = (PFNGLBINDFRAMEBUFFERPROC)load (userptr, "glBindFramebuffer");
  glext_glBindRenderbuffer
    = (PFNGLBINDRENDERBUFFERPROC)load (userptr, "glBindRenderbuffer");
  glext_glBlitFramebuffer
    = (PFNGLBLITFRAMEBUFFERPROC)load (userptr, "glBlitFramebuffer");
  glext_glCheckFramebufferStatus = (PFNGLCHECKFRAMEBUFFERSTATUSPROC)load (
    userptr, "glCheckFramebufferStatus");
  glext_glDeleteFramebuffers
    = (PFNGLDELETEFRAMEBUFFERSPROC)load (userptr, "glDeleteFramebuffers");
  glext_glDeleteRenderbuffers
    = (PFNGLDELETERENDERBUFFERSPROC)load (userptr, "glDeleteRenderbuffers");
  glext_glFramebufferRenderbuffer = (PFNGLFRAMEBUFFERRENDERBUFFERPROC)load (
    userptr, "glFramebufferRenderbuffer");
  glext_glFramebufferTexture1D
    = (PFNGLFRAMEBUFFERTEXTURE1DPROC)load (userptr, "glFramebufferTexture1D");
  glext_glFramebufferTexture2D
    = (PFNGLFRAMEBUFFERTEXTURE2DPROC)load (userptr, "glFramebufferTexture2D");
  glext_glFramebufferTexture3D
    = (PFNGLFRAMEBUFFERTEXTURE3DPROC)load (userptr, "glFramebufferTexture3D");
  glext_glFramebufferTextureLayer = (PFNGLFRAMEBUFFERTEXTURELAYERPROC)load (
    userptr, "glFramebufferTextureLayer");
  glext_glGenFramebuffers
    = (PFNGLGENFRAMEBUFFERSPROC)load (userptr, "glGenFramebuffers");
  glext_glGenRenderbuffers
    = (PFNGLGENRENDERBUFFERSPROC)load (userptr, "glGenRenderbuffers");
  glext_glGenerateMipmap
    = (PFNGLGENERATEMIPMAPPROC)load (userptr, "glGenerateMipmap");
  glext_glGetFramebufferAttachmentParameteriv
    = (PFNGLGETFRAMEBUFFERATTACHMENTPARAMETERIVPROC)load (
      userptr, "glGetFramebufferAttachmentParameteriv");
  glext_glGetRenderbufferParameteriv
    = (PFNGLGETRENDERBUFFERPARAMETERIVPROC)load (
      userptr, "glGetRenderbufferParameteriv");
  glext_glIsFramebuffer
    = (PFNGLISFRAMEBUFFERPROC)load (userptr, "glIsFramebuffer");
  glext_glIsRenderbuffer
    = (PFNGLISRENDERBUFFERPROC)load (userptr, "glIsRenderbuffer");
  glext_glRenderbufferStorage
    = (PFNGLRENDERBUFFERSTORAGEPROC)load (userptr, "glRenderbufferStorage");
  glext_glRenderbufferStorageMultisample
    = (PFNGLRENDERBUFFERSTORAGEMULTISAMPLEPROC)load (
      userptr, "glRenderbufferStorageMultisample");
}
static void
glext_gl_load_GL_ARB_geometry_shader4 (GLEXTuserptrloadfunc load,
                                       void* userptr) {
  if (!GLEXT_GL_ARB_geometry_shader4)
    return;
  glext_glFramebufferTextureARB = (PFNGLFRAMEBUFFERTEXTUREARBPROC)load (
    userptr, "glFramebufferTextureARB");
  glext_glFramebufferTextureFaceARB
    = (PFNGLFRAMEBUFFERTEXTUREFACEARBPROC)load (userptr,
                                                "glFramebufferTextureFaceARB");
  glext_glFramebufferTextureLayerARB
    = (PFNGLFRAMEBUFFERTEXTURELAYERARBPROC)load (
      userptr, "glFramebufferTextureLayerARB");
  glext_glProgramParameteriARB
    = (PFNGLPROGRAMPARAMETERIARBPROC)load (userptr, "glProgramParameteriARB");
}
static void
glext_gl_load_GL_ARB_get_program_binary (GLEXTuserptrloadfunc load,
                                         void* userptr) {
  if (!GLEXT_GL_ARB_get_program_binary)
    return;
  glext_glGetProgramBinary
    = (PFNGLGETPROGRAMBINARYPROC)load (userptr, "glGetProgramBinary");
  glext_glProgramBinary
    = (PFNGLPROGRAMBINARYPROC)load (userptr, "glProgramBinary");
  glext_glProgramParameteri
    = (PFNGLPROGRAMPARAMETERIPROC)load (userptr, "glProgramParameteri");
}
static void
glext_gl_load_GL_ARB_get_texture_sub_image (GLEXTuserptrloadfunc load,
                                            void* userptr) {
  if (!GLEXT_GL_ARB_get_texture_sub_image)
    return;
  glext_glGetCompressedTextureSubImage
    = (PFNGLGETCOMPRESSEDTEXTURESUBIMAGEPROC)load (
      userptr, "glGetCompressedTextureSubImage");
  glext_glGetTextureSubImage
    = (PFNGLGETTEXTURESUBIMAGEPROC)load (userptr, "glGetTextureSubImage");
}
static void
glext_gl_load_GL_ARB_gl_spirv (GLEXTuserptrloadfunc load, void* userptr) {
  if (!GLEXT_GL_ARB_gl_spirv)
    return;
  glext_glSpecializeShaderARB
    = (PFNGLSPECIALIZESHADERARBPROC)load (userptr, "glSpecializeShaderARB");
}
static void
glext_gl_load_GL_ARB_gpu_shader_fp64 (GLEXTuserptrloadfunc load,
                                      void* userptr) {
  if (!GLEXT_GL_ARB_gpu_shader_fp64)
    return;
  glext_glGetUniformdv
    = (PFNGLGETUNIFORMDVPROC)load (userptr, "glGetUniformdv");
  glext_glUniform1d = (PFNGLUNIFORM1DPROC)load (userptr, "glUniform1d");
  glext_glUniform1dv = (PFNGLUNIFORM1DVPROC)load (userptr, "glUniform1dv");
  glext_glUniform2d = (PFNGLUNIFORM2DPROC)load (userptr, "glUniform2d");
  glext_glUniform2dv = (PFNGLUNIFORM2DVPROC)load (userptr, "glUniform2dv");
  glext_glUniform3d = (PFNGLUNIFORM3DPROC)load (userptr, "glUniform3d");
  glext_glUniform3dv = (PFNGLUNIFORM3DVPROC)load (userptr, "glUniform3dv");
  glext_glUniform4d = (PFNGLUNIFORM4DPROC)load (userptr, "glUniform4d");
  glext_glUniform4dv = (PFNGLUNIFORM4DVPROC)load (userptr, "glUniform4dv");
  glext_glUniformMatrix2dv
    = (PFNGLUNIFORMMATRIX2DVPROC)load (userptr, "glUniformMatrix2dv");
  glext_glUniformMatrix2x3dv
    = (PFNGLUNIFORMMATRIX2X3DVPROC)load (userptr, "glUniformMatrix2x3dv");
  glext_glUniformMatrix2x4dv
    = (PFNGLUNIFORMMATRIX2X4DVPROC)load (userptr, "glUniformMatrix2x4dv");
  glext_glUniformMatrix3dv
    = (PFNGLUNIFORMMATRIX3DVPROC)load (userptr, "glUniformMatrix3dv");
  glext_glUniformMatrix3x2dv
    = (PFNGLUNIFORMMATRIX3X2DVPROC)load (userptr, "glUniformMatrix3x2dv");
  glext_glUniformMatrix3x4dv
    = (PFNGLUNIFORMMATRIX3X4DVPROC)load (userptr, "glUniformMatrix3x4dv");
  glext_glUniformMatrix4dv
    = (PFNGLUNIFORMMATRIX4DVPROC)load (userptr, "glUniformMatrix4dv");
  glext_glUniformMatrix4x2dv
    = (PFNGLUNIFORMMATRIX4X2DVPROC)load (userptr, "glUniformMatrix4x2dv");
  glext_glUniformMatrix4x3dv
    = (PFNGLUNIFORMMATRIX4X3DVPROC)load (userptr, "glUniformMatrix4x3dv");
}
static void
glext_gl_load_GL_ARB_gpu_shader_int64 (GLEXTuserptrloadfunc load,
                                       void* userptr) {
  if (!GLEXT_GL_ARB_gpu_shader_int64)
    return;
  glext_glGetUniformi64vARB
    = (PFNGLGETUNIFORMI64VARBPROC)load (userptr, "glGetUniformi64vARB");
  glext_glGetUniformui64vARB
    = (PFNGLGETUNIFORMUI64VARBPROC)load (userptr, "glGetUniformui64vARB");
  glext_glGetnUniformi64vARB
    = (PFNGLGETNUNIFORMI64VARBPROC)load (userptr, "glGetnUniformi64vARB");
  glext_glGetnUniformui64vARB
    = (PFNGLGETNUNIFORMUI64VARBPROC)load (userptr, "glGetnUniformui64vARB");
  glext_glProgramUniform1i64ARB = (PFNGLPROGRAMUNIFORM1I64ARBPROC)load (
    userptr, "glProgramUniform1i64ARB");
  glext_glProgramUniform1i64vARB = (PFNGLPROGRAMUNIFORM1I64VARBPROC)load (
    userptr, "glProgramUniform1i64vARB");
  glext_glProgramUniform1ui64ARB = (PFNGLPROGRAMUNIFORM1UI64ARBPROC)load (
    userptr, "glProgramUniform1ui64ARB");
  glext_glProgramUniform1ui64vARB = (PFNGLPROGRAMUNIFORM1UI64VARBPROC)load (
    userptr, "glProgramUniform1ui64vARB");
  glext_glProgramUniform2i64ARB = (PFNGLPROGRAMUNIFORM2I64ARBPROC)load (
    userptr, "glProgramUniform2i64ARB");
  glext_glProgramUniform2i64vARB = (PFNGLPROGRAMUNIFORM2I64VARBPROC)load (
    userptr, "glProgramUniform2i64vARB");
  glext_glProgramUniform2ui64ARB = (PFNGLPROGRAMUNIFORM2UI64ARBPROC)load (
    userptr, "glProgramUniform2ui64ARB");
  glext_glProgramUniform2ui64vARB = (PFNGLPROGRAMUNIFORM2UI64VARBPROC)load (
    userptr, "glProgramUniform2ui64vARB");
  glext_glProgramUniform3i64ARB = (PFNGLPROGRAMUNIFORM3I64ARBPROC)load (
    userptr, "glProgramUniform3i64ARB");
  glext_glProgramUniform3i64vARB = (PFNGLPROGRAMUNIFORM3I64VARBPROC)load (
    userptr, "glProgramUniform3i64vARB");
  glext_glProgramUniform3ui64ARB = (PFNGLPROGRAMUNIFORM3UI64ARBPROC)load (
    userptr, "glProgramUniform3ui64ARB");
  glext_glProgramUniform3ui64vARB = (PFNGLPROGRAMUNIFORM3UI64VARBPROC)load (
    userptr, "glProgramUniform3ui64vARB");
  glext_glProgramUniform4i64ARB = (PFNGLPROGRAMUNIFORM4I64ARBPROC)load (
    userptr, "glProgramUniform4i64ARB");
  glext_glProgramUniform4i64vARB = (PFNGLPROGRAMUNIFORM4I64VARBPROC)load (
    userptr, "glProgramUniform4i64vARB");
  glext_glProgramUniform4ui64ARB = (PFNGLPROGRAMUNIFORM4UI64ARBPROC)load (
    userptr, "glProgramUniform4ui64ARB");
  glext_glProgramUniform4ui64vARB = (PFNGLPROGRAMUNIFORM4UI64VARBPROC)load (
    userptr, "glProgramUniform4ui64vARB");
  glext_glUniform1i64ARB
    = (PFNGLUNIFORM1I64ARBPROC)load (userptr, "glUniform1i64ARB");
  glext_glUniform1i64vARB
    = (PFNGLUNIFORM1I64VARBPROC)load (userptr, "glUniform1i64vARB");
  glext_glUniform1ui64ARB
    = (PFNGLUNIFORM1UI64ARBPROC)load (userptr, "glUniform1ui64ARB");
  glext_glUniform1ui64vARB
    = (PFNGLUNIFORM1UI64VARBPROC)load (userptr, "glUniform1ui64vARB");
  glext_glUniform2i64ARB
    = (PFNGLUNIFORM2I64ARBPROC)load (userptr, "glUniform2i64ARB");
  glext_glUniform2i64vARB
    = (PFNGLUNIFORM2I64VARBPROC)load (userptr, "glUniform2i64vARB");
  glext_glUniform2ui64ARB
    = (PFNGLUNIFORM2UI64ARBPROC)load (userptr, "glUniform2ui64ARB");
  glext_glUniform2ui64vARB
    = (PFNGLUNIFORM2UI64VARBPROC)load (userptr, "glUniform2ui64vARB");
  glext_glUniform3i64ARB
    = (PFNGLUNIFORM3I64ARBPROC)load (userptr, "glUniform3i64ARB");
  glext_glUniform3i64vARB
    = (PFNGLUNIFORM3I64VARBPROC)load (userptr, "glUniform3i64vARB");
  glext_glUniform3ui64ARB
    = (PFNGLUNIFORM3UI64ARBPROC)load (userptr, "glUniform3ui64ARB");
  glext_glUniform3ui64vARB
    = (PFNGLUNIFORM3UI64VARBPROC)load (userptr, "glUniform3ui64vARB");
  glext_glUniform4i64ARB
    = (PFNGLUNIFORM4I64ARBPROC)load (userptr, "glUniform4i64ARB");
  glext_glUniform4i64vARB
    = (PFNGLUNIFORM4I64VARBPROC)load (userptr, "glUniform4i64vARB");
  glext_glUniform4ui64ARB
    = (PFNGLUNIFORM4UI64ARBPROC)load (userptr, "glUniform4ui64ARB");
  glext_glUniform4ui64vARB
    = (PFNGLUNIFORM4UI64VARBPROC)load (userptr, "glUniform4ui64vARB");
}
static void
glext_gl_load_GL_ARB_imaging (GLEXTuserptrloadfunc load, void* userptr) {
  if (!GLEXT_GL_ARB_imaging)
    return;
  glext_glBlendColor = (PFNGLBLENDCOLORPROC)load (userptr, "glBlendColor");
  glext_glBlendEquation
    = (PFNGLBLENDEQUATIONPROC)load (userptr, "glBlendEquation");
}
static void
glext_gl_load_GL_ARB_indirect_parameters (GLEXTuserptrloadfunc load,
                                          void* userptr) {
  if (!GLEXT_GL_ARB_indirect_parameters)
    return;
  glext_glMultiDrawArraysIndirectCountARB
    = (PFNGLMULTIDRAWARRAYSINDIRECTCOUNTARBPROC)load (
      userptr, "glMultiDrawArraysIndirectCountARB");
  glext_glMultiDrawElementsIndirectCountARB
    = (PFNGLMULTIDRAWELEMENTSINDIRECTCOUNTARBPROC)load (
      userptr, "glMultiDrawElementsIndirectCountARB");
}
static void
glext_gl_load_GL_ARB_instanced_arrays (GLEXTuserptrloadfunc load,
                                       void* userptr) {
  if (!GLEXT_GL_ARB_instanced_arrays)
    return;
  glext_glVertexAttribDivisorARB = (PFNGLVERTEXATTRIBDIVISORARBPROC)load (
    userptr, "glVertexAttribDivisorARB");
}
static void
glext_gl_load_GL_ARB_internalformat_query (GLEXTuserptrloadfunc load,
                                           void* userptr) {
  if (!GLEXT_GL_ARB_internalformat_query)
    return;
  glext_glGetInternalformativ
    = (PFNGLGETINTERNALFORMATIVPROC)load (userptr, "glGetInternalformativ");
}
static void
glext_gl_load_GL_ARB_internalformat_query2 (GLEXTuserptrloadfunc load,
                                            void* userptr) {
  if (!GLEXT_GL_ARB_internalformat_query2)
    return;
  glext_glGetInternalformati64v = (PFNGLGETINTERNALFORMATI64VPROC)load (
    userptr, "glGetInternalformati64v");
}
static void
glext_gl_load_GL_ARB_invalidate_subdata (GLEXTuserptrloadfunc load,
                                         void* userptr) {
  if (!GLEXT_GL_ARB_invalidate_subdata)
    return;
  glext_glInvalidateBufferData
    = (PFNGLINVALIDATEBUFFERDATAPROC)load (userptr, "glInvalidateBufferData");
  glext_glInvalidateBufferSubData = (PFNGLINVALIDATEBUFFERSUBDATAPROC)load (
    userptr, "glInvalidateBufferSubData");
  glext_glInvalidateFramebuffer = (PFNGLINVALIDATEFRAMEBUFFERPROC)load (
    userptr, "glInvalidateFramebuffer");
  glext_glInvalidateSubFramebuffer = (PFNGLINVALIDATESUBFRAMEBUFFERPROC)load (
    userptr, "glInvalidateSubFramebuffer");
  glext_glInvalidateTexImage
    = (PFNGLINVALIDATETEXIMAGEPROC)load (userptr, "glInvalidateTexImage");
  glext_glInvalidateTexSubImage = (PFNGLINVALIDATETEXSUBIMAGEPROC)load (
    userptr, "glInvalidateTexSubImage");
}
static void
glext_gl_load_GL_ARB_map_buffer_range (GLEXTuserptrloadfunc load,
                                       void* userptr) {
  if (!GLEXT_GL_ARB_map_buffer_range)
    return;
  glext_glFlushMappedBufferRange = (PFNGLFLUSHMAPPEDBUFFERRANGEPROC)load (
    userptr, "glFlushMappedBufferRange");
  glext_glMapBufferRange
    = (PFNGLMAPBUFFERRANGEPROC)load (userptr, "glMapBufferRange");
}
static void
glext_gl_load_GL_ARB_matrix_palette (GLEXTuserptrloadfunc load,
                                     void* userptr) {
  if (!GLEXT_GL_ARB_matrix_palette)
    return;
  glext_glCurrentPaletteMatrixARB = (PFNGLCURRENTPALETTEMATRIXARBPROC)load (
    userptr, "glCurrentPaletteMatrixARB");
  glext_glMatrixIndexPointerARB = (PFNGLMATRIXINDEXPOINTERARBPROC)load (
    userptr, "glMatrixIndexPointerARB");
  glext_glMatrixIndexubvARB
    = (PFNGLMATRIXINDEXUBVARBPROC)load (userptr, "glMatrixIndexubvARB");
  glext_glMatrixIndexuivARB
    = (PFNGLMATRIXINDEXUIVARBPROC)load (userptr, "glMatrixIndexuivARB");
  glext_glMatrixIndexusvARB
    = (PFNGLMATRIXINDEXUSVARBPROC)load (userptr, "glMatrixIndexusvARB");
}
static void
glext_gl_load_GL_ARB_multi_bind (GLEXTuserptrloadfunc load, void* userptr) {
  if (!GLEXT_GL_ARB_multi_bind)
    return;
  glext_glBindBuffersBase
    = (PFNGLBINDBUFFERSBASEPROC)load (userptr, "glBindBuffersBase");
  glext_glBindBuffersRange
    = (PFNGLBINDBUFFERSRANGEPROC)load (userptr, "glBindBuffersRange");
  glext_glBindImageTextures
    = (PFNGLBINDIMAGETEXTURESPROC)load (userptr, "glBindImageTextures");
  glext_glBindSamplers
    = (PFNGLBINDSAMPLERSPROC)load (userptr, "glBindSamplers");
  glext_glBindTextures
    = (PFNGLBINDTEXTURESPROC)load (userptr, "glBindTextures");
  glext_glBindVertexBuffers
    = (PFNGLBINDVERTEXBUFFERSPROC)load (userptr, "glBindVertexBuffers");
}
static void
glext_gl_load_GL_ARB_multi_draw_indirect (GLEXTuserptrloadfunc load,
                                          void* userptr) {
  if (!GLEXT_GL_ARB_multi_draw_indirect)
    return;
  glext_glMultiDrawArraysIndirect = (PFNGLMULTIDRAWARRAYSINDIRECTPROC)load (
    userptr, "glMultiDrawArraysIndirect");
  glext_glMultiDrawElementsIndirect
    = (PFNGLMULTIDRAWELEMENTSINDIRECTPROC)load (userptr,
                                                "glMultiDrawElementsIndirect");
}
static void
glext_gl_load_GL_ARB_multisample (GLEXTuserptrloadfunc load, void* userptr) {
  if (!GLEXT_GL_ARB_multisample)
    return;
  glext_glSampleCoverageARB
    = (PFNGLSAMPLECOVERAGEARBPROC)load (userptr, "glSampleCoverageARB");
}
static void
glext_gl_load_GL_ARB_multitexture (GLEXTuserptrloadfunc load, void* userptr) {
  if (!GLEXT_GL_ARB_multitexture)
    return;
  glext_glActiveTextureARB
    = (PFNGLACTIVETEXTUREARBPROC)load (userptr, "glActiveTextureARB");
  glext_glClientActiveTextureARB = (PFNGLCLIENTACTIVETEXTUREARBPROC)load (
    userptr, "glClientActiveTextureARB");
  glext_glMultiTexCoord1dARB
    = (PFNGLMULTITEXCOORD1DARBPROC)load (userptr, "glMultiTexCoord1dARB");
  glext_glMultiTexCoord1dvARB
    = (PFNGLMULTITEXCOORD1DVARBPROC)load (userptr, "glMultiTexCoord1dvARB");
  glext_glMultiTexCoord1fARB
    = (PFNGLMULTITEXCOORD1FARBPROC)load (userptr, "glMultiTexCoord1fARB");
  glext_glMultiTexCoord1fvARB
    = (PFNGLMULTITEXCOORD1FVARBPROC)load (userptr, "glMultiTexCoord1fvARB");
  glext_glMultiTexCoord1iARB
    = (PFNGLMULTITEXCOORD1IARBPROC)load (userptr, "glMultiTexCoord1iARB");
  glext_glMultiTexCoord1ivARB
    = (PFNGLMULTITEXCOORD1IVARBPROC)load (userptr, "glMultiTexCoord1ivARB");
  glext_glMultiTexCoord1sARB
    = (PFNGLMULTITEXCOORD1SARBPROC)load (userptr, "glMultiTexCoord1sARB");
  glext_glMultiTexCoord1svARB
    = (PFNGLMULTITEXCOORD1SVARBPROC)load (userptr, "glMultiTexCoord1svARB");
  glext_glMultiTexCoord2dARB
    = (PFNGLMULTITEXCOORD2DARBPROC)load (userptr, "glMultiTexCoord2dARB");
  glext_glMultiTexCoord2dvARB
    = (PFNGLMULTITEXCOORD2DVARBPROC)load (userptr, "glMultiTexCoord2dvARB");
  glext_glMultiTexCoord2fARB
    = (PFNGLMULTITEXCOORD2FARBPROC)load (userptr, "glMultiTexCoord2fARB");
  glext_glMultiTexCoord2fvARB
    = (PFNGLMULTITEXCOORD2FVARBPROC)load (userptr, "glMultiTexCoord2fvARB");
  glext_glMultiTexCoord2iARB
    = (PFNGLMULTITEXCOORD2IARBPROC)load (userptr, "glMultiTexCoord2iARB");
  glext_glMultiTexCoord2ivARB
    = (PFNGLMULTITEXCOORD2IVARBPROC)load (userptr, "glMultiTexCoord2ivARB");
  glext_glMultiTexCoord2sARB
    = (PFNGLMULTITEXCOORD2SARBPROC)load (userptr, "glMultiTexCoord2sARB");
  glext_glMultiTexCoord2svARB
    = (PFNGLMULTITEXCOORD2SVARBPROC)load (userptr, "glMultiTexCoord2svARB");
  glext_glMultiTexCoord3dARB
    = (PFNGLMULTITEXCOORD3DARBPROC)load (userptr, "glMultiTexCoord3dARB");
  glext_glMultiTexCoord3dvARB
    = (PFNGLMULTITEXCOORD3DVARBPROC)load (userptr, "glMultiTexCoord3dvARB");
  glext_glMultiTexCoord3fARB
    = (PFNGLMULTITEXCOORD3FARBPROC)load (userptr, "glMultiTexCoord3fARB");
  glext_glMultiTexCoord3fvARB
    = (PFNGLMULTITEXCOORD3FVARBPROC)load (userptr, "glMultiTexCoord3fvARB");
  glext_glMultiTexCoord3iARB
    = (PFNGLMULTITEXCOORD3IARBPROC)load (userptr, "glMultiTexCoord3iARB");
  glext_glMultiTexCoord3ivARB
    = (PFNGLMULTITEXCOORD3IVARBPROC)load (userptr, "glMultiTexCoord3ivARB");
  glext_glMultiTexCoord3sARB
    = (PFNGLMULTITEXCOORD3SARBPROC)load (userptr, "glMultiTexCoord3sARB");
  glext_glMultiTexCoord3svARB
    = (PFNGLMULTITEXCOORD3SVARBPROC)load (userptr, "glMultiTexCoord3svARB");
  glext_glMultiTexCoord4dARB
    = (PFNGLMULTITEXCOORD4DARBPROC)load (userptr, "glMultiTexCoord4dARB");
  glext_glMultiTexCoord4dvARB
    = (PFNGLMULTITEXCOORD4DVARBPROC)load (userptr, "glMultiTexCoord4dvARB");
  glext_glMultiTexCoord4fARB
    = (PFNGLMULTITEXCOORD4FARBPROC)load (userptr, "glMultiTexCoord4fARB");
  glext_glMultiTexCoord4fvARB
    = (PFNGLMULTITEXCOORD4FVARBPROC)load (userptr, "glMultiTexCoord4fvARB");
  glext_glMultiTexCoord4iARB
    = (PFNGLMULTITEXCOORD4IARBPROC)load (userptr, "glMultiTexCoord4iARB");
  glext_glMultiTexCoord4ivARB
    = (PFNGLMULTITEXCOORD4IVARBPROC)load (userptr, "glMultiTexCoord4ivARB");
  glext_glMultiTexCoord4sARB
    = (PFNGLMULTITEXCOORD4SARBPROC)load (userptr, "glMultiTexCoord4sARB");
  glext_glMultiTexCoord4svARB
    = (PFNGLMULTITEXCOORD4SVARBPROC)load (userptr, "glMultiTexCoord4svARB");
}
static void
glext_gl_load_GL_ARB_occlusion_query (GLEXTuserptrloadfunc load,
                                      void* userptr) {
  if (!GLEXT_GL_ARB_occlusion_query)
    return;
  glext_glBeginQueryARB
    = (PFNGLBEGINQUERYARBPROC)load (userptr, "glBeginQueryARB");
  glext_glDeleteQueriesARB
    = (PFNGLDELETEQUERIESARBPROC)load (userptr, "glDeleteQueriesARB");
  glext_glEndQueryARB = (PFNGLENDQUERYARBPROC)load (userptr, "glEndQueryARB");
  glext_glGenQueriesARB
    = (PFNGLGENQUERIESARBPROC)load (userptr, "glGenQueriesARB");
  glext_glGetQueryObjectivARB
    = (PFNGLGETQUERYOBJECTIVARBPROC)load (userptr, "glGetQueryObjectivARB");
  glext_glGetQueryObjectuivARB
    = (PFNGLGETQUERYOBJECTUIVARBPROC)load (userptr, "glGetQueryObjectuivARB");
  glext_glGetQueryivARB
    = (PFNGLGETQUERYIVARBPROC)load (userptr, "glGetQueryivARB");
  glext_glIsQueryARB = (PFNGLISQUERYARBPROC)load (userptr, "glIsQueryARB");
}
static void
glext_gl_load_GL_ARB_parallel_shader_compile (GLEXTuserptrloadfunc load,
                                              void* userptr) {
  if (!GLEXT_GL_ARB_parallel_shader_compile)
    return;
  glext_glMaxShaderCompilerThreadsARB
    = (PFNGLMAXSHADERCOMPILERTHREADSARBPROC)load (
      userptr, "glMaxShaderCompilerThreadsARB");
}
static void
glext_gl_load_GL_ARB_point_parameters (GLEXTuserptrloadfunc load,
                                       void* userptr) {
  if (!GLEXT_GL_ARB_point_parameters)
    return;
  glext_glPointParameterfARB
    = (PFNGLPOINTPARAMETERFARBPROC)load (userptr, "glPointParameterfARB");
  glext_glPointParameterfvARB
    = (PFNGLPOINTPARAMETERFVARBPROC)load (userptr, "glPointParameterfvARB");
}
static void
glext_gl_load_GL_ARB_polygon_offset_clamp (GLEXTuserptrloadfunc load,
                                           void* userptr) {
  if (!GLEXT_GL_ARB_polygon_offset_clamp)
    return;
  glext_glPolygonOffsetClamp
    = (PFNGLPOLYGONOFFSETCLAMPPROC)load (userptr, "glPolygonOffsetClamp");
}
static void
glext_gl_load_GL_ARB_program_interface_query (GLEXTuserptrloadfunc load,
                                              void* userptr) {
  if (!GLEXT_GL_ARB_program_interface_query)
    return;
  glext_glGetProgramInterfaceiv = (PFNGLGETPROGRAMINTERFACEIVPROC)load (
    userptr, "glGetProgramInterfaceiv");
  glext_glGetProgramResourceIndex = (PFNGLGETPROGRAMRESOURCEINDEXPROC)load (
    userptr, "glGetProgramResourceIndex");
  glext_glGetProgramResourceLocation
    = (PFNGLGETPROGRAMRESOURCELOCATIONPROC)load (
      userptr, "glGetProgramResourceLocation");
  glext_glGetProgramResourceLocationIndex
    = (PFNGLGETPROGRAMRESOURCELOCATIONINDEXPROC)load (
      userptr, "glGetProgramResourceLocationIndex");
  glext_glGetProgramResourceName = (PFNGLGETPROGRAMRESOURCENAMEPROC)load (
    userptr, "glGetProgramResourceName");
  glext_glGetProgramResourceiv
    = (PFNGLGETPROGRAMRESOURCEIVPROC)load (userptr, "glGetProgramResourceiv");
}
static void
glext_gl_load_GL_ARB_provoking_vertex (GLEXTuserptrloadfunc load,
                                       void* userptr) {
  if (!GLEXT_GL_ARB_provoking_vertex)
    return;
  glext_glProvokingVertex
    = (PFNGLPROVOKINGVERTEXPROC)load (userptr, "glProvokingVertex");
}
static void
glext_gl_load_GL_ARB_robustness (GLEXTuserptrloadfunc load, void* userptr) {
  if (!GLEXT_GL_ARB_robustness)
    return;
  glext_glGetGraphicsResetStatusARB
    = (PFNGLGETGRAPHICSRESETSTATUSARBPROC)load (userptr,
                                                "glGetGraphicsResetStatusARB");
  glext_glGetnCompressedTexImageARB
    = (PFNGLGETNCOMPRESSEDTEXIMAGEARBPROC)load (userptr,
                                                "glGetnCompressedTexImageARB");
  glext_glGetnTexImageARB
    = (PFNGLGETNTEXIMAGEARBPROC)load (userptr, "glGetnTexImageARB");
  glext_glGetnUniformdvARB
    = (PFNGLGETNUNIFORMDVARBPROC)load (userptr, "glGetnUniformdvARB");
  glext_glGetnUniformfvARB
    = (PFNGLGETNUNIFORMFVARBPROC)load (userptr, "glGetnUniformfvARB");
  glext_glGetnUniformivARB
    = (PFNGLGETNUNIFORMIVARBPROC)load (userptr, "glGetnUniformivARB");
  glext_glGetnUniformuivARB
    = (PFNGLGETNUNIFORMUIVARBPROC)load (userptr, "glGetnUniformuivARB");
  glext_glReadnPixelsARB
    = (PFNGLREADNPIXELSARBPROC)load (userptr, "glReadnPixelsARB");
}
static void
glext_gl_load_GL_ARB_sample_locations (GLEXTuserptrloadfunc load,
                                       void* userptr) {
  if (!GLEXT_GL_ARB_sample_locations)
    return;
  glext_glEvaluateDepthValuesARB = (PFNGLEVALUATEDEPTHVALUESARBPROC)load (
    userptr, "glEvaluateDepthValuesARB");
  glext_glFramebufferSampleLocationsfvARB
    = (PFNGLFRAMEBUFFERSAMPLELOCATIONSFVARBPROC)load (
      userptr, "glFramebufferSampleLocationsfvARB");
  glext_glNamedFramebufferSampleLocationsfvARB
    = (PFNGLNAMEDFRAMEBUFFERSAMPLELOCATIONSFVARBPROC)load (
      userptr, "glNamedFramebufferSampleLocationsfvARB");
}
static void
glext_gl_load_GL_ARB_sample_shading (GLEXTuserptrloadfunc load,
                                     void* userptr) {
  if (!GLEXT_GL_ARB_sample_shading)
    return;
  glext_glMinSampleShadingARB
    = (PFNGLMINSAMPLESHADINGARBPROC)load (userptr, "glMinSampleShadingARB");
}
static void
glext_gl_load_GL_ARB_sampler_objects (GLEXTuserptrloadfunc load,
                                      void* userptr) {
  if (!GLEXT_GL_ARB_sampler_objects)
    return;
  glext_glBindSampler = (PFNGLBINDSAMPLERPROC)load (userptr, "glBindSampler");
  glext_glDeleteSamplers
    = (PFNGLDELETESAMPLERSPROC)load (userptr, "glDeleteSamplers");
  glext_glGenSamplers = (PFNGLGENSAMPLERSPROC)load (userptr, "glGenSamplers");
  glext_glGetSamplerParameterIiv = (PFNGLGETSAMPLERPARAMETERIIVPROC)load (
    userptr, "glGetSamplerParameterIiv");
  glext_glGetSamplerParameterIuiv = (PFNGLGETSAMPLERPARAMETERIUIVPROC)load (
    userptr, "glGetSamplerParameterIuiv");
  glext_glGetSamplerParameterfv = (PFNGLGETSAMPLERPARAMETERFVPROC)load (
    userptr, "glGetSamplerParameterfv");
  glext_glGetSamplerParameteriv = (PFNGLGETSAMPLERPARAMETERIVPROC)load (
    userptr, "glGetSamplerParameteriv");
  glext_glIsSampler = (PFNGLISSAMPLERPROC)load (userptr, "glIsSampler");
  glext_glSamplerParameterIiv
    = (PFNGLSAMPLERPARAMETERIIVPROC)load (userptr, "glSamplerParameterIiv");
  glext_glSamplerParameterIuiv
    = (PFNGLSAMPLERPARAMETERIUIVPROC)load (userptr, "glSamplerParameterIuiv");
  glext_glSamplerParameterf
    = (PFNGLSAMPLERPARAMETERFPROC)load (userptr, "glSamplerParameterf");
  glext_glSamplerParameterfv
    = (PFNGLSAMPLERPARAMETERFVPROC)load (userptr, "glSamplerParameterfv");
  glext_glSamplerParameteri
    = (PFNGLSAMPLERPARAMETERIPROC)load (userptr, "glSamplerParameteri");
  glext_glSamplerParameteriv
    = (PFNGLSAMPLERPARAMETERIVPROC)load (userptr, "glSamplerParameteriv");
}
static void
glext_gl_load_GL_ARB_separate_shader_objects (GLEXTuserptrloadfunc load,
                                              void* userptr) {
  if (!GLEXT_GL_ARB_separate_shader_objects)
    return;
  glext_glActiveShaderProgram
    = (PFNGLACTIVESHADERPROGRAMPROC)load (userptr, "glActiveShaderProgram");
  glext_glBindProgramPipeline
    = (PFNGLBINDPROGRAMPIPELINEPROC)load (userptr, "glBindProgramPipeline");
  glext_glCreateShaderProgramv
    = (PFNGLCREATESHADERPROGRAMVPROC)load (userptr, "glCreateShaderProgramv");
  glext_glDeleteProgramPipelines = (PFNGLDELETEPROGRAMPIPELINESPROC)load (
    userptr, "glDeleteProgramPipelines");
  glext_glGenProgramPipelines
    = (PFNGLGENPROGRAMPIPELINESPROC)load (userptr, "glGenProgramPipelines");
  glext_glGetProgramPipelineInfoLog
    = (PFNGLGETPROGRAMPIPELINEINFOLOGPROC)load (userptr,
                                                "glGetProgramPipelineInfoLog");
  glext_glGetProgramPipelineiv
    = (PFNGLGETPROGRAMPIPELINEIVPROC)load (userptr, "glGetProgramPipelineiv");
  glext_glIsProgramPipeline
    = (PFNGLISPROGRAMPIPELINEPROC)load (userptr, "glIsProgramPipeline");
  glext_glProgramParameteri
    = (PFNGLPROGRAMPARAMETERIPROC)load (userptr, "glProgramParameteri");
  glext_glProgramUniform1d
    = (PFNGLPROGRAMUNIFORM1DPROC)load (userptr, "glProgramUniform1d");
  glext_glProgramUniform1dv
    = (PFNGLPROGRAMUNIFORM1DVPROC)load (userptr, "glProgramUniform1dv");
  glext_glProgramUniform1f
    = (PFNGLPROGRAMUNIFORM1FPROC)load (userptr, "glProgramUniform1f");
  glext_glProgramUniform1fv
    = (PFNGLPROGRAMUNIFORM1FVPROC)load (userptr, "glProgramUniform1fv");
  glext_glProgramUniform1i
    = (PFNGLPROGRAMUNIFORM1IPROC)load (userptr, "glProgramUniform1i");
  glext_glProgramUniform1iv
    = (PFNGLPROGRAMUNIFORM1IVPROC)load (userptr, "glProgramUniform1iv");
  glext_glProgramUniform1ui
    = (PFNGLPROGRAMUNIFORM1UIPROC)load (userptr, "glProgramUniform1ui");
  glext_glProgramUniform1uiv
    = (PFNGLPROGRAMUNIFORM1UIVPROC)load (userptr, "glProgramUniform1uiv");
  glext_glProgramUniform2d
    = (PFNGLPROGRAMUNIFORM2DPROC)load (userptr, "glProgramUniform2d");
  glext_glProgramUniform2dv
    = (PFNGLPROGRAMUNIFORM2DVPROC)load (userptr, "glProgramUniform2dv");
  glext_glProgramUniform2f
    = (PFNGLPROGRAMUNIFORM2FPROC)load (userptr, "glProgramUniform2f");
  glext_glProgramUniform2fv
    = (PFNGLPROGRAMUNIFORM2FVPROC)load (userptr, "glProgramUniform2fv");
  glext_glProgramUniform2i
    = (PFNGLPROGRAMUNIFORM2IPROC)load (userptr, "glProgramUniform2i");
  glext_glProgramUniform2iv
    = (PFNGLPROGRAMUNIFORM2IVPROC)load (userptr, "glProgramUniform2iv");
  glext_glProgramUniform2ui
    = (PFNGLPROGRAMUNIFORM2UIPROC)load (userptr, "glProgramUniform2ui");
  glext_glProgramUniform2uiv
    = (PFNGLPROGRAMUNIFORM2UIVPROC)load (userptr, "glProgramUniform2uiv");
  glext_glProgramUniform3d
    = (PFNGLPROGRAMUNIFORM3DPROC)load (userptr, "glProgramUniform3d");
  glext_glProgramUniform3dv
    = (PFNGLPROGRAMUNIFORM3DVPROC)load (userptr, "glProgramUniform3dv");
  glext_glProgramUniform3f
    = (PFNGLPROGRAMUNIFORM3FPROC)load (userptr, "glProgramUniform3f");
  glext_glProgramUniform3fv
    = (PFNGLPROGRAMUNIFORM3FVPROC)load (userptr, "glProgramUniform3fv");
  glext_glProgramUniform3i
    = (PFNGLPROGRAMUNIFORM3IPROC)load (userptr, "glProgramUniform3i");
  glext_glProgramUniform3iv
    = (PFNGLPROGRAMUNIFORM3IVPROC)load (userptr, "glProgramUniform3iv");
  glext_glProgramUniform3ui
    = (PFNGLPROGRAMUNIFORM3UIPROC)load (userptr, "glProgramUniform3ui");
  glext_glProgramUniform3uiv
    = (PFNGLPROGRAMUNIFORM3UIVPROC)load (userptr, "glProgramUniform3uiv");
  glext_glProgramUniform4d
    = (PFNGLPROGRAMUNIFORM4DPROC)load (userptr, "glProgramUniform4d");
  glext_glProgramUniform4dv
    = (PFNGLPROGRAMUNIFORM4DVPROC)load (userptr, "glProgramUniform4dv");
  glext_glProgramUniform4f
    = (PFNGLPROGRAMUNIFORM4FPROC)load (userptr, "glProgramUniform4f");
  glext_glProgramUniform4fv
    = (PFNGLPROGRAMUNIFORM4FVPROC)load (userptr, "glProgramUniform4fv");
  glext_glProgramUniform4i
    = (PFNGLPROGRAMUNIFORM4IPROC)load (userptr, "glProgramUniform4i");
  glext_glProgramUniform4iv
    = (PFNGLPROGRAMUNIFORM4IVPROC)load (userptr, "glProgramUniform4iv");
  glext_glProgramUniform4ui
    = (PFNGLPROGRAMUNIFORM4UIPROC)load (userptr, "glProgramUniform4ui");
  glext_glProgramUniform4uiv
    = (PFNGLPROGRAMUNIFORM4UIVPROC)load (userptr, "glProgramUniform4uiv");
  glext_glProgramUniformMatrix2dv = (PFNGLPROGRAMUNIFORMMATRIX2DVPROC)load (
    userptr, "glProgramUniformMatrix2dv");
  glext_glProgramUniformMatrix2fv = (PFNGLPROGRAMUNIFORMMATRIX2FVPROC)load (
    userptr, "glProgramUniformMatrix2fv");
  glext_glProgramUniformMatrix2x3dv
    = (PFNGLPROGRAMUNIFORMMATRIX2X3DVPROC)load (userptr,
                                                "glProgramUniformMatrix2x3dv");
  glext_glProgramUniformMatrix2x3fv
    = (PFNGLPROGRAMUNIFORMMATRIX2X3FVPROC)load (userptr,
                                                "glProgramUniformMatrix2x3fv");
  glext_glProgramUniformMatrix2x4dv
    = (PFNGLPROGRAMUNIFORMMATRIX2X4DVPROC)load (userptr,
                                                "glProgramUniformMatrix2x4dv");
  glext_glProgramUniformMatrix2x4fv
    = (PFNGLPROGRAMUNIFORMMATRIX2X4FVPROC)load (userptr,
                                                "glProgramUniformMatrix2x4fv");
  glext_glProgramUniformMatrix3dv = (PFNGLPROGRAMUNIFORMMATRIX3DVPROC)load (
    userptr, "glProgramUniformMatrix3dv");
  glext_glProgramUniformMatrix3fv = (PFNGLPROGRAMUNIFORMMATRIX3FVPROC)load (
    userptr, "glProgramUniformMatrix3fv");
  glext_glProgramUniformMatrix3x2dv
    = (PFNGLPROGRAMUNIFORMMATRIX3X2DVPROC)load (userptr,
                                                "glProgramUniformMatrix3x2dv");
  glext_glProgramUniformMatrix3x2fv
    = (PFNGLPROGRAMUNIFORMMATRIX3X2FVPROC)load (userptr,
                                                "glProgramUniformMatrix3x2fv");
  glext_glProgramUniformMatrix3x4dv
    = (PFNGLPROGRAMUNIFORMMATRIX3X4DVPROC)load (userptr,
                                                "glProgramUniformMatrix3x4dv");
  glext_glProgramUniformMatrix3x4fv
    = (PFNGLPROGRAMUNIFORMMATRIX3X4FVPROC)load (userptr,
                                                "glProgramUniformMatrix3x4fv");
  glext_glProgramUniformMatrix4dv = (PFNGLPROGRAMUNIFORMMATRIX4DVPROC)load (
    userptr, "glProgramUniformMatrix4dv");
  glext_glProgramUniformMatrix4fv = (PFNGLPROGRAMUNIFORMMATRIX4FVPROC)load (
    userptr, "glProgramUniformMatrix4fv");
  glext_glProgramUniformMatrix4x2dv
    = (PFNGLPROGRAMUNIFORMMATRIX4X2DVPROC)load (userptr,
                                                "glProgramUniformMatrix4x2dv");
  glext_glProgramUniformMatrix4x2fv
    = (PFNGLPROGRAMUNIFORMMATRIX4X2FVPROC)load (userptr,
                                                "glProgramUniformMatrix4x2fv");
  glext_glProgramUniformMatrix4x3dv
    = (PFNGLPROGRAMUNIFORMMATRIX4X3DVPROC)load (userptr,
                                                "glProgramUniformMatrix4x3dv");
  glext_glProgramUniformMatrix4x3fv
    = (PFNGLPROGRAMUNIFORMMATRIX4X3FVPROC)load (userptr,
                                                "glProgramUniformMatrix4x3fv");
  glext_glUseProgramStages
    = (PFNGLUSEPROGRAMSTAGESPROC)load (userptr, "glUseProgramStages");
  glext_glValidateProgramPipeline = (PFNGLVALIDATEPROGRAMPIPELINEPROC)load (
    userptr, "glValidateProgramPipeline");
}
static void
glext_gl_load_GL_ARB_shader_atomic_counters (GLEXTuserptrloadfunc load,
                                             void* userptr) {
  if (!GLEXT_GL_ARB_shader_atomic_counters)
    return;
  glext_glGetActiveAtomicCounterBufferiv
    = (PFNGLGETACTIVEATOMICCOUNTERBUFFERIVPROC)load (
      userptr, "glGetActiveAtomicCounterBufferiv");
}
static void
glext_gl_load_GL_ARB_shader_image_load_store (GLEXTuserptrloadfunc load,
                                              void* userptr) {
  if (!GLEXT_GL_ARB_shader_image_load_store)
    return;
  glext_glBindImageTexture
    = (PFNGLBINDIMAGETEXTUREPROC)load (userptr, "glBindImageTexture");
  glext_glMemoryBarrier
    = (PFNGLMEMORYBARRIERPROC)load (userptr, "glMemoryBarrier");
}
static void
glext_gl_load_GL_ARB_shader_objects (GLEXTuserptrloadfunc load,
                                     void* userptr) {
  if (!GLEXT_GL_ARB_shader_objects)
    return;
  glext_glAttachObjectARB
    = (PFNGLATTACHOBJECTARBPROC)load (userptr, "glAttachObjectARB");
  glext_glCompileShaderARB
    = (PFNGLCOMPILESHADERARBPROC)load (userptr, "glCompileShaderARB");
  glext_glCreateProgramObjectARB = (PFNGLCREATEPROGRAMOBJECTARBPROC)load (
    userptr, "glCreateProgramObjectARB");
  glext_glCreateShaderObjectARB = (PFNGLCREATESHADEROBJECTARBPROC)load (
    userptr, "glCreateShaderObjectARB");
  glext_glDeleteObjectARB
    = (PFNGLDELETEOBJECTARBPROC)load (userptr, "glDeleteObjectARB");
  glext_glDetachObjectARB
    = (PFNGLDETACHOBJECTARBPROC)load (userptr, "glDetachObjectARB");
  glext_glGetActiveUniformARB
    = (PFNGLGETACTIVEUNIFORMARBPROC)load (userptr, "glGetActiveUniformARB");
  glext_glGetAttachedObjectsARB = (PFNGLGETATTACHEDOBJECTSARBPROC)load (
    userptr, "glGetAttachedObjectsARB");
  glext_glGetHandleARB
    = (PFNGLGETHANDLEARBPROC)load (userptr, "glGetHandleARB");
  glext_glGetInfoLogARB
    = (PFNGLGETINFOLOGARBPROC)load (userptr, "glGetInfoLogARB");
  glext_glGetObjectParameterfvARB = (PFNGLGETOBJECTPARAMETERFVARBPROC)load (
    userptr, "glGetObjectParameterfvARB");
  glext_glGetObjectParameterivARB = (PFNGLGETOBJECTPARAMETERIVARBPROC)load (
    userptr, "glGetObjectParameterivARB");
  glext_glGetShaderSourceARB
    = (PFNGLGETSHADERSOURCEARBPROC)load (userptr, "glGetShaderSourceARB");
  glext_glGetUniformLocationARB = (PFNGLGETUNIFORMLOCATIONARBPROC)load (
    userptr, "glGetUniformLocationARB");
  glext_glGetUniformfvARB
    = (PFNGLGETUNIFORMFVARBPROC)load (userptr, "glGetUniformfvARB");
  glext_glGetUniformivARB
    = (PFNGLGETUNIFORMIVARBPROC)load (userptr, "glGetUniformivARB");
  glext_glLinkProgramARB
    = (PFNGLLINKPROGRAMARBPROC)load (userptr, "glLinkProgramARB");
  glext_glShaderSourceARB
    = (PFNGLSHADERSOURCEARBPROC)load (userptr, "glShaderSourceARB");
  glext_glUniform1fARB
    = (PFNGLUNIFORM1FARBPROC)load (userptr, "glUniform1fARB");
  glext_glUniform1fvARB
    = (PFNGLUNIFORM1FVARBPROC)load (userptr, "glUniform1fvARB");
  glext_glUniform1iARB
    = (PFNGLUNIFORM1IARBPROC)load (userptr, "glUniform1iARB");
  glext_glUniform1ivARB
    = (PFNGLUNIFORM1IVARBPROC)load (userptr, "glUniform1ivARB");
  glext_glUniform2fARB
    = (PFNGLUNIFORM2FARBPROC)load (userptr, "glUniform2fARB");
  glext_glUniform2fvARB
    = (PFNGLUNIFORM2FVARBPROC)load (userptr, "glUniform2fvARB");
  glext_glUniform2iARB
    = (PFNGLUNIFORM2IARBPROC)load (userptr, "glUniform2iARB");
  glext_glUniform2ivARB
    = (PFNGLUNIFORM2IVARBPROC)load (userptr, "glUniform2ivARB");
  glext_glUniform3fARB
    = (PFNGLUNIFORM3FARBPROC)load (userptr, "glUniform3fARB");
  glext_glUniform3fvARB
    = (PFNGLUNIFORM3FVARBPROC)load (userptr, "glUniform3fvARB");
  glext_glUniform3iARB
    = (PFNGLUNIFORM3IARBPROC)load (userptr, "glUniform3iARB");
  glext_glUniform3ivARB
    = (PFNGLUNIFORM3IVARBPROC)load (userptr, "glUniform3ivARB");
  glext_glUniform4fARB
    = (PFNGLUNIFORM4FARBPROC)load (userptr, "glUniform4fARB");
  glext_glUniform4fvARB
    = (PFNGLUNIFORM4FVARBPROC)load (userptr, "glUniform4fvARB");
  glext_glUniform4iARB
    = (PFNGLUNIFORM4IARBPROC)load (userptr, "glUniform4iARB");
  glext_glUniform4ivARB
    = (PFNGLUNIFORM4IVARBPROC)load (userptr, "glUniform4ivARB");
  glext_glUniformMatrix2fvARB
    = (PFNGLUNIFORMMATRIX2FVARBPROC)load (userptr, "glUniformMatrix2fvARB");
  glext_glUniformMatrix3fvARB
    = (PFNGLUNIFORMMATRIX3FVARBPROC)load (userptr, "glUniformMatrix3fvARB");
  glext_glUniformMatrix4fvARB
    = (PFNGLUNIFORMMATRIX4FVARBPROC)load (userptr, "glUniformMatrix4fvARB");
  glext_glUseProgramObjectARB
    = (PFNGLUSEPROGRAMOBJECTARBPROC)load (userptr, "glUseProgramObjectARB");
  glext_glValidateProgramARB
    = (PFNGLVALIDATEPROGRAMARBPROC)load (userptr, "glValidateProgramARB");
}
static void
glext_gl_load_GL_ARB_shader_storage_buffer_object (GLEXTuserptrloadfunc load,
                                                   void* userptr) {
  if (!GLEXT_GL_ARB_shader_storage_buffer_object)
    return;
  glext_glShaderStorageBlockBinding
    = (PFNGLSHADERSTORAGEBLOCKBINDINGPROC)load (userptr,
                                                "glShaderStorageBlockBinding");
}
static void
glext_gl_load_GL_ARB_shader_subroutine (GLEXTuserptrloadfunc load,
                                        void* userptr) {
  if (!GLEXT_GL_ARB_shader_subroutine)
    return;
  glext_glGetActiveSubroutineName = (PFNGLGETACTIVESUBROUTINENAMEPROC)load (
    userptr, "glGetActiveSubroutineName");
  glext_glGetActiveSubroutineUniformName
    = (PFNGLGETACTIVESUBROUTINEUNIFORMNAMEPROC)load (
      userptr, "glGetActiveSubroutineUniformName");
  glext_glGetActiveSubroutineUniformiv
    = (PFNGLGETACTIVESUBROUTINEUNIFORMIVPROC)load (
      userptr, "glGetActiveSubroutineUniformiv");
  glext_glGetProgramStageiv
    = (PFNGLGETPROGRAMSTAGEIVPROC)load (userptr, "glGetProgramStageiv");
  glext_glGetSubroutineIndex
    = (PFNGLGETSUBROUTINEINDEXPROC)load (userptr, "glGetSubroutineIndex");
  glext_glGetSubroutineUniformLocation
    = (PFNGLGETSUBROUTINEUNIFORMLOCATIONPROC)load (
      userptr, "glGetSubroutineUniformLocation");
  glext_glGetUniformSubroutineuiv = (PFNGLGETUNIFORMSUBROUTINEUIVPROC)load (
    userptr, "glGetUniformSubroutineuiv");
  glext_glUniformSubroutinesuiv = (PFNGLUNIFORMSUBROUTINESUIVPROC)load (
    userptr, "glUniformSubroutinesuiv");
}
static void
glext_gl_load_GL_ARB_shading_language_include (GLEXTuserptrloadfunc load,
                                               void* userptr) {
  if (!GLEXT_GL_ARB_shading_language_include)
    return;
  glext_glCompileShaderIncludeARB = (PFNGLCOMPILESHADERINCLUDEARBPROC)load (
    userptr, "glCompileShaderIncludeARB");
  glext_glDeleteNamedStringARB
    = (PFNGLDELETENAMEDSTRINGARBPROC)load (userptr, "glDeleteNamedStringARB");
  glext_glGetNamedStringARB
    = (PFNGLGETNAMEDSTRINGARBPROC)load (userptr, "glGetNamedStringARB");
  glext_glGetNamedStringivARB
    = (PFNGLGETNAMEDSTRINGIVARBPROC)load (userptr, "glGetNamedStringivARB");
  glext_glIsNamedStringARB
    = (PFNGLISNAMEDSTRINGARBPROC)load (userptr, "glIsNamedStringARB");
  glext_glNamedStringARB
    = (PFNGLNAMEDSTRINGARBPROC)load (userptr, "glNamedStringARB");
}
static void
glext_gl_load_GL_ARB_sparse_buffer (GLEXTuserptrloadfunc load, void* userptr) {
  if (!GLEXT_GL_ARB_sparse_buffer)
    return;
  glext_glBufferPageCommitmentARB = (PFNGLBUFFERPAGECOMMITMENTARBPROC)load (
    userptr, "glBufferPageCommitmentARB");
  glext_glNamedBufferPageCommitmentARB
    = (PFNGLNAMEDBUFFERPAGECOMMITMENTARBPROC)load (
      userptr, "glNamedBufferPageCommitmentARB");
  glext_glNamedBufferPageCommitmentEXT
    = (PFNGLNAMEDBUFFERPAGECOMMITMENTEXTPROC)load (
      userptr, "glNamedBufferPageCommitmentEXT");
}
static void
glext_gl_load_GL_ARB_sparse_texture (GLEXTuserptrloadfunc load,
                                     void* userptr) {
  if (!GLEXT_GL_ARB_sparse_texture)
    return;
  glext_glTexPageCommitmentARB
    = (PFNGLTEXPAGECOMMITMENTARBPROC)load (userptr, "glTexPageCommitmentARB");
}
static void
glext_gl_load_GL_ARB_sync (GLEXTuserptrloadfunc load, void* userptr) {
  if (!GLEXT_GL_ARB_sync)
    return;
  glext_glClientWaitSync
    = (PFNGLCLIENTWAITSYNCPROC)load (userptr, "glClientWaitSync");
  glext_glDeleteSync = (PFNGLDELETESYNCPROC)load (userptr, "glDeleteSync");
  glext_glFenceSync = (PFNGLFENCESYNCPROC)load (userptr, "glFenceSync");
  glext_glGetInteger64v
    = (PFNGLGETINTEGER64VPROC)load (userptr, "glGetInteger64v");
  glext_glGetSynciv = (PFNGLGETSYNCIVPROC)load (userptr, "glGetSynciv");
  glext_glIsSync = (PFNGLISSYNCPROC)load (userptr, "glIsSync");
  glext_glWaitSync = (PFNGLWAITSYNCPROC)load (userptr, "glWaitSync");
}
static void
glext_gl_load_GL_ARB_tessellation_shader (GLEXTuserptrloadfunc load,
                                          void* userptr) {
  if (!GLEXT_GL_ARB_tessellation_shader)
    return;
  glext_glPatchParameterfv
    = (PFNGLPATCHPARAMETERFVPROC)load (userptr, "glPatchParameterfv");
  glext_glPatchParameteri
    = (PFNGLPATCHPARAMETERIPROC)load (userptr, "glPatchParameteri");
}
static void
glext_gl_load_GL_ARB_texture_barrier (GLEXTuserptrloadfunc load,
                                      void* userptr) {
  if (!GLEXT_GL_ARB_texture_barrier)
    return;
  glext_glTextureBarrier
    = (PFNGLTEXTUREBARRIERPROC)load (userptr, "glTextureBarrier");
}
static void
glext_gl_load_GL_ARB_texture_buffer_object (GLEXTuserptrloadfunc load,
                                            void* userptr) {
  if (!GLEXT_GL_ARB_texture_buffer_object)
    return;
  glext_glTexBufferARB
    = (PFNGLTEXBUFFERARBPROC)load (userptr, "glTexBufferARB");
}
static void
glext_gl_load_GL_ARB_texture_buffer_range (GLEXTuserptrloadfunc load,
                                           void* userptr) {
  if (!GLEXT_GL_ARB_texture_buffer_range)
    return;
  glext_glTexBufferRange
    = (PFNGLTEXBUFFERRANGEPROC)load (userptr, "glTexBufferRange");
}
static void
glext_gl_load_GL_ARB_texture_compression (GLEXTuserptrloadfunc load,
                                          void* userptr) {
  if (!GLEXT_GL_ARB_texture_compression)
    return;
  glext_glCompressedTexImage1DARB = (PFNGLCOMPRESSEDTEXIMAGE1DARBPROC)load (
    userptr, "glCompressedTexImage1DARB");
  glext_glCompressedTexImage2DARB = (PFNGLCOMPRESSEDTEXIMAGE2DARBPROC)load (
    userptr, "glCompressedTexImage2DARB");
  glext_glCompressedTexImage3DARB = (PFNGLCOMPRESSEDTEXIMAGE3DARBPROC)load (
    userptr, "glCompressedTexImage3DARB");
  glext_glCompressedTexSubImage1DARB
    = (PFNGLCOMPRESSEDTEXSUBIMAGE1DARBPROC)load (
      userptr, "glCompressedTexSubImage1DARB");
  glext_glCompressedTexSubImage2DARB
    = (PFNGLCOMPRESSEDTEXSUBIMAGE2DARBPROC)load (
      userptr, "glCompressedTexSubImage2DARB");
  glext_glCompressedTexSubImage3DARB
    = (PFNGLCOMPRESSEDTEXSUBIMAGE3DARBPROC)load (
      userptr, "glCompressedTexSubImage3DARB");
  glext_glGetCompressedTexImageARB = (PFNGLGETCOMPRESSEDTEXIMAGEARBPROC)load (
    userptr, "glGetCompressedTexImageARB");
}
static void
glext_gl_load_GL_ARB_texture_multisample (GLEXTuserptrloadfunc load,
                                          void* userptr) {
  if (!GLEXT_GL_ARB_texture_multisample)
    return;
  glext_glGetMultisamplefv
    = (PFNGLGETMULTISAMPLEFVPROC)load (userptr, "glGetMultisamplefv");
  glext_glSampleMaski = (PFNGLSAMPLEMASKIPROC)load (userptr, "glSampleMaski");
  glext_glTexImage2DMultisample = (PFNGLTEXIMAGE2DMULTISAMPLEPROC)load (
    userptr, "glTexImage2DMultisample");
  glext_glTexImage3DMultisample = (PFNGLTEXIMAGE3DMULTISAMPLEPROC)load (
    userptr, "glTexImage3DMultisample");
}
static void
glext_gl_load_GL_ARB_texture_storage (GLEXTuserptrloadfunc load,
                                      void* userptr) {
  if (!GLEXT_GL_ARB_texture_storage)
    return;
  glext_glTexStorage1D
    = (PFNGLTEXSTORAGE1DPROC)load (userptr, "glTexStorage1D");
  glext_glTexStorage2D
    = (PFNGLTEXSTORAGE2DPROC)load (userptr, "glTexStorage2D");
  glext_glTexStorage3D
    = (PFNGLTEXSTORAGE3DPROC)load (userptr, "glTexStorage3D");
}
static void
glext_gl_load_GL_ARB_texture_storage_multisample (GLEXTuserptrloadfunc load,
                                                  void* userptr) {
  if (!GLEXT_GL_ARB_texture_storage_multisample)
    return;
  glext_glTexStorage2DMultisample = (PFNGLTEXSTORAGE2DMULTISAMPLEPROC)load (
    userptr, "glTexStorage2DMultisample");
  glext_glTexStorage3DMultisample = (PFNGLTEXSTORAGE3DMULTISAMPLEPROC)load (
    userptr, "glTexStorage3DMultisample");
}
static void
glext_gl_load_GL_ARB_texture_view (GLEXTuserptrloadfunc load, void* userptr) {
  if (!GLEXT_GL_ARB_texture_view)
    return;
  glext_glTextureView = (PFNGLTEXTUREVIEWPROC)load (userptr, "glTextureView");
}
static void
glext_gl_load_GL_ARB_timer_query (GLEXTuserptrloadfunc load, void* userptr) {
  if (!GLEXT_GL_ARB_timer_query)
    return;
  glext_glGetQueryObjecti64v
    = (PFNGLGETQUERYOBJECTI64VPROC)load (userptr, "glGetQueryObjecti64v");
  glext_glGetQueryObjectui64v
    = (PFNGLGETQUERYOBJECTUI64VPROC)load (userptr, "glGetQueryObjectui64v");
  glext_glQueryCounter
    = (PFNGLQUERYCOUNTERPROC)load (userptr, "glQueryCounter");
}
static void
glext_gl_load_GL_ARB_transform_feedback2 (GLEXTuserptrloadfunc load,
                                          void* userptr) {
  if (!GLEXT_GL_ARB_transform_feedback2)
    return;
  glext_glBindTransformFeedback = (PFNGLBINDTRANSFORMFEEDBACKPROC)load (
    userptr, "glBindTransformFeedback");
  glext_glDeleteTransformFeedbacks = (PFNGLDELETETRANSFORMFEEDBACKSPROC)load (
    userptr, "glDeleteTransformFeedbacks");
  glext_glDrawTransformFeedback = (PFNGLDRAWTRANSFORMFEEDBACKPROC)load (
    userptr, "glDrawTransformFeedback");
  glext_glGenTransformFeedbacks = (PFNGLGENTRANSFORMFEEDBACKSPROC)load (
    userptr, "glGenTransformFeedbacks");
  glext_glIsTransformFeedback
    = (PFNGLISTRANSFORMFEEDBACKPROC)load (userptr, "glIsTransformFeedback");
  glext_glPauseTransformFeedback = (PFNGLPAUSETRANSFORMFEEDBACKPROC)load (
    userptr, "glPauseTransformFeedback");
  glext_glResumeTransformFeedback = (PFNGLRESUMETRANSFORMFEEDBACKPROC)load (
    userptr, "glResumeTransformFeedback");
}
static void
glext_gl_load_GL_ARB_transform_feedback3 (GLEXTuserptrloadfunc load,
                                          void* userptr) {
  if (!GLEXT_GL_ARB_transform_feedback3)
    return;
  glext_glBeginQueryIndexed
    = (PFNGLBEGINQUERYINDEXEDPROC)load (userptr, "glBeginQueryIndexed");
  glext_glDrawTransformFeedbackStream
    = (PFNGLDRAWTRANSFORMFEEDBACKSTREAMPROC)load (
      userptr, "glDrawTransformFeedbackStream");
  glext_glEndQueryIndexed
    = (PFNGLENDQUERYINDEXEDPROC)load (userptr, "glEndQueryIndexed");
  glext_glGetQueryIndexediv
    = (PFNGLGETQUERYINDEXEDIVPROC)load (userptr, "glGetQueryIndexediv");
}
static void
glext_gl_load_GL_ARB_transform_feedback_instanced (GLEXTuserptrloadfunc load,
                                                   void* userptr) {
  if (!GLEXT_GL_ARB_transform_feedback_instanced)
    return;
  glext_glDrawTransformFeedbackInstanced
    = (PFNGLDRAWTRANSFORMFEEDBACKINSTANCEDPROC)load (
      userptr, "glDrawTransformFeedbackInstanced");
  glext_glDrawTransformFeedbackStreamInstanced
    = (PFNGLDRAWTRANSFORMFEEDBACKSTREAMINSTANCEDPROC)load (
      userptr, "glDrawTransformFeedbackStreamInstanced");
}
static void
glext_gl_load_GL_ARB_transpose_matrix (GLEXTuserptrloadfunc load,
                                       void* userptr) {
  if (!GLEXT_GL_ARB_transpose_matrix)
    return;
  glext_glLoadTransposeMatrixdARB = (PFNGLLOADTRANSPOSEMATRIXDARBPROC)load (
    userptr, "glLoadTransposeMatrixdARB");
  glext_glLoadTransposeMatrixfARB = (PFNGLLOADTRANSPOSEMATRIXFARBPROC)load (
    userptr, "glLoadTransposeMatrixfARB");
  glext_glMultTransposeMatrixdARB = (PFNGLMULTTRANSPOSEMATRIXDARBPROC)load (
    userptr, "glMultTransposeMatrixdARB");
  glext_glMultTransposeMatrixfARB = (PFNGLMULTTRANSPOSEMATRIXFARBPROC)load (
    userptr, "glMultTransposeMatrixfARB");
}
static void
glext_gl_load_GL_ARB_uniform_buffer_object (GLEXTuserptrloadfunc load,
                                            void* userptr) {
  if (!GLEXT_GL_ARB_uniform_buffer_object)
    return;
  glext_glBindBufferBase
    = (PFNGLBINDBUFFERBASEPROC)load (userptr, "glBindBufferBase");
  glext_glBindBufferRange
    = (PFNGLBINDBUFFERRANGEPROC)load (userptr, "glBindBufferRange");
  glext_glGetActiveUniformBlockName
    = (PFNGLGETACTIVEUNIFORMBLOCKNAMEPROC)load (userptr,
                                                "glGetActiveUniformBlockName");
  glext_glGetActiveUniformBlockiv = (PFNGLGETACTIVEUNIFORMBLOCKIVPROC)load (
    userptr, "glGetActiveUniformBlockiv");
  glext_glGetActiveUniformName
    = (PFNGLGETACTIVEUNIFORMNAMEPROC)load (userptr, "glGetActiveUniformName");
  glext_glGetActiveUniformsiv
    = (PFNGLGETACTIVEUNIFORMSIVPROC)load (userptr, "glGetActiveUniformsiv");
  glext_glGetIntegeri_v
    = (PFNGLGETINTEGERI_VPROC)load (userptr, "glGetIntegeri_v");
  glext_glGetUniformBlockIndex
    = (PFNGLGETUNIFORMBLOCKINDEXPROC)load (userptr, "glGetUniformBlockIndex");
  glext_glGetUniformIndices
    = (PFNGLGETUNIFORMINDICESPROC)load (userptr, "glGetUniformIndices");
  glext_glUniformBlockBinding
    = (PFNGLUNIFORMBLOCKBINDINGPROC)load (userptr, "glUniformBlockBinding");
}
static void
glext_gl_load_GL_ARB_vertex_array_object (GLEXTuserptrloadfunc load,
                                          void* userptr) {
  if (!GLEXT_GL_ARB_vertex_array_object)
    return;
  glext_glBindVertexArray
    = (PFNGLBINDVERTEXARRAYPROC)load (userptr, "glBindVertexArray");
  glext_glDeleteVertexArrays
    = (PFNGLDELETEVERTEXARRAYSPROC)load (userptr, "glDeleteVertexArrays");
  glext_glGenVertexArrays
    = (PFNGLGENVERTEXARRAYSPROC)load (userptr, "glGenVertexArrays");
  glext_glIsVertexArray
    = (PFNGLISVERTEXARRAYPROC)load (userptr, "glIsVertexArray");
}
static void
glext_gl_load_GL_ARB_vertex_attrib_64bit (GLEXTuserptrloadfunc load,
                                          void* userptr) {
  if (!GLEXT_GL_ARB_vertex_attrib_64bit)
    return;
  glext_glGetVertexAttribLdv
    = (PFNGLGETVERTEXATTRIBLDVPROC)load (userptr, "glGetVertexAttribLdv");
  glext_glVertexAttribL1d
    = (PFNGLVERTEXATTRIBL1DPROC)load (userptr, "glVertexAttribL1d");
  glext_glVertexAttribL1dv
    = (PFNGLVERTEXATTRIBL1DVPROC)load (userptr, "glVertexAttribL1dv");
  glext_glVertexAttribL2d
    = (PFNGLVERTEXATTRIBL2DPROC)load (userptr, "glVertexAttribL2d");
  glext_glVertexAttribL2dv
    = (PFNGLVERTEXATTRIBL2DVPROC)load (userptr, "glVertexAttribL2dv");
  glext_glVertexAttribL3d
    = (PFNGLVERTEXATTRIBL3DPROC)load (userptr, "glVertexAttribL3d");
  glext_glVertexAttribL3dv
    = (PFNGLVERTEXATTRIBL3DVPROC)load (userptr, "glVertexAttribL3dv");
  glext_glVertexAttribL4d
    = (PFNGLVERTEXATTRIBL4DPROC)load (userptr, "glVertexAttribL4d");
  glext_glVertexAttribL4dv
    = (PFNGLVERTEXATTRIBL4DVPROC)load (userptr, "glVertexAttribL4dv");
  glext_glVertexAttribLPointer
    = (PFNGLVERTEXATTRIBLPOINTERPROC)load (userptr, "glVertexAttribLPointer");
}
static void
glext_gl_load_GL_ARB_vertex_attrib_binding (GLEXTuserptrloadfunc load,
                                            void* userptr) {
  if (!GLEXT_GL_ARB_vertex_attrib_binding)
    return;
  glext_glBindVertexBuffer
    = (PFNGLBINDVERTEXBUFFERPROC)load (userptr, "glBindVertexBuffer");
  glext_glVertexAttribBinding
    = (PFNGLVERTEXATTRIBBINDINGPROC)load (userptr, "glVertexAttribBinding");
  glext_glVertexAttribFormat
    = (PFNGLVERTEXATTRIBFORMATPROC)load (userptr, "glVertexAttribFormat");
  glext_glVertexAttribIFormat
    = (PFNGLVERTEXATTRIBIFORMATPROC)load (userptr, "glVertexAttribIFormat");
  glext_glVertexAttribLFormat
    = (PFNGLVERTEXATTRIBLFORMATPROC)load (userptr, "glVertexAttribLFormat");
  glext_glVertexBindingDivisor
    = (PFNGLVERTEXBINDINGDIVISORPROC)load (userptr, "glVertexBindingDivisor");
}
static void
glext_gl_load_GL_ARB_vertex_blend (GLEXTuserptrloadfunc load, void* userptr) {
  if (!GLEXT_GL_ARB_vertex_blend)
    return;
  glext_glVertexBlendARB
    = (PFNGLVERTEXBLENDARBPROC)load (userptr, "glVertexBlendARB");
  glext_glWeightPointerARB
    = (PFNGLWEIGHTPOINTERARBPROC)load (userptr, "glWeightPointerARB");
  glext_glWeightbvARB = (PFNGLWEIGHTBVARBPROC)load (userptr, "glWeightbvARB");
  glext_glWeightdvARB = (PFNGLWEIGHTDVARBPROC)load (userptr, "glWeightdvARB");
  glext_glWeightfvARB = (PFNGLWEIGHTFVARBPROC)load (userptr, "glWeightfvARB");
  glext_glWeightivARB = (PFNGLWEIGHTIVARBPROC)load (userptr, "glWeightivARB");
  glext_glWeightsvARB = (PFNGLWEIGHTSVARBPROC)load (userptr, "glWeightsvARB");
  glext_glWeightubvARB
    = (PFNGLWEIGHTUBVARBPROC)load (userptr, "glWeightubvARB");
  glext_glWeightuivARB
    = (PFNGLWEIGHTUIVARBPROC)load (userptr, "glWeightuivARB");
  glext_glWeightusvARB
    = (PFNGLWEIGHTUSVARBPROC)load (userptr, "glWeightusvARB");
}
static void
glext_gl_load_GL_ARB_vertex_buffer_object (GLEXTuserptrloadfunc load,
                                           void* userptr) {
  if (!GLEXT_GL_ARB_vertex_buffer_object)
    return;
  glext_glBindBufferARB
    = (PFNGLBINDBUFFERARBPROC)load (userptr, "glBindBufferARB");
  glext_glBufferDataARB
    = (PFNGLBUFFERDATAARBPROC)load (userptr, "glBufferDataARB");
  glext_glBufferSubDataARB
    = (PFNGLBUFFERSUBDATAARBPROC)load (userptr, "glBufferSubDataARB");
  glext_glDeleteBuffersARB
    = (PFNGLDELETEBUFFERSARBPROC)load (userptr, "glDeleteBuffersARB");
  glext_glGenBuffersARB
    = (PFNGLGENBUFFERSARBPROC)load (userptr, "glGenBuffersARB");
  glext_glGetBufferParameterivARB = (PFNGLGETBUFFERPARAMETERIVARBPROC)load (
    userptr, "glGetBufferParameterivARB");
  glext_glGetBufferPointervARB
    = (PFNGLGETBUFFERPOINTERVARBPROC)load (userptr, "glGetBufferPointervARB");
  glext_glGetBufferSubDataARB
    = (PFNGLGETBUFFERSUBDATAARBPROC)load (userptr, "glGetBufferSubDataARB");
  glext_glIsBufferARB = (PFNGLISBUFFERARBPROC)load (userptr, "glIsBufferARB");
  glext_glMapBufferARB
    = (PFNGLMAPBUFFERARBPROC)load (userptr, "glMapBufferARB");
  glext_glUnmapBufferARB
    = (PFNGLUNMAPBUFFERARBPROC)load (userptr, "glUnmapBufferARB");
}
static void
glext_gl_load_GL_ARB_vertex_program (GLEXTuserptrloadfunc load,
                                     void* userptr) {
  if (!GLEXT_GL_ARB_vertex_program)
    return;
  glext_glBindProgramARB
    = (PFNGLBINDPROGRAMARBPROC)load (userptr, "glBindProgramARB");
  glext_glDeleteProgramsARB
    = (PFNGLDELETEPROGRAMSARBPROC)load (userptr, "glDeleteProgramsARB");
  glext_glDisableVertexAttribArrayARB
    = (PFNGLDISABLEVERTEXATTRIBARRAYARBPROC)load (
      userptr, "glDisableVertexAttribArrayARB");
  glext_glEnableVertexAttribArrayARB
    = (PFNGLENABLEVERTEXATTRIBARRAYARBPROC)load (
      userptr, "glEnableVertexAttribArrayARB");
  glext_glGenProgramsARB
    = (PFNGLGENPROGRAMSARBPROC)load (userptr, "glGenProgramsARB");
  glext_glGetProgramEnvParameterdvARB
    = (PFNGLGETPROGRAMENVPARAMETERDVARBPROC)load (
      userptr, "glGetProgramEnvParameterdvARB");
  glext_glGetProgramEnvParameterfvARB
    = (PFNGLGETPROGRAMENVPARAMETERFVARBPROC)load (
      userptr, "glGetProgramEnvParameterfvARB");
  glext_glGetProgramLocalParameterdvARB
    = (PFNGLGETPROGRAMLOCALPARAMETERDVARBPROC)load (
      userptr, "glGetProgramLocalParameterdvARB");
  glext_glGetProgramLocalParameterfvARB
    = (PFNGLGETPROGRAMLOCALPARAMETERFVARBPROC)load (
      userptr, "glGetProgramLocalParameterfvARB");
  glext_glGetProgramStringARB
    = (PFNGLGETPROGRAMSTRINGARBPROC)load (userptr, "glGetProgramStringARB");
  glext_glGetProgramivARB
    = (PFNGLGETPROGRAMIVARBPROC)load (userptr, "glGetProgramivARB");
  glext_glGetVertexAttribPointervARB
    = (PFNGLGETVERTEXATTRIBPOINTERVARBPROC)load (
      userptr, "glGetVertexAttribPointervARB");
  glext_glGetVertexAttribdvARB
    = (PFNGLGETVERTEXATTRIBDVARBPROC)load (userptr, "glGetVertexAttribdvARB");
  glext_glGetVertexAttribfvARB
    = (PFNGLGETVERTEXATTRIBFVARBPROC)load (userptr, "glGetVertexAttribfvARB");
  glext_glGetVertexAttribivARB
    = (PFNGLGETVERTEXATTRIBIVARBPROC)load (userptr, "glGetVertexAttribivARB");
  glext_glIsProgramARB
    = (PFNGLISPROGRAMARBPROC)load (userptr, "glIsProgramARB");
  glext_glProgramEnvParameter4dARB = (PFNGLPROGRAMENVPARAMETER4DARBPROC)load (
    userptr, "glProgramEnvParameter4dARB");
  glext_glProgramEnvParameter4dvARB
    = (PFNGLPROGRAMENVPARAMETER4DVARBPROC)load (userptr,
                                                "glProgramEnvParameter4dvARB");
  glext_glProgramEnvParameter4fARB = (PFNGLPROGRAMENVPARAMETER4FARBPROC)load (
    userptr, "glProgramEnvParameter4fARB");
  glext_glProgramEnvParameter4fvARB
    = (PFNGLPROGRAMENVPARAMETER4FVARBPROC)load (userptr,
                                                "glProgramEnvParameter4fvARB");
  glext_glProgramLocalParameter4dARB
    = (PFNGLPROGRAMLOCALPARAMETER4DARBPROC)load (
      userptr, "glProgramLocalParameter4dARB");
  glext_glProgramLocalParameter4dvARB
    = (PFNGLPROGRAMLOCALPARAMETER4DVARBPROC)load (
      userptr, "glProgramLocalParameter4dvARB");
  glext_glProgramLocalParameter4fARB
    = (PFNGLPROGRAMLOCALPARAMETER4FARBPROC)load (
      userptr, "glProgramLocalParameter4fARB");
  glext_glProgramLocalParameter4fvARB
    = (PFNGLPROGRAMLOCALPARAMETER4FVARBPROC)load (
      userptr, "glProgramLocalParameter4fvARB");
  glext_glProgramStringARB
    = (PFNGLPROGRAMSTRINGARBPROC)load (userptr, "glProgramStringARB");
  glext_glVertexAttrib1dARB
    = (PFNGLVERTEXATTRIB1DARBPROC)load (userptr, "glVertexAttrib1dARB");
  glext_glVertexAttrib1dvARB
    = (PFNGLVERTEXATTRIB1DVARBPROC)load (userptr, "glVertexAttrib1dvARB");
  glext_glVertexAttrib1fARB
    = (PFNGLVERTEXATTRIB1FARBPROC)load (userptr, "glVertexAttrib1fARB");
  glext_glVertexAttrib1fvARB
    = (PFNGLVERTEXATTRIB1FVARBPROC)load (userptr, "glVertexAttrib1fvARB");
  glext_glVertexAttrib1sARB
    = (PFNGLVERTEXATTRIB1SARBPROC)load (userptr, "glVertexAttrib1sARB");
  glext_glVertexAttrib1svARB
    = (PFNGLVERTEXATTRIB1SVARBPROC)load (userptr, "glVertexAttrib1svARB");
  glext_glVertexAttrib2dARB
    = (PFNGLVERTEXATTRIB2DARBPROC)load (userptr, "glVertexAttrib2dARB");
  glext_glVertexAttrib2dvARB
    = (PFNGLVERTEXATTRIB2DVARBPROC)load (userptr, "glVertexAttrib2dvARB");
  glext_glVertexAttrib2fARB
    = (PFNGLVERTEXATTRIB2FARBPROC)load (userptr, "glVertexAttrib2fARB");
  glext_glVertexAttrib2fvARB
    = (PFNGLVERTEXATTRIB2FVARBPROC)load (userptr, "glVertexAttrib2fvARB");
  glext_glVertexAttrib2sARB
    = (PFNGLVERTEXATTRIB2SARBPROC)load (userptr, "glVertexAttrib2sARB");
  glext_glVertexAttrib2svARB
    = (PFNGLVERTEXATTRIB2SVARBPROC)load (userptr, "glVertexAttrib2svARB");
  glext_glVertexAttrib3dARB
    = (PFNGLVERTEXATTRIB3DARBPROC)load (userptr, "glVertexAttrib3dARB");
  glext_glVertexAttrib3dvARB
    = (PFNGLVERTEXATTRIB3DVARBPROC)load (userptr, "glVertexAttrib3dvARB");
  glext_glVertexAttrib3fARB
    = (PFNGLVERTEXATTRIB3FARBPROC)load (userptr, "glVertexAttrib3fARB");
  glext_glVertexAttrib3fvARB
    = (PFNGLVERTEXATTRIB3FVARBPROC)load (userptr, "glVertexAttrib3fvARB");
  glext_glVertexAttrib3sARB
    = (PFNGLVERTEXATTRIB3SARBPROC)load (userptr, "glVertexAttrib3sARB");
  glext_glVertexAttrib3svARB
    = (PFNGLVERTEXATTRIB3SVARBPROC)load (userptr, "glVertexAttrib3svARB");
  glext_glVertexAttrib4NbvARB
    = (PFNGLVERTEXATTRIB4NBVARBPROC)load (userptr, "glVertexAttrib4NbvARB");
  glext_glVertexAttrib4NivARB
    = (PFNGLVERTEXATTRIB4NIVARBPROC)load (userptr, "glVertexAttrib4NivARB");
  glext_glVertexAttrib4NsvARB
    = (PFNGLVERTEXATTRIB4NSVARBPROC)load (userptr, "glVertexAttrib4NsvARB");
  glext_glVertexAttrib4NubARB
    = (PFNGLVERTEXATTRIB4NUBARBPROC)load (userptr, "glVertexAttrib4NubARB");
  glext_glVertexAttrib4NubvARB
    = (PFNGLVERTEXATTRIB4NUBVARBPROC)load (userptr, "glVertexAttrib4NubvARB");
  glext_glVertexAttrib4NuivARB
    = (PFNGLVERTEXATTRIB4NUIVARBPROC)load (userptr, "glVertexAttrib4NuivARB");
  glext_glVertexAttrib4NusvARB
    = (PFNGLVERTEXATTRIB4NUSVARBPROC)load (userptr, "glVertexAttrib4NusvARB");
  glext_glVertexAttrib4bvARB
    = (PFNGLVERTEXATTRIB4BVARBPROC)load (userptr, "glVertexAttrib4bvARB");
  glext_glVertexAttrib4dARB
    = (PFNGLVERTEXATTRIB4DARBPROC)load (userptr, "glVertexAttrib4dARB");
  glext_glVertexAttrib4dvARB
    = (PFNGLVERTEXATTRIB4DVARBPROC)load (userptr, "glVertexAttrib4dvARB");
  glext_glVertexAttrib4fARB
    = (PFNGLVERTEXATTRIB4FARBPROC)load (userptr, "glVertexAttrib4fARB");
  glext_glVertexAttrib4fvARB
    = (PFNGLVERTEXATTRIB4FVARBPROC)load (userptr, "glVertexAttrib4fvARB");
  glext_glVertexAttrib4ivARB
    = (PFNGLVERTEXATTRIB4IVARBPROC)load (userptr, "glVertexAttrib4ivARB");
  glext_glVertexAttrib4sARB
    = (PFNGLVERTEXATTRIB4SARBPROC)load (userptr, "glVertexAttrib4sARB");
  glext_glVertexAttrib4svARB
    = (PFNGLVERTEXATTRIB4SVARBPROC)load (userptr, "glVertexAttrib4svARB");
  glext_glVertexAttrib4ubvARB
    = (PFNGLVERTEXATTRIB4UBVARBPROC)load (userptr, "glVertexAttrib4ubvARB");
  glext_glVertexAttrib4uivARB
    = (PFNGLVERTEXATTRIB4UIVARBPROC)load (userptr, "glVertexAttrib4uivARB");
  glext_glVertexAttrib4usvARB
    = (PFNGLVERTEXATTRIB4USVARBPROC)load (userptr, "glVertexAttrib4usvARB");
  glext_glVertexAttribPointerARB = (PFNGLVERTEXATTRIBPOINTERARBPROC)load (
    userptr, "glVertexAttribPointerARB");
}
static void
glext_gl_load_GL_ARB_vertex_shader (GLEXTuserptrloadfunc load, void* userptr) {
  if (!GLEXT_GL_ARB_vertex_shader)
    return;
  glext_glBindAttribLocationARB = (PFNGLBINDATTRIBLOCATIONARBPROC)load (
    userptr, "glBindAttribLocationARB");
  glext_glDisableVertexAttribArrayARB
    = (PFNGLDISABLEVERTEXATTRIBARRAYARBPROC)load (
      userptr, "glDisableVertexAttribArrayARB");
  glext_glEnableVertexAttribArrayARB
    = (PFNGLENABLEVERTEXATTRIBARRAYARBPROC)load (
      userptr, "glEnableVertexAttribArrayARB");
  glext_glGetActiveAttribARB
    = (PFNGLGETACTIVEATTRIBARBPROC)load (userptr, "glGetActiveAttribARB");
  glext_glGetAttribLocationARB
    = (PFNGLGETATTRIBLOCATIONARBPROC)load (userptr, "glGetAttribLocationARB");
  glext_glGetVertexAttribPointervARB
    = (PFNGLGETVERTEXATTRIBPOINTERVARBPROC)load (
      userptr, "glGetVertexAttribPointervARB");
  glext_glGetVertexAttribdvARB
    = (PFNGLGETVERTEXATTRIBDVARBPROC)load (userptr, "glGetVertexAttribdvARB");
  glext_glGetVertexAttribfvARB
    = (PFNGLGETVERTEXATTRIBFVARBPROC)load (userptr, "glGetVertexAttribfvARB");
  glext_glGetVertexAttribivARB
    = (PFNGLGETVERTEXATTRIBIVARBPROC)load (userptr, "glGetVertexAttribivARB");
  glext_glVertexAttrib1dARB
    = (PFNGLVERTEXATTRIB1DARBPROC)load (userptr, "glVertexAttrib1dARB");
  glext_glVertexAttrib1dvARB
    = (PFNGLVERTEXATTRIB1DVARBPROC)load (userptr, "glVertexAttrib1dvARB");
  glext_glVertexAttrib1fARB
    = (PFNGLVERTEXATTRIB1FARBPROC)load (userptr, "glVertexAttrib1fARB");
  glext_glVertexAttrib1fvARB
    = (PFNGLVERTEXATTRIB1FVARBPROC)load (userptr, "glVertexAttrib1fvARB");
  glext_glVertexAttrib1sARB
    = (PFNGLVERTEXATTRIB1SARBPROC)load (userptr, "glVertexAttrib1sARB");
  glext_glVertexAttrib1svARB
    = (PFNGLVERTEXATTRIB1SVARBPROC)load (userptr, "glVertexAttrib1svARB");
  glext_glVertexAttrib2dARB
    = (PFNGLVERTEXATTRIB2DARBPROC)load (userptr, "glVertexAttrib2dARB");
  glext_glVertexAttrib2dvARB
    = (PFNGLVERTEXATTRIB2DVARBPROC)load (userptr, "glVertexAttrib2dvARB");
  glext_glVertexAttrib2fARB
    = (PFNGLVERTEXATTRIB2FARBPROC)load (userptr, "glVertexAttrib2fARB");
  glext_glVertexAttrib2fvARB
    = (PFNGLVERTEXATTRIB2FVARBPROC)load (userptr, "glVertexAttrib2fvARB");
  glext_glVertexAttrib2sARB
    = (PFNGLVERTEXATTRIB2SARBPROC)load (userptr, "glVertexAttrib2sARB");
  glext_glVertexAttrib2svARB
    = (PFNGLVERTEXATTRIB2SVARBPROC)load (userptr, "glVertexAttrib2svARB");
  glext_glVertexAttrib3dARB
    = (PFNGLVERTEXATTRIB3DARBPROC)load (userptr, "glVertexAttrib3dARB");
  glext_glVertexAttrib3dvARB
    = (PFNGLVERTEXATTRIB3DVARBPROC)load (userptr, "glVertexAttrib3dvARB");
  glext_glVertexAttrib3fARB
    = (PFNGLVERTEXATTRIB3FARBPROC)load (userptr, "glVertexAttrib3fARB");
  glext_glVertexAttrib3fvARB
    = (PFNGLVERTEXATTRIB3FVARBPROC)load (userptr, "glVertexAttrib3fvARB");
  glext_glVertexAttrib3sARB
    = (PFNGLVERTEXATTRIB3SARBPROC)load (userptr, "glVertexAttrib3sARB");
  glext_glVertexAttrib3svARB
    = (PFNGLVERTEXATTRIB3SVARBPROC)load (userptr, "glVertexAttrib3svARB");
  glext_glVertexAttrib4NbvARB
    = (PFNGLVERTEXATTRIB4NBVARBPROC)load (userptr, "glVertexAttrib4NbvARB");
  glext_glVertexAttrib4NivARB
    = (PFNGLVERTEXATTRIB4NIVARBPROC)load (userptr, "glVertexAttrib4NivARB");
  glext_glVertexAttrib4NsvARB
    = (PFNGLVERTEXATTRIB4NSVARBPROC)load (userptr, "glVertexAttrib4NsvARB");
  glext_glVertexAttrib4NubARB
    = (PFNGLVERTEXATTRIB4NUBARBPROC)load (userptr, "glVertexAttrib4NubARB");
  glext_glVertexAttrib4NubvARB
    = (PFNGLVERTEXATTRIB4NUBVARBPROC)load (userptr, "glVertexAttrib4NubvARB");
  glext_glVertexAttrib4NuivARB
    = (PFNGLVERTEXATTRIB4NUIVARBPROC)load (userptr, "glVertexAttrib4NuivARB");
  glext_glVertexAttrib4NusvARB
    = (PFNGLVERTEXATTRIB4NUSVARBPROC)load (userptr, "glVertexAttrib4NusvARB");
  glext_glVertexAttrib4bvARB
    = (PFNGLVERTEXATTRIB4BVARBPROC)load (userptr, "glVertexAttrib4bvARB");
  glext_glVertexAttrib4dARB
    = (PFNGLVERTEXATTRIB4DARBPROC)load (userptr, "glVertexAttrib4dARB");
  glext_glVertexAttrib4dvARB
    = (PFNGLVERTEXATTRIB4DVARBPROC)load (userptr, "glVertexAttrib4dvARB");
  glext_glVertexAttrib4fARB
    = (PFNGLVERTEXATTRIB4FARBPROC)load (userptr, "glVertexAttrib4fARB");
  glext_glVertexAttrib4fvARB
    = (PFNGLVERTEXATTRIB4FVARBPROC)load (userptr, "glVertexAttrib4fvARB");
  glext_glVertexAttrib4ivARB
    = (PFNGLVERTEXATTRIB4IVARBPROC)load (userptr, "glVertexAttrib4ivARB");
  glext_glVertexAttrib4sARB
    = (PFNGLVERTEXATTRIB4SARBPROC)load (userptr, "glVertexAttrib4sARB");
  glext_glVertexAttrib4svARB
    = (PFNGLVERTEXATTRIB4SVARBPROC)load (userptr, "glVertexAttrib4svARB");
  glext_glVertexAttrib4ubvARB
    = (PFNGLVERTEXATTRIB4UBVARBPROC)load (userptr, "glVertexAttrib4ubvARB");
  glext_glVertexAttrib4uivARB
    = (PFNGLVERTEXATTRIB4UIVARBPROC)load (userptr, "glVertexAttrib4uivARB");
  glext_glVertexAttrib4usvARB
    = (PFNGLVERTEXATTRIB4USVARBPROC)load (userptr, "glVertexAttrib4usvARB");
  glext_glVertexAttribPointerARB = (PFNGLVERTEXATTRIBPOINTERARBPROC)load (
    userptr, "glVertexAttribPointerARB");
}
static void
glext_gl_load_GL_ARB_vertex_type_2_10_10_10_rev (GLEXTuserptrloadfunc load,
                                                 void* userptr) {
  if (!GLEXT_GL_ARB_vertex_type_2_10_10_10_rev)
    return;
  glext_glVertexAttribP1ui
    = (PFNGLVERTEXATTRIBP1UIPROC)load (userptr, "glVertexAttribP1ui");
  glext_glVertexAttribP1uiv
    = (PFNGLVERTEXATTRIBP1UIVPROC)load (userptr, "glVertexAttribP1uiv");
  glext_glVertexAttribP2ui
    = (PFNGLVERTEXATTRIBP2UIPROC)load (userptr, "glVertexAttribP2ui");
  glext_glVertexAttribP2uiv
    = (PFNGLVERTEXATTRIBP2UIVPROC)load (userptr, "glVertexAttribP2uiv");
  glext_glVertexAttribP3ui
    = (PFNGLVERTEXATTRIBP3UIPROC)load (userptr, "glVertexAttribP3ui");
  glext_glVertexAttribP3uiv
    = (PFNGLVERTEXATTRIBP3UIVPROC)load (userptr, "glVertexAttribP3uiv");
  glext_glVertexAttribP4ui
    = (PFNGLVERTEXATTRIBP4UIPROC)load (userptr, "glVertexAttribP4ui");
  glext_glVertexAttribP4uiv
    = (PFNGLVERTEXATTRIBP4UIVPROC)load (userptr, "glVertexAttribP4uiv");
}
static void
glext_gl_load_GL_ARB_viewport_array (GLEXTuserptrloadfunc load,
                                     void* userptr) {
  if (!GLEXT_GL_ARB_viewport_array)
    return;
  glext_glDepthRangeArraydvNV
    = (PFNGLDEPTHRANGEARRAYDVNVPROC)load (userptr, "glDepthRangeArraydvNV");
  glext_glDepthRangeArrayv
    = (PFNGLDEPTHRANGEARRAYVPROC)load (userptr, "glDepthRangeArrayv");
  glext_glDepthRangeIndexed
    = (PFNGLDEPTHRANGEINDEXEDPROC)load (userptr, "glDepthRangeIndexed");
  glext_glDepthRangeIndexeddNV
    = (PFNGLDEPTHRANGEINDEXEDDNVPROC)load (userptr, "glDepthRangeIndexeddNV");
  glext_glGetDoublei_v
    = (PFNGLGETDOUBLEI_VPROC)load (userptr, "glGetDoublei_v");
  glext_glGetFloati_v = (PFNGLGETFLOATI_VPROC)load (userptr, "glGetFloati_v");
  glext_glScissorArrayv
    = (PFNGLSCISSORARRAYVPROC)load (userptr, "glScissorArrayv");
  glext_glScissorIndexed
    = (PFNGLSCISSORINDEXEDPROC)load (userptr, "glScissorIndexed");
  glext_glScissorIndexedv
    = (PFNGLSCISSORINDEXEDVPROC)load (userptr, "glScissorIndexedv");
  glext_glViewportArrayv
    = (PFNGLVIEWPORTARRAYVPROC)load (userptr, "glViewportArrayv");
  glext_glViewportIndexedf
    = (PFNGLVIEWPORTINDEXEDFPROC)load (userptr, "glViewportIndexedf");
  glext_glViewportIndexedfv
    = (PFNGLVIEWPORTINDEXEDFVPROC)load (userptr, "glViewportIndexedfv");
}
static void
glext_gl_load_GL_ARB_window_pos (GLEXTuserptrloadfunc load, void* userptr) {
  if (!GLEXT_GL_ARB_window_pos)
    return;
  glext_glWindowPos2dARB
    = (PFNGLWINDOWPOS2DARBPROC)load (userptr, "glWindowPos2dARB");
  glext_glWindowPos2dvARB
    = (PFNGLWINDOWPOS2DVARBPROC)load (userptr, "glWindowPos2dvARB");
  glext_glWindowPos2fARB
    = (PFNGLWINDOWPOS2FARBPROC)load (userptr, "glWindowPos2fARB");
  glext_glWindowPos2fvARB
    = (PFNGLWINDOWPOS2FVARBPROC)load (userptr, "glWindowPos2fvARB");
  glext_glWindowPos2iARB
    = (PFNGLWINDOWPOS2IARBPROC)load (userptr, "glWindowPos2iARB");
  glext_glWindowPos2ivARB
    = (PFNGLWINDOWPOS2IVARBPROC)load (userptr, "glWindowPos2ivARB");
  glext_glWindowPos2sARB
    = (PFNGLWINDOWPOS2SARBPROC)load (userptr, "glWindowPos2sARB");
  glext_glWindowPos2svARB
    = (PFNGLWINDOWPOS2SVARBPROC)load (userptr, "glWindowPos2svARB");
  glext_glWindowPos3dARB
    = (PFNGLWINDOWPOS3DARBPROC)load (userptr, "glWindowPos3dARB");
  glext_glWindowPos3dvARB
    = (PFNGLWINDOWPOS3DVARBPROC)load (userptr, "glWindowPos3dvARB");
  glext_glWindowPos3fARB
    = (PFNGLWINDOWPOS3FARBPROC)load (userptr, "glWindowPos3fARB");
  glext_glWindowPos3fvARB
    = (PFNGLWINDOWPOS3FVARBPROC)load (userptr, "glWindowPos3fvARB");
  glext_glWindowPos3iARB
    = (PFNGLWINDOWPOS3IARBPROC)load (userptr, "glWindowPos3iARB");
  glext_glWindowPos3ivARB
    = (PFNGLWINDOWPOS3IVARBPROC)load (userptr, "glWindowPos3ivARB");
  glext_glWindowPos3sARB
    = (PFNGLWINDOWPOS3SARBPROC)load (userptr, "glWindowPos3sARB");
  glext_glWindowPos3svARB
    = (PFNGLWINDOWPOS3SVARBPROC)load (userptr, "glWindowPos3svARB");
}
static void
glext_gl_load_GL_ATI_draw_buffers (GLEXTuserptrloadfunc load, void* userptr) {
  if (!GLEXT_GL_ATI_draw_buffers)
    return;
  glext_glDrawBuffersATI
    = (PFNGLDRAWBUFFERSATIPROC)load (userptr, "glDrawBuffersATI");
}
static void
glext_gl_load_GL_ATI_element_array (GLEXTuserptrloadfunc load, void* userptr) {
  if (!GLEXT_GL_ATI_element_array)
    return;
  glext_glDrawElementArrayATI
    = (PFNGLDRAWELEMENTARRAYATIPROC)load (userptr, "glDrawElementArrayATI");
  glext_glDrawRangeElementArrayATI = (PFNGLDRAWRANGEELEMENTARRAYATIPROC)load (
    userptr, "glDrawRangeElementArrayATI");
  glext_glElementPointerATI
    = (PFNGLELEMENTPOINTERATIPROC)load (userptr, "glElementPointerATI");
}
static void
glext_gl_load_GL_ATI_envmap_bumpmap (GLEXTuserptrloadfunc load,
                                     void* userptr) {
  if (!GLEXT_GL_ATI_envmap_bumpmap)
    return;
  glext_glGetTexBumpParameterfvATI = (PFNGLGETTEXBUMPPARAMETERFVATIPROC)load (
    userptr, "glGetTexBumpParameterfvATI");
  glext_glGetTexBumpParameterivATI = (PFNGLGETTEXBUMPPARAMETERIVATIPROC)load (
    userptr, "glGetTexBumpParameterivATI");
  glext_glTexBumpParameterfvATI = (PFNGLTEXBUMPPARAMETERFVATIPROC)load (
    userptr, "glTexBumpParameterfvATI");
  glext_glTexBumpParameterivATI = (PFNGLTEXBUMPPARAMETERIVATIPROC)load (
    userptr, "glTexBumpParameterivATI");
}
static void
glext_gl_load_GL_ATI_fragment_shader (GLEXTuserptrloadfunc load,
                                      void* userptr) {
  if (!GLEXT_GL_ATI_fragment_shader)
    return;
  glext_glAlphaFragmentOp1ATI
    = (PFNGLALPHAFRAGMENTOP1ATIPROC)load (userptr, "glAlphaFragmentOp1ATI");
  glext_glAlphaFragmentOp2ATI
    = (PFNGLALPHAFRAGMENTOP2ATIPROC)load (userptr, "glAlphaFragmentOp2ATI");
  glext_glAlphaFragmentOp3ATI
    = (PFNGLALPHAFRAGMENTOP3ATIPROC)load (userptr, "glAlphaFragmentOp3ATI");
  glext_glBeginFragmentShaderATI = (PFNGLBEGINFRAGMENTSHADERATIPROC)load (
    userptr, "glBeginFragmentShaderATI");
  glext_glBindFragmentShaderATI = (PFNGLBINDFRAGMENTSHADERATIPROC)load (
    userptr, "glBindFragmentShaderATI");
  glext_glColorFragmentOp1ATI
    = (PFNGLCOLORFRAGMENTOP1ATIPROC)load (userptr, "glColorFragmentOp1ATI");
  glext_glColorFragmentOp2ATI
    = (PFNGLCOLORFRAGMENTOP2ATIPROC)load (userptr, "glColorFragmentOp2ATI");
  glext_glColorFragmentOp3ATI
    = (PFNGLCOLORFRAGMENTOP3ATIPROC)load (userptr, "glColorFragmentOp3ATI");
  glext_glDeleteFragmentShaderATI = (PFNGLDELETEFRAGMENTSHADERATIPROC)load (
    userptr, "glDeleteFragmentShaderATI");
  glext_glEndFragmentShaderATI
    = (PFNGLENDFRAGMENTSHADERATIPROC)load (userptr, "glEndFragmentShaderATI");
  glext_glGenFragmentShadersATI = (PFNGLGENFRAGMENTSHADERSATIPROC)load (
    userptr, "glGenFragmentShadersATI");
  glext_glPassTexCoordATI
    = (PFNGLPASSTEXCOORDATIPROC)load (userptr, "glPassTexCoordATI");
  glext_glSampleMapATI
    = (PFNGLSAMPLEMAPATIPROC)load (userptr, "glSampleMapATI");
  glext_glSetFragmentShaderConstantATI
    = (PFNGLSETFRAGMENTSHADERCONSTANTATIPROC)load (
      userptr, "glSetFragmentShaderConstantATI");
}
static void
glext_gl_load_GL_ATI_map_object_buffer (GLEXTuserptrloadfunc load,
                                        void* userptr) {
  if (!GLEXT_GL_ATI_map_object_buffer)
    return;
  glext_glMapObjectBufferATI
    = (PFNGLMAPOBJECTBUFFERATIPROC)load (userptr, "glMapObjectBufferATI");
  glext_glUnmapObjectBufferATI
    = (PFNGLUNMAPOBJECTBUFFERATIPROC)load (userptr, "glUnmapObjectBufferATI");
}
static void
glext_gl_load_GL_ATI_pn_triangles (GLEXTuserptrloadfunc load, void* userptr) {
  if (!GLEXT_GL_ATI_pn_triangles)
    return;
  glext_glPNTrianglesfATI
    = (PFNGLPNTRIANGLESFATIPROC)load (userptr, "glPNTrianglesfATI");
  glext_glPNTrianglesiATI
    = (PFNGLPNTRIANGLESIATIPROC)load (userptr, "glPNTrianglesiATI");
}
static void
glext_gl_load_GL_ATI_separate_stencil (GLEXTuserptrloadfunc load,
                                       void* userptr) {
  if (!GLEXT_GL_ATI_separate_stencil)
    return;
  glext_glStencilFuncSeparateATI = (PFNGLSTENCILFUNCSEPARATEATIPROC)load (
    userptr, "glStencilFuncSeparateATI");
  glext_glStencilOpSeparateATI
    = (PFNGLSTENCILOPSEPARATEATIPROC)load (userptr, "glStencilOpSeparateATI");
}
static void
glext_gl_load_GL_ATI_vertex_array_object (GLEXTuserptrloadfunc load,
                                          void* userptr) {
  if (!GLEXT_GL_ATI_vertex_array_object)
    return;
  glext_glArrayObjectATI
    = (PFNGLARRAYOBJECTATIPROC)load (userptr, "glArrayObjectATI");
  glext_glFreeObjectBufferATI
    = (PFNGLFREEOBJECTBUFFERATIPROC)load (userptr, "glFreeObjectBufferATI");
  glext_glGetArrayObjectfvATI
    = (PFNGLGETARRAYOBJECTFVATIPROC)load (userptr, "glGetArrayObjectfvATI");
  glext_glGetArrayObjectivATI
    = (PFNGLGETARRAYOBJECTIVATIPROC)load (userptr, "glGetArrayObjectivATI");
  glext_glGetObjectBufferfvATI
    = (PFNGLGETOBJECTBUFFERFVATIPROC)load (userptr, "glGetObjectBufferfvATI");
  glext_glGetObjectBufferivATI
    = (PFNGLGETOBJECTBUFFERIVATIPROC)load (userptr, "glGetObjectBufferivATI");
  glext_glGetVariantArrayObjectfvATI
    = (PFNGLGETVARIANTARRAYOBJECTFVATIPROC)load (
      userptr, "glGetVariantArrayObjectfvATI");
  glext_glGetVariantArrayObjectivATI
    = (PFNGLGETVARIANTARRAYOBJECTIVATIPROC)load (
      userptr, "glGetVariantArrayObjectivATI");
  glext_glIsObjectBufferATI
    = (PFNGLISOBJECTBUFFERATIPROC)load (userptr, "glIsObjectBufferATI");
  glext_glNewObjectBufferATI
    = (PFNGLNEWOBJECTBUFFERATIPROC)load (userptr, "glNewObjectBufferATI");
  glext_glUpdateObjectBufferATI = (PFNGLUPDATEOBJECTBUFFERATIPROC)load (
    userptr, "glUpdateObjectBufferATI");
  glext_glVariantArrayObjectATI = (PFNGLVARIANTARRAYOBJECTATIPROC)load (
    userptr, "glVariantArrayObjectATI");
}
static void
glext_gl_load_GL_ATI_vertex_attrib_array_object (GLEXTuserptrloadfunc load,
                                                 void* userptr) {
  if (!GLEXT_GL_ATI_vertex_attrib_array_object)
    return;
  glext_glGetVertexAttribArrayObjectfvATI
    = (PFNGLGETVERTEXATTRIBARRAYOBJECTFVATIPROC)load (
      userptr, "glGetVertexAttribArrayObjectfvATI");
  glext_glGetVertexAttribArrayObjectivATI
    = (PFNGLGETVERTEXATTRIBARRAYOBJECTIVATIPROC)load (
      userptr, "glGetVertexAttribArrayObjectivATI");
  glext_glVertexAttribArrayObjectATI
    = (PFNGLVERTEXATTRIBARRAYOBJECTATIPROC)load (
      userptr, "glVertexAttribArrayObjectATI");
}
static void
glext_gl_load_GL_ATI_vertex_streams (GLEXTuserptrloadfunc load,
                                     void* userptr) {
  if (!GLEXT_GL_ATI_vertex_streams)
    return;
  glext_glClientActiveVertexStreamATI
    = (PFNGLCLIENTACTIVEVERTEXSTREAMATIPROC)load (
      userptr, "glClientActiveVertexStreamATI");
  glext_glNormalStream3bATI
    = (PFNGLNORMALSTREAM3BATIPROC)load (userptr, "glNormalStream3bATI");
  glext_glNormalStream3bvATI
    = (PFNGLNORMALSTREAM3BVATIPROC)load (userptr, "glNormalStream3bvATI");
  glext_glNormalStream3dATI
    = (PFNGLNORMALSTREAM3DATIPROC)load (userptr, "glNormalStream3dATI");
  glext_glNormalStream3dvATI
    = (PFNGLNORMALSTREAM3DVATIPROC)load (userptr, "glNormalStream3dvATI");
  glext_glNormalStream3fATI
    = (PFNGLNORMALSTREAM3FATIPROC)load (userptr, "glNormalStream3fATI");
  glext_glNormalStream3fvATI
    = (PFNGLNORMALSTREAM3FVATIPROC)load (userptr, "glNormalStream3fvATI");
  glext_glNormalStream3iATI
    = (PFNGLNORMALSTREAM3IATIPROC)load (userptr, "glNormalStream3iATI");
  glext_glNormalStream3ivATI
    = (PFNGLNORMALSTREAM3IVATIPROC)load (userptr, "glNormalStream3ivATI");
  glext_glNormalStream3sATI
    = (PFNGLNORMALSTREAM3SATIPROC)load (userptr, "glNormalStream3sATI");
  glext_glNormalStream3svATI
    = (PFNGLNORMALSTREAM3SVATIPROC)load (userptr, "glNormalStream3svATI");
  glext_glVertexBlendEnvfATI
    = (PFNGLVERTEXBLENDENVFATIPROC)load (userptr, "glVertexBlendEnvfATI");
  glext_glVertexBlendEnviATI
    = (PFNGLVERTEXBLENDENVIATIPROC)load (userptr, "glVertexBlendEnviATI");
  glext_glVertexStream1dATI
    = (PFNGLVERTEXSTREAM1DATIPROC)load (userptr, "glVertexStream1dATI");
  glext_glVertexStream1dvATI
    = (PFNGLVERTEXSTREAM1DVATIPROC)load (userptr, "glVertexStream1dvATI");
  glext_glVertexStream1fATI
    = (PFNGLVERTEXSTREAM1FATIPROC)load (userptr, "glVertexStream1fATI");
  glext_glVertexStream1fvATI
    = (PFNGLVERTEXSTREAM1FVATIPROC)load (userptr, "glVertexStream1fvATI");
  glext_glVertexStream1iATI
    = (PFNGLVERTEXSTREAM1IATIPROC)load (userptr, "glVertexStream1iATI");
  glext_glVertexStream1ivATI
    = (PFNGLVERTEXSTREAM1IVATIPROC)load (userptr, "glVertexStream1ivATI");
  glext_glVertexStream1sATI
    = (PFNGLVERTEXSTREAM1SATIPROC)load (userptr, "glVertexStream1sATI");
  glext_glVertexStream1svATI
    = (PFNGLVERTEXSTREAM1SVATIPROC)load (userptr, "glVertexStream1svATI");
  glext_glVertexStream2dATI
    = (PFNGLVERTEXSTREAM2DATIPROC)load (userptr, "glVertexStream2dATI");
  glext_glVertexStream2dvATI
    = (PFNGLVERTEXSTREAM2DVATIPROC)load (userptr, "glVertexStream2dvATI");
  glext_glVertexStream2fATI
    = (PFNGLVERTEXSTREAM2FATIPROC)load (userptr, "glVertexStream2fATI");
  glext_glVertexStream2fvATI
    = (PFNGLVERTEXSTREAM2FVATIPROC)load (userptr, "glVertexStream2fvATI");
  glext_glVertexStream2iATI
    = (PFNGLVERTEXSTREAM2IATIPROC)load (userptr, "glVertexStream2iATI");
  glext_glVertexStream2ivATI
    = (PFNGLVERTEXSTREAM2IVATIPROC)load (userptr, "glVertexStream2ivATI");
  glext_glVertexStream2sATI
    = (PFNGLVERTEXSTREAM2SATIPROC)load (userptr, "glVertexStream2sATI");
  glext_glVertexStream2svATI
    = (PFNGLVERTEXSTREAM2SVATIPROC)load (userptr, "glVertexStream2svATI");
  glext_glVertexStream3dATI
    = (PFNGLVERTEXSTREAM3DATIPROC)load (userptr, "glVertexStream3dATI");
  glext_glVertexStream3dvATI
    = (PFNGLVERTEXSTREAM3DVATIPROC)load (userptr, "glVertexStream3dvATI");
  glext_glVertexStream3fATI
    = (PFNGLVERTEXSTREAM3FATIPROC)load (userptr, "glVertexStream3fATI");
  glext_glVertexStream3fvATI
    = (PFNGLVERTEXSTREAM3FVATIPROC)load (userptr, "glVertexStream3fvATI");
  glext_glVertexStream3iATI
    = (PFNGLVERTEXSTREAM3IATIPROC)load (userptr, "glVertexStream3iATI");
  glext_glVertexStream3ivATI
    = (PFNGLVERTEXSTREAM3IVATIPROC)load (userptr, "glVertexStream3ivATI");
  glext_glVertexStream3sATI
    = (PFNGLVERTEXSTREAM3SATIPROC)load (userptr, "glVertexStream3sATI");
  glext_glVertexStream3svATI
    = (PFNGLVERTEXSTREAM3SVATIPROC)load (userptr, "glVertexStream3svATI");
  glext_glVertexStream4dATI
    = (PFNGLVERTEXSTREAM4DATIPROC)load (userptr, "glVertexStream4dATI");
  glext_glVertexStream4dvATI
    = (PFNGLVERTEXSTREAM4DVATIPROC)load (userptr, "glVertexStream4dvATI");
  glext_glVertexStream4fATI
    = (PFNGLVERTEXSTREAM4FATIPROC)load (userptr, "glVertexStream4fATI");
  glext_glVertexStream4fvATI
    = (PFNGLVERTEXSTREAM4FVATIPROC)load (userptr, "glVertexStream4fvATI");
  glext_glVertexStream4iATI
    = (PFNGLVERTEXSTREAM4IATIPROC)load (userptr, "glVertexStream4iATI");
  glext_glVertexStream4ivATI
    = (PFNGLVERTEXSTREAM4IVATIPROC)load (userptr, "glVertexStream4ivATI");
  glext_glVertexStream4sATI
    = (PFNGLVERTEXSTREAM4SATIPROC)load (userptr, "glVertexStream4sATI");
  glext_glVertexStream4svATI
    = (PFNGLVERTEXSTREAM4SVATIPROC)load (userptr, "glVertexStream4svATI");
}
static void
glext_gl_load_GL_EXT_EGL_image_storage (GLEXTuserptrloadfunc load,
                                        void* userptr) {
  if (!GLEXT_GL_EXT_EGL_image_storage)
    return;
  glext_glEGLImageTargetTexStorageEXT
    = (PFNGLEGLIMAGETARGETTEXSTORAGEEXTPROC)load (
      userptr, "glEGLImageTargetTexStorageEXT");
  glext_glEGLImageTargetTextureStorageEXT
    = (PFNGLEGLIMAGETARGETTEXTURESTORAGEEXTPROC)load (
      userptr, "glEGLImageTargetTextureStorageEXT");
}
static void
glext_gl_load_GL_EXT_bindable_uniform (GLEXTuserptrloadfunc load,
                                       void* userptr) {
  if (!GLEXT_GL_EXT_bindable_uniform)
    return;
  glext_glGetUniformBufferSizeEXT = (PFNGLGETUNIFORMBUFFERSIZEEXTPROC)load (
    userptr, "glGetUniformBufferSizeEXT");
  glext_glGetUniformOffsetEXT
    = (PFNGLGETUNIFORMOFFSETEXTPROC)load (userptr, "glGetUniformOffsetEXT");
  glext_glUniformBufferEXT
    = (PFNGLUNIFORMBUFFEREXTPROC)load (userptr, "glUniformBufferEXT");
}
static void
glext_gl_load_GL_EXT_blend_color (GLEXTuserptrloadfunc load, void* userptr) {
  if (!GLEXT_GL_EXT_blend_color)
    return;
  glext_glBlendColorEXT
    = (PFNGLBLENDCOLOREXTPROC)load (userptr, "glBlendColorEXT");
}
static void
glext_gl_load_GL_EXT_blend_equation_separate (GLEXTuserptrloadfunc load,
                                              void* userptr) {
  if (!GLEXT_GL_EXT_blend_equation_separate)
    return;
  glext_glBlendEquationSeparateEXT = (PFNGLBLENDEQUATIONSEPARATEEXTPROC)load (
    userptr, "glBlendEquationSeparateEXT");
}
static void
glext_gl_load_GL_EXT_blend_func_separate (GLEXTuserptrloadfunc load,
                                          void* userptr) {
  if (!GLEXT_GL_EXT_blend_func_separate)
    return;
  glext_glBlendFuncSeparateEXT
    = (PFNGLBLENDFUNCSEPARATEEXTPROC)load (userptr, "glBlendFuncSeparateEXT");
}
static void
glext_gl_load_GL_EXT_blend_minmax (GLEXTuserptrloadfunc load, void* userptr) {
  if (!GLEXT_GL_EXT_blend_minmax)
    return;
  glext_glBlendEquationEXT
    = (PFNGLBLENDEQUATIONEXTPROC)load (userptr, "glBlendEquationEXT");
}
static void
glext_gl_load_GL_EXT_color_subtable (GLEXTuserptrloadfunc load,
                                     void* userptr) {
  if (!GLEXT_GL_EXT_color_subtable)
    return;
  glext_glColorSubTableEXT
    = (PFNGLCOLORSUBTABLEEXTPROC)load (userptr, "glColorSubTableEXT");
  glext_glCopyColorSubTableEXT
    = (PFNGLCOPYCOLORSUBTABLEEXTPROC)load (userptr, "glCopyColorSubTableEXT");
}
static void
glext_gl_load_GL_EXT_compiled_vertex_array (GLEXTuserptrloadfunc load,
                                            void* userptr) {
  if (!GLEXT_GL_EXT_compiled_vertex_array)
    return;
  glext_glLockArraysEXT
    = (PFNGLLOCKARRAYSEXTPROC)load (userptr, "glLockArraysEXT");
  glext_glUnlockArraysEXT
    = (PFNGLUNLOCKARRAYSEXTPROC)load (userptr, "glUnlockArraysEXT");
}
static void
glext_gl_load_GL_EXT_convolution (GLEXTuserptrloadfunc load, void* userptr) {
  if (!GLEXT_GL_EXT_convolution)
    return;
  glext_glConvolutionFilter1DEXT = (PFNGLCONVOLUTIONFILTER1DEXTPROC)load (
    userptr, "glConvolutionFilter1DEXT");
  glext_glConvolutionFilter2DEXT = (PFNGLCONVOLUTIONFILTER2DEXTPROC)load (
    userptr, "glConvolutionFilter2DEXT");
  glext_glConvolutionParameterfEXT = (PFNGLCONVOLUTIONPARAMETERFEXTPROC)load (
    userptr, "glConvolutionParameterfEXT");
  glext_glConvolutionParameterfvEXT
    = (PFNGLCONVOLUTIONPARAMETERFVEXTPROC)load (userptr,
                                                "glConvolutionParameterfvEXT");
  glext_glConvolutionParameteriEXT = (PFNGLCONVOLUTIONPARAMETERIEXTPROC)load (
    userptr, "glConvolutionParameteriEXT");
  glext_glConvolutionParameterivEXT
    = (PFNGLCONVOLUTIONPARAMETERIVEXTPROC)load (userptr,
                                                "glConvolutionParameterivEXT");
  glext_glCopyConvolutionFilter1DEXT
    = (PFNGLCOPYCONVOLUTIONFILTER1DEXTPROC)load (
      userptr, "glCopyConvolutionFilter1DEXT");
  glext_glCopyConvolutionFilter2DEXT
    = (PFNGLCOPYCONVOLUTIONFILTER2DEXTPROC)load (
      userptr, "glCopyConvolutionFilter2DEXT");
  glext_glGetConvolutionFilterEXT = (PFNGLGETCONVOLUTIONFILTEREXTPROC)load (
    userptr, "glGetConvolutionFilterEXT");
  glext_glGetConvolutionParameterfvEXT
    = (PFNGLGETCONVOLUTIONPARAMETERFVEXTPROC)load (
      userptr, "glGetConvolutionParameterfvEXT");
  glext_glGetConvolutionParameterivEXT
    = (PFNGLGETCONVOLUTIONPARAMETERIVEXTPROC)load (
      userptr, "glGetConvolutionParameterivEXT");
  glext_glGetSeparableFilterEXT = (PFNGLGETSEPARABLEFILTEREXTPROC)load (
    userptr, "glGetSeparableFilterEXT");
  glext_glSeparableFilter2DEXT
    = (PFNGLSEPARABLEFILTER2DEXTPROC)load (userptr, "glSeparableFilter2DEXT");
}
static void
glext_gl_load_GL_EXT_coordinate_frame (GLEXTuserptrloadfunc load,
                                       void* userptr) {
  if (!GLEXT_GL_EXT_coordinate_frame)
    return;
  glext_glBinormal3bEXT
    = (PFNGLBINORMAL3BEXTPROC)load (userptr, "glBinormal3bEXT");
  glext_glBinormal3bvEXT
    = (PFNGLBINORMAL3BVEXTPROC)load (userptr, "glBinormal3bvEXT");
  glext_glBinormal3dEXT
    = (PFNGLBINORMAL3DEXTPROC)load (userptr, "glBinormal3dEXT");
  glext_glBinormal3dvEXT
    = (PFNGLBINORMAL3DVEXTPROC)load (userptr, "glBinormal3dvEXT");
  glext_glBinormal3fEXT
    = (PFNGLBINORMAL3FEXTPROC)load (userptr, "glBinormal3fEXT");
  glext_glBinormal3fvEXT
    = (PFNGLBINORMAL3FVEXTPROC)load (userptr, "glBinormal3fvEXT");
  glext_glBinormal3iEXT
    = (PFNGLBINORMAL3IEXTPROC)load (userptr, "glBinormal3iEXT");
  glext_glBinormal3ivEXT
    = (PFNGLBINORMAL3IVEXTPROC)load (userptr, "glBinormal3ivEXT");
  glext_glBinormal3sEXT
    = (PFNGLBINORMAL3SEXTPROC)load (userptr, "glBinormal3sEXT");
  glext_glBinormal3svEXT
    = (PFNGLBINORMAL3SVEXTPROC)load (userptr, "glBinormal3svEXT");
  glext_glBinormalPointerEXT
    = (PFNGLBINORMALPOINTEREXTPROC)load (userptr, "glBinormalPointerEXT");
  glext_glTangent3bEXT
    = (PFNGLTANGENT3BEXTPROC)load (userptr, "glTangent3bEXT");
  glext_glTangent3bvEXT
    = (PFNGLTANGENT3BVEXTPROC)load (userptr, "glTangent3bvEXT");
  glext_glTangent3dEXT
    = (PFNGLTANGENT3DEXTPROC)load (userptr, "glTangent3dEXT");
  glext_glTangent3dvEXT
    = (PFNGLTANGENT3DVEXTPROC)load (userptr, "glTangent3dvEXT");
  glext_glTangent3fEXT
    = (PFNGLTANGENT3FEXTPROC)load (userptr, "glTangent3fEXT");
  glext_glTangent3fvEXT
    = (PFNGLTANGENT3FVEXTPROC)load (userptr, "glTangent3fvEXT");
  glext_glTangent3iEXT
    = (PFNGLTANGENT3IEXTPROC)load (userptr, "glTangent3iEXT");
  glext_glTangent3ivEXT
    = (PFNGLTANGENT3IVEXTPROC)load (userptr, "glTangent3ivEXT");
  glext_glTangent3sEXT
    = (PFNGLTANGENT3SEXTPROC)load (userptr, "glTangent3sEXT");
  glext_glTangent3svEXT
    = (PFNGLTANGENT3SVEXTPROC)load (userptr, "glTangent3svEXT");
  glext_glTangentPointerEXT
    = (PFNGLTANGENTPOINTEREXTPROC)load (userptr, "glTangentPointerEXT");
}
static void
glext_gl_load_GL_EXT_copy_texture (GLEXTuserptrloadfunc load, void* userptr) {
  if (!GLEXT_GL_EXT_copy_texture)
    return;
  glext_glCopyTexImage1DEXT
    = (PFNGLCOPYTEXIMAGE1DEXTPROC)load (userptr, "glCopyTexImage1DEXT");
  glext_glCopyTexImage2DEXT
    = (PFNGLCOPYTEXIMAGE2DEXTPROC)load (userptr, "glCopyTexImage2DEXT");
  glext_glCopyTexSubImage1DEXT
    = (PFNGLCOPYTEXSUBIMAGE1DEXTPROC)load (userptr, "glCopyTexSubImage1DEXT");
  glext_glCopyTexSubImage2DEXT
    = (PFNGLCOPYTEXSUBIMAGE2DEXTPROC)load (userptr, "glCopyTexSubImage2DEXT");
  glext_glCopyTexSubImage3DEXT
    = (PFNGLCOPYTEXSUBIMAGE3DEXTPROC)load (userptr, "glCopyTexSubImage3DEXT");
}
static void
glext_gl_load_GL_EXT_cull_vertex (GLEXTuserptrloadfunc load, void* userptr) {
  if (!GLEXT_GL_EXT_cull_vertex)
    return;
  glext_glCullParameterdvEXT
    = (PFNGLCULLPARAMETERDVEXTPROC)load (userptr, "glCullParameterdvEXT");
  glext_glCullParameterfvEXT
    = (PFNGLCULLPARAMETERFVEXTPROC)load (userptr, "glCullParameterfvEXT");
}
static void
glext_gl_load_GL_EXT_debug_label (GLEXTuserptrloadfunc load, void* userptr) {
  if (!GLEXT_GL_EXT_debug_label)
    return;
  glext_glGetObjectLabelEXT
    = (PFNGLGETOBJECTLABELEXTPROC)load (userptr, "glGetObjectLabelEXT");
  glext_glLabelObjectEXT
    = (PFNGLLABELOBJECTEXTPROC)load (userptr, "glLabelObjectEXT");
}
static void
glext_gl_load_GL_EXT_debug_marker (GLEXTuserptrloadfunc load, void* userptr) {
  if (!GLEXT_GL_EXT_debug_marker)
    return;
  glext_glInsertEventMarkerEXT
    = (PFNGLINSERTEVENTMARKEREXTPROC)load (userptr, "glInsertEventMarkerEXT");
  glext_glPopGroupMarkerEXT
    = (PFNGLPOPGROUPMARKEREXTPROC)load (userptr, "glPopGroupMarkerEXT");
  glext_glPushGroupMarkerEXT
    = (PFNGLPUSHGROUPMARKEREXTPROC)load (userptr, "glPushGroupMarkerEXT");
}
static void
glext_gl_load_GL_EXT_depth_bounds_test (GLEXTuserptrloadfunc load,
                                        void* userptr) {
  if (!GLEXT_GL_EXT_depth_bounds_test)
    return;
  glext_glDepthBoundsEXT
    = (PFNGLDEPTHBOUNDSEXTPROC)load (userptr, "glDepthBoundsEXT");
}
static void
glext_gl_load_GL_EXT_direct_state_access (GLEXTuserptrloadfunc load,
                                          void* userptr) {
  if (!GLEXT_GL_EXT_direct_state_access)
    return;
  glext_glBindMultiTextureEXT
    = (PFNGLBINDMULTITEXTUREEXTPROC)load (userptr, "glBindMultiTextureEXT");
  glext_glCheckNamedFramebufferStatusEXT
    = (PFNGLCHECKNAMEDFRAMEBUFFERSTATUSEXTPROC)load (
      userptr, "glCheckNamedFramebufferStatusEXT");
  glext_glClearNamedBufferDataEXT = (PFNGLCLEARNAMEDBUFFERDATAEXTPROC)load (
    userptr, "glClearNamedBufferDataEXT");
  glext_glClearNamedBufferSubDataEXT
    = (PFNGLCLEARNAMEDBUFFERSUBDATAEXTPROC)load (
      userptr, "glClearNamedBufferSubDataEXT");
  glext_glClientAttribDefaultEXT = (PFNGLCLIENTATTRIBDEFAULTEXTPROC)load (
    userptr, "glClientAttribDefaultEXT");
  glext_glCompressedMultiTexImage1DEXT
    = (PFNGLCOMPRESSEDMULTITEXIMAGE1DEXTPROC)load (
      userptr, "glCompressedMultiTexImage1DEXT");
  glext_glCompressedMultiTexImage2DEXT
    = (PFNGLCOMPRESSEDMULTITEXIMAGE2DEXTPROC)load (
      userptr, "glCompressedMultiTexImage2DEXT");
  glext_glCompressedMultiTexImage3DEXT
    = (PFNGLCOMPRESSEDMULTITEXIMAGE3DEXTPROC)load (
      userptr, "glCompressedMultiTexImage3DEXT");
  glext_glCompressedMultiTexSubImage1DEXT
    = (PFNGLCOMPRESSEDMULTITEXSUBIMAGE1DEXTPROC)load (
      userptr, "glCompressedMultiTexSubImage1DEXT");
  glext_glCompressedMultiTexSubImage2DEXT
    = (PFNGLCOMPRESSEDMULTITEXSUBIMAGE2DEXTPROC)load (
      userptr, "glCompressedMultiTexSubImage2DEXT");
  glext_glCompressedMultiTexSubImage3DEXT
    = (PFNGLCOMPRESSEDMULTITEXSUBIMAGE3DEXTPROC)load (
      userptr, "glCompressedMultiTexSubImage3DEXT");
  glext_glCompressedTextureImage1DEXT
    = (PFNGLCOMPRESSEDTEXTUREIMAGE1DEXTPROC)load (
      userptr, "glCompressedTextureImage1DEXT");
  glext_glCompressedTextureImage2DEXT
    = (PFNGLCOMPRESSEDTEXTUREIMAGE2DEXTPROC)load (
      userptr, "glCompressedTextureImage2DEXT");
  glext_glCompressedTextureImage3DEXT
    = (PFNGLCOMPRESSEDTEXTUREIMAGE3DEXTPROC)load (
      userptr, "glCompressedTextureImage3DEXT");
  glext_glCompressedTextureSubImage1DEXT
    = (PFNGLCOMPRESSEDTEXTURESUBIMAGE1DEXTPROC)load (
      userptr, "glCompressedTextureSubImage1DEXT");
  glext_glCompressedTextureSubImage2DEXT
    = (PFNGLCOMPRESSEDTEXTURESUBIMAGE2DEXTPROC)load (
      userptr, "glCompressedTextureSubImage2DEXT");
  glext_glCompressedTextureSubImage3DEXT
    = (PFNGLCOMPRESSEDTEXTURESUBIMAGE3DEXTPROC)load (
      userptr, "glCompressedTextureSubImage3DEXT");
  glext_glCopyMultiTexImage1DEXT = (PFNGLCOPYMULTITEXIMAGE1DEXTPROC)load (
    userptr, "glCopyMultiTexImage1DEXT");
  glext_glCopyMultiTexImage2DEXT = (PFNGLCOPYMULTITEXIMAGE2DEXTPROC)load (
    userptr, "glCopyMultiTexImage2DEXT");
  glext_glCopyMultiTexSubImage1DEXT
    = (PFNGLCOPYMULTITEXSUBIMAGE1DEXTPROC)load (userptr,
                                                "glCopyMultiTexSubImage1DEXT");
  glext_glCopyMultiTexSubImage2DEXT
    = (PFNGLCOPYMULTITEXSUBIMAGE2DEXTPROC)load (userptr,
                                                "glCopyMultiTexSubImage2DEXT");
  glext_glCopyMultiTexSubImage3DEXT
    = (PFNGLCOPYMULTITEXSUBIMAGE3DEXTPROC)load (userptr,
                                                "glCopyMultiTexSubImage3DEXT");
  glext_glCopyTextureImage1DEXT = (PFNGLCOPYTEXTUREIMAGE1DEXTPROC)load (
    userptr, "glCopyTextureImage1DEXT");
  glext_glCopyTextureImage2DEXT = (PFNGLCOPYTEXTUREIMAGE2DEXTPROC)load (
    userptr, "glCopyTextureImage2DEXT");
  glext_glCopyTextureSubImage1DEXT = (PFNGLCOPYTEXTURESUBIMAGE1DEXTPROC)load (
    userptr, "glCopyTextureSubImage1DEXT");
  glext_glCopyTextureSubImage2DEXT = (PFNGLCOPYTEXTURESUBIMAGE2DEXTPROC)load (
    userptr, "glCopyTextureSubImage2DEXT");
  glext_glCopyTextureSubImage3DEXT = (PFNGLCOPYTEXTURESUBIMAGE3DEXTPROC)load (
    userptr, "glCopyTextureSubImage3DEXT");
  glext_glDisableClientStateIndexedEXT
    = (PFNGLDISABLECLIENTSTATEINDEXEDEXTPROC)load (
      userptr, "glDisableClientStateIndexedEXT");
  glext_glDisableClientStateiEXT = (PFNGLDISABLECLIENTSTATEIEXTPROC)load (
    userptr, "glDisableClientStateiEXT");
  glext_glDisableIndexedEXT
    = (PFNGLDISABLEINDEXEDEXTPROC)load (userptr, "glDisableIndexedEXT");
  glext_glDisableVertexArrayAttribEXT
    = (PFNGLDISABLEVERTEXARRAYATTRIBEXTPROC)load (
      userptr, "glDisableVertexArrayAttribEXT");
  glext_glDisableVertexArrayEXT = (PFNGLDISABLEVERTEXARRAYEXTPROC)load (
    userptr, "glDisableVertexArrayEXT");
  glext_glEnableClientStateIndexedEXT
    = (PFNGLENABLECLIENTSTATEINDEXEDEXTPROC)load (
      userptr, "glEnableClientStateIndexedEXT");
  glext_glEnableClientStateiEXT = (PFNGLENABLECLIENTSTATEIEXTPROC)load (
    userptr, "glEnableClientStateiEXT");
  glext_glEnableIndexedEXT
    = (PFNGLENABLEINDEXEDEXTPROC)load (userptr, "glEnableIndexedEXT");
  glext_glEnableVertexArrayAttribEXT
    = (PFNGLENABLEVERTEXARRAYATTRIBEXTPROC)load (
      userptr, "glEnableVertexArrayAttribEXT");
  glext_glEnableVertexArrayEXT
    = (PFNGLENABLEVERTEXARRAYEXTPROC)load (userptr, "glEnableVertexArrayEXT");
  glext_glFlushMappedNamedBufferRangeEXT
    = (PFNGLFLUSHMAPPEDNAMEDBUFFERRANGEEXTPROC)load (
      userptr, "glFlushMappedNamedBufferRangeEXT");
  glext_glFramebufferDrawBufferEXT = (PFNGLFRAMEBUFFERDRAWBUFFEREXTPROC)load (
    userptr, "glFramebufferDrawBufferEXT");
  glext_glFramebufferDrawBuffersEXT
    = (PFNGLFRAMEBUFFERDRAWBUFFERSEXTPROC)load (userptr,
                                                "glFramebufferDrawBuffersEXT");
  glext_glFramebufferReadBufferEXT = (PFNGLFRAMEBUFFERREADBUFFEREXTPROC)load (
    userptr, "glFramebufferReadBufferEXT");
  glext_glGenerateMultiTexMipmapEXT
    = (PFNGLGENERATEMULTITEXMIPMAPEXTPROC)load (userptr,
                                                "glGenerateMultiTexMipmapEXT");
  glext_glGenerateTextureMipmapEXT = (PFNGLGENERATETEXTUREMIPMAPEXTPROC)load (
    userptr, "glGenerateTextureMipmapEXT");
  glext_glGetBooleanIndexedvEXT = (PFNGLGETBOOLEANINDEXEDVEXTPROC)load (
    userptr, "glGetBooleanIndexedvEXT");
  glext_glGetCompressedMultiTexImageEXT
    = (PFNGLGETCOMPRESSEDMULTITEXIMAGEEXTPROC)load (
      userptr, "glGetCompressedMultiTexImageEXT");
  glext_glGetCompressedTextureImageEXT
    = (PFNGLGETCOMPRESSEDTEXTUREIMAGEEXTPROC)load (
      userptr, "glGetCompressedTextureImageEXT");
  glext_glGetDoubleIndexedvEXT
    = (PFNGLGETDOUBLEINDEXEDVEXTPROC)load (userptr, "glGetDoubleIndexedvEXT");
  glext_glGetDoublei_vEXT
    = (PFNGLGETDOUBLEI_VEXTPROC)load (userptr, "glGetDoublei_vEXT");
  glext_glGetFloatIndexedvEXT
    = (PFNGLGETFLOATINDEXEDVEXTPROC)load (userptr, "glGetFloatIndexedvEXT");
  glext_glGetFloati_vEXT
    = (PFNGLGETFLOATI_VEXTPROC)load (userptr, "glGetFloati_vEXT");
  glext_glGetFramebufferParameterivEXT
    = (PFNGLGETFRAMEBUFFERPARAMETERIVEXTPROC)load (
      userptr, "glGetFramebufferParameterivEXT");
  glext_glGetIntegerIndexedvEXT = (PFNGLGETINTEGERINDEXEDVEXTPROC)load (
    userptr, "glGetIntegerIndexedvEXT");
  glext_glGetMultiTexEnvfvEXT
    = (PFNGLGETMULTITEXENVFVEXTPROC)load (userptr, "glGetMultiTexEnvfvEXT");
  glext_glGetMultiTexEnvivEXT
    = (PFNGLGETMULTITEXENVIVEXTPROC)load (userptr, "glGetMultiTexEnvivEXT");
  glext_glGetMultiTexGendvEXT
    = (PFNGLGETMULTITEXGENDVEXTPROC)load (userptr, "glGetMultiTexGendvEXT");
  glext_glGetMultiTexGenfvEXT
    = (PFNGLGETMULTITEXGENFVEXTPROC)load (userptr, "glGetMultiTexGenfvEXT");
  glext_glGetMultiTexGenivEXT
    = (PFNGLGETMULTITEXGENIVEXTPROC)load (userptr, "glGetMultiTexGenivEXT");
  glext_glGetMultiTexImageEXT
    = (PFNGLGETMULTITEXIMAGEEXTPROC)load (userptr, "glGetMultiTexImageEXT");
  glext_glGetMultiTexLevelParameterfvEXT
    = (PFNGLGETMULTITEXLEVELPARAMETERFVEXTPROC)load (
      userptr, "glGetMultiTexLevelParameterfvEXT");
  glext_glGetMultiTexLevelParameterivEXT
    = (PFNGLGETMULTITEXLEVELPARAMETERIVEXTPROC)load (
      userptr, "glGetMultiTexLevelParameterivEXT");
  glext_glGetMultiTexParameterIivEXT
    = (PFNGLGETMULTITEXPARAMETERIIVEXTPROC)load (
      userptr, "glGetMultiTexParameterIivEXT");
  glext_glGetMultiTexParameterIuivEXT
    = (PFNGLGETMULTITEXPARAMETERIUIVEXTPROC)load (
      userptr, "glGetMultiTexParameterIuivEXT");
  glext_glGetMultiTexParameterfvEXT
    = (PFNGLGETMULTITEXPARAMETERFVEXTPROC)load (userptr,
                                                "glGetMultiTexParameterfvEXT");
  glext_glGetMultiTexParameterivEXT
    = (PFNGLGETMULTITEXPARAMETERIVEXTPROC)load (userptr,
                                                "glGetMultiTexParameterivEXT");
  glext_glGetNamedBufferParameterivEXT
    = (PFNGLGETNAMEDBUFFERPARAMETERIVEXTPROC)load (
      userptr, "glGetNamedBufferParameterivEXT");
  glext_glGetNamedBufferPointervEXT
    = (PFNGLGETNAMEDBUFFERPOINTERVEXTPROC)load (userptr,
                                                "glGetNamedBufferPointervEXT");
  glext_glGetNamedBufferSubDataEXT = (PFNGLGETNAMEDBUFFERSUBDATAEXTPROC)load (
    userptr, "glGetNamedBufferSubDataEXT");
  glext_glGetNamedFramebufferAttachmentParameterivEXT
    = (PFNGLGETNAMEDFRAMEBUFFERATTACHMENTPARAMETERIVEXTPROC)load (
      userptr, "glGetNamedFramebufferAttachmentParameterivEXT");
  glext_glGetNamedFramebufferParameterivEXT
    = (PFNGLGETNAMEDFRAMEBUFFERPARAMETERIVEXTPROC)load (
      userptr, "glGetNamedFramebufferParameterivEXT");
  glext_glGetNamedProgramLocalParameterIivEXT
    = (PFNGLGETNAMEDPROGRAMLOCALPARAMETERIIVEXTPROC)load (
      userptr, "glGetNamedProgramLocalParameterIivEXT");
  glext_glGetNamedProgramLocalParameterIuivEXT
    = (PFNGLGETNAMEDPROGRAMLOCALPARAMETERIUIVEXTPROC)load (
      userptr, "glGetNamedProgramLocalParameterIuivEXT");
  glext_glGetNamedProgramLocalParameterdvEXT
    = (PFNGLGETNAMEDPROGRAMLOCALPARAMETERDVEXTPROC)load (
      userptr, "glGetNamedProgramLocalParameterdvEXT");
  glext_glGetNamedProgramLocalParameterfvEXT
    = (PFNGLGETNAMEDPROGRAMLOCALPARAMETERFVEXTPROC)load (
      userptr, "glGetNamedProgramLocalParameterfvEXT");
  glext_glGetNamedProgramStringEXT = (PFNGLGETNAMEDPROGRAMSTRINGEXTPROC)load (
    userptr, "glGetNamedProgramStringEXT");
  glext_glGetNamedProgramivEXT
    = (PFNGLGETNAMEDPROGRAMIVEXTPROC)load (userptr, "glGetNamedProgramivEXT");
  glext_glGetNamedRenderbufferParameterivEXT
    = (PFNGLGETNAMEDRENDERBUFFERPARAMETERIVEXTPROC)load (
      userptr, "glGetNamedRenderbufferParameterivEXT");
  glext_glGetPointerIndexedvEXT = (PFNGLGETPOINTERINDEXEDVEXTPROC)load (
    userptr, "glGetPointerIndexedvEXT");
  glext_glGetPointeri_vEXT
    = (PFNGLGETPOINTERI_VEXTPROC)load (userptr, "glGetPointeri_vEXT");
  glext_glGetTextureImageEXT
    = (PFNGLGETTEXTUREIMAGEEXTPROC)load (userptr, "glGetTextureImageEXT");
  glext_glGetTextureLevelParameterfvEXT
    = (PFNGLGETTEXTURELEVELPARAMETERFVEXTPROC)load (
      userptr, "glGetTextureLevelParameterfvEXT");
  glext_glGetTextureLevelParameterivEXT
    = (PFNGLGETTEXTURELEVELPARAMETERIVEXTPROC)load (
      userptr, "glGetTextureLevelParameterivEXT");
  glext_glGetTextureParameterIivEXT
    = (PFNGLGETTEXTUREPARAMETERIIVEXTPROC)load (userptr,
                                                "glGetTextureParameterIivEXT");
  glext_glGetTextureParameterIuivEXT
    = (PFNGLGETTEXTUREPARAMETERIUIVEXTPROC)load (
      userptr, "glGetTextureParameterIuivEXT");
  glext_glGetTextureParameterfvEXT = (PFNGLGETTEXTUREPARAMETERFVEXTPROC)load (
    userptr, "glGetTextureParameterfvEXT");
  glext_glGetTextureParameterivEXT = (PFNGLGETTEXTUREPARAMETERIVEXTPROC)load (
    userptr, "glGetTextureParameterivEXT");
  glext_glGetVertexArrayIntegeri_vEXT
    = (PFNGLGETVERTEXARRAYINTEGERI_VEXTPROC)load (
      userptr, "glGetVertexArrayIntegeri_vEXT");
  glext_glGetVertexArrayIntegervEXT
    = (PFNGLGETVERTEXARRAYINTEGERVEXTPROC)load (userptr,
                                                "glGetVertexArrayIntegervEXT");
  glext_glGetVertexArrayPointeri_vEXT
    = (PFNGLGETVERTEXARRAYPOINTERI_VEXTPROC)load (
      userptr, "glGetVertexArrayPointeri_vEXT");
  glext_glGetVertexArrayPointervEXT
    = (PFNGLGETVERTEXARRAYPOINTERVEXTPROC)load (userptr,
                                                "glGetVertexArrayPointervEXT");
  glext_glIsEnabledIndexedEXT
    = (PFNGLISENABLEDINDEXEDEXTPROC)load (userptr, "glIsEnabledIndexedEXT");
  glext_glMapNamedBufferEXT
    = (PFNGLMAPNAMEDBUFFEREXTPROC)load (userptr, "glMapNamedBufferEXT");
  glext_glMapNamedBufferRangeEXT = (PFNGLMAPNAMEDBUFFERRANGEEXTPROC)load (
    userptr, "glMapNamedBufferRangeEXT");
  glext_glMatrixFrustumEXT
    = (PFNGLMATRIXFRUSTUMEXTPROC)load (userptr, "glMatrixFrustumEXT");
  glext_glMatrixLoadIdentityEXT = (PFNGLMATRIXLOADIDENTITYEXTPROC)load (
    userptr, "glMatrixLoadIdentityEXT");
  glext_glMatrixLoadTransposedEXT = (PFNGLMATRIXLOADTRANSPOSEDEXTPROC)load (
    userptr, "glMatrixLoadTransposedEXT");
  glext_glMatrixLoadTransposefEXT = (PFNGLMATRIXLOADTRANSPOSEFEXTPROC)load (
    userptr, "glMatrixLoadTransposefEXT");
  glext_glMatrixLoaddEXT
    = (PFNGLMATRIXLOADDEXTPROC)load (userptr, "glMatrixLoaddEXT");
  glext_glMatrixLoadfEXT
    = (PFNGLMATRIXLOADFEXTPROC)load (userptr, "glMatrixLoadfEXT");
  glext_glMatrixMultTransposedEXT = (PFNGLMATRIXMULTTRANSPOSEDEXTPROC)load (
    userptr, "glMatrixMultTransposedEXT");
  glext_glMatrixMultTransposefEXT = (PFNGLMATRIXMULTTRANSPOSEFEXTPROC)load (
    userptr, "glMatrixMultTransposefEXT");
  glext_glMatrixMultdEXT
    = (PFNGLMATRIXMULTDEXTPROC)load (userptr, "glMatrixMultdEXT");
  glext_glMatrixMultfEXT
    = (PFNGLMATRIXMULTFEXTPROC)load (userptr, "glMatrixMultfEXT");
  glext_glMatrixOrthoEXT
    = (PFNGLMATRIXORTHOEXTPROC)load (userptr, "glMatrixOrthoEXT");
  glext_glMatrixPopEXT
    = (PFNGLMATRIXPOPEXTPROC)load (userptr, "glMatrixPopEXT");
  glext_glMatrixPushEXT
    = (PFNGLMATRIXPUSHEXTPROC)load (userptr, "glMatrixPushEXT");
  glext_glMatrixRotatedEXT
    = (PFNGLMATRIXROTATEDEXTPROC)load (userptr, "glMatrixRotatedEXT");
  glext_glMatrixRotatefEXT
    = (PFNGLMATRIXROTATEFEXTPROC)load (userptr, "glMatrixRotatefEXT");
  glext_glMatrixScaledEXT
    = (PFNGLMATRIXSCALEDEXTPROC)load (userptr, "glMatrixScaledEXT");
  glext_glMatrixScalefEXT
    = (PFNGLMATRIXSCALEFEXTPROC)load (userptr, "glMatrixScalefEXT");
  glext_glMatrixTranslatedEXT
    = (PFNGLMATRIXTRANSLATEDEXTPROC)load (userptr, "glMatrixTranslatedEXT");
  glext_glMatrixTranslatefEXT
    = (PFNGLMATRIXTRANSLATEFEXTPROC)load (userptr, "glMatrixTranslatefEXT");
  glext_glMultiTexBufferEXT
    = (PFNGLMULTITEXBUFFEREXTPROC)load (userptr, "glMultiTexBufferEXT");
  glext_glMultiTexCoordPointerEXT = (PFNGLMULTITEXCOORDPOINTEREXTPROC)load (
    userptr, "glMultiTexCoordPointerEXT");
  glext_glMultiTexEnvfEXT
    = (PFNGLMULTITEXENVFEXTPROC)load (userptr, "glMultiTexEnvfEXT");
  glext_glMultiTexEnvfvEXT
    = (PFNGLMULTITEXENVFVEXTPROC)load (userptr, "glMultiTexEnvfvEXT");
  glext_glMultiTexEnviEXT
    = (PFNGLMULTITEXENVIEXTPROC)load (userptr, "glMultiTexEnviEXT");
  glext_glMultiTexEnvivEXT
    = (PFNGLMULTITEXENVIVEXTPROC)load (userptr, "glMultiTexEnvivEXT");
  glext_glMultiTexGendEXT
    = (PFNGLMULTITEXGENDEXTPROC)load (userptr, "glMultiTexGendEXT");
  glext_glMultiTexGendvEXT
    = (PFNGLMULTITEXGENDVEXTPROC)load (userptr, "glMultiTexGendvEXT");
  glext_glMultiTexGenfEXT
    = (PFNGLMULTITEXGENFEXTPROC)load (userptr, "glMultiTexGenfEXT");
  glext_glMultiTexGenfvEXT
    = (PFNGLMULTITEXGENFVEXTPROC)load (userptr, "glMultiTexGenfvEXT");
  glext_glMultiTexGeniEXT
    = (PFNGLMULTITEXGENIEXTPROC)load (userptr, "glMultiTexGeniEXT");
  glext_glMultiTexGenivEXT
    = (PFNGLMULTITEXGENIVEXTPROC)load (userptr, "glMultiTexGenivEXT");
  glext_glMultiTexImage1DEXT
    = (PFNGLMULTITEXIMAGE1DEXTPROC)load (userptr, "glMultiTexImage1DEXT");
  glext_glMultiTexImage2DEXT
    = (PFNGLMULTITEXIMAGE2DEXTPROC)load (userptr, "glMultiTexImage2DEXT");
  glext_glMultiTexImage3DEXT
    = (PFNGLMULTITEXIMAGE3DEXTPROC)load (userptr, "glMultiTexImage3DEXT");
  glext_glMultiTexParameterIivEXT = (PFNGLMULTITEXPARAMETERIIVEXTPROC)load (
    userptr, "glMultiTexParameterIivEXT");
  glext_glMultiTexParameterIuivEXT = (PFNGLMULTITEXPARAMETERIUIVEXTPROC)load (
    userptr, "glMultiTexParameterIuivEXT");
  glext_glMultiTexParameterfEXT = (PFNGLMULTITEXPARAMETERFEXTPROC)load (
    userptr, "glMultiTexParameterfEXT");
  glext_glMultiTexParameterfvEXT = (PFNGLMULTITEXPARAMETERFVEXTPROC)load (
    userptr, "glMultiTexParameterfvEXT");
  glext_glMultiTexParameteriEXT = (PFNGLMULTITEXPARAMETERIEXTPROC)load (
    userptr, "glMultiTexParameteriEXT");
  glext_glMultiTexParameterivEXT = (PFNGLMULTITEXPARAMETERIVEXTPROC)load (
    userptr, "glMultiTexParameterivEXT");
  glext_glMultiTexRenderbufferEXT = (PFNGLMULTITEXRENDERBUFFEREXTPROC)load (
    userptr, "glMultiTexRenderbufferEXT");
  glext_glMultiTexSubImage1DEXT = (PFNGLMULTITEXSUBIMAGE1DEXTPROC)load (
    userptr, "glMultiTexSubImage1DEXT");
  glext_glMultiTexSubImage2DEXT = (PFNGLMULTITEXSUBIMAGE2DEXTPROC)load (
    userptr, "glMultiTexSubImage2DEXT");
  glext_glMultiTexSubImage3DEXT = (PFNGLMULTITEXSUBIMAGE3DEXTPROC)load (
    userptr, "glMultiTexSubImage3DEXT");
  glext_glNamedBufferDataEXT
    = (PFNGLNAMEDBUFFERDATAEXTPROC)load (userptr, "glNamedBufferDataEXT");
  glext_glNamedBufferStorageEXT = (PFNGLNAMEDBUFFERSTORAGEEXTPROC)load (
    userptr, "glNamedBufferStorageEXT");
  glext_glNamedBufferSubDataEXT = (PFNGLNAMEDBUFFERSUBDATAEXTPROC)load (
    userptr, "glNamedBufferSubDataEXT");
  glext_glNamedCopyBufferSubDataEXT
    = (PFNGLNAMEDCOPYBUFFERSUBDATAEXTPROC)load (userptr,
                                                "glNamedCopyBufferSubDataEXT");
  glext_glNamedFramebufferParameteriEXT
    = (PFNGLNAMEDFRAMEBUFFERPARAMETERIEXTPROC)load (
      userptr, "glNamedFramebufferParameteriEXT");
  glext_glNamedFramebufferRenderbufferEXT
    = (PFNGLNAMEDFRAMEBUFFERRENDERBUFFEREXTPROC)load (
      userptr, "glNamedFramebufferRenderbufferEXT");
  glext_glNamedFramebufferTexture1DEXT
    = (PFNGLNAMEDFRAMEBUFFERTEXTURE1DEXTPROC)load (
      userptr, "glNamedFramebufferTexture1DEXT");
  glext_glNamedFramebufferTexture2DEXT
    = (PFNGLNAMEDFRAMEBUFFERTEXTURE2DEXTPROC)load (
      userptr, "glNamedFramebufferTexture2DEXT");
  glext_glNamedFramebufferTexture3DEXT
    = (PFNGLNAMEDFRAMEBUFFERTEXTURE3DEXTPROC)load (
      userptr, "glNamedFramebufferTexture3DEXT");
  glext_glNamedFramebufferTextureEXT
    = (PFNGLNAMEDFRAMEBUFFERTEXTUREEXTPROC)load (
      userptr, "glNamedFramebufferTextureEXT");
  glext_glNamedFramebufferTextureFaceEXT
    = (PFNGLNAMEDFRAMEBUFFERTEXTUREFACEEXTPROC)load (
      userptr, "glNamedFramebufferTextureFaceEXT");
  glext_glNamedFramebufferTextureLayerEXT
    = (PFNGLNAMEDFRAMEBUFFERTEXTURELAYEREXTPROC)load (
      userptr, "glNamedFramebufferTextureLayerEXT");
  glext_glNamedProgramLocalParameter4dEXT
    = (PFNGLNAMEDPROGRAMLOCALPARAMETER4DEXTPROC)load (
      userptr, "glNamedProgramLocalParameter4dEXT");
  glext_glNamedProgramLocalParameter4dvEXT
    = (PFNGLNAMEDPROGRAMLOCALPARAMETER4DVEXTPROC)load (
      userptr, "glNamedProgramLocalParameter4dvEXT");
  glext_glNamedProgramLocalParameter4fEXT
    = (PFNGLNAMEDPROGRAMLOCALPARAMETER4FEXTPROC)load (
      userptr, "glNamedProgramLocalParameter4fEXT");
  glext_glNamedProgramLocalParameter4fvEXT
    = (PFNGLNAMEDPROGRAMLOCALPARAMETER4FVEXTPROC)load (
      userptr, "glNamedProgramLocalParameter4fvEXT");
  glext_glNamedProgramLocalParameterI4iEXT
    = (PFNGLNAMEDPROGRAMLOCALPARAMETERI4IEXTPROC)load (
      userptr, "glNamedProgramLocalParameterI4iEXT");
  glext_glNamedProgramLocalParameterI4ivEXT
    = (PFNGLNAMEDPROGRAMLOCALPARAMETERI4IVEXTPROC)load (
      userptr, "glNamedProgramLocalParameterI4ivEXT");
  glext_glNamedProgramLocalParameterI4uiEXT
    = (PFNGLNAMEDPROGRAMLOCALPARAMETERI4UIEXTPROC)load (
      userptr, "glNamedProgramLocalParameterI4uiEXT");
  glext_glNamedProgramLocalParameterI4uivEXT
    = (PFNGLNAMEDPROGRAMLOCALPARAMETERI4UIVEXTPROC)load (
      userptr, "glNamedProgramLocalParameterI4uivEXT");
  glext_glNamedProgramLocalParameters4fvEXT
    = (PFNGLNAMEDPROGRAMLOCALPARAMETERS4FVEXTPROC)load (
      userptr, "glNamedProgramLocalParameters4fvEXT");
  glext_glNamedProgramLocalParametersI4ivEXT
    = (PFNGLNAMEDPROGRAMLOCALPARAMETERSI4IVEXTPROC)load (
      userptr, "glNamedProgramLocalParametersI4ivEXT");
  glext_glNamedProgramLocalParametersI4uivEXT
    = (PFNGLNAMEDPROGRAMLOCALPARAMETERSI4UIVEXTPROC)load (
      userptr, "glNamedProgramLocalParametersI4uivEXT");
  glext_glNamedProgramStringEXT = (PFNGLNAMEDPROGRAMSTRINGEXTPROC)load (
    userptr, "glNamedProgramStringEXT");
  glext_glNamedRenderbufferStorageEXT
    = (PFNGLNAMEDRENDERBUFFERSTORAGEEXTPROC)load (
      userptr, "glNamedRenderbufferStorageEXT");
  glext_glNamedRenderbufferStorageMultisampleCoverageEXT
    = (PFNGLNAMEDRENDERBUFFERSTORAGEMULTISAMPLECOVERAGEEXTPROC)load (
      userptr, "glNamedRenderbufferStorageMultisampleCoverageEXT");
  glext_glNamedRenderbufferStorageMultisampleEXT
    = (PFNGLNAMEDRENDERBUFFERSTORAGEMULTISAMPLEEXTPROC)load (
      userptr, "glNamedRenderbufferStorageMultisampleEXT");
  glext_glProgramUniform1dEXT
    = (PFNGLPROGRAMUNIFORM1DEXTPROC)load (userptr, "glProgramUniform1dEXT");
  glext_glProgramUniform1dvEXT
    = (PFNGLPROGRAMUNIFORM1DVEXTPROC)load (userptr, "glProgramUniform1dvEXT");
  glext_glProgramUniform1fEXT
    = (PFNGLPROGRAMUNIFORM1FEXTPROC)load (userptr, "glProgramUniform1fEXT");
  glext_glProgramUniform1fvEXT
    = (PFNGLPROGRAMUNIFORM1FVEXTPROC)load (userptr, "glProgramUniform1fvEXT");
  glext_glProgramUniform1iEXT
    = (PFNGLPROGRAMUNIFORM1IEXTPROC)load (userptr, "glProgramUniform1iEXT");
  glext_glProgramUniform1ivEXT
    = (PFNGLPROGRAMUNIFORM1IVEXTPROC)load (userptr, "glProgramUniform1ivEXT");
  glext_glProgramUniform1uiEXT
    = (PFNGLPROGRAMUNIFORM1UIEXTPROC)load (userptr, "glProgramUniform1uiEXT");
  glext_glProgramUniform1uivEXT = (PFNGLPROGRAMUNIFORM1UIVEXTPROC)load (
    userptr, "glProgramUniform1uivEXT");
  glext_glProgramUniform2dEXT
    = (PFNGLPROGRAMUNIFORM2DEXTPROC)load (userptr, "glProgramUniform2dEXT");
  glext_glProgramUniform2dvEXT
    = (PFNGLPROGRAMUNIFORM2DVEXTPROC)load (userptr, "glProgramUniform2dvEXT");
  glext_glProgramUniform2fEXT
    = (PFNGLPROGRAMUNIFORM2FEXTPROC)load (userptr, "glProgramUniform2fEXT");
  glext_glProgramUniform2fvEXT
    = (PFNGLPROGRAMUNIFORM2FVEXTPROC)load (userptr, "glProgramUniform2fvEXT");
  glext_glProgramUniform2iEXT
    = (PFNGLPROGRAMUNIFORM2IEXTPROC)load (userptr, "glProgramUniform2iEXT");
  glext_glProgramUniform2ivEXT
    = (PFNGLPROGRAMUNIFORM2IVEXTPROC)load (userptr, "glProgramUniform2ivEXT");
  glext_glProgramUniform2uiEXT
    = (PFNGLPROGRAMUNIFORM2UIEXTPROC)load (userptr, "glProgramUniform2uiEXT");
  glext_glProgramUniform2uivEXT = (PFNGLPROGRAMUNIFORM2UIVEXTPROC)load (
    userptr, "glProgramUniform2uivEXT");
  glext_glProgramUniform3dEXT
    = (PFNGLPROGRAMUNIFORM3DEXTPROC)load (userptr, "glProgramUniform3dEXT");
  glext_glProgramUniform3dvEXT
    = (PFNGLPROGRAMUNIFORM3DVEXTPROC)load (userptr, "glProgramUniform3dvEXT");
  glext_glProgramUniform3fEXT
    = (PFNGLPROGRAMUNIFORM3FEXTPROC)load (userptr, "glProgramUniform3fEXT");
  glext_glProgramUniform3fvEXT
    = (PFNGLPROGRAMUNIFORM3FVEXTPROC)load (userptr, "glProgramUniform3fvEXT");
  glext_glProgramUniform3iEXT
    = (PFNGLPROGRAMUNIFORM3IEXTPROC)load (userptr, "glProgramUniform3iEXT");
  glext_glProgramUniform3ivEXT
    = (PFNGLPROGRAMUNIFORM3IVEXTPROC)load (userptr, "glProgramUniform3ivEXT");
  glext_glProgramUniform3uiEXT
    = (PFNGLPROGRAMUNIFORM3UIEXTPROC)load (userptr, "glProgramUniform3uiEXT");
  glext_glProgramUniform3uivEXT = (PFNGLPROGRAMUNIFORM3UIVEXTPROC)load (
    userptr, "glProgramUniform3uivEXT");
  glext_glProgramUniform4dEXT
    = (PFNGLPROGRAMUNIFORM4DEXTPROC)load (userptr, "glProgramUniform4dEXT");
  glext_glProgramUniform4dvEXT
    = (PFNGLPROGRAMUNIFORM4DVEXTPROC)load (userptr, "glProgramUniform4dvEXT");
  glext_glProgramUniform4fEXT
    = (PFNGLPROGRAMUNIFORM4FEXTPROC)load (userptr, "glProgramUniform4fEXT");
  glext_glProgramUniform4fvEXT
    = (PFNGLPROGRAMUNIFORM4FVEXTPROC)load (userptr, "glProgramUniform4fvEXT");
  glext_glProgramUniform4iEXT
    = (PFNGLPROGRAMUNIFORM4IEXTPROC)load (userptr, "glProgramUniform4iEXT");
  glext_glProgramUniform4ivEXT
    = (PFNGLPROGRAMUNIFORM4IVEXTPROC)load (userptr, "glProgramUniform4ivEXT");
  glext_glProgramUniform4uiEXT
    = (PFNGLPROGRAMUNIFORM4UIEXTPROC)load (userptr, "glProgramUniform4uiEXT");
  glext_glProgramUniform4uivEXT = (PFNGLPROGRAMUNIFORM4UIVEXTPROC)load (
    userptr, "glProgramUniform4uivEXT");
  glext_glProgramUniformMatrix2dvEXT
    = (PFNGLPROGRAMUNIFORMMATRIX2DVEXTPROC)load (
      userptr, "glProgramUniformMatrix2dvEXT");
  glext_glProgramUniformMatrix2fvEXT
    = (PFNGLPROGRAMUNIFORMMATRIX2FVEXTPROC)load (
      userptr, "glProgramUniformMatrix2fvEXT");
  glext_glProgramUniformMatrix2x3dvEXT
    = (PFNGLPROGRAMUNIFORMMATRIX2X3DVEXTPROC)load (
      userptr, "glProgramUniformMatrix2x3dvEXT");
  glext_glProgramUniformMatrix2x3fvEXT
    = (PFNGLPROGRAMUNIFORMMATRIX2X3FVEXTPROC)load (
      userptr, "glProgramUniformMatrix2x3fvEXT");
  glext_glProgramUniformMatrix2x4dvEXT
    = (PFNGLPROGRAMUNIFORMMATRIX2X4DVEXTPROC)load (
      userptr, "glProgramUniformMatrix2x4dvEXT");
  glext_glProgramUniformMatrix2x4fvEXT
    = (PFNGLPROGRAMUNIFORMMATRIX2X4FVEXTPROC)load (
      userptr, "glProgramUniformMatrix2x4fvEXT");
  glext_glProgramUniformMatrix3dvEXT
    = (PFNGLPROGRAMUNIFORMMATRIX3DVEXTPROC)load (
      userptr, "glProgramUniformMatrix3dvEXT");
  glext_glProgramUniformMatrix3fvEXT
    = (PFNGLPROGRAMUNIFORMMATRIX3FVEXTPROC)load (
      userptr, "glProgramUniformMatrix3fvEXT");
  glext_glProgramUniformMatrix3x2dvEXT
    = (PFNGLPROGRAMUNIFORMMATRIX3X2DVEXTPROC)load (
      userptr, "glProgramUniformMatrix3x2dvEXT");
  glext_glProgramUniformMatrix3x2fvEXT
    = (PFNGLPROGRAMUNIFORMMATRIX3X2FVEXTPROC)load (
      userptr, "glProgramUniformMatrix3x2fvEXT");
  glext_glProgramUniformMatrix3x4dvEXT
    = (PFNGLPROGRAMUNIFORMMATRIX3X4DVEXTPROC)load (
      userptr, "glProgramUniformMatrix3x4dvEXT");
  glext_glProgramUniformMatrix3x4fvEXT
    = (PFNGLPROGRAMUNIFORMMATRIX3X4FVEXTPROC)load (
      userptr, "glProgramUniformMatrix3x4fvEXT");
  glext_glProgramUniformMatrix4dvEXT
    = (PFNGLPROGRAMUNIFORMMATRIX4DVEXTPROC)load (
      userptr, "glProgramUniformMatrix4dvEXT");
  glext_glProgramUniformMatrix4fvEXT
    = (PFNGLPROGRAMUNIFORMMATRIX4FVEXTPROC)load (
      userptr, "glProgramUniformMatrix4fvEXT");
  glext_glProgramUniformMatrix4x2dvEXT
    = (PFNGLPROGRAMUNIFORMMATRIX4X2DVEXTPROC)load (
      userptr, "glProgramUniformMatrix4x2dvEXT");
  glext_glProgramUniformMatrix4x2fvEXT
    = (PFNGLPROGRAMUNIFORMMATRIX4X2FVEXTPROC)load (
      userptr, "glProgramUniformMatrix4x2fvEXT");
  glext_glProgramUniformMatrix4x3dvEXT
    = (PFNGLPROGRAMUNIFORMMATRIX4X3DVEXTPROC)load (
      userptr, "glProgramUniformMatrix4x3dvEXT");
  glext_glProgramUniformMatrix4x3fvEXT
    = (PFNGLPROGRAMUNIFORMMATRIX4X3FVEXTPROC)load (
      userptr, "glProgramUniformMatrix4x3fvEXT");
  glext_glPushClientAttribDefaultEXT
    = (PFNGLPUSHCLIENTATTRIBDEFAULTEXTPROC)load (
      userptr, "glPushClientAttribDefaultEXT");
  glext_glTextureBufferEXT
    = (PFNGLTEXTUREBUFFEREXTPROC)load (userptr, "glTextureBufferEXT");
  glext_glTextureBufferRangeEXT = (PFNGLTEXTUREBUFFERRANGEEXTPROC)load (
    userptr, "glTextureBufferRangeEXT");
  glext_glTextureImage1DEXT
    = (PFNGLTEXTUREIMAGE1DEXTPROC)load (userptr, "glTextureImage1DEXT");
  glext_glTextureImage2DEXT
    = (PFNGLTEXTUREIMAGE2DEXTPROC)load (userptr, "glTextureImage2DEXT");
  glext_glTextureImage3DEXT
    = (PFNGLTEXTUREIMAGE3DEXTPROC)load (userptr, "glTextureImage3DEXT");
  glext_glTexturePageCommitmentEXT = (PFNGLTEXTUREPAGECOMMITMENTEXTPROC)load (
    userptr, "glTexturePageCommitmentEXT");
  glext_glTextureParameterIivEXT = (PFNGLTEXTUREPARAMETERIIVEXTPROC)load (
    userptr, "glTextureParameterIivEXT");
  glext_glTextureParameterIuivEXT = (PFNGLTEXTUREPARAMETERIUIVEXTPROC)load (
    userptr, "glTextureParameterIuivEXT");
  glext_glTextureParameterfEXT
    = (PFNGLTEXTUREPARAMETERFEXTPROC)load (userptr, "glTextureParameterfEXT");
  glext_glTextureParameterfvEXT = (PFNGLTEXTUREPARAMETERFVEXTPROC)load (
    userptr, "glTextureParameterfvEXT");
  glext_glTextureParameteriEXT
    = (PFNGLTEXTUREPARAMETERIEXTPROC)load (userptr, "glTextureParameteriEXT");
  glext_glTextureParameterivEXT = (PFNGLTEXTUREPARAMETERIVEXTPROC)load (
    userptr, "glTextureParameterivEXT");
  glext_glTextureRenderbufferEXT = (PFNGLTEXTURERENDERBUFFEREXTPROC)load (
    userptr, "glTextureRenderbufferEXT");
  glext_glTextureStorage1DEXT
    = (PFNGLTEXTURESTORAGE1DEXTPROC)load (userptr, "glTextureStorage1DEXT");
  glext_glTextureStorage2DEXT
    = (PFNGLTEXTURESTORAGE2DEXTPROC)load (userptr, "glTextureStorage2DEXT");
  glext_glTextureStorage2DMultisampleEXT
    = (PFNGLTEXTURESTORAGE2DMULTISAMPLEEXTPROC)load (
      userptr, "glTextureStorage2DMultisampleEXT");
  glext_glTextureStorage3DEXT
    = (PFNGLTEXTURESTORAGE3DEXTPROC)load (userptr, "glTextureStorage3DEXT");
  glext_glTextureStorage3DMultisampleEXT
    = (PFNGLTEXTURESTORAGE3DMULTISAMPLEEXTPROC)load (
      userptr, "glTextureStorage3DMultisampleEXT");
  glext_glTextureSubImage1DEXT
    = (PFNGLTEXTURESUBIMAGE1DEXTPROC)load (userptr, "glTextureSubImage1DEXT");
  glext_glTextureSubImage2DEXT
    = (PFNGLTEXTURESUBIMAGE2DEXTPROC)load (userptr, "glTextureSubImage2DEXT");
  glext_glTextureSubImage3DEXT
    = (PFNGLTEXTURESUBIMAGE3DEXTPROC)load (userptr, "glTextureSubImage3DEXT");
  glext_glUnmapNamedBufferEXT
    = (PFNGLUNMAPNAMEDBUFFEREXTPROC)load (userptr, "glUnmapNamedBufferEXT");
  glext_glVertexArrayBindVertexBufferEXT
    = (PFNGLVERTEXARRAYBINDVERTEXBUFFEREXTPROC)load (
      userptr, "glVertexArrayBindVertexBufferEXT");
  glext_glVertexArrayColorOffsetEXT
    = (PFNGLVERTEXARRAYCOLOROFFSETEXTPROC)load (userptr,
                                                "glVertexArrayColorOffsetEXT");
  glext_glVertexArrayEdgeFlagOffsetEXT
    = (PFNGLVERTEXARRAYEDGEFLAGOFFSETEXTPROC)load (
      userptr, "glVertexArrayEdgeFlagOffsetEXT");
  glext_glVertexArrayFogCoordOffsetEXT
    = (PFNGLVERTEXARRAYFOGCOORDOFFSETEXTPROC)load (
      userptr, "glVertexArrayFogCoordOffsetEXT");
  glext_glVertexArrayIndexOffsetEXT
    = (PFNGLVERTEXARRAYINDEXOFFSETEXTPROC)load (userptr,
                                                "glVertexArrayIndexOffsetEXT");
  glext_glVertexArrayMultiTexCoordOffsetEXT
    = (PFNGLVERTEXARRAYMULTITEXCOORDOFFSETEXTPROC)load (
      userptr, "glVertexArrayMultiTexCoordOffsetEXT");
  glext_glVertexArrayNormalOffsetEXT
    = (PFNGLVERTEXARRAYNORMALOFFSETEXTPROC)load (
      userptr, "glVertexArrayNormalOffsetEXT");
  glext_glVertexArraySecondaryColorOffsetEXT
    = (PFNGLVERTEXARRAYSECONDARYCOLOROFFSETEXTPROC)load (
      userptr, "glVertexArraySecondaryColorOffsetEXT");
  glext_glVertexArrayTexCoordOffsetEXT
    = (PFNGLVERTEXARRAYTEXCOORDOFFSETEXTPROC)load (
      userptr, "glVertexArrayTexCoordOffsetEXT");
  glext_glVertexArrayVertexAttribBindingEXT
    = (PFNGLVERTEXARRAYVERTEXATTRIBBINDINGEXTPROC)load (
      userptr, "glVertexArrayVertexAttribBindingEXT");
  glext_glVertexArrayVertexAttribDivisorEXT
    = (PFNGLVERTEXARRAYVERTEXATTRIBDIVISOREXTPROC)load (
      userptr, "glVertexArrayVertexAttribDivisorEXT");
  glext_glVertexArrayVertexAttribFormatEXT
    = (PFNGLVERTEXARRAYVERTEXATTRIBFORMATEXTPROC)load (
      userptr, "glVertexArrayVertexAttribFormatEXT");
  glext_glVertexArrayVertexAttribIFormatEXT
    = (PFNGLVERTEXARRAYVERTEXATTRIBIFORMATEXTPROC)load (
      userptr, "glVertexArrayVertexAttribIFormatEXT");
  glext_glVertexArrayVertexAttribIOffsetEXT
    = (PFNGLVERTEXARRAYVERTEXATTRIBIOFFSETEXTPROC)load (
      userptr, "glVertexArrayVertexAttribIOffsetEXT");
  glext_glVertexArrayVertexAttribLFormatEXT
    = (PFNGLVERTEXARRAYVERTEXATTRIBLFORMATEXTPROC)load (
      userptr, "glVertexArrayVertexAttribLFormatEXT");
  glext_glVertexArrayVertexAttribLOffsetEXT
    = (PFNGLVERTEXARRAYVERTEXATTRIBLOFFSETEXTPROC)load (
      userptr, "glVertexArrayVertexAttribLOffsetEXT");
  glext_glVertexArrayVertexAttribOffsetEXT
    = (PFNGLVERTEXARRAYVERTEXATTRIBOFFSETEXTPROC)load (
      userptr, "glVertexArrayVertexAttribOffsetEXT");
  glext_glVertexArrayVertexBindingDivisorEXT
    = (PFNGLVERTEXARRAYVERTEXBINDINGDIVISOREXTPROC)load (
      userptr, "glVertexArrayVertexBindingDivisorEXT");
  glext_glVertexArrayVertexOffsetEXT
    = (PFNGLVERTEXARRAYVERTEXOFFSETEXTPROC)load (
      userptr, "glVertexArrayVertexOffsetEXT");
}
static void
glext_gl_load_GL_EXT_draw_buffers2 (GLEXTuserptrloadfunc load, void* userptr) {
  if (!GLEXT_GL_EXT_draw_buffers2)
    return;
  glext_glColorMaskIndexedEXT
    = (PFNGLCOLORMASKINDEXEDEXTPROC)load (userptr, "glColorMaskIndexedEXT");
  glext_glDisableIndexedEXT
    = (PFNGLDISABLEINDEXEDEXTPROC)load (userptr, "glDisableIndexedEXT");
  glext_glEnableIndexedEXT
    = (PFNGLENABLEINDEXEDEXTPROC)load (userptr, "glEnableIndexedEXT");
  glext_glGetBooleanIndexedvEXT = (PFNGLGETBOOLEANINDEXEDVEXTPROC)load (
    userptr, "glGetBooleanIndexedvEXT");
  glext_glGetIntegerIndexedvEXT = (PFNGLGETINTEGERINDEXEDVEXTPROC)load (
    userptr, "glGetIntegerIndexedvEXT");
  glext_glIsEnabledIndexedEXT
    = (PFNGLISENABLEDINDEXEDEXTPROC)load (userptr, "glIsEnabledIndexedEXT");
}
static void
glext_gl_load_GL_EXT_draw_instanced (GLEXTuserptrloadfunc load,
                                     void* userptr) {
  if (!GLEXT_GL_EXT_draw_instanced)
    return;
  glext_glDrawArraysInstancedEXT = (PFNGLDRAWARRAYSINSTANCEDEXTPROC)load (
    userptr, "glDrawArraysInstancedEXT");
  glext_glDrawElementsInstancedEXT = (PFNGLDRAWELEMENTSINSTANCEDEXTPROC)load (
    userptr, "glDrawElementsInstancedEXT");
}
static void
glext_gl_load_GL_EXT_draw_range_elements (GLEXTuserptrloadfunc load,
                                          void* userptr) {
  if (!GLEXT_GL_EXT_draw_range_elements)
    return;
  glext_glDrawRangeElementsEXT
    = (PFNGLDRAWRANGEELEMENTSEXTPROC)load (userptr, "glDrawRangeElementsEXT");
}
static void
glext_gl_load_GL_EXT_external_buffer (GLEXTuserptrloadfunc load,
                                      void* userptr) {
  if (!GLEXT_GL_EXT_external_buffer)
    return;
  glext_glBufferStorageExternalEXT = (PFNGLBUFFERSTORAGEEXTERNALEXTPROC)load (
    userptr, "glBufferStorageExternalEXT");
  glext_glNamedBufferStorageExternalEXT
    = (PFNGLNAMEDBUFFERSTORAGEEXTERNALEXTPROC)load (
      userptr, "glNamedBufferStorageExternalEXT");
}
static void
glext_gl_load_GL_EXT_fog_coord (GLEXTuserptrloadfunc load, void* userptr) {
  if (!GLEXT_GL_EXT_fog_coord)
    return;
  glext_glFogCoordPointerEXT
    = (PFNGLFOGCOORDPOINTEREXTPROC)load (userptr, "glFogCoordPointerEXT");
  glext_glFogCoorddEXT
    = (PFNGLFOGCOORDDEXTPROC)load (userptr, "glFogCoorddEXT");
  glext_glFogCoorddvEXT
    = (PFNGLFOGCOORDDVEXTPROC)load (userptr, "glFogCoorddvEXT");
  glext_glFogCoordfEXT
    = (PFNGLFOGCOORDFEXTPROC)load (userptr, "glFogCoordfEXT");
  glext_glFogCoordfvEXT
    = (PFNGLFOGCOORDFVEXTPROC)load (userptr, "glFogCoordfvEXT");
}
static void
glext_gl_load_GL_EXT_fragment_shading_rate (GLEXTuserptrloadfunc load,
                                            void* userptr) {
  if (!GLEXT_GL_EXT_fragment_shading_rate)
    return;
  glext_glFramebufferShadingRateEXT
    = (PFNGLFRAMEBUFFERSHADINGRATEEXTPROC)load (userptr,
                                                "glFramebufferShadingRateEXT");
  glext_glGetFragmentShadingRatesEXT
    = (PFNGLGETFRAGMENTSHADINGRATESEXTPROC)load (
      userptr, "glGetFragmentShadingRatesEXT");
  glext_glShadingRateCombinerOpsEXT
    = (PFNGLSHADINGRATECOMBINEROPSEXTPROC)load (userptr,
                                                "glShadingRateCombinerOpsEXT");
  glext_glShadingRateEXT
    = (PFNGLSHADINGRATEEXTPROC)load (userptr, "glShadingRateEXT");
}
static void
glext_gl_load_GL_EXT_framebuffer_blit (GLEXTuserptrloadfunc load,
                                       void* userptr) {
  if (!GLEXT_GL_EXT_framebuffer_blit)
    return;
  glext_glBlitFramebufferEXT
    = (PFNGLBLITFRAMEBUFFEREXTPROC)load (userptr, "glBlitFramebufferEXT");
}
static void
glext_gl_load_GL_EXT_framebuffer_blit_layers (GLEXTuserptrloadfunc load,
                                              void* userptr) {
  if (!GLEXT_GL_EXT_framebuffer_blit_layers)
    return;
  glext_glBlitFramebufferLayerEXT = (PFNGLBLITFRAMEBUFFERLAYEREXTPROC)load (
    userptr, "glBlitFramebufferLayerEXT");
  glext_glBlitFramebufferLayersEXT = (PFNGLBLITFRAMEBUFFERLAYERSEXTPROC)load (
    userptr, "glBlitFramebufferLayersEXT");
}
static void
glext_gl_load_GL_EXT_framebuffer_multisample (GLEXTuserptrloadfunc load,
                                              void* userptr) {
  if (!GLEXT_GL_EXT_framebuffer_multisample)
    return;
  glext_glRenderbufferStorageMultisampleEXT
    = (PFNGLRENDERBUFFERSTORAGEMULTISAMPLEEXTPROC)load (
      userptr, "glRenderbufferStorageMultisampleEXT");
}
static void
glext_gl_load_GL_EXT_framebuffer_object (GLEXTuserptrloadfunc load,
                                         void* userptr) {
  if (!GLEXT_GL_EXT_framebuffer_object)
    return;
  glext_glBindFramebufferEXT
    = (PFNGLBINDFRAMEBUFFEREXTPROC)load (userptr, "glBindFramebufferEXT");
  glext_glBindRenderbufferEXT
    = (PFNGLBINDRENDERBUFFEREXTPROC)load (userptr, "glBindRenderbufferEXT");
  glext_glCheckFramebufferStatusEXT
    = (PFNGLCHECKFRAMEBUFFERSTATUSEXTPROC)load (userptr,
                                                "glCheckFramebufferStatusEXT");
  glext_glDeleteFramebuffersEXT = (PFNGLDELETEFRAMEBUFFERSEXTPROC)load (
    userptr, "glDeleteFramebuffersEXT");
  glext_glDeleteRenderbuffersEXT = (PFNGLDELETERENDERBUFFERSEXTPROC)load (
    userptr, "glDeleteRenderbuffersEXT");
  glext_glFramebufferRenderbufferEXT
    = (PFNGLFRAMEBUFFERRENDERBUFFEREXTPROC)load (
      userptr, "glFramebufferRenderbufferEXT");
  glext_glFramebufferTexture1DEXT = (PFNGLFRAMEBUFFERTEXTURE1DEXTPROC)load (
    userptr, "glFramebufferTexture1DEXT");
  glext_glFramebufferTexture2DEXT = (PFNGLFRAMEBUFFERTEXTURE2DEXTPROC)load (
    userptr, "glFramebufferTexture2DEXT");
  glext_glFramebufferTexture3DEXT = (PFNGLFRAMEBUFFERTEXTURE3DEXTPROC)load (
    userptr, "glFramebufferTexture3DEXT");
  glext_glGenFramebuffersEXT
    = (PFNGLGENFRAMEBUFFERSEXTPROC)load (userptr, "glGenFramebuffersEXT");
  glext_glGenRenderbuffersEXT
    = (PFNGLGENRENDERBUFFERSEXTPROC)load (userptr, "glGenRenderbuffersEXT");
  glext_glGenerateMipmapEXT
    = (PFNGLGENERATEMIPMAPEXTPROC)load (userptr, "glGenerateMipmapEXT");
  glext_glGetFramebufferAttachmentParameterivEXT
    = (PFNGLGETFRAMEBUFFERATTACHMENTPARAMETERIVEXTPROC)load (
      userptr, "glGetFramebufferAttachmentParameterivEXT");
  glext_glGetRenderbufferParameterivEXT
    = (PFNGLGETRENDERBUFFERPARAMETERIVEXTPROC)load (
      userptr, "glGetRenderbufferParameterivEXT");
  glext_glIsFramebufferEXT
    = (PFNGLISFRAMEBUFFEREXTPROC)load (userptr, "glIsFramebufferEXT");
  glext_glIsRenderbufferEXT
    = (PFNGLISRENDERBUFFEREXTPROC)load (userptr, "glIsRenderbufferEXT");
  glext_glRenderbufferStorageEXT = (PFNGLRENDERBUFFERSTORAGEEXTPROC)load (
    userptr, "glRenderbufferStorageEXT");
}
static void
glext_gl_load_GL_EXT_geometry_shader4 (GLEXTuserptrloadfunc load,
                                       void* userptr) {
  if (!GLEXT_GL_EXT_geometry_shader4)
    return;
  glext_glProgramParameteriEXT
    = (PFNGLPROGRAMPARAMETERIEXTPROC)load (userptr, "glProgramParameteriEXT");
}
static void
glext_gl_load_GL_EXT_gpu_program_parameters (GLEXTuserptrloadfunc load,
                                             void* userptr) {
  if (!GLEXT_GL_EXT_gpu_program_parameters)
    return;
  glext_glProgramEnvParameters4fvEXT
    = (PFNGLPROGRAMENVPARAMETERS4FVEXTPROC)load (
      userptr, "glProgramEnvParameters4fvEXT");
  glext_glProgramLocalParameters4fvEXT
    = (PFNGLPROGRAMLOCALPARAMETERS4FVEXTPROC)load (
      userptr, "glProgramLocalParameters4fvEXT");
}
static void
glext_gl_load_GL_EXT_gpu_shader4 (GLEXTuserptrloadfunc load, void* userptr) {
  if (!GLEXT_GL_EXT_gpu_shader4)
    return;
  glext_glBindFragDataLocationEXT = (PFNGLBINDFRAGDATALOCATIONEXTPROC)load (
    userptr, "glBindFragDataLocationEXT");
  glext_glGetFragDataLocationEXT = (PFNGLGETFRAGDATALOCATIONEXTPROC)load (
    userptr, "glGetFragDataLocationEXT");
  glext_glGetUniformuivEXT
    = (PFNGLGETUNIFORMUIVEXTPROC)load (userptr, "glGetUniformuivEXT");
  glext_glGetVertexAttribIivEXT = (PFNGLGETVERTEXATTRIBIIVEXTPROC)load (
    userptr, "glGetVertexAttribIivEXT");
  glext_glGetVertexAttribIuivEXT = (PFNGLGETVERTEXATTRIBIUIVEXTPROC)load (
    userptr, "glGetVertexAttribIuivEXT");
  glext_glUniform1uiEXT
    = (PFNGLUNIFORM1UIEXTPROC)load (userptr, "glUniform1uiEXT");
  glext_glUniform1uivEXT
    = (PFNGLUNIFORM1UIVEXTPROC)load (userptr, "glUniform1uivEXT");
  glext_glUniform2uiEXT
    = (PFNGLUNIFORM2UIEXTPROC)load (userptr, "glUniform2uiEXT");
  glext_glUniform2uivEXT
    = (PFNGLUNIFORM2UIVEXTPROC)load (userptr, "glUniform2uivEXT");
  glext_glUniform3uiEXT
    = (PFNGLUNIFORM3UIEXTPROC)load (userptr, "glUniform3uiEXT");
  glext_glUniform3uivEXT
    = (PFNGLUNIFORM3UIVEXTPROC)load (userptr, "glUniform3uivEXT");
  glext_glUniform4uiEXT
    = (PFNGLUNIFORM4UIEXTPROC)load (userptr, "glUniform4uiEXT");
  glext_glUniform4uivEXT
    = (PFNGLUNIFORM4UIVEXTPROC)load (userptr, "glUniform4uivEXT");
  glext_glVertexAttribI1iEXT
    = (PFNGLVERTEXATTRIBI1IEXTPROC)load (userptr, "glVertexAttribI1iEXT");
  glext_glVertexAttribI1ivEXT
    = (PFNGLVERTEXATTRIBI1IVEXTPROC)load (userptr, "glVertexAttribI1ivEXT");
  glext_glVertexAttribI1uiEXT
    = (PFNGLVERTEXATTRIBI1UIEXTPROC)load (userptr, "glVertexAttribI1uiEXT");
  glext_glVertexAttribI1uivEXT
    = (PFNGLVERTEXATTRIBI1UIVEXTPROC)load (userptr, "glVertexAttribI1uivEXT");
  glext_glVertexAttribI2iEXT
    = (PFNGLVERTEXATTRIBI2IEXTPROC)load (userptr, "glVertexAttribI2iEXT");
  glext_glVertexAttribI2ivEXT
    = (PFNGLVERTEXATTRIBI2IVEXTPROC)load (userptr, "glVertexAttribI2ivEXT");
  glext_glVertexAttribI2uiEXT
    = (PFNGLVERTEXATTRIBI2UIEXTPROC)load (userptr, "glVertexAttribI2uiEXT");
  glext_glVertexAttribI2uivEXT
    = (PFNGLVERTEXATTRIBI2UIVEXTPROC)load (userptr, "glVertexAttribI2uivEXT");
  glext_glVertexAttribI3iEXT
    = (PFNGLVERTEXATTRIBI3IEXTPROC)load (userptr, "glVertexAttribI3iEXT");
  glext_glVertexAttribI3ivEXT
    = (PFNGLVERTEXATTRIBI3IVEXTPROC)load (userptr, "glVertexAttribI3ivEXT");
  glext_glVertexAttribI3uiEXT
    = (PFNGLVERTEXATTRIBI3UIEXTPROC)load (userptr, "glVertexAttribI3uiEXT");
  glext_glVertexAttribI3uivEXT
    = (PFNGLVERTEXATTRIBI3UIVEXTPROC)load (userptr, "glVertexAttribI3uivEXT");
  glext_glVertexAttribI4bvEXT
    = (PFNGLVERTEXATTRIBI4BVEXTPROC)load (userptr, "glVertexAttribI4bvEXT");
  glext_glVertexAttribI4iEXT
    = (PFNGLVERTEXATTRIBI4IEXTPROC)load (userptr, "glVertexAttribI4iEXT");
  glext_glVertexAttribI4ivEXT
    = (PFNGLVERTEXATTRIBI4IVEXTPROC)load (userptr, "glVertexAttribI4ivEXT");
  glext_glVertexAttribI4svEXT
    = (PFNGLVERTEXATTRIBI4SVEXTPROC)load (userptr, "glVertexAttribI4svEXT");
  glext_glVertexAttribI4ubvEXT
    = (PFNGLVERTEXATTRIBI4UBVEXTPROC)load (userptr, "glVertexAttribI4ubvEXT");
  glext_glVertexAttribI4uiEXT
    = (PFNGLVERTEXATTRIBI4UIEXTPROC)load (userptr, "glVertexAttribI4uiEXT");
  glext_glVertexAttribI4uivEXT
    = (PFNGLVERTEXATTRIBI4UIVEXTPROC)load (userptr, "glVertexAttribI4uivEXT");
  glext_glVertexAttribI4usvEXT
    = (PFNGLVERTEXATTRIBI4USVEXTPROC)load (userptr, "glVertexAttribI4usvEXT");
  glext_glVertexAttribIPointerEXT = (PFNGLVERTEXATTRIBIPOINTEREXTPROC)load (
    userptr, "glVertexAttribIPointerEXT");
}
static void
glext_gl_load_GL_EXT_histogram (GLEXTuserptrloadfunc load, void* userptr) {
  if (!GLEXT_GL_EXT_histogram)
    return;
  glext_glGetHistogramEXT
    = (PFNGLGETHISTOGRAMEXTPROC)load (userptr, "glGetHistogramEXT");
  glext_glGetHistogramParameterfvEXT
    = (PFNGLGETHISTOGRAMPARAMETERFVEXTPROC)load (
      userptr, "glGetHistogramParameterfvEXT");
  glext_glGetHistogramParameterivEXT
    = (PFNGLGETHISTOGRAMPARAMETERIVEXTPROC)load (
      userptr, "glGetHistogramParameterivEXT");
  glext_glGetMinmaxEXT
    = (PFNGLGETMINMAXEXTPROC)load (userptr, "glGetMinmaxEXT");
  glext_glGetMinmaxParameterfvEXT = (PFNGLGETMINMAXPARAMETERFVEXTPROC)load (
    userptr, "glGetMinmaxParameterfvEXT");
  glext_glGetMinmaxParameterivEXT = (PFNGLGETMINMAXPARAMETERIVEXTPROC)load (
    userptr, "glGetMinmaxParameterivEXT");
  glext_glHistogramEXT
    = (PFNGLHISTOGRAMEXTPROC)load (userptr, "glHistogramEXT");
  glext_glMinmaxEXT = (PFNGLMINMAXEXTPROC)load (userptr, "glMinmaxEXT");
  glext_glResetHistogramEXT
    = (PFNGLRESETHISTOGRAMEXTPROC)load (userptr, "glResetHistogramEXT");
  glext_glResetMinmaxEXT
    = (PFNGLRESETMINMAXEXTPROC)load (userptr, "glResetMinmaxEXT");
}
static void
glext_gl_load_GL_EXT_index_func (GLEXTuserptrloadfunc load, void* userptr) {
  if (!GLEXT_GL_EXT_index_func)
    return;
  glext_glIndexFuncEXT
    = (PFNGLINDEXFUNCEXTPROC)load (userptr, "glIndexFuncEXT");
}
static void
glext_gl_load_GL_EXT_index_material (GLEXTuserptrloadfunc load,
                                     void* userptr) {
  if (!GLEXT_GL_EXT_index_material)
    return;
  glext_glIndexMaterialEXT
    = (PFNGLINDEXMATERIALEXTPROC)load (userptr, "glIndexMaterialEXT");
}
static void
glext_gl_load_GL_EXT_light_texture (GLEXTuserptrloadfunc load, void* userptr) {
  if (!GLEXT_GL_EXT_light_texture)
    return;
  glext_glApplyTextureEXT
    = (PFNGLAPPLYTEXTUREEXTPROC)load (userptr, "glApplyTextureEXT");
  glext_glTextureLightEXT
    = (PFNGLTEXTURELIGHTEXTPROC)load (userptr, "glTextureLightEXT");
  glext_glTextureMaterialEXT
    = (PFNGLTEXTUREMATERIALEXTPROC)load (userptr, "glTextureMaterialEXT");
}
static void
glext_gl_load_GL_EXT_memory_object (GLEXTuserptrloadfunc load, void* userptr) {
  if (!GLEXT_GL_EXT_memory_object)
    return;
  glext_glBufferStorageMemEXT
    = (PFNGLBUFFERSTORAGEMEMEXTPROC)load (userptr, "glBufferStorageMemEXT");
  glext_glCreateMemoryObjectsEXT = (PFNGLCREATEMEMORYOBJECTSEXTPROC)load (
    userptr, "glCreateMemoryObjectsEXT");
  glext_glDeleteMemoryObjectsEXT = (PFNGLDELETEMEMORYOBJECTSEXTPROC)load (
    userptr, "glDeleteMemoryObjectsEXT");
  glext_glGetMemoryObjectParameterivEXT
    = (PFNGLGETMEMORYOBJECTPARAMETERIVEXTPROC)load (
      userptr, "glGetMemoryObjectParameterivEXT");
  glext_glGetUnsignedBytei_vEXT = (PFNGLGETUNSIGNEDBYTEI_VEXTPROC)load (
    userptr, "glGetUnsignedBytei_vEXT");
  glext_glGetUnsignedBytevEXT
    = (PFNGLGETUNSIGNEDBYTEVEXTPROC)load (userptr, "glGetUnsignedBytevEXT");
  glext_glIsMemoryObjectEXT
    = (PFNGLISMEMORYOBJECTEXTPROC)load (userptr, "glIsMemoryObjectEXT");
  glext_glMemoryObjectParameterivEXT
    = (PFNGLMEMORYOBJECTPARAMETERIVEXTPROC)load (
      userptr, "glMemoryObjectParameterivEXT");
  glext_glNamedBufferStorageMemEXT = (PFNGLNAMEDBUFFERSTORAGEMEMEXTPROC)load (
    userptr, "glNamedBufferStorageMemEXT");
  glext_glTexStorageMem1DEXT
    = (PFNGLTEXSTORAGEMEM1DEXTPROC)load (userptr, "glTexStorageMem1DEXT");
  glext_glTexStorageMem2DEXT
    = (PFNGLTEXSTORAGEMEM2DEXTPROC)load (userptr, "glTexStorageMem2DEXT");
  glext_glTexStorageMem2DMultisampleEXT
    = (PFNGLTEXSTORAGEMEM2DMULTISAMPLEEXTPROC)load (
      userptr, "glTexStorageMem2DMultisampleEXT");
  glext_glTexStorageMem3DEXT
    = (PFNGLTEXSTORAGEMEM3DEXTPROC)load (userptr, "glTexStorageMem3DEXT");
  glext_glTexStorageMem3DMultisampleEXT
    = (PFNGLTEXSTORAGEMEM3DMULTISAMPLEEXTPROC)load (
      userptr, "glTexStorageMem3DMultisampleEXT");
  glext_glTextureStorageMem1DEXT = (PFNGLTEXTURESTORAGEMEM1DEXTPROC)load (
    userptr, "glTextureStorageMem1DEXT");
  glext_glTextureStorageMem2DEXT = (PFNGLTEXTURESTORAGEMEM2DEXTPROC)load (
    userptr, "glTextureStorageMem2DEXT");
  glext_glTextureStorageMem2DMultisampleEXT
    = (PFNGLTEXTURESTORAGEMEM2DMULTISAMPLEEXTPROC)load (
      userptr, "glTextureStorageMem2DMultisampleEXT");
  glext_glTextureStorageMem3DEXT = (PFNGLTEXTURESTORAGEMEM3DEXTPROC)load (
    userptr, "glTextureStorageMem3DEXT");
  glext_glTextureStorageMem3DMultisampleEXT
    = (PFNGLTEXTURESTORAGEMEM3DMULTISAMPLEEXTPROC)load (
      userptr, "glTextureStorageMem3DMultisampleEXT");
}
static void
glext_gl_load_GL_EXT_memory_object_fd (GLEXTuserptrloadfunc load,
                                       void* userptr) {
  if (!GLEXT_GL_EXT_memory_object_fd)
    return;
  glext_glImportMemoryFdEXT
    = (PFNGLIMPORTMEMORYFDEXTPROC)load (userptr, "glImportMemoryFdEXT");
}
static void
glext_gl_load_GL_EXT_memory_object_win32 (GLEXTuserptrloadfunc load,
                                          void* userptr) {
  if (!GLEXT_GL_EXT_memory_object_win32)
    return;
  glext_glImportMemoryWin32HandleEXT
    = (PFNGLIMPORTMEMORYWIN32HANDLEEXTPROC)load (
      userptr, "glImportMemoryWin32HandleEXT");
  glext_glImportMemoryWin32NameEXT = (PFNGLIMPORTMEMORYWIN32NAMEEXTPROC)load (
    userptr, "glImportMemoryWin32NameEXT");
}
static void
glext_gl_load_GL_EXT_mesh_shader (GLEXTuserptrloadfunc load, void* userptr) {
  if (!GLEXT_GL_EXT_mesh_shader)
    return;
  glext_glDrawMeshTasksEXT
    = (PFNGLDRAWMESHTASKSEXTPROC)load (userptr, "glDrawMeshTasksEXT");
  glext_glDrawMeshTasksIndirectEXT = (PFNGLDRAWMESHTASKSINDIRECTEXTPROC)load (
    userptr, "glDrawMeshTasksIndirectEXT");
  glext_glMultiDrawMeshTasksIndirectCountEXT
    = (PFNGLMULTIDRAWMESHTASKSINDIRECTCOUNTEXTPROC)load (
      userptr, "glMultiDrawMeshTasksIndirectCountEXT");
  glext_glMultiDrawMeshTasksIndirectEXT
    = (PFNGLMULTIDRAWMESHTASKSINDIRECTEXTPROC)load (
      userptr, "glMultiDrawMeshTasksIndirectEXT");
}
static void
glext_gl_load_GL_EXT_multi_draw_arrays (GLEXTuserptrloadfunc load,
                                        void* userptr) {
  if (!GLEXT_GL_EXT_multi_draw_arrays)
    return;
  glext_glMultiDrawArraysEXT
    = (PFNGLMULTIDRAWARRAYSEXTPROC)load (userptr, "glMultiDrawArraysEXT");
  glext_glMultiDrawElementsEXT
    = (PFNGLMULTIDRAWELEMENTSEXTPROC)load (userptr, "glMultiDrawElementsEXT");
}
static void
glext_gl_load_GL_EXT_multisample (GLEXTuserptrloadfunc load, void* userptr) {
  if (!GLEXT_GL_EXT_multisample)
    return;
  glext_glSampleMaskEXT
    = (PFNGLSAMPLEMASKEXTPROC)load (userptr, "glSampleMaskEXT");
  glext_glSamplePatternEXT
    = (PFNGLSAMPLEPATTERNEXTPROC)load (userptr, "glSamplePatternEXT");
}
static void
glext_gl_load_GL_EXT_paletted_texture (GLEXTuserptrloadfunc load,
                                       void* userptr) {
  if (!GLEXT_GL_EXT_paletted_texture)
    return;
  glext_glColorTableEXT
    = (PFNGLCOLORTABLEEXTPROC)load (userptr, "glColorTableEXT");
  glext_glGetColorTableEXT
    = (PFNGLGETCOLORTABLEEXTPROC)load (userptr, "glGetColorTableEXT");
  glext_glGetColorTableParameterfvEXT
    = (PFNGLGETCOLORTABLEPARAMETERFVEXTPROC)load (
      userptr, "glGetColorTableParameterfvEXT");
  glext_glGetColorTableParameterivEXT
    = (PFNGLGETCOLORTABLEPARAMETERIVEXTPROC)load (
      userptr, "glGetColorTableParameterivEXT");
}
static void
glext_gl_load_GL_EXT_pixel_transform (GLEXTuserptrloadfunc load,
                                      void* userptr) {
  if (!GLEXT_GL_EXT_pixel_transform)
    return;
  glext_glGetPixelTransformParameterfvEXT
    = (PFNGLGETPIXELTRANSFORMPARAMETERFVEXTPROC)load (
      userptr, "glGetPixelTransformParameterfvEXT");
  glext_glGetPixelTransformParameterivEXT
    = (PFNGLGETPIXELTRANSFORMPARAMETERIVEXTPROC)load (
      userptr, "glGetPixelTransformParameterivEXT");
  glext_glPixelTransformParameterfEXT
    = (PFNGLPIXELTRANSFORMPARAMETERFEXTPROC)load (
      userptr, "glPixelTransformParameterfEXT");
  glext_glPixelTransformParameterfvEXT
    = (PFNGLPIXELTRANSFORMPARAMETERFVEXTPROC)load (
      userptr, "glPixelTransformParameterfvEXT");
  glext_glPixelTransformParameteriEXT
    = (PFNGLPIXELTRANSFORMPARAMETERIEXTPROC)load (
      userptr, "glPixelTransformParameteriEXT");
  glext_glPixelTransformParameterivEXT
    = (PFNGLPIXELTRANSFORMPARAMETERIVEXTPROC)load (
      userptr, "glPixelTransformParameterivEXT");
}
static void
glext_gl_load_GL_EXT_point_parameters (GLEXTuserptrloadfunc load,
                                       void* userptr) {
  if (!GLEXT_GL_EXT_point_parameters)
    return;
  glext_glPointParameterfEXT
    = (PFNGLPOINTPARAMETERFEXTPROC)load (userptr, "glPointParameterfEXT");
  glext_glPointParameterfvEXT
    = (PFNGLPOINTPARAMETERFVEXTPROC)load (userptr, "glPointParameterfvEXT");
}
static void
glext_gl_load_GL_EXT_polygon_offset (GLEXTuserptrloadfunc load,
                                     void* userptr) {
  if (!GLEXT_GL_EXT_polygon_offset)
    return;
  glext_glPolygonOffsetEXT
    = (PFNGLPOLYGONOFFSETEXTPROC)load (userptr, "glPolygonOffsetEXT");
}
static void
glext_gl_load_GL_EXT_polygon_offset_clamp (GLEXTuserptrloadfunc load,
                                           void* userptr) {
  if (!GLEXT_GL_EXT_polygon_offset_clamp)
    return;
  glext_glPolygonOffsetClampEXT = (PFNGLPOLYGONOFFSETCLAMPEXTPROC)load (
    userptr, "glPolygonOffsetClampEXT");
}
static void
glext_gl_load_GL_EXT_provoking_vertex (GLEXTuserptrloadfunc load,
                                       void* userptr) {
  if (!GLEXT_GL_EXT_provoking_vertex)
    return;
  glext_glProvokingVertexEXT
    = (PFNGLPROVOKINGVERTEXEXTPROC)load (userptr, "glProvokingVertexEXT");
}
static void
glext_gl_load_GL_EXT_raster_multisample (GLEXTuserptrloadfunc load,
                                         void* userptr) {
  if (!GLEXT_GL_EXT_raster_multisample)
    return;
  glext_glRasterSamplesEXT
    = (PFNGLRASTERSAMPLESEXTPROC)load (userptr, "glRasterSamplesEXT");
}
static void
glext_gl_load_GL_EXT_secondary_color (GLEXTuserptrloadfunc load,
                                      void* userptr) {
  if (!GLEXT_GL_EXT_secondary_color)
    return;
  glext_glSecondaryColor3bEXT
    = (PFNGLSECONDARYCOLOR3BEXTPROC)load (userptr, "glSecondaryColor3bEXT");
  glext_glSecondaryColor3bvEXT
    = (PFNGLSECONDARYCOLOR3BVEXTPROC)load (userptr, "glSecondaryColor3bvEXT");
  glext_glSecondaryColor3dEXT
    = (PFNGLSECONDARYCOLOR3DEXTPROC)load (userptr, "glSecondaryColor3dEXT");
  glext_glSecondaryColor3dvEXT
    = (PFNGLSECONDARYCOLOR3DVEXTPROC)load (userptr, "glSecondaryColor3dvEXT");
  glext_glSecondaryColor3fEXT
    = (PFNGLSECONDARYCOLOR3FEXTPROC)load (userptr, "glSecondaryColor3fEXT");
  glext_glSecondaryColor3fvEXT
    = (PFNGLSECONDARYCOLOR3FVEXTPROC)load (userptr, "glSecondaryColor3fvEXT");
  glext_glSecondaryColor3iEXT
    = (PFNGLSECONDARYCOLOR3IEXTPROC)load (userptr, "glSecondaryColor3iEXT");
  glext_glSecondaryColor3ivEXT
    = (PFNGLSECONDARYCOLOR3IVEXTPROC)load (userptr, "glSecondaryColor3ivEXT");
  glext_glSecondaryColor3sEXT
    = (PFNGLSECONDARYCOLOR3SEXTPROC)load (userptr, "glSecondaryColor3sEXT");
  glext_glSecondaryColor3svEXT
    = (PFNGLSECONDARYCOLOR3SVEXTPROC)load (userptr, "glSecondaryColor3svEXT");
  glext_glSecondaryColor3ubEXT
    = (PFNGLSECONDARYCOLOR3UBEXTPROC)load (userptr, "glSecondaryColor3ubEXT");
  glext_glSecondaryColor3ubvEXT = (PFNGLSECONDARYCOLOR3UBVEXTPROC)load (
    userptr, "glSecondaryColor3ubvEXT");
  glext_glSecondaryColor3uiEXT
    = (PFNGLSECONDARYCOLOR3UIEXTPROC)load (userptr, "glSecondaryColor3uiEXT");
  glext_glSecondaryColor3uivEXT = (PFNGLSECONDARYCOLOR3UIVEXTPROC)load (
    userptr, "glSecondaryColor3uivEXT");
  glext_glSecondaryColor3usEXT
    = (PFNGLSECONDARYCOLOR3USEXTPROC)load (userptr, "glSecondaryColor3usEXT");
  glext_glSecondaryColor3usvEXT = (PFNGLSECONDARYCOLOR3USVEXTPROC)load (
    userptr, "glSecondaryColor3usvEXT");
  glext_glSecondaryColorPointerEXT = (PFNGLSECONDARYCOLORPOINTEREXTPROC)load (
    userptr, "glSecondaryColorPointerEXT");
}
static void
glext_gl_load_GL_EXT_semaphore (GLEXTuserptrloadfunc load, void* userptr) {
  if (!GLEXT_GL_EXT_semaphore)
    return;
  glext_glDeleteSemaphoresEXT
    = (PFNGLDELETESEMAPHORESEXTPROC)load (userptr, "glDeleteSemaphoresEXT");
  glext_glGenSemaphoresEXT
    = (PFNGLGENSEMAPHORESEXTPROC)load (userptr, "glGenSemaphoresEXT");
  glext_glGetSemaphoreParameterui64vEXT
    = (PFNGLGETSEMAPHOREPARAMETERUI64VEXTPROC)load (
      userptr, "glGetSemaphoreParameterui64vEXT");
  glext_glGetUnsignedBytei_vEXT = (PFNGLGETUNSIGNEDBYTEI_VEXTPROC)load (
    userptr, "glGetUnsignedBytei_vEXT");
  glext_glGetUnsignedBytevEXT
    = (PFNGLGETUNSIGNEDBYTEVEXTPROC)load (userptr, "glGetUnsignedBytevEXT");
  glext_glIsSemaphoreEXT
    = (PFNGLISSEMAPHOREEXTPROC)load (userptr, "glIsSemaphoreEXT");
  glext_glSemaphoreParameterui64vEXT
    = (PFNGLSEMAPHOREPARAMETERUI64VEXTPROC)load (
      userptr, "glSemaphoreParameterui64vEXT");
  glext_glSignalSemaphoreEXT
    = (PFNGLSIGNALSEMAPHOREEXTPROC)load (userptr, "glSignalSemaphoreEXT");
  glext_glWaitSemaphoreEXT
    = (PFNGLWAITSEMAPHOREEXTPROC)load (userptr, "glWaitSemaphoreEXT");
}
static void
glext_gl_load_GL_EXT_semaphore_fd (GLEXTuserptrloadfunc load, void* userptr) {
  if (!GLEXT_GL_EXT_semaphore_fd)
    return;
  glext_glImportSemaphoreFdEXT
    = (PFNGLIMPORTSEMAPHOREFDEXTPROC)load (userptr, "glImportSemaphoreFdEXT");
}
static void
glext_gl_load_GL_EXT_semaphore_win32 (GLEXTuserptrloadfunc load,
                                      void* userptr) {
  if (!GLEXT_GL_EXT_semaphore_win32)
    return;
  glext_glImportSemaphoreWin32HandleEXT
    = (PFNGLIMPORTSEMAPHOREWIN32HANDLEEXTPROC)load (
      userptr, "glImportSemaphoreWin32HandleEXT");
  glext_glImportSemaphoreWin32NameEXT
    = (PFNGLIMPORTSEMAPHOREWIN32NAMEEXTPROC)load (
      userptr, "glImportSemaphoreWin32NameEXT");
}
static void
glext_gl_load_GL_EXT_separate_shader_objects (GLEXTuserptrloadfunc load,
                                              void* userptr) {
  if (!GLEXT_GL_EXT_separate_shader_objects)
    return;
  glext_glActiveProgramEXT
    = (PFNGLACTIVEPROGRAMEXTPROC)load (userptr, "glActiveProgramEXT");
  glext_glCreateShaderProgramEXT = (PFNGLCREATESHADERPROGRAMEXTPROC)load (
    userptr, "glCreateShaderProgramEXT");
  glext_glUseShaderProgramEXT
    = (PFNGLUSESHADERPROGRAMEXTPROC)load (userptr, "glUseShaderProgramEXT");
}
static void
glext_gl_load_GL_EXT_shader_framebuffer_fetch_non_coherent (
  GLEXTuserptrloadfunc load, void* userptr) {
  if (!GLEXT_GL_EXT_shader_framebuffer_fetch_non_coherent)
    return;
  glext_glFramebufferFetchBarrierEXT
    = (PFNGLFRAMEBUFFERFETCHBARRIEREXTPROC)load (
      userptr, "glFramebufferFetchBarrierEXT");
}
static void
glext_gl_load_GL_EXT_shader_image_load_store (GLEXTuserptrloadfunc load,
                                              void* userptr) {
  if (!GLEXT_GL_EXT_shader_image_load_store)
    return;
  glext_glBindImageTextureEXT
    = (PFNGLBINDIMAGETEXTUREEXTPROC)load (userptr, "glBindImageTextureEXT");
  glext_glMemoryBarrierEXT
    = (PFNGLMEMORYBARRIEREXTPROC)load (userptr, "glMemoryBarrierEXT");
}
static void
glext_gl_load_GL_EXT_stencil_clear_tag (GLEXTuserptrloadfunc load,
                                        void* userptr) {
  if (!GLEXT_GL_EXT_stencil_clear_tag)
    return;
  glext_glStencilClearTagEXT
    = (PFNGLSTENCILCLEARTAGEXTPROC)load (userptr, "glStencilClearTagEXT");
}
static void
glext_gl_load_GL_EXT_stencil_two_side (GLEXTuserptrloadfunc load,
                                       void* userptr) {
  if (!GLEXT_GL_EXT_stencil_two_side)
    return;
  glext_glActiveStencilFaceEXT
    = (PFNGLACTIVESTENCILFACEEXTPROC)load (userptr, "glActiveStencilFaceEXT");
}
static void
glext_gl_load_GL_EXT_subtexture (GLEXTuserptrloadfunc load, void* userptr) {
  if (!GLEXT_GL_EXT_subtexture)
    return;
  glext_glTexSubImage1DEXT
    = (PFNGLTEXSUBIMAGE1DEXTPROC)load (userptr, "glTexSubImage1DEXT");
  glext_glTexSubImage2DEXT
    = (PFNGLTEXSUBIMAGE2DEXTPROC)load (userptr, "glTexSubImage2DEXT");
}
static void
glext_gl_load_GL_EXT_texture3D (GLEXTuserptrloadfunc load, void* userptr) {
  if (!GLEXT_GL_EXT_texture3D)
    return;
  glext_glTexImage3DEXT
    = (PFNGLTEXIMAGE3DEXTPROC)load (userptr, "glTexImage3DEXT");
  glext_glTexSubImage3DEXT
    = (PFNGLTEXSUBIMAGE3DEXTPROC)load (userptr, "glTexSubImage3DEXT");
}
static void
glext_gl_load_GL_EXT_texture_array (GLEXTuserptrloadfunc load, void* userptr) {
  if (!GLEXT_GL_EXT_texture_array)
    return;
  glext_glFramebufferTextureLayerEXT
    = (PFNGLFRAMEBUFFERTEXTURELAYEREXTPROC)load (
      userptr, "glFramebufferTextureLayerEXT");
}
static void
glext_gl_load_GL_EXT_texture_buffer_object (GLEXTuserptrloadfunc load,
                                            void* userptr) {
  if (!GLEXT_GL_EXT_texture_buffer_object)
    return;
  glext_glTexBufferEXT
    = (PFNGLTEXBUFFEREXTPROC)load (userptr, "glTexBufferEXT");
}
static void
glext_gl_load_GL_EXT_texture_integer (GLEXTuserptrloadfunc load,
                                      void* userptr) {
  if (!GLEXT_GL_EXT_texture_integer)
    return;
  glext_glClearColorIiEXT
    = (PFNGLCLEARCOLORIIEXTPROC)load (userptr, "glClearColorIiEXT");
  glext_glClearColorIuiEXT
    = (PFNGLCLEARCOLORIUIEXTPROC)load (userptr, "glClearColorIuiEXT");
  glext_glGetTexParameterIivEXT = (PFNGLGETTEXPARAMETERIIVEXTPROC)load (
    userptr, "glGetTexParameterIivEXT");
  glext_glGetTexParameterIuivEXT = (PFNGLGETTEXPARAMETERIUIVEXTPROC)load (
    userptr, "glGetTexParameterIuivEXT");
  glext_glTexParameterIivEXT
    = (PFNGLTEXPARAMETERIIVEXTPROC)load (userptr, "glTexParameterIivEXT");
  glext_glTexParameterIuivEXT
    = (PFNGLTEXPARAMETERIUIVEXTPROC)load (userptr, "glTexParameterIuivEXT");
}
static void
glext_gl_load_GL_EXT_texture_object (GLEXTuserptrloadfunc load,
                                     void* userptr) {
  if (!GLEXT_GL_EXT_texture_object)
    return;
  glext_glAreTexturesResidentEXT = (PFNGLARETEXTURESRESIDENTEXTPROC)load (
    userptr, "glAreTexturesResidentEXT");
  glext_glBindTextureEXT
    = (PFNGLBINDTEXTUREEXTPROC)load (userptr, "glBindTextureEXT");
  glext_glDeleteTexturesEXT
    = (PFNGLDELETETEXTURESEXTPROC)load (userptr, "glDeleteTexturesEXT");
  glext_glGenTexturesEXT
    = (PFNGLGENTEXTURESEXTPROC)load (userptr, "glGenTexturesEXT");
  glext_glIsTextureEXT
    = (PFNGLISTEXTUREEXTPROC)load (userptr, "glIsTextureEXT");
  glext_glPrioritizeTexturesEXT = (PFNGLPRIORITIZETEXTURESEXTPROC)load (
    userptr, "glPrioritizeTexturesEXT");
}
static void
glext_gl_load_GL_EXT_texture_perturb_normal (GLEXTuserptrloadfunc load,
                                             void* userptr) {
  if (!GLEXT_GL_EXT_texture_perturb_normal)
    return;
  glext_glTextureNormalEXT
    = (PFNGLTEXTURENORMALEXTPROC)load (userptr, "glTextureNormalEXT");
}
static void
glext_gl_load_GL_EXT_texture_storage (GLEXTuserptrloadfunc load,
                                      void* userptr) {
  if (!GLEXT_GL_EXT_texture_storage)
    return;
  glext_glTexStorage1DEXT
    = (PFNGLTEXSTORAGE1DEXTPROC)load (userptr, "glTexStorage1DEXT");
  glext_glTexStorage2DEXT
    = (PFNGLTEXSTORAGE2DEXTPROC)load (userptr, "glTexStorage2DEXT");
  glext_glTexStorage3DEXT
    = (PFNGLTEXSTORAGE3DEXTPROC)load (userptr, "glTexStorage3DEXT");
  glext_glTextureStorage1DEXT
    = (PFNGLTEXTURESTORAGE1DEXTPROC)load (userptr, "glTextureStorage1DEXT");
  glext_glTextureStorage2DEXT
    = (PFNGLTEXTURESTORAGE2DEXTPROC)load (userptr, "glTextureStorage2DEXT");
  glext_glTextureStorage3DEXT
    = (PFNGLTEXTURESTORAGE3DEXTPROC)load (userptr, "glTextureStorage3DEXT");
}
static void
glext_gl_load_GL_EXT_timer_query (GLEXTuserptrloadfunc load, void* userptr) {
  if (!GLEXT_GL_EXT_timer_query)
    return;
  glext_glGetQueryObjecti64vEXT = (PFNGLGETQUERYOBJECTI64VEXTPROC)load (
    userptr, "glGetQueryObjecti64vEXT");
  glext_glGetQueryObjectui64vEXT = (PFNGLGETQUERYOBJECTUI64VEXTPROC)load (
    userptr, "glGetQueryObjectui64vEXT");
}
static void
glext_gl_load_GL_EXT_transform_feedback (GLEXTuserptrloadfunc load,
                                         void* userptr) {
  if (!GLEXT_GL_EXT_transform_feedback)
    return;
  glext_glBeginTransformFeedbackEXT
    = (PFNGLBEGINTRANSFORMFEEDBACKEXTPROC)load (userptr,
                                                "glBeginTransformFeedbackEXT");
  glext_glBindBufferBaseEXT
    = (PFNGLBINDBUFFERBASEEXTPROC)load (userptr, "glBindBufferBaseEXT");
  glext_glBindBufferOffsetEXT
    = (PFNGLBINDBUFFEROFFSETEXTPROC)load (userptr, "glBindBufferOffsetEXT");
  glext_glBindBufferRangeEXT
    = (PFNGLBINDBUFFERRANGEEXTPROC)load (userptr, "glBindBufferRangeEXT");
  glext_glEndTransformFeedbackEXT = (PFNGLENDTRANSFORMFEEDBACKEXTPROC)load (
    userptr, "glEndTransformFeedbackEXT");
  glext_glGetTransformFeedbackVaryingEXT
    = (PFNGLGETTRANSFORMFEEDBACKVARYINGEXTPROC)load (
      userptr, "glGetTransformFeedbackVaryingEXT");
  glext_glTransformFeedbackVaryingsEXT
    = (PFNGLTRANSFORMFEEDBACKVARYINGSEXTPROC)load (
      userptr, "glTransformFeedbackVaryingsEXT");
}
static void
glext_gl_load_GL_EXT_vertex_array (GLEXTuserptrloadfunc load, void* userptr) {
  if (!GLEXT_GL_EXT_vertex_array)
    return;
  glext_glArrayElementEXT
    = (PFNGLARRAYELEMENTEXTPROC)load (userptr, "glArrayElementEXT");
  glext_glColorPointerEXT
    = (PFNGLCOLORPOINTEREXTPROC)load (userptr, "glColorPointerEXT");
  glext_glDrawArraysEXT
    = (PFNGLDRAWARRAYSEXTPROC)load (userptr, "glDrawArraysEXT");
  glext_glEdgeFlagPointerEXT
    = (PFNGLEDGEFLAGPOINTEREXTPROC)load (userptr, "glEdgeFlagPointerEXT");
  glext_glGetPointervEXT
    = (PFNGLGETPOINTERVEXTPROC)load (userptr, "glGetPointervEXT");
  glext_glIndexPointerEXT
    = (PFNGLINDEXPOINTEREXTPROC)load (userptr, "glIndexPointerEXT");
  glext_glNormalPointerEXT
    = (PFNGLNORMALPOINTEREXTPROC)load (userptr, "glNormalPointerEXT");
  glext_glTexCoordPointerEXT
    = (PFNGLTEXCOORDPOINTEREXTPROC)load (userptr, "glTexCoordPointerEXT");
  glext_glVertexPointerEXT
    = (PFNGLVERTEXPOINTEREXTPROC)load (userptr, "glVertexPointerEXT");
}
static void
glext_gl_load_GL_EXT_vertex_attrib_64bit (GLEXTuserptrloadfunc load,
                                          void* userptr) {
  if (!GLEXT_GL_EXT_vertex_attrib_64bit)
    return;
  glext_glGetVertexAttribLdvEXT = (PFNGLGETVERTEXATTRIBLDVEXTPROC)load (
    userptr, "glGetVertexAttribLdvEXT");
  glext_glVertexAttribL1dEXT
    = (PFNGLVERTEXATTRIBL1DEXTPROC)load (userptr, "glVertexAttribL1dEXT");
  glext_glVertexAttribL1dvEXT
    = (PFNGLVERTEXATTRIBL1DVEXTPROC)load (userptr, "glVertexAttribL1dvEXT");
  glext_glVertexAttribL2dEXT
    = (PFNGLVERTEXATTRIBL2DEXTPROC)load (userptr, "glVertexAttribL2dEXT");
  glext_glVertexAttribL2dvEXT
    = (PFNGLVERTEXATTRIBL2DVEXTPROC)load (userptr, "glVertexAttribL2dvEXT");
  glext_glVertexAttribL3dEXT
    = (PFNGLVERTEXATTRIBL3DEXTPROC)load (userptr, "glVertexAttribL3dEXT");
  glext_glVertexAttribL3dvEXT
    = (PFNGLVERTEXATTRIBL3DVEXTPROC)load (userptr, "glVertexAttribL3dvEXT");
  glext_glVertexAttribL4dEXT
    = (PFNGLVERTEXATTRIBL4DEXTPROC)load (userptr, "glVertexAttribL4dEXT");
  glext_glVertexAttribL4dvEXT
    = (PFNGLVERTEXATTRIBL4DVEXTPROC)load (userptr, "glVertexAttribL4dvEXT");
  glext_glVertexAttribLPointerEXT = (PFNGLVERTEXATTRIBLPOINTEREXTPROC)load (
    userptr, "glVertexAttribLPointerEXT");
}
static void
glext_gl_load_GL_EXT_vertex_shader (GLEXTuserptrloadfunc load, void* userptr) {
  if (!GLEXT_GL_EXT_vertex_shader)
    return;
  glext_glBeginVertexShaderEXT
    = (PFNGLBEGINVERTEXSHADEREXTPROC)load (userptr, "glBeginVertexShaderEXT");
  glext_glBindLightParameterEXT = (PFNGLBINDLIGHTPARAMETEREXTPROC)load (
    userptr, "glBindLightParameterEXT");
  glext_glBindMaterialParameterEXT = (PFNGLBINDMATERIALPARAMETEREXTPROC)load (
    userptr, "glBindMaterialParameterEXT");
  glext_glBindParameterEXT
    = (PFNGLBINDPARAMETEREXTPROC)load (userptr, "glBindParameterEXT");
  glext_glBindTexGenParameterEXT = (PFNGLBINDTEXGENPARAMETEREXTPROC)load (
    userptr, "glBindTexGenParameterEXT");
  glext_glBindTextureUnitParameterEXT
    = (PFNGLBINDTEXTUREUNITPARAMETEREXTPROC)load (
      userptr, "glBindTextureUnitParameterEXT");
  glext_glBindVertexShaderEXT
    = (PFNGLBINDVERTEXSHADEREXTPROC)load (userptr, "glBindVertexShaderEXT");
  glext_glDeleteVertexShaderEXT = (PFNGLDELETEVERTEXSHADEREXTPROC)load (
    userptr, "glDeleteVertexShaderEXT");
  glext_glDisableVariantClientStateEXT
    = (PFNGLDISABLEVARIANTCLIENTSTATEEXTPROC)load (
      userptr, "glDisableVariantClientStateEXT");
  glext_glEnableVariantClientStateEXT
    = (PFNGLENABLEVARIANTCLIENTSTATEEXTPROC)load (
      userptr, "glEnableVariantClientStateEXT");
  glext_glEndVertexShaderEXT
    = (PFNGLENDVERTEXSHADEREXTPROC)load (userptr, "glEndVertexShaderEXT");
  glext_glExtractComponentEXT
    = (PFNGLEXTRACTCOMPONENTEXTPROC)load (userptr, "glExtractComponentEXT");
  glext_glGenSymbolsEXT
    = (PFNGLGENSYMBOLSEXTPROC)load (userptr, "glGenSymbolsEXT");
  glext_glGenVertexShadersEXT
    = (PFNGLGENVERTEXSHADERSEXTPROC)load (userptr, "glGenVertexShadersEXT");
  glext_glGetInvariantBooleanvEXT = (PFNGLGETINVARIANTBOOLEANVEXTPROC)load (
    userptr, "glGetInvariantBooleanvEXT");
  glext_glGetInvariantFloatvEXT = (PFNGLGETINVARIANTFLOATVEXTPROC)load (
    userptr, "glGetInvariantFloatvEXT");
  glext_glGetInvariantIntegervEXT = (PFNGLGETINVARIANTINTEGERVEXTPROC)load (
    userptr, "glGetInvariantIntegervEXT");
  glext_glGetLocalConstantBooleanvEXT
    = (PFNGLGETLOCALCONSTANTBOOLEANVEXTPROC)load (
      userptr, "glGetLocalConstantBooleanvEXT");
  glext_glGetLocalConstantFloatvEXT
    = (PFNGLGETLOCALCONSTANTFLOATVEXTPROC)load (userptr,
                                                "glGetLocalConstantFloatvEXT");
  glext_glGetLocalConstantIntegervEXT
    = (PFNGLGETLOCALCONSTANTINTEGERVEXTPROC)load (
      userptr, "glGetLocalConstantIntegervEXT");
  glext_glGetVariantBooleanvEXT = (PFNGLGETVARIANTBOOLEANVEXTPROC)load (
    userptr, "glGetVariantBooleanvEXT");
  glext_glGetVariantFloatvEXT
    = (PFNGLGETVARIANTFLOATVEXTPROC)load (userptr, "glGetVariantFloatvEXT");
  glext_glGetVariantIntegervEXT = (PFNGLGETVARIANTINTEGERVEXTPROC)load (
    userptr, "glGetVariantIntegervEXT");
  glext_glGetVariantPointervEXT = (PFNGLGETVARIANTPOINTERVEXTPROC)load (
    userptr, "glGetVariantPointervEXT");
  glext_glInsertComponentEXT
    = (PFNGLINSERTCOMPONENTEXTPROC)load (userptr, "glInsertComponentEXT");
  glext_glIsVariantEnabledEXT
    = (PFNGLISVARIANTENABLEDEXTPROC)load (userptr, "glIsVariantEnabledEXT");
  glext_glSetInvariantEXT
    = (PFNGLSETINVARIANTEXTPROC)load (userptr, "glSetInvariantEXT");
  glext_glSetLocalConstantEXT
    = (PFNGLSETLOCALCONSTANTEXTPROC)load (userptr, "glSetLocalConstantEXT");
  glext_glShaderOp1EXT
    = (PFNGLSHADEROP1EXTPROC)load (userptr, "glShaderOp1EXT");
  glext_glShaderOp2EXT
    = (PFNGLSHADEROP2EXTPROC)load (userptr, "glShaderOp2EXT");
  glext_glShaderOp3EXT
    = (PFNGLSHADEROP3EXTPROC)load (userptr, "glShaderOp3EXT");
  glext_glSwizzleEXT = (PFNGLSWIZZLEEXTPROC)load (userptr, "glSwizzleEXT");
  glext_glVariantPointerEXT
    = (PFNGLVARIANTPOINTEREXTPROC)load (userptr, "glVariantPointerEXT");
  glext_glVariantbvEXT
    = (PFNGLVARIANTBVEXTPROC)load (userptr, "glVariantbvEXT");
  glext_glVariantdvEXT
    = (PFNGLVARIANTDVEXTPROC)load (userptr, "glVariantdvEXT");
  glext_glVariantfvEXT
    = (PFNGLVARIANTFVEXTPROC)load (userptr, "glVariantfvEXT");
  glext_glVariantivEXT
    = (PFNGLVARIANTIVEXTPROC)load (userptr, "glVariantivEXT");
  glext_glVariantsvEXT
    = (PFNGLVARIANTSVEXTPROC)load (userptr, "glVariantsvEXT");
  glext_glVariantubvEXT
    = (PFNGLVARIANTUBVEXTPROC)load (userptr, "glVariantubvEXT");
  glext_glVariantuivEXT
    = (PFNGLVARIANTUIVEXTPROC)load (userptr, "glVariantuivEXT");
  glext_glVariantusvEXT
    = (PFNGLVARIANTUSVEXTPROC)load (userptr, "glVariantusvEXT");
  glext_glWriteMaskEXT
    = (PFNGLWRITEMASKEXTPROC)load (userptr, "glWriteMaskEXT");
}
static void
glext_gl_load_GL_EXT_vertex_weighting (GLEXTuserptrloadfunc load,
                                       void* userptr) {
  if (!GLEXT_GL_EXT_vertex_weighting)
    return;
  glext_glVertexWeightPointerEXT = (PFNGLVERTEXWEIGHTPOINTEREXTPROC)load (
    userptr, "glVertexWeightPointerEXT");
  glext_glVertexWeightfEXT
    = (PFNGLVERTEXWEIGHTFEXTPROC)load (userptr, "glVertexWeightfEXT");
  glext_glVertexWeightfvEXT
    = (PFNGLVERTEXWEIGHTFVEXTPROC)load (userptr, "glVertexWeightfvEXT");
}
static void
glext_gl_load_GL_EXT_win32_keyed_mutex (GLEXTuserptrloadfunc load,
                                        void* userptr) {
  if (!GLEXT_GL_EXT_win32_keyed_mutex)
    return;
  glext_glAcquireKeyedMutexWin32EXT
    = (PFNGLACQUIREKEYEDMUTEXWIN32EXTPROC)load (userptr,
                                                "glAcquireKeyedMutexWin32EXT");
  glext_glReleaseKeyedMutexWin32EXT
    = (PFNGLRELEASEKEYEDMUTEXWIN32EXTPROC)load (userptr,
                                                "glReleaseKeyedMutexWin32EXT");
}
static void
glext_gl_load_GL_EXT_window_rectangles (GLEXTuserptrloadfunc load,
                                        void* userptr) {
  if (!GLEXT_GL_EXT_window_rectangles)
    return;
  glext_glWindowRectanglesEXT
    = (PFNGLWINDOWRECTANGLESEXTPROC)load (userptr, "glWindowRectanglesEXT");
}
static void
glext_gl_load_GL_EXT_x11_sync_object (GLEXTuserptrloadfunc load,
                                      void* userptr) {
  if (!GLEXT_GL_EXT_x11_sync_object)
    return;
  glext_glImportSyncEXT
    = (PFNGLIMPORTSYNCEXTPROC)load (userptr, "glImportSyncEXT");
}
static void
glext_gl_load_GL_GREMEDY_frame_terminator (GLEXTuserptrloadfunc load,
                                           void* userptr) {
  if (!GLEXT_GL_GREMEDY_frame_terminator)
    return;
  glext_glFrameTerminatorGREMEDY = (PFNGLFRAMETERMINATORGREMEDYPROC)load (
    userptr, "glFrameTerminatorGREMEDY");
}
static void
glext_gl_load_GL_GREMEDY_string_marker (GLEXTuserptrloadfunc load,
                                        void* userptr) {
  if (!GLEXT_GL_GREMEDY_string_marker)
    return;
  glext_glStringMarkerGREMEDY
    = (PFNGLSTRINGMARKERGREMEDYPROC)load (userptr, "glStringMarkerGREMEDY");
}
static void
glext_gl_load_GL_HP_image_transform (GLEXTuserptrloadfunc load,
                                     void* userptr) {
  if (!GLEXT_GL_HP_image_transform)
    return;
  glext_glGetImageTransformParameterfvHP
    = (PFNGLGETIMAGETRANSFORMPARAMETERFVHPPROC)load (
      userptr, "glGetImageTransformParameterfvHP");
  glext_glGetImageTransformParameterivHP
    = (PFNGLGETIMAGETRANSFORMPARAMETERIVHPPROC)load (
      userptr, "glGetImageTransformParameterivHP");
  glext_glImageTransformParameterfHP
    = (PFNGLIMAGETRANSFORMPARAMETERFHPPROC)load (
      userptr, "glImageTransformParameterfHP");
  glext_glImageTransformParameterfvHP
    = (PFNGLIMAGETRANSFORMPARAMETERFVHPPROC)load (
      userptr, "glImageTransformParameterfvHP");
  glext_glImageTransformParameteriHP
    = (PFNGLIMAGETRANSFORMPARAMETERIHPPROC)load (
      userptr, "glImageTransformParameteriHP");
  glext_glImageTransformParameterivHP
    = (PFNGLIMAGETRANSFORMPARAMETERIVHPPROC)load (
      userptr, "glImageTransformParameterivHP");
}
static void
glext_gl_load_GL_IBM_multimode_draw_arrays (GLEXTuserptrloadfunc load,
                                            void* userptr) {
  if (!GLEXT_GL_IBM_multimode_draw_arrays)
    return;
  glext_glMultiModeDrawArraysIBM = (PFNGLMULTIMODEDRAWARRAYSIBMPROC)load (
    userptr, "glMultiModeDrawArraysIBM");
  glext_glMultiModeDrawElementsIBM = (PFNGLMULTIMODEDRAWELEMENTSIBMPROC)load (
    userptr, "glMultiModeDrawElementsIBM");
}
static void
glext_gl_load_GL_IBM_static_data (GLEXTuserptrloadfunc load, void* userptr) {
  if (!GLEXT_GL_IBM_static_data)
    return;
  glext_glFlushStaticDataIBM
    = (PFNGLFLUSHSTATICDATAIBMPROC)load (userptr, "glFlushStaticDataIBM");
}
static void
glext_gl_load_GL_IBM_vertex_array_lists (GLEXTuserptrloadfunc load,
                                         void* userptr) {
  if (!GLEXT_GL_IBM_vertex_array_lists)
    return;
  glext_glColorPointerListIBM
    = (PFNGLCOLORPOINTERLISTIBMPROC)load (userptr, "glColorPointerListIBM");
  glext_glEdgeFlagPointerListIBM = (PFNGLEDGEFLAGPOINTERLISTIBMPROC)load (
    userptr, "glEdgeFlagPointerListIBM");
  glext_glFogCoordPointerListIBM = (PFNGLFOGCOORDPOINTERLISTIBMPROC)load (
    userptr, "glFogCoordPointerListIBM");
  glext_glIndexPointerListIBM
    = (PFNGLINDEXPOINTERLISTIBMPROC)load (userptr, "glIndexPointerListIBM");
  glext_glNormalPointerListIBM
    = (PFNGLNORMALPOINTERLISTIBMPROC)load (userptr, "glNormalPointerListIBM");
  glext_glSecondaryColorPointerListIBM
    = (PFNGLSECONDARYCOLORPOINTERLISTIBMPROC)load (
      userptr, "glSecondaryColorPointerListIBM");
  glext_glTexCoordPointerListIBM = (PFNGLTEXCOORDPOINTERLISTIBMPROC)load (
    userptr, "glTexCoordPointerListIBM");
  glext_glVertexPointerListIBM
    = (PFNGLVERTEXPOINTERLISTIBMPROC)load (userptr, "glVertexPointerListIBM");
}
static void
glext_gl_load_GL_INGR_blend_func_separate (GLEXTuserptrloadfunc load,
                                           void* userptr) {
  if (!GLEXT_GL_INGR_blend_func_separate)
    return;
  glext_glBlendFuncSeparateINGR = (PFNGLBLENDFUNCSEPARATEINGRPROC)load (
    userptr, "glBlendFuncSeparateINGR");
}
static void
glext_gl_load_GL_INTEL_framebuffer_CMAA (GLEXTuserptrloadfunc load,
                                         void* userptr) {
  if (!GLEXT_GL_INTEL_framebuffer_CMAA)
    return;
  glext_glApplyFramebufferAttachmentCMAAINTEL
    = (PFNGLAPPLYFRAMEBUFFERATTACHMENTCMAAINTELPROC)load (
      userptr, "glApplyFramebufferAttachmentCMAAINTEL");
}
static void
glext_gl_load_GL_INTEL_map_texture (GLEXTuserptrloadfunc load, void* userptr) {
  if (!GLEXT_GL_INTEL_map_texture)
    return;
  glext_glMapTexture2DINTEL
    = (PFNGLMAPTEXTURE2DINTELPROC)load (userptr, "glMapTexture2DINTEL");
  glext_glSyncTextureINTEL
    = (PFNGLSYNCTEXTUREINTELPROC)load (userptr, "glSyncTextureINTEL");
  glext_glUnmapTexture2DINTEL
    = (PFNGLUNMAPTEXTURE2DINTELPROC)load (userptr, "glUnmapTexture2DINTEL");
}
static void
glext_gl_load_GL_INTEL_parallel_arrays (GLEXTuserptrloadfunc load,
                                        void* userptr) {
  if (!GLEXT_GL_INTEL_parallel_arrays)
    return;
  glext_glColorPointervINTEL
    = (PFNGLCOLORPOINTERVINTELPROC)load (userptr, "glColorPointervINTEL");
  glext_glNormalPointervINTEL
    = (PFNGLNORMALPOINTERVINTELPROC)load (userptr, "glNormalPointervINTEL");
  glext_glTexCoordPointervINTEL = (PFNGLTEXCOORDPOINTERVINTELPROC)load (
    userptr, "glTexCoordPointervINTEL");
  glext_glVertexPointervINTEL
    = (PFNGLVERTEXPOINTERVINTELPROC)load (userptr, "glVertexPointervINTEL");
}
static void
glext_gl_load_GL_INTEL_performance_query (GLEXTuserptrloadfunc load,
                                          void* userptr) {
  if (!GLEXT_GL_INTEL_performance_query)
    return;
  glext_glBeginPerfQueryINTEL
    = (PFNGLBEGINPERFQUERYINTELPROC)load (userptr, "glBeginPerfQueryINTEL");
  glext_glCreatePerfQueryINTEL
    = (PFNGLCREATEPERFQUERYINTELPROC)load (userptr, "glCreatePerfQueryINTEL");
  glext_glDeletePerfQueryINTEL
    = (PFNGLDELETEPERFQUERYINTELPROC)load (userptr, "glDeletePerfQueryINTEL");
  glext_glEndPerfQueryINTEL
    = (PFNGLENDPERFQUERYINTELPROC)load (userptr, "glEndPerfQueryINTEL");
  glext_glGetFirstPerfQueryIdINTEL = (PFNGLGETFIRSTPERFQUERYIDINTELPROC)load (
    userptr, "glGetFirstPerfQueryIdINTEL");
  glext_glGetNextPerfQueryIdINTEL = (PFNGLGETNEXTPERFQUERYIDINTELPROC)load (
    userptr, "glGetNextPerfQueryIdINTEL");
  glext_glGetPerfCounterInfoINTEL = (PFNGLGETPERFCOUNTERINFOINTELPROC)load (
    userptr, "glGetPerfCounterInfoINTEL");
  glext_glGetPerfQueryDataINTEL = (PFNGLGETPERFQUERYDATAINTELPROC)load (
    userptr, "glGetPerfQueryDataINTEL");
  glext_glGetPerfQueryIdByNameINTEL
    = (PFNGLGETPERFQUERYIDBYNAMEINTELPROC)load (userptr,
                                                "glGetPerfQueryIdByNameINTEL");
  glext_glGetPerfQueryInfoINTEL = (PFNGLGETPERFQUERYINFOINTELPROC)load (
    userptr, "glGetPerfQueryInfoINTEL");
}
static void
glext_gl_load_GL_KHR_blend_equation_advanced (GLEXTuserptrloadfunc load,
                                              void* userptr) {
  if (!GLEXT_GL_KHR_blend_equation_advanced)
    return;
  glext_glBlendBarrierKHR
    = (PFNGLBLENDBARRIERKHRPROC)load (userptr, "glBlendBarrierKHR");
}
static void
glext_gl_load_GL_KHR_debug (GLEXTuserptrloadfunc load, void* userptr) {
  if (!GLEXT_GL_KHR_debug)
    return;
  glext_glDebugMessageCallback
    = (PFNGLDEBUGMESSAGECALLBACKPROC)load (userptr, "glDebugMessageCallback");
  glext_glDebugMessageControl
    = (PFNGLDEBUGMESSAGECONTROLPROC)load (userptr, "glDebugMessageControl");
  glext_glDebugMessageInsert
    = (PFNGLDEBUGMESSAGEINSERTPROC)load (userptr, "glDebugMessageInsert");
  glext_glGetDebugMessageLog
    = (PFNGLGETDEBUGMESSAGELOGPROC)load (userptr, "glGetDebugMessageLog");
  glext_glGetObjectLabel
    = (PFNGLGETOBJECTLABELPROC)load (userptr, "glGetObjectLabel");
  glext_glGetObjectPtrLabel
    = (PFNGLGETOBJECTPTRLABELPROC)load (userptr, "glGetObjectPtrLabel");
  glext_glGetPointerv = (PFNGLGETPOINTERVPROC)load (userptr, "glGetPointerv");
  glext_glObjectLabel = (PFNGLOBJECTLABELPROC)load (userptr, "glObjectLabel");
  glext_glObjectPtrLabel
    = (PFNGLOBJECTPTRLABELPROC)load (userptr, "glObjectPtrLabel");
  glext_glPopDebugGroup
    = (PFNGLPOPDEBUGGROUPPROC)load (userptr, "glPopDebugGroup");
  glext_glPushDebugGroup
    = (PFNGLPUSHDEBUGGROUPPROC)load (userptr, "glPushDebugGroup");
}
static void
glext_gl_load_GL_KHR_parallel_shader_compile (GLEXTuserptrloadfunc load,
                                              void* userptr) {
  if (!GLEXT_GL_KHR_parallel_shader_compile)
    return;
  glext_glMaxShaderCompilerThreadsKHR
    = (PFNGLMAXSHADERCOMPILERTHREADSKHRPROC)load (
      userptr, "glMaxShaderCompilerThreadsKHR");
}
static void
glext_gl_load_GL_KHR_robustness (GLEXTuserptrloadfunc load, void* userptr) {
  if (!GLEXT_GL_KHR_robustness)
    return;
  glext_glGetGraphicsResetStatus = (PFNGLGETGRAPHICSRESETSTATUSPROC)load (
    userptr, "glGetGraphicsResetStatus");
  glext_glGetnUniformfv
    = (PFNGLGETNUNIFORMFVPROC)load (userptr, "glGetnUniformfv");
  glext_glGetnUniformiv
    = (PFNGLGETNUNIFORMIVPROC)load (userptr, "glGetnUniformiv");
  glext_glGetnUniformuiv
    = (PFNGLGETNUNIFORMUIVPROC)load (userptr, "glGetnUniformuiv");
  glext_glReadnPixels = (PFNGLREADNPIXELSPROC)load (userptr, "glReadnPixels");
}
static void
glext_gl_load_GL_MESA_framebuffer_flip_y (GLEXTuserptrloadfunc load,
                                          void* userptr) {
  if (!GLEXT_GL_MESA_framebuffer_flip_y)
    return;
  glext_glFramebufferParameteriMESA
    = (PFNGLFRAMEBUFFERPARAMETERIMESAPROC)load (userptr,
                                                "glFramebufferParameteriMESA");
  glext_glGetFramebufferParameterivMESA
    = (PFNGLGETFRAMEBUFFERPARAMETERIVMESAPROC)load (
      userptr, "glGetFramebufferParameterivMESA");
}
static void
glext_gl_load_GL_MESA_resize_buffers (GLEXTuserptrloadfunc load,
                                      void* userptr) {
  if (!GLEXT_GL_MESA_resize_buffers)
    return;
  glext_glResizeBuffersMESA
    = (PFNGLRESIZEBUFFERSMESAPROC)load (userptr, "glResizeBuffersMESA");
}
static void
glext_gl_load_GL_MESA_window_pos (GLEXTuserptrloadfunc load, void* userptr) {
  if (!GLEXT_GL_MESA_window_pos)
    return;
  glext_glWindowPos2dMESA
    = (PFNGLWINDOWPOS2DMESAPROC)load (userptr, "glWindowPos2dMESA");
  glext_glWindowPos2dvMESA
    = (PFNGLWINDOWPOS2DVMESAPROC)load (userptr, "glWindowPos2dvMESA");
  glext_glWindowPos2fMESA
    = (PFNGLWINDOWPOS2FMESAPROC)load (userptr, "glWindowPos2fMESA");
  glext_glWindowPos2fvMESA
    = (PFNGLWINDOWPOS2FVMESAPROC)load (userptr, "glWindowPos2fvMESA");
  glext_glWindowPos2iMESA
    = (PFNGLWINDOWPOS2IMESAPROC)load (userptr, "glWindowPos2iMESA");
  glext_glWindowPos2ivMESA
    = (PFNGLWINDOWPOS2IVMESAPROC)load (userptr, "glWindowPos2ivMESA");
  glext_glWindowPos2sMESA
    = (PFNGLWINDOWPOS2SMESAPROC)load (userptr, "glWindowPos2sMESA");
  glext_glWindowPos2svMESA
    = (PFNGLWINDOWPOS2SVMESAPROC)load (userptr, "glWindowPos2svMESA");
  glext_glWindowPos3dMESA
    = (PFNGLWINDOWPOS3DMESAPROC)load (userptr, "glWindowPos3dMESA");
  glext_glWindowPos3dvMESA
    = (PFNGLWINDOWPOS3DVMESAPROC)load (userptr, "glWindowPos3dvMESA");
  glext_glWindowPos3fMESA
    = (PFNGLWINDOWPOS3FMESAPROC)load (userptr, "glWindowPos3fMESA");
  glext_glWindowPos3fvMESA
    = (PFNGLWINDOWPOS3FVMESAPROC)load (userptr, "glWindowPos3fvMESA");
  glext_glWindowPos3iMESA
    = (PFNGLWINDOWPOS3IMESAPROC)load (userptr, "glWindowPos3iMESA");
  glext_glWindowPos3ivMESA
    = (PFNGLWINDOWPOS3IVMESAPROC)load (userptr, "glWindowPos3ivMESA");
  glext_glWindowPos3sMESA
    = (PFNGLWINDOWPOS3SMESAPROC)load (userptr, "glWindowPos3sMESA");
  glext_glWindowPos3svMESA
    = (PFNGLWINDOWPOS3SVMESAPROC)load (userptr, "glWindowPos3svMESA");
  glext_glWindowPos4dMESA
    = (PFNGLWINDOWPOS4DMESAPROC)load (userptr, "glWindowPos4dMESA");
  glext_glWindowPos4dvMESA
    = (PFNGLWINDOWPOS4DVMESAPROC)load (userptr, "glWindowPos4dvMESA");
  glext_glWindowPos4fMESA
    = (PFNGLWINDOWPOS4FMESAPROC)load (userptr, "glWindowPos4fMESA");
  glext_glWindowPos4fvMESA
    = (PFNGLWINDOWPOS4FVMESAPROC)load (userptr, "glWindowPos4fvMESA");
  glext_glWindowPos4iMESA
    = (PFNGLWINDOWPOS4IMESAPROC)load (userptr, "glWindowPos4iMESA");
  glext_glWindowPos4ivMESA
    = (PFNGLWINDOWPOS4IVMESAPROC)load (userptr, "glWindowPos4ivMESA");
  glext_glWindowPos4sMESA
    = (PFNGLWINDOWPOS4SMESAPROC)load (userptr, "glWindowPos4sMESA");
  glext_glWindowPos4svMESA
    = (PFNGLWINDOWPOS4SVMESAPROC)load (userptr, "glWindowPos4svMESA");
}
static void
glext_gl_load_GL_NVX_conditional_render (GLEXTuserptrloadfunc load,
                                         void* userptr) {
  if (!GLEXT_GL_NVX_conditional_render)
    return;
  glext_glBeginConditionalRenderNVX
    = (PFNGLBEGINCONDITIONALRENDERNVXPROC)load (userptr,
                                                "glBeginConditionalRenderNVX");
  glext_glEndConditionalRenderNVX = (PFNGLENDCONDITIONALRENDERNVXPROC)load (
    userptr, "glEndConditionalRenderNVX");
}
static void
glext_gl_load_GL_NVX_gpu_multicast2 (GLEXTuserptrloadfunc load,
                                     void* userptr) {
  if (!GLEXT_GL_NVX_gpu_multicast2)
    return;
  glext_glAsyncCopyBufferSubDataNVX
    = (PFNGLASYNCCOPYBUFFERSUBDATANVXPROC)load (userptr,
                                                "glAsyncCopyBufferSubDataNVX");
  glext_glAsyncCopyImageSubDataNVX = (PFNGLASYNCCOPYIMAGESUBDATANVXPROC)load (
    userptr, "glAsyncCopyImageSubDataNVX");
  glext_glMulticastScissorArrayvNVX
    = (PFNGLMULTICASTSCISSORARRAYVNVXPROC)load (userptr,
                                                "glMulticastScissorArrayvNVX");
  glext_glMulticastViewportArrayvNVX
    = (PFNGLMULTICASTVIEWPORTARRAYVNVXPROC)load (
      userptr, "glMulticastViewportArrayvNVX");
  glext_glMulticastViewportPositionWScaleNVX
    = (PFNGLMULTICASTVIEWPORTPOSITIONWSCALENVXPROC)load (
      userptr, "glMulticastViewportPositionWScaleNVX");
  glext_glUploadGpuMaskNVX
    = (PFNGLUPLOADGPUMASKNVXPROC)load (userptr, "glUploadGpuMaskNVX");
}
static void
glext_gl_load_GL_NVX_linked_gpu_multicast (GLEXTuserptrloadfunc load,
                                           void* userptr) {
  if (!GLEXT_GL_NVX_linked_gpu_multicast)
    return;
  glext_glLGPUCopyImageSubDataNVX = (PFNGLLGPUCOPYIMAGESUBDATANVXPROC)load (
    userptr, "glLGPUCopyImageSubDataNVX");
  glext_glLGPUInterlockNVX
    = (PFNGLLGPUINTERLOCKNVXPROC)load (userptr, "glLGPUInterlockNVX");
  glext_glLGPUNamedBufferSubDataNVX
    = (PFNGLLGPUNAMEDBUFFERSUBDATANVXPROC)load (userptr,
                                                "glLGPUNamedBufferSubDataNVX");
}
static void
glext_gl_load_GL_NVX_progress_fence (GLEXTuserptrloadfunc load,
                                     void* userptr) {
  if (!GLEXT_GL_NVX_progress_fence)
    return;
  glext_glClientWaitSemaphoreui64NVX
    = (PFNGLCLIENTWAITSEMAPHOREUI64NVXPROC)load (
      userptr, "glClientWaitSemaphoreui64NVX");
  glext_glCreateProgressFenceNVX = (PFNGLCREATEPROGRESSFENCENVXPROC)load (
    userptr, "glCreateProgressFenceNVX");
  glext_glSignalSemaphoreui64NVX = (PFNGLSIGNALSEMAPHOREUI64NVXPROC)load (
    userptr, "glSignalSemaphoreui64NVX");
  glext_glWaitSemaphoreui64NVX
    = (PFNGLWAITSEMAPHOREUI64NVXPROC)load (userptr, "glWaitSemaphoreui64NVX");
}
static void
glext_gl_load_GL_NV_alpha_to_coverage_dither_control (
  GLEXTuserptrloadfunc load, void* userptr) {
  if (!GLEXT_GL_NV_alpha_to_coverage_dither_control)
    return;
  glext_glAlphaToCoverageDitherControlNV
    = (PFNGLALPHATOCOVERAGEDITHERCONTROLNVPROC)load (
      userptr, "glAlphaToCoverageDitherControlNV");
}
static void
glext_gl_load_GL_NV_bindless_multi_draw_indirect (GLEXTuserptrloadfunc load,
                                                  void* userptr) {
  if (!GLEXT_GL_NV_bindless_multi_draw_indirect)
    return;
  glext_glMultiDrawArraysIndirectBindlessNV
    = (PFNGLMULTIDRAWARRAYSINDIRECTBINDLESSNVPROC)load (
      userptr, "glMultiDrawArraysIndirectBindlessNV");
  glext_glMultiDrawElementsIndirectBindlessNV
    = (PFNGLMULTIDRAWELEMENTSINDIRECTBINDLESSNVPROC)load (
      userptr, "glMultiDrawElementsIndirectBindlessNV");
}
static void
glext_gl_load_GL_NV_bindless_multi_draw_indirect_count (
  GLEXTuserptrloadfunc load, void* userptr) {
  if (!GLEXT_GL_NV_bindless_multi_draw_indirect_count)
    return;
  glext_glMultiDrawArraysIndirectBindlessCountNV
    = (PFNGLMULTIDRAWARRAYSINDIRECTBINDLESSCOUNTNVPROC)load (
      userptr, "glMultiDrawArraysIndirectBindlessCountNV");
  glext_glMultiDrawElementsIndirectBindlessCountNV
    = (PFNGLMULTIDRAWELEMENTSINDIRECTBINDLESSCOUNTNVPROC)load (
      userptr, "glMultiDrawElementsIndirectBindlessCountNV");
}
static void
glext_gl_load_GL_NV_bindless_texture (GLEXTuserptrloadfunc load,
                                      void* userptr) {
  if (!GLEXT_GL_NV_bindless_texture)
    return;
  glext_glGetImageHandleNV
    = (PFNGLGETIMAGEHANDLENVPROC)load (userptr, "glGetImageHandleNV");
  glext_glGetTextureHandleNV
    = (PFNGLGETTEXTUREHANDLENVPROC)load (userptr, "glGetTextureHandleNV");
  glext_glGetTextureSamplerHandleNV
    = (PFNGLGETTEXTURESAMPLERHANDLENVPROC)load (userptr,
                                                "glGetTextureSamplerHandleNV");
  glext_glIsImageHandleResidentNV = (PFNGLISIMAGEHANDLERESIDENTNVPROC)load (
    userptr, "glIsImageHandleResidentNV");
  glext_glIsTextureHandleResidentNV
    = (PFNGLISTEXTUREHANDLERESIDENTNVPROC)load (userptr,
                                                "glIsTextureHandleResidentNV");
  glext_glMakeImageHandleNonResidentNV
    = (PFNGLMAKEIMAGEHANDLENONRESIDENTNVPROC)load (
      userptr, "glMakeImageHandleNonResidentNV");
  glext_glMakeImageHandleResidentNV
    = (PFNGLMAKEIMAGEHANDLERESIDENTNVPROC)load (userptr,
                                                "glMakeImageHandleResidentNV");
  glext_glMakeTextureHandleNonResidentNV
    = (PFNGLMAKETEXTUREHANDLENONRESIDENTNVPROC)load (
      userptr, "glMakeTextureHandleNonResidentNV");
  glext_glMakeTextureHandleResidentNV
    = (PFNGLMAKETEXTUREHANDLERESIDENTNVPROC)load (
      userptr, "glMakeTextureHandleResidentNV");
  glext_glProgramUniformHandleui64NV
    = (PFNGLPROGRAMUNIFORMHANDLEUI64NVPROC)load (
      userptr, "glProgramUniformHandleui64NV");
  glext_glProgramUniformHandleui64vNV
    = (PFNGLPROGRAMUNIFORMHANDLEUI64VNVPROC)load (
      userptr, "glProgramUniformHandleui64vNV");
  glext_glUniformHandleui64NV
    = (PFNGLUNIFORMHANDLEUI64NVPROC)load (userptr, "glUniformHandleui64NV");
  glext_glUniformHandleui64vNV
    = (PFNGLUNIFORMHANDLEUI64VNVPROC)load (userptr, "glUniformHandleui64vNV");
}
static void
glext_gl_load_GL_NV_blend_equation_advanced (GLEXTuserptrloadfunc load,
                                             void* userptr) {
  if (!GLEXT_GL_NV_blend_equation_advanced)
    return;
  glext_glBlendBarrierNV
    = (PFNGLBLENDBARRIERNVPROC)load (userptr, "glBlendBarrierNV");
  glext_glBlendParameteriNV
    = (PFNGLBLENDPARAMETERINVPROC)load (userptr, "glBlendParameteriNV");
}
static void
glext_gl_load_GL_NV_clip_space_w_scaling (GLEXTuserptrloadfunc load,
                                          void* userptr) {
  if (!GLEXT_GL_NV_clip_space_w_scaling)
    return;
  glext_glViewportPositionWScaleNV = (PFNGLVIEWPORTPOSITIONWSCALENVPROC)load (
    userptr, "glViewportPositionWScaleNV");
}
static void
glext_gl_load_GL_NV_command_list (GLEXTuserptrloadfunc load, void* userptr) {
  if (!GLEXT_GL_NV_command_list)
    return;
  glext_glCallCommandListNV
    = (PFNGLCALLCOMMANDLISTNVPROC)load (userptr, "glCallCommandListNV");
  glext_glCommandListSegmentsNV = (PFNGLCOMMANDLISTSEGMENTSNVPROC)load (
    userptr, "glCommandListSegmentsNV");
  glext_glCompileCommandListNV
    = (PFNGLCOMPILECOMMANDLISTNVPROC)load (userptr, "glCompileCommandListNV");
  glext_glCreateCommandListsNV
    = (PFNGLCREATECOMMANDLISTSNVPROC)load (userptr, "glCreateCommandListsNV");
  glext_glCreateStatesNV
    = (PFNGLCREATESTATESNVPROC)load (userptr, "glCreateStatesNV");
  glext_glDeleteCommandListsNV
    = (PFNGLDELETECOMMANDLISTSNVPROC)load (userptr, "glDeleteCommandListsNV");
  glext_glDeleteStatesNV
    = (PFNGLDELETESTATESNVPROC)load (userptr, "glDeleteStatesNV");
  glext_glDrawCommandsAddressNV = (PFNGLDRAWCOMMANDSADDRESSNVPROC)load (
    userptr, "glDrawCommandsAddressNV");
  glext_glDrawCommandsNV
    = (PFNGLDRAWCOMMANDSNVPROC)load (userptr, "glDrawCommandsNV");
  glext_glDrawCommandsStatesAddressNV
    = (PFNGLDRAWCOMMANDSSTATESADDRESSNVPROC)load (
      userptr, "glDrawCommandsStatesAddressNV");
  glext_glDrawCommandsStatesNV
    = (PFNGLDRAWCOMMANDSSTATESNVPROC)load (userptr, "glDrawCommandsStatesNV");
  glext_glGetCommandHeaderNV
    = (PFNGLGETCOMMANDHEADERNVPROC)load (userptr, "glGetCommandHeaderNV");
  glext_glGetStageIndexNV
    = (PFNGLGETSTAGEINDEXNVPROC)load (userptr, "glGetStageIndexNV");
  glext_glIsCommandListNV
    = (PFNGLISCOMMANDLISTNVPROC)load (userptr, "glIsCommandListNV");
  glext_glIsStateNV = (PFNGLISSTATENVPROC)load (userptr, "glIsStateNV");
  glext_glListDrawCommandsStatesClientNV
    = (PFNGLLISTDRAWCOMMANDSSTATESCLIENTNVPROC)load (
      userptr, "glListDrawCommandsStatesClientNV");
  glext_glStateCaptureNV
    = (PFNGLSTATECAPTURENVPROC)load (userptr, "glStateCaptureNV");
}
static void
glext_gl_load_GL_NV_conditional_render (GLEXTuserptrloadfunc load,
                                        void* userptr) {
  if (!GLEXT_GL_NV_conditional_render)
    return;
  glext_glBeginConditionalRenderNV = (PFNGLBEGINCONDITIONALRENDERNVPROC)load (
    userptr, "glBeginConditionalRenderNV");
  glext_glEndConditionalRenderNV = (PFNGLENDCONDITIONALRENDERNVPROC)load (
    userptr, "glEndConditionalRenderNV");
}
static void
glext_gl_load_GL_NV_conservative_raster (GLEXTuserptrloadfunc load,
                                         void* userptr) {
  if (!GLEXT_GL_NV_conservative_raster)
    return;
  glext_glSubpixelPrecisionBiasNV = (PFNGLSUBPIXELPRECISIONBIASNVPROC)load (
    userptr, "glSubpixelPrecisionBiasNV");
}
static void
glext_gl_load_GL_NV_conservative_raster_dilate (GLEXTuserptrloadfunc load,
                                                void* userptr) {
  if (!GLEXT_GL_NV_conservative_raster_dilate)
    return;
  glext_glConservativeRasterParameterfNV
    = (PFNGLCONSERVATIVERASTERPARAMETERFNVPROC)load (
      userptr, "glConservativeRasterParameterfNV");
}
static void
glext_gl_load_GL_NV_conservative_raster_pre_snap_triangles (
  GLEXTuserptrloadfunc load, void* userptr) {
  if (!GLEXT_GL_NV_conservative_raster_pre_snap_triangles)
    return;
  glext_glConservativeRasterParameteriNV
    = (PFNGLCONSERVATIVERASTERPARAMETERINVPROC)load (
      userptr, "glConservativeRasterParameteriNV");
}
static void
glext_gl_load_GL_NV_copy_image (GLEXTuserptrloadfunc load, void* userptr) {
  if (!GLEXT_GL_NV_copy_image)
    return;
  glext_glCopyImageSubDataNV
    = (PFNGLCOPYIMAGESUBDATANVPROC)load (userptr, "glCopyImageSubDataNV");
}
static void
glext_gl_load_GL_NV_depth_buffer_float (GLEXTuserptrloadfunc load,
                                        void* userptr) {
  if (!GLEXT_GL_NV_depth_buffer_float)
    return;
  glext_glClearDepthdNV
    = (PFNGLCLEARDEPTHDNVPROC)load (userptr, "glClearDepthdNV");
  glext_glDepthBoundsdNV
    = (PFNGLDEPTHBOUNDSDNVPROC)load (userptr, "glDepthBoundsdNV");
  glext_glDepthRangedNV
    = (PFNGLDEPTHRANGEDNVPROC)load (userptr, "glDepthRangedNV");
}
static void
glext_gl_load_GL_NV_draw_texture (GLEXTuserptrloadfunc load, void* userptr) {
  if (!GLEXT_GL_NV_draw_texture)
    return;
  glext_glDrawTextureNV
    = (PFNGLDRAWTEXTURENVPROC)load (userptr, "glDrawTextureNV");
}
static void
glext_gl_load_GL_NV_draw_vulkan_image (GLEXTuserptrloadfunc load,
                                       void* userptr) {
  if (!GLEXT_GL_NV_draw_vulkan_image)
    return;
  glext_glDrawVkImageNV
    = (PFNGLDRAWVKIMAGENVPROC)load (userptr, "glDrawVkImageNV");
  glext_glGetVkProcAddrNV
    = (PFNGLGETVKPROCADDRNVPROC)load (userptr, "glGetVkProcAddrNV");
  glext_glSignalVkFenceNV
    = (PFNGLSIGNALVKFENCENVPROC)load (userptr, "glSignalVkFenceNV");
  glext_glSignalVkSemaphoreNV
    = (PFNGLSIGNALVKSEMAPHORENVPROC)load (userptr, "glSignalVkSemaphoreNV");
  glext_glWaitVkSemaphoreNV
    = (PFNGLWAITVKSEMAPHORENVPROC)load (userptr, "glWaitVkSemaphoreNV");
}
static void
glext_gl_load_GL_NV_evaluators (GLEXTuserptrloadfunc load, void* userptr) {
  if (!GLEXT_GL_NV_evaluators)
    return;
  glext_glEvalMapsNV = (PFNGLEVALMAPSNVPROC)load (userptr, "glEvalMapsNV");
  glext_glGetMapAttribParameterfvNV
    = (PFNGLGETMAPATTRIBPARAMETERFVNVPROC)load (userptr,
                                                "glGetMapAttribParameterfvNV");
  glext_glGetMapAttribParameterivNV
    = (PFNGLGETMAPATTRIBPARAMETERIVNVPROC)load (userptr,
                                                "glGetMapAttribParameterivNV");
  glext_glGetMapControlPointsNV = (PFNGLGETMAPCONTROLPOINTSNVPROC)load (
    userptr, "glGetMapControlPointsNV");
  glext_glGetMapParameterfvNV
    = (PFNGLGETMAPPARAMETERFVNVPROC)load (userptr, "glGetMapParameterfvNV");
  glext_glGetMapParameterivNV
    = (PFNGLGETMAPPARAMETERIVNVPROC)load (userptr, "glGetMapParameterivNV");
  glext_glMapControlPointsNV
    = (PFNGLMAPCONTROLPOINTSNVPROC)load (userptr, "glMapControlPointsNV");
  glext_glMapParameterfvNV
    = (PFNGLMAPPARAMETERFVNVPROC)load (userptr, "glMapParameterfvNV");
  glext_glMapParameterivNV
    = (PFNGLMAPPARAMETERIVNVPROC)load (userptr, "glMapParameterivNV");
}
static void
glext_gl_load_GL_NV_explicit_multisample (GLEXTuserptrloadfunc load,
                                          void* userptr) {
  if (!GLEXT_GL_NV_explicit_multisample)
    return;
  glext_glGetMultisamplefvNV
    = (PFNGLGETMULTISAMPLEFVNVPROC)load (userptr, "glGetMultisamplefvNV");
  glext_glSampleMaskIndexedNV
    = (PFNGLSAMPLEMASKINDEXEDNVPROC)load (userptr, "glSampleMaskIndexedNV");
  glext_glTexRenderbufferNV
    = (PFNGLTEXRENDERBUFFERNVPROC)load (userptr, "glTexRenderbufferNV");
}
static void
glext_gl_load_GL_NV_fence (GLEXTuserptrloadfunc load, void* userptr) {
  if (!GLEXT_GL_NV_fence)
    return;
  glext_glDeleteFencesNV
    = (PFNGLDELETEFENCESNVPROC)load (userptr, "glDeleteFencesNV");
  glext_glFinishFenceNV
    = (PFNGLFINISHFENCENVPROC)load (userptr, "glFinishFenceNV");
  glext_glGenFencesNV = (PFNGLGENFENCESNVPROC)load (userptr, "glGenFencesNV");
  glext_glGetFenceivNV
    = (PFNGLGETFENCEIVNVPROC)load (userptr, "glGetFenceivNV");
  glext_glIsFenceNV = (PFNGLISFENCENVPROC)load (userptr, "glIsFenceNV");
  glext_glSetFenceNV = (PFNGLSETFENCENVPROC)load (userptr, "glSetFenceNV");
  glext_glTestFenceNV = (PFNGLTESTFENCENVPROC)load (userptr, "glTestFenceNV");
}
static void
glext_gl_load_GL_NV_fragment_coverage_to_color (GLEXTuserptrloadfunc load,
                                                void* userptr) {
  if (!GLEXT_GL_NV_fragment_coverage_to_color)
    return;
  glext_glFragmentCoverageColorNV = (PFNGLFRAGMENTCOVERAGECOLORNVPROC)load (
    userptr, "glFragmentCoverageColorNV");
}
static void
glext_gl_load_GL_NV_fragment_program (GLEXTuserptrloadfunc load,
                                      void* userptr) {
  if (!GLEXT_GL_NV_fragment_program)
    return;
  glext_glGetProgramNamedParameterdvNV
    = (PFNGLGETPROGRAMNAMEDPARAMETERDVNVPROC)load (
      userptr, "glGetProgramNamedParameterdvNV");
  glext_glGetProgramNamedParameterfvNV
    = (PFNGLGETPROGRAMNAMEDPARAMETERFVNVPROC)load (
      userptr, "glGetProgramNamedParameterfvNV");
  glext_glProgramNamedParameter4dNV
    = (PFNGLPROGRAMNAMEDPARAMETER4DNVPROC)load (userptr,
                                                "glProgramNamedParameter4dNV");
  glext_glProgramNamedParameter4dvNV
    = (PFNGLPROGRAMNAMEDPARAMETER4DVNVPROC)load (
      userptr, "glProgramNamedParameter4dvNV");
  glext_glProgramNamedParameter4fNV
    = (PFNGLPROGRAMNAMEDPARAMETER4FNVPROC)load (userptr,
                                                "glProgramNamedParameter4fNV");
  glext_glProgramNamedParameter4fvNV
    = (PFNGLPROGRAMNAMEDPARAMETER4FVNVPROC)load (
      userptr, "glProgramNamedParameter4fvNV");
}
static void
glext_gl_load_GL_NV_framebuffer_mixed_samples (GLEXTuserptrloadfunc load,
                                               void* userptr) {
  if (!GLEXT_GL_NV_framebuffer_mixed_samples)
    return;
  glext_glCoverageModulationNV
    = (PFNGLCOVERAGEMODULATIONNVPROC)load (userptr, "glCoverageModulationNV");
  glext_glCoverageModulationTableNV
    = (PFNGLCOVERAGEMODULATIONTABLENVPROC)load (userptr,
                                                "glCoverageModulationTableNV");
  glext_glGetCoverageModulationTableNV
    = (PFNGLGETCOVERAGEMODULATIONTABLENVPROC)load (
      userptr, "glGetCoverageModulationTableNV");
  glext_glRasterSamplesEXT
    = (PFNGLRASTERSAMPLESEXTPROC)load (userptr, "glRasterSamplesEXT");
}
static void
glext_gl_load_GL_NV_framebuffer_multisample_coverage (
  GLEXTuserptrloadfunc load, void* userptr) {
  if (!GLEXT_GL_NV_framebuffer_multisample_coverage)
    return;
  glext_glRenderbufferStorageMultisampleCoverageNV
    = (PFNGLRENDERBUFFERSTORAGEMULTISAMPLECOVERAGENVPROC)load (
      userptr, "glRenderbufferStorageMultisampleCoverageNV");
}
static void
glext_gl_load_GL_NV_geometry_program4 (GLEXTuserptrloadfunc load,
                                       void* userptr) {
  if (!GLEXT_GL_NV_geometry_program4)
    return;
  glext_glFramebufferTextureEXT = (PFNGLFRAMEBUFFERTEXTUREEXTPROC)load (
    userptr, "glFramebufferTextureEXT");
  glext_glFramebufferTextureFaceEXT
    = (PFNGLFRAMEBUFFERTEXTUREFACEEXTPROC)load (userptr,
                                                "glFramebufferTextureFaceEXT");
  glext_glFramebufferTextureLayerEXT
    = (PFNGLFRAMEBUFFERTEXTURELAYEREXTPROC)load (
      userptr, "glFramebufferTextureLayerEXT");
  glext_glProgramVertexLimitNV
    = (PFNGLPROGRAMVERTEXLIMITNVPROC)load (userptr, "glProgramVertexLimitNV");
}
static void
glext_gl_load_GL_NV_gpu_multicast (GLEXTuserptrloadfunc load, void* userptr) {
  if (!GLEXT_GL_NV_gpu_multicast)
    return;
  glext_glMulticastBarrierNV
    = (PFNGLMULTICASTBARRIERNVPROC)load (userptr, "glMulticastBarrierNV");
  glext_glMulticastBlitFramebufferNV
    = (PFNGLMULTICASTBLITFRAMEBUFFERNVPROC)load (
      userptr, "glMulticastBlitFramebufferNV");
  glext_glMulticastBufferSubDataNV = (PFNGLMULTICASTBUFFERSUBDATANVPROC)load (
    userptr, "glMulticastBufferSubDataNV");
  glext_glMulticastCopyBufferSubDataNV
    = (PFNGLMULTICASTCOPYBUFFERSUBDATANVPROC)load (
      userptr, "glMulticastCopyBufferSubDataNV");
  glext_glMulticastCopyImageSubDataNV
    = (PFNGLMULTICASTCOPYIMAGESUBDATANVPROC)load (
      userptr, "glMulticastCopyImageSubDataNV");
  glext_glMulticastFramebufferSampleLocationsfvNV
    = (PFNGLMULTICASTFRAMEBUFFERSAMPLELOCATIONSFVNVPROC)load (
      userptr, "glMulticastFramebufferSampleLocationsfvNV");
  glext_glMulticastGetQueryObjecti64vNV
    = (PFNGLMULTICASTGETQUERYOBJECTI64VNVPROC)load (
      userptr, "glMulticastGetQueryObjecti64vNV");
  glext_glMulticastGetQueryObjectivNV
    = (PFNGLMULTICASTGETQUERYOBJECTIVNVPROC)load (
      userptr, "glMulticastGetQueryObjectivNV");
  glext_glMulticastGetQueryObjectui64vNV
    = (PFNGLMULTICASTGETQUERYOBJECTUI64VNVPROC)load (
      userptr, "glMulticastGetQueryObjectui64vNV");
  glext_glMulticastGetQueryObjectuivNV
    = (PFNGLMULTICASTGETQUERYOBJECTUIVNVPROC)load (
      userptr, "glMulticastGetQueryObjectuivNV");
  glext_glMulticastWaitSyncNV
    = (PFNGLMULTICASTWAITSYNCNVPROC)load (userptr, "glMulticastWaitSyncNV");
  glext_glRenderGpuMaskNV
    = (PFNGLRENDERGPUMASKNVPROC)load (userptr, "glRenderGpuMaskNV");
}
static void
glext_gl_load_GL_NV_gpu_program4 (GLEXTuserptrloadfunc load, void* userptr) {
  if (!GLEXT_GL_NV_gpu_program4)
    return;
  glext_glGetProgramEnvParameterIivNV
    = (PFNGLGETPROGRAMENVPARAMETERIIVNVPROC)load (
      userptr, "glGetProgramEnvParameterIivNV");
  glext_glGetProgramEnvParameterIuivNV
    = (PFNGLGETPROGRAMENVPARAMETERIUIVNVPROC)load (
      userptr, "glGetProgramEnvParameterIuivNV");
  glext_glGetProgramLocalParameterIivNV
    = (PFNGLGETPROGRAMLOCALPARAMETERIIVNVPROC)load (
      userptr, "glGetProgramLocalParameterIivNV");
  glext_glGetProgramLocalParameterIuivNV
    = (PFNGLGETPROGRAMLOCALPARAMETERIUIVNVPROC)load (
      userptr, "glGetProgramLocalParameterIuivNV");
  glext_glProgramEnvParameterI4iNV = (PFNGLPROGRAMENVPARAMETERI4INVPROC)load (
    userptr, "glProgramEnvParameterI4iNV");
  glext_glProgramEnvParameterI4ivNV
    = (PFNGLPROGRAMENVPARAMETERI4IVNVPROC)load (userptr,
                                                "glProgramEnvParameterI4ivNV");
  glext_glProgramEnvParameterI4uiNV
    = (PFNGLPROGRAMENVPARAMETERI4UINVPROC)load (userptr,
                                                "glProgramEnvParameterI4uiNV");
  glext_glProgramEnvParameterI4uivNV
    = (PFNGLPROGRAMENVPARAMETERI4UIVNVPROC)load (
      userptr, "glProgramEnvParameterI4uivNV");
  glext_glProgramEnvParametersI4ivNV
    = (PFNGLPROGRAMENVPARAMETERSI4IVNVPROC)load (
      userptr, "glProgramEnvParametersI4ivNV");
  glext_glProgramEnvParametersI4uivNV
    = (PFNGLPROGRAMENVPARAMETERSI4UIVNVPROC)load (
      userptr, "glProgramEnvParametersI4uivNV");
  glext_glProgramLocalParameterI4iNV
    = (PFNGLPROGRAMLOCALPARAMETERI4INVPROC)load (
      userptr, "glProgramLocalParameterI4iNV");
  glext_glProgramLocalParameterI4ivNV
    = (PFNGLPROGRAMLOCALPARAMETERI4IVNVPROC)load (
      userptr, "glProgramLocalParameterI4ivNV");
  glext_glProgramLocalParameterI4uiNV
    = (PFNGLPROGRAMLOCALPARAMETERI4UINVPROC)load (
      userptr, "glProgramLocalParameterI4uiNV");
  glext_glProgramLocalParameterI4uivNV
    = (PFNGLPROGRAMLOCALPARAMETERI4UIVNVPROC)load (
      userptr, "glProgramLocalParameterI4uivNV");
  glext_glProgramLocalParametersI4ivNV
    = (PFNGLPROGRAMLOCALPARAMETERSI4IVNVPROC)load (
      userptr, "glProgramLocalParametersI4ivNV");
  glext_glProgramLocalParametersI4uivNV
    = (PFNGLPROGRAMLOCALPARAMETERSI4UIVNVPROC)load (
      userptr, "glProgramLocalParametersI4uivNV");
}
static void
glext_gl_load_GL_NV_gpu_program5 (GLEXTuserptrloadfunc load, void* userptr) {
  if (!GLEXT_GL_NV_gpu_program5)
    return;
  glext_glGetProgramSubroutineParameteruivNV
    = (PFNGLGETPROGRAMSUBROUTINEPARAMETERUIVNVPROC)load (
      userptr, "glGetProgramSubroutineParameteruivNV");
  glext_glProgramSubroutineParametersuivNV
    = (PFNGLPROGRAMSUBROUTINEPARAMETERSUIVNVPROC)load (
      userptr, "glProgramSubroutineParametersuivNV");
}
static void
glext_gl_load_GL_NV_gpu_shader5 (GLEXTuserptrloadfunc load, void* userptr) {
  if (!GLEXT_GL_NV_gpu_shader5)
    return;
  glext_glGetUniformi64vNV
    = (PFNGLGETUNIFORMI64VNVPROC)load (userptr, "glGetUniformi64vNV");
  glext_glProgramUniform1i64NV
    = (PFNGLPROGRAMUNIFORM1I64NVPROC)load (userptr, "glProgramUniform1i64NV");
  glext_glProgramUniform1i64vNV = (PFNGLPROGRAMUNIFORM1I64VNVPROC)load (
    userptr, "glProgramUniform1i64vNV");
  glext_glProgramUniform1ui64NV = (PFNGLPROGRAMUNIFORM1UI64NVPROC)load (
    userptr, "glProgramUniform1ui64NV");
  glext_glProgramUniform1ui64vNV = (PFNGLPROGRAMUNIFORM1UI64VNVPROC)load (
    userptr, "glProgramUniform1ui64vNV");
  glext_glProgramUniform2i64NV
    = (PFNGLPROGRAMUNIFORM2I64NVPROC)load (userptr, "glProgramUniform2i64NV");
  glext_glProgramUniform2i64vNV = (PFNGLPROGRAMUNIFORM2I64VNVPROC)load (
    userptr, "glProgramUniform2i64vNV");
  glext_glProgramUniform2ui64NV = (PFNGLPROGRAMUNIFORM2UI64NVPROC)load (
    userptr, "glProgramUniform2ui64NV");
  glext_glProgramUniform2ui64vNV = (PFNGLPROGRAMUNIFORM2UI64VNVPROC)load (
    userptr, "glProgramUniform2ui64vNV");
  glext_glProgramUniform3i64NV
    = (PFNGLPROGRAMUNIFORM3I64NVPROC)load (userptr, "glProgramUniform3i64NV");
  glext_glProgramUniform3i64vNV = (PFNGLPROGRAMUNIFORM3I64VNVPROC)load (
    userptr, "glProgramUniform3i64vNV");
  glext_glProgramUniform3ui64NV = (PFNGLPROGRAMUNIFORM3UI64NVPROC)load (
    userptr, "glProgramUniform3ui64NV");
  glext_glProgramUniform3ui64vNV = (PFNGLPROGRAMUNIFORM3UI64VNVPROC)load (
    userptr, "glProgramUniform3ui64vNV");
  glext_glProgramUniform4i64NV
    = (PFNGLPROGRAMUNIFORM4I64NVPROC)load (userptr, "glProgramUniform4i64NV");
  glext_glProgramUniform4i64vNV = (PFNGLPROGRAMUNIFORM4I64VNVPROC)load (
    userptr, "glProgramUniform4i64vNV");
  glext_glProgramUniform4ui64NV = (PFNGLPROGRAMUNIFORM4UI64NVPROC)load (
    userptr, "glProgramUniform4ui64NV");
  glext_glProgramUniform4ui64vNV = (PFNGLPROGRAMUNIFORM4UI64VNVPROC)load (
    userptr, "glProgramUniform4ui64vNV");
  glext_glUniform1i64NV
    = (PFNGLUNIFORM1I64NVPROC)load (userptr, "glUniform1i64NV");
  glext_glUniform1i64vNV
    = (PFNGLUNIFORM1I64VNVPROC)load (userptr, "glUniform1i64vNV");
  glext_glUniform1ui64NV
    = (PFNGLUNIFORM1UI64NVPROC)load (userptr, "glUniform1ui64NV");
  glext_glUniform1ui64vNV
    = (PFNGLUNIFORM1UI64VNVPROC)load (userptr, "glUniform1ui64vNV");
  glext_glUniform2i64NV
    = (PFNGLUNIFORM2I64NVPROC)load (userptr, "glUniform2i64NV");
  glext_glUniform2i64vNV
    = (PFNGLUNIFORM2I64VNVPROC)load (userptr, "glUniform2i64vNV");
  glext_glUniform2ui64NV
    = (PFNGLUNIFORM2UI64NVPROC)load (userptr, "glUniform2ui64NV");
  glext_glUniform2ui64vNV
    = (PFNGLUNIFORM2UI64VNVPROC)load (userptr, "glUniform2ui64vNV");
  glext_glUniform3i64NV
    = (PFNGLUNIFORM3I64NVPROC)load (userptr, "glUniform3i64NV");
  glext_glUniform3i64vNV
    = (PFNGLUNIFORM3I64VNVPROC)load (userptr, "glUniform3i64vNV");
  glext_glUniform3ui64NV
    = (PFNGLUNIFORM3UI64NVPROC)load (userptr, "glUniform3ui64NV");
  glext_glUniform3ui64vNV
    = (PFNGLUNIFORM3UI64VNVPROC)load (userptr, "glUniform3ui64vNV");
  glext_glUniform4i64NV
    = (PFNGLUNIFORM4I64NVPROC)load (userptr, "glUniform4i64NV");
  glext_glUniform4i64vNV
    = (PFNGLUNIFORM4I64VNVPROC)load (userptr, "glUniform4i64vNV");
  glext_glUniform4ui64NV
    = (PFNGLUNIFORM4UI64NVPROC)load (userptr, "glUniform4ui64NV");
  glext_glUniform4ui64vNV
    = (PFNGLUNIFORM4UI64VNVPROC)load (userptr, "glUniform4ui64vNV");
}
static void
glext_gl_load_GL_NV_half_float (GLEXTuserptrloadfunc load, void* userptr) {
  if (!GLEXT_GL_NV_half_float)
    return;
  glext_glColor3hNV = (PFNGLCOLOR3HNVPROC)load (userptr, "glColor3hNV");
  glext_glColor3hvNV = (PFNGLCOLOR3HVNVPROC)load (userptr, "glColor3hvNV");
  glext_glColor4hNV = (PFNGLCOLOR4HNVPROC)load (userptr, "glColor4hNV");
  glext_glColor4hvNV = (PFNGLCOLOR4HVNVPROC)load (userptr, "glColor4hvNV");
  glext_glFogCoordhNV = (PFNGLFOGCOORDHNVPROC)load (userptr, "glFogCoordhNV");
  glext_glFogCoordhvNV
    = (PFNGLFOGCOORDHVNVPROC)load (userptr, "glFogCoordhvNV");
  glext_glMultiTexCoord1hNV
    = (PFNGLMULTITEXCOORD1HNVPROC)load (userptr, "glMultiTexCoord1hNV");
  glext_glMultiTexCoord1hvNV
    = (PFNGLMULTITEXCOORD1HVNVPROC)load (userptr, "glMultiTexCoord1hvNV");
  glext_glMultiTexCoord2hNV
    = (PFNGLMULTITEXCOORD2HNVPROC)load (userptr, "glMultiTexCoord2hNV");
  glext_glMultiTexCoord2hvNV
    = (PFNGLMULTITEXCOORD2HVNVPROC)load (userptr, "glMultiTexCoord2hvNV");
  glext_glMultiTexCoord3hNV
    = (PFNGLMULTITEXCOORD3HNVPROC)load (userptr, "glMultiTexCoord3hNV");
  glext_glMultiTexCoord3hvNV
    = (PFNGLMULTITEXCOORD3HVNVPROC)load (userptr, "glMultiTexCoord3hvNV");
  glext_glMultiTexCoord4hNV
    = (PFNGLMULTITEXCOORD4HNVPROC)load (userptr, "glMultiTexCoord4hNV");
  glext_glMultiTexCoord4hvNV
    = (PFNGLMULTITEXCOORD4HVNVPROC)load (userptr, "glMultiTexCoord4hvNV");
  glext_glNormal3hNV = (PFNGLNORMAL3HNVPROC)load (userptr, "glNormal3hNV");
  glext_glNormal3hvNV = (PFNGLNORMAL3HVNVPROC)load (userptr, "glNormal3hvNV");
  glext_glSecondaryColor3hNV
    = (PFNGLSECONDARYCOLOR3HNVPROC)load (userptr, "glSecondaryColor3hNV");
  glext_glSecondaryColor3hvNV
    = (PFNGLSECONDARYCOLOR3HVNVPROC)load (userptr, "glSecondaryColor3hvNV");
  glext_glTexCoord1hNV
    = (PFNGLTEXCOORD1HNVPROC)load (userptr, "glTexCoord1hNV");
  glext_glTexCoord1hvNV
    = (PFNGLTEXCOORD1HVNVPROC)load (userptr, "glTexCoord1hvNV");
  glext_glTexCoord2hNV
    = (PFNGLTEXCOORD2HNVPROC)load (userptr, "glTexCoord2hNV");
  glext_glTexCoord2hvNV
    = (PFNGLTEXCOORD2HVNVPROC)load (userptr, "glTexCoord2hvNV");
  glext_glTexCoord3hNV
    = (PFNGLTEXCOORD3HNVPROC)load (userptr, "glTexCoord3hNV");
  glext_glTexCoord3hvNV
    = (PFNGLTEXCOORD3HVNVPROC)load (userptr, "glTexCoord3hvNV");
  glext_glTexCoord4hNV
    = (PFNGLTEXCOORD4HNVPROC)load (userptr, "glTexCoord4hNV");
  glext_glTexCoord4hvNV
    = (PFNGLTEXCOORD4HVNVPROC)load (userptr, "glTexCoord4hvNV");
  glext_glVertex2hNV = (PFNGLVERTEX2HNVPROC)load (userptr, "glVertex2hNV");
  glext_glVertex2hvNV = (PFNGLVERTEX2HVNVPROC)load (userptr, "glVertex2hvNV");
  glext_glVertex3hNV = (PFNGLVERTEX3HNVPROC)load (userptr, "glVertex3hNV");
  glext_glVertex3hvNV = (PFNGLVERTEX3HVNVPROC)load (userptr, "glVertex3hvNV");
  glext_glVertex4hNV = (PFNGLVERTEX4HNVPROC)load (userptr, "glVertex4hNV");
  glext_glVertex4hvNV = (PFNGLVERTEX4HVNVPROC)load (userptr, "glVertex4hvNV");
  glext_glVertexAttrib1hNV
    = (PFNGLVERTEXATTRIB1HNVPROC)load (userptr, "glVertexAttrib1hNV");
  glext_glVertexAttrib1hvNV
    = (PFNGLVERTEXATTRIB1HVNVPROC)load (userptr, "glVertexAttrib1hvNV");
  glext_glVertexAttrib2hNV
    = (PFNGLVERTEXATTRIB2HNVPROC)load (userptr, "glVertexAttrib2hNV");
  glext_glVertexAttrib2hvNV
    = (PFNGLVERTEXATTRIB2HVNVPROC)load (userptr, "glVertexAttrib2hvNV");
  glext_glVertexAttrib3hNV
    = (PFNGLVERTEXATTRIB3HNVPROC)load (userptr, "glVertexAttrib3hNV");
  glext_glVertexAttrib3hvNV
    = (PFNGLVERTEXATTRIB3HVNVPROC)load (userptr, "glVertexAttrib3hvNV");
  glext_glVertexAttrib4hNV
    = (PFNGLVERTEXATTRIB4HNVPROC)load (userptr, "glVertexAttrib4hNV");
  glext_glVertexAttrib4hvNV
    = (PFNGLVERTEXATTRIB4HVNVPROC)load (userptr, "glVertexAttrib4hvNV");
  glext_glVertexAttribs1hvNV
    = (PFNGLVERTEXATTRIBS1HVNVPROC)load (userptr, "glVertexAttribs1hvNV");
  glext_glVertexAttribs2hvNV
    = (PFNGLVERTEXATTRIBS2HVNVPROC)load (userptr, "glVertexAttribs2hvNV");
  glext_glVertexAttribs3hvNV
    = (PFNGLVERTEXATTRIBS3HVNVPROC)load (userptr, "glVertexAttribs3hvNV");
  glext_glVertexAttribs4hvNV
    = (PFNGLVERTEXATTRIBS4HVNVPROC)load (userptr, "glVertexAttribs4hvNV");
  glext_glVertexWeighthNV
    = (PFNGLVERTEXWEIGHTHNVPROC)load (userptr, "glVertexWeighthNV");
  glext_glVertexWeighthvNV
    = (PFNGLVERTEXWEIGHTHVNVPROC)load (userptr, "glVertexWeighthvNV");
}
static void
glext_gl_load_GL_NV_internalformat_sample_query (GLEXTuserptrloadfunc load,
                                                 void* userptr) {
  if (!GLEXT_GL_NV_internalformat_sample_query)
    return;
  glext_glGetInternalformatSampleivNV
    = (PFNGLGETINTERNALFORMATSAMPLEIVNVPROC)load (
      userptr, "glGetInternalformatSampleivNV");
}
static void
glext_gl_load_GL_NV_memory_attachment (GLEXTuserptrloadfunc load,
                                       void* userptr) {
  if (!GLEXT_GL_NV_memory_attachment)
    return;
  glext_glBufferAttachMemoryNV
    = (PFNGLBUFFERATTACHMEMORYNVPROC)load (userptr, "glBufferAttachMemoryNV");
  glext_glGetMemoryObjectDetachedResourcesuivNV
    = (PFNGLGETMEMORYOBJECTDETACHEDRESOURCESUIVNVPROC)load (
      userptr, "glGetMemoryObjectDetachedResourcesuivNV");
  glext_glNamedBufferAttachMemoryNV
    = (PFNGLNAMEDBUFFERATTACHMEMORYNVPROC)load (userptr,
                                                "glNamedBufferAttachMemoryNV");
  glext_glResetMemoryObjectParameterNV
    = (PFNGLRESETMEMORYOBJECTPARAMETERNVPROC)load (
      userptr, "glResetMemoryObjectParameterNV");
  glext_glTexAttachMemoryNV
    = (PFNGLTEXATTACHMEMORYNVPROC)load (userptr, "glTexAttachMemoryNV");
  glext_glTextureAttachMemoryNV = (PFNGLTEXTUREATTACHMEMORYNVPROC)load (
    userptr, "glTextureAttachMemoryNV");
}
static void
glext_gl_load_GL_NV_memory_object_sparse (GLEXTuserptrloadfunc load,
                                          void* userptr) {
  if (!GLEXT_GL_NV_memory_object_sparse)
    return;
  glext_glBufferPageCommitmentMemNV
    = (PFNGLBUFFERPAGECOMMITMENTMEMNVPROC)load (userptr,
                                                "glBufferPageCommitmentMemNV");
  glext_glNamedBufferPageCommitmentMemNV
    = (PFNGLNAMEDBUFFERPAGECOMMITMENTMEMNVPROC)load (
      userptr, "glNamedBufferPageCommitmentMemNV");
  glext_glTexPageCommitmentMemNV = (PFNGLTEXPAGECOMMITMENTMEMNVPROC)load (
    userptr, "glTexPageCommitmentMemNV");
  glext_glTexturePageCommitmentMemNV
    = (PFNGLTEXTUREPAGECOMMITMENTMEMNVPROC)load (
      userptr, "glTexturePageCommitmentMemNV");
}
static void
glext_gl_load_GL_NV_mesh_shader (GLEXTuserptrloadfunc load, void* userptr) {
  if (!GLEXT_GL_NV_mesh_shader)
    return;
  glext_glDrawMeshTasksIndirectNV = (PFNGLDRAWMESHTASKSINDIRECTNVPROC)load (
    userptr, "glDrawMeshTasksIndirectNV");
  glext_glDrawMeshTasksNV
    = (PFNGLDRAWMESHTASKSNVPROC)load (userptr, "glDrawMeshTasksNV");
  glext_glMultiDrawMeshTasksIndirectCountNV
    = (PFNGLMULTIDRAWMESHTASKSINDIRECTCOUNTNVPROC)load (
      userptr, "glMultiDrawMeshTasksIndirectCountNV");
  glext_glMultiDrawMeshTasksIndirectNV
    = (PFNGLMULTIDRAWMESHTASKSINDIRECTNVPROC)load (
      userptr, "glMultiDrawMeshTasksIndirectNV");
}
static void
glext_gl_load_GL_NV_occlusion_query (GLEXTuserptrloadfunc load,
                                     void* userptr) {
  if (!GLEXT_GL_NV_occlusion_query)
    return;
  glext_glBeginOcclusionQueryNV = (PFNGLBEGINOCCLUSIONQUERYNVPROC)load (
    userptr, "glBeginOcclusionQueryNV");
  glext_glDeleteOcclusionQueriesNV = (PFNGLDELETEOCCLUSIONQUERIESNVPROC)load (
    userptr, "glDeleteOcclusionQueriesNV");
  glext_glEndOcclusionQueryNV
    = (PFNGLENDOCCLUSIONQUERYNVPROC)load (userptr, "glEndOcclusionQueryNV");
  glext_glGenOcclusionQueriesNV = (PFNGLGENOCCLUSIONQUERIESNVPROC)load (
    userptr, "glGenOcclusionQueriesNV");
  glext_glGetOcclusionQueryivNV = (PFNGLGETOCCLUSIONQUERYIVNVPROC)load (
    userptr, "glGetOcclusionQueryivNV");
  glext_glGetOcclusionQueryuivNV = (PFNGLGETOCCLUSIONQUERYUIVNVPROC)load (
    userptr, "glGetOcclusionQueryuivNV");
  glext_glIsOcclusionQueryNV
    = (PFNGLISOCCLUSIONQUERYNVPROC)load (userptr, "glIsOcclusionQueryNV");
}
static void
glext_gl_load_GL_NV_parameter_buffer_object (GLEXTuserptrloadfunc load,
                                             void* userptr) {
  if (!GLEXT_GL_NV_parameter_buffer_object)
    return;
  glext_glProgramBufferParametersIivNV
    = (PFNGLPROGRAMBUFFERPARAMETERSIIVNVPROC)load (
      userptr, "glProgramBufferParametersIivNV");
  glext_glProgramBufferParametersIuivNV
    = (PFNGLPROGRAMBUFFERPARAMETERSIUIVNVPROC)load (
      userptr, "glProgramBufferParametersIuivNV");
  glext_glProgramBufferParametersfvNV
    = (PFNGLPROGRAMBUFFERPARAMETERSFVNVPROC)load (
      userptr, "glProgramBufferParametersfvNV");
}
static void
glext_gl_load_GL_NV_path_rendering (GLEXTuserptrloadfunc load, void* userptr) {
  if (!GLEXT_GL_NV_path_rendering)
    return;
  glext_glCopyPathNV = (PFNGLCOPYPATHNVPROC)load (userptr, "glCopyPathNV");
  glext_glCoverFillPathInstancedNV = (PFNGLCOVERFILLPATHINSTANCEDNVPROC)load (
    userptr, "glCoverFillPathInstancedNV");
  glext_glCoverFillPathNV
    = (PFNGLCOVERFILLPATHNVPROC)load (userptr, "glCoverFillPathNV");
  glext_glCoverStrokePathInstancedNV
    = (PFNGLCOVERSTROKEPATHINSTANCEDNVPROC)load (
      userptr, "glCoverStrokePathInstancedNV");
  glext_glCoverStrokePathNV
    = (PFNGLCOVERSTROKEPATHNVPROC)load (userptr, "glCoverStrokePathNV");
  glext_glDeletePathsNV
    = (PFNGLDELETEPATHSNVPROC)load (userptr, "glDeletePathsNV");
  glext_glGenPathsNV = (PFNGLGENPATHSNVPROC)load (userptr, "glGenPathsNV");
  glext_glGetPathCommandsNV
    = (PFNGLGETPATHCOMMANDSNVPROC)load (userptr, "glGetPathCommandsNV");
  glext_glGetPathCoordsNV
    = (PFNGLGETPATHCOORDSNVPROC)load (userptr, "glGetPathCoordsNV");
  glext_glGetPathDashArrayNV
    = (PFNGLGETPATHDASHARRAYNVPROC)load (userptr, "glGetPathDashArrayNV");
  glext_glGetPathLengthNV
    = (PFNGLGETPATHLENGTHNVPROC)load (userptr, "glGetPathLengthNV");
  glext_glGetPathMetricRangeNV
    = (PFNGLGETPATHMETRICRANGENVPROC)load (userptr, "glGetPathMetricRangeNV");
  glext_glGetPathMetricsNV
    = (PFNGLGETPATHMETRICSNVPROC)load (userptr, "glGetPathMetricsNV");
  glext_glGetPathParameterfvNV
    = (PFNGLGETPATHPARAMETERFVNVPROC)load (userptr, "glGetPathParameterfvNV");
  glext_glGetPathParameterivNV
    = (PFNGLGETPATHPARAMETERIVNVPROC)load (userptr, "glGetPathParameterivNV");
  glext_glGetPathSpacingNV
    = (PFNGLGETPATHSPACINGNVPROC)load (userptr, "glGetPathSpacingNV");
  glext_glGetProgramResourcefvNV = (PFNGLGETPROGRAMRESOURCEFVNVPROC)load (
    userptr, "glGetProgramResourcefvNV");
  glext_glInterpolatePathsNV
    = (PFNGLINTERPOLATEPATHSNVPROC)load (userptr, "glInterpolatePathsNV");
  glext_glIsPathNV = (PFNGLISPATHNVPROC)load (userptr, "glIsPathNV");
  glext_glIsPointInFillPathNV
    = (PFNGLISPOINTINFILLPATHNVPROC)load (userptr, "glIsPointInFillPathNV");
  glext_glIsPointInStrokePathNV = (PFNGLISPOINTINSTROKEPATHNVPROC)load (
    userptr, "glIsPointInStrokePathNV");
  glext_glMatrixFrustumEXT
    = (PFNGLMATRIXFRUSTUMEXTPROC)load (userptr, "glMatrixFrustumEXT");
  glext_glMatrixLoad3x2fNV
    = (PFNGLMATRIXLOAD3X2FNVPROC)load (userptr, "glMatrixLoad3x2fNV");
  glext_glMatrixLoad3x3fNV
    = (PFNGLMATRIXLOAD3X3FNVPROC)load (userptr, "glMatrixLoad3x3fNV");
  glext_glMatrixLoadIdentityEXT = (PFNGLMATRIXLOADIDENTITYEXTPROC)load (
    userptr, "glMatrixLoadIdentityEXT");
  glext_glMatrixLoadTranspose3x3fNV
    = (PFNGLMATRIXLOADTRANSPOSE3X3FNVPROC)load (userptr,
                                                "glMatrixLoadTranspose3x3fNV");
  glext_glMatrixLoadTransposedEXT = (PFNGLMATRIXLOADTRANSPOSEDEXTPROC)load (
    userptr, "glMatrixLoadTransposedEXT");
  glext_glMatrixLoadTransposefEXT = (PFNGLMATRIXLOADTRANSPOSEFEXTPROC)load (
    userptr, "glMatrixLoadTransposefEXT");
  glext_glMatrixLoaddEXT
    = (PFNGLMATRIXLOADDEXTPROC)load (userptr, "glMatrixLoaddEXT");
  glext_glMatrixLoadfEXT
    = (PFNGLMATRIXLOADFEXTPROC)load (userptr, "glMatrixLoadfEXT");
  glext_glMatrixMult3x2fNV
    = (PFNGLMATRIXMULT3X2FNVPROC)load (userptr, "glMatrixMult3x2fNV");
  glext_glMatrixMult3x3fNV
    = (PFNGLMATRIXMULT3X3FNVPROC)load (userptr, "glMatrixMult3x3fNV");
  glext_glMatrixMultTranspose3x3fNV
    = (PFNGLMATRIXMULTTRANSPOSE3X3FNVPROC)load (userptr,
                                                "glMatrixMultTranspose3x3fNV");
  glext_glMatrixMultTransposedEXT = (PFNGLMATRIXMULTTRANSPOSEDEXTPROC)load (
    userptr, "glMatrixMultTransposedEXT");
  glext_glMatrixMultTransposefEXT = (PFNGLMATRIXMULTTRANSPOSEFEXTPROC)load (
    userptr, "glMatrixMultTransposefEXT");
  glext_glMatrixMultdEXT
    = (PFNGLMATRIXMULTDEXTPROC)load (userptr, "glMatrixMultdEXT");
  glext_glMatrixMultfEXT
    = (PFNGLMATRIXMULTFEXTPROC)load (userptr, "glMatrixMultfEXT");
  glext_glMatrixOrthoEXT
    = (PFNGLMATRIXORTHOEXTPROC)load (userptr, "glMatrixOrthoEXT");
  glext_glMatrixPopEXT
    = (PFNGLMATRIXPOPEXTPROC)load (userptr, "glMatrixPopEXT");
  glext_glMatrixPushEXT
    = (PFNGLMATRIXPUSHEXTPROC)load (userptr, "glMatrixPushEXT");
  glext_glMatrixRotatedEXT
    = (PFNGLMATRIXROTATEDEXTPROC)load (userptr, "glMatrixRotatedEXT");
  glext_glMatrixRotatefEXT
    = (PFNGLMATRIXROTATEFEXTPROC)load (userptr, "glMatrixRotatefEXT");
  glext_glMatrixScaledEXT
    = (PFNGLMATRIXSCALEDEXTPROC)load (userptr, "glMatrixScaledEXT");
  glext_glMatrixScalefEXT
    = (PFNGLMATRIXSCALEFEXTPROC)load (userptr, "glMatrixScalefEXT");
  glext_glMatrixTranslatedEXT
    = (PFNGLMATRIXTRANSLATEDEXTPROC)load (userptr, "glMatrixTranslatedEXT");
  glext_glMatrixTranslatefEXT
    = (PFNGLMATRIXTRANSLATEFEXTPROC)load (userptr, "glMatrixTranslatefEXT");
  glext_glPathCommandsNV
    = (PFNGLPATHCOMMANDSNVPROC)load (userptr, "glPathCommandsNV");
  glext_glPathCoordsNV
    = (PFNGLPATHCOORDSNVPROC)load (userptr, "glPathCoordsNV");
  glext_glPathCoverDepthFuncNV
    = (PFNGLPATHCOVERDEPTHFUNCNVPROC)load (userptr, "glPathCoverDepthFuncNV");
  glext_glPathDashArrayNV
    = (PFNGLPATHDASHARRAYNVPROC)load (userptr, "glPathDashArrayNV");
  glext_glPathGlyphIndexArrayNV = (PFNGLPATHGLYPHINDEXARRAYNVPROC)load (
    userptr, "glPathGlyphIndexArrayNV");
  glext_glPathGlyphIndexRangeNV = (PFNGLPATHGLYPHINDEXRANGENVPROC)load (
    userptr, "glPathGlyphIndexRangeNV");
  glext_glPathGlyphRangeNV
    = (PFNGLPATHGLYPHRANGENVPROC)load (userptr, "glPathGlyphRangeNV");
  glext_glPathGlyphsNV
    = (PFNGLPATHGLYPHSNVPROC)load (userptr, "glPathGlyphsNV");
  glext_glPathMemoryGlyphIndexArrayNV
    = (PFNGLPATHMEMORYGLYPHINDEXARRAYNVPROC)load (
      userptr, "glPathMemoryGlyphIndexArrayNV");
  glext_glPathParameterfNV
    = (PFNGLPATHPARAMETERFNVPROC)load (userptr, "glPathParameterfNV");
  glext_glPathParameterfvNV
    = (PFNGLPATHPARAMETERFVNVPROC)load (userptr, "glPathParameterfvNV");
  glext_glPathParameteriNV
    = (PFNGLPATHPARAMETERINVPROC)load (userptr, "glPathParameteriNV");
  glext_glPathParameterivNV
    = (PFNGLPATHPARAMETERIVNVPROC)load (userptr, "glPathParameterivNV");
  glext_glPathStencilDepthOffsetNV = (PFNGLPATHSTENCILDEPTHOFFSETNVPROC)load (
    userptr, "glPathStencilDepthOffsetNV");
  glext_glPathStencilFuncNV
    = (PFNGLPATHSTENCILFUNCNVPROC)load (userptr, "glPathStencilFuncNV");
  glext_glPathStringNV
    = (PFNGLPATHSTRINGNVPROC)load (userptr, "glPathStringNV");
  glext_glPathSubCommandsNV
    = (PFNGLPATHSUBCOMMANDSNVPROC)load (userptr, "glPathSubCommandsNV");
  glext_glPathSubCoordsNV
    = (PFNGLPATHSUBCOORDSNVPROC)load (userptr, "glPathSubCoordsNV");
  glext_glPointAlongPathNV
    = (PFNGLPOINTALONGPATHNVPROC)load (userptr, "glPointAlongPathNV");
  glext_glProgramPathFragmentInputGenNV
    = (PFNGLPROGRAMPATHFRAGMENTINPUTGENNVPROC)load (
      userptr, "glProgramPathFragmentInputGenNV");
  glext_glStencilFillPathInstancedNV
    = (PFNGLSTENCILFILLPATHINSTANCEDNVPROC)load (
      userptr, "glStencilFillPathInstancedNV");
  glext_glStencilFillPathNV
    = (PFNGLSTENCILFILLPATHNVPROC)load (userptr, "glStencilFillPathNV");
  glext_glStencilStrokePathInstancedNV
    = (PFNGLSTENCILSTROKEPATHINSTANCEDNVPROC)load (
      userptr, "glStencilStrokePathInstancedNV");
  glext_glStencilStrokePathNV
    = (PFNGLSTENCILSTROKEPATHNVPROC)load (userptr, "glStencilStrokePathNV");
  glext_glStencilThenCoverFillPathInstancedNV
    = (PFNGLSTENCILTHENCOVERFILLPATHINSTANCEDNVPROC)load (
      userptr, "glStencilThenCoverFillPathInstancedNV");
  glext_glStencilThenCoverFillPathNV
    = (PFNGLSTENCILTHENCOVERFILLPATHNVPROC)load (
      userptr, "glStencilThenCoverFillPathNV");
  glext_glStencilThenCoverStrokePathInstancedNV
    = (PFNGLSTENCILTHENCOVERSTROKEPATHINSTANCEDNVPROC)load (
      userptr, "glStencilThenCoverStrokePathInstancedNV");
  glext_glStencilThenCoverStrokePathNV
    = (PFNGLSTENCILTHENCOVERSTROKEPATHNVPROC)load (
      userptr, "glStencilThenCoverStrokePathNV");
  glext_glTransformPathNV
    = (PFNGLTRANSFORMPATHNVPROC)load (userptr, "glTransformPathNV");
  glext_glWeightPathsNV
    = (PFNGLWEIGHTPATHSNVPROC)load (userptr, "glWeightPathsNV");
}
static void
glext_gl_load_GL_NV_pixel_data_range (GLEXTuserptrloadfunc load,
                                      void* userptr) {
  if (!GLEXT_GL_NV_pixel_data_range)
    return;
  glext_glFlushPixelDataRangeNV = (PFNGLFLUSHPIXELDATARANGENVPROC)load (
    userptr, "glFlushPixelDataRangeNV");
  glext_glPixelDataRangeNV
    = (PFNGLPIXELDATARANGENVPROC)load (userptr, "glPixelDataRangeNV");
}
static void
glext_gl_load_GL_NV_point_sprite (GLEXTuserptrloadfunc load, void* userptr) {
  if (!GLEXT_GL_NV_point_sprite)
    return;
  glext_glPointParameteriNV
    = (PFNGLPOINTPARAMETERINVPROC)load (userptr, "glPointParameteriNV");
  glext_glPointParameterivNV
    = (PFNGLPOINTPARAMETERIVNVPROC)load (userptr, "glPointParameterivNV");
}
static void
glext_gl_load_GL_NV_present_video (GLEXTuserptrloadfunc load, void* userptr) {
  if (!GLEXT_GL_NV_present_video)
    return;
  glext_glGetVideoi64vNV
    = (PFNGLGETVIDEOI64VNVPROC)load (userptr, "glGetVideoi64vNV");
  glext_glGetVideoivNV
    = (PFNGLGETVIDEOIVNVPROC)load (userptr, "glGetVideoivNV");
  glext_glGetVideoui64vNV
    = (PFNGLGETVIDEOUI64VNVPROC)load (userptr, "glGetVideoui64vNV");
  glext_glGetVideouivNV
    = (PFNGLGETVIDEOUIVNVPROC)load (userptr, "glGetVideouivNV");
  glext_glPresentFrameDualFillNV = (PFNGLPRESENTFRAMEDUALFILLNVPROC)load (
    userptr, "glPresentFrameDualFillNV");
  glext_glPresentFrameKeyedNV
    = (PFNGLPRESENTFRAMEKEYEDNVPROC)load (userptr, "glPresentFrameKeyedNV");
}
static void
glext_gl_load_GL_NV_primitive_restart (GLEXTuserptrloadfunc load,
                                       void* userptr) {
  if (!GLEXT_GL_NV_primitive_restart)
    return;
  glext_glPrimitiveRestartIndexNV = (PFNGLPRIMITIVERESTARTINDEXNVPROC)load (
    userptr, "glPrimitiveRestartIndexNV");
  glext_glPrimitiveRestartNV
    = (PFNGLPRIMITIVERESTARTNVPROC)load (userptr, "glPrimitiveRestartNV");
}
static void
glext_gl_load_GL_NV_query_resource (GLEXTuserptrloadfunc load, void* userptr) {
  if (!GLEXT_GL_NV_query_resource)
    return;
  glext_glQueryResourceNV
    = (PFNGLQUERYRESOURCENVPROC)load (userptr, "glQueryResourceNV");
}
static void
glext_gl_load_GL_NV_query_resource_tag (GLEXTuserptrloadfunc load,
                                        void* userptr) {
  if (!GLEXT_GL_NV_query_resource_tag)
    return;
  glext_glDeleteQueryResourceTagNV = (PFNGLDELETEQUERYRESOURCETAGNVPROC)load (
    userptr, "glDeleteQueryResourceTagNV");
  glext_glGenQueryResourceTagNV = (PFNGLGENQUERYRESOURCETAGNVPROC)load (
    userptr, "glGenQueryResourceTagNV");
  glext_glQueryResourceTagNV
    = (PFNGLQUERYRESOURCETAGNVPROC)load (userptr, "glQueryResourceTagNV");
}
static void
glext_gl_load_GL_NV_register_combiners (GLEXTuserptrloadfunc load,
                                        void* userptr) {
  if (!GLEXT_GL_NV_register_combiners)
    return;
  glext_glCombinerInputNV
    = (PFNGLCOMBINERINPUTNVPROC)load (userptr, "glCombinerInputNV");
  glext_glCombinerOutputNV
    = (PFNGLCOMBINEROUTPUTNVPROC)load (userptr, "glCombinerOutputNV");
  glext_glCombinerParameterfNV
    = (PFNGLCOMBINERPARAMETERFNVPROC)load (userptr, "glCombinerParameterfNV");
  glext_glCombinerParameterfvNV = (PFNGLCOMBINERPARAMETERFVNVPROC)load (
    userptr, "glCombinerParameterfvNV");
  glext_glCombinerParameteriNV
    = (PFNGLCOMBINERPARAMETERINVPROC)load (userptr, "glCombinerParameteriNV");
  glext_glCombinerParameterivNV = (PFNGLCOMBINERPARAMETERIVNVPROC)load (
    userptr, "glCombinerParameterivNV");
  glext_glFinalCombinerInputNV
    = (PFNGLFINALCOMBINERINPUTNVPROC)load (userptr, "glFinalCombinerInputNV");
  glext_glGetCombinerInputParameterfvNV
    = (PFNGLGETCOMBINERINPUTPARAMETERFVNVPROC)load (
      userptr, "glGetCombinerInputParameterfvNV");
  glext_glGetCombinerInputParameterivNV
    = (PFNGLGETCOMBINERINPUTPARAMETERIVNVPROC)load (
      userptr, "glGetCombinerInputParameterivNV");
  glext_glGetCombinerOutputParameterfvNV
    = (PFNGLGETCOMBINEROUTPUTPARAMETERFVNVPROC)load (
      userptr, "glGetCombinerOutputParameterfvNV");
  glext_glGetCombinerOutputParameterivNV
    = (PFNGLGETCOMBINEROUTPUTPARAMETERIVNVPROC)load (
      userptr, "glGetCombinerOutputParameterivNV");
  glext_glGetFinalCombinerInputParameterfvNV
    = (PFNGLGETFINALCOMBINERINPUTPARAMETERFVNVPROC)load (
      userptr, "glGetFinalCombinerInputParameterfvNV");
  glext_glGetFinalCombinerInputParameterivNV
    = (PFNGLGETFINALCOMBINERINPUTPARAMETERIVNVPROC)load (
      userptr, "glGetFinalCombinerInputParameterivNV");
}
static void
glext_gl_load_GL_NV_register_combiners2 (GLEXTuserptrloadfunc load,
                                         void* userptr) {
  if (!GLEXT_GL_NV_register_combiners2)
    return;
  glext_glCombinerStageParameterfvNV
    = (PFNGLCOMBINERSTAGEPARAMETERFVNVPROC)load (
      userptr, "glCombinerStageParameterfvNV");
  glext_glGetCombinerStageParameterfvNV
    = (PFNGLGETCOMBINERSTAGEPARAMETERFVNVPROC)load (
      userptr, "glGetCombinerStageParameterfvNV");
}
static void
glext_gl_load_GL_NV_sample_locations (GLEXTuserptrloadfunc load,
                                      void* userptr) {
  if (!GLEXT_GL_NV_sample_locations)
    return;
  glext_glFramebufferSampleLocationsfvNV
    = (PFNGLFRAMEBUFFERSAMPLELOCATIONSFVNVPROC)load (
      userptr, "glFramebufferSampleLocationsfvNV");
  glext_glNamedFramebufferSampleLocationsfvNV
    = (PFNGLNAMEDFRAMEBUFFERSAMPLELOCATIONSFVNVPROC)load (
      userptr, "glNamedFramebufferSampleLocationsfvNV");
  glext_glResolveDepthValuesNV
    = (PFNGLRESOLVEDEPTHVALUESNVPROC)load (userptr, "glResolveDepthValuesNV");
}
static void
glext_gl_load_GL_NV_scissor_exclusive (GLEXTuserptrloadfunc load,
                                       void* userptr) {
  if (!GLEXT_GL_NV_scissor_exclusive)
    return;
  glext_glScissorExclusiveArrayvNV = (PFNGLSCISSOREXCLUSIVEARRAYVNVPROC)load (
    userptr, "glScissorExclusiveArrayvNV");
  glext_glScissorExclusiveNV
    = (PFNGLSCISSOREXCLUSIVENVPROC)load (userptr, "glScissorExclusiveNV");
}
static void
glext_gl_load_GL_NV_shader_buffer_load (GLEXTuserptrloadfunc load,
                                        void* userptr) {
  if (!GLEXT_GL_NV_shader_buffer_load)
    return;
  glext_glGetBufferParameterui64vNV
    = (PFNGLGETBUFFERPARAMETERUI64VNVPROC)load (userptr,
                                                "glGetBufferParameterui64vNV");
  glext_glGetIntegerui64vNV
    = (PFNGLGETINTEGERUI64VNVPROC)load (userptr, "glGetIntegerui64vNV");
  glext_glGetNamedBufferParameterui64vNV
    = (PFNGLGETNAMEDBUFFERPARAMETERUI64VNVPROC)load (
      userptr, "glGetNamedBufferParameterui64vNV");
  glext_glGetUniformui64vNV
    = (PFNGLGETUNIFORMUI64VNVPROC)load (userptr, "glGetUniformui64vNV");
  glext_glIsBufferResidentNV
    = (PFNGLISBUFFERRESIDENTNVPROC)load (userptr, "glIsBufferResidentNV");
  glext_glIsNamedBufferResidentNV = (PFNGLISNAMEDBUFFERRESIDENTNVPROC)load (
    userptr, "glIsNamedBufferResidentNV");
  glext_glMakeBufferNonResidentNV = (PFNGLMAKEBUFFERNONRESIDENTNVPROC)load (
    userptr, "glMakeBufferNonResidentNV");
  glext_glMakeBufferResidentNV
    = (PFNGLMAKEBUFFERRESIDENTNVPROC)load (userptr, "glMakeBufferResidentNV");
  glext_glMakeNamedBufferNonResidentNV
    = (PFNGLMAKENAMEDBUFFERNONRESIDENTNVPROC)load (
      userptr, "glMakeNamedBufferNonResidentNV");
  glext_glMakeNamedBufferResidentNV
    = (PFNGLMAKENAMEDBUFFERRESIDENTNVPROC)load (userptr,
                                                "glMakeNamedBufferResidentNV");
  glext_glProgramUniformui64NV
    = (PFNGLPROGRAMUNIFORMUI64NVPROC)load (userptr, "glProgramUniformui64NV");
  glext_glProgramUniformui64vNV = (PFNGLPROGRAMUNIFORMUI64VNVPROC)load (
    userptr, "glProgramUniformui64vNV");
  glext_glUniformui64NV
    = (PFNGLUNIFORMUI64NVPROC)load (userptr, "glUniformui64NV");
  glext_glUniformui64vNV
    = (PFNGLUNIFORMUI64VNVPROC)load (userptr, "glUniformui64vNV");
}
static void
glext_gl_load_GL_NV_shading_rate_image (GLEXTuserptrloadfunc load,
                                        void* userptr) {
  if (!GLEXT_GL_NV_shading_rate_image)
    return;
  glext_glBindShadingRateImageNV = (PFNGLBINDSHADINGRATEIMAGENVPROC)load (
    userptr, "glBindShadingRateImageNV");
  glext_glGetShadingRateImagePaletteNV
    = (PFNGLGETSHADINGRATEIMAGEPALETTENVPROC)load (
      userptr, "glGetShadingRateImagePaletteNV");
  glext_glGetShadingRateSampleLocationivNV
    = (PFNGLGETSHADINGRATESAMPLELOCATIONIVNVPROC)load (
      userptr, "glGetShadingRateSampleLocationivNV");
  glext_glShadingRateImageBarrierNV
    = (PFNGLSHADINGRATEIMAGEBARRIERNVPROC)load (userptr,
                                                "glShadingRateImageBarrierNV");
  glext_glShadingRateImagePaletteNV
    = (PFNGLSHADINGRATEIMAGEPALETTENVPROC)load (userptr,
                                                "glShadingRateImagePaletteNV");
  glext_glShadingRateSampleOrderCustomNV
    = (PFNGLSHADINGRATESAMPLEORDERCUSTOMNVPROC)load (
      userptr, "glShadingRateSampleOrderCustomNV");
  glext_glShadingRateSampleOrderNV = (PFNGLSHADINGRATESAMPLEORDERNVPROC)load (
    userptr, "glShadingRateSampleOrderNV");
}
static void
glext_gl_load_GL_NV_texture_barrier (GLEXTuserptrloadfunc load,
                                     void* userptr) {
  if (!GLEXT_GL_NV_texture_barrier)
    return;
  glext_glTextureBarrierNV
    = (PFNGLTEXTUREBARRIERNVPROC)load (userptr, "glTextureBarrierNV");
}
static void
glext_gl_load_GL_NV_texture_multisample (GLEXTuserptrloadfunc load,
                                         void* userptr) {
  if (!GLEXT_GL_NV_texture_multisample)
    return;
  glext_glTexImage2DMultisampleCoverageNV
    = (PFNGLTEXIMAGE2DMULTISAMPLECOVERAGENVPROC)load (
      userptr, "glTexImage2DMultisampleCoverageNV");
  glext_glTexImage3DMultisampleCoverageNV
    = (PFNGLTEXIMAGE3DMULTISAMPLECOVERAGENVPROC)load (
      userptr, "glTexImage3DMultisampleCoverageNV");
  glext_glTextureImage2DMultisampleCoverageNV
    = (PFNGLTEXTUREIMAGE2DMULTISAMPLECOVERAGENVPROC)load (
      userptr, "glTextureImage2DMultisampleCoverageNV");
  glext_glTextureImage2DMultisampleNV
    = (PFNGLTEXTUREIMAGE2DMULTISAMPLENVPROC)load (
      userptr, "glTextureImage2DMultisampleNV");
  glext_glTextureImage3DMultisampleCoverageNV
    = (PFNGLTEXTUREIMAGE3DMULTISAMPLECOVERAGENVPROC)load (
      userptr, "glTextureImage3DMultisampleCoverageNV");
  glext_glTextureImage3DMultisampleNV
    = (PFNGLTEXTUREIMAGE3DMULTISAMPLENVPROC)load (
      userptr, "glTextureImage3DMultisampleNV");
}
static void
glext_gl_load_GL_NV_timeline_semaphore (GLEXTuserptrloadfunc load,
                                        void* userptr) {
  if (!GLEXT_GL_NV_timeline_semaphore)
    return;
  glext_glCreateSemaphoresNV
    = (PFNGLCREATESEMAPHORESNVPROC)load (userptr, "glCreateSemaphoresNV");
  glext_glGetSemaphoreParameterivNV
    = (PFNGLGETSEMAPHOREPARAMETERIVNVPROC)load (userptr,
                                                "glGetSemaphoreParameterivNV");
  glext_glSemaphoreParameterivNV = (PFNGLSEMAPHOREPARAMETERIVNVPROC)load (
    userptr, "glSemaphoreParameterivNV");
}
static void
glext_gl_load_GL_NV_transform_feedback (GLEXTuserptrloadfunc load,
                                        void* userptr) {
  if (!GLEXT_GL_NV_transform_feedback)
    return;
  glext_glActiveVaryingNV
    = (PFNGLACTIVEVARYINGNVPROC)load (userptr, "glActiveVaryingNV");
  glext_glBeginTransformFeedbackNV = (PFNGLBEGINTRANSFORMFEEDBACKNVPROC)load (
    userptr, "glBeginTransformFeedbackNV");
  glext_glBindBufferBaseNV
    = (PFNGLBINDBUFFERBASENVPROC)load (userptr, "glBindBufferBaseNV");
  glext_glBindBufferOffsetNV
    = (PFNGLBINDBUFFEROFFSETNVPROC)load (userptr, "glBindBufferOffsetNV");
  glext_glBindBufferRangeNV
    = (PFNGLBINDBUFFERRANGENVPROC)load (userptr, "glBindBufferRangeNV");
  glext_glEndTransformFeedbackNV = (PFNGLENDTRANSFORMFEEDBACKNVPROC)load (
    userptr, "glEndTransformFeedbackNV");
  glext_glGetActiveVaryingNV
    = (PFNGLGETACTIVEVARYINGNVPROC)load (userptr, "glGetActiveVaryingNV");
  glext_glGetTransformFeedbackVaryingNV
    = (PFNGLGETTRANSFORMFEEDBACKVARYINGNVPROC)load (
      userptr, "glGetTransformFeedbackVaryingNV");
  glext_glGetVaryingLocationNV
    = (PFNGLGETVARYINGLOCATIONNVPROC)load (userptr, "glGetVaryingLocationNV");
  glext_glTransformFeedbackAttribsNV
    = (PFNGLTRANSFORMFEEDBACKATTRIBSNVPROC)load (
      userptr, "glTransformFeedbackAttribsNV");
  glext_glTransformFeedbackStreamAttribsNV
    = (PFNGLTRANSFORMFEEDBACKSTREAMATTRIBSNVPROC)load (
      userptr, "glTransformFeedbackStreamAttribsNV");
  glext_glTransformFeedbackVaryingsNV
    = (PFNGLTRANSFORMFEEDBACKVARYINGSNVPROC)load (
      userptr, "glTransformFeedbackVaryingsNV");
}
static void
glext_gl_load_GL_NV_transform_feedback2 (GLEXTuserptrloadfunc load,
                                         void* userptr) {
  if (!GLEXT_GL_NV_transform_feedback2)
    return;
  glext_glBindTransformFeedbackNV = (PFNGLBINDTRANSFORMFEEDBACKNVPROC)load (
    userptr, "glBindTransformFeedbackNV");
  glext_glDeleteTransformFeedbacksNV
    = (PFNGLDELETETRANSFORMFEEDBACKSNVPROC)load (
      userptr, "glDeleteTransformFeedbacksNV");
  glext_glDrawTransformFeedbackNV = (PFNGLDRAWTRANSFORMFEEDBACKNVPROC)load (
    userptr, "glDrawTransformFeedbackNV");
  glext_glGenTransformFeedbacksNV = (PFNGLGENTRANSFORMFEEDBACKSNVPROC)load (
    userptr, "glGenTransformFeedbacksNV");
  glext_glIsTransformFeedbackNV = (PFNGLISTRANSFORMFEEDBACKNVPROC)load (
    userptr, "glIsTransformFeedbackNV");
  glext_glPauseTransformFeedbackNV = (PFNGLPAUSETRANSFORMFEEDBACKNVPROC)load (
    userptr, "glPauseTransformFeedbackNV");
  glext_glResumeTransformFeedbackNV
    = (PFNGLRESUMETRANSFORMFEEDBACKNVPROC)load (userptr,
                                                "glResumeTransformFeedbackNV");
}
static void
glext_gl_load_GL_NV_vdpau_interop (GLEXTuserptrloadfunc load, void* userptr) {
  if (!GLEXT_GL_NV_vdpau_interop)
    return;
  glext_glVDPAUFiniNV = (PFNGLVDPAUFININVPROC)load (userptr, "glVDPAUFiniNV");
  glext_glVDPAUGetSurfaceivNV
    = (PFNGLVDPAUGETSURFACEIVNVPROC)load (userptr, "glVDPAUGetSurfaceivNV");
  glext_glVDPAUInitNV = (PFNGLVDPAUINITNVPROC)load (userptr, "glVDPAUInitNV");
  glext_glVDPAUIsSurfaceNV
    = (PFNGLVDPAUISSURFACENVPROC)load (userptr, "glVDPAUIsSurfaceNV");
  glext_glVDPAUMapSurfacesNV
    = (PFNGLVDPAUMAPSURFACESNVPROC)load (userptr, "glVDPAUMapSurfacesNV");
  glext_glVDPAURegisterOutputSurfaceNV
    = (PFNGLVDPAUREGISTEROUTPUTSURFACENVPROC)load (
      userptr, "glVDPAURegisterOutputSurfaceNV");
  glext_glVDPAURegisterVideoSurfaceNV
    = (PFNGLVDPAUREGISTERVIDEOSURFACENVPROC)load (
      userptr, "glVDPAURegisterVideoSurfaceNV");
  glext_glVDPAUSurfaceAccessNV
    = (PFNGLVDPAUSURFACEACCESSNVPROC)load (userptr, "glVDPAUSurfaceAccessNV");
  glext_glVDPAUUnmapSurfacesNV
    = (PFNGLVDPAUUNMAPSURFACESNVPROC)load (userptr, "glVDPAUUnmapSurfacesNV");
  glext_glVDPAUUnregisterSurfaceNV = (PFNGLVDPAUUNREGISTERSURFACENVPROC)load (
    userptr, "glVDPAUUnregisterSurfaceNV");
}
static void
glext_gl_load_GL_NV_vdpau_interop2 (GLEXTuserptrloadfunc load, void* userptr) {
  if (!GLEXT_GL_NV_vdpau_interop2)
    return;
  glext_glVDPAURegisterVideoSurfaceWithPictureStructureNV
    = (PFNGLVDPAUREGISTERVIDEOSURFACEWITHPICTURESTRUCTURENVPROC)load (
      userptr, "glVDPAURegisterVideoSurfaceWithPictureStructureNV");
}
static void
glext_gl_load_GL_NV_vertex_array_range (GLEXTuserptrloadfunc load,
                                        void* userptr) {
  if (!GLEXT_GL_NV_vertex_array_range)
    return;
  glext_glFlushVertexArrayRangeNV = (PFNGLFLUSHVERTEXARRAYRANGENVPROC)load (
    userptr, "glFlushVertexArrayRangeNV");
  glext_glVertexArrayRangeNV
    = (PFNGLVERTEXARRAYRANGENVPROC)load (userptr, "glVertexArrayRangeNV");
}
static void
glext_gl_load_GL_NV_vertex_attrib_integer_64bit (GLEXTuserptrloadfunc load,
                                                 void* userptr) {
  if (!GLEXT_GL_NV_vertex_attrib_integer_64bit)
    return;
  glext_glGetVertexAttribLi64vNV = (PFNGLGETVERTEXATTRIBLI64VNVPROC)load (
    userptr, "glGetVertexAttribLi64vNV");
  glext_glGetVertexAttribLui64vNV = (PFNGLGETVERTEXATTRIBLUI64VNVPROC)load (
    userptr, "glGetVertexAttribLui64vNV");
  glext_glVertexAttribL1i64NV
    = (PFNGLVERTEXATTRIBL1I64NVPROC)load (userptr, "glVertexAttribL1i64NV");
  glext_glVertexAttribL1i64vNV
    = (PFNGLVERTEXATTRIBL1I64VNVPROC)load (userptr, "glVertexAttribL1i64vNV");
  glext_glVertexAttribL1ui64NV
    = (PFNGLVERTEXATTRIBL1UI64NVPROC)load (userptr, "glVertexAttribL1ui64NV");
  glext_glVertexAttribL1ui64vNV = (PFNGLVERTEXATTRIBL1UI64VNVPROC)load (
    userptr, "glVertexAttribL1ui64vNV");
  glext_glVertexAttribL2i64NV
    = (PFNGLVERTEXATTRIBL2I64NVPROC)load (userptr, "glVertexAttribL2i64NV");
  glext_glVertexAttribL2i64vNV
    = (PFNGLVERTEXATTRIBL2I64VNVPROC)load (userptr, "glVertexAttribL2i64vNV");
  glext_glVertexAttribL2ui64NV
    = (PFNGLVERTEXATTRIBL2UI64NVPROC)load (userptr, "glVertexAttribL2ui64NV");
  glext_glVertexAttribL2ui64vNV = (PFNGLVERTEXATTRIBL2UI64VNVPROC)load (
    userptr, "glVertexAttribL2ui64vNV");
  glext_glVertexAttribL3i64NV
    = (PFNGLVERTEXATTRIBL3I64NVPROC)load (userptr, "glVertexAttribL3i64NV");
  glext_glVertexAttribL3i64vNV
    = (PFNGLVERTEXATTRIBL3I64VNVPROC)load (userptr, "glVertexAttribL3i64vNV");
  glext_glVertexAttribL3ui64NV
    = (PFNGLVERTEXATTRIBL3UI64NVPROC)load (userptr, "glVertexAttribL3ui64NV");
  glext_glVertexAttribL3ui64vNV = (PFNGLVERTEXATTRIBL3UI64VNVPROC)load (
    userptr, "glVertexAttribL3ui64vNV");
  glext_glVertexAttribL4i64NV
    = (PFNGLVERTEXATTRIBL4I64NVPROC)load (userptr, "glVertexAttribL4i64NV");
  glext_glVertexAttribL4i64vNV
    = (PFNGLVERTEXATTRIBL4I64VNVPROC)load (userptr, "glVertexAttribL4i64vNV");
  glext_glVertexAttribL4ui64NV
    = (PFNGLVERTEXATTRIBL4UI64NVPROC)load (userptr, "glVertexAttribL4ui64NV");
  glext_glVertexAttribL4ui64vNV = (PFNGLVERTEXATTRIBL4UI64VNVPROC)load (
    userptr, "glVertexAttribL4ui64vNV");
  glext_glVertexAttribLFormatNV = (PFNGLVERTEXATTRIBLFORMATNVPROC)load (
    userptr, "glVertexAttribLFormatNV");
}
static void
glext_gl_load_GL_NV_vertex_buffer_unified_memory (GLEXTuserptrloadfunc load,
                                                  void* userptr) {
  if (!GLEXT_GL_NV_vertex_buffer_unified_memory)
    return;
  glext_glBufferAddressRangeNV
    = (PFNGLBUFFERADDRESSRANGENVPROC)load (userptr, "glBufferAddressRangeNV");
  glext_glColorFormatNV
    = (PFNGLCOLORFORMATNVPROC)load (userptr, "glColorFormatNV");
  glext_glEdgeFlagFormatNV
    = (PFNGLEDGEFLAGFORMATNVPROC)load (userptr, "glEdgeFlagFormatNV");
  glext_glFogCoordFormatNV
    = (PFNGLFOGCOORDFORMATNVPROC)load (userptr, "glFogCoordFormatNV");
  glext_glGetIntegerui64i_vNV
    = (PFNGLGETINTEGERUI64I_VNVPROC)load (userptr, "glGetIntegerui64i_vNV");
  glext_glIndexFormatNV
    = (PFNGLINDEXFORMATNVPROC)load (userptr, "glIndexFormatNV");
  glext_glNormalFormatNV
    = (PFNGLNORMALFORMATNVPROC)load (userptr, "glNormalFormatNV");
  glext_glSecondaryColorFormatNV = (PFNGLSECONDARYCOLORFORMATNVPROC)load (
    userptr, "glSecondaryColorFormatNV");
  glext_glTexCoordFormatNV
    = (PFNGLTEXCOORDFORMATNVPROC)load (userptr, "glTexCoordFormatNV");
  glext_glVertexAttribFormatNV
    = (PFNGLVERTEXATTRIBFORMATNVPROC)load (userptr, "glVertexAttribFormatNV");
  glext_glVertexAttribIFormatNV = (PFNGLVERTEXATTRIBIFORMATNVPROC)load (
    userptr, "glVertexAttribIFormatNV");
  glext_glVertexFormatNV
    = (PFNGLVERTEXFORMATNVPROC)load (userptr, "glVertexFormatNV");
}
static void
glext_gl_load_GL_NV_vertex_program (GLEXTuserptrloadfunc load, void* userptr) {
  if (!GLEXT_GL_NV_vertex_program)
    return;
  glext_glAreProgramsResidentNV = (PFNGLAREPROGRAMSRESIDENTNVPROC)load (
    userptr, "glAreProgramsResidentNV");
  glext_glBindProgramNV
    = (PFNGLBINDPROGRAMNVPROC)load (userptr, "glBindProgramNV");
  glext_glDeleteProgramsNV
    = (PFNGLDELETEPROGRAMSNVPROC)load (userptr, "glDeleteProgramsNV");
  glext_glExecuteProgramNV
    = (PFNGLEXECUTEPROGRAMNVPROC)load (userptr, "glExecuteProgramNV");
  glext_glGenProgramsNV
    = (PFNGLGENPROGRAMSNVPROC)load (userptr, "glGenProgramsNV");
  glext_glGetProgramParameterdvNV = (PFNGLGETPROGRAMPARAMETERDVNVPROC)load (
    userptr, "glGetProgramParameterdvNV");
  glext_glGetProgramParameterfvNV = (PFNGLGETPROGRAMPARAMETERFVNVPROC)load (
    userptr, "glGetProgramParameterfvNV");
  glext_glGetProgramStringNV
    = (PFNGLGETPROGRAMSTRINGNVPROC)load (userptr, "glGetProgramStringNV");
  glext_glGetProgramivNV
    = (PFNGLGETPROGRAMIVNVPROC)load (userptr, "glGetProgramivNV");
  glext_glGetTrackMatrixivNV
    = (PFNGLGETTRACKMATRIXIVNVPROC)load (userptr, "glGetTrackMatrixivNV");
  glext_glGetVertexAttribPointervNV
    = (PFNGLGETVERTEXATTRIBPOINTERVNVPROC)load (userptr,
                                                "glGetVertexAttribPointervNV");
  glext_glGetVertexAttribdvNV
    = (PFNGLGETVERTEXATTRIBDVNVPROC)load (userptr, "glGetVertexAttribdvNV");
  glext_glGetVertexAttribfvNV
    = (PFNGLGETVERTEXATTRIBFVNVPROC)load (userptr, "glGetVertexAttribfvNV");
  glext_glGetVertexAttribivNV
    = (PFNGLGETVERTEXATTRIBIVNVPROC)load (userptr, "glGetVertexAttribivNV");
  glext_glIsProgramNV = (PFNGLISPROGRAMNVPROC)load (userptr, "glIsProgramNV");
  glext_glLoadProgramNV
    = (PFNGLLOADPROGRAMNVPROC)load (userptr, "glLoadProgramNV");
  glext_glProgramParameter4dNV
    = (PFNGLPROGRAMPARAMETER4DNVPROC)load (userptr, "glProgramParameter4dNV");
  glext_glProgramParameter4dvNV = (PFNGLPROGRAMPARAMETER4DVNVPROC)load (
    userptr, "glProgramParameter4dvNV");
  glext_glProgramParameter4fNV
    = (PFNGLPROGRAMPARAMETER4FNVPROC)load (userptr, "glProgramParameter4fNV");
  glext_glProgramParameter4fvNV = (PFNGLPROGRAMPARAMETER4FVNVPROC)load (
    userptr, "glProgramParameter4fvNV");
  glext_glProgramParameters4dvNV = (PFNGLPROGRAMPARAMETERS4DVNVPROC)load (
    userptr, "glProgramParameters4dvNV");
  glext_glProgramParameters4fvNV = (PFNGLPROGRAMPARAMETERS4FVNVPROC)load (
    userptr, "glProgramParameters4fvNV");
  glext_glRequestResidentProgramsNV
    = (PFNGLREQUESTRESIDENTPROGRAMSNVPROC)load (userptr,
                                                "glRequestResidentProgramsNV");
  glext_glTrackMatrixNV
    = (PFNGLTRACKMATRIXNVPROC)load (userptr, "glTrackMatrixNV");
  glext_glVertexAttrib1dNV
    = (PFNGLVERTEXATTRIB1DNVPROC)load (userptr, "glVertexAttrib1dNV");
  glext_glVertexAttrib1dvNV
    = (PFNGLVERTEXATTRIB1DVNVPROC)load (userptr, "glVertexAttrib1dvNV");
  glext_glVertexAttrib1fNV
    = (PFNGLVERTEXATTRIB1FNVPROC)load (userptr, "glVertexAttrib1fNV");
  glext_glVertexAttrib1fvNV
    = (PFNGLVERTEXATTRIB1FVNVPROC)load (userptr, "glVertexAttrib1fvNV");
  glext_glVertexAttrib1sNV
    = (PFNGLVERTEXATTRIB1SNVPROC)load (userptr, "glVertexAttrib1sNV");
  glext_glVertexAttrib1svNV
    = (PFNGLVERTEXATTRIB1SVNVPROC)load (userptr, "glVertexAttrib1svNV");
  glext_glVertexAttrib2dNV
    = (PFNGLVERTEXATTRIB2DNVPROC)load (userptr, "glVertexAttrib2dNV");
  glext_glVertexAttrib2dvNV
    = (PFNGLVERTEXATTRIB2DVNVPROC)load (userptr, "glVertexAttrib2dvNV");
  glext_glVertexAttrib2fNV
    = (PFNGLVERTEXATTRIB2FNVPROC)load (userptr, "glVertexAttrib2fNV");
  glext_glVertexAttrib2fvNV
    = (PFNGLVERTEXATTRIB2FVNVPROC)load (userptr, "glVertexAttrib2fvNV");
  glext_glVertexAttrib2sNV
    = (PFNGLVERTEXATTRIB2SNVPROC)load (userptr, "glVertexAttrib2sNV");
  glext_glVertexAttrib2svNV
    = (PFNGLVERTEXATTRIB2SVNVPROC)load (userptr, "glVertexAttrib2svNV");
  glext_glVertexAttrib3dNV
    = (PFNGLVERTEXATTRIB3DNVPROC)load (userptr, "glVertexAttrib3dNV");
  glext_glVertexAttrib3dvNV
    = (PFNGLVERTEXATTRIB3DVNVPROC)load (userptr, "glVertexAttrib3dvNV");
  glext_glVertexAttrib3fNV
    = (PFNGLVERTEXATTRIB3FNVPROC)load (userptr, "glVertexAttrib3fNV");
  glext_glVertexAttrib3fvNV
    = (PFNGLVERTEXATTRIB3FVNVPROC)load (userptr, "glVertexAttrib3fvNV");
  glext_glVertexAttrib3sNV
    = (PFNGLVERTEXATTRIB3SNVPROC)load (userptr, "glVertexAttrib3sNV");
  glext_glVertexAttrib3svNV
    = (PFNGLVERTEXATTRIB3SVNVPROC)load (userptr, "glVertexAttrib3svNV");
  glext_glVertexAttrib4dNV
    = (PFNGLVERTEXATTRIB4DNVPROC)load (userptr, "glVertexAttrib4dNV");
  glext_glVertexAttrib4dvNV
    = (PFNGLVERTEXATTRIB4DVNVPROC)load (userptr, "glVertexAttrib4dvNV");
  glext_glVertexAttrib4fNV
    = (PFNGLVERTEXATTRIB4FNVPROC)load (userptr, "glVertexAttrib4fNV");
  glext_glVertexAttrib4fvNV
    = (PFNGLVERTEXATTRIB4FVNVPROC)load (userptr, "glVertexAttrib4fvNV");
  glext_glVertexAttrib4sNV
    = (PFNGLVERTEXATTRIB4SNVPROC)load (userptr, "glVertexAttrib4sNV");
  glext_glVertexAttrib4svNV
    = (PFNGLVERTEXATTRIB4SVNVPROC)load (userptr, "glVertexAttrib4svNV");
  glext_glVertexAttrib4ubNV
    = (PFNGLVERTEXATTRIB4UBNVPROC)load (userptr, "glVertexAttrib4ubNV");
  glext_glVertexAttrib4ubvNV
    = (PFNGLVERTEXATTRIB4UBVNVPROC)load (userptr, "glVertexAttrib4ubvNV");
  glext_glVertexAttribPointerNV = (PFNGLVERTEXATTRIBPOINTERNVPROC)load (
    userptr, "glVertexAttribPointerNV");
  glext_glVertexAttribs1dvNV
    = (PFNGLVERTEXATTRIBS1DVNVPROC)load (userptr, "glVertexAttribs1dvNV");
  glext_glVertexAttribs1fvNV
    = (PFNGLVERTEXATTRIBS1FVNVPROC)load (userptr, "glVertexAttribs1fvNV");
  glext_glVertexAttribs1svNV
    = (PFNGLVERTEXATTRIBS1SVNVPROC)load (userptr, "glVertexAttribs1svNV");
  glext_glVertexAttribs2dvNV
    = (PFNGLVERTEXATTRIBS2DVNVPROC)load (userptr, "glVertexAttribs2dvNV");
  glext_glVertexAttribs2fvNV
    = (PFNGLVERTEXATTRIBS2FVNVPROC)load (userptr, "glVertexAttribs2fvNV");
  glext_glVertexAttribs2svNV
    = (PFNGLVERTEXATTRIBS2SVNVPROC)load (userptr, "glVertexAttribs2svNV");
  glext_glVertexAttribs3dvNV
    = (PFNGLVERTEXATTRIBS3DVNVPROC)load (userptr, "glVertexAttribs3dvNV");
  glext_glVertexAttribs3fvNV
    = (PFNGLVERTEXATTRIBS3FVNVPROC)load (userptr, "glVertexAttribs3fvNV");
  glext_glVertexAttribs3svNV
    = (PFNGLVERTEXATTRIBS3SVNVPROC)load (userptr, "glVertexAttribs3svNV");
  glext_glVertexAttribs4dvNV
    = (PFNGLVERTEXATTRIBS4DVNVPROC)load (userptr, "glVertexAttribs4dvNV");
  glext_glVertexAttribs4fvNV
    = (PFNGLVERTEXATTRIBS4FVNVPROC)load (userptr, "glVertexAttribs4fvNV");
  glext_glVertexAttribs4svNV
    = (PFNGLVERTEXATTRIBS4SVNVPROC)load (userptr, "glVertexAttribs4svNV");
  glext_glVertexAttribs4ubvNV
    = (PFNGLVERTEXATTRIBS4UBVNVPROC)load (userptr, "glVertexAttribs4ubvNV");
}
static void
glext_gl_load_GL_NV_vertex_program4 (GLEXTuserptrloadfunc load,
                                     void* userptr) {
  if (!GLEXT_GL_NV_vertex_program4)
    return;
  glext_glGetVertexAttribIivEXT = (PFNGLGETVERTEXATTRIBIIVEXTPROC)load (
    userptr, "glGetVertexAttribIivEXT");
  glext_glGetVertexAttribIuivEXT = (PFNGLGETVERTEXATTRIBIUIVEXTPROC)load (
    userptr, "glGetVertexAttribIuivEXT");
  glext_glVertexAttribI1iEXT
    = (PFNGLVERTEXATTRIBI1IEXTPROC)load (userptr, "glVertexAttribI1iEXT");
  glext_glVertexAttribI1ivEXT
    = (PFNGLVERTEXATTRIBI1IVEXTPROC)load (userptr, "glVertexAttribI1ivEXT");
  glext_glVertexAttribI1uiEXT
    = (PFNGLVERTEXATTRIBI1UIEXTPROC)load (userptr, "glVertexAttribI1uiEXT");
  glext_glVertexAttribI1uivEXT
    = (PFNGLVERTEXATTRIBI1UIVEXTPROC)load (userptr, "glVertexAttribI1uivEXT");
  glext_glVertexAttribI2iEXT
    = (PFNGLVERTEXATTRIBI2IEXTPROC)load (userptr, "glVertexAttribI2iEXT");
  glext_glVertexAttribI2ivEXT
    = (PFNGLVERTEXATTRIBI2IVEXTPROC)load (userptr, "glVertexAttribI2ivEXT");
  glext_glVertexAttribI2uiEXT
    = (PFNGLVERTEXATTRIBI2UIEXTPROC)load (userptr, "glVertexAttribI2uiEXT");
  glext_glVertexAttribI2uivEXT
    = (PFNGLVERTEXATTRIBI2UIVEXTPROC)load (userptr, "glVertexAttribI2uivEXT");
  glext_glVertexAttribI3iEXT
    = (PFNGLVERTEXATTRIBI3IEXTPROC)load (userptr, "glVertexAttribI3iEXT");
  glext_glVertexAttribI3ivEXT
    = (PFNGLVERTEXATTRIBI3IVEXTPROC)load (userptr, "glVertexAttribI3ivEXT");
  glext_glVertexAttribI3uiEXT
    = (PFNGLVERTEXATTRIBI3UIEXTPROC)load (userptr, "glVertexAttribI3uiEXT");
  glext_glVertexAttribI3uivEXT
    = (PFNGLVERTEXATTRIBI3UIVEXTPROC)load (userptr, "glVertexAttribI3uivEXT");
  glext_glVertexAttribI4bvEXT
    = (PFNGLVERTEXATTRIBI4BVEXTPROC)load (userptr, "glVertexAttribI4bvEXT");
  glext_glVertexAttribI4iEXT
    = (PFNGLVERTEXATTRIBI4IEXTPROC)load (userptr, "glVertexAttribI4iEXT");
  glext_glVertexAttribI4ivEXT
    = (PFNGLVERTEXATTRIBI4IVEXTPROC)load (userptr, "glVertexAttribI4ivEXT");
  glext_glVertexAttribI4svEXT
    = (PFNGLVERTEXATTRIBI4SVEXTPROC)load (userptr, "glVertexAttribI4svEXT");
  glext_glVertexAttribI4ubvEXT
    = (PFNGLVERTEXATTRIBI4UBVEXTPROC)load (userptr, "glVertexAttribI4ubvEXT");
  glext_glVertexAttribI4uiEXT
    = (PFNGLVERTEXATTRIBI4UIEXTPROC)load (userptr, "glVertexAttribI4uiEXT");
  glext_glVertexAttribI4uivEXT
    = (PFNGLVERTEXATTRIBI4UIVEXTPROC)load (userptr, "glVertexAttribI4uivEXT");
  glext_glVertexAttribI4usvEXT
    = (PFNGLVERTEXATTRIBI4USVEXTPROC)load (userptr, "glVertexAttribI4usvEXT");
  glext_glVertexAttribIPointerEXT = (PFNGLVERTEXATTRIBIPOINTEREXTPROC)load (
    userptr, "glVertexAttribIPointerEXT");
}
static void
glext_gl_load_GL_NV_video_capture (GLEXTuserptrloadfunc load, void* userptr) {
  if (!GLEXT_GL_NV_video_capture)
    return;
  glext_glBeginVideoCaptureNV
    = (PFNGLBEGINVIDEOCAPTURENVPROC)load (userptr, "glBeginVideoCaptureNV");
  glext_glBindVideoCaptureStreamBufferNV
    = (PFNGLBINDVIDEOCAPTURESTREAMBUFFERNVPROC)load (
      userptr, "glBindVideoCaptureStreamBufferNV");
  glext_glBindVideoCaptureStreamTextureNV
    = (PFNGLBINDVIDEOCAPTURESTREAMTEXTURENVPROC)load (
      userptr, "glBindVideoCaptureStreamTextureNV");
  glext_glEndVideoCaptureNV
    = (PFNGLENDVIDEOCAPTURENVPROC)load (userptr, "glEndVideoCaptureNV");
  glext_glGetVideoCaptureStreamdvNV
    = (PFNGLGETVIDEOCAPTURESTREAMDVNVPROC)load (userptr,
                                                "glGetVideoCaptureStreamdvNV");
  glext_glGetVideoCaptureStreamfvNV
    = (PFNGLGETVIDEOCAPTURESTREAMFVNVPROC)load (userptr,
                                                "glGetVideoCaptureStreamfvNV");
  glext_glGetVideoCaptureStreamivNV
    = (PFNGLGETVIDEOCAPTURESTREAMIVNVPROC)load (userptr,
                                                "glGetVideoCaptureStreamivNV");
  glext_glGetVideoCaptureivNV
    = (PFNGLGETVIDEOCAPTUREIVNVPROC)load (userptr, "glGetVideoCaptureivNV");
  glext_glVideoCaptureNV
    = (PFNGLVIDEOCAPTURENVPROC)load (userptr, "glVideoCaptureNV");
  glext_glVideoCaptureStreamParameterdvNV
    = (PFNGLVIDEOCAPTURESTREAMPARAMETERDVNVPROC)load (
      userptr, "glVideoCaptureStreamParameterdvNV");
  glext_glVideoCaptureStreamParameterfvNV
    = (PFNGLVIDEOCAPTURESTREAMPARAMETERFVNVPROC)load (
      userptr, "glVideoCaptureStreamParameterfvNV");
  glext_glVideoCaptureStreamParameterivNV
    = (PFNGLVIDEOCAPTURESTREAMPARAMETERIVNVPROC)load (
      userptr, "glVideoCaptureStreamParameterivNV");
}
static void
glext_gl_load_GL_NV_viewport_swizzle (GLEXTuserptrloadfunc load,
                                      void* userptr) {
  if (!GLEXT_GL_NV_viewport_swizzle)
    return;
  glext_glViewportSwizzleNV
    = (PFNGLVIEWPORTSWIZZLENVPROC)load (userptr, "glViewportSwizzleNV");
}
static void
glext_gl_load_GL_OES_byte_coordinates (GLEXTuserptrloadfunc load,
                                       void* userptr) {
  if (!GLEXT_GL_OES_byte_coordinates)
    return;
  glext_glMultiTexCoord1bOES
    = (PFNGLMULTITEXCOORD1BOESPROC)load (userptr, "glMultiTexCoord1bOES");
  glext_glMultiTexCoord1bvOES
    = (PFNGLMULTITEXCOORD1BVOESPROC)load (userptr, "glMultiTexCoord1bvOES");
  glext_glMultiTexCoord2bOES
    = (PFNGLMULTITEXCOORD2BOESPROC)load (userptr, "glMultiTexCoord2bOES");
  glext_glMultiTexCoord2bvOES
    = (PFNGLMULTITEXCOORD2BVOESPROC)load (userptr, "glMultiTexCoord2bvOES");
  glext_glMultiTexCoord3bOES
    = (PFNGLMULTITEXCOORD3BOESPROC)load (userptr, "glMultiTexCoord3bOES");
  glext_glMultiTexCoord3bvOES
    = (PFNGLMULTITEXCOORD3BVOESPROC)load (userptr, "glMultiTexCoord3bvOES");
  glext_glMultiTexCoord4bOES
    = (PFNGLMULTITEXCOORD4BOESPROC)load (userptr, "glMultiTexCoord4bOES");
  glext_glMultiTexCoord4bvOES
    = (PFNGLMULTITEXCOORD4BVOESPROC)load (userptr, "glMultiTexCoord4bvOES");
  glext_glTexCoord1bOES
    = (PFNGLTEXCOORD1BOESPROC)load (userptr, "glTexCoord1bOES");
  glext_glTexCoord1bvOES
    = (PFNGLTEXCOORD1BVOESPROC)load (userptr, "glTexCoord1bvOES");
  glext_glTexCoord2bOES
    = (PFNGLTEXCOORD2BOESPROC)load (userptr, "glTexCoord2bOES");
  glext_glTexCoord2bvOES
    = (PFNGLTEXCOORD2BVOESPROC)load (userptr, "glTexCoord2bvOES");
  glext_glTexCoord3bOES
    = (PFNGLTEXCOORD3BOESPROC)load (userptr, "glTexCoord3bOES");
  glext_glTexCoord3bvOES
    = (PFNGLTEXCOORD3BVOESPROC)load (userptr, "glTexCoord3bvOES");
  glext_glTexCoord4bOES
    = (PFNGLTEXCOORD4BOESPROC)load (userptr, "glTexCoord4bOES");
  glext_glTexCoord4bvOES
    = (PFNGLTEXCOORD4BVOESPROC)load (userptr, "glTexCoord4bvOES");
  glext_glVertex2bOES = (PFNGLVERTEX2BOESPROC)load (userptr, "glVertex2bOES");
  glext_glVertex2bvOES
    = (PFNGLVERTEX2BVOESPROC)load (userptr, "glVertex2bvOES");
  glext_glVertex3bOES = (PFNGLVERTEX3BOESPROC)load (userptr, "glVertex3bOES");
  glext_glVertex3bvOES
    = (PFNGLVERTEX3BVOESPROC)load (userptr, "glVertex3bvOES");
  glext_glVertex4bOES = (PFNGLVERTEX4BOESPROC)load (userptr, "glVertex4bOES");
  glext_glVertex4bvOES
    = (PFNGLVERTEX4BVOESPROC)load (userptr, "glVertex4bvOES");
}
static void
glext_gl_load_GL_OES_fixed_point (GLEXTuserptrloadfunc load, void* userptr) {
  if (!GLEXT_GL_OES_fixed_point)
    return;
  glext_glAccumxOES = (PFNGLACCUMXOESPROC)load (userptr, "glAccumxOES");
  glext_glAlphaFuncxOES
    = (PFNGLALPHAFUNCXOESPROC)load (userptr, "glAlphaFuncxOES");
  glext_glBitmapxOES = (PFNGLBITMAPXOESPROC)load (userptr, "glBitmapxOES");
  glext_glBlendColorxOES
    = (PFNGLBLENDCOLORXOESPROC)load (userptr, "glBlendColorxOES");
  glext_glClearAccumxOES
    = (PFNGLCLEARACCUMXOESPROC)load (userptr, "glClearAccumxOES");
  glext_glClearColorxOES
    = (PFNGLCLEARCOLORXOESPROC)load (userptr, "glClearColorxOES");
  glext_glClearDepthxOES
    = (PFNGLCLEARDEPTHXOESPROC)load (userptr, "glClearDepthxOES");
  glext_glClipPlanexOES
    = (PFNGLCLIPPLANEXOESPROC)load (userptr, "glClipPlanexOES");
  glext_glColor3xOES = (PFNGLCOLOR3XOESPROC)load (userptr, "glColor3xOES");
  glext_glColor3xvOES = (PFNGLCOLOR3XVOESPROC)load (userptr, "glColor3xvOES");
  glext_glColor4xOES = (PFNGLCOLOR4XOESPROC)load (userptr, "glColor4xOES");
  glext_glColor4xvOES = (PFNGLCOLOR4XVOESPROC)load (userptr, "glColor4xvOES");
  glext_glConvolutionParameterxOES = (PFNGLCONVOLUTIONPARAMETERXOESPROC)load (
    userptr, "glConvolutionParameterxOES");
  glext_glConvolutionParameterxvOES
    = (PFNGLCONVOLUTIONPARAMETERXVOESPROC)load (userptr,
                                                "glConvolutionParameterxvOES");
  glext_glDepthRangexOES
    = (PFNGLDEPTHRANGEXOESPROC)load (userptr, "glDepthRangexOES");
  glext_glEvalCoord1xOES
    = (PFNGLEVALCOORD1XOESPROC)load (userptr, "glEvalCoord1xOES");
  glext_glEvalCoord1xvOES
    = (PFNGLEVALCOORD1XVOESPROC)load (userptr, "glEvalCoord1xvOES");
  glext_glEvalCoord2xOES
    = (PFNGLEVALCOORD2XOESPROC)load (userptr, "glEvalCoord2xOES");
  glext_glEvalCoord2xvOES
    = (PFNGLEVALCOORD2XVOESPROC)load (userptr, "glEvalCoord2xvOES");
  glext_glFeedbackBufferxOES
    = (PFNGLFEEDBACKBUFFERXOESPROC)load (userptr, "glFeedbackBufferxOES");
  glext_glFogxOES = (PFNGLFOGXOESPROC)load (userptr, "glFogxOES");
  glext_glFogxvOES = (PFNGLFOGXVOESPROC)load (userptr, "glFogxvOES");
  glext_glFrustumxOES = (PFNGLFRUSTUMXOESPROC)load (userptr, "glFrustumxOES");
  glext_glGetClipPlanexOES
    = (PFNGLGETCLIPPLANEXOESPROC)load (userptr, "glGetClipPlanexOES");
  glext_glGetConvolutionParameterxvOES
    = (PFNGLGETCONVOLUTIONPARAMETERXVOESPROC)load (
      userptr, "glGetConvolutionParameterxvOES");
  glext_glGetFixedvOES
    = (PFNGLGETFIXEDVOESPROC)load (userptr, "glGetFixedvOES");
  glext_glGetHistogramParameterxvOES
    = (PFNGLGETHISTOGRAMPARAMETERXVOESPROC)load (
      userptr, "glGetHistogramParameterxvOES");
  glext_glGetLightxOES
    = (PFNGLGETLIGHTXOESPROC)load (userptr, "glGetLightxOES");
  glext_glGetMapxvOES = (PFNGLGETMAPXVOESPROC)load (userptr, "glGetMapxvOES");
  glext_glGetMaterialxOES
    = (PFNGLGETMATERIALXOESPROC)load (userptr, "glGetMaterialxOES");
  glext_glGetPixelMapxv
    = (PFNGLGETPIXELMAPXVPROC)load (userptr, "glGetPixelMapxv");
  glext_glGetTexEnvxvOES
    = (PFNGLGETTEXENVXVOESPROC)load (userptr, "glGetTexEnvxvOES");
  glext_glGetTexGenxvOES
    = (PFNGLGETTEXGENXVOESPROC)load (userptr, "glGetTexGenxvOES");
  glext_glGetTexLevelParameterxvOES
    = (PFNGLGETTEXLEVELPARAMETERXVOESPROC)load (userptr,
                                                "glGetTexLevelParameterxvOES");
  glext_glGetTexParameterxvOES
    = (PFNGLGETTEXPARAMETERXVOESPROC)load (userptr, "glGetTexParameterxvOES");
  glext_glIndexxOES = (PFNGLINDEXXOESPROC)load (userptr, "glIndexxOES");
  glext_glIndexxvOES = (PFNGLINDEXXVOESPROC)load (userptr, "glIndexxvOES");
  glext_glLightModelxOES
    = (PFNGLLIGHTMODELXOESPROC)load (userptr, "glLightModelxOES");
  glext_glLightModelxvOES
    = (PFNGLLIGHTMODELXVOESPROC)load (userptr, "glLightModelxvOES");
  glext_glLightxOES = (PFNGLLIGHTXOESPROC)load (userptr, "glLightxOES");
  glext_glLightxvOES = (PFNGLLIGHTXVOESPROC)load (userptr, "glLightxvOES");
  glext_glLineWidthxOES
    = (PFNGLLINEWIDTHXOESPROC)load (userptr, "glLineWidthxOES");
  glext_glLoadMatrixxOES
    = (PFNGLLOADMATRIXXOESPROC)load (userptr, "glLoadMatrixxOES");
  glext_glLoadTransposeMatrixxOES = (PFNGLLOADTRANSPOSEMATRIXXOESPROC)load (
    userptr, "glLoadTransposeMatrixxOES");
  glext_glMap1xOES = (PFNGLMAP1XOESPROC)load (userptr, "glMap1xOES");
  glext_glMap2xOES = (PFNGLMAP2XOESPROC)load (userptr, "glMap2xOES");
  glext_glMapGrid1xOES
    = (PFNGLMAPGRID1XOESPROC)load (userptr, "glMapGrid1xOES");
  glext_glMapGrid2xOES
    = (PFNGLMAPGRID2XOESPROC)load (userptr, "glMapGrid2xOES");
  glext_glMaterialxOES
    = (PFNGLMATERIALXOESPROC)load (userptr, "glMaterialxOES");
  glext_glMaterialxvOES
    = (PFNGLMATERIALXVOESPROC)load (userptr, "glMaterialxvOES");
  glext_glMultMatrixxOES
    = (PFNGLMULTMATRIXXOESPROC)load (userptr, "glMultMatrixxOES");
  glext_glMultTransposeMatrixxOES = (PFNGLMULTTRANSPOSEMATRIXXOESPROC)load (
    userptr, "glMultTransposeMatrixxOES");
  glext_glMultiTexCoord1xOES
    = (PFNGLMULTITEXCOORD1XOESPROC)load (userptr, "glMultiTexCoord1xOES");
  glext_glMultiTexCoord1xvOES
    = (PFNGLMULTITEXCOORD1XVOESPROC)load (userptr, "glMultiTexCoord1xvOES");
  glext_glMultiTexCoord2xOES
    = (PFNGLMULTITEXCOORD2XOESPROC)load (userptr, "glMultiTexCoord2xOES");
  glext_glMultiTexCoord2xvOES
    = (PFNGLMULTITEXCOORD2XVOESPROC)load (userptr, "glMultiTexCoord2xvOES");
  glext_glMultiTexCoord3xOES
    = (PFNGLMULTITEXCOORD3XOESPROC)load (userptr, "glMultiTexCoord3xOES");
  glext_glMultiTexCoord3xvOES
    = (PFNGLMULTITEXCOORD3XVOESPROC)load (userptr, "glMultiTexCoord3xvOES");
  glext_glMultiTexCoord4xOES
    = (PFNGLMULTITEXCOORD4XOESPROC)load (userptr, "glMultiTexCoord4xOES");
  glext_glMultiTexCoord4xvOES
    = (PFNGLMULTITEXCOORD4XVOESPROC)load (userptr, "glMultiTexCoord4xvOES");
  glext_glNormal3xOES = (PFNGLNORMAL3XOESPROC)load (userptr, "glNormal3xOES");
  glext_glNormal3xvOES
    = (PFNGLNORMAL3XVOESPROC)load (userptr, "glNormal3xvOES");
  glext_glOrthoxOES = (PFNGLORTHOXOESPROC)load (userptr, "glOrthoxOES");
  glext_glPassThroughxOES
    = (PFNGLPASSTHROUGHXOESPROC)load (userptr, "glPassThroughxOES");
  glext_glPixelMapx = (PFNGLPIXELMAPXPROC)load (userptr, "glPixelMapx");
  glext_glPixelStorex = (PFNGLPIXELSTOREXPROC)load (userptr, "glPixelStorex");
  glext_glPixelTransferxOES
    = (PFNGLPIXELTRANSFERXOESPROC)load (userptr, "glPixelTransferxOES");
  glext_glPixelZoomxOES
    = (PFNGLPIXELZOOMXOESPROC)load (userptr, "glPixelZoomxOES");
  glext_glPointParameterxvOES
    = (PFNGLPOINTPARAMETERXVOESPROC)load (userptr, "glPointParameterxvOES");
  glext_glPointSizexOES
    = (PFNGLPOINTSIZEXOESPROC)load (userptr, "glPointSizexOES");
  glext_glPolygonOffsetxOES
    = (PFNGLPOLYGONOFFSETXOESPROC)load (userptr, "glPolygonOffsetxOES");
  glext_glPrioritizeTexturesxOES = (PFNGLPRIORITIZETEXTURESXOESPROC)load (
    userptr, "glPrioritizeTexturesxOES");
  glext_glRasterPos2xOES
    = (PFNGLRASTERPOS2XOESPROC)load (userptr, "glRasterPos2xOES");
  glext_glRasterPos2xvOES
    = (PFNGLRASTERPOS2XVOESPROC)load (userptr, "glRasterPos2xvOES");
  glext_glRasterPos3xOES
    = (PFNGLRASTERPOS3XOESPROC)load (userptr, "glRasterPos3xOES");
  glext_glRasterPos3xvOES
    = (PFNGLRASTERPOS3XVOESPROC)load (userptr, "glRasterPos3xvOES");
  glext_glRasterPos4xOES
    = (PFNGLRASTERPOS4XOESPROC)load (userptr, "glRasterPos4xOES");
  glext_glRasterPos4xvOES
    = (PFNGLRASTERPOS4XVOESPROC)load (userptr, "glRasterPos4xvOES");
  glext_glRectxOES = (PFNGLRECTXOESPROC)load (userptr, "glRectxOES");
  glext_glRectxvOES = (PFNGLRECTXVOESPROC)load (userptr, "glRectxvOES");
  glext_glRotatexOES = (PFNGLROTATEXOESPROC)load (userptr, "glRotatexOES");
  glext_glScalexOES = (PFNGLSCALEXOESPROC)load (userptr, "glScalexOES");
  glext_glTexCoord1xOES
    = (PFNGLTEXCOORD1XOESPROC)load (userptr, "glTexCoord1xOES");
  glext_glTexCoord1xvOES
    = (PFNGLTEXCOORD1XVOESPROC)load (userptr, "glTexCoord1xvOES");
  glext_glTexCoord2xOES
    = (PFNGLTEXCOORD2XOESPROC)load (userptr, "glTexCoord2xOES");
  glext_glTexCoord2xvOES
    = (PFNGLTEXCOORD2XVOESPROC)load (userptr, "glTexCoord2xvOES");
  glext_glTexCoord3xOES
    = (PFNGLTEXCOORD3XOESPROC)load (userptr, "glTexCoord3xOES");
  glext_glTexCoord3xvOES
    = (PFNGLTEXCOORD3XVOESPROC)load (userptr, "glTexCoord3xvOES");
  glext_glTexCoord4xOES
    = (PFNGLTEXCOORD4XOESPROC)load (userptr, "glTexCoord4xOES");
  glext_glTexCoord4xvOES
    = (PFNGLTEXCOORD4XVOESPROC)load (userptr, "glTexCoord4xvOES");
  glext_glTexEnvxOES = (PFNGLTEXENVXOESPROC)load (userptr, "glTexEnvxOES");
  glext_glTexEnvxvOES = (PFNGLTEXENVXVOESPROC)load (userptr, "glTexEnvxvOES");
  glext_glTexGenxOES = (PFNGLTEXGENXOESPROC)load (userptr, "glTexGenxOES");
  glext_glTexGenxvOES = (PFNGLTEXGENXVOESPROC)load (userptr, "glTexGenxvOES");
  glext_glTexParameterxOES
    = (PFNGLTEXPARAMETERXOESPROC)load (userptr, "glTexParameterxOES");
  glext_glTexParameterxvOES
    = (PFNGLTEXPARAMETERXVOESPROC)load (userptr, "glTexParameterxvOES");
  glext_glTranslatexOES
    = (PFNGLTRANSLATEXOESPROC)load (userptr, "glTranslatexOES");
  glext_glVertex2xOES = (PFNGLVERTEX2XOESPROC)load (userptr, "glVertex2xOES");
  glext_glVertex2xvOES
    = (PFNGLVERTEX2XVOESPROC)load (userptr, "glVertex2xvOES");
  glext_glVertex3xOES = (PFNGLVERTEX3XOESPROC)load (userptr, "glVertex3xOES");
  glext_glVertex3xvOES
    = (PFNGLVERTEX3XVOESPROC)load (userptr, "glVertex3xvOES");
  glext_glVertex4xOES = (PFNGLVERTEX4XOESPROC)load (userptr, "glVertex4xOES");
  glext_glVertex4xvOES
    = (PFNGLVERTEX4XVOESPROC)load (userptr, "glVertex4xvOES");
}
static void
glext_gl_load_GL_OES_query_matrix (GLEXTuserptrloadfunc load, void* userptr) {
  if (!GLEXT_GL_OES_query_matrix)
    return;
  glext_glQueryMatrixxOES
    = (PFNGLQUERYMATRIXXOESPROC)load (userptr, "glQueryMatrixxOES");
}
static void
glext_gl_load_GL_OES_single_precision (GLEXTuserptrloadfunc load,
                                       void* userptr) {
  if (!GLEXT_GL_OES_single_precision)
    return;
  glext_glClearDepthfOES
    = (PFNGLCLEARDEPTHFOESPROC)load (userptr, "glClearDepthfOES");
  glext_glClipPlanefOES
    = (PFNGLCLIPPLANEFOESPROC)load (userptr, "glClipPlanefOES");
  glext_glDepthRangefOES
    = (PFNGLDEPTHRANGEFOESPROC)load (userptr, "glDepthRangefOES");
  glext_glFrustumfOES = (PFNGLFRUSTUMFOESPROC)load (userptr, "glFrustumfOES");
  glext_glGetClipPlanefOES
    = (PFNGLGETCLIPPLANEFOESPROC)load (userptr, "glGetClipPlanefOES");
  glext_glOrthofOES = (PFNGLORTHOFOESPROC)load (userptr, "glOrthofOES");
}
static void
glext_gl_load_GL_OVR_multiview (GLEXTuserptrloadfunc load, void* userptr) {
  if (!GLEXT_GL_OVR_multiview)
    return;
  glext_glFramebufferTextureMultiviewOVR
    = (PFNGLFRAMEBUFFERTEXTUREMULTIVIEWOVRPROC)load (
      userptr, "glFramebufferTextureMultiviewOVR");
  glext_glNamedFramebufferTextureMultiviewOVR
    = (PFNGLNAMEDFRAMEBUFFERTEXTUREMULTIVIEWOVRPROC)load (
      userptr, "glNamedFramebufferTextureMultiviewOVR");
}
static void
glext_gl_load_GL_PGI_misc_hints (GLEXTuserptrloadfunc load, void* userptr) {
  if (!GLEXT_GL_PGI_misc_hints)
    return;
  glext_glHintPGI = (PFNGLHINTPGIPROC)load (userptr, "glHintPGI");
}
static void
glext_gl_load_GL_SGIS_detail_texture (GLEXTuserptrloadfunc load,
                                      void* userptr) {
  if (!GLEXT_GL_SGIS_detail_texture)
    return;
  glext_glDetailTexFuncSGIS
    = (PFNGLDETAILTEXFUNCSGISPROC)load (userptr, "glDetailTexFuncSGIS");
  glext_glGetDetailTexFuncSGIS
    = (PFNGLGETDETAILTEXFUNCSGISPROC)load (userptr, "glGetDetailTexFuncSGIS");
}
static void
glext_gl_load_GL_SGIS_fog_function (GLEXTuserptrloadfunc load, void* userptr) {
  if (!GLEXT_GL_SGIS_fog_function)
    return;
  glext_glFogFuncSGIS = (PFNGLFOGFUNCSGISPROC)load (userptr, "glFogFuncSGIS");
  glext_glGetFogFuncSGIS
    = (PFNGLGETFOGFUNCSGISPROC)load (userptr, "glGetFogFuncSGIS");
}
static void
glext_gl_load_GL_SGIS_multisample (GLEXTuserptrloadfunc load, void* userptr) {
  if (!GLEXT_GL_SGIS_multisample)
    return;
  glext_glSampleMaskSGIS
    = (PFNGLSAMPLEMASKSGISPROC)load (userptr, "glSampleMaskSGIS");
  glext_glSamplePatternSGIS
    = (PFNGLSAMPLEPATTERNSGISPROC)load (userptr, "glSamplePatternSGIS");
}
static void
glext_gl_load_GL_SGIS_pixel_texture (GLEXTuserptrloadfunc load,
                                     void* userptr) {
  if (!GLEXT_GL_SGIS_pixel_texture)
    return;
  glext_glGetPixelTexGenParameterfvSGIS
    = (PFNGLGETPIXELTEXGENPARAMETERFVSGISPROC)load (
      userptr, "glGetPixelTexGenParameterfvSGIS");
  glext_glGetPixelTexGenParameterivSGIS
    = (PFNGLGETPIXELTEXGENPARAMETERIVSGISPROC)load (
      userptr, "glGetPixelTexGenParameterivSGIS");
  glext_glPixelTexGenParameterfSGIS
    = (PFNGLPIXELTEXGENPARAMETERFSGISPROC)load (userptr,
                                                "glPixelTexGenParameterfSGIS");
  glext_glPixelTexGenParameterfvSGIS
    = (PFNGLPIXELTEXGENPARAMETERFVSGISPROC)load (
      userptr, "glPixelTexGenParameterfvSGIS");
  glext_glPixelTexGenParameteriSGIS
    = (PFNGLPIXELTEXGENPARAMETERISGISPROC)load (userptr,
                                                "glPixelTexGenParameteriSGIS");
  glext_glPixelTexGenParameterivSGIS
    = (PFNGLPIXELTEXGENPARAMETERIVSGISPROC)load (
      userptr, "glPixelTexGenParameterivSGIS");
}
static void
glext_gl_load_GL_SGIS_point_parameters (GLEXTuserptrloadfunc load,
                                        void* userptr) {
  if (!GLEXT_GL_SGIS_point_parameters)
    return;
  glext_glPointParameterfSGIS
    = (PFNGLPOINTPARAMETERFSGISPROC)load (userptr, "glPointParameterfSGIS");
  glext_glPointParameterfvSGIS
    = (PFNGLPOINTPARAMETERFVSGISPROC)load (userptr, "glPointParameterfvSGIS");
}
static void
glext_gl_load_GL_SGIS_sharpen_texture (GLEXTuserptrloadfunc load,
                                       void* userptr) {
  if (!GLEXT_GL_SGIS_sharpen_texture)
    return;
  glext_glGetSharpenTexFuncSGIS = (PFNGLGETSHARPENTEXFUNCSGISPROC)load (
    userptr, "glGetSharpenTexFuncSGIS");
  glext_glSharpenTexFuncSGIS
    = (PFNGLSHARPENTEXFUNCSGISPROC)load (userptr, "glSharpenTexFuncSGIS");
}
static void
glext_gl_load_GL_SGIS_texture4D (GLEXTuserptrloadfunc load, void* userptr) {
  if (!GLEXT_GL_SGIS_texture4D)
    return;
  glext_glTexImage4DSGIS
    = (PFNGLTEXIMAGE4DSGISPROC)load (userptr, "glTexImage4DSGIS");
  glext_glTexSubImage4DSGIS
    = (PFNGLTEXSUBIMAGE4DSGISPROC)load (userptr, "glTexSubImage4DSGIS");
}
static void
glext_gl_load_GL_SGIS_texture_color_mask (GLEXTuserptrloadfunc load,
                                          void* userptr) {
  if (!GLEXT_GL_SGIS_texture_color_mask)
    return;
  glext_glTextureColorMaskSGIS
    = (PFNGLTEXTURECOLORMASKSGISPROC)load (userptr, "glTextureColorMaskSGIS");
}
static void
glext_gl_load_GL_SGIS_texture_filter4 (GLEXTuserptrloadfunc load,
                                       void* userptr) {
  if (!GLEXT_GL_SGIS_texture_filter4)
    return;
  glext_glGetTexFilterFuncSGIS
    = (PFNGLGETTEXFILTERFUNCSGISPROC)load (userptr, "glGetTexFilterFuncSGIS");
  glext_glTexFilterFuncSGIS
    = (PFNGLTEXFILTERFUNCSGISPROC)load (userptr, "glTexFilterFuncSGIS");
}
static void
glext_gl_load_GL_SGIX_async (GLEXTuserptrloadfunc load, void* userptr) {
  if (!GLEXT_GL_SGIX_async)
    return;
  glext_glAsyncMarkerSGIX
    = (PFNGLASYNCMARKERSGIXPROC)load (userptr, "glAsyncMarkerSGIX");
  glext_glDeleteAsyncMarkersSGIX = (PFNGLDELETEASYNCMARKERSSGIXPROC)load (
    userptr, "glDeleteAsyncMarkersSGIX");
  glext_glFinishAsyncSGIX
    = (PFNGLFINISHASYNCSGIXPROC)load (userptr, "glFinishAsyncSGIX");
  glext_glGenAsyncMarkersSGIX
    = (PFNGLGENASYNCMARKERSSGIXPROC)load (userptr, "glGenAsyncMarkersSGIX");
  glext_glIsAsyncMarkerSGIX
    = (PFNGLISASYNCMARKERSGIXPROC)load (userptr, "glIsAsyncMarkerSGIX");
  glext_glPollAsyncSGIX
    = (PFNGLPOLLASYNCSGIXPROC)load (userptr, "glPollAsyncSGIX");
}
static void
glext_gl_load_GL_SGIX_flush_raster (GLEXTuserptrloadfunc load, void* userptr) {
  if (!GLEXT_GL_SGIX_flush_raster)
    return;
  glext_glFlushRasterSGIX
    = (PFNGLFLUSHRASTERSGIXPROC)load (userptr, "glFlushRasterSGIX");
}
static void
glext_gl_load_GL_SGIX_fragment_lighting (GLEXTuserptrloadfunc load,
                                         void* userptr) {
  if (!GLEXT_GL_SGIX_fragment_lighting)
    return;
  glext_glFragmentColorMaterialSGIX
    = (PFNGLFRAGMENTCOLORMATERIALSGIXPROC)load (userptr,
                                                "glFragmentColorMaterialSGIX");
  glext_glFragmentLightModelfSGIX = (PFNGLFRAGMENTLIGHTMODELFSGIXPROC)load (
    userptr, "glFragmentLightModelfSGIX");
  glext_glFragmentLightModelfvSGIX = (PFNGLFRAGMENTLIGHTMODELFVSGIXPROC)load (
    userptr, "glFragmentLightModelfvSGIX");
  glext_glFragmentLightModeliSGIX = (PFNGLFRAGMENTLIGHTMODELISGIXPROC)load (
    userptr, "glFragmentLightModeliSGIX");
  glext_glFragmentLightModelivSGIX = (PFNGLFRAGMENTLIGHTMODELIVSGIXPROC)load (
    userptr, "glFragmentLightModelivSGIX");
  glext_glFragmentLightfSGIX
    = (PFNGLFRAGMENTLIGHTFSGIXPROC)load (userptr, "glFragmentLightfSGIX");
  glext_glFragmentLightfvSGIX
    = (PFNGLFRAGMENTLIGHTFVSGIXPROC)load (userptr, "glFragmentLightfvSGIX");
  glext_glFragmentLightiSGIX
    = (PFNGLFRAGMENTLIGHTISGIXPROC)load (userptr, "glFragmentLightiSGIX");
  glext_glFragmentLightivSGIX
    = (PFNGLFRAGMENTLIGHTIVSGIXPROC)load (userptr, "glFragmentLightivSGIX");
  glext_glFragmentMaterialfSGIX = (PFNGLFRAGMENTMATERIALFSGIXPROC)load (
    userptr, "glFragmentMaterialfSGIX");
  glext_glFragmentMaterialfvSGIX = (PFNGLFRAGMENTMATERIALFVSGIXPROC)load (
    userptr, "glFragmentMaterialfvSGIX");
  glext_glFragmentMaterialiSGIX = (PFNGLFRAGMENTMATERIALISGIXPROC)load (
    userptr, "glFragmentMaterialiSGIX");
  glext_glFragmentMaterialivSGIX = (PFNGLFRAGMENTMATERIALIVSGIXPROC)load (
    userptr, "glFragmentMaterialivSGIX");
  glext_glGetFragmentLightfvSGIX = (PFNGLGETFRAGMENTLIGHTFVSGIXPROC)load (
    userptr, "glGetFragmentLightfvSGIX");
  glext_glGetFragmentLightivSGIX = (PFNGLGETFRAGMENTLIGHTIVSGIXPROC)load (
    userptr, "glGetFragmentLightivSGIX");
  glext_glGetFragmentMaterialfvSGIX
    = (PFNGLGETFRAGMENTMATERIALFVSGIXPROC)load (userptr,
                                                "glGetFragmentMaterialfvSGIX");
  glext_glGetFragmentMaterialivSGIX
    = (PFNGLGETFRAGMENTMATERIALIVSGIXPROC)load (userptr,
                                                "glGetFragmentMaterialivSGIX");
  glext_glLightEnviSGIX
    = (PFNGLLIGHTENVISGIXPROC)load (userptr, "glLightEnviSGIX");
}
static void
glext_gl_load_GL_SGIX_framezoom (GLEXTuserptrloadfunc load, void* userptr) {
  if (!GLEXT_GL_SGIX_framezoom)
    return;
  glext_glFrameZoomSGIX
    = (PFNGLFRAMEZOOMSGIXPROC)load (userptr, "glFrameZoomSGIX");
}
static void
glext_gl_load_GL_SGIX_igloo_interface (GLEXTuserptrloadfunc load,
                                       void* userptr) {
  if (!GLEXT_GL_SGIX_igloo_interface)
    return;
  glext_glIglooInterfaceSGIX
    = (PFNGLIGLOOINTERFACESGIXPROC)load (userptr, "glIglooInterfaceSGIX");
}
static void
glext_gl_load_GL_SGIX_instruments (GLEXTuserptrloadfunc load, void* userptr) {
  if (!GLEXT_GL_SGIX_instruments)
    return;
  glext_glGetInstrumentsSGIX
    = (PFNGLGETINSTRUMENTSSGIXPROC)load (userptr, "glGetInstrumentsSGIX");
  glext_glInstrumentsBufferSGIX = (PFNGLINSTRUMENTSBUFFERSGIXPROC)load (
    userptr, "glInstrumentsBufferSGIX");
  glext_glPollInstrumentsSGIX
    = (PFNGLPOLLINSTRUMENTSSGIXPROC)load (userptr, "glPollInstrumentsSGIX");
  glext_glReadInstrumentsSGIX
    = (PFNGLREADINSTRUMENTSSGIXPROC)load (userptr, "glReadInstrumentsSGIX");
  glext_glStartInstrumentsSGIX
    = (PFNGLSTARTINSTRUMENTSSGIXPROC)load (userptr, "glStartInstrumentsSGIX");
  glext_glStopInstrumentsSGIX
    = (PFNGLSTOPINSTRUMENTSSGIXPROC)load (userptr, "glStopInstrumentsSGIX");
}
static void
glext_gl_load_GL_SGIX_list_priority (GLEXTuserptrloadfunc load,
                                     void* userptr) {
  if (!GLEXT_GL_SGIX_list_priority)
    return;
  glext_glGetListParameterfvSGIX = (PFNGLGETLISTPARAMETERFVSGIXPROC)load (
    userptr, "glGetListParameterfvSGIX");
  glext_glGetListParameterivSGIX = (PFNGLGETLISTPARAMETERIVSGIXPROC)load (
    userptr, "glGetListParameterivSGIX");
  glext_glListParameterfSGIX
    = (PFNGLLISTPARAMETERFSGIXPROC)load (userptr, "glListParameterfSGIX");
  glext_glListParameterfvSGIX
    = (PFNGLLISTPARAMETERFVSGIXPROC)load (userptr, "glListParameterfvSGIX");
  glext_glListParameteriSGIX
    = (PFNGLLISTPARAMETERISGIXPROC)load (userptr, "glListParameteriSGIX");
  glext_glListParameterivSGIX
    = (PFNGLLISTPARAMETERIVSGIXPROC)load (userptr, "glListParameterivSGIX");
}
static void
glext_gl_load_GL_SGIX_pixel_texture (GLEXTuserptrloadfunc load,
                                     void* userptr) {
  if (!GLEXT_GL_SGIX_pixel_texture)
    return;
  glext_glPixelTexGenSGIX
    = (PFNGLPIXELTEXGENSGIXPROC)load (userptr, "glPixelTexGenSGIX");
}
static void
glext_gl_load_GL_SGIX_polynomial_ffd (GLEXTuserptrloadfunc load,
                                      void* userptr) {
  if (!GLEXT_GL_SGIX_polynomial_ffd)
    return;
  glext_glDeformSGIX = (PFNGLDEFORMSGIXPROC)load (userptr, "glDeformSGIX");
  glext_glDeformationMap3dSGIX
    = (PFNGLDEFORMATIONMAP3DSGIXPROC)load (userptr, "glDeformationMap3dSGIX");
  glext_glDeformationMap3fSGIX
    = (PFNGLDEFORMATIONMAP3FSGIXPROC)load (userptr, "glDeformationMap3fSGIX");
  glext_glLoadIdentityDeformationMapSGIX
    = (PFNGLLOADIDENTITYDEFORMATIONMAPSGIXPROC)load (
      userptr, "glLoadIdentityDeformationMapSGIX");
}
static void
glext_gl_load_GL_SGIX_reference_plane (GLEXTuserptrloadfunc load,
                                       void* userptr) {
  if (!GLEXT_GL_SGIX_reference_plane)
    return;
  glext_glReferencePlaneSGIX
    = (PFNGLREFERENCEPLANESGIXPROC)load (userptr, "glReferencePlaneSGIX");
}
static void
glext_gl_load_GL_SGIX_sprite (GLEXTuserptrloadfunc load, void* userptr) {
  if (!GLEXT_GL_SGIX_sprite)
    return;
  glext_glSpriteParameterfSGIX
    = (PFNGLSPRITEPARAMETERFSGIXPROC)load (userptr, "glSpriteParameterfSGIX");
  glext_glSpriteParameterfvSGIX = (PFNGLSPRITEPARAMETERFVSGIXPROC)load (
    userptr, "glSpriteParameterfvSGIX");
  glext_glSpriteParameteriSGIX
    = (PFNGLSPRITEPARAMETERISGIXPROC)load (userptr, "glSpriteParameteriSGIX");
  glext_glSpriteParameterivSGIX = (PFNGLSPRITEPARAMETERIVSGIXPROC)load (
    userptr, "glSpriteParameterivSGIX");
}
static void
glext_gl_load_GL_SGIX_tag_sample_buffer (GLEXTuserptrloadfunc load,
                                         void* userptr) {
  if (!GLEXT_GL_SGIX_tag_sample_buffer)
    return;
  glext_glTagSampleBufferSGIX
    = (PFNGLTAGSAMPLEBUFFERSGIXPROC)load (userptr, "glTagSampleBufferSGIX");
}
static void
glext_gl_load_GL_SGI_color_table (GLEXTuserptrloadfunc load, void* userptr) {
  if (!GLEXT_GL_SGI_color_table)
    return;
  glext_glColorTableParameterfvSGI = (PFNGLCOLORTABLEPARAMETERFVSGIPROC)load (
    userptr, "glColorTableParameterfvSGI");
  glext_glColorTableParameterivSGI = (PFNGLCOLORTABLEPARAMETERIVSGIPROC)load (
    userptr, "glColorTableParameterivSGI");
  glext_glColorTableSGI
    = (PFNGLCOLORTABLESGIPROC)load (userptr, "glColorTableSGI");
  glext_glCopyColorTableSGI
    = (PFNGLCOPYCOLORTABLESGIPROC)load (userptr, "glCopyColorTableSGI");
  glext_glGetColorTableParameterfvSGI
    = (PFNGLGETCOLORTABLEPARAMETERFVSGIPROC)load (
      userptr, "glGetColorTableParameterfvSGI");
  glext_glGetColorTableParameterivSGI
    = (PFNGLGETCOLORTABLEPARAMETERIVSGIPROC)load (
      userptr, "glGetColorTableParameterivSGI");
  glext_glGetColorTableSGI
    = (PFNGLGETCOLORTABLESGIPROC)load (userptr, "glGetColorTableSGI");
}
static void
glext_gl_load_GL_SUNX_constant_data (GLEXTuserptrloadfunc load,
                                     void* userptr) {
  if (!GLEXT_GL_SUNX_constant_data)
    return;
  glext_glFinishTextureSUNX
    = (PFNGLFINISHTEXTURESUNXPROC)load (userptr, "glFinishTextureSUNX");
}
static void
glext_gl_load_GL_SUN_global_alpha (GLEXTuserptrloadfunc load, void* userptr) {
  if (!GLEXT_GL_SUN_global_alpha)
    return;
  glext_glGlobalAlphaFactorbSUN = (PFNGLGLOBALALPHAFACTORBSUNPROC)load (
    userptr, "glGlobalAlphaFactorbSUN");
  glext_glGlobalAlphaFactordSUN = (PFNGLGLOBALALPHAFACTORDSUNPROC)load (
    userptr, "glGlobalAlphaFactordSUN");
  glext_glGlobalAlphaFactorfSUN = (PFNGLGLOBALALPHAFACTORFSUNPROC)load (
    userptr, "glGlobalAlphaFactorfSUN");
  glext_glGlobalAlphaFactoriSUN = (PFNGLGLOBALALPHAFACTORISUNPROC)load (
    userptr, "glGlobalAlphaFactoriSUN");
  glext_glGlobalAlphaFactorsSUN = (PFNGLGLOBALALPHAFACTORSSUNPROC)load (
    userptr, "glGlobalAlphaFactorsSUN");
  glext_glGlobalAlphaFactorubSUN = (PFNGLGLOBALALPHAFACTORUBSUNPROC)load (
    userptr, "glGlobalAlphaFactorubSUN");
  glext_glGlobalAlphaFactoruiSUN = (PFNGLGLOBALALPHAFACTORUISUNPROC)load (
    userptr, "glGlobalAlphaFactoruiSUN");
  glext_glGlobalAlphaFactorusSUN = (PFNGLGLOBALALPHAFACTORUSSUNPROC)load (
    userptr, "glGlobalAlphaFactorusSUN");
}
static void
glext_gl_load_GL_SUN_mesh_array (GLEXTuserptrloadfunc load, void* userptr) {
  if (!GLEXT_GL_SUN_mesh_array)
    return;
  glext_glDrawMeshArraysSUN
    = (PFNGLDRAWMESHARRAYSSUNPROC)load (userptr, "glDrawMeshArraysSUN");
}
static void
glext_gl_load_GL_SUN_triangle_list (GLEXTuserptrloadfunc load, void* userptr) {
  if (!GLEXT_GL_SUN_triangle_list)
    return;
  glext_glReplacementCodePointerSUN
    = (PFNGLREPLACEMENTCODEPOINTERSUNPROC)load (userptr,
                                                "glReplacementCodePointerSUN");
  glext_glReplacementCodeubSUN
    = (PFNGLREPLACEMENTCODEUBSUNPROC)load (userptr, "glReplacementCodeubSUN");
  glext_glReplacementCodeubvSUN = (PFNGLREPLACEMENTCODEUBVSUNPROC)load (
    userptr, "glReplacementCodeubvSUN");
  glext_glReplacementCodeuiSUN
    = (PFNGLREPLACEMENTCODEUISUNPROC)load (userptr, "glReplacementCodeuiSUN");
  glext_glReplacementCodeuivSUN = (PFNGLREPLACEMENTCODEUIVSUNPROC)load (
    userptr, "glReplacementCodeuivSUN");
  glext_glReplacementCodeusSUN
    = (PFNGLREPLACEMENTCODEUSSUNPROC)load (userptr, "glReplacementCodeusSUN");
  glext_glReplacementCodeusvSUN = (PFNGLREPLACEMENTCODEUSVSUNPROC)load (
    userptr, "glReplacementCodeusvSUN");
}
static void
glext_gl_load_GL_SUN_vertex (GLEXTuserptrloadfunc load, void* userptr) {
  if (!GLEXT_GL_SUN_vertex)
    return;
  glext_glColor3fVertex3fSUN
    = (PFNGLCOLOR3FVERTEX3FSUNPROC)load (userptr, "glColor3fVertex3fSUN");
  glext_glColor3fVertex3fvSUN
    = (PFNGLCOLOR3FVERTEX3FVSUNPROC)load (userptr, "glColor3fVertex3fvSUN");
  glext_glColor4fNormal3fVertex3fSUN
    = (PFNGLCOLOR4FNORMAL3FVERTEX3FSUNPROC)load (
      userptr, "glColor4fNormal3fVertex3fSUN");
  glext_glColor4fNormal3fVertex3fvSUN
    = (PFNGLCOLOR4FNORMAL3FVERTEX3FVSUNPROC)load (
      userptr, "glColor4fNormal3fVertex3fvSUN");
  glext_glColor4ubVertex2fSUN
    = (PFNGLCOLOR4UBVERTEX2FSUNPROC)load (userptr, "glColor4ubVertex2fSUN");
  glext_glColor4ubVertex2fvSUN
    = (PFNGLCOLOR4UBVERTEX2FVSUNPROC)load (userptr, "glColor4ubVertex2fvSUN");
  glext_glColor4ubVertex3fSUN
    = (PFNGLCOLOR4UBVERTEX3FSUNPROC)load (userptr, "glColor4ubVertex3fSUN");
  glext_glColor4ubVertex3fvSUN
    = (PFNGLCOLOR4UBVERTEX3FVSUNPROC)load (userptr, "glColor4ubVertex3fvSUN");
  glext_glNormal3fVertex3fSUN
    = (PFNGLNORMAL3FVERTEX3FSUNPROC)load (userptr, "glNormal3fVertex3fSUN");
  glext_glNormal3fVertex3fvSUN
    = (PFNGLNORMAL3FVERTEX3FVSUNPROC)load (userptr, "glNormal3fVertex3fvSUN");
  glext_glReplacementCodeuiColor3fVertex3fSUN
    = (PFNGLREPLACEMENTCODEUICOLOR3FVERTEX3FSUNPROC)load (
      userptr, "glReplacementCodeuiColor3fVertex3fSUN");
  glext_glReplacementCodeuiColor3fVertex3fvSUN
    = (PFNGLREPLACEMENTCODEUICOLOR3FVERTEX3FVSUNPROC)load (
      userptr, "glReplacementCodeuiColor3fVertex3fvSUN");
  glext_glReplacementCodeuiColor4fNormal3fVertex3fSUN
    = (PFNGLREPLACEMENTCODEUICOLOR4FNORMAL3FVERTEX3FSUNPROC)load (
      userptr, "glReplacementCodeuiColor4fNormal3fVertex3fSUN");
  glext_glReplacementCodeuiColor4fNormal3fVertex3fvSUN
    = (PFNGLREPLACEMENTCODEUICOLOR4FNORMAL3FVERTEX3FVSUNPROC)load (
      userptr, "glReplacementCodeuiColor4fNormal3fVertex3fvSUN");
  glext_glReplacementCodeuiColor4ubVertex3fSUN
    = (PFNGLREPLACEMENTCODEUICOLOR4UBVERTEX3FSUNPROC)load (
      userptr, "glReplacementCodeuiColor4ubVertex3fSUN");
  glext_glReplacementCodeuiColor4ubVertex3fvSUN
    = (PFNGLREPLACEMENTCODEUICOLOR4UBVERTEX3FVSUNPROC)load (
      userptr, "glReplacementCodeuiColor4ubVertex3fvSUN");
  glext_glReplacementCodeuiNormal3fVertex3fSUN
    = (PFNGLREPLACEMENTCODEUINORMAL3FVERTEX3FSUNPROC)load (
      userptr, "glReplacementCodeuiNormal3fVertex3fSUN");
  glext_glReplacementCodeuiNormal3fVertex3fvSUN
    = (PFNGLREPLACEMENTCODEUINORMAL3FVERTEX3FVSUNPROC)load (
      userptr, "glReplacementCodeuiNormal3fVertex3fvSUN");
  glext_glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fSUN
    = (PFNGLREPLACEMENTCODEUITEXCOORD2FCOLOR4FNORMAL3FVERTEX3FSUNPROC)load (
      userptr, "glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fSUN");
  glext_glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fvSUN
    = (PFNGLREPLACEMENTCODEUITEXCOORD2FCOLOR4FNORMAL3FVERTEX3FVSUNPROC)load (
      userptr, "glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fvSUN");
  glext_glReplacementCodeuiTexCoord2fNormal3fVertex3fSUN
    = (PFNGLREPLACEMENTCODEUITEXCOORD2FNORMAL3FVERTEX3FSUNPROC)load (
      userptr, "glReplacementCodeuiTexCoord2fNormal3fVertex3fSUN");
  glext_glReplacementCodeuiTexCoord2fNormal3fVertex3fvSUN
    = (PFNGLREPLACEMENTCODEUITEXCOORD2FNORMAL3FVERTEX3FVSUNPROC)load (
      userptr, "glReplacementCodeuiTexCoord2fNormal3fVertex3fvSUN");
  glext_glReplacementCodeuiTexCoord2fVertex3fSUN
    = (PFNGLREPLACEMENTCODEUITEXCOORD2FVERTEX3FSUNPROC)load (
      userptr, "glReplacementCodeuiTexCoord2fVertex3fSUN");
  glext_glReplacementCodeuiTexCoord2fVertex3fvSUN
    = (PFNGLREPLACEMENTCODEUITEXCOORD2FVERTEX3FVSUNPROC)load (
      userptr, "glReplacementCodeuiTexCoord2fVertex3fvSUN");
  glext_glReplacementCodeuiVertex3fSUN
    = (PFNGLREPLACEMENTCODEUIVERTEX3FSUNPROC)load (
      userptr, "glReplacementCodeuiVertex3fSUN");
  glext_glReplacementCodeuiVertex3fvSUN
    = (PFNGLREPLACEMENTCODEUIVERTEX3FVSUNPROC)load (
      userptr, "glReplacementCodeuiVertex3fvSUN");
  glext_glTexCoord2fColor3fVertex3fSUN
    = (PFNGLTEXCOORD2FCOLOR3FVERTEX3FSUNPROC)load (
      userptr, "glTexCoord2fColor3fVertex3fSUN");
  glext_glTexCoord2fColor3fVertex3fvSUN
    = (PFNGLTEXCOORD2FCOLOR3FVERTEX3FVSUNPROC)load (
      userptr, "glTexCoord2fColor3fVertex3fvSUN");
  glext_glTexCoord2fColor4fNormal3fVertex3fSUN
    = (PFNGLTEXCOORD2FCOLOR4FNORMAL3FVERTEX3FSUNPROC)load (
      userptr, "glTexCoord2fColor4fNormal3fVertex3fSUN");
  glext_glTexCoord2fColor4fNormal3fVertex3fvSUN
    = (PFNGLTEXCOORD2FCOLOR4FNORMAL3FVERTEX3FVSUNPROC)load (
      userptr, "glTexCoord2fColor4fNormal3fVertex3fvSUN");
  glext_glTexCoord2fColor4ubVertex3fSUN
    = (PFNGLTEXCOORD2FCOLOR4UBVERTEX3FSUNPROC)load (
      userptr, "glTexCoord2fColor4ubVertex3fSUN");
  glext_glTexCoord2fColor4ubVertex3fvSUN
    = (PFNGLTEXCOORD2FCOLOR4UBVERTEX3FVSUNPROC)load (
      userptr, "glTexCoord2fColor4ubVertex3fvSUN");
  glext_glTexCoord2fNormal3fVertex3fSUN
    = (PFNGLTEXCOORD2FNORMAL3FVERTEX3FSUNPROC)load (
      userptr, "glTexCoord2fNormal3fVertex3fSUN");
  glext_glTexCoord2fNormal3fVertex3fvSUN
    = (PFNGLTEXCOORD2FNORMAL3FVERTEX3FVSUNPROC)load (
      userptr, "glTexCoord2fNormal3fVertex3fvSUN");
  glext_glTexCoord2fVertex3fSUN = (PFNGLTEXCOORD2FVERTEX3FSUNPROC)load (
    userptr, "glTexCoord2fVertex3fSUN");
  glext_glTexCoord2fVertex3fvSUN = (PFNGLTEXCOORD2FVERTEX3FVSUNPROC)load (
    userptr, "glTexCoord2fVertex3fvSUN");
  glext_glTexCoord4fColor4fNormal3fVertex4fSUN
    = (PFNGLTEXCOORD4FCOLOR4FNORMAL3FVERTEX4FSUNPROC)load (
      userptr, "glTexCoord4fColor4fNormal3fVertex4fSUN");
  glext_glTexCoord4fColor4fNormal3fVertex4fvSUN
    = (PFNGLTEXCOORD4FCOLOR4FNORMAL3FVERTEX4FVSUNPROC)load (
      userptr, "glTexCoord4fColor4fNormal3fVertex4fvSUN");
  glext_glTexCoord4fVertex4fSUN = (PFNGLTEXCOORD4FVERTEX4FSUNPROC)load (
    userptr, "glTexCoord4fVertex4fSUN");
  glext_glTexCoord4fVertex4fvSUN = (PFNGLTEXCOORD4FVERTEX4FVSUNPROC)load (
    userptr, "glTexCoord4fVertex4fvSUN");
}

static void
glext_gl_free_extensions (char** exts_i) {
  if (exts_i != NULL) {
    unsigned int index;
    for (index = 0; exts_i[index]; index++) {
      free ((void*)(exts_i[index]));
    }
    free ((void*)exts_i);
    exts_i = NULL;
  }
}
static int
glext_gl_get_extensions (const char** out_exts, char*** out_exts_i) {
#if defined(GL_ES_VERSION_3_0) || defined(GL_VERSION_3_0)
  if (glext_glGetStringi != NULL && glext_glGetIntegerv != NULL) {
    unsigned int index = 0;
    unsigned int num_exts_i = 0;
    char** exts_i = NULL;
    glext_glGetIntegerv (GL_NUM_EXTENSIONS, (int*)&num_exts_i);
    exts_i = (char**)malloc ((num_exts_i + 1) * (sizeof *exts_i));
    if (exts_i == NULL) {
      return 0;
    }
    for (index = 0; index < num_exts_i; index++) {
      const char* gl_str_tmp
        = (const char*)glext_glGetStringi (GL_EXTENSIONS, index);
      size_t len = strlen (gl_str_tmp) + 1;

      char* local_str = (char*)malloc (len * sizeof (char));
      if (local_str == NULL) {
        exts_i[index] = NULL;
        glext_gl_free_extensions (exts_i);
        return 0;
      }

      memcpy (local_str, gl_str_tmp, len * sizeof (char));
      exts_i[index] = local_str;
    }
    exts_i[index] = NULL;

    *out_exts_i = exts_i;

    return 1;
  }
#else
  GLEXT_UNUSED (out_exts_i);
#endif
  if (glext_glGetString == NULL) {
    return 0;
  }
  *out_exts = (const char*)glext_glGetString (GL_EXTENSIONS);
  return 1;
}
static int
glext_gl_has_extension (const char* exts, char** exts_i, const char* ext) {
  if (exts_i) {
    unsigned int index;
    for (index = 0; exts_i[index]; index++) {
      const char* e = exts_i[index];
      if (strcmp (e, ext) == 0) {
        return 1;
      }
    }
  } else {
    const char* extensions;
    const char* loc;
    const char* terminator;
    extensions = exts;
    if (extensions == NULL || ext == NULL) {
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
  return 0;
}

static GLEXTapiproc
glext_gl_get_proc_from_userptr (void* userptr, const char* name) {
  return (GLEXT_GNUC_EXTENSION (GLEXTapiproc (*) (const char* name))
            userptr) (name);
}

static int
glext_gl_find_extensions_gl (void) {
  const char* exts = NULL;
  char** exts_i = NULL;
  if (!glext_gl_get_extensions (&exts, &exts_i))
    return 0;

  GLEXT_GL_3DFX_multisample
    = glext_gl_has_extension (exts, exts_i, "GL_3DFX_multisample");
  GLEXT_GL_3DFX_tbuffer
    = glext_gl_has_extension (exts, exts_i, "GL_3DFX_tbuffer");
  GLEXT_GL_3DFX_texture_compression_FXT1 = glext_gl_has_extension (
    exts, exts_i, "GL_3DFX_texture_compression_FXT1");
  GLEXT_GL_AMD_blend_minmax_factor
    = glext_gl_has_extension (exts, exts_i, "GL_AMD_blend_minmax_factor");
  GLEXT_GL_AMD_conservative_depth
    = glext_gl_has_extension (exts, exts_i, "GL_AMD_conservative_depth");
  GLEXT_GL_AMD_debug_output
    = glext_gl_has_extension (exts, exts_i, "GL_AMD_debug_output");
  GLEXT_GL_AMD_depth_clamp_separate
    = glext_gl_has_extension (exts, exts_i, "GL_AMD_depth_clamp_separate");
  GLEXT_GL_AMD_draw_buffers_blend
    = glext_gl_has_extension (exts, exts_i, "GL_AMD_draw_buffers_blend");
  GLEXT_GL_AMD_framebuffer_multisample_advanced = glext_gl_has_extension (
    exts, exts_i, "GL_AMD_framebuffer_multisample_advanced");
  GLEXT_GL_AMD_framebuffer_sample_positions = glext_gl_has_extension (
    exts, exts_i, "GL_AMD_framebuffer_sample_positions");
  GLEXT_GL_AMD_gcn_shader
    = glext_gl_has_extension (exts, exts_i, "GL_AMD_gcn_shader");
  GLEXT_GL_AMD_gpu_shader_half_float
    = glext_gl_has_extension (exts, exts_i, "GL_AMD_gpu_shader_half_float");
  GLEXT_GL_AMD_gpu_shader_int16
    = glext_gl_has_extension (exts, exts_i, "GL_AMD_gpu_shader_int16");
  GLEXT_GL_AMD_gpu_shader_int64
    = glext_gl_has_extension (exts, exts_i, "GL_AMD_gpu_shader_int64");
  GLEXT_GL_AMD_interleaved_elements
    = glext_gl_has_extension (exts, exts_i, "GL_AMD_interleaved_elements");
  GLEXT_GL_AMD_multi_draw_indirect
    = glext_gl_has_extension (exts, exts_i, "GL_AMD_multi_draw_indirect");
  GLEXT_GL_AMD_name_gen_delete
    = glext_gl_has_extension (exts, exts_i, "GL_AMD_name_gen_delete");
  GLEXT_GL_AMD_occlusion_query_event
    = glext_gl_has_extension (exts, exts_i, "GL_AMD_occlusion_query_event");
  GLEXT_GL_AMD_performance_monitor
    = glext_gl_has_extension (exts, exts_i, "GL_AMD_performance_monitor");
  GLEXT_GL_AMD_pinned_memory
    = glext_gl_has_extension (exts, exts_i, "GL_AMD_pinned_memory");
  GLEXT_GL_AMD_query_buffer_object
    = glext_gl_has_extension (exts, exts_i, "GL_AMD_query_buffer_object");
  GLEXT_GL_AMD_sample_positions
    = glext_gl_has_extension (exts, exts_i, "GL_AMD_sample_positions");
  GLEXT_GL_AMD_seamless_cubemap_per_texture = glext_gl_has_extension (
    exts, exts_i, "GL_AMD_seamless_cubemap_per_texture");
  GLEXT_GL_AMD_shader_atomic_counter_ops = glext_gl_has_extension (
    exts, exts_i, "GL_AMD_shader_atomic_counter_ops");
  GLEXT_GL_AMD_shader_ballot
    = glext_gl_has_extension (exts, exts_i, "GL_AMD_shader_ballot");
  GLEXT_GL_AMD_shader_explicit_vertex_parameter = glext_gl_has_extension (
    exts, exts_i, "GL_AMD_shader_explicit_vertex_parameter");
  GLEXT_GL_AMD_shader_gpu_shader_half_float_fetch = glext_gl_has_extension (
    exts, exts_i, "GL_AMD_shader_gpu_shader_half_float_fetch");
  GLEXT_GL_AMD_shader_image_load_store_lod = glext_gl_has_extension (
    exts, exts_i, "GL_AMD_shader_image_load_store_lod");
  GLEXT_GL_AMD_shader_stencil_export
    = glext_gl_has_extension (exts, exts_i, "GL_AMD_shader_stencil_export");
  GLEXT_GL_AMD_shader_trinary_minmax
    = glext_gl_has_extension (exts, exts_i, "GL_AMD_shader_trinary_minmax");
  GLEXT_GL_AMD_sparse_texture
    = glext_gl_has_extension (exts, exts_i, "GL_AMD_sparse_texture");
  GLEXT_GL_AMD_stencil_operation_extended = glext_gl_has_extension (
    exts, exts_i, "GL_AMD_stencil_operation_extended");
  GLEXT_GL_AMD_texture_gather_bias_lod
    = glext_gl_has_extension (exts, exts_i, "GL_AMD_texture_gather_bias_lod");
  GLEXT_GL_AMD_texture_texture4
    = glext_gl_has_extension (exts, exts_i, "GL_AMD_texture_texture4");
  GLEXT_GL_AMD_transform_feedback3_lines_triangles = glext_gl_has_extension (
    exts, exts_i, "GL_AMD_transform_feedback3_lines_triangles");
  GLEXT_GL_AMD_transform_feedback4
    = glext_gl_has_extension (exts, exts_i, "GL_AMD_transform_feedback4");
  GLEXT_GL_AMD_vertex_shader_layer
    = glext_gl_has_extension (exts, exts_i, "GL_AMD_vertex_shader_layer");
  GLEXT_GL_AMD_vertex_shader_tessellator = glext_gl_has_extension (
    exts, exts_i, "GL_AMD_vertex_shader_tessellator");
  GLEXT_GL_AMD_vertex_shader_viewport_index = glext_gl_has_extension (
    exts, exts_i, "GL_AMD_vertex_shader_viewport_index");
  GLEXT_GL_APPLE_aux_depth_stencil
    = glext_gl_has_extension (exts, exts_i, "GL_APPLE_aux_depth_stencil");
  GLEXT_GL_APPLE_client_storage
    = glext_gl_has_extension (exts, exts_i, "GL_APPLE_client_storage");
  GLEXT_GL_APPLE_element_array
    = glext_gl_has_extension (exts, exts_i, "GL_APPLE_element_array");
  GLEXT_GL_APPLE_fence
    = glext_gl_has_extension (exts, exts_i, "GL_APPLE_fence");
  GLEXT_GL_APPLE_float_pixels
    = glext_gl_has_extension (exts, exts_i, "GL_APPLE_float_pixels");
  GLEXT_GL_APPLE_flush_buffer_range
    = glext_gl_has_extension (exts, exts_i, "GL_APPLE_flush_buffer_range");
  GLEXT_GL_APPLE_object_purgeable
    = glext_gl_has_extension (exts, exts_i, "GL_APPLE_object_purgeable");
  GLEXT_GL_APPLE_rgb_422
    = glext_gl_has_extension (exts, exts_i, "GL_APPLE_rgb_422");
  GLEXT_GL_APPLE_row_bytes
    = glext_gl_has_extension (exts, exts_i, "GL_APPLE_row_bytes");
  GLEXT_GL_APPLE_specular_vector
    = glext_gl_has_extension (exts, exts_i, "GL_APPLE_specular_vector");
  GLEXT_GL_APPLE_texture_range
    = glext_gl_has_extension (exts, exts_i, "GL_APPLE_texture_range");
  GLEXT_GL_APPLE_transform_hint
    = glext_gl_has_extension (exts, exts_i, "GL_APPLE_transform_hint");
  GLEXT_GL_APPLE_vertex_array_object
    = glext_gl_has_extension (exts, exts_i, "GL_APPLE_vertex_array_object");
  GLEXT_GL_APPLE_vertex_array_range
    = glext_gl_has_extension (exts, exts_i, "GL_APPLE_vertex_array_range");
  GLEXT_GL_APPLE_vertex_program_evaluators = glext_gl_has_extension (
    exts, exts_i, "GL_APPLE_vertex_program_evaluators");
  GLEXT_GL_APPLE_ycbcr_422
    = glext_gl_has_extension (exts, exts_i, "GL_APPLE_ycbcr_422");
  GLEXT_GL_ARB_ES2_compatibility
    = glext_gl_has_extension (exts, exts_i, "GL_ARB_ES2_compatibility");
  GLEXT_GL_ARB_ES3_1_compatibility
    = glext_gl_has_extension (exts, exts_i, "GL_ARB_ES3_1_compatibility");
  GLEXT_GL_ARB_ES3_2_compatibility
    = glext_gl_has_extension (exts, exts_i, "GL_ARB_ES3_2_compatibility");
  GLEXT_GL_ARB_ES3_compatibility
    = glext_gl_has_extension (exts, exts_i, "GL_ARB_ES3_compatibility");
  GLEXT_GL_ARB_arrays_of_arrays
    = glext_gl_has_extension (exts, exts_i, "GL_ARB_arrays_of_arrays");
  GLEXT_GL_ARB_base_instance
    = glext_gl_has_extension (exts, exts_i, "GL_ARB_base_instance");
  GLEXT_GL_ARB_bindless_texture
    = glext_gl_has_extension (exts, exts_i, "GL_ARB_bindless_texture");
  GLEXT_GL_ARB_blend_func_extended
    = glext_gl_has_extension (exts, exts_i, "GL_ARB_blend_func_extended");
  GLEXT_GL_ARB_buffer_storage
    = glext_gl_has_extension (exts, exts_i, "GL_ARB_buffer_storage");
  GLEXT_GL_ARB_cl_event
    = glext_gl_has_extension (exts, exts_i, "GL_ARB_cl_event");
  GLEXT_GL_ARB_clear_buffer_object
    = glext_gl_has_extension (exts, exts_i, "GL_ARB_clear_buffer_object");
  GLEXT_GL_ARB_clear_texture
    = glext_gl_has_extension (exts, exts_i, "GL_ARB_clear_texture");
  GLEXT_GL_ARB_clip_control
    = glext_gl_has_extension (exts, exts_i, "GL_ARB_clip_control");
  GLEXT_GL_ARB_color_buffer_float
    = glext_gl_has_extension (exts, exts_i, "GL_ARB_color_buffer_float");
  GLEXT_GL_ARB_compatibility
    = glext_gl_has_extension (exts, exts_i, "GL_ARB_compatibility");
  GLEXT_GL_ARB_compressed_texture_pixel_storage = glext_gl_has_extension (
    exts, exts_i, "GL_ARB_compressed_texture_pixel_storage");
  GLEXT_GL_ARB_compute_shader
    = glext_gl_has_extension (exts, exts_i, "GL_ARB_compute_shader");
  GLEXT_GL_ARB_compute_variable_group_size = glext_gl_has_extension (
    exts, exts_i, "GL_ARB_compute_variable_group_size");
  GLEXT_GL_ARB_conditional_render_inverted = glext_gl_has_extension (
    exts, exts_i, "GL_ARB_conditional_render_inverted");
  GLEXT_GL_ARB_conservative_depth
    = glext_gl_has_extension (exts, exts_i, "GL_ARB_conservative_depth");
  GLEXT_GL_ARB_copy_buffer
    = glext_gl_has_extension (exts, exts_i, "GL_ARB_copy_buffer");
  GLEXT_GL_ARB_copy_image
    = glext_gl_has_extension (exts, exts_i, "GL_ARB_copy_image");
  GLEXT_GL_ARB_cull_distance
    = glext_gl_has_extension (exts, exts_i, "GL_ARB_cull_distance");
  GLEXT_GL_ARB_debug_output
    = glext_gl_has_extension (exts, exts_i, "GL_ARB_debug_output");
  GLEXT_GL_ARB_depth_buffer_float
    = glext_gl_has_extension (exts, exts_i, "GL_ARB_depth_buffer_float");
  GLEXT_GL_ARB_depth_clamp
    = glext_gl_has_extension (exts, exts_i, "GL_ARB_depth_clamp");
  GLEXT_GL_ARB_depth_texture
    = glext_gl_has_extension (exts, exts_i, "GL_ARB_depth_texture");
  GLEXT_GL_ARB_derivative_control
    = glext_gl_has_extension (exts, exts_i, "GL_ARB_derivative_control");
  GLEXT_GL_ARB_direct_state_access
    = glext_gl_has_extension (exts, exts_i, "GL_ARB_direct_state_access");
  GLEXT_GL_ARB_draw_buffers
    = glext_gl_has_extension (exts, exts_i, "GL_ARB_draw_buffers");
  GLEXT_GL_ARB_draw_buffers_blend
    = glext_gl_has_extension (exts, exts_i, "GL_ARB_draw_buffers_blend");
  GLEXT_GL_ARB_draw_elements_base_vertex = glext_gl_has_extension (
    exts, exts_i, "GL_ARB_draw_elements_base_vertex");
  GLEXT_GL_ARB_draw_indirect
    = glext_gl_has_extension (exts, exts_i, "GL_ARB_draw_indirect");
  GLEXT_GL_ARB_draw_instanced
    = glext_gl_has_extension (exts, exts_i, "GL_ARB_draw_instanced");
  GLEXT_GL_ARB_enhanced_layouts
    = glext_gl_has_extension (exts, exts_i, "GL_ARB_enhanced_layouts");
  GLEXT_GL_ARB_explicit_attrib_location
    = glext_gl_has_extension (exts, exts_i, "GL_ARB_explicit_attrib_location");
  GLEXT_GL_ARB_explicit_uniform_location = glext_gl_has_extension (
    exts, exts_i, "GL_ARB_explicit_uniform_location");
  GLEXT_GL_ARB_fragment_coord_conventions = glext_gl_has_extension (
    exts, exts_i, "GL_ARB_fragment_coord_conventions");
  GLEXT_GL_ARB_fragment_layer_viewport
    = glext_gl_has_extension (exts, exts_i, "GL_ARB_fragment_layer_viewport");
  GLEXT_GL_ARB_fragment_program
    = glext_gl_has_extension (exts, exts_i, "GL_ARB_fragment_program");
  GLEXT_GL_ARB_fragment_program_shadow
    = glext_gl_has_extension (exts, exts_i, "GL_ARB_fragment_program_shadow");
  GLEXT_GL_ARB_fragment_shader
    = glext_gl_has_extension (exts, exts_i, "GL_ARB_fragment_shader");
  GLEXT_GL_ARB_fragment_shader_interlock = glext_gl_has_extension (
    exts, exts_i, "GL_ARB_fragment_shader_interlock");
  GLEXT_GL_ARB_framebuffer_no_attachments = glext_gl_has_extension (
    exts, exts_i, "GL_ARB_framebuffer_no_attachments");
  GLEXT_GL_ARB_framebuffer_object
    = glext_gl_has_extension (exts, exts_i, "GL_ARB_framebuffer_object");
  GLEXT_GL_ARB_framebuffer_sRGB
    = glext_gl_has_extension (exts, exts_i, "GL_ARB_framebuffer_sRGB");
  GLEXT_GL_ARB_geometry_shader4
    = glext_gl_has_extension (exts, exts_i, "GL_ARB_geometry_shader4");
  GLEXT_GL_ARB_get_program_binary
    = glext_gl_has_extension (exts, exts_i, "GL_ARB_get_program_binary");
  GLEXT_GL_ARB_get_texture_sub_image
    = glext_gl_has_extension (exts, exts_i, "GL_ARB_get_texture_sub_image");
  GLEXT_GL_ARB_gl_spirv
    = glext_gl_has_extension (exts, exts_i, "GL_ARB_gl_spirv");
  GLEXT_GL_ARB_gpu_shader5
    = glext_gl_has_extension (exts, exts_i, "GL_ARB_gpu_shader5");
  GLEXT_GL_ARB_gpu_shader_fp64
    = glext_gl_has_extension (exts, exts_i, "GL_ARB_gpu_shader_fp64");
  GLEXT_GL_ARB_gpu_shader_int64
    = glext_gl_has_extension (exts, exts_i, "GL_ARB_gpu_shader_int64");
  GLEXT_GL_ARB_half_float_pixel
    = glext_gl_has_extension (exts, exts_i, "GL_ARB_half_float_pixel");
  GLEXT_GL_ARB_half_float_vertex
    = glext_gl_has_extension (exts, exts_i, "GL_ARB_half_float_vertex");
  GLEXT_GL_ARB_imaging
    = glext_gl_has_extension (exts, exts_i, "GL_ARB_imaging");
  GLEXT_GL_ARB_indirect_parameters
    = glext_gl_has_extension (exts, exts_i, "GL_ARB_indirect_parameters");
  GLEXT_GL_ARB_instanced_arrays
    = glext_gl_has_extension (exts, exts_i, "GL_ARB_instanced_arrays");
  GLEXT_GL_ARB_internalformat_query
    = glext_gl_has_extension (exts, exts_i, "GL_ARB_internalformat_query");
  GLEXT_GL_ARB_internalformat_query2
    = glext_gl_has_extension (exts, exts_i, "GL_ARB_internalformat_query2");
  GLEXT_GL_ARB_invalidate_subdata
    = glext_gl_has_extension (exts, exts_i, "GL_ARB_invalidate_subdata");
  GLEXT_GL_ARB_map_buffer_alignment
    = glext_gl_has_extension (exts, exts_i, "GL_ARB_map_buffer_alignment");
  GLEXT_GL_ARB_map_buffer_range
    = glext_gl_has_extension (exts, exts_i, "GL_ARB_map_buffer_range");
  GLEXT_GL_ARB_matrix_palette
    = glext_gl_has_extension (exts, exts_i, "GL_ARB_matrix_palette");
  GLEXT_GL_ARB_multi_bind
    = glext_gl_has_extension (exts, exts_i, "GL_ARB_multi_bind");
  GLEXT_GL_ARB_multi_draw_indirect
    = glext_gl_has_extension (exts, exts_i, "GL_ARB_multi_draw_indirect");
  GLEXT_GL_ARB_multisample
    = glext_gl_has_extension (exts, exts_i, "GL_ARB_multisample");
  GLEXT_GL_ARB_multitexture
    = glext_gl_has_extension (exts, exts_i, "GL_ARB_multitexture");
  GLEXT_GL_ARB_occlusion_query
    = glext_gl_has_extension (exts, exts_i, "GL_ARB_occlusion_query");
  GLEXT_GL_ARB_occlusion_query2
    = glext_gl_has_extension (exts, exts_i, "GL_ARB_occlusion_query2");
  GLEXT_GL_ARB_parallel_shader_compile
    = glext_gl_has_extension (exts, exts_i, "GL_ARB_parallel_shader_compile");
  GLEXT_GL_ARB_pipeline_statistics_query = glext_gl_has_extension (
    exts, exts_i, "GL_ARB_pipeline_statistics_query");
  GLEXT_GL_ARB_pixel_buffer_object
    = glext_gl_has_extension (exts, exts_i, "GL_ARB_pixel_buffer_object");
  GLEXT_GL_ARB_point_parameters
    = glext_gl_has_extension (exts, exts_i, "GL_ARB_point_parameters");
  GLEXT_GL_ARB_point_sprite
    = glext_gl_has_extension (exts, exts_i, "GL_ARB_point_sprite");
  GLEXT_GL_ARB_polygon_offset_clamp
    = glext_gl_has_extension (exts, exts_i, "GL_ARB_polygon_offset_clamp");
  GLEXT_GL_ARB_post_depth_coverage
    = glext_gl_has_extension (exts, exts_i, "GL_ARB_post_depth_coverage");
  GLEXT_GL_ARB_program_interface_query
    = glext_gl_has_extension (exts, exts_i, "GL_ARB_program_interface_query");
  GLEXT_GL_ARB_provoking_vertex
    = glext_gl_has_extension (exts, exts_i, "GL_ARB_provoking_vertex");
  GLEXT_GL_ARB_query_buffer_object
    = glext_gl_has_extension (exts, exts_i, "GL_ARB_query_buffer_object");
  GLEXT_GL_ARB_robust_buffer_access_behavior = glext_gl_has_extension (
    exts, exts_i, "GL_ARB_robust_buffer_access_behavior");
  GLEXT_GL_ARB_robustness
    = glext_gl_has_extension (exts, exts_i, "GL_ARB_robustness");
  GLEXT_GL_ARB_robustness_isolation
    = glext_gl_has_extension (exts, exts_i, "GL_ARB_robustness_isolation");
  GLEXT_GL_ARB_sample_locations
    = glext_gl_has_extension (exts, exts_i, "GL_ARB_sample_locations");
  GLEXT_GL_ARB_sample_shading
    = glext_gl_has_extension (exts, exts_i, "GL_ARB_sample_shading");
  GLEXT_GL_ARB_sampler_objects
    = glext_gl_has_extension (exts, exts_i, "GL_ARB_sampler_objects");
  GLEXT_GL_ARB_seamless_cube_map
    = glext_gl_has_extension (exts, exts_i, "GL_ARB_seamless_cube_map");
  GLEXT_GL_ARB_seamless_cubemap_per_texture = glext_gl_has_extension (
    exts, exts_i, "GL_ARB_seamless_cubemap_per_texture");
  GLEXT_GL_ARB_separate_shader_objects
    = glext_gl_has_extension (exts, exts_i, "GL_ARB_separate_shader_objects");
  GLEXT_GL_ARB_shader_atomic_counter_ops = glext_gl_has_extension (
    exts, exts_i, "GL_ARB_shader_atomic_counter_ops");
  GLEXT_GL_ARB_shader_atomic_counters
    = glext_gl_has_extension (exts, exts_i, "GL_ARB_shader_atomic_counters");
  GLEXT_GL_ARB_shader_ballot
    = glext_gl_has_extension (exts, exts_i, "GL_ARB_shader_ballot");
  GLEXT_GL_ARB_shader_bit_encoding
    = glext_gl_has_extension (exts, exts_i, "GL_ARB_shader_bit_encoding");
  GLEXT_GL_ARB_shader_clock
    = glext_gl_has_extension (exts, exts_i, "GL_ARB_shader_clock");
  GLEXT_GL_ARB_shader_draw_parameters
    = glext_gl_has_extension (exts, exts_i, "GL_ARB_shader_draw_parameters");
  GLEXT_GL_ARB_shader_group_vote
    = glext_gl_has_extension (exts, exts_i, "GL_ARB_shader_group_vote");
  GLEXT_GL_ARB_shader_image_load_store
    = glext_gl_has_extension (exts, exts_i, "GL_ARB_shader_image_load_store");
  GLEXT_GL_ARB_shader_image_size
    = glext_gl_has_extension (exts, exts_i, "GL_ARB_shader_image_size");
  GLEXT_GL_ARB_shader_objects
    = glext_gl_has_extension (exts, exts_i, "GL_ARB_shader_objects");
  GLEXT_GL_ARB_shader_precision
    = glext_gl_has_extension (exts, exts_i, "GL_ARB_shader_precision");
  GLEXT_GL_ARB_shader_stencil_export
    = glext_gl_has_extension (exts, exts_i, "GL_ARB_shader_stencil_export");
  GLEXT_GL_ARB_shader_storage_buffer_object = glext_gl_has_extension (
    exts, exts_i, "GL_ARB_shader_storage_buffer_object");
  GLEXT_GL_ARB_shader_subroutine
    = glext_gl_has_extension (exts, exts_i, "GL_ARB_shader_subroutine");
  GLEXT_GL_ARB_shader_texture_image_samples = glext_gl_has_extension (
    exts, exts_i, "GL_ARB_shader_texture_image_samples");
  GLEXT_GL_ARB_shader_texture_lod
    = glext_gl_has_extension (exts, exts_i, "GL_ARB_shader_texture_lod");
  GLEXT_GL_ARB_shader_viewport_layer_array = glext_gl_has_extension (
    exts, exts_i, "GL_ARB_shader_viewport_layer_array");
  GLEXT_GL_ARB_shading_language_100
    = glext_gl_has_extension (exts, exts_i, "GL_ARB_shading_language_100");
  GLEXT_GL_ARB_shading_language_420pack
    = glext_gl_has_extension (exts, exts_i, "GL_ARB_shading_language_420pack");
  GLEXT_GL_ARB_shading_language_include
    = glext_gl_has_extension (exts, exts_i, "GL_ARB_shading_language_include");
  GLEXT_GL_ARB_shading_language_packing
    = glext_gl_has_extension (exts, exts_i, "GL_ARB_shading_language_packing");
  GLEXT_GL_ARB_shadow = glext_gl_has_extension (exts, exts_i, "GL_ARB_shadow");
  GLEXT_GL_ARB_shadow_ambient
    = glext_gl_has_extension (exts, exts_i, "GL_ARB_shadow_ambient");
  GLEXT_GL_ARB_sparse_buffer
    = glext_gl_has_extension (exts, exts_i, "GL_ARB_sparse_buffer");
  GLEXT_GL_ARB_sparse_texture
    = glext_gl_has_extension (exts, exts_i, "GL_ARB_sparse_texture");
  GLEXT_GL_ARB_sparse_texture2
    = glext_gl_has_extension (exts, exts_i, "GL_ARB_sparse_texture2");
  GLEXT_GL_ARB_sparse_texture_clamp
    = glext_gl_has_extension (exts, exts_i, "GL_ARB_sparse_texture_clamp");
  GLEXT_GL_ARB_spirv_extensions
    = glext_gl_has_extension (exts, exts_i, "GL_ARB_spirv_extensions");
  GLEXT_GL_ARB_stencil_texturing
    = glext_gl_has_extension (exts, exts_i, "GL_ARB_stencil_texturing");
  GLEXT_GL_ARB_sync = glext_gl_has_extension (exts, exts_i, "GL_ARB_sync");
  GLEXT_GL_ARB_tessellation_shader
    = glext_gl_has_extension (exts, exts_i, "GL_ARB_tessellation_shader");
  GLEXT_GL_ARB_texture_barrier
    = glext_gl_has_extension (exts, exts_i, "GL_ARB_texture_barrier");
  GLEXT_GL_ARB_texture_border_clamp
    = glext_gl_has_extension (exts, exts_i, "GL_ARB_texture_border_clamp");
  GLEXT_GL_ARB_texture_buffer_object
    = glext_gl_has_extension (exts, exts_i, "GL_ARB_texture_buffer_object");
  GLEXT_GL_ARB_texture_buffer_object_rgb32 = glext_gl_has_extension (
    exts, exts_i, "GL_ARB_texture_buffer_object_rgb32");
  GLEXT_GL_ARB_texture_buffer_range
    = glext_gl_has_extension (exts, exts_i, "GL_ARB_texture_buffer_range");
  GLEXT_GL_ARB_texture_compression
    = glext_gl_has_extension (exts, exts_i, "GL_ARB_texture_compression");
  GLEXT_GL_ARB_texture_compression_bptc
    = glext_gl_has_extension (exts, exts_i, "GL_ARB_texture_compression_bptc");
  GLEXT_GL_ARB_texture_compression_rgtc
    = glext_gl_has_extension (exts, exts_i, "GL_ARB_texture_compression_rgtc");
  GLEXT_GL_ARB_texture_cube_map
    = glext_gl_has_extension (exts, exts_i, "GL_ARB_texture_cube_map");
  GLEXT_GL_ARB_texture_cube_map_array
    = glext_gl_has_extension (exts, exts_i, "GL_ARB_texture_cube_map_array");
  GLEXT_GL_ARB_texture_env_add
    = glext_gl_has_extension (exts, exts_i, "GL_ARB_texture_env_add");
  GLEXT_GL_ARB_texture_env_combine
    = glext_gl_has_extension (exts, exts_i, "GL_ARB_texture_env_combine");
  GLEXT_GL_ARB_texture_env_crossbar
    = glext_gl_has_extension (exts, exts_i, "GL_ARB_texture_env_crossbar");
  GLEXT_GL_ARB_texture_env_dot3
    = glext_gl_has_extension (exts, exts_i, "GL_ARB_texture_env_dot3");
  GLEXT_GL_ARB_texture_filter_anisotropic = glext_gl_has_extension (
    exts, exts_i, "GL_ARB_texture_filter_anisotropic");
  GLEXT_GL_ARB_texture_filter_minmax
    = glext_gl_has_extension (exts, exts_i, "GL_ARB_texture_filter_minmax");
  GLEXT_GL_ARB_texture_float
    = glext_gl_has_extension (exts, exts_i, "GL_ARB_texture_float");
  GLEXT_GL_ARB_texture_gather
    = glext_gl_has_extension (exts, exts_i, "GL_ARB_texture_gather");
  GLEXT_GL_ARB_texture_mirror_clamp_to_edge = glext_gl_has_extension (
    exts, exts_i, "GL_ARB_texture_mirror_clamp_to_edge");
  GLEXT_GL_ARB_texture_mirrored_repeat
    = glext_gl_has_extension (exts, exts_i, "GL_ARB_texture_mirrored_repeat");
  GLEXT_GL_ARB_texture_multisample
    = glext_gl_has_extension (exts, exts_i, "GL_ARB_texture_multisample");
  GLEXT_GL_ARB_texture_non_power_of_two
    = glext_gl_has_extension (exts, exts_i, "GL_ARB_texture_non_power_of_two");
  GLEXT_GL_ARB_texture_query_levels
    = glext_gl_has_extension (exts, exts_i, "GL_ARB_texture_query_levels");
  GLEXT_GL_ARB_texture_query_lod
    = glext_gl_has_extension (exts, exts_i, "GL_ARB_texture_query_lod");
  GLEXT_GL_ARB_texture_rectangle
    = glext_gl_has_extension (exts, exts_i, "GL_ARB_texture_rectangle");
  GLEXT_GL_ARB_texture_rg
    = glext_gl_has_extension (exts, exts_i, "GL_ARB_texture_rg");
  GLEXT_GL_ARB_texture_rgb10_a2ui
    = glext_gl_has_extension (exts, exts_i, "GL_ARB_texture_rgb10_a2ui");
  GLEXT_GL_ARB_texture_stencil8
    = glext_gl_has_extension (exts, exts_i, "GL_ARB_texture_stencil8");
  GLEXT_GL_ARB_texture_storage
    = glext_gl_has_extension (exts, exts_i, "GL_ARB_texture_storage");
  GLEXT_GL_ARB_texture_storage_multisample = glext_gl_has_extension (
    exts, exts_i, "GL_ARB_texture_storage_multisample");
  GLEXT_GL_ARB_texture_swizzle
    = glext_gl_has_extension (exts, exts_i, "GL_ARB_texture_swizzle");
  GLEXT_GL_ARB_texture_view
    = glext_gl_has_extension (exts, exts_i, "GL_ARB_texture_view");
  GLEXT_GL_ARB_timer_query
    = glext_gl_has_extension (exts, exts_i, "GL_ARB_timer_query");
  GLEXT_GL_ARB_transform_feedback2
    = glext_gl_has_extension (exts, exts_i, "GL_ARB_transform_feedback2");
  GLEXT_GL_ARB_transform_feedback3
    = glext_gl_has_extension (exts, exts_i, "GL_ARB_transform_feedback3");
  GLEXT_GL_ARB_transform_feedback_instanced = glext_gl_has_extension (
    exts, exts_i, "GL_ARB_transform_feedback_instanced");
  GLEXT_GL_ARB_transform_feedback_overflow_query = glext_gl_has_extension (
    exts, exts_i, "GL_ARB_transform_feedback_overflow_query");
  GLEXT_GL_ARB_transpose_matrix
    = glext_gl_has_extension (exts, exts_i, "GL_ARB_transpose_matrix");
  GLEXT_GL_ARB_uniform_buffer_object
    = glext_gl_has_extension (exts, exts_i, "GL_ARB_uniform_buffer_object");
  GLEXT_GL_ARB_vertex_array_bgra
    = glext_gl_has_extension (exts, exts_i, "GL_ARB_vertex_array_bgra");
  GLEXT_GL_ARB_vertex_array_object
    = glext_gl_has_extension (exts, exts_i, "GL_ARB_vertex_array_object");
  GLEXT_GL_ARB_vertex_attrib_64bit
    = glext_gl_has_extension (exts, exts_i, "GL_ARB_vertex_attrib_64bit");
  GLEXT_GL_ARB_vertex_attrib_binding
    = glext_gl_has_extension (exts, exts_i, "GL_ARB_vertex_attrib_binding");
  GLEXT_GL_ARB_vertex_blend
    = glext_gl_has_extension (exts, exts_i, "GL_ARB_vertex_blend");
  GLEXT_GL_ARB_vertex_buffer_object
    = glext_gl_has_extension (exts, exts_i, "GL_ARB_vertex_buffer_object");
  GLEXT_GL_ARB_vertex_program
    = glext_gl_has_extension (exts, exts_i, "GL_ARB_vertex_program");
  GLEXT_GL_ARB_vertex_shader
    = glext_gl_has_extension (exts, exts_i, "GL_ARB_vertex_shader");
  GLEXT_GL_ARB_vertex_type_10f_11f_11f_rev = glext_gl_has_extension (
    exts, exts_i, "GL_ARB_vertex_type_10f_11f_11f_rev");
  GLEXT_GL_ARB_vertex_type_2_10_10_10_rev = glext_gl_has_extension (
    exts, exts_i, "GL_ARB_vertex_type_2_10_10_10_rev");
  GLEXT_GL_ARB_viewport_array
    = glext_gl_has_extension (exts, exts_i, "GL_ARB_viewport_array");
  GLEXT_GL_ARB_window_pos
    = glext_gl_has_extension (exts, exts_i, "GL_ARB_window_pos");
  GLEXT_GL_ATI_draw_buffers
    = glext_gl_has_extension (exts, exts_i, "GL_ATI_draw_buffers");
  GLEXT_GL_ATI_element_array
    = glext_gl_has_extension (exts, exts_i, "GL_ATI_element_array");
  GLEXT_GL_ATI_envmap_bumpmap
    = glext_gl_has_extension (exts, exts_i, "GL_ATI_envmap_bumpmap");
  GLEXT_GL_ATI_fragment_shader
    = glext_gl_has_extension (exts, exts_i, "GL_ATI_fragment_shader");
  GLEXT_GL_ATI_map_object_buffer
    = glext_gl_has_extension (exts, exts_i, "GL_ATI_map_object_buffer");
  GLEXT_GL_ATI_meminfo
    = glext_gl_has_extension (exts, exts_i, "GL_ATI_meminfo");
  GLEXT_GL_ATI_pixel_format_float
    = glext_gl_has_extension (exts, exts_i, "GL_ATI_pixel_format_float");
  GLEXT_GL_ATI_pn_triangles
    = glext_gl_has_extension (exts, exts_i, "GL_ATI_pn_triangles");
  GLEXT_GL_ATI_separate_stencil
    = glext_gl_has_extension (exts, exts_i, "GL_ATI_separate_stencil");
  GLEXT_GL_ATI_text_fragment_shader
    = glext_gl_has_extension (exts, exts_i, "GL_ATI_text_fragment_shader");
  GLEXT_GL_ATI_texture_env_combine3
    = glext_gl_has_extension (exts, exts_i, "GL_ATI_texture_env_combine3");
  GLEXT_GL_ATI_texture_float
    = glext_gl_has_extension (exts, exts_i, "GL_ATI_texture_float");
  GLEXT_GL_ATI_texture_mirror_once
    = glext_gl_has_extension (exts, exts_i, "GL_ATI_texture_mirror_once");
  GLEXT_GL_ATI_vertex_array_object
    = glext_gl_has_extension (exts, exts_i, "GL_ATI_vertex_array_object");
  GLEXT_GL_ATI_vertex_attrib_array_object = glext_gl_has_extension (
    exts, exts_i, "GL_ATI_vertex_attrib_array_object");
  GLEXT_GL_ATI_vertex_streams
    = glext_gl_has_extension (exts, exts_i, "GL_ATI_vertex_streams");
  GLEXT_GL_EXT_422_pixels
    = glext_gl_has_extension (exts, exts_i, "GL_EXT_422_pixels");
  GLEXT_GL_EXT_EGL_image_storage
    = glext_gl_has_extension (exts, exts_i, "GL_EXT_EGL_image_storage");
  GLEXT_GL_EXT_EGL_sync
    = glext_gl_has_extension (exts, exts_i, "GL_EXT_EGL_sync");
  GLEXT_GL_EXT_abgr = glext_gl_has_extension (exts, exts_i, "GL_EXT_abgr");
  GLEXT_GL_EXT_bgra = glext_gl_has_extension (exts, exts_i, "GL_EXT_bgra");
  GLEXT_GL_EXT_bindable_uniform
    = glext_gl_has_extension (exts, exts_i, "GL_EXT_bindable_uniform");
  GLEXT_GL_EXT_blend_color
    = glext_gl_has_extension (exts, exts_i, "GL_EXT_blend_color");
  GLEXT_GL_EXT_blend_equation_separate
    = glext_gl_has_extension (exts, exts_i, "GL_EXT_blend_equation_separate");
  GLEXT_GL_EXT_blend_func_separate
    = glext_gl_has_extension (exts, exts_i, "GL_EXT_blend_func_separate");
  GLEXT_GL_EXT_blend_logic_op
    = glext_gl_has_extension (exts, exts_i, "GL_EXT_blend_logic_op");
  GLEXT_GL_EXT_blend_minmax
    = glext_gl_has_extension (exts, exts_i, "GL_EXT_blend_minmax");
  GLEXT_GL_EXT_blend_subtract
    = glext_gl_has_extension (exts, exts_i, "GL_EXT_blend_subtract");
  GLEXT_GL_EXT_clip_volume_hint
    = glext_gl_has_extension (exts, exts_i, "GL_EXT_clip_volume_hint");
  GLEXT_GL_EXT_cmyka = glext_gl_has_extension (exts, exts_i, "GL_EXT_cmyka");
  GLEXT_GL_EXT_color_subtable
    = glext_gl_has_extension (exts, exts_i, "GL_EXT_color_subtable");
  GLEXT_GL_EXT_compiled_vertex_array
    = glext_gl_has_extension (exts, exts_i, "GL_EXT_compiled_vertex_array");
  GLEXT_GL_EXT_convolution
    = glext_gl_has_extension (exts, exts_i, "GL_EXT_convolution");
  GLEXT_GL_EXT_coordinate_frame
    = glext_gl_has_extension (exts, exts_i, "GL_EXT_coordinate_frame");
  GLEXT_GL_EXT_copy_texture
    = glext_gl_has_extension (exts, exts_i, "GL_EXT_copy_texture");
  GLEXT_GL_EXT_cull_vertex
    = glext_gl_has_extension (exts, exts_i, "GL_EXT_cull_vertex");
  GLEXT_GL_EXT_debug_label
    = glext_gl_has_extension (exts, exts_i, "GL_EXT_debug_label");
  GLEXT_GL_EXT_debug_marker
    = glext_gl_has_extension (exts, exts_i, "GL_EXT_debug_marker");
  GLEXT_GL_EXT_depth_bounds_test
    = glext_gl_has_extension (exts, exts_i, "GL_EXT_depth_bounds_test");
  GLEXT_GL_EXT_direct_state_access
    = glext_gl_has_extension (exts, exts_i, "GL_EXT_direct_state_access");
  GLEXT_GL_EXT_draw_buffers2
    = glext_gl_has_extension (exts, exts_i, "GL_EXT_draw_buffers2");
  GLEXT_GL_EXT_draw_instanced
    = glext_gl_has_extension (exts, exts_i, "GL_EXT_draw_instanced");
  GLEXT_GL_EXT_draw_range_elements
    = glext_gl_has_extension (exts, exts_i, "GL_EXT_draw_range_elements");
  GLEXT_GL_EXT_external_buffer
    = glext_gl_has_extension (exts, exts_i, "GL_EXT_external_buffer");
  GLEXT_GL_EXT_fog_coord
    = glext_gl_has_extension (exts, exts_i, "GL_EXT_fog_coord");
  GLEXT_GL_EXT_fragment_shading_rate
    = glext_gl_has_extension (exts, exts_i, "GL_EXT_fragment_shading_rate");
  GLEXT_GL_EXT_framebuffer_blit
    = glext_gl_has_extension (exts, exts_i, "GL_EXT_framebuffer_blit");
  GLEXT_GL_EXT_framebuffer_blit_layers
    = glext_gl_has_extension (exts, exts_i, "GL_EXT_framebuffer_blit_layers");
  GLEXT_GL_EXT_framebuffer_multisample
    = glext_gl_has_extension (exts, exts_i, "GL_EXT_framebuffer_multisample");
  GLEXT_GL_EXT_framebuffer_multisample_blit_scaled = glext_gl_has_extension (
    exts, exts_i, "GL_EXT_framebuffer_multisample_blit_scaled");
  GLEXT_GL_EXT_framebuffer_object
    = glext_gl_has_extension (exts, exts_i, "GL_EXT_framebuffer_object");
  GLEXT_GL_EXT_framebuffer_sRGB
    = glext_gl_has_extension (exts, exts_i, "GL_EXT_framebuffer_sRGB");
  GLEXT_GL_EXT_geometry_shader4
    = glext_gl_has_extension (exts, exts_i, "GL_EXT_geometry_shader4");
  GLEXT_GL_EXT_gpu_program_parameters
    = glext_gl_has_extension (exts, exts_i, "GL_EXT_gpu_program_parameters");
  GLEXT_GL_EXT_gpu_shader4
    = glext_gl_has_extension (exts, exts_i, "GL_EXT_gpu_shader4");
  GLEXT_GL_EXT_histogram
    = glext_gl_has_extension (exts, exts_i, "GL_EXT_histogram");
  GLEXT_GL_EXT_index_array_formats
    = glext_gl_has_extension (exts, exts_i, "GL_EXT_index_array_formats");
  GLEXT_GL_EXT_index_func
    = glext_gl_has_extension (exts, exts_i, "GL_EXT_index_func");
  GLEXT_GL_EXT_index_material
    = glext_gl_has_extension (exts, exts_i, "GL_EXT_index_material");
  GLEXT_GL_EXT_index_texture
    = glext_gl_has_extension (exts, exts_i, "GL_EXT_index_texture");
  GLEXT_GL_EXT_light_texture
    = glext_gl_has_extension (exts, exts_i, "GL_EXT_light_texture");
  GLEXT_GL_EXT_memory_object
    = glext_gl_has_extension (exts, exts_i, "GL_EXT_memory_object");
  GLEXT_GL_EXT_memory_object_fd
    = glext_gl_has_extension (exts, exts_i, "GL_EXT_memory_object_fd");
  GLEXT_GL_EXT_memory_object_win32
    = glext_gl_has_extension (exts, exts_i, "GL_EXT_memory_object_win32");
  GLEXT_GL_EXT_mesh_shader
    = glext_gl_has_extension (exts, exts_i, "GL_EXT_mesh_shader");
  GLEXT_GL_EXT_misc_attribute
    = glext_gl_has_extension (exts, exts_i, "GL_EXT_misc_attribute");
  GLEXT_GL_EXT_multi_draw_arrays
    = glext_gl_has_extension (exts, exts_i, "GL_EXT_multi_draw_arrays");
  GLEXT_GL_EXT_multisample
    = glext_gl_has_extension (exts, exts_i, "GL_EXT_multisample");
  GLEXT_GL_EXT_multiview_tessellation_geometry_shader
    = glext_gl_has_extension (exts, exts_i,
                              "GL_EXT_multiview_tessellation_geometry_shader");
  GLEXT_GL_EXT_multiview_texture_multisample = glext_gl_has_extension (
    exts, exts_i, "GL_EXT_multiview_texture_multisample");
  GLEXT_GL_EXT_multiview_timer_query
    = glext_gl_has_extension (exts, exts_i, "GL_EXT_multiview_timer_query");
  GLEXT_GL_EXT_packed_depth_stencil
    = glext_gl_has_extension (exts, exts_i, "GL_EXT_packed_depth_stencil");
  GLEXT_GL_EXT_packed_float
    = glext_gl_has_extension (exts, exts_i, "GL_EXT_packed_float");
  GLEXT_GL_EXT_packed_pixels
    = glext_gl_has_extension (exts, exts_i, "GL_EXT_packed_pixels");
  GLEXT_GL_EXT_paletted_texture
    = glext_gl_has_extension (exts, exts_i, "GL_EXT_paletted_texture");
  GLEXT_GL_EXT_pixel_buffer_object
    = glext_gl_has_extension (exts, exts_i, "GL_EXT_pixel_buffer_object");
  GLEXT_GL_EXT_pixel_transform
    = glext_gl_has_extension (exts, exts_i, "GL_EXT_pixel_transform");
  GLEXT_GL_EXT_pixel_transform_color_table = glext_gl_has_extension (
    exts, exts_i, "GL_EXT_pixel_transform_color_table");
  GLEXT_GL_EXT_point_parameters
    = glext_gl_has_extension (exts, exts_i, "GL_EXT_point_parameters");
  GLEXT_GL_EXT_polygon_offset
    = glext_gl_has_extension (exts, exts_i, "GL_EXT_polygon_offset");
  GLEXT_GL_EXT_polygon_offset_clamp
    = glext_gl_has_extension (exts, exts_i, "GL_EXT_polygon_offset_clamp");
  GLEXT_GL_EXT_post_depth_coverage
    = glext_gl_has_extension (exts, exts_i, "GL_EXT_post_depth_coverage");
  GLEXT_GL_EXT_provoking_vertex
    = glext_gl_has_extension (exts, exts_i, "GL_EXT_provoking_vertex");
  GLEXT_GL_EXT_raster_multisample
    = glext_gl_has_extension (exts, exts_i, "GL_EXT_raster_multisample");
  GLEXT_GL_EXT_rescale_normal
    = glext_gl_has_extension (exts, exts_i, "GL_EXT_rescale_normal");
  GLEXT_GL_EXT_secondary_color
    = glext_gl_has_extension (exts, exts_i, "GL_EXT_secondary_color");
  GLEXT_GL_EXT_semaphore
    = glext_gl_has_extension (exts, exts_i, "GL_EXT_semaphore");
  GLEXT_GL_EXT_semaphore_fd
    = glext_gl_has_extension (exts, exts_i, "GL_EXT_semaphore_fd");
  GLEXT_GL_EXT_semaphore_win32
    = glext_gl_has_extension (exts, exts_i, "GL_EXT_semaphore_win32");
  GLEXT_GL_EXT_separate_shader_objects
    = glext_gl_has_extension (exts, exts_i, "GL_EXT_separate_shader_objects");
  GLEXT_GL_EXT_separate_specular_color
    = glext_gl_has_extension (exts, exts_i, "GL_EXT_separate_specular_color");
  GLEXT_GL_EXT_shader_framebuffer_fetch
    = glext_gl_has_extension (exts, exts_i, "GL_EXT_shader_framebuffer_fetch");
  GLEXT_GL_EXT_shader_framebuffer_fetch_non_coherent = glext_gl_has_extension (
    exts, exts_i, "GL_EXT_shader_framebuffer_fetch_non_coherent");
  GLEXT_GL_EXT_shader_image_load_formatted = glext_gl_has_extension (
    exts, exts_i, "GL_EXT_shader_image_load_formatted");
  GLEXT_GL_EXT_shader_image_load_store
    = glext_gl_has_extension (exts, exts_i, "GL_EXT_shader_image_load_store");
  GLEXT_GL_EXT_shader_integer_mix
    = glext_gl_has_extension (exts, exts_i, "GL_EXT_shader_integer_mix");
  GLEXT_GL_EXT_shader_samples_identical
    = glext_gl_has_extension (exts, exts_i, "GL_EXT_shader_samples_identical");
  GLEXT_GL_EXT_shadow_funcs
    = glext_gl_has_extension (exts, exts_i, "GL_EXT_shadow_funcs");
  GLEXT_GL_EXT_shared_texture_palette
    = glext_gl_has_extension (exts, exts_i, "GL_EXT_shared_texture_palette");
  GLEXT_GL_EXT_sparse_texture2
    = glext_gl_has_extension (exts, exts_i, "GL_EXT_sparse_texture2");
  GLEXT_GL_EXT_stencil_clear_tag
    = glext_gl_has_extension (exts, exts_i, "GL_EXT_stencil_clear_tag");
  GLEXT_GL_EXT_stencil_two_side
    = glext_gl_has_extension (exts, exts_i, "GL_EXT_stencil_two_side");
  GLEXT_GL_EXT_stencil_wrap
    = glext_gl_has_extension (exts, exts_i, "GL_EXT_stencil_wrap");
  GLEXT_GL_EXT_subtexture
    = glext_gl_has_extension (exts, exts_i, "GL_EXT_subtexture");
  GLEXT_GL_EXT_texture
    = glext_gl_has_extension (exts, exts_i, "GL_EXT_texture");
  GLEXT_GL_EXT_texture3D
    = glext_gl_has_extension (exts, exts_i, "GL_EXT_texture3D");
  GLEXT_GL_EXT_texture_array
    = glext_gl_has_extension (exts, exts_i, "GL_EXT_texture_array");
  GLEXT_GL_EXT_texture_buffer_object
    = glext_gl_has_extension (exts, exts_i, "GL_EXT_texture_buffer_object");
  GLEXT_GL_EXT_texture_compression_latc
    = glext_gl_has_extension (exts, exts_i, "GL_EXT_texture_compression_latc");
  GLEXT_GL_EXT_texture_compression_rgtc
    = glext_gl_has_extension (exts, exts_i, "GL_EXT_texture_compression_rgtc");
  GLEXT_GL_EXT_texture_compression_s3tc
    = glext_gl_has_extension (exts, exts_i, "GL_EXT_texture_compression_s3tc");
  GLEXT_GL_EXT_texture_cube_map
    = glext_gl_has_extension (exts, exts_i, "GL_EXT_texture_cube_map");
  GLEXT_GL_EXT_texture_env_add
    = glext_gl_has_extension (exts, exts_i, "GL_EXT_texture_env_add");
  GLEXT_GL_EXT_texture_env_combine
    = glext_gl_has_extension (exts, exts_i, "GL_EXT_texture_env_combine");
  GLEXT_GL_EXT_texture_env_dot3
    = glext_gl_has_extension (exts, exts_i, "GL_EXT_texture_env_dot3");
  GLEXT_GL_EXT_texture_filter_anisotropic = glext_gl_has_extension (
    exts, exts_i, "GL_EXT_texture_filter_anisotropic");
  GLEXT_GL_EXT_texture_filter_minmax
    = glext_gl_has_extension (exts, exts_i, "GL_EXT_texture_filter_minmax");
  GLEXT_GL_EXT_texture_integer
    = glext_gl_has_extension (exts, exts_i, "GL_EXT_texture_integer");
  GLEXT_GL_EXT_texture_lod_bias
    = glext_gl_has_extension (exts, exts_i, "GL_EXT_texture_lod_bias");
  GLEXT_GL_EXT_texture_mirror_clamp
    = glext_gl_has_extension (exts, exts_i, "GL_EXT_texture_mirror_clamp");
  GLEXT_GL_EXT_texture_object
    = glext_gl_has_extension (exts, exts_i, "GL_EXT_texture_object");
  GLEXT_GL_EXT_texture_perturb_normal
    = glext_gl_has_extension (exts, exts_i, "GL_EXT_texture_perturb_normal");
  GLEXT_GL_EXT_texture_sRGB
    = glext_gl_has_extension (exts, exts_i, "GL_EXT_texture_sRGB");
  GLEXT_GL_EXT_texture_sRGB_R8
    = glext_gl_has_extension (exts, exts_i, "GL_EXT_texture_sRGB_R8");
  GLEXT_GL_EXT_texture_sRGB_RG8
    = glext_gl_has_extension (exts, exts_i, "GL_EXT_texture_sRGB_RG8");
  GLEXT_GL_EXT_texture_sRGB_decode
    = glext_gl_has_extension (exts, exts_i, "GL_EXT_texture_sRGB_decode");
  GLEXT_GL_EXT_texture_shadow_lod
    = glext_gl_has_extension (exts, exts_i, "GL_EXT_texture_shadow_lod");
  GLEXT_GL_EXT_texture_shared_exponent
    = glext_gl_has_extension (exts, exts_i, "GL_EXT_texture_shared_exponent");
  GLEXT_GL_EXT_texture_snorm
    = glext_gl_has_extension (exts, exts_i, "GL_EXT_texture_snorm");
  GLEXT_GL_EXT_texture_storage
    = glext_gl_has_extension (exts, exts_i, "GL_EXT_texture_storage");
  GLEXT_GL_EXT_texture_swizzle
    = glext_gl_has_extension (exts, exts_i, "GL_EXT_texture_swizzle");
  GLEXT_GL_EXT_timer_query
    = glext_gl_has_extension (exts, exts_i, "GL_EXT_timer_query");
  GLEXT_GL_EXT_transform_feedback
    = glext_gl_has_extension (exts, exts_i, "GL_EXT_transform_feedback");
  GLEXT_GL_EXT_vertex_array
    = glext_gl_has_extension (exts, exts_i, "GL_EXT_vertex_array");
  GLEXT_GL_EXT_vertex_array_bgra
    = glext_gl_has_extension (exts, exts_i, "GL_EXT_vertex_array_bgra");
  GLEXT_GL_EXT_vertex_attrib_64bit
    = glext_gl_has_extension (exts, exts_i, "GL_EXT_vertex_attrib_64bit");
  GLEXT_GL_EXT_vertex_shader
    = glext_gl_has_extension (exts, exts_i, "GL_EXT_vertex_shader");
  GLEXT_GL_EXT_vertex_weighting
    = glext_gl_has_extension (exts, exts_i, "GL_EXT_vertex_weighting");
  GLEXT_GL_EXT_win32_keyed_mutex
    = glext_gl_has_extension (exts, exts_i, "GL_EXT_win32_keyed_mutex");
  GLEXT_GL_EXT_window_rectangles
    = glext_gl_has_extension (exts, exts_i, "GL_EXT_window_rectangles");
  GLEXT_GL_EXT_x11_sync_object
    = glext_gl_has_extension (exts, exts_i, "GL_EXT_x11_sync_object");
  GLEXT_GL_GREMEDY_frame_terminator
    = glext_gl_has_extension (exts, exts_i, "GL_GREMEDY_frame_terminator");
  GLEXT_GL_GREMEDY_string_marker
    = glext_gl_has_extension (exts, exts_i, "GL_GREMEDY_string_marker");
  GLEXT_GL_HP_convolution_border_modes
    = glext_gl_has_extension (exts, exts_i, "GL_HP_convolution_border_modes");
  GLEXT_GL_HP_image_transform
    = glext_gl_has_extension (exts, exts_i, "GL_HP_image_transform");
  GLEXT_GL_HP_occlusion_test
    = glext_gl_has_extension (exts, exts_i, "GL_HP_occlusion_test");
  GLEXT_GL_HP_texture_lighting
    = glext_gl_has_extension (exts, exts_i, "GL_HP_texture_lighting");
  GLEXT_GL_IBM_cull_vertex
    = glext_gl_has_extension (exts, exts_i, "GL_IBM_cull_vertex");
  GLEXT_GL_IBM_multimode_draw_arrays
    = glext_gl_has_extension (exts, exts_i, "GL_IBM_multimode_draw_arrays");
  GLEXT_GL_IBM_rasterpos_clip
    = glext_gl_has_extension (exts, exts_i, "GL_IBM_rasterpos_clip");
  GLEXT_GL_IBM_static_data
    = glext_gl_has_extension (exts, exts_i, "GL_IBM_static_data");
  GLEXT_GL_IBM_texture_mirrored_repeat
    = glext_gl_has_extension (exts, exts_i, "GL_IBM_texture_mirrored_repeat");
  GLEXT_GL_IBM_vertex_array_lists
    = glext_gl_has_extension (exts, exts_i, "GL_IBM_vertex_array_lists");
  GLEXT_GL_INGR_blend_func_separate
    = glext_gl_has_extension (exts, exts_i, "GL_INGR_blend_func_separate");
  GLEXT_GL_INGR_color_clamp
    = glext_gl_has_extension (exts, exts_i, "GL_INGR_color_clamp");
  GLEXT_GL_INGR_interlace_read
    = glext_gl_has_extension (exts, exts_i, "GL_INGR_interlace_read");
  GLEXT_GL_INTEL_blackhole_render
    = glext_gl_has_extension (exts, exts_i, "GL_INTEL_blackhole_render");
  GLEXT_GL_INTEL_conservative_rasterization = glext_gl_has_extension (
    exts, exts_i, "GL_INTEL_conservative_rasterization");
  GLEXT_GL_INTEL_fragment_shader_ordering = glext_gl_has_extension (
    exts, exts_i, "GL_INTEL_fragment_shader_ordering");
  GLEXT_GL_INTEL_framebuffer_CMAA
    = glext_gl_has_extension (exts, exts_i, "GL_INTEL_framebuffer_CMAA");
  GLEXT_GL_INTEL_map_texture
    = glext_gl_has_extension (exts, exts_i, "GL_INTEL_map_texture");
  GLEXT_GL_INTEL_parallel_arrays
    = glext_gl_has_extension (exts, exts_i, "GL_INTEL_parallel_arrays");
  GLEXT_GL_INTEL_performance_query
    = glext_gl_has_extension (exts, exts_i, "GL_INTEL_performance_query");
  GLEXT_GL_KHR_blend_equation_advanced
    = glext_gl_has_extension (exts, exts_i, "GL_KHR_blend_equation_advanced");
  GLEXT_GL_KHR_blend_equation_advanced_coherent = glext_gl_has_extension (
    exts, exts_i, "GL_KHR_blend_equation_advanced_coherent");
  GLEXT_GL_KHR_context_flush_control
    = glext_gl_has_extension (exts, exts_i, "GL_KHR_context_flush_control");
  GLEXT_GL_KHR_debug = glext_gl_has_extension (exts, exts_i, "GL_KHR_debug");
  GLEXT_GL_KHR_no_error
    = glext_gl_has_extension (exts, exts_i, "GL_KHR_no_error");
  GLEXT_GL_KHR_parallel_shader_compile
    = glext_gl_has_extension (exts, exts_i, "GL_KHR_parallel_shader_compile");
  GLEXT_GL_KHR_robust_buffer_access_behavior = glext_gl_has_extension (
    exts, exts_i, "GL_KHR_robust_buffer_access_behavior");
  GLEXT_GL_KHR_robustness
    = glext_gl_has_extension (exts, exts_i, "GL_KHR_robustness");
  GLEXT_GL_KHR_shader_subgroup
    = glext_gl_has_extension (exts, exts_i, "GL_KHR_shader_subgroup");
  GLEXT_GL_KHR_texture_compression_astc_hdr = glext_gl_has_extension (
    exts, exts_i, "GL_KHR_texture_compression_astc_hdr");
  GLEXT_GL_KHR_texture_compression_astc_ldr = glext_gl_has_extension (
    exts, exts_i, "GL_KHR_texture_compression_astc_ldr");
  GLEXT_GL_KHR_texture_compression_astc_sliced_3d = glext_gl_has_extension (
    exts, exts_i, "GL_KHR_texture_compression_astc_sliced_3d");
  GLEXT_GL_MESAX_texture_stack
    = glext_gl_has_extension (exts, exts_i, "GL_MESAX_texture_stack");
  GLEXT_GL_MESA_framebuffer_flip_x
    = glext_gl_has_extension (exts, exts_i, "GL_MESA_framebuffer_flip_x");
  GLEXT_GL_MESA_framebuffer_flip_y
    = glext_gl_has_extension (exts, exts_i, "GL_MESA_framebuffer_flip_y");
  GLEXT_GL_MESA_framebuffer_swap_xy
    = glext_gl_has_extension (exts, exts_i, "GL_MESA_framebuffer_swap_xy");
  GLEXT_GL_MESA_pack_invert
    = glext_gl_has_extension (exts, exts_i, "GL_MESA_pack_invert");
  GLEXT_GL_MESA_program_binary_formats
    = glext_gl_has_extension (exts, exts_i, "GL_MESA_program_binary_formats");
  GLEXT_GL_MESA_resize_buffers
    = glext_gl_has_extension (exts, exts_i, "GL_MESA_resize_buffers");
  GLEXT_GL_MESA_shader_integer_functions = glext_gl_has_extension (
    exts, exts_i, "GL_MESA_shader_integer_functions");
  GLEXT_GL_MESA_texture_const_bandwidth
    = glext_gl_has_extension (exts, exts_i, "GL_MESA_texture_const_bandwidth");
  GLEXT_GL_MESA_tile_raster_order
    = glext_gl_has_extension (exts, exts_i, "GL_MESA_tile_raster_order");
  GLEXT_GL_MESA_window_pos
    = glext_gl_has_extension (exts, exts_i, "GL_MESA_window_pos");
  GLEXT_GL_MESA_ycbcr_texture
    = glext_gl_has_extension (exts, exts_i, "GL_MESA_ycbcr_texture");
  GLEXT_GL_NVX_blend_equation_advanced_multi_draw_buffers
    = glext_gl_has_extension (
      exts, exts_i, "GL_NVX_blend_equation_advanced_multi_draw_buffers");
  GLEXT_GL_NVX_conditional_render
    = glext_gl_has_extension (exts, exts_i, "GL_NVX_conditional_render");
  GLEXT_GL_NVX_gpu_memory_info
    = glext_gl_has_extension (exts, exts_i, "GL_NVX_gpu_memory_info");
  GLEXT_GL_NVX_gpu_multicast2
    = glext_gl_has_extension (exts, exts_i, "GL_NVX_gpu_multicast2");
  GLEXT_GL_NVX_linked_gpu_multicast
    = glext_gl_has_extension (exts, exts_i, "GL_NVX_linked_gpu_multicast");
  GLEXT_GL_NVX_progress_fence
    = glext_gl_has_extension (exts, exts_i, "GL_NVX_progress_fence");
  GLEXT_GL_NV_alpha_to_coverage_dither_control = glext_gl_has_extension (
    exts, exts_i, "GL_NV_alpha_to_coverage_dither_control");
  GLEXT_GL_NV_bindless_multi_draw_indirect = glext_gl_has_extension (
    exts, exts_i, "GL_NV_bindless_multi_draw_indirect");
  GLEXT_GL_NV_bindless_multi_draw_indirect_count = glext_gl_has_extension (
    exts, exts_i, "GL_NV_bindless_multi_draw_indirect_count");
  GLEXT_GL_NV_bindless_texture
    = glext_gl_has_extension (exts, exts_i, "GL_NV_bindless_texture");
  GLEXT_GL_NV_blend_equation_advanced
    = glext_gl_has_extension (exts, exts_i, "GL_NV_blend_equation_advanced");
  GLEXT_GL_NV_blend_equation_advanced_coherent = glext_gl_has_extension (
    exts, exts_i, "GL_NV_blend_equation_advanced_coherent");
  GLEXT_GL_NV_blend_minmax_factor
    = glext_gl_has_extension (exts, exts_i, "GL_NV_blend_minmax_factor");
  GLEXT_GL_NV_blend_square
    = glext_gl_has_extension (exts, exts_i, "GL_NV_blend_square");
  GLEXT_GL_NV_clip_space_w_scaling
    = glext_gl_has_extension (exts, exts_i, "GL_NV_clip_space_w_scaling");
  GLEXT_GL_NV_command_list
    = glext_gl_has_extension (exts, exts_i, "GL_NV_command_list");
  GLEXT_GL_NV_compute_program5
    = glext_gl_has_extension (exts, exts_i, "GL_NV_compute_program5");
  GLEXT_GL_NV_compute_shader_derivatives = glext_gl_has_extension (
    exts, exts_i, "GL_NV_compute_shader_derivatives");
  GLEXT_GL_NV_conditional_render
    = glext_gl_has_extension (exts, exts_i, "GL_NV_conditional_render");
  GLEXT_GL_NV_conservative_raster
    = glext_gl_has_extension (exts, exts_i, "GL_NV_conservative_raster");
  GLEXT_GL_NV_conservative_raster_dilate = glext_gl_has_extension (
    exts, exts_i, "GL_NV_conservative_raster_dilate");
  GLEXT_GL_NV_conservative_raster_pre_snap = glext_gl_has_extension (
    exts, exts_i, "GL_NV_conservative_raster_pre_snap");
  GLEXT_GL_NV_conservative_raster_pre_snap_triangles = glext_gl_has_extension (
    exts, exts_i, "GL_NV_conservative_raster_pre_snap_triangles");
  GLEXT_GL_NV_conservative_raster_underestimation = glext_gl_has_extension (
    exts, exts_i, "GL_NV_conservative_raster_underestimation");
  GLEXT_GL_NV_copy_depth_to_color
    = glext_gl_has_extension (exts, exts_i, "GL_NV_copy_depth_to_color");
  GLEXT_GL_NV_copy_image
    = glext_gl_has_extension (exts, exts_i, "GL_NV_copy_image");
  GLEXT_GL_NV_deep_texture3D
    = glext_gl_has_extension (exts, exts_i, "GL_NV_deep_texture3D");
  GLEXT_GL_NV_depth_buffer_float
    = glext_gl_has_extension (exts, exts_i, "GL_NV_depth_buffer_float");
  GLEXT_GL_NV_depth_clamp
    = glext_gl_has_extension (exts, exts_i, "GL_NV_depth_clamp");
  GLEXT_GL_NV_draw_texture
    = glext_gl_has_extension (exts, exts_i, "GL_NV_draw_texture");
  GLEXT_GL_NV_draw_vulkan_image
    = glext_gl_has_extension (exts, exts_i, "GL_NV_draw_vulkan_image");
  GLEXT_GL_NV_evaluators
    = glext_gl_has_extension (exts, exts_i, "GL_NV_evaluators");
  GLEXT_GL_NV_explicit_multisample
    = glext_gl_has_extension (exts, exts_i, "GL_NV_explicit_multisample");
  GLEXT_GL_NV_fence = glext_gl_has_extension (exts, exts_i, "GL_NV_fence");
  GLEXT_GL_NV_fill_rectangle
    = glext_gl_has_extension (exts, exts_i, "GL_NV_fill_rectangle");
  GLEXT_GL_NV_float_buffer
    = glext_gl_has_extension (exts, exts_i, "GL_NV_float_buffer");
  GLEXT_GL_NV_fog_distance
    = glext_gl_has_extension (exts, exts_i, "GL_NV_fog_distance");
  GLEXT_GL_NV_fragment_coverage_to_color = glext_gl_has_extension (
    exts, exts_i, "GL_NV_fragment_coverage_to_color");
  GLEXT_GL_NV_fragment_program
    = glext_gl_has_extension (exts, exts_i, "GL_NV_fragment_program");
  GLEXT_GL_NV_fragment_program2
    = glext_gl_has_extension (exts, exts_i, "GL_NV_fragment_program2");
  GLEXT_GL_NV_fragment_program4
    = glext_gl_has_extension (exts, exts_i, "GL_NV_fragment_program4");
  GLEXT_GL_NV_fragment_program_option
    = glext_gl_has_extension (exts, exts_i, "GL_NV_fragment_program_option");
  GLEXT_GL_NV_fragment_shader_barycentric = glext_gl_has_extension (
    exts, exts_i, "GL_NV_fragment_shader_barycentric");
  GLEXT_GL_NV_fragment_shader_interlock
    = glext_gl_has_extension (exts, exts_i, "GL_NV_fragment_shader_interlock");
  GLEXT_GL_NV_framebuffer_mixed_samples
    = glext_gl_has_extension (exts, exts_i, "GL_NV_framebuffer_mixed_samples");
  GLEXT_GL_NV_framebuffer_multisample_coverage = glext_gl_has_extension (
    exts, exts_i, "GL_NV_framebuffer_multisample_coverage");
  GLEXT_GL_NV_geometry_program4
    = glext_gl_has_extension (exts, exts_i, "GL_NV_geometry_program4");
  GLEXT_GL_NV_geometry_shader4
    = glext_gl_has_extension (exts, exts_i, "GL_NV_geometry_shader4");
  GLEXT_GL_NV_geometry_shader_passthrough = glext_gl_has_extension (
    exts, exts_i, "GL_NV_geometry_shader_passthrough");
  GLEXT_GL_NV_gpu_multicast
    = glext_gl_has_extension (exts, exts_i, "GL_NV_gpu_multicast");
  GLEXT_GL_NV_gpu_program4
    = glext_gl_has_extension (exts, exts_i, "GL_NV_gpu_program4");
  GLEXT_GL_NV_gpu_program5
    = glext_gl_has_extension (exts, exts_i, "GL_NV_gpu_program5");
  GLEXT_GL_NV_gpu_program5_mem_extended
    = glext_gl_has_extension (exts, exts_i, "GL_NV_gpu_program5_mem_extended");
  GLEXT_GL_NV_gpu_shader5
    = glext_gl_has_extension (exts, exts_i, "GL_NV_gpu_shader5");
  GLEXT_GL_NV_half_float
    = glext_gl_has_extension (exts, exts_i, "GL_NV_half_float");
  GLEXT_GL_NV_internalformat_sample_query = glext_gl_has_extension (
    exts, exts_i, "GL_NV_internalformat_sample_query");
  GLEXT_GL_NV_light_max_exponent
    = glext_gl_has_extension (exts, exts_i, "GL_NV_light_max_exponent");
  GLEXT_GL_NV_memory_attachment
    = glext_gl_has_extension (exts, exts_i, "GL_NV_memory_attachment");
  GLEXT_GL_NV_memory_object_sparse
    = glext_gl_has_extension (exts, exts_i, "GL_NV_memory_object_sparse");
  GLEXT_GL_NV_mesh_shader
    = glext_gl_has_extension (exts, exts_i, "GL_NV_mesh_shader");
  GLEXT_GL_NV_multisample_coverage
    = glext_gl_has_extension (exts, exts_i, "GL_NV_multisample_coverage");
  GLEXT_GL_NV_multisample_filter_hint
    = glext_gl_has_extension (exts, exts_i, "GL_NV_multisample_filter_hint");
  GLEXT_GL_NV_occlusion_query
    = glext_gl_has_extension (exts, exts_i, "GL_NV_occlusion_query");
  GLEXT_GL_NV_packed_depth_stencil
    = glext_gl_has_extension (exts, exts_i, "GL_NV_packed_depth_stencil");
  GLEXT_GL_NV_parameter_buffer_object
    = glext_gl_has_extension (exts, exts_i, "GL_NV_parameter_buffer_object");
  GLEXT_GL_NV_parameter_buffer_object2
    = glext_gl_has_extension (exts, exts_i, "GL_NV_parameter_buffer_object2");
  GLEXT_GL_NV_path_rendering
    = glext_gl_has_extension (exts, exts_i, "GL_NV_path_rendering");
  GLEXT_GL_NV_path_rendering_shared_edge = glext_gl_has_extension (
    exts, exts_i, "GL_NV_path_rendering_shared_edge");
  GLEXT_GL_NV_pixel_data_range
    = glext_gl_has_extension (exts, exts_i, "GL_NV_pixel_data_range");
  GLEXT_GL_NV_point_sprite
    = glext_gl_has_extension (exts, exts_i, "GL_NV_point_sprite");
  GLEXT_GL_NV_present_video
    = glext_gl_has_extension (exts, exts_i, "GL_NV_present_video");
  GLEXT_GL_NV_primitive_restart
    = glext_gl_has_extension (exts, exts_i, "GL_NV_primitive_restart");
  GLEXT_GL_NV_primitive_shading_rate
    = glext_gl_has_extension (exts, exts_i, "GL_NV_primitive_shading_rate");
  GLEXT_GL_NV_query_resource
    = glext_gl_has_extension (exts, exts_i, "GL_NV_query_resource");
  GLEXT_GL_NV_query_resource_tag
    = glext_gl_has_extension (exts, exts_i, "GL_NV_query_resource_tag");
  GLEXT_GL_NV_register_combiners
    = glext_gl_has_extension (exts, exts_i, "GL_NV_register_combiners");
  GLEXT_GL_NV_register_combiners2
    = glext_gl_has_extension (exts, exts_i, "GL_NV_register_combiners2");
  GLEXT_GL_NV_representative_fragment_test = glext_gl_has_extension (
    exts, exts_i, "GL_NV_representative_fragment_test");
  GLEXT_GL_NV_robustness_video_memory_purge = glext_gl_has_extension (
    exts, exts_i, "GL_NV_robustness_video_memory_purge");
  GLEXT_GL_NV_sample_locations
    = glext_gl_has_extension (exts, exts_i, "GL_NV_sample_locations");
  GLEXT_GL_NV_sample_mask_override_coverage = glext_gl_has_extension (
    exts, exts_i, "GL_NV_sample_mask_override_coverage");
  GLEXT_GL_NV_scissor_exclusive
    = glext_gl_has_extension (exts, exts_i, "GL_NV_scissor_exclusive");
  GLEXT_GL_NV_shader_atomic_counters
    = glext_gl_has_extension (exts, exts_i, "GL_NV_shader_atomic_counters");
  GLEXT_GL_NV_shader_atomic_float
    = glext_gl_has_extension (exts, exts_i, "GL_NV_shader_atomic_float");
  GLEXT_GL_NV_shader_atomic_float64
    = glext_gl_has_extension (exts, exts_i, "GL_NV_shader_atomic_float64");
  GLEXT_GL_NV_shader_atomic_fp16_vector
    = glext_gl_has_extension (exts, exts_i, "GL_NV_shader_atomic_fp16_vector");
  GLEXT_GL_NV_shader_atomic_int64
    = glext_gl_has_extension (exts, exts_i, "GL_NV_shader_atomic_int64");
  GLEXT_GL_NV_shader_buffer_load
    = glext_gl_has_extension (exts, exts_i, "GL_NV_shader_buffer_load");
  GLEXT_GL_NV_shader_buffer_store
    = glext_gl_has_extension (exts, exts_i, "GL_NV_shader_buffer_store");
  GLEXT_GL_NV_shader_storage_buffer_object = glext_gl_has_extension (
    exts, exts_i, "GL_NV_shader_storage_buffer_object");
  GLEXT_GL_NV_shader_subgroup_partitioned = glext_gl_has_extension (
    exts, exts_i, "GL_NV_shader_subgroup_partitioned");
  GLEXT_GL_NV_shader_texture_footprint
    = glext_gl_has_extension (exts, exts_i, "GL_NV_shader_texture_footprint");
  GLEXT_GL_NV_shader_thread_group
    = glext_gl_has_extension (exts, exts_i, "GL_NV_shader_thread_group");
  GLEXT_GL_NV_shader_thread_shuffle
    = glext_gl_has_extension (exts, exts_i, "GL_NV_shader_thread_shuffle");
  GLEXT_GL_NV_shading_rate_image
    = glext_gl_has_extension (exts, exts_i, "GL_NV_shading_rate_image");
  GLEXT_GL_NV_stereo_view_rendering
    = glext_gl_has_extension (exts, exts_i, "GL_NV_stereo_view_rendering");
  GLEXT_GL_NV_tessellation_program5
    = glext_gl_has_extension (exts, exts_i, "GL_NV_tessellation_program5");
  GLEXT_GL_NV_texgen_emboss
    = glext_gl_has_extension (exts, exts_i, "GL_NV_texgen_emboss");
  GLEXT_GL_NV_texgen_reflection
    = glext_gl_has_extension (exts, exts_i, "GL_NV_texgen_reflection");
  GLEXT_GL_NV_texture_barrier
    = glext_gl_has_extension (exts, exts_i, "GL_NV_texture_barrier");
  GLEXT_GL_NV_texture_compression_vtc
    = glext_gl_has_extension (exts, exts_i, "GL_NV_texture_compression_vtc");
  GLEXT_GL_NV_texture_env_combine4
    = glext_gl_has_extension (exts, exts_i, "GL_NV_texture_env_combine4");
  GLEXT_GL_NV_texture_expand_normal
    = glext_gl_has_extension (exts, exts_i, "GL_NV_texture_expand_normal");
  GLEXT_GL_NV_texture_multisample
    = glext_gl_has_extension (exts, exts_i, "GL_NV_texture_multisample");
  GLEXT_GL_NV_texture_rectangle
    = glext_gl_has_extension (exts, exts_i, "GL_NV_texture_rectangle");
  GLEXT_GL_NV_texture_rectangle_compressed = glext_gl_has_extension (
    exts, exts_i, "GL_NV_texture_rectangle_compressed");
  GLEXT_GL_NV_texture_shader
    = glext_gl_has_extension (exts, exts_i, "GL_NV_texture_shader");
  GLEXT_GL_NV_texture_shader2
    = glext_gl_has_extension (exts, exts_i, "GL_NV_texture_shader2");
  GLEXT_GL_NV_texture_shader3
    = glext_gl_has_extension (exts, exts_i, "GL_NV_texture_shader3");
  GLEXT_GL_NV_timeline_semaphore
    = glext_gl_has_extension (exts, exts_i, "GL_NV_timeline_semaphore");
  GLEXT_GL_NV_transform_feedback
    = glext_gl_has_extension (exts, exts_i, "GL_NV_transform_feedback");
  GLEXT_GL_NV_transform_feedback2
    = glext_gl_has_extension (exts, exts_i, "GL_NV_transform_feedback2");
  GLEXT_GL_NV_uniform_buffer_std430_layout = glext_gl_has_extension (
    exts, exts_i, "GL_NV_uniform_buffer_std430_layout");
  GLEXT_GL_NV_uniform_buffer_unified_memory = glext_gl_has_extension (
    exts, exts_i, "GL_NV_uniform_buffer_unified_memory");
  GLEXT_GL_NV_vdpau_interop
    = glext_gl_has_extension (exts, exts_i, "GL_NV_vdpau_interop");
  GLEXT_GL_NV_vdpau_interop2
    = glext_gl_has_extension (exts, exts_i, "GL_NV_vdpau_interop2");
  GLEXT_GL_NV_vertex_array_range
    = glext_gl_has_extension (exts, exts_i, "GL_NV_vertex_array_range");
  GLEXT_GL_NV_vertex_array_range2
    = glext_gl_has_extension (exts, exts_i, "GL_NV_vertex_array_range2");
  GLEXT_GL_NV_vertex_attrib_integer_64bit = glext_gl_has_extension (
    exts, exts_i, "GL_NV_vertex_attrib_integer_64bit");
  GLEXT_GL_NV_vertex_buffer_unified_memory = glext_gl_has_extension (
    exts, exts_i, "GL_NV_vertex_buffer_unified_memory");
  GLEXT_GL_NV_vertex_program
    = glext_gl_has_extension (exts, exts_i, "GL_NV_vertex_program");
  GLEXT_GL_NV_vertex_program1_1
    = glext_gl_has_extension (exts, exts_i, "GL_NV_vertex_program1_1");
  GLEXT_GL_NV_vertex_program2
    = glext_gl_has_extension (exts, exts_i, "GL_NV_vertex_program2");
  GLEXT_GL_NV_vertex_program2_option
    = glext_gl_has_extension (exts, exts_i, "GL_NV_vertex_program2_option");
  GLEXT_GL_NV_vertex_program3
    = glext_gl_has_extension (exts, exts_i, "GL_NV_vertex_program3");
  GLEXT_GL_NV_vertex_program4
    = glext_gl_has_extension (exts, exts_i, "GL_NV_vertex_program4");
  GLEXT_GL_NV_video_capture
    = glext_gl_has_extension (exts, exts_i, "GL_NV_video_capture");
  GLEXT_GL_NV_viewport_array2
    = glext_gl_has_extension (exts, exts_i, "GL_NV_viewport_array2");
  GLEXT_GL_NV_viewport_swizzle
    = glext_gl_has_extension (exts, exts_i, "GL_NV_viewport_swizzle");
  GLEXT_GL_OES_byte_coordinates
    = glext_gl_has_extension (exts, exts_i, "GL_OES_byte_coordinates");
  GLEXT_GL_OES_compressed_paletted_texture = glext_gl_has_extension (
    exts, exts_i, "GL_OES_compressed_paletted_texture");
  GLEXT_GL_OES_fixed_point
    = glext_gl_has_extension (exts, exts_i, "GL_OES_fixed_point");
  GLEXT_GL_OES_query_matrix
    = glext_gl_has_extension (exts, exts_i, "GL_OES_query_matrix");
  GLEXT_GL_OES_read_format
    = glext_gl_has_extension (exts, exts_i, "GL_OES_read_format");
  GLEXT_GL_OES_single_precision
    = glext_gl_has_extension (exts, exts_i, "GL_OES_single_precision");
  GLEXT_GL_OML_interlace
    = glext_gl_has_extension (exts, exts_i, "GL_OML_interlace");
  GLEXT_GL_OML_resample
    = glext_gl_has_extension (exts, exts_i, "GL_OML_resample");
  GLEXT_GL_OML_subsample
    = glext_gl_has_extension (exts, exts_i, "GL_OML_subsample");
  GLEXT_GL_OVR_multiview
    = glext_gl_has_extension (exts, exts_i, "GL_OVR_multiview");
  GLEXT_GL_OVR_multiview2
    = glext_gl_has_extension (exts, exts_i, "GL_OVR_multiview2");
  GLEXT_GL_PGI_misc_hints
    = glext_gl_has_extension (exts, exts_i, "GL_PGI_misc_hints");
  GLEXT_GL_PGI_vertex_hints
    = glext_gl_has_extension (exts, exts_i, "GL_PGI_vertex_hints");
  GLEXT_GL_REND_screen_coordinates
    = glext_gl_has_extension (exts, exts_i, "GL_REND_screen_coordinates");
  GLEXT_GL_S3_s3tc = glext_gl_has_extension (exts, exts_i, "GL_S3_s3tc");
  GLEXT_GL_SGIS_detail_texture
    = glext_gl_has_extension (exts, exts_i, "GL_SGIS_detail_texture");
  GLEXT_GL_SGIS_fog_function
    = glext_gl_has_extension (exts, exts_i, "GL_SGIS_fog_function");
  GLEXT_GL_SGIS_generate_mipmap
    = glext_gl_has_extension (exts, exts_i, "GL_SGIS_generate_mipmap");
  GLEXT_GL_SGIS_multisample
    = glext_gl_has_extension (exts, exts_i, "GL_SGIS_multisample");
  GLEXT_GL_SGIS_pixel_texture
    = glext_gl_has_extension (exts, exts_i, "GL_SGIS_pixel_texture");
  GLEXT_GL_SGIS_point_line_texgen
    = glext_gl_has_extension (exts, exts_i, "GL_SGIS_point_line_texgen");
  GLEXT_GL_SGIS_point_parameters
    = glext_gl_has_extension (exts, exts_i, "GL_SGIS_point_parameters");
  GLEXT_GL_SGIS_sharpen_texture
    = glext_gl_has_extension (exts, exts_i, "GL_SGIS_sharpen_texture");
  GLEXT_GL_SGIS_texture4D
    = glext_gl_has_extension (exts, exts_i, "GL_SGIS_texture4D");
  GLEXT_GL_SGIS_texture_border_clamp
    = glext_gl_has_extension (exts, exts_i, "GL_SGIS_texture_border_clamp");
  GLEXT_GL_SGIS_texture_color_mask
    = glext_gl_has_extension (exts, exts_i, "GL_SGIS_texture_color_mask");
  GLEXT_GL_SGIS_texture_edge_clamp
    = glext_gl_has_extension (exts, exts_i, "GL_SGIS_texture_edge_clamp");
  GLEXT_GL_SGIS_texture_filter4
    = glext_gl_has_extension (exts, exts_i, "GL_SGIS_texture_filter4");
  GLEXT_GL_SGIS_texture_lod
    = glext_gl_has_extension (exts, exts_i, "GL_SGIS_texture_lod");
  GLEXT_GL_SGIS_texture_select
    = glext_gl_has_extension (exts, exts_i, "GL_SGIS_texture_select");
  GLEXT_GL_SGIX_async = glext_gl_has_extension (exts, exts_i, "GL_SGIX_async");
  GLEXT_GL_SGIX_async_histogram
    = glext_gl_has_extension (exts, exts_i, "GL_SGIX_async_histogram");
  GLEXT_GL_SGIX_async_pixel
    = glext_gl_has_extension (exts, exts_i, "GL_SGIX_async_pixel");
  GLEXT_GL_SGIX_blend_alpha_minmax
    = glext_gl_has_extension (exts, exts_i, "GL_SGIX_blend_alpha_minmax");
  GLEXT_GL_SGIX_calligraphic_fragment
    = glext_gl_has_extension (exts, exts_i, "GL_SGIX_calligraphic_fragment");
  GLEXT_GL_SGIX_clipmap
    = glext_gl_has_extension (exts, exts_i, "GL_SGIX_clipmap");
  GLEXT_GL_SGIX_convolution_accuracy
    = glext_gl_has_extension (exts, exts_i, "GL_SGIX_convolution_accuracy");
  GLEXT_GL_SGIX_depth_pass_instrument
    = glext_gl_has_extension (exts, exts_i, "GL_SGIX_depth_pass_instrument");
  GLEXT_GL_SGIX_depth_texture
    = glext_gl_has_extension (exts, exts_i, "GL_SGIX_depth_texture");
  GLEXT_GL_SGIX_flush_raster
    = glext_gl_has_extension (exts, exts_i, "GL_SGIX_flush_raster");
  GLEXT_GL_SGIX_fog_offset
    = glext_gl_has_extension (exts, exts_i, "GL_SGIX_fog_offset");
  GLEXT_GL_SGIX_fragment_lighting
    = glext_gl_has_extension (exts, exts_i, "GL_SGIX_fragment_lighting");
  GLEXT_GL_SGIX_framezoom
    = glext_gl_has_extension (exts, exts_i, "GL_SGIX_framezoom");
  GLEXT_GL_SGIX_igloo_interface
    = glext_gl_has_extension (exts, exts_i, "GL_SGIX_igloo_interface");
  GLEXT_GL_SGIX_instruments
    = glext_gl_has_extension (exts, exts_i, "GL_SGIX_instruments");
  GLEXT_GL_SGIX_interlace
    = glext_gl_has_extension (exts, exts_i, "GL_SGIX_interlace");
  GLEXT_GL_SGIX_ir_instrument1
    = glext_gl_has_extension (exts, exts_i, "GL_SGIX_ir_instrument1");
  GLEXT_GL_SGIX_list_priority
    = glext_gl_has_extension (exts, exts_i, "GL_SGIX_list_priority");
  GLEXT_GL_SGIX_pixel_texture
    = glext_gl_has_extension (exts, exts_i, "GL_SGIX_pixel_texture");
  GLEXT_GL_SGIX_pixel_tiles
    = glext_gl_has_extension (exts, exts_i, "GL_SGIX_pixel_tiles");
  GLEXT_GL_SGIX_polynomial_ffd
    = glext_gl_has_extension (exts, exts_i, "GL_SGIX_polynomial_ffd");
  GLEXT_GL_SGIX_reference_plane
    = glext_gl_has_extension (exts, exts_i, "GL_SGIX_reference_plane");
  GLEXT_GL_SGIX_resample
    = glext_gl_has_extension (exts, exts_i, "GL_SGIX_resample");
  GLEXT_GL_SGIX_scalebias_hint
    = glext_gl_has_extension (exts, exts_i, "GL_SGIX_scalebias_hint");
  GLEXT_GL_SGIX_shadow
    = glext_gl_has_extension (exts, exts_i, "GL_SGIX_shadow");
  GLEXT_GL_SGIX_shadow_ambient
    = glext_gl_has_extension (exts, exts_i, "GL_SGIX_shadow_ambient");
  GLEXT_GL_SGIX_sprite
    = glext_gl_has_extension (exts, exts_i, "GL_SGIX_sprite");
  GLEXT_GL_SGIX_subsample
    = glext_gl_has_extension (exts, exts_i, "GL_SGIX_subsample");
  GLEXT_GL_SGIX_tag_sample_buffer
    = glext_gl_has_extension (exts, exts_i, "GL_SGIX_tag_sample_buffer");
  GLEXT_GL_SGIX_texture_add_env
    = glext_gl_has_extension (exts, exts_i, "GL_SGIX_texture_add_env");
  GLEXT_GL_SGIX_texture_coordinate_clamp = glext_gl_has_extension (
    exts, exts_i, "GL_SGIX_texture_coordinate_clamp");
  GLEXT_GL_SGIX_texture_lod_bias
    = glext_gl_has_extension (exts, exts_i, "GL_SGIX_texture_lod_bias");
  GLEXT_GL_SGIX_texture_multi_buffer
    = glext_gl_has_extension (exts, exts_i, "GL_SGIX_texture_multi_buffer");
  GLEXT_GL_SGIX_texture_scale_bias
    = glext_gl_has_extension (exts, exts_i, "GL_SGIX_texture_scale_bias");
  GLEXT_GL_SGIX_vertex_preclip
    = glext_gl_has_extension (exts, exts_i, "GL_SGIX_vertex_preclip");
  GLEXT_GL_SGIX_ycrcb = glext_gl_has_extension (exts, exts_i, "GL_SGIX_ycrcb");
  GLEXT_GL_SGIX_ycrcb_subsample
    = glext_gl_has_extension (exts, exts_i, "GL_SGIX_ycrcb_subsample");
  GLEXT_GL_SGIX_ycrcba
    = glext_gl_has_extension (exts, exts_i, "GL_SGIX_ycrcba");
  GLEXT_GL_SGI_color_matrix
    = glext_gl_has_extension (exts, exts_i, "GL_SGI_color_matrix");
  GLEXT_GL_SGI_color_table
    = glext_gl_has_extension (exts, exts_i, "GL_SGI_color_table");
  GLEXT_GL_SGI_texture_color_table
    = glext_gl_has_extension (exts, exts_i, "GL_SGI_texture_color_table");
  GLEXT_GL_SUNX_constant_data
    = glext_gl_has_extension (exts, exts_i, "GL_SUNX_constant_data");
  GLEXT_GL_SUN_convolution_border_modes
    = glext_gl_has_extension (exts, exts_i, "GL_SUN_convolution_border_modes");
  GLEXT_GL_SUN_global_alpha
    = glext_gl_has_extension (exts, exts_i, "GL_SUN_global_alpha");
  GLEXT_GL_SUN_mesh_array
    = glext_gl_has_extension (exts, exts_i, "GL_SUN_mesh_array");
  GLEXT_GL_SUN_slice_accum
    = glext_gl_has_extension (exts, exts_i, "GL_SUN_slice_accum");
  GLEXT_GL_SUN_triangle_list
    = glext_gl_has_extension (exts, exts_i, "GL_SUN_triangle_list");
  GLEXT_GL_SUN_vertex = glext_gl_has_extension (exts, exts_i, "GL_SUN_vertex");
  GLEXT_GL_WIN_phong_shading
    = glext_gl_has_extension (exts, exts_i, "GL_WIN_phong_shading");
  GLEXT_GL_WIN_specular_fog
    = glext_gl_has_extension (exts, exts_i, "GL_WIN_specular_fog");

  glext_gl_free_extensions (exts_i);

  return 1;
}

static int
glext_gl_find_core_gl (void) {
  int i;
  const char* version;
  const char* prefixes[]
    = { "OpenGL ES-CM ", "OpenGL ES-CL ", "OpenGL ES ", "OpenGL SC ", NULL };
  int major = 0;
  int minor = 0;
  version = (const char*)glext_glGetString (GL_VERSION);
  if (!version)
    return 0;
  for (i = 0; prefixes[i]; i++) {
    const size_t length = strlen (prefixes[i]);
    if (strncmp (version, prefixes[i], length) == 0) {
      version += length;
      break;
    }
  }

  GLEXT_IMPL_UTIL_SSCANF (version, "%d.%d", &major, &minor);

  GLEXT_GL_VERSION_1_0 = (major == 1 && minor >= 0) || major > 1;
  GLEXT_GL_VERSION_1_1 = (major == 1 && minor >= 1) || major > 1;
  GLEXT_GL_VERSION_1_2 = (major == 1 && minor >= 2) || major > 1;
  GLEXT_GL_VERSION_1_3 = (major == 1 && minor >= 3) || major > 1;
  GLEXT_GL_VERSION_1_4 = (major == 1 && minor >= 4) || major > 1;
  GLEXT_GL_VERSION_1_5 = (major == 1 && minor >= 5) || major > 1;
  GLEXT_GL_VERSION_2_0 = (major == 2 && minor >= 0) || major > 2;
  GLEXT_GL_VERSION_2_1 = (major == 2 && minor >= 1) || major > 2;
  GLEXT_GL_VERSION_3_0 = (major == 3 && minor >= 0) || major > 3;
  GLEXT_GL_VERSION_3_1 = (major == 3 && minor >= 1) || major > 3;
  GLEXT_GL_VERSION_3_2 = (major == 3 && minor >= 2) || major > 3;
  GLEXT_GL_VERSION_3_3 = (major == 3 && minor >= 3) || major > 3;
  GLEXT_GL_VERSION_4_0 = (major == 4 && minor >= 0) || major > 4;
  GLEXT_GL_VERSION_4_1 = (major == 4 && minor >= 1) || major > 4;
  GLEXT_GL_VERSION_4_2 = (major == 4 && minor >= 2) || major > 4;
  GLEXT_GL_VERSION_4_3 = (major == 4 && minor >= 3) || major > 4;
  GLEXT_GL_VERSION_4_4 = (major == 4 && minor >= 4) || major > 4;
  GLEXT_GL_VERSION_4_5 = (major == 4 && minor >= 5) || major > 4;
  GLEXT_GL_VERSION_4_6 = (major == 4 && minor >= 6) || major > 4;

  return GLEXT_MAKE_VERSION (major, minor);
}

int
glext_LoadGLUserPtr (GLEXTuserptrloadfunc load, void* userptr) {
  int version;

  glext_glGetString = (PFNGLGETSTRINGPROC)load (userptr, "glGetString");
  if (glext_glGetString == NULL)
    return 0;
  version = glext_gl_find_core_gl ();

  glext_gl_load_GL_VERSION_1_0 (load, userptr);
  glext_gl_load_GL_VERSION_1_1 (load, userptr);
  glext_gl_load_GL_VERSION_1_2 (load, userptr);
  glext_gl_load_GL_VERSION_1_3 (load, userptr);
  glext_gl_load_GL_VERSION_1_4 (load, userptr);
  glext_gl_load_GL_VERSION_1_5 (load, userptr);
  glext_gl_load_GL_VERSION_2_0 (load, userptr);
  glext_gl_load_GL_VERSION_2_1 (load, userptr);
  glext_gl_load_GL_VERSION_3_0 (load, userptr);
  glext_gl_load_GL_VERSION_3_1 (load, userptr);
  glext_gl_load_GL_VERSION_3_2 (load, userptr);
  glext_gl_load_GL_VERSION_3_3 (load, userptr);
  glext_gl_load_GL_VERSION_4_0 (load, userptr);
  glext_gl_load_GL_VERSION_4_1 (load, userptr);
  glext_gl_load_GL_VERSION_4_2 (load, userptr);
  glext_gl_load_GL_VERSION_4_3 (load, userptr);
  glext_gl_load_GL_VERSION_4_4 (load, userptr);
  glext_gl_load_GL_VERSION_4_5 (load, userptr);
  glext_gl_load_GL_VERSION_4_6 (load, userptr);

  if (!glext_gl_find_extensions_gl ())
    return 0;
  glext_gl_load_GL_3DFX_tbuffer (load, userptr);
  glext_gl_load_GL_AMD_debug_output (load, userptr);
  glext_gl_load_GL_AMD_draw_buffers_blend (load, userptr);
  glext_gl_load_GL_AMD_framebuffer_multisample_advanced (load, userptr);
  glext_gl_load_GL_AMD_framebuffer_sample_positions (load, userptr);
  glext_gl_load_GL_AMD_gpu_shader_int64 (load, userptr);
  glext_gl_load_GL_AMD_interleaved_elements (load, userptr);
  glext_gl_load_GL_AMD_multi_draw_indirect (load, userptr);
  glext_gl_load_GL_AMD_name_gen_delete (load, userptr);
  glext_gl_load_GL_AMD_occlusion_query_event (load, userptr);
  glext_gl_load_GL_AMD_performance_monitor (load, userptr);
  glext_gl_load_GL_AMD_sample_positions (load, userptr);
  glext_gl_load_GL_AMD_sparse_texture (load, userptr);
  glext_gl_load_GL_AMD_stencil_operation_extended (load, userptr);
  glext_gl_load_GL_AMD_vertex_shader_tessellator (load, userptr);
  glext_gl_load_GL_APPLE_element_array (load, userptr);
  glext_gl_load_GL_APPLE_fence (load, userptr);
  glext_gl_load_GL_APPLE_flush_buffer_range (load, userptr);
  glext_gl_load_GL_APPLE_object_purgeable (load, userptr);
  glext_gl_load_GL_APPLE_texture_range (load, userptr);
  glext_gl_load_GL_APPLE_vertex_array_object (load, userptr);
  glext_gl_load_GL_APPLE_vertex_array_range (load, userptr);
  glext_gl_load_GL_APPLE_vertex_program_evaluators (load, userptr);
  glext_gl_load_GL_ARB_ES2_compatibility (load, userptr);
  glext_gl_load_GL_ARB_ES3_1_compatibility (load, userptr);
  glext_gl_load_GL_ARB_ES3_2_compatibility (load, userptr);
  glext_gl_load_GL_ARB_base_instance (load, userptr);
  glext_gl_load_GL_ARB_bindless_texture (load, userptr);
  glext_gl_load_GL_ARB_blend_func_extended (load, userptr);
  glext_gl_load_GL_ARB_buffer_storage (load, userptr);
  glext_gl_load_GL_ARB_cl_event (load, userptr);
  glext_gl_load_GL_ARB_clear_buffer_object (load, userptr);
  glext_gl_load_GL_ARB_clear_texture (load, userptr);
  glext_gl_load_GL_ARB_clip_control (load, userptr);
  glext_gl_load_GL_ARB_color_buffer_float (load, userptr);
  glext_gl_load_GL_ARB_compute_shader (load, userptr);
  glext_gl_load_GL_ARB_compute_variable_group_size (load, userptr);
  glext_gl_load_GL_ARB_copy_buffer (load, userptr);
  glext_gl_load_GL_ARB_copy_image (load, userptr);
  glext_gl_load_GL_ARB_debug_output (load, userptr);
  glext_gl_load_GL_ARB_direct_state_access (load, userptr);
  glext_gl_load_GL_ARB_draw_buffers (load, userptr);
  glext_gl_load_GL_ARB_draw_buffers_blend (load, userptr);
  glext_gl_load_GL_ARB_draw_elements_base_vertex (load, userptr);
  glext_gl_load_GL_ARB_draw_indirect (load, userptr);
  glext_gl_load_GL_ARB_draw_instanced (load, userptr);
  glext_gl_load_GL_ARB_fragment_program (load, userptr);
  glext_gl_load_GL_ARB_framebuffer_no_attachments (load, userptr);
  glext_gl_load_GL_ARB_framebuffer_object (load, userptr);
  glext_gl_load_GL_ARB_geometry_shader4 (load, userptr);
  glext_gl_load_GL_ARB_get_program_binary (load, userptr);
  glext_gl_load_GL_ARB_get_texture_sub_image (load, userptr);
  glext_gl_load_GL_ARB_gl_spirv (load, userptr);
  glext_gl_load_GL_ARB_gpu_shader_fp64 (load, userptr);
  glext_gl_load_GL_ARB_gpu_shader_int64 (load, userptr);
  glext_gl_load_GL_ARB_imaging (load, userptr);
  glext_gl_load_GL_ARB_indirect_parameters (load, userptr);
  glext_gl_load_GL_ARB_instanced_arrays (load, userptr);
  glext_gl_load_GL_ARB_internalformat_query (load, userptr);
  glext_gl_load_GL_ARB_internalformat_query2 (load, userptr);
  glext_gl_load_GL_ARB_invalidate_subdata (load, userptr);
  glext_gl_load_GL_ARB_map_buffer_range (load, userptr);
  glext_gl_load_GL_ARB_matrix_palette (load, userptr);
  glext_gl_load_GL_ARB_multi_bind (load, userptr);
  glext_gl_load_GL_ARB_multi_draw_indirect (load, userptr);
  glext_gl_load_GL_ARB_multisample (load, userptr);
  glext_gl_load_GL_ARB_multitexture (load, userptr);
  glext_gl_load_GL_ARB_occlusion_query (load, userptr);
  glext_gl_load_GL_ARB_parallel_shader_compile (load, userptr);
  glext_gl_load_GL_ARB_point_parameters (load, userptr);
  glext_gl_load_GL_ARB_polygon_offset_clamp (load, userptr);
  glext_gl_load_GL_ARB_program_interface_query (load, userptr);
  glext_gl_load_GL_ARB_provoking_vertex (load, userptr);
  glext_gl_load_GL_ARB_robustness (load, userptr);
  glext_gl_load_GL_ARB_sample_locations (load, userptr);
  glext_gl_load_GL_ARB_sample_shading (load, userptr);
  glext_gl_load_GL_ARB_sampler_objects (load, userptr);
  glext_gl_load_GL_ARB_separate_shader_objects (load, userptr);
  glext_gl_load_GL_ARB_shader_atomic_counters (load, userptr);
  glext_gl_load_GL_ARB_shader_image_load_store (load, userptr);
  glext_gl_load_GL_ARB_shader_objects (load, userptr);
  glext_gl_load_GL_ARB_shader_storage_buffer_object (load, userptr);
  glext_gl_load_GL_ARB_shader_subroutine (load, userptr);
  glext_gl_load_GL_ARB_shading_language_include (load, userptr);
  glext_gl_load_GL_ARB_sparse_buffer (load, userptr);
  glext_gl_load_GL_ARB_sparse_texture (load, userptr);
  glext_gl_load_GL_ARB_sync (load, userptr);
  glext_gl_load_GL_ARB_tessellation_shader (load, userptr);
  glext_gl_load_GL_ARB_texture_barrier (load, userptr);
  glext_gl_load_GL_ARB_texture_buffer_object (load, userptr);
  glext_gl_load_GL_ARB_texture_buffer_range (load, userptr);
  glext_gl_load_GL_ARB_texture_compression (load, userptr);
  glext_gl_load_GL_ARB_texture_multisample (load, userptr);
  glext_gl_load_GL_ARB_texture_storage (load, userptr);
  glext_gl_load_GL_ARB_texture_storage_multisample (load, userptr);
  glext_gl_load_GL_ARB_texture_view (load, userptr);
  glext_gl_load_GL_ARB_timer_query (load, userptr);
  glext_gl_load_GL_ARB_transform_feedback2 (load, userptr);
  glext_gl_load_GL_ARB_transform_feedback3 (load, userptr);
  glext_gl_load_GL_ARB_transform_feedback_instanced (load, userptr);
  glext_gl_load_GL_ARB_transpose_matrix (load, userptr);
  glext_gl_load_GL_ARB_uniform_buffer_object (load, userptr);
  glext_gl_load_GL_ARB_vertex_array_object (load, userptr);
  glext_gl_load_GL_ARB_vertex_attrib_64bit (load, userptr);
  glext_gl_load_GL_ARB_vertex_attrib_binding (load, userptr);
  glext_gl_load_GL_ARB_vertex_blend (load, userptr);
  glext_gl_load_GL_ARB_vertex_buffer_object (load, userptr);
  glext_gl_load_GL_ARB_vertex_program (load, userptr);
  glext_gl_load_GL_ARB_vertex_shader (load, userptr);
  glext_gl_load_GL_ARB_vertex_type_2_10_10_10_rev (load, userptr);
  glext_gl_load_GL_ARB_viewport_array (load, userptr);
  glext_gl_load_GL_ARB_window_pos (load, userptr);
  glext_gl_load_GL_ATI_draw_buffers (load, userptr);
  glext_gl_load_GL_ATI_element_array (load, userptr);
  glext_gl_load_GL_ATI_envmap_bumpmap (load, userptr);
  glext_gl_load_GL_ATI_fragment_shader (load, userptr);
  glext_gl_load_GL_ATI_map_object_buffer (load, userptr);
  glext_gl_load_GL_ATI_pn_triangles (load, userptr);
  glext_gl_load_GL_ATI_separate_stencil (load, userptr);
  glext_gl_load_GL_ATI_vertex_array_object (load, userptr);
  glext_gl_load_GL_ATI_vertex_attrib_array_object (load, userptr);
  glext_gl_load_GL_ATI_vertex_streams (load, userptr);
  glext_gl_load_GL_EXT_EGL_image_storage (load, userptr);
  glext_gl_load_GL_EXT_bindable_uniform (load, userptr);
  glext_gl_load_GL_EXT_blend_color (load, userptr);
  glext_gl_load_GL_EXT_blend_equation_separate (load, userptr);
  glext_gl_load_GL_EXT_blend_func_separate (load, userptr);
  glext_gl_load_GL_EXT_blend_minmax (load, userptr);
  glext_gl_load_GL_EXT_color_subtable (load, userptr);
  glext_gl_load_GL_EXT_compiled_vertex_array (load, userptr);
  glext_gl_load_GL_EXT_convolution (load, userptr);
  glext_gl_load_GL_EXT_coordinate_frame (load, userptr);
  glext_gl_load_GL_EXT_copy_texture (load, userptr);
  glext_gl_load_GL_EXT_cull_vertex (load, userptr);
  glext_gl_load_GL_EXT_debug_label (load, userptr);
  glext_gl_load_GL_EXT_debug_marker (load, userptr);
  glext_gl_load_GL_EXT_depth_bounds_test (load, userptr);
  glext_gl_load_GL_EXT_direct_state_access (load, userptr);
  glext_gl_load_GL_EXT_draw_buffers2 (load, userptr);
  glext_gl_load_GL_EXT_draw_instanced (load, userptr);
  glext_gl_load_GL_EXT_draw_range_elements (load, userptr);
  glext_gl_load_GL_EXT_external_buffer (load, userptr);
  glext_gl_load_GL_EXT_fog_coord (load, userptr);
  glext_gl_load_GL_EXT_fragment_shading_rate (load, userptr);
  glext_gl_load_GL_EXT_framebuffer_blit (load, userptr);
  glext_gl_load_GL_EXT_framebuffer_blit_layers (load, userptr);
  glext_gl_load_GL_EXT_framebuffer_multisample (load, userptr);
  glext_gl_load_GL_EXT_framebuffer_object (load, userptr);
  glext_gl_load_GL_EXT_geometry_shader4 (load, userptr);
  glext_gl_load_GL_EXT_gpu_program_parameters (load, userptr);
  glext_gl_load_GL_EXT_gpu_shader4 (load, userptr);
  glext_gl_load_GL_EXT_histogram (load, userptr);
  glext_gl_load_GL_EXT_index_func (load, userptr);
  glext_gl_load_GL_EXT_index_material (load, userptr);
  glext_gl_load_GL_EXT_light_texture (load, userptr);
  glext_gl_load_GL_EXT_memory_object (load, userptr);
  glext_gl_load_GL_EXT_memory_object_fd (load, userptr);
  glext_gl_load_GL_EXT_memory_object_win32 (load, userptr);
  glext_gl_load_GL_EXT_mesh_shader (load, userptr);
  glext_gl_load_GL_EXT_multi_draw_arrays (load, userptr);
  glext_gl_load_GL_EXT_multisample (load, userptr);
  glext_gl_load_GL_EXT_paletted_texture (load, userptr);
  glext_gl_load_GL_EXT_pixel_transform (load, userptr);
  glext_gl_load_GL_EXT_point_parameters (load, userptr);
  glext_gl_load_GL_EXT_polygon_offset (load, userptr);
  glext_gl_load_GL_EXT_polygon_offset_clamp (load, userptr);
  glext_gl_load_GL_EXT_provoking_vertex (load, userptr);
  glext_gl_load_GL_EXT_raster_multisample (load, userptr);
  glext_gl_load_GL_EXT_secondary_color (load, userptr);
  glext_gl_load_GL_EXT_semaphore (load, userptr);
  glext_gl_load_GL_EXT_semaphore_fd (load, userptr);
  glext_gl_load_GL_EXT_semaphore_win32 (load, userptr);
  glext_gl_load_GL_EXT_separate_shader_objects (load, userptr);
  glext_gl_load_GL_EXT_shader_framebuffer_fetch_non_coherent (load, userptr);
  glext_gl_load_GL_EXT_shader_image_load_store (load, userptr);
  glext_gl_load_GL_EXT_stencil_clear_tag (load, userptr);
  glext_gl_load_GL_EXT_stencil_two_side (load, userptr);
  glext_gl_load_GL_EXT_subtexture (load, userptr);
  glext_gl_load_GL_EXT_texture3D (load, userptr);
  glext_gl_load_GL_EXT_texture_array (load, userptr);
  glext_gl_load_GL_EXT_texture_buffer_object (load, userptr);
  glext_gl_load_GL_EXT_texture_integer (load, userptr);
  glext_gl_load_GL_EXT_texture_object (load, userptr);
  glext_gl_load_GL_EXT_texture_perturb_normal (load, userptr);
  glext_gl_load_GL_EXT_texture_storage (load, userptr);
  glext_gl_load_GL_EXT_timer_query (load, userptr);
  glext_gl_load_GL_EXT_transform_feedback (load, userptr);
  glext_gl_load_GL_EXT_vertex_array (load, userptr);
  glext_gl_load_GL_EXT_vertex_attrib_64bit (load, userptr);
  glext_gl_load_GL_EXT_vertex_shader (load, userptr);
  glext_gl_load_GL_EXT_vertex_weighting (load, userptr);
  glext_gl_load_GL_EXT_win32_keyed_mutex (load, userptr);
  glext_gl_load_GL_EXT_window_rectangles (load, userptr);
  glext_gl_load_GL_EXT_x11_sync_object (load, userptr);
  glext_gl_load_GL_GREMEDY_frame_terminator (load, userptr);
  glext_gl_load_GL_GREMEDY_string_marker (load, userptr);
  glext_gl_load_GL_HP_image_transform (load, userptr);
  glext_gl_load_GL_IBM_multimode_draw_arrays (load, userptr);
  glext_gl_load_GL_IBM_static_data (load, userptr);
  glext_gl_load_GL_IBM_vertex_array_lists (load, userptr);
  glext_gl_load_GL_INGR_blend_func_separate (load, userptr);
  glext_gl_load_GL_INTEL_framebuffer_CMAA (load, userptr);
  glext_gl_load_GL_INTEL_map_texture (load, userptr);
  glext_gl_load_GL_INTEL_parallel_arrays (load, userptr);
  glext_gl_load_GL_INTEL_performance_query (load, userptr);
  glext_gl_load_GL_KHR_blend_equation_advanced (load, userptr);
  glext_gl_load_GL_KHR_debug (load, userptr);
  glext_gl_load_GL_KHR_parallel_shader_compile (load, userptr);
  glext_gl_load_GL_KHR_robustness (load, userptr);
  glext_gl_load_GL_MESA_framebuffer_flip_y (load, userptr);
  glext_gl_load_GL_MESA_resize_buffers (load, userptr);
  glext_gl_load_GL_MESA_window_pos (load, userptr);
  glext_gl_load_GL_NVX_conditional_render (load, userptr);
  glext_gl_load_GL_NVX_gpu_multicast2 (load, userptr);
  glext_gl_load_GL_NVX_linked_gpu_multicast (load, userptr);
  glext_gl_load_GL_NVX_progress_fence (load, userptr);
  glext_gl_load_GL_NV_alpha_to_coverage_dither_control (load, userptr);
  glext_gl_load_GL_NV_bindless_multi_draw_indirect (load, userptr);
  glext_gl_load_GL_NV_bindless_multi_draw_indirect_count (load, userptr);
  glext_gl_load_GL_NV_bindless_texture (load, userptr);
  glext_gl_load_GL_NV_blend_equation_advanced (load, userptr);
  glext_gl_load_GL_NV_clip_space_w_scaling (load, userptr);
  glext_gl_load_GL_NV_command_list (load, userptr);
  glext_gl_load_GL_NV_conditional_render (load, userptr);
  glext_gl_load_GL_NV_conservative_raster (load, userptr);
  glext_gl_load_GL_NV_conservative_raster_dilate (load, userptr);
  glext_gl_load_GL_NV_conservative_raster_pre_snap_triangles (load, userptr);
  glext_gl_load_GL_NV_copy_image (load, userptr);
  glext_gl_load_GL_NV_depth_buffer_float (load, userptr);
  glext_gl_load_GL_NV_draw_texture (load, userptr);
  glext_gl_load_GL_NV_draw_vulkan_image (load, userptr);
  glext_gl_load_GL_NV_evaluators (load, userptr);
  glext_gl_load_GL_NV_explicit_multisample (load, userptr);
  glext_gl_load_GL_NV_fence (load, userptr);
  glext_gl_load_GL_NV_fragment_coverage_to_color (load, userptr);
  glext_gl_load_GL_NV_fragment_program (load, userptr);
  glext_gl_load_GL_NV_framebuffer_mixed_samples (load, userptr);
  glext_gl_load_GL_NV_framebuffer_multisample_coverage (load, userptr);
  glext_gl_load_GL_NV_geometry_program4 (load, userptr);
  glext_gl_load_GL_NV_gpu_multicast (load, userptr);
  glext_gl_load_GL_NV_gpu_program4 (load, userptr);
  glext_gl_load_GL_NV_gpu_program5 (load, userptr);
  glext_gl_load_GL_NV_gpu_shader5 (load, userptr);
  glext_gl_load_GL_NV_half_float (load, userptr);
  glext_gl_load_GL_NV_internalformat_sample_query (load, userptr);
  glext_gl_load_GL_NV_memory_attachment (load, userptr);
  glext_gl_load_GL_NV_memory_object_sparse (load, userptr);
  glext_gl_load_GL_NV_mesh_shader (load, userptr);
  glext_gl_load_GL_NV_occlusion_query (load, userptr);
  glext_gl_load_GL_NV_parameter_buffer_object (load, userptr);
  glext_gl_load_GL_NV_path_rendering (load, userptr);
  glext_gl_load_GL_NV_pixel_data_range (load, userptr);
  glext_gl_load_GL_NV_point_sprite (load, userptr);
  glext_gl_load_GL_NV_present_video (load, userptr);
  glext_gl_load_GL_NV_primitive_restart (load, userptr);
  glext_gl_load_GL_NV_query_resource (load, userptr);
  glext_gl_load_GL_NV_query_resource_tag (load, userptr);
  glext_gl_load_GL_NV_register_combiners (load, userptr);
  glext_gl_load_GL_NV_register_combiners2 (load, userptr);
  glext_gl_load_GL_NV_sample_locations (load, userptr);
  glext_gl_load_GL_NV_scissor_exclusive (load, userptr);
  glext_gl_load_GL_NV_shader_buffer_load (load, userptr);
  glext_gl_load_GL_NV_shading_rate_image (load, userptr);
  glext_gl_load_GL_NV_texture_barrier (load, userptr);
  glext_gl_load_GL_NV_texture_multisample (load, userptr);
  glext_gl_load_GL_NV_timeline_semaphore (load, userptr);
  glext_gl_load_GL_NV_transform_feedback (load, userptr);
  glext_gl_load_GL_NV_transform_feedback2 (load, userptr);
  glext_gl_load_GL_NV_vdpau_interop (load, userptr);
  glext_gl_load_GL_NV_vdpau_interop2 (load, userptr);
  glext_gl_load_GL_NV_vertex_array_range (load, userptr);
  glext_gl_load_GL_NV_vertex_attrib_integer_64bit (load, userptr);
  glext_gl_load_GL_NV_vertex_buffer_unified_memory (load, userptr);
  glext_gl_load_GL_NV_vertex_program (load, userptr);
  glext_gl_load_GL_NV_vertex_program4 (load, userptr);
  glext_gl_load_GL_NV_video_capture (load, userptr);
  glext_gl_load_GL_NV_viewport_swizzle (load, userptr);
  glext_gl_load_GL_OES_byte_coordinates (load, userptr);
  glext_gl_load_GL_OES_fixed_point (load, userptr);
  glext_gl_load_GL_OES_query_matrix (load, userptr);
  glext_gl_load_GL_OES_single_precision (load, userptr);
  glext_gl_load_GL_OVR_multiview (load, userptr);
  glext_gl_load_GL_PGI_misc_hints (load, userptr);
  glext_gl_load_GL_SGIS_detail_texture (load, userptr);
  glext_gl_load_GL_SGIS_fog_function (load, userptr);
  glext_gl_load_GL_SGIS_multisample (load, userptr);
  glext_gl_load_GL_SGIS_pixel_texture (load, userptr);
  glext_gl_load_GL_SGIS_point_parameters (load, userptr);
  glext_gl_load_GL_SGIS_sharpen_texture (load, userptr);
  glext_gl_load_GL_SGIS_texture4D (load, userptr);
  glext_gl_load_GL_SGIS_texture_color_mask (load, userptr);
  glext_gl_load_GL_SGIS_texture_filter4 (load, userptr);
  glext_gl_load_GL_SGIX_async (load, userptr);
  glext_gl_load_GL_SGIX_flush_raster (load, userptr);
  glext_gl_load_GL_SGIX_fragment_lighting (load, userptr);
  glext_gl_load_GL_SGIX_framezoom (load, userptr);
  glext_gl_load_GL_SGIX_igloo_interface (load, userptr);
  glext_gl_load_GL_SGIX_instruments (load, userptr);
  glext_gl_load_GL_SGIX_list_priority (load, userptr);
  glext_gl_load_GL_SGIX_pixel_texture (load, userptr);
  glext_gl_load_GL_SGIX_polynomial_ffd (load, userptr);
  glext_gl_load_GL_SGIX_reference_plane (load, userptr);
  glext_gl_load_GL_SGIX_sprite (load, userptr);
  glext_gl_load_GL_SGIX_tag_sample_buffer (load, userptr);
  glext_gl_load_GL_SGI_color_table (load, userptr);
  glext_gl_load_GL_SUNX_constant_data (load, userptr);
  glext_gl_load_GL_SUN_global_alpha (load, userptr);
  glext_gl_load_GL_SUN_mesh_array (load, userptr);
  glext_gl_load_GL_SUN_triangle_list (load, userptr);
  glext_gl_load_GL_SUN_vertex (load, userptr);

  return version;
}

int
glext_LoadGL (GLEXTloadfunc load) {
  return glext_LoadGLUserPtr (glext_gl_get_proc_from_userptr,
                              GLEXT_GNUC_EXTENSION (void*) load);
}

#ifdef GLEXT_GL

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

typedef void*(GLEXT_API_PTR* GLEXTglprocaddrfunc) (const char*);
struct _glext_gl_userptr {
  void* handle;
  GLEXTglprocaddrfunc gl_get_proc_address_ptr;
};

static GLEXTapiproc
glext_gl_get_proc (void* vuserptr, const char* name) {
  struct _glext_gl_userptr userptr = *(struct _glext_gl_userptr*)vuserptr;
  GLEXTapiproc result = NULL;

  if (userptr.gl_get_proc_address_ptr != NULL) {
    result = GLEXT_GNUC_EXTENSION (GLEXTapiproc)
               userptr.gl_get_proc_address_ptr (name);
  }
  if (result == NULL) {
    result = glext_dlsym_handle (userptr.handle, name);
  }

  return result;
}

static void* _glext_GL_loader_handle = NULL;

static void*
glext_gl_dlopen_handle (void) {
#if GLEXT_PLATFORM_APPLE
  static const char* NAMES[] = {
    "../Frameworks/OpenGL.framework/OpenGL",
    "/Library/Frameworks/OpenGL.framework/OpenGL",
    "/System/Library/Frameworks/OpenGL.framework/OpenGL",
    "/System/Library/Frameworks/OpenGL.framework/Versions/Current/OpenGL"
  };
#elif GLEXT_PLATFORM_WIN32
  static const char* NAMES[] = { "opengl32.dll" };
#else
  static const char* NAMES[] = {
#if defined(__CYGWIN__)
    "libGL-1.so",
#endif
    "libGL.so.1", "libGL.so"
  };
#endif

  if (_glext_GL_loader_handle == NULL) {
    _glext_GL_loader_handle
      = glext_get_dlopen_handle (NAMES, sizeof (NAMES) / sizeof (NAMES[0]));
  }

  return _glext_GL_loader_handle;
}

static struct _glext_gl_userptr
glext_gl_build_userptr (void* handle) {
  struct _glext_gl_userptr userptr;

  userptr.handle = handle;
#if GLEXT_PLATFORM_APPLE || defined(__HAIKU__)
  userptr.gl_get_proc_address_ptr = NULL;
#elif GLEXT_PLATFORM_WIN32
  userptr.gl_get_proc_address_ptr
    = (GLEXTglprocaddrfunc)glext_dlsym_handle (handle, "wglGetProcAddress");
#else
  userptr.gl_get_proc_address_ptr
    = (GLEXTglprocaddrfunc)glext_dlsym_handle (handle, "glXGetProcAddressARB");
#endif

  return userptr;
}

int
glext_LoaderLoadGL (void) {
  int version = 0;
  void* handle;
  int did_load = 0;
  struct _glext_gl_userptr userptr;

  did_load = _glext_GL_loader_handle == NULL;
  handle = glext_gl_dlopen_handle ();
  if (handle) {
    userptr = glext_gl_build_userptr (handle);

    version = glext_LoadGLUserPtr (glext_gl_get_proc, &userptr);

    if (did_load) {
      glext_LoaderUnloadGL ();
    }
  }

  return version;
}

void
glext_LoaderUnloadGL (void) {
  if (_glext_GL_loader_handle != NULL) {
    glext_close_dlopen_handle (_glext_GL_loader_handle);
    _glext_GL_loader_handle = NULL;
  }
}

#endif /* GLEXT_GL */

#ifdef __cplusplus
}
#endif
