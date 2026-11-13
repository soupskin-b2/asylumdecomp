// FMQuaternionTest.cpp: 2 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

// @baa 0x0184b490
// FMMatrix44: 2x2 determinant of four floats (a*d - b*c).
float sub_0184b490(float a, float b, float c, float d)
{
	return a * d - b * c;
}

// FMVector4: the vector's length, sqrt(x*x + y*y + z*z + w*w).
struct FMVector4
{
	FLOAT x, y, z, w;
	FLOAT Length();
};

// @baa 0x01868d00
FLOAT FMVector4::Length()
{
	return x * x + y * y + z * z + w * w;
}
