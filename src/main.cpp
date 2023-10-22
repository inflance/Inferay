#include <iostream>

#include "Inferay/Inferay.h"
#include <cassert>

#include "Inferay/Timer.hpp"

namespace inferay
{
	// TestVec1Vec1 default constructor
	void TestVec1DefaultConstructor()
	{
		Vec1<int> v;
		assert(v.X() == 0);
	}

	// TestVec1Vec1 constructor with a single value
	void TestVec1ValueConstructor()
	{
		Vec1<int> v(5);
		assert(v.X() == 5);
	}

	// TestVec1Vec1 constructor with a VecBaseType object
	void TestVec1VecBaseConstructor()
	{
		constexpr VecBase<int, 1> base{10};
		Vec1<int> v(base);
		assert(v.X() == 10);
	}

	// TestVec1Vec1 operator+=
	void TestVec1OperatorPlusEqual()
	{
		Vec1<int> v(5);
		constexpr Vec1<int> other(3);
		v += other;
		assert(v.X() == 8);
	}

	// TestVec1Vec1 operator-=
	void TestVec1OperatorMinusEqual()
	{
		Vec1<int> v(5);
		constexpr Vec1<int> other(3);
		v -= other;
		assert(v.X() == 2);
	}

	// TestVec1Vec1 operator*=
	void TestVec1OperatorTimesEqual()
	{
		Vec1<int> v(5);
		constexpr Vec1<int> other(3);
		v *= other;
		assert(v.X() == 15);
	}

	// TestVec1Vec1 operator/=
	void TestVec1OperatorDivideEqual()
	{
		Vec1<int> v(15);
		constexpr Vec1<int> other(3);
		v /= other;
		assert(v.X() == 5);
	}

	// TestVec1Vec1 operator+
	void TestVec1OperatorPlus()
	{
		constexpr Vec1<int> v(5);
		constexpr Vec1<int> other(3);
		Vec1<int> result = v + other;
		assert(result.X() == 8);
	}

	// TestVec1Vec1 operator-
	void TestVec1OperatorMinus()
	{
		constexpr Vec1<int> v(5);
		constexpr Vec1<int> other(3);
		Vec1<int> result = v - other;
		assert(result.X() == 2);
	}

	// TestVec1Vec1 operator*
	void TestVec1OperatorTimes()
	{
		constexpr Vec1<int> v(5);
		constexpr Vec1<int> other(3);
		constexpr Vec1<int> result = v * other;
		assert(result.X() == 15);
	}

	// TestVec1Vec1 operator/
	void TestVec1OperatorDivide()
	{
		constexpr Vec1<int> v(15);
		constexpr Vec1<int> other(3);
		constexpr Vec1<int> result = v / other;
		assert(result.X() == 5);
	}

	// TestVec1Vec1 Length()
	void TestVec1Length()
	{
		constexpr Vec1<int> v(3);
		assert(static_cast<int>(v.Length()) == 3);
	}

	// TestVec1Vec1 Dot()
	void TestVec1Dot()
	{
		constexpr Vec1<int> v(5);
		constexpr Vec1<int> other(3);
		assert(v.Dot(other) == 15);
	}

	// TestVec1Vec1 Size()
	void TestVec1Size()
	{
		constexpr Vec1<int> v(5);
		assert(v.Size() == 1);
	}

	// TestVec1Vec1 operator[]
	void TestVec1OperatorIndex()
	{
		constexpr Vec1<int> v(5);
		assert(v[0] == 5);
	}

	// TestVec1Vec1 Data()
	void TestVec1Data()
	{
		constexpr Vec1<int> v(5);
		const int* data = v.Data();
		assert(*data == 5);
	}

	// Test default constructor
	void TestVec2DefaultConstructor()
	{
		constexpr Vec2<int> v;
		assert(v.X() == 0);
		assert(v.Y() == 0);
	}

	// Test constructor with values
	void TestVec2ValueConstructor()
	{
		constexpr Vec2<int> v(5, 10);
		assert(v.X() == 5);
		assert(v.Y() == 10);
	}

