#pragma once

#include "VecBase.hpp"

namespace inferay
{
	template <typename T>
	class INFERAY_API Vec<T, 1>
	{
	public:
		using ValueType = T;
		using SizeType = size_t;
		using VecBaseType = VecBase<ValueType, 1>;
		using VecType = Vec<T, 1>;
		using LengthType = double;

		INFERAY_CONSTEXPR Vec() = default;

		explicit INFERAY_CONSTEXPR Vec(T x);

		INFERAY_CONSTEXPR explicit Vec(const VecBaseType& vec_base);

		T& X();
		T& R();

		T X() const;
		T R() const;

		INFERAY_CONSTEXPR VecType& operator+=(const VecType& rhs);
		INFERAY_CONSTEXPR VecType& operator-=(const VecType& rhs);
		INFERAY_CONSTEXPR VecType& operator*=(const VecType& rhs);
		INFERAY_CONSTEXPR VecType& operator/=(const VecType& rhs);

		INFERAY_CONSTEXPR VecType operator+(const VecType& rhs) const;
		INFERAY_CONSTEXPR VecType operator-(const VecType& rhs) const;
		INFERAY_CONSTEXPR VecType operator*(const VecType& rhs) const;
		INFERAY_CONSTEXPR VecType operator/(const VecType& rhs) const;

		INFERAY_NODISCARD INFERAY_CONSTEXPR LengthType Length() const;

		INFERAY_CONSTEXPR T Dot(const VecType& rhs) const;

		INFERAY_NODISCARD INFERAY_CONSTEXPR SizeType Size() const;

		INFERAY_CONSTEXPR T& operator[](size_t i);

		INFERAY_CONSTEXPR T operator[](size_t i) const;

		INFERAY_CONSTEXPR T* Data();

		INFERAY_CONSTEXPR const T* Data() const;

	private:
		VecBaseType m_vec_base{};
	};

	template <typename T>
	T& Vec<T, 1>::X()
	{
		return m_vec_base[0];
	}

	template <typename T>
	T& Vec<T, 1>::R()
	{
		return m_vec_base[0];
	}

	template <typename T>
	T Vec<T, 1>::X() const
	{
		return m_vec_base[0];
	}

	template <typename T>
	T Vec<T, 1>::R() const
	{
		return m_vec_base[0];
	}

	template <typename T>
	INFERAY_CONSTEXPR Vec<T, 1>::Vec(T x):
		m_vec_base{x}
	{
	}

	template <typename T>
	INFERAY_CONSTEXPR Vec<T, 1>::Vec(const VecBaseType& vec_base)
		: m_vec_base{vec_base}
	{
	}

	template <typename T>
	INFERAY_CONSTEXPR Vec<T, 1>& Vec<T, 1>::operator+=(const VecType& rhs)
	{
		m_vec_base += rhs.m_vec_base;
		return *this;
	}

	template <typename T>
	INFERAY_CONSTEXPR Vec<T, 1>& Vec<T, 1>::operator-=(const VecType& rhs)
	{
		m_vec_base -= rhs.m_vec_base;
		return *this;
	}

	template <typename T>
	INFERAY_CONSTEXPR Vec<T, 1>& Vec<T, 1>::operator*=(const VecType& rhs)
	{
		m_vec_base *= rhs.m_vec_base;
		return *this;
	}

	template <typename T>
	INFERAY_CONSTEXPR Vec<T, 1>& Vec<T, 1>::operator/=(const VecType& rhs)
	{
		m_vec_base /= rhs.m_vec_base;
		return *this;
	}

	template <typename T>
	INFERAY_CONSTEXPR Vec<T, 1> Vec<T, 1>::operator+(const VecType& rhs) const
	{
		return Vec(m_vec_base + rhs.m_vec_base);
	}

	template <typename T>
	INFERAY_CONSTEXPR Vec<T, 1> Vec<T, 1>::operator-(const VecType& rhs) const
	{
		return Vec(m_vec_base - rhs.m_vec_base);
	}

	template <typename T>
	INFERAY_CONSTEXPR Vec<T, 1> Vec<T, 1>::operator*(const VecType& rhs) const
	{
		return Vec(m_vec_base * rhs.m_vec_base);
	}

	template <typename T>
	INFERAY_CONSTEXPR Vec<T, 1> Vec<T, 1>::operator/(const VecType& rhs) const
	{
		return Vec(m_vec_base / rhs.m_vec_base);
	}

	template <typename T>
	INFERAY_CONSTEXPR typename Vec<T, 1>::LengthType Vec<T, 1>::Length() const
	{
		return m_vec_base.Length();
	}

	template <typename T>
	INFERAY_CONSTEXPR T Vec<T, 1>::Dot(const VecType& rhs) const
	{
		return m_vec_base.Dot(rhs.m_vec_base);
	}

	template <typename T>
	INFERAY_CONSTEXPR typename Vec<T, 1>::SizeType Vec<T, 1>::Size() const
	{
		return m_vec_base.Size();
	}

	template <typename T>
	INFERAY_CONSTEXPR T& Vec<T, 1>::operator[](size_t i)
	{
		return m_vec_base[i];
	}

	template <typename T>
	constexpr T Vec<T, 1>::operator[](size_t i) const
	{
		return m_vec_base[i];
	}

	template <typename T>
	INFERAY_CONSTEXPR T* Vec<T, 1>::Data()
	{
		return m_vec_base.Data();
	}

	template <typename T>
	INFERAY_CONSTEXPR const T* Vec<T, 1>::Data() const
	{
		return m_vec_base.Data();
	}

	template <typename T>
	using Vec1 = Vec<T, 1>;
}
