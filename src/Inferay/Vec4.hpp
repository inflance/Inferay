#pragma once

#include "VecBase.hpp"

namespace inferay
{
	template <typename T>
	class INFERAY_API Vec<T, 4>
	{
	public:
		using ValueType = T;
		using SizeType = size_t;
		using VecBaseType = VecBase<T, 4>;
		using VecType = Vec<T, 4>;
		using LengthType = double;

		INFERAY_CONSTEXPR Vec() = default;

		INFERAY_CONSTEXPR Vec(T x, T y, T z, T w);

		INFERAY_CONSTEXPR explicit Vec(T value);

		INFERAY_CONSTEXPR explicit Vec(const VecBaseType& vec_base);

		T& X();
		T& Y();
		T& Z();
		T& W();

		T& R();
		T& G();
		T& B();
		T& A();

		INFERAY_CONSTEXPR T X() const;
		INFERAY_CONSTEXPR T Y() const;
		INFERAY_CONSTEXPR T Z() const;
		INFERAY_CONSTEXPR T W() const;

		INFERAY_CONSTEXPR T R() const;
		INFERAY_CONSTEXPR T G() const;
		INFERAY_CONSTEXPR T B() const;
		INFERAY_CONSTEXPR T A() const;

		Vec<T, 2>& XY();
		Vec<T, 2>& RG();
		Vec<T, 3>& XYZ();
		Vec<T, 3>& RGB();
		Vec<T, 4>& XYZW();
		Vec<T, 4>& RGBA();

		INFERAY_CONSTEXPR Vec<T, 2> XY() const;
		INFERAY_CONSTEXPR Vec<T, 2> RG() const;
		INFERAY_CONSTEXPR Vec<T, 3> XYZ() const;
		INFERAY_CONSTEXPR Vec<T, 3> RGB() const;
		INFERAY_CONSTEXPR Vec<T, 4> XYZW() const;
		INFERAY_CONSTEXPR Vec<T, 4> RGBA() const;


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
	INFERAY_CONSTEXPR Vec<T, 4>::Vec(T x, T y, T z, T w) : m_vec_base{x, y, z, w}
	{
	}

	template <typename T>
	INFERAY_CONSTEXPR Vec<T, 4>::Vec(T value): m_vec_base{value, value, value, value}
	{
	}

	template <typename T>
	INFERAY_CONSTEXPR Vec<T, 4>::Vec(const VecBaseType& vec_base) : m_vec_base{vec_base}
	{
	}

	template <typename T>
	INFERAY_CONSTEXPR typename Vec<T, 4>::SizeType Vec<T, 4>::Size() const
	{
		return m_vec_base.Size();
	}

	template <typename T>
	INFERAY_CONSTEXPR T& Vec<T, 4>::operator[](size_t i)
	{
		return m_vec_base[i];
	}

	template <typename T>
	constexpr T Vec<T, 4>::operator[](size_t i) const
	{
		return m_vec_base[i];
	}

	template <typename T>
	INFERAY_CONSTEXPR T* Vec<T, 4>::Data()
	{
		return m_vec_base.Data();
	}

	template <typename T>
	INFERAY_CONSTEXPR const T* Vec<T, 4>::Data() const
	{
		return m_vec_base.Data();
	}

	template <typename T>
	T& Vec<T, 4>::X()
	{
		return m_vec_base[0];
	}

	template <typename T>
	T& Vec<T, 4>::R()
	{
		return m_vec_base[0];
	}

	template <typename T>
	T& Vec<T, 4>::Y()
	{
		return m_vec_base[1];
	}

	template <typename T>
	T& Vec<T, 4>::G()
	{
		return m_vec_base[1];
	}

	template <typename T>
	T& Vec<T, 4>::Z()
	{
		return m_vec_base[2];
	}

	template <typename T>
	T& Vec<T, 4>::B()
	{
		return m_vec_base[2];
	}

	template <typename T>
	T& Vec<T, 4>::W()
	{
		return m_vec_base[3];
	}

	template <typename T>
	T& Vec<T, 4>::A()
	{
		return m_vec_base[3];
	}

	template <typename T>
	Vec<T, 2>& Vec<T, 4>::XY()
	{
		return reinterpret_cast<Vec<T, 2>&>(*this);
	}

	template <typename T>
	Vec<T, 2>& Vec<T, 4>::RG()
	{
		return reinterpret_cast<Vec<T, 2>&>(*this);
	}

	template <typename T>
	Vec<T, 3>& Vec<T, 4>::XYZ()
	{
		return reinterpret_cast<Vec<T, 3>&>(*this);
	}

