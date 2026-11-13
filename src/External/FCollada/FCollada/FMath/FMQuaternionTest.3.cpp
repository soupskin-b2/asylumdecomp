// FMQuaternionTest.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

// FMVector4's copy constructor.
struct FMVector4
{
	FLOAT x, y, z, w;
	FMVector4(const FMVector4& Other);
};

// @baa 0x01868d30
FMVector4::FMVector4(const FMVector4& Other)
	: x(Other.x)
	, y(Other.y)
	, z(Other.z)
	, w(Other.w)
{
}
