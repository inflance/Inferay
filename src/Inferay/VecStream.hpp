#pragma once

#include <ostream>

#include "Vec.hpp"

template <typename T>
std::ofstream& operator<<(std::ofstream& os, const inferay::Vec1<T>& vec)
{
	os << vec.X();
	return os;
}

template <typename T>
std::ofstream& operator<<(std::ofstream& os, const inferay::Vec2<T>& vec)
{
	os << vec.X() << " " << vec.Y();
	return os;
}

template <typename T>
std::ofstream& operator<<(std::ofstream& os, const inferay::Vec3<T>& vec)
{
	os << vec.X() << " " << vec.Y() << " " << vec.Z();
	return os;
}

template <typename T>
std::ofstream& operator<<(std::ofstream& os, const inferay::Vec4<T>& vec)
{
	os << vec.X() << " " << vec.Y() << " " << vec.Z() << " " << vec.W();
	return os;
}

template <typename T>
std::ostream& operator<<(std::ostream& os, const inferay::Vec1<T>& vec)
{
	os << vec.X();
	return os;
}

template <typename T>
std::ostream& operator<<(std::ostream& os, const inferay::Vec2<T>& vec)
{
	os << vec.X() << " " << vec.Y();
	return os;
}

template <typename T>
std::ostream& operator<<(std::ostream& os, const inferay::Vec3<T>& vec)
{
	os << vec.X() << " " << vec.Y() << " " << vec.Z();
	return os;
}

template <typename T>
std::ostream& operator<<(std::ostream& os, const inferay::Vec4<T>& vec)
{
	os << vec.X() << " " << vec.Y() << " " << vec.Z() << " " << vec.W();
	return os;
}
