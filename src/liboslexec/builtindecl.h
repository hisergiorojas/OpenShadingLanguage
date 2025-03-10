// Copyright Contributors to the Open Shading Language project.
// SPDX-License-Identifier: BSD-3-Clause
// https://github.com/AcademySoftwareFoundation/OpenShadingLanguage


// This file contains "declarations" for all the functions that might get
// called from JITed shader code. But the declaration itself is dependent on
// the DECL macro, which should be declared by the outer file prior to
// including this file. Thus, this list may be repurposed and included
// multiple times, with different DECL definitions.


#ifndef DECL
#    error Do not include this file unless DECL is defined
#endif



#define NOISE_IMPL(name)           \
    DECL(osl_##name##_ff, "ff")    \
    DECL(osl_##name##_fff, "fff")  \
    DECL(osl_##name##_fv, "fv")    \
    DECL(osl_##name##_fvf, "fvf")  \
    DECL(osl_##name##_vf, "xvf")   \
    DECL(osl_##name##_vff, "xvff") \
    DECL(osl_##name##_vv, "xvv")   \
    DECL(osl_##name##_vvf, "xvvf")

#define NOISE_DERIV_IMPL(name)        \
    DECL(osl_##name##_dfdf, "xXX")    \
    DECL(osl_##name##_dfdff, "xXXf")  \
    DECL(osl_##name##_dffdf, "xXfX")  \
    DECL(osl_##name##_dfdfdf, "xXXX") \
    DECL(osl_##name##_dfdv, "xXv")    \
    DECL(osl_##name##_dfdvf, "xXvf")  \
    DECL(osl_##name##_dfvdf, "xXvX")  \
    DECL(osl_##name##_dfdvdf, "xXvX") \
    DECL(osl_##name##_dvdf, "xvX")    \
    DECL(osl_##name##_dvdff, "xvXf")  \
    DECL(osl_##name##_dvfdf, "xvfX")  \
    DECL(osl_##name##_dvdfdf, "xvXX") \
    DECL(osl_##name##_dvdv, "xvv")    \
    DECL(osl_##name##_dvdvf, "xvvf")  \
    DECL(osl_##name##_dvvdf, "xvvX")  \
    DECL(osl_##name##_dvdvdf, "xvvX")

#define GENERIC_NOISE_DERIV_IMPL(name)   \
    DECL(osl_##name##_dfdf, "xsXXXX")    \
    DECL(osl_##name##_dfdfdf, "xsXXXXX") \
    DECL(osl_##name##_dfdv, "xsXXXX")    \
    DECL(osl_##name##_dfdvdf, "xsXXXXX") \
    DECL(osl_##name##_dvdf, "xsXXXX")    \
    DECL(osl_##name##_dvdfdf, "xsXXXXX") \
    DECL(osl_##name##_dvdv, "xsXXXX")    \
    DECL(osl_##name##_dvdvdf, "xsXXXXX")

#define PNOISE_IMPL(name)              \
    DECL(osl_##name##_fff, "fff")      \
    DECL(osl_##name##_fffff, "fffff")  \
    DECL(osl_##name##_fvv, "fvv")      \
    DECL(osl_##name##_fvfvf, "fvfvf")  \
    DECL(osl_##name##_vff, "xvff")     \
    DECL(osl_##name##_vffff, "xvffff") \
    DECL(osl_##name##_vvv, "xvvv")     \
    DECL(osl_##name##_vvfvf, "xvvfvf")

#define PNOISE_DERIV_IMPL(name)           \
    DECL(osl_##name##_dfdff, "xXXf")      \
    DECL(osl_##name##_dfdffff, "xXXfff")  \
    DECL(osl_##name##_dffdfff, "xXfXff")  \
    DECL(osl_##name##_dfdfdfff, "xXXXff") \
    DECL(osl_##name##_dfdvv, "xXXv")      \
    DECL(osl_##name##_dfdvfvf, "xXvfvf")  \
    DECL(osl_##name##_dfvdfvf, "xXvXvf")  \
    DECL(osl_##name##_dfdvdfvf, "xXvXvf") \
    DECL(osl_##name##_dvdff, "xvXf")      \
    DECL(osl_##name##_dvdffff, "xvXfff")  \
    DECL(osl_##name##_dvfdfff, "xvfXff")  \
    DECL(osl_##name##_dvdfdfff, "xvXXff") \
    DECL(osl_##name##_dvdvv, "xvvv")      \
    DECL(osl_##name##_dvdvfvf, "xvvfvf")  \
    DECL(osl_##name##_dvvdfvf, "xvvXvf")  \
    DECL(osl_##name##_dvdvdfvf, "xvvXvf")

#define GENERIC_PNOISE_DERIV_IMPL(name)      \
    DECL(osl_##name##_dfdff, "xsXXfXX")      \
    DECL(osl_##name##_dfdfdfff, "xsXXXffXX") \
    DECL(osl_##name##_dfdvv, "xsXXvXX")      \
    DECL(osl_##name##_dfdvdfvf, "xsXvXvfXX") \
    DECL(osl_##name##_dvdff, "xsvXfXX")      \
    DECL(osl_##name##_dvdfdfff, "xsvXXffXX") \
    DECL(osl_##name##_dvdvv, "xsvvvXX")      \
    DECL(osl_##name##_dvdvdfvf, "xsvvXvfXX")

#define UNARY_OP_IMPL(name)        \
    DECL(osl_##name##_ff, "ff")    \
    DECL(osl_##name##_dfdf, "xXX") \
    DECL(osl_##name##_vv, "xXX")   \
    DECL(osl_##name##_dvdv, "xXX")

#define BINARY_OP_IMPL(name)          \
    DECL(osl_##name##_fff, "fff")     \
    DECL(osl_##name##_dfdfdf, "xXXX") \
    DECL(osl_##name##_dffdf, "xXfX")  \
    DECL(osl_##name##_dfdff, "xXXf")  \
    DECL(osl_##name##_vvv, "xXXX")    \
    DECL(osl_##name##_dvdvdv, "xXXX") \
    DECL(osl_##name##_dvvdv, "xXXX")  \
    DECL(osl_##name##_dvdvv, "xXXX")



#ifndef __CUDA_ARCH__
DECL(osl_add_closure_closure, "CXCC")
DECL(osl_mul_closure_float, "CXCf")
DECL(osl_mul_closure_color, "CXCc")
DECL(osl_allocate_closure_component, "CXii")
DECL(osl_allocate_weighted_closure_component, "CXiiX")
DECL(osl_closure_to_string, "sXC")
DECL(osl_closure_to_ustringhash, "hXC")
#else
// TODO: Figure out why trying to match the signatures between host and device
//       definitions fails with 'LLVM had to make a cast' assertion failure.
//
//       In the meantime, use a signature that matches the definitions in rend_lib.cu,
//       where void* is used instead of ClosureColor* and ShaderGlobals*.
DECL(osl_add_closure_closure, "XXXX")
DECL(osl_mul_closure_float, "XXXf")
DECL(osl_mul_closure_color, "XXXc")
DECL(osl_allocate_closure_component, "XXii")
DECL(osl_allocate_weighted_closure_component, "XXiiX")
DECL(osl_closure_to_string, "sXX")
DECL(osl_closure_to_ustringhash, "hXX")
#endif
DECL(osl_format, "ss*")
DECL(osl_gen_ustringhash_pod, "hs")
DECL(osl_gen_printfmt, "xXhiXiX")
DECL(osl_gen_filefmt, "xXhhiXiX")
DECL(osl_gen_errorfmt, "xXhiXiX")
DECL(osl_gen_warningfmt, "xXhiXiX")
DECL(osl_split, "isXsii")
DECL(osl_incr_layers_executed, "xX")

// For legacy printf support
DECL(osl_printf, "xXs*")
DECL(osl_fprintf, "xXss*")
DECL(osl_error, "xXs*")
DECL(osl_warning, "xXs*")

NOISE_IMPL(cellnoise)
//NOISE_DERIV_IMPL(cellnoise)
NOISE_IMPL(hashnoise)
NOISE_IMPL(noise)
NOISE_DERIV_IMPL(noise)
NOISE_IMPL(snoise)
NOISE_DERIV_IMPL(snoise)
NOISE_IMPL(simplexnoise)
NOISE_DERIV_IMPL(simplexnoise)
NOISE_IMPL(usimplexnoise)
NOISE_DERIV_IMPL(usimplexnoise)
GENERIC_NOISE_DERIV_IMPL(gabornoise)
GENERIC_NOISE_DERIV_IMPL(genericnoise)
NOISE_IMPL(nullnoise)
NOISE_DERIV_IMPL(nullnoise)
NOISE_IMPL(unullnoise)
NOISE_DERIV_IMPL(unullnoise)
PNOISE_IMPL(pcellnoise)
//PNOISE_DERIV_IMPL(pcellnoise)
PNOISE_IMPL(phashnoise)
PNOISE_IMPL(pnoise)
PNOISE_DERIV_IMPL(pnoise)
PNOISE_IMPL(psnoise)
PNOISE_DERIV_IMPL(psnoise)
GENERIC_PNOISE_DERIV_IMPL(gaborpnoise)
GENERIC_PNOISE_DERIV_IMPL(genericpnoise)
DECL(osl_noiseparams_set_anisotropic, "xXi")
DECL(osl_noiseparams_set_do_filter, "xXi")
DECL(osl_noiseparams_set_direction, "xXv")
DECL(osl_noiseparams_set_bandwidth, "xXf")
DECL(osl_noiseparams_set_impulses, "xXf")
DECL(osl_count_noise, "xX")
DECL(osl_hash_ii, "ii")
DECL(osl_hash_if, "if")
DECL(osl_hash_iff, "iff")
DECL(osl_hash_iv, "iX")
DECL(osl_hash_ivf, "iXf")

DECL(osl_spline_fff, "xXXXXii")
DECL(osl_spline_dfdfdf, "xXXXXii")
DECL(osl_spline_dfdff, "xXXXXii")
DECL(osl_spline_dffdf, "xXXXXii")
DECL(osl_spline_vfv, "xXXXXii")
DECL(osl_spline_dvdfdv, "xXXXXii")
DECL(osl_spline_dvdfv, "xXXXXii")
DECL(osl_spline_dvfdv, "xXXXXii")
DECL(osl_splineinverse_fff, "xXXXXii")
DECL(osl_splineinverse_dfdfdf, "xXXXXii")
DECL(osl_splineinverse_dfdff, "xXXXXii")
DECL(osl_splineinverse_dffdf, "xXXXXii")
DECL(osl_setmessage, "xXsLXisi")
DECL(osl_getmessage, "iXssLXiisi")
DECL(osl_pointcloud_search, "iXsXfiiXXii*")
DECL(osl_pointcloud_get, "iXsXisLX")
DECL(osl_pointcloud_write, "iXsXiXXX")
DECL(osl_pointcloud_write_helper, "xXXXisLX")
DECL(osl_blackbody_vf, "xXXf")
DECL(osl_wavelength_color_vf, "xXXf")
DECL(osl_luminance_fv, "xXXX")
DECL(osl_luminance_dfdv, "xXXX")
DECL(osl_prepend_color_from, "xXXs")
DECL(osl_prepend_matrix_from, "iXXs")
DECL(osl_get_matrix, "iXXs")
DECL(osl_get_inverse_matrix, "iXXs")
DECL(osl_transform_triple, "iXXiXiXXi")
DECL(osl_transform_triple_nonlinear, "iXXiXiXXi")
DECL(osl_transform_vmv, "xXXX")
DECL(osl_transform_dvmdv, "xXXX")
DECL(osl_transformv_vmv, "xXXX")
DECL(osl_transformv_dvmdv, "xXXX")
DECL(osl_transformn_vmv, "xXXX")
DECL(osl_transformn_dvmdv, "xXXX")
DECL(osl_transformc, "iXXiXiXX")

DECL(osl_dict_find_iis, "iXiX")
DECL(osl_dict_find_iss, "iXXX")
DECL(osl_dict_next, "iXi")
DECL(osl_dict_value, "iXiXLX")
DECL(osl_raytype_name, "iXs")
#ifdef OSL_LLVM_NO_BITCODE
DECL(osl_range_check, "iiihXhihihh")
#endif
DECL(osl_range_check_err, "iiihXhihihh")
DECL(osl_naninf_check, "xiXiXhihiih")
DECL(osl_uninit_check, "xLXXhihihhihihii")
DECL(osl_get_attribute, "iXissiiLX")
DECL(osl_bind_interpolated_param, "iXsLiXiXiXi")
DECL(osl_get_texture_options, "XX");
DECL(osl_get_noise_options, "XX");
DECL(osl_get_trace_options, "XX");


// The following are defined inside llvm_ops.cpp. Only include these
// declarations in the OSL_LLVM_NO_BITCODE case.
#ifdef OSL_LLVM_NO_BITCODE
UNARY_OP_IMPL(sin)
UNARY_OP_IMPL(cos)
UNARY_OP_IMPL(tan)
UNARY_OP_IMPL(asin)
UNARY_OP_IMPL(acos)
UNARY_OP_IMPL(atan)
BINARY_OP_IMPL(atan2)
UNARY_OP_IMPL(sinh)
UNARY_OP_IMPL(cosh)
UNARY_OP_IMPL(tanh)

DECL(osl_safe_div_iii, "iii")
DECL(osl_safe_div_fff, "fff")
DECL(osl_safe_mod_iii, "iii")
DECL(osl_sincos_fff, "xfXX")
DECL(osl_sincos_dfdff, "xXXX")
DECL(osl_sincos_dffdf, "xXXX")
DECL(osl_sincos_dfdfdf, "xXXX")
DECL(osl_sincos_vvv, "xXXX")
DECL(osl_sincos_dvdvv, "xXXX")
DECL(osl_sincos_dvvdv, "xXXX")
DECL(osl_sincos_dvdvdv, "xXXX")

UNARY_OP_IMPL(log)
UNARY_OP_IMPL(log2)
UNARY_OP_IMPL(log10)
UNARY_OP_IMPL(exp)
UNARY_OP_IMPL(exp2)
UNARY_OP_IMPL(expm1)
UNARY_OP_IMPL(erf)
UNARY_OP_IMPL(erfc)

BINARY_OP_IMPL(pow)
DECL(osl_pow_vvf, "xXXf")
DECL(osl_pow_dvdvdf, "xXXX")
DECL(osl_pow_dvvdf, "xXXX")
DECL(osl_pow_dvdvf, "xXXf")

UNARY_OP_IMPL(sqrt)
UNARY_OP_IMPL(inversesqrt)
UNARY_OP_IMPL(cbrt)

DECL(osl_logb_ff, "ff")
DECL(osl_logb_vv, "xXX")

DECL(osl_floor_ff, "ff")
DECL(osl_floor_vv, "xXX")
DECL(osl_ceil_ff, "ff")
DECL(osl_ceil_vv, "xXX")
DECL(osl_round_ff, "ff")
DECL(osl_round_vv, "xXX")
DECL(osl_trunc_ff, "ff")
DECL(osl_trunc_vv, "xXX")
DECL(osl_sign_ff, "ff")
DECL(osl_sign_vv, "xXX")
DECL(osl_step_fff, "fff")
DECL(osl_step_vvv, "xXXX")

DECL(osl_isnan_if, "if")
DECL(osl_isinf_if, "if")
DECL(osl_isfinite_if, "if")
DECL(osl_abs_ii, "ii")
DECL(osl_fabs_ii, "ii")

UNARY_OP_IMPL(abs)
UNARY_OP_IMPL(fabs)

BINARY_OP_IMPL(fmod)
DECL(osl_fmod_vvf, "xXXf")
DECL(osl_fmod_dvdvdf, "xXXX")
DECL(osl_fmod_dvvdf, "xXXX")
DECL(osl_fmod_dvdvf, "xXXf")

DECL(osl_smoothstep_ffff, "ffff")
DECL(osl_smoothstep_dfffdf, "xXffX")
DECL(osl_smoothstep_dffdff, "xXfXf")
DECL(osl_smoothstep_dffdfdf, "xXfXX")
DECL(osl_smoothstep_dfdfff, "xXXff")
DECL(osl_smoothstep_dfdffdf, "xXXfX")
DECL(osl_smoothstep_dfdfdff, "xXXXf")
DECL(osl_smoothstep_dfdfdfdf, "xXXXX")

DECL(osl_dot_fvv, "fXX")
DECL(osl_dot_dfdvdv, "xXXX")
DECL(osl_dot_dfdvv, "xXXX")
DECL(osl_dot_dfvdv, "xXXX")
DECL(osl_cross_vvv, "xXXX")
DECL(osl_cross_dvdvdv, "xXXX")
DECL(osl_cross_dvdvv, "xXXX")
DECL(osl_cross_dvvdv, "xXXX")
DECL(osl_length_fv, "fX")
DECL(osl_length_dfdv, "xXX")
DECL(osl_distance_fvv, "fXX")
DECL(osl_distance_dfdvdv, "xXXX")
DECL(osl_distance_dfdvv, "xXXX")
DECL(osl_distance_dfvdv, "xXXX")
DECL(osl_normalize_vv, "xXX")
DECL(osl_normalize_dvdv, "xXX")
#endif


DECL(osl_mul_mmm, "xXXX")
DECL(osl_mul_mmf, "xXXf")

DECL(osl_div_mmm, "xXXX")
DECL(osl_div_mmf, "xXXf")
DECL(osl_div_mfm, "xXfX")

DECL(osl_get_from_to_matrix, "iXXss")
DECL(osl_transpose_mm, "xXX")
DECL(osl_determinant_fm, "fX")

DECL(osl_concat_sss, "sss")
DECL(osl_strlen_is, "is")
DECL(osl_hash_is, "is")
DECL(osl_getchar_isi, "isi");
DECL(osl_startswith_iss, "iss")
DECL(osl_endswith_iss, "iss")
DECL(osl_stoi_is, "is")
DECL(osl_stof_fs, "fs")
DECL(osl_substr_ssii, "ssii")
DECL(osl_regex_impl, "iXsXisi")

// Used by wide code generator, but are uniform calls
DECL(osl_texture_decode_wrapmode, "is");
DECL(osl_texture_decode_interpmode, "is");

DECL(osl_texture_set_firstchannel, "xXi")
DECL(osl_texture_set_swrap, "xXs")
DECL(osl_texture_set_twrap, "xXs")
DECL(osl_texture_set_rwrap, "xXs")
DECL(osl_texture_set_stwrap, "xXs")
DECL(osl_texture_set_swrap_code, "xXi")
DECL(osl_texture_set_twrap_code, "xXi")
DECL(osl_texture_set_rwrap_code, "xXi")
DECL(osl_texture_set_stwrap_code, "xXi")
DECL(osl_texture_set_sblur, "xXf")
DECL(osl_texture_set_tblur, "xXf")
DECL(osl_texture_set_rblur, "xXf")
DECL(osl_texture_set_stblur, "xXf")
DECL(osl_texture_set_swidth, "xXf")
DECL(osl_texture_set_twidth, "xXf")
DECL(osl_texture_set_rwidth, "xXf")
DECL(osl_texture_set_stwidth, "xXf")
DECL(osl_texture_set_fill, "xXf")
DECL(osl_texture_set_time, "xXf")
DECL(osl_texture_set_interp, "xXs")
DECL(osl_texture_set_interp_code, "xXi")
DECL(osl_texture_set_subimage, "xXi")
DECL(osl_texture_set_subimagename, "xXs")
DECL(osl_texture_set_missingcolor_arena, "xXX")
DECL(osl_texture_set_missingcolor_alpha, "xXif")
DECL(osl_texture, "iXXXXffffffiXXXXXXX")
DECL(osl_texture3d, "iXXXXXXXXiXXXXXXX")
DECL(osl_environment, "iXXXXXXXiXXXXXXX")
DECL(osl_get_textureinfo, "iXXXXiiiXX")
DECL(osl_get_textureinfo_st, "iXXXffXiiiXX")

DECL(osl_trace_set_mindist, "xXf")
DECL(osl_trace_set_maxdist, "xXf")
DECL(osl_trace_set_shade, "xXi")
DECL(osl_trace_set_traceset, "xXs")
DECL(osl_trace, "iXXXXXXXX")

#ifdef OSL_LLVM_NO_BITCODE
DECL(osl_calculatenormal, "xXXX")
DECL(osl_area, "fX")
DECL(osl_filterwidth_fdf, "fX")
DECL(osl_filterwidth_vdv, "xXX")
DECL(osl_raytype_bit, "iXi")
#endif


// Clean up local definitions
#undef NOISE_IMPL
#undef NOISE_DERIV_IMPL
#undef GENERIC_NOISE_DERIV_IMPL
#undef PNOISE_IMPL
#undef PNOISE_DERIV_IMPL
#undef GENERIC_PNOISE_DERIV_IMPL
#undef UNARY_OP_IMPL
#undef BINARY_OP_IMPL