	// Test constructor with a VecBaseType object
	void TestVec2VecBaseConstructor()
	{
		constexpr VecBase<int, 2> base{5, 10};
		constexpr Vec2<int> v(base);
		assert(v.X() == 5);
		assert(v.Y() == 10);
	}

	// Test operator+=
	void TestVec2OperatorPlusEqual()
	{
		Vec2<int> v(5, 10);
		constexpr Vec2<int> other(3, 2);
		v += other;
		assert(v.X() == 8);
		assert(v.Y() == 12);
	}

	// Test operator-=
	void TestVec2OperatorMinusEqual()
	{
		Vec2<int> v(5, 10);
		constexpr Vec2<int> other(3, 2);
		v -= other;
		assert(v.X() == 2);
		assert(v.Y() == 8);
	}

	// Test operator*=
	void TestVec2OperatorTimesEqual()
	{
		Vec2<int> v(5, 10);
		constexpr Vec2<int> other(3, 2);
		v *= other;
		assert(v.X() == 15);
		assert(v.Y() == 20);
	}

	// Test operator/=
	void TestVec2OperatorDivideEqual()
	{
		Vec2<int> v(15, 20);
		constexpr Vec2<int> other(3, 2);
		v /= other;
		assert(v.X() == 5);
		assert(v.Y() == 10);
	}

	// Test operator+
	void TestVec2OperatorPlus()
	{
		constexpr Vec2<int> v(5, 10);
		constexpr Vec2<int> other(3, 2);
		constexpr Vec2<int> result = v + other;
		assert(result.X() == 8);
		assert(result.Y() == 12);
	}

	// Test operator-
	void TestVec2OperatorMinus()
	{
		constexpr Vec2<int> v(5, 10);
		constexpr Vec2<int> other(3, 2);
		constexpr Vec2<int> result = v - other;
		assert(result.X() == 2);
		assert(result.Y() == 8);
	}

	// Test operator*
	void TestVec2OperatorTimes()
	{
		constexpr Vec2<int> v(5, 10);
		constexpr Vec2<int> other(3, 2);
		constexpr Vec2<int> result = v * other;
		assert(result.X() == 15);
		assert(result.Y() == 20);
	}

	// Test operator/
	void TestVec2OperatorDivide()
	{
		constexpr Vec2<int> v(15, 20);
		constexpr Vec2<int> other(3, 2);
		constexpr Vec2<int> result = v / other;
		assert(result.X() == 5);
		assert(result.Y() == 10);
	}

	// Test Length()
	void TestVec2Length()
	{
		constexpr Vec2<int> v(3, 4);
		assert(static_cast<int>(v.Length()) == 5);
	}

	// Test Dot()
	void TestVec2Dot()
	{
		constexpr Vec2<int> v(5, 10);
		constexpr Vec2<int> other(3, 2);
		assert(v.Dot(other) == 35);
	}

	// Test Size()
	void TestVec2Size()
	{
		constexpr Vec2<int> v(5, 10);
		assert(v.Size() == 2);
	}

	// Test operator[]
	void TestVec2OperatorIndex()
	{
		constexpr Vec2<int> v(5, 10);
		assert(v[0] == 5);
		assert(v[1] == 10);
	}

	// Test Data()
	void TestVec2Data()
	{
		constexpr Vec2<int> v(5, 10);
		const int* data = v.Data();
		assert(data[0] == 5);
		assert(data[1] == 10);
	}

	// Test default constructor
	void TestVec3DefaultConstructor()
	{
		constexpr Vec3<int> v;
		assert(v.X() == 0);
		assert(v.Y() == 0);
		assert(v.Z() == 0);
	}

	// Test constructor with values
	void TestVec3ValueConstructor()
	{
		constexpr Vec3<int> v(5, 10, 15);
		assert(v.X() == 5);
		assert(v.Y() == 10);
		assert(v.Z() == 15);

		assert(v.R() == 5);
		assert(v.G() == 10);
		assert(v.B() == 15);
	}

