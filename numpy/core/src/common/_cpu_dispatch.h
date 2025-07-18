/*
 * AUTOGENERATED DON'T EDIT
 * Please make changes to the code generator (distutils/ccompiler_opt.py)
*/
#define NPY_WITH_CPU_BASELINE  "SSE SSE2 SSE3"
#define NPY_WITH_CPU_DISPATCH  "SSSE3 SSE41 POPCNT SSE42 AVX F16C FMA3 AVX2 AVX512F AVX512CD AVX512_KNL AVX512_SKX AVX512_CLX AVX512_CNL AVX512_ICL"
#define NPY_WITH_CPU_BASELINE_N 3
#define NPY_WITH_CPU_DISPATCH_N 15
#define NPY_WITH_CPU_EXPAND_(X) X
#define NPY_WITH_CPU_BASELINE_CALL(MACRO_TO_CALL, ...) \
	NPY_WITH_CPU_EXPAND_(MACRO_TO_CALL(SSE, __VA_ARGS__)) \
	NPY_WITH_CPU_EXPAND_(MACRO_TO_CALL(SSE2, __VA_ARGS__)) \
	NPY_WITH_CPU_EXPAND_(MACRO_TO_CALL(SSE3, __VA_ARGS__))
#define NPY_WITH_CPU_DISPATCH_CALL(MACRO_TO_CALL, ...) \
	NPY_WITH_CPU_EXPAND_(MACRO_TO_CALL(SSSE3, __VA_ARGS__)) \
	NPY_WITH_CPU_EXPAND_(MACRO_TO_CALL(SSE41, __VA_ARGS__)) \
	NPY_WITH_CPU_EXPAND_(MACRO_TO_CALL(POPCNT, __VA_ARGS__)) \
	NPY_WITH_CPU_EXPAND_(MACRO_TO_CALL(SSE42, __VA_ARGS__)) \
	NPY_WITH_CPU_EXPAND_(MACRO_TO_CALL(AVX, __VA_ARGS__)) \
	NPY_WITH_CPU_EXPAND_(MACRO_TO_CALL(F16C, __VA_ARGS__)) \
	NPY_WITH_CPU_EXPAND_(MACRO_TO_CALL(FMA3, __VA_ARGS__)) \
	NPY_WITH_CPU_EXPAND_(MACRO_TO_CALL(AVX2, __VA_ARGS__)) \
	NPY_WITH_CPU_EXPAND_(MACRO_TO_CALL(AVX512F, __VA_ARGS__)) \
	NPY_WITH_CPU_EXPAND_(MACRO_TO_CALL(AVX512CD, __VA_ARGS__)) \
	NPY_WITH_CPU_EXPAND_(MACRO_TO_CALL(AVX512_KNL, __VA_ARGS__)) \
	NPY_WITH_CPU_EXPAND_(MACRO_TO_CALL(AVX512_SKX, __VA_ARGS__)) \
	NPY_WITH_CPU_EXPAND_(MACRO_TO_CALL(AVX512_CLX, __VA_ARGS__)) \
	NPY_WITH_CPU_EXPAND_(MACRO_TO_CALL(AVX512_CNL, __VA_ARGS__)) \
	NPY_WITH_CPU_EXPAND_(MACRO_TO_CALL(AVX512_ICL, __VA_ARGS__))
/******* baseline features *******/
	/** SSE **/
	#define NPY_HAVE_SSE 1
	#include <xmmintrin.h>
	/** SSE2 **/
	#define NPY_HAVE_SSE2 1
	#include <emmintrin.h>
	/** SSE3 **/
	#define NPY_HAVE_SSE3 1
	#include <pmmintrin.h>

/******* dispatch features *******/
#ifdef NPY__CPU_TARGET_SSSE3
	/** SSSE3 **/
	#define NPY_HAVE_SSSE3 1
	#include <tmmintrin.h>
#endif /*NPY__CPU_TARGET_SSSE3*/
#ifdef NPY__CPU_TARGET_SSE41
	/** SSE41 **/
	#define NPY_HAVE_SSE41 1
	#include <smmintrin.h>
#endif /*NPY__CPU_TARGET_SSE41*/
#ifdef NPY__CPU_TARGET_POPCNT
	/** POPCNT **/
	#define NPY_HAVE_POPCNT 1
	#include <popcntintrin.h>
