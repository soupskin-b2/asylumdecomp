// UnrealEd_1b40000.cpp: 9 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Core.h"

// A 24-byte payload of three doubles, copied member by member.
struct FDoubleTri
{
	double X;
	double Y;
	double Z;
};

// The payload lives at 0x18 in the receiving object; declare the field there.
struct sub_01b4f5e0_obj
{
	char pad[0x18];
	double D01b4f5e0_X;
	double D01b4f5e0_Y;
	double D01b4f5e0_Z;

	void sub_01b4f5e0(const FDoubleTri* Src);
};

// @baa 0x01b4f5e0
void sub_01b4f5e0_obj::sub_01b4f5e0(const FDoubleTri* Src)
{
	D01b4f5e0_X = Src->X;
	D01b4f5e0_Y = Src->Y;
	D01b4f5e0_Z = Src->Z;
}

struct FDPoint
{
    double X;
    double Y;
    double Z;

    FDPoint(double InX, double InY, double InZ); // 0x01b45450
};

// @baa 0x01b45450
FDPoint::FDPoint(double InX, double InY, double InZ)
    : X(InX), Y(InY), Z(InZ)
{
}

// 0x01b45400
// Fluent setter: three-word setter that returns the object.
struct SDataTriple {
    DWORD Word0;
    DWORD Word1;
    DWORD Word2;
    SDataTriple* sub_01b45400(DWORD a, DWORD b, DWORD c);
};

// @baa 0x01b45400
SDataTriple* SDataTriple::sub_01b45400(DWORD a, DWORD b, DWORD c)
{
    Word0 = a;
    Word1 = b;
    Word2 = c;
    return this;
}

void SDataTriple_ExternalCaller(SDataTriple* obj, DWORD x, DWORD y, DWORD z)
{
    obj->sub_01b45400(x, y, z);
}

struct D3
{
    double x;
    double y;
    double z;

    D3 *Set(const D3 *Other)
    {
        x = Other->x;
        y = Other->y;
        z = Other->z;
        return this;
    }
};

static D3 g_target;
static const D3 g_source;
// @baa 0x01b4fbf0
extern "C" int sub_01b4fbf0_driver()
{
    g_target.Set(&g_source);
    return 0;
}

struct FDPoint_01b4fec0 {
    double X;
    double Y;
    double Z;

    FDPoint_01b4fec0& operator=(const FDPoint_01b4fec0& In);
};

// @baa 0x01b4fec0
FDPoint_01b4fec0& FDPoint_01b4fec0::operator=(const FDPoint_01b4fec0& In)
{
    X = In.X;
    Y = In.Y;
    Z = In.Z;

    return *this;
}

struct Dbl3
{
	double X;
	double Y;
	double Z;

	Dbl3() {}

	Dbl3(double A, double B, double C)
	{
		X = A;
		Y = B;
		Z = C;
	}
};

// @baa 0x01b41b30
extern "C" void KeepDbl3()
{
	Dbl3 Tmp(1.0, 2.0, 3.0);
	Tmp.X = 0.0;
}

struct V2_01b4fee0
{
	double X;
	double Y;
	double Z;

	// Sets the three components, returning this.
	V2_01b4fee0* SetComponents(double InX, double InY, double InZ)
	{
		X = InX;
		Y = InY;
		Z = InZ;
		return this;
	}
};

// @baa 0x01b4fee0
void sub_01b4fee0_caller(V2_01b4fee0& Dest, double X, double Y, double Z)
{
	V2_01b4fee0* Result = Dest.SetComponents(X, Y, Z);
	Dest.X += Result->X;
}

// Copy-assignment for a 24-byte triple-double value (0x01b431a0)
struct FDouble3_
{
	double X;
	double Y;
	double Z;

	FDouble3_& operator=(const FDouble3_& Source);
};

// @baa 0x01b431a0
FDouble3_& FDouble3_::operator=(const FDouble3_& Source)
{
	X = Source.X;
	Y = Source.Y;
	Z = Source.Z;
	return *this;
}

// @baa 0x01b49d50
extern "C" double sub_01b49d50(const double* First, const double* Second)
{
	return (*First > *Second) ? *First : *Second;
}