	// Test constructor with a VecBaseType object
	void TestVec3VecBaseConstructor()
	{
		constexpr VecBase<int, 3> base{5, 10, 15};
		Vec3<int> v(base);
		assert(v.X() == 5);
		assert(v.Y() == 10);
		assert(v.Z() == 15);
	}

	// Test operator+=
	void TestVec3OperatorPlusEqual()
	{
		Vec3<int> v(5, 10, 15);
		constexpr Vec3<int> other(3, 2, 1);
		v += other;
		assert(v.X() == 8);
		assert(v.Y() == 12);
		assert(v.Z() == 16);
	}

	// Test operator-=
	void TestVec3OperatorMinusEqual()
	{
		Vec3<int> v(5, 10, 15);
		constexpr Vec3<int> other(3, 2, 1);
		v -= other;
		assert(v.X() == 2);
		assert(v.Y() == 8);
		assert(v.Z() == 14);
	}

	// Test operator*=
	void TestVec3OperatorTimesEqual()
	{
		Vec3<int> v(5, 10, 15);
		constexpr Vec3<int> other(3, 2, 1);
		v *= other;
		assert(v.X() == 15);
		assert(v.Y() == 20);
		assert(v.Z() == 15);
	}

	// Test operator/=
	void TestVec3OperatorDivideEqual()
	{
		Vec3<int> v(15, 20, 15);
		constexpr Vec3<int> other(3, 2, 1);
		v /= other;
		assert(v.X() == 5);
		assert(v.Y() == 10);
		assert(v.Z() == 15);
	}

	// Test operator+
	void TestVec3OperatorPlus()
	{
		constexpr Vec3<int> v(5, 10, 15);
		constexpr Vec3<int> other(3, 2, 1);
		constexpr Vec3<int> result = v + other;
		assert(result.X() == 8);
		assert(result.Y() == 12);
		assert(result.Z() == 16);
	}

	// Test operator-
	void TestVec3OperatorMinus()
	{
		constexpr Vec3<int> v(5, 10, 15);
		constexpr Vec3<int> other(3, 2, 1);
		constexpr Vec3<int> result = v - other;
		assert(result.X() == 2);
		assert(result.Y() == 8);
		assert(result.Z() == 14);
	}

	// Test operator*
	void TestVec3OperatorTimes()
	{
		constexpr Vec3<int> v(5, 10, 15);
		constexpr Vec3<int> other(3, 2, 1);
		constexpr Vec3<int> result = v * other;
		assert(result.X() == 15);
		assert(result.Y() == 20);
		assert(result.Z() == 15);
	}

	// Test operator/
	void TestVec3OperatorDivide()
	{
		constexpr Vec3<int> v(15, 20, 15);
		constexpr Vec3<int> other(3, 2, 1);
		constexpr Vec3<int> result = v / other;
		assert(result.X() == 5);
		assert(result.Y() == 10);
		assert(result.Z() == 15);
	}

	// Test Length()
	void TestVec3Length()
	{
		constexpr Vec3<int> v(3, 4, 5);
		assert(static_cast<int>(v.Length()) == 7);
	}

	// Test Dot()
	void TestVec3Dot()
	{
		constexpr Vec3<int> v(5, 10, 15);
		constexpr Vec3<int> other(3, 2, 1);
		assert(v.Dot(other) == 50);
	}

	// Test Size()
	void TestVec3Size()
	{
		constexpr Vec3<int> v(5, 10, 15);
		assert(v.Size() == 3);
	}

	// Test operator[]
	void TestVec3OperatorIndex()
	{
		constexpr Vec3<int> v(5, 10, 15);
		assert(v[0] == 5);
		assert(v[1] == 10);
		assert(v[2] == 15);
	}

	// Test Data()
	void TestVec3Data()
	{
		constexpr Vec3<int> v(5, 10, 15);
		const int* data = v.Data();
		assert(data[0] == 5);
		assert(data[1] == 10);
		assert(data[2] == 15);
	}