#endif /*NPY__CPU_TARGET_POPCNT*/
#ifdef NPY__CPU_TARGET_SSE42
	/** SSE42 **/
	#define NPY_HAVE_SSE42 1
#endif /*NPY__CPU_TARGET_SSE42*/
#ifdef NPY__CPU_TARGET_AVX
	/** AVX **/
	#define NPY_HAVE_AVX 1
	#include <immintrin.h>
#endif /*NPY__CPU_TARGET_AVX*/
#ifdef NPY__CPU_TARGET_F16C
	/** F16C **/
	#define NPY_HAVE_F16C 1
#endif /*NPY__CPU_TARGET_F16C*/
#ifdef NPY__CPU_TARGET_FMA3
	/** FMA3 **/
	#define NPY_HAVE_FMA3 1
#endif /*NPY__CPU_TARGET_FMA3*/
#ifdef NPY__CPU_TARGET_AVX2
	/** AVX2 **/
	#define NPY_HAVE_AVX2 1
#endif /*NPY__CPU_TARGET_AVX2*/
#ifdef NPY__CPU_TARGET_AVX512F
	/** AVX512F **/
	#define NPY_HAVE_AVX512F 1
	#ifndef NPY_HAVE_AVX512F_REDUCE
		#define NPY_HAVE_AVX512F_REDUCE 1
	#endif
#endif /*NPY__CPU_TARGET_AVX512F*/
#ifdef NPY__CPU_TARGET_AVX512CD
	/** AVX512CD **/
	#define NPY_HAVE_AVX512CD 1
#endif /*NPY__CPU_TARGET_AVX512CD*/
#ifdef NPY__CPU_TARGET_AVX512_KNL
	/** AVX512_KNL **/
	#define NPY_HAVE_AVX512_KNL 1
	#ifndef NPY_HAVE_AVX512ER
		#define NPY_HAVE_AVX512ER 1
	#endif
	#ifndef NPY_HAVE_AVX512PF
		#define NPY_HAVE_AVX512PF 1
	#endif
#endif /*NPY__CPU_TARGET_AVX512_KNL*/
#ifdef NPY__CPU_TARGET_AVX512_SKX
	/** AVX512_SKX **/
	#define NPY_HAVE_AVX512_SKX 1
	#ifndef NPY_HAVE_AVX512VL
		#define NPY_HAVE_AVX512VL 1
	#endif
	#ifndef NPY_HAVE_AVX512BW
		#define NPY_HAVE_AVX512BW 1
	#endif
	#ifndef NPY_HAVE_AVX512DQ
		#define NPY_HAVE_AVX512DQ 1
	#endif
	#ifndef NPY_HAVE_AVX512BW_MASK
		#define NPY_HAVE_AVX512BW_MASK 1
	#endif
	#ifndef NPY_HAVE_AVX512BW_MASK
		#define NPY_HAVE_AVX512BW_MASK 1
	#endif
#endif /*NPY__CPU_TARGET_AVX512_SKX*/
#ifdef NPY__CPU_TARGET_AVX512_CLX
	/** AVX512_CLX **/
	#define NPY_HAVE_AVX512_CLX 1
	#ifndef NPY_HAVE_AVX512VNNI
		#define NPY_HAVE_AVX512VNNI 1
	#endif
#endif /*NPY__CPU_TARGET_AVX512_CLX*/
#ifdef NPY__CPU_TARGET_AVX512_CNL
	/** AVX512_CNL **/
	#define NPY_HAVE_AVX512_CNL 1
	#ifndef NPY_HAVE_AVX512IFMA
		#define NPY_HAVE_AVX512IFMA 1
	#endif
	#ifndef NPY_HAVE_AVX512VBMI
		#define NPY_HAVE_AVX512VBMI 1
	#endif
#endif /*NPY__CPU_TARGET_AVX512_CNL*/
#ifdef NPY__CPU_TARGET_AVX512_ICL
	/** AVX512_ICL **/
	#define NPY_HAVE_AVX512_ICL 1
	#ifndef NPY_HAVE_AVX512VBMI2
		#define NPY_HAVE_AVX512VBMI2 1
	#endif
	#ifndef NPY_HAVE_AVX512BITALG
		#define NPY_HAVE_AVX512BITALG 1
	#endif
	#ifndef NPY_HAVE_AVX512VPOPCNTDQ
		#define NPY_HAVE_AVX512VPOPCNTDQ 1
	#endif
#endif /*NPY__CPU_TARGET_AVX512_ICL*/