	template <typename T>
	Vec<T, 3>& Vec<T, 4>::RGB()
	{
		return reinterpret_cast<Vec<T, 3>&>(*this);
	}

	template <typename T>
	Vec<T, 4>& Vec<T, 4>::XYZW()
	{
		return *this;
	}

	template <typename T>
	Vec<T, 4>& Vec<T, 4>::RGBA()
	{
		return *this;
	}

	template <typename T>
	INFERAY_CONSTEXPR T Vec<T, 4>::X() const
	{
		return m_vec_base[0];
	}

	template <typename T>
	INFERAY_CONSTEXPR T Vec<T, 4>::R() const
	{
		return m_vec_base[0];
	}

	template <typename T>
	INFERAY_CONSTEXPR T Vec<T, 4>::Y() const
	{
		return m_vec_base[1];
	}

	template <typename T>
	INFERAY_CONSTEXPR T Vec<T, 4>::G() const
	{
		return m_vec_base[1];
	}

	template <typename T>
	INFERAY_CONSTEXPR T Vec<T, 4>::Z() const
	{
		return m_vec_base[2];
	}

	template <typename T>
	INFERAY_CONSTEXPR T Vec<T, 4>::B() const
	{
		return m_vec_base[2];
	}

	template <typename T>
	INFERAY_CONSTEXPR T Vec<T, 4>::W() const
	{
		return m_vec_base[3];
	}

	template <typename T>
	INFERAY_CONSTEXPR T Vec<T, 4>::A() const
	{
		return m_vec_base[3];
	}

	template <typename T>
	constexpr Vec<T, 2> Vec<T, 4>::XY() const
	{
		return Vec<T, 2>(X(), Y());
	}

	template <typename T>
	constexpr Vec<T, 2> Vec<T, 4>::RG() const
	{
		return Vec<T, 2>(R(), G());
	}

	template <typename T>
	constexpr Vec<T, 3> Vec<T, 4>::XYZ() const
	{
		return Vec<T, 3>(X(), Y(), Z());
	}

	template <typename T>
	constexpr Vec<T, 3> Vec<T, 4>::RGB() const
	{
		return Vec<T, 3>(R(), G(), B());
	}

	template <typename T>
	constexpr Vec<T, 4> Vec<T, 4>::XYZW() const
	{
		return *this;
	}

	template <typename T>
	constexpr Vec<T, 4> Vec<T, 4>::RGBA() const
	{
		return *this;
	}

	template <typename T>
	INFERAY_CONSTEXPR Vec<T, 4>& Vec<T, 4>::operator+=(const VecType& rhs)
	{
		m_vec_base += rhs.m_vec_base;
		return *this;
	}

	template <typename T>
	INFERAY_CONSTEXPR Vec<T, 4>& Vec<T, 4>::operator-=(const VecType& rhs)
	{
		m_vec_base -= rhs.m_vec_base;
		return *this;
	}

	template <typename T>
	INFERAY_CONSTEXPR Vec<T, 4>& Vec<T, 4>::operator*=(const VecType& rhs)
	{
		m_vec_base *= rhs.m_vec_base;
		return *this;
	}

	template <typename T>
	INFERAY_CONSTEXPR Vec<T, 4>& Vec<T, 4>::operator/=(const VecType& rhs)
	{
		m_vec_base /= rhs.m_vec_base;
		return *this;
	}

	template <typename T>
	INFERAY_CONSTEXPR Vec<T, 4> Vec<T, 4>::operator+(const VecType& rhs) const
	{
		return Vec(m_vec_base + rhs.m_vec_base);
	}

	template <typename T>
	INFERAY_CONSTEXPR Vec<T, 4> Vec<T, 4>::operator-(const VecType& rhs) const
	{
		return Vec(m_vec_base - rhs.m_vec_base);
	}

	template <typename T>
	INFERAY_CONSTEXPR Vec<T, 4> Vec<T, 4>::operator*(const VecType& rhs) const
	{
		return Vec(m_vec_base * rhs.m_vec_base);
	}

	template <typename T>
	INFERAY_CONSTEXPR Vec<T, 4> Vec<T, 4>::operator/(const VecType& rhs) const
	{
		return Vec(m_vec_base / rhs.m_vec_base);
	}

	template <typename T>
	INFERAY_CONSTEXPR typename Vec<T, 4>::LengthType Vec<T, 4>::Length() const
	{
		return m_vec_base.Length();
	}

	template <typename T>
	INFERAY_CONSTEXPR T Vec<T, 4>::Dot(const VecType& rhs) const
	{
		return m_vec_base.Dot(rhs.m_vec_base);
	}

	template <typename T>
	using Vec4 = Vec<T, 4>;
}