	// Test default constructor
	void TestVec4DefaultConstructor()
	{
		constexpr Vec4<int> v;
		assert(v.X() == 0);
		assert(v.Y() == 0);
		assert(v.Z() == 0);
		assert(v.W() == 0);

		assert(v.R() == 0);
		assert(v.G() == 0);
		assert(v.B() == 0);
		assert(v.A() == 0);
	}

	// Test constructor with values
	void TestVec4ValueConstructor()
	{
		constexpr Vec4<int> v(5, 10, 15, 20);
		assert(v.X() == 5);
		assert(v.Y() == 10);
		assert(v.Z() == 15);
		assert(v.W() == 20);

		assert(v.R() == 5);
		assert(v.G() == 10);
		assert(v.B() == 15);
		assert(v.A() == 20);

		constexpr Vec2<int> vec2 = v.RG();
		assert(vec2.R() == 5);
		assert(vec2.G() == 10);
	}

	// Test constructor with a VecBaseType object
	void TestVec4VecBaseConstructor()
	{
		constexpr VecBase<int, 4> base{5, 10, 15, 20};
		Vec4<int> v(base);
		assert(v.X() == 5);
		assert(v.Y() == 10);
		assert(v.Z() == 15);
		assert(v.W() == 20);
	}

	// Test operator+=
	void TestVec4OperatorPlusEqual()
	{
		Vec4<int> v(5, 10, 15, 20);
		constexpr Vec4<int> other(3, 2, 1, 4);
		v += other;
		assert(v.X() == 8);
		assert(v.Y() == 12);
		assert(v.Z() == 16);
		assert(v.W() == 24);
	}

	// Test operator-=
	void TestVec4OperatorMinusEqual()
	{
		Vec4<int> v(5, 10, 15, 20);
		constexpr Vec4<int> other(3, 2, 1, 4);
		v -= other;
		assert(v.X() == 2);
		assert(v.Y() == 8);
		assert(v.Z() == 14);
		assert(v.W() == 16);
	}

	// Test operator*=
	void TestVec4OperatorTimesEqual()
	{
		Vec4<int> v(5, 10, 15, 20);
		constexpr Vec4<int> other(3, 2, 1, 4);
		v *= other;
		assert(v.X() == 15);
		assert(v.Y() == 20);
		assert(v.Z() == 15);
		assert(v.W() == 80);
	}

	// Test operator/=
	void TestVec4OperatorDivideEqual()
	{
		Vec4<int> v(15, 20, 15, 80);
		constexpr Vec4<int> other(3, 2, 1, 4);
		v /= other;
		assert(v.X() == 5);
		assert(v.Y() == 10);
		assert(v.Z() == 15);
		assert(v.W() == 20);
	}

	// Test operator+
	void TestVec4OperatorPlus()
	{
		constexpr Vec4<int> v(5, 10, 15, 20);
		constexpr Vec4<int> other(3, 2, 1, 4);
		Vec4<int> result = v + other;
		assert(result.X() == 8);
		assert(result.Y() == 12);
		assert(result.Z() == 16);
		assert(result.W() == 24);
	}

	// Test operator-
	void TestVec4OperatorMinus()
	{
		constexpr Vec4<int> v(5, 10, 15, 20);
		constexpr Vec4<int> other(3, 2, 1, 4);
		constexpr Vec4<int> result = v - other;
		assert(result.X() == 2);
		assert(result.Y() == 8);
		assert(result.Z() == 14);
		assert(result.W() == 16);
	}

	// Test operator*
	void TestVec4OperatorTimes()
	{
		constexpr Vec4<int> v(5, 10, 15, 20);
		constexpr Vec4<int> other(3, 2, 1, 4);
		Vec4<int> result = v * other;
		assert(result.X() == 15);
		assert(result.Y() == 20);
		assert(result.Z() == 15);
		assert(result.W() == 80);
	}

	// Test operator/
	void TestVec4OperatorDivide()
	{
		constexpr Vec4<int> v(15, 20, 15, 80);
		constexpr Vec4<int> other(3, 2, 1, 4);
		Vec4<int> result = v / other;
		assert(result.X() == 5);
		assert(result.Y() == 10);
		assert(result.Z() == 15);
		assert(result.W() == 20);
	}

