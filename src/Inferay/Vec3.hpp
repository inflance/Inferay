#pragma once

#include "VecBase.hpp"

namespace inferay
{
	template <typename T>
	class INFERAY_API Vec<T, 3>
	{
	public:
		using ValueType = T;
		using SizeType = size_t;
		using VecBaseType = VecBase<T, 3>;
		using VecType = Vec<T, 3>;
		using LengthType = double;

		INFERAY_CONSTEXPR Vec() = default;

		INFERAY_CONSTEXPR Vec(T x, T y, T z);

		INFERAY_CONSTEXPR explicit Vec(T value);

		INFERAY_CONSTEXPR explicit Vec(const VecBaseType& vec_base);

		T& X();
		T& Y();
		T& Z();

		T& R();
		T& G();
		T& B();

		INFERAY_CONSTEXPR T X() const;
		INFERAY_CONSTEXPR T Y() const;
		INFERAY_CONSTEXPR T Z() const;

		INFERAY_CONSTEXPR T R() const;
		INFERAY_CONSTEXPR T G() const;
		INFERAY_CONSTEXPR T B() const;

		Vec<T, 2>& XY();
		Vec<T, 2>& RG();
		Vec<T, 3>& XYZ();
		Vec<T, 3>& RGB();

		INFERAY_CONSTEXPR Vec<T, 2> XY() const;
		INFERAY_CONSTEXPR Vec<T, 2> RG() const;
		INFERAY_CONSTEXPR Vec<T, 3> XYZ() const;
		INFERAY_CONSTEXPR Vec<T, 3> RGB() const;

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
	INFERAY_CONSTEXPR Vec<T, 3>::Vec(T x, T y, T z) : m_vec_base{x, y, z}
	{
	}

	template <typename T>
	INFERAY_CONSTEXPR Vec<T, 3>::Vec(T value): m_vec_base(value, value, value)
	{
	}

	template <typename T>
	INFERAY_CONSTEXPR Vec<T, 3>::Vec(const VecBaseType& vec_base)
		: m_vec_base{vec_base}
	{
	}

	template <typename T>
	T& Vec<T, 3>::X()
	{
		return m_vec_base[0];
	}

	template <typename T>
	T& Vec<T, 3>::R()
	{
		return m_vec_base[0];
	}

	template <typename T>
	T& Vec<T, 3>::Y()
	{
		return m_vec_base[1];
	}

	template <typename T>
	T& Vec<T, 3>::G()
	{
		return m_vec_base[1];
	}

	template <typename T>
	T& Vec<T, 3>::Z()
	{
		return m_vec_base[2];
	}

	template <typename T>
	T& Vec<T, 3>::B()
	{
		return m_vec_base[2];
	}

	template <typename T>
	Vec<T, 2>& Vec<T, 3>::XY()
	{
		return reinterpret_cast<Vec<T, 2>&>(m_vec_base);
	}

	template <typename T>
	Vec<T, 2>& Vec<T, 3>::RG()
	{
		return reinterpret_cast<Vec<T, 2>&>(m_vec_base);
	}

	template <typename T>
	Vec<T, 3>& Vec<T, 3>::XYZ()
	{
		return *this;
	}

	template <typename T>
	Vec<T, 3>& Vec<T, 3>::RGB()
	{
		return *this;
	}

	template <typename T>
	INFERAY_CONSTEXPR T Vec<T, 3>::X() const
	{
		return m_vec_base[0];
	}

	template <typename T>
	INFERAY_CONSTEXPR T Vec<T, 3>::R() const
	{
		return m_vec_base[0];
	}

	template <typename T>
	INFERAY_CONSTEXPR T Vec<T, 3>::Y() const
	{
		return m_vec_base[1];
	}

	template <typename T>
	INFERAY_CONSTEXPR T Vec<T, 3>::G() const
	{
		return m_vec_base[1];
	}

