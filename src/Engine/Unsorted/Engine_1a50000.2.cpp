// Engine_1a50000.cpp: 2 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct sub_01a5f670 {
    float A;
    float B;
    float C;
    sub_01a5f670* Init(float X, float Y, float Z);
    /* 0x01a5f670 */
};

// @baa 0x01a5f670
sub_01a5f670* sub_01a5f670::Init(float X, float Y, float Z)
{
    A = X;
    B = Y;
    C = Z;
    return this;
}

// A float triple, cleared to zero (written back to front).
struct FFloatTriple_
{
	FLOAT Z, Y, X;
	FFloatTriple_();
};

// @baa 0x01a5f660
FFloatTriple_::FFloatTriple_()
{
	X = 0.f;
	Y = 0.f;
	Z = 0.f;
}