	// Test Length()
	void TestVec4Length()
	{
		constexpr Vec4<int> v(3, 4, 5, 6);
		assert(static_cast<int>(v.Length()) == 9);
	}

	// Test Dot()
	void TestVec4Dot()
	{
		constexpr Vec4<int> v(5, 10, 15, 20);
		constexpr Vec4<int> other(3, 2, 1, 4);
		assert(v.Dot(other) == 130);
	}

	// Test Size()
	void TestVec4Size()
	{
		constexpr Vec4<int> v(5, 10, 15, 20);
		assert(v.Size() == 4);
	}

	// Test operator[]
	void TestVec4OperatorIndex()
	{
		constexpr Vec4<int> v(5, 10, 15, 20);
		assert(v[0] == 5);
		assert(v[1] == 10);
		assert(v[2] == 15);
		assert(v[3] == 20);
	}

	// Test Data()
	void TestVec4Data()
	{
		constexpr Vec4<int> v(5, 10, 15, 20);
		const int* data = v.Data();
		assert(data[0] == 5);
		assert(data[1] == 10);
		assert(data[2] == 15);
		assert(data[3] == 20);
	}
} // namespace inferay

int main(int argc, char** argv)
{
	using namespace inferay;
	Inferay::Timer timer{};
	timer.Start();
	TestVec1DefaultConstructor();
	TestVec1ValueConstructor();
	TestVec1VecBaseConstructor();
	TestVec1OperatorPlusEqual();
	TestVec1OperatorMinusEqual();
	TestVec1OperatorTimesEqual();
	TestVec1OperatorDivideEqual();
	TestVec1OperatorPlus();
	TestVec1OperatorMinus();
	TestVec1OperatorTimes();
	TestVec1OperatorDivide();
	TestVec1Length();
	TestVec1Dot();
	TestVec1Size();
	TestVec1OperatorIndex();
	TestVec1Data();

	TestVec2DefaultConstructor();
	TestVec2ValueConstructor();
	TestVec2VecBaseConstructor();
	TestVec2OperatorPlusEqual();
	TestVec2OperatorMinusEqual();
	TestVec2OperatorTimesEqual();
	TestVec2OperatorDivideEqual();
	TestVec2OperatorPlus();
	TestVec2OperatorMinus();
	TestVec2OperatorTimes();
	TestVec2OperatorDivide();
	TestVec2Length();
	TestVec2Dot();
	TestVec2Size();
	TestVec2OperatorIndex();
	TestVec2Data();

	TestVec3DefaultConstructor();
	TestVec3ValueConstructor();
	TestVec3VecBaseConstructor();
	TestVec3OperatorPlusEqual();
	TestVec3OperatorMinusEqual();
	TestVec3OperatorTimesEqual();
	TestVec3OperatorDivideEqual();
	TestVec3OperatorPlus();
	TestVec3OperatorMinus();
	TestVec3OperatorTimes();
	TestVec3OperatorDivide();
	TestVec3Length();
	TestVec3Dot();
	TestVec3Size();
	TestVec3OperatorIndex();
	TestVec3Data();

	TestVec4DefaultConstructor();
	TestVec4ValueConstructor();
	TestVec4VecBaseConstructor();
	TestVec4OperatorPlusEqual();
	TestVec4OperatorMinusEqual();
	TestVec4OperatorTimesEqual();
	TestVec4OperatorDivideEqual();
	TestVec4OperatorPlus();
	TestVec4OperatorMinus();
	TestVec4OperatorTimes();
	TestVec4OperatorDivide();
	TestVec4Length();
	TestVec4Dot();
	TestVec4Size();
	TestVec4OperatorIndex();
	TestVec4Data();
	timer.Stop();
	std::cout << timer.ElapsedSeconds() << std::endl;
	std::cout << timer.ElapsedMilliseconds() << std::endl;
}