	template <typename T>
	INFERAY_CONSTEXPR T Vec<T, 3>::Z() const
	{
		return m_vec_base[2];
	}

	template <typename T>
	INFERAY_CONSTEXPR T Vec<T, 3>::B() const
	{
		return m_vec_base[2];
	}

	template <typename T>
	INFERAY_CONSTEXPR Vec<T, 2> Vec<T, 3>::XY() const
	{
		return Vec<T, 2>(X(), Y());
	}

	template <typename T>
	constexpr Vec<T, 2> Vec<T, 3>::RG() const
	{
		return Vec<T, 2>(R(), G());
	}

	template <typename T>
	INFERAY_CONSTEXPR Vec<T, 3> Vec<T, 3>::XYZ() const
	{
		return *this;
	}

	template <typename T>
	constexpr Vec<T, 3> Vec<T, 3>::RGB() const
	{
		return *this;
	}

	template <typename T>
	INFERAY_CONSTEXPR Vec<T, 3>& Vec<T, 3>::operator+=(const VecType& rhs)
	{
		m_vec_base += rhs.m_vec_base;
		return *this;
	}

	template <typename T>
	INFERAY_CONSTEXPR Vec<T, 3>& Vec<T, 3>::operator-=(const VecType& rhs)
	{
		m_vec_base -= rhs.m_vec_base;
		return *this;
	}

	template <typename T>
	INFERAY_CONSTEXPR Vec<T, 3>& Vec<T, 3>::operator*=(const VecType& rhs)
	{
		m_vec_base *= rhs.m_vec_base;
		return *this;
	}

	template <typename T>
	INFERAY_CONSTEXPR Vec<T, 3>& Vec<T, 3>::operator/=(const VecType& rhs)
	{
		m_vec_base /= rhs.m_vec_base;
		return *this;
	}

	template <typename T>
	INFERAY_CONSTEXPR Vec<T, 3> Vec<T, 3>::operator+(const VecType& rhs) const
	{
		return Vec(m_vec_base + rhs.m_vec_base);
	}

	template <typename T>
	INFERAY_CONSTEXPR Vec<T, 3> Vec<T, 3>::operator-(const VecType& rhs) const
	{
		return Vec(m_vec_base - rhs.m_vec_base);
	}

	template <typename T>
	INFERAY_CONSTEXPR Vec<T, 3> Vec<T, 3>::operator*(const VecType& rhs) const
	{
		return Vec(m_vec_base * rhs.m_vec_base);
	}

	template <typename T>
	INFERAY_CONSTEXPR Vec<T, 3> Vec<T, 3>::operator/(const VecType& rhs) const
	{
		return Vec(m_vec_base / rhs.m_vec_base);
	}

	template <typename T>
	INFERAY_CONSTEXPR typename Vec<T, 3>::LengthType Vec<T, 3>::Length() const
	{
		return m_vec_base.Length();
	}

	template <typename T>
	INFERAY_CONSTEXPR T Vec<T, 3>::Dot(const VecType& rhs) const
	{
		return m_vec_base.Dot(rhs.m_vec_base);
	}

	template <typename T>
	INFERAY_CONSTEXPR typename Vec<T, 3>::SizeType Vec<T, 3>::Size() const
	{
		return m_vec_base.Size();
	}

	template <typename T>
	INFERAY_CONSTEXPR T& Vec<T, 3>::operator[](size_t i)
	{
		return m_vec_base[i];
	}

	template <typename T>
	INFERAY_CONSTEXPR T Vec<T, 3>::operator[](size_t i) const
	{
		return m_vec_base[i];
	}

	template <typename T>
	INFERAY_CONSTEXPR T* Vec<T, 3>::Data()
	{
		return m_vec_base.Data();
	}

	template <typename T>
	INFERAY_CONSTEXPR const T* Vec<T, 3>::Data() const
	{
		return m_vec_base.Data();
	}

	template <typename T>
	using Vec3 = Vec<T, 3>;
}
