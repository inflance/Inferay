#pragma once

#include "VecBase.hpp"

namespace inferay
{
	template <typename T>
	class INFERAY_API Vec<T, 2>
	{
	public:
		using ValueType = T;
		using SizeType = size_t;
		using VecBaseType = VecBase<T, 2>;
		using VecType = Vec<T, 2>;
		using LengthType = double;

		INFERAY_CONSTEXPR Vec() = default;

		INFERAY_CONSTEXPR Vec(T x, T y);

		INFERAY_CONSTEXPR explicit Vec(T value);

		INFERAY_CONSTEXPR explicit Vec(const VecBaseType& vec_base);

		T& X();
		T& Y();

		T& R();
		T& G();

		INFERAY_CONSTEXPR T X() const;
		INFERAY_CONSTEXPR T Y() const;

		INFERAY_CONSTEXPR T R() const;
		INFERAY_CONSTEXPR T G() const;


		Vec<T, 2>& XY();
		Vec<T, 2>& RG();

		INFERAY_CONSTEXPR Vec<T, 2> XY() const;
		INFERAY_CONSTEXPR Vec<T, 2> RG() const;

		void SetX(T x);
		void SetR(T r);

		void SetY(T y);
		void SetG(T g);

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
	INFERAY_CONSTEXPR Vec<T, 2>::Vec(T x, T y) : m_vec_base{x, y}
	{
	}

	template <typename T>
	INFERAY_CONSTEXPR Vec<T, 2>::Vec(T value): m_vec_base{value, value}
	{
	}

	template <typename T>
	INFERAY_CONSTEXPR Vec<T, 2>::Vec(const VecBaseType& vec_base) : m_vec_base{vec_base}
	{
	}

	template <typename T>
	T& Vec<T, 2>::X()
	{
		return m_vec_base[0];
	}

	template <typename T>
	T& Vec<T, 2>::R()
	{
		return m_vec_base[0];
	}

	template <typename T>
	T& Vec<T, 2>::Y()
	{
		return m_vec_base[1];
	}

	template <typename T>
	T& Vec<T, 2>::G()
	{
		return m_vec_base[1];
	}

	template <typename T>
	INFERAY_CONSTEXPR T Vec<T, 2>::X() const
	{
		return m_vec_base[0];
	}

	template <typename T>
	INFERAY_CONSTEXPR T Vec<T, 2>::R() const
	{
		return m_vec_base[0];
	}

	template <typename T>
	INFERAY_CONSTEXPR T Vec<T, 2>::Y() const
	{
		return m_vec_base[1];
	}

	template <typename T>
	INFERAY_CONSTEXPR T Vec<T, 2>::G() const
	{
		return m_vec_base[1];
	}

	template <typename T>
	constexpr Vec<T, 2> Vec<T, 2>::XY() const
	{
		return *this;
	}

	template <typename T>
	constexpr Vec<T, 2> Vec<T, 2>::RG() const
	{
		return *this;
	}

	template <typename T>
	Vec<T, 2>& Vec<T, 2>::XY()
	{
		return reinterpret_cast<Vec<T, 2>&>(m_vec_base);
	}

	template <typename T>
	Vec<T, 2>& Vec<T, 2>::RG()
	{
		return reinterpret_cast<Vec<T, 2>&>(m_vec_base);
	}

	template <typename T>
	void Vec<T, 2>::SetX(T x)
	{
		m_vec_base[0] = x;
	}

	template <typename T>
	void Vec<T, 2>::SetR(T r)
	{
		m_vec_base[0] = r;
	}

	template <typename T>
	void Vec<T, 2>::SetY(T y)
	{
		m_vec_base[1] = y;
	}

	template <typename T>
	void Vec<T, 2>::SetG(T g)
	{
		m_vec_base[1] = g;
	}

	template <typename T>
	INFERAY_CONSTEXPR Vec<T, 2>& Vec<T, 2>::operator+=(const VecType& rhs)
	{
		m_vec_base += rhs.m_vec_base;
		return *this;
	}

	template <typename T>
	INFERAY_CONSTEXPR Vec<T, 2>& Vec<T, 2>::operator-=(const VecType& rhs)
	{
		m_vec_base -= rhs.m_vec_base;
		return *this;
	}

	template <typename T>
	INFERAY_CONSTEXPR Vec<T, 2>& Vec<T, 2>::operator*=(const VecType& rhs)
	{
		m_vec_base *= rhs.m_vec_base;
		return *this;
	}

	template <typename T>
	INFERAY_CONSTEXPR Vec<T, 2>& Vec<T, 2>::operator/=(const VecType& rhs)
	{
		m_vec_base /= rhs.m_vec_base;
		return *this;
	}

	template <typename T>
	INFERAY_CONSTEXPR Vec<T, 2> Vec<T, 2>::operator+(const VecType& rhs) const
	{
		return Vec(m_vec_base + rhs.m_vec_base);
	}

	template <typename T>
	INFERAY_CONSTEXPR Vec<T, 2> Vec<T, 2>::operator-(const VecType& rhs) const
	{
		return Vec(m_vec_base - rhs.m_vec_base);
	}

	template <typename T>
	INFERAY_CONSTEXPR Vec<T, 2> Vec<T, 2>::operator*(const VecType& rhs) const
	{
		return Vec(m_vec_base * rhs.m_vec_base);
	}

	template <typename T>
	INFERAY_CONSTEXPR Vec<T, 2> Vec<T, 2>::operator/(const VecType& rhs) const
	{
		return Vec(m_vec_base / rhs.m_vec_base);
	}

	template <typename T>
	INFERAY_CONSTEXPR typename Vec<T, 2>::LengthType Vec<T, 2>::Length() const
	{
		return m_vec_base.Length();
	}

	template <typename T>
	INFERAY_CONSTEXPR T Vec<T, 2>::Dot(const VecType& rhs) const
	{
		return m_vec_base.Dot(rhs.m_vec_base);
	}

	template <typename T>
	INFERAY_CONSTEXPR typename Vec<T, 2>::SizeType Vec<T, 2>::Size() const
	{
		return m_vec_base.Size();
	}

	template <typename T>
	INFERAY_CONSTEXPR T& Vec<T, 2>::operator[](size_t i)
	{
		return m_vec_base[i];
	}

	template <typename T>
	INFERAY_CONSTEXPR T Vec<T, 2>::operator[](size_t i) const
	{
		return m_vec_base[i];
	}

	template <typename T>
	INFERAY_CONSTEXPR T* Vec<T, 2>::Data()
	{
		return m_vec_base.Data();
	}

	template <typename T>
	INFERAY_CONSTEXPR const T* Vec<T, 2>::Data() const
	{
		return m_vec_base.Data();
	}

	template <typename T>
	using Vec2 = Vec<T, 2>;
}
