#pragma once

#include <cassert>
#include <cmath>

#include "Macro.hpp"

namespace inferay
{
	template <typename T, size_t S>
	struct INFERAY_API VecBase
	{
		using ValueType = T;
		using SizeType = size_t;
		using VecBaseType = VecBase<T, S>;
		using LengthType = double;

		T data_[S]{};

		static constexpr size_t Size();

		constexpr VecBaseType& operator+=(const VecBaseType& rhs);
		constexpr VecBaseType& operator-=(const VecBaseType& rhs);
		constexpr VecBaseType& operator*=(const VecBaseType& rhs);
		constexpr VecBaseType& operator/=(const VecBaseType& rhs);

		constexpr VecBaseType operator+(const VecBaseType& rhs) const;
		constexpr VecBaseType operator-(const VecBaseType& rhs) const;
		constexpr VecBaseType operator*(const VecBaseType& rhs) const;
		constexpr VecBaseType operator/(const VecBaseType& rhs) const;

		INFERAY_NODISCARD constexpr LengthType Length() const;

		constexpr T Dot(const VecBaseType& rhs) const;

		constexpr T& operator[](size_t i);

		constexpr T operator[](size_t i) const;

		constexpr T* Data();

		constexpr const T* Data() const;
	};

	template <typename T, size_t S>
	constexpr size_t VecBase<T, S>::Size()
	{
		return S;
	}

	template <typename T, size_t S>
	constexpr typename VecBase<T, S>::VecBaseType& VecBase<T, S>::operator+=(const VecBaseType& rhs)
	{
		for (size_t i = 0; i < Size(); ++i)
		{
			data_[i] += rhs[i];
		}
		return *this;
	}

	template <typename T, size_t S>
	constexpr typename VecBase<T, S>::VecBaseType& VecBase<T, S>::operator-=(const VecBaseType& rhs)
	{
		for (size_t i = 0; i < Size(); ++i)
		{
			data_[i] -= rhs[i];
		}
		return *this;
	}

	template <typename T, size_t S>
	constexpr typename VecBase<T, S>::VecBaseType& VecBase<T, S>::operator*=(const VecBaseType& rhs)
	{
		for (size_t i = 0; i < Size(); ++i)
		{
			data_[i] *= rhs[i];
		}
		return *this;
	}

	template <typename T, size_t S>
	constexpr typename VecBase<T, S>::VecBaseType& VecBase<T, S>::operator/=(const VecBaseType& rhs)
	{
		for (size_t i = 0; i < Size(); ++i)
		{
			data_[i] /= rhs[i];
		}
		return *this;
	}

	template <typename T, size_t S>
	constexpr typename VecBase<T, S>::VecBaseType VecBase<T, S>::operator+(const VecBaseType& rhs) const
	{
		VecBaseType result = *this;
		result += rhs;
		return result;
	}

	template <typename T, size_t S>
	constexpr typename VecBase<T, S>::VecBaseType VecBase<T, S>::operator-(const VecBaseType& rhs) const
	{
		VecBaseType result = *this;
		result -= rhs;
		return result;
	}

	template <typename T, size_t S>
	constexpr typename VecBase<T, S>::VecBaseType VecBase<T, S>::operator*(const VecBaseType& rhs) const
	{
		VecBaseType result = *this;
		result *= rhs;
		return result;
	}

	template <typename T, size_t S>
	constexpr typename VecBase<T, S>::VecBaseType VecBase<T, S>::operator/(const VecBaseType& rhs) const
	{
		VecBaseType result = *this;
		result /= rhs;
		return result;
	}

	template <typename T, size_t S>
	constexpr typename VecBase<T, S>::LengthType VecBase<T, S>::Length() const
	{
		SizeType result = 0;
		for (SizeType i = 0; i < S; ++i)
		{
			result += data_[i] * data_[i];
		}
		return std::sqrt(result);
	}

	template <typename T, size_t S>
	constexpr T VecBase<T, S>::Dot(const VecBaseType& rhs) const
	{
		T result = 0;
		for (SizeType i = 0; i < S; ++i)
		{
			result += data_[i] * rhs[i];
		}
		return result;
	}

	template <typename T, size_t S>
	constexpr T& VecBase<T, S>::operator[](size_t i)
	{
		assert(i < Size());
		return data_[i];
	}

	template <typename T, size_t S>
	constexpr T VecBase<T, S>::operator[](size_t i) const
	{
		assert(i < Size());
		return data_[i];
	}

	template <typename T, size_t S>
	constexpr T* VecBase<T, S>::Data()
	{
		return &data_[0];
	}

	template <typename T, size_t S>
	constexpr const T* VecBase<T, S>::Data() const
	{
		return &data_[0];
	}

	template <typename T, size_t Size>
	class INFERAY_API Vec
	{
		static_assert(Size > 0, "Vec size must be greater than 0");
		static_assert(Size < 5, "Vec size must be less than 5");
	};
}
