#pragma once

#include "Macro.hpp"
#include "Vec1.hpp"
#include "Vec2.hpp"
#include "Vec3.hpp"
#include "Vec4.hpp"

namespace inferay
{
	using Vec1f = Vec1<float>;
	using Vec2f = Vec2<float>;
	using Vec3f = Vec3<float>;
	using Vec4f = Vec4<float>;

	using Vec1d = Vec1<double>;
	using Vec2d = Vec2<double>;
	using Vec3d = Vec3<double>;
	using Vec4d = Vec4<double>;

	using Vec1i = Vec1<int>;
	using Vec2i = Vec2<int>;
	using Vec3i = Vec3<int>;
	using Vec4i = Vec4<int>;

	using Vec1u = Vec1<unsigned int>;
	using Vec2u = Vec2<unsigned int>;
	using Vec3u = Vec3<unsigned int>;
	using Vec4u = Vec4<unsigned int>;

	using Vec1c = Vec1<char>;
	using Vec2c = Vec2<char>;
	using Vec3c = Vec3<char>;
	using Vec4c = Vec4<char>;

	using Vec1uc = Vec1<unsigned char>;
	using Vec2uc = Vec2<unsigned char>;
	using Vec3uc = Vec3<unsigned char>;
	using Vec4uc = Vec4<unsigned char>;

	using Vec1b = Vec1<bool>;
	using Vec2b = Vec2<bool>;
	using Vec3b = Vec3<bool>;
	using Vec4b = Vec4<bool>;
}
