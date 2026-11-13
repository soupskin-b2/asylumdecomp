// FMQuaternionTest.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

// FMVector4: fills the vector from four floats, or leaves it untouched for a null pointer.
struct FMVector4
{
	FLOAT x, y, z, w;
	FMVector4(const FLOAT* pData);
};

// @baa 0x0187da30
FMVector4::FMVector4(const FLOAT* pData)
{
	if (pData != NULL)
	{
		x = *pData++;
		y = *pData++;
		z = *pData++;
		w = *pData;
	}
}
