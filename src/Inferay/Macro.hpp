#pragma once

#ifdef _MSC_VER
#if _MSVC_LANG  >= 201103L
	#define INFERAY_CONSTEXPR constexpr
	#define INFERAY_INLINE inline
#else
	#define INFERAY_CONSTEXPR
	#define INFERAY_INLINE 
#endif

#if _MSVC_LANG >= 201703L
	#define INFERAY_NODISCARD [[nodiscard]]
#else
	#define INFERAY_NODISCARD
#endif

#else
#if __cplusplus >= 201103L
	#define INFERAY_CONSTEXPR constexpr
#else
#define INFERAY_CONSTEXPR
#endif
#endif


#ifdef INFERAY_DYNAMIC_LIB

#ifdef INFERAY_WINDOWS
#define INFERAY_API __declspec(dllexport)
#endif

#else
	#define INFERAY_API 
#endif
