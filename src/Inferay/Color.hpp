#pragma once

#include "Macro.hpp"

template <typename T, size_t Size>
struct INFERAY_API Color
{
	static_assert(Size > 0, "Color size must be greater than 0");
	static_assert(Size < 5, "Color size must be less than 5");
};

template <typename T>
struct INFERAY_API Color<T, 1>
{
	T r_;
};

template <typename T>
struct INFERAY_API Color<T, 2>
{
	T r_;
	T g_;
};

template <typename T>
struct INFERAY_API Color<T, 3>
{
	T r_;
	T g_;
	T b_;
};

template <typename T>
struct INFERAY_API Color<T, 4>
{
	T r_;
	T g_;
	T b_;
	T a_;
};
