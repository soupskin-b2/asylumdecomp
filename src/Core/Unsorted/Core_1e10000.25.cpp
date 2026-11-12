// Core_1e10000.cpp: 9 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

extern unsigned char __cdecl sub_0059f5f0(int Index, int* State);
extern int g_025ebeec;
extern unsigned char g_026e1798;
// @baa 0x01e15780
void sub_01e15780()
{
    g_026e1798 = sub_0059f5f0(0xfa0, &g_025ebeec);
}

extern "C" int __cdecl sub_01a37872(int (*fn)(void));
extern "C" int sub_01e27590(void);
struct S_005ee0b0
{
	void sub_005ee0b0(const wchar_t* Name);
};

extern S_005ee0b0 g_026dfd10;
// @baa 0x01e11fc0
void sub_01e11fc0(void)
{
	g_026dfd10.sub_005ee0b0(0);
	sub_01a37872(sub_01e27590);
}

extern float g_025eabc0;
extern float g_026e139c;
// @baa 0x01e12e00
void sub_01e12e00(void)
{
    g_026e139c = 1.0f / g_025eabc0;
}

extern float g_025ec138;
extern float g_026e1c2c;
// @baa 0x01e15920
void sub_01e15920(void)
{
	g_026e1c2c = 1.0f / g_025ec138;
}

extern float g_025ec238;
extern float g_026e1dac;
// @baa 0x01e15a30
void sub_01e15a30(void)
{
	g_026e1dac = 1.0f / g_025ec238;
}

extern float g_025ec378;
extern float g_026e213c;
// @baa 0x01e15bc0
void sub_01e15bc0(void)
{
  g_026e213c = 1.0f / g_025ec378;
}

extern float g_025ec470;
extern float g_026e2380;
// @baa 0x01e15d50
void sub_01e15d50(void)
{
    g_026e2380 = 1.0f / g_025ec470;
}

extern float g_025ef890;
extern float g_026e308c;
// @baa 0x01e1f290
void sub_01e1f290(void)
{
	g_026e308c = 1.0f / g_025ef890;
}

/* FQuat's component constructor (UnMath.h), which the headers lack. */
struct FQuat_ : public FQuat
{
	FORCEINLINE FQuat_(FLOAT InX, FLOAT InY, FLOAT InZ, FLOAT InA) { X = InX; Y = InY; Z = InZ; W = InA; }
};

/* FBoneAtom's constructor (UnMath.h), which the headers lack. */
struct FBoneAtom_ : public FBoneAtom
{
	FORCEINLINE FBoneAtom_(const FQuat& InRotation, const FVector& InTranslation, FLOAT InScale = 1.f)
	{
		Rotation = InRotation;
		Translation = InTranslation;
		Scale = InScale;
	}
};

/* RAnimNode_Bat.cpp: the bat's baked flap animation, 15 keys for each of its 5 bones. */
#define BAT_NUM_KEYS 15
#define BAT_NUM_BONES 5
// @baa 0x01e12e20
static FBoneAtom_ GBatBoneKeys[BAT_NUM_BONES * BAT_NUM_KEYS] =
{
	FBoneAtom_(FQuat_(0.707107f, -0.707107f, 0.f, 0.000173f), FVector(-0.570946f, 6.474816f, 17.696571f), 0.935104f),
	FBoneAtom_(FQuat_(0.707107f, -0.707107f, 0.f, 0.000173f), FVector(-0.570946f, 6.474816f, 20.512867f), 0.935104f),
	FBoneAtom_(FQuat_(0.707107f, -0.707107f, 0.f, 0.000173f), FVector(-0.570946f, 6.474816f, 25.74313f), 0.935104f),
	FBoneAtom_(FQuat_(0.707107f, -0.707107f, 0.f, 0.000173f), FVector(-0.570946f, 6.474816f, 28.559425f), 0.935104f),
	FBoneAtom_(FQuat_(0.707107f, -0.707107f, 0.f, 0.000173f), FVector(-0.570946f, 6.474816f, 26.862104f), 0.935104f),
	FBoneAtom_(FQuat_(0.707107f, -0.707107f, 0.f, 0.000173f), FVector(-0.570946f, 6.474816f, 23.127998f), 0.935104f),
	FBoneAtom_(FQuat_(0.707107f, -0.707107f, 0.f, 0.000173f), FVector(-0.570946f, 6.474816f, 19.393892f), 0.935104f),
	FBoneAtom_(FQuat_(0.707107f, -0.707107f, 0.f, 0.000173f), FVector(-0.570946f, 6.474816f, 17.696571f), 0.935104f),
	FBoneAtom_(FQuat_(0.707107f, -0.707107f, 0.f, 0.000173f), FVector(-0.570946f, 6.474816f, 20.512867f), 0.935104f),
	FBoneAtom_(FQuat_(0.707107f, -0.707107f, 0.f, 0.000173f), FVector(-0.570946f, 6.474816f, 25.743132f), 0.935104f),
	FBoneAtom_(FQuat_(0.707107f, -0.707107f, 0.f, 0.000173f), FVector(-0.570946f, 6.474816f, 28.559425f), 0.935104f),
	FBoneAtom_(FQuat_(0.707107f, -0.707107f, 0.f, 0.000173f), FVector(-0.570946f, 6.474816f, 26.8621f), 0.935104f),
	FBoneAtom_(FQuat_(0.707107f, -0.707107f, 0.f, 0.000173f), FVector(-0.570946f, 6.474816f, 23.127998f), 0.935104f),
	FBoneAtom_(FQuat_(0.707107f, -0.707107f, 0.f, 0.000173f), FVector(-0.570946f, 6.474816f, 19.393892f), 0.935104f),
	FBoneAtom_(FQuat_(0.707107f, -0.707107f, 0.f, 0.000173f), FVector(-0.570946f, 6.474816f, 17.696571f), 0.935104f),
	FBoneAtom_(FQuat_(0.f, 0.764747f, -4.3e-05f, 0.644331f), FVector(-14.26543f, -2.037212f, 4.134248f), 1.080585f),
	FBoneAtom_(FQuat_(0.f, 0.991275f, -4.3e-05f, 0.13181f), FVector(-14.26543f, -2.037212f, 4.134248f), 1.080585f),
	FBoneAtom_(FQuat_(-4.3e-05f, 0.928253f, -4.3e-05f, -0.37195f), FVector(-14.26543f, -2.037212f, 4.134248f), 1.080585f),
	FBoneAtom_(FQuat_(-4.3e-05f, 0.791622f, -4.3e-05f, -0.611012f), FVector(-14.26543f, -2.037212f, 4.134248f), 1.080585f),
	FBoneAtom_(FQuat_(0.f, 0.987842f, -4.3e-05f, 0.155461f), FVector(-14.26543f, -2.037212f, 4.134248f), 1.080585f),
	FBoneAtom_(FQuat_(0.f, 0.900406f, -4.3e-05f, 0.43505f), FVector(-14.26543f, -2.037212f, 4.134248f), 1.080585f),
	FBoneAtom_(FQuat_(0.f, 0.804938f, -4.3e-05f, 0.593359f), FVector(-14.26543f, -2.037212f, 4.134248f), 1.080585f),
	FBoneAtom_(FQuat_(0.f, 0.764747f, -4.3e-05f, 0.644331f), FVector(-14.26543f, -2.037212f, 4.134248f), 1.080585f),
	FBoneAtom_(FQuat_(0.f, 0.938262f, -4.3e-05f, 0.345925f), FVector(-14.26543f, -2.037212f, 4.134248f), 1.080585f),
	FBoneAtom_(FQuat_(-4.3e-05f, 0.952556f, -4.3e-05f, -0.304362f), FVector(-14.26543f, -2.037212f, 4.134248f), 1.080585f),
	FBoneAtom_(FQuat_(-4.3e-05f, 0.791622f, -4.3e-05f, -0.611012f), FVector(-14.26543f, -2.037212f, 4.134248f), 1.080585f),
	FBoneAtom_(FQuat_(0.f, 0.900969f, -4.3e-05f, -0.433884f), FVector(-14.26543f, -2.037212f, 4.134248f), 1.080585f),
	FBoneAtom_(FQuat_(0.f, 0.99975f, -4.3e-05f, 0.022357f), FVector(-14.26543f, -2.037212f, 4.134248f), 1.080585f),
	FBoneAtom_(FQuat_(0.f, 0.881301f, -4.3e-05f, 0.472555f), FVector(-14.26543f, -2.037212f, 4.134248f), 1.080585f),
	FBoneAtom_(FQuat_(0.f, 0.764747f, -4.3e-05f, 0.644331f), FVector(-14.26543f, -2.037212f, 4.134248f), 1.080585f),
	FBoneAtom_(FQuat_(0.f, -0.461766f, 0.f, -0.887002f), FVector(68.283905f, -19.933525f, 3.498363f), 1.f),
	FBoneAtom_(FQuat_(0.f, 0.240874f, 0.f, -0.970556f), FVector(56.243725f, -19.933525f, 4.779943f), 1.f),
	FBoneAtom_(FQuat_(0.f, 0.211008f, 0.f, -0.977484f), FVector(61.34529f, -19.933529f, -4.288605f), 1.f),
	FBoneAtom_(FQuat_(0.f, 0.087139f, 0.f, -0.996196f), FVector(67.63725f, -19.933525f, -1.454319f), 1.f),
	FBoneAtom_(FQuat_(0.f, 0.808384f, 0.f, 0.588655f), FVector(56.600235f, -19.933521f, 5.245433f), 1.f),
	FBoneAtom_(FQuat_(0.f, 0.769403f, 0.f, 0.638763f), FVector(63.56693f, -19.933523f, 7.428615f), 1.f),
	FBoneAtom_(FQuat_(-4.3e-05f, -0.653265f, 0.f, -0.757129f), FVector(67.52782f, -19.933533f, 4.904844f), 1.f),
	FBoneAtom_(FQuat_(0.f, -0.461765f, 0.f, -0.887002f), FVector(68.283905f, -19.933525f, 3.498363f), 1.f),
	FBoneAtom_(FQuat_(0.f, 0.06871f, 0.f, -0.997637f), FVector(60.99594f, -19.933533f, 7.553015f), 1.f),
	FBoneAtom_(FQuat_(0.f, 0.082953f, 0.f, -0.996553f), FVector(59.48722f, -19.933527f, -3.898485f), 1.f),
	FBoneAtom_(FQuat_(0.f, 0.087139f, 0.f, -0.996196f), FVector(67.63725f, -19.933525f, -1.454319f), 1.f),
	FBoneAtom_(FQuat_(0.f, -0.283041f, 0.f, -0.959108f), FVector(63.148933f, -19.933542f, -4.211645f), 1.f),
	FBoneAtom_(FQuat_(0.f, -0.38943f, 0.f, -0.921056f), FVector(55.29706f, -19.93353f, 2.352531f), 1.f),
	FBoneAtom_(FQuat_(0.f, -0.445235f, 0.f, -0.895414f), FVector(64.63292f, -19.933533f, 7.100352f), 1.f),
	FBoneAtom_(FQuat_(0.f, -0.461766f, 0.f, -0.887002f), FVector(68.283905f, -19.933525f, 3.498363f), 1.f),
	FBoneAtom_(FQuat_(0.644288f, 0.f, 0.764783f, -0.f), FVector(14.31401f, -2.037213f, 4.134252f), 1.080585f),
	FBoneAtom_(FQuat_(0.131767f, 0.f, 0.991281f, -0.f), FVector(14.31401f, -2.037213f, 4.134252f), 1.080585f),
	FBoneAtom_(FQuat_(-0.371993f, 0.f, 0.928235f, 4.3e-05f), FVector(14.31401f, -2.037213f, 4.134252f), 1.080585f),
	FBoneAtom_(FQuat_(-0.611055f, 0.f, 0.791588f, 4.3e-05f), FVector(14.31401f, -2.037213f, 4.134252f), 1.080585f),
	FBoneAtom_(FQuat_(0.155418f, 0.f, 0.987849f, -0.f), FVector(14.31401f, -2.037213f, 4.134252f), 1.080585f),
	FBoneAtom_(FQuat_(0.435006f, 0.f, 0.900427f, -0.f), FVector(14.31401f, -2.037213f, 4.134252f), 1.080585f),
	FBoneAtom_(FQuat_(0.593316f, 0.f, 0.804969f, -0.f), FVector(14.31401f, -2.037213f, 4.134252f), 1.080585f),
	FBoneAtom_(FQuat_(0.644288f, 0.f, 0.764783f, -0.f), FVector(14.31401f, -2.037213f, 4.134252f), 1.080585f),
	FBoneAtom_(FQuat_(0.345882f, 0.f, 0.938278f, -0.f), FVector(14.31401f, -2.037213f, 4.134252f), 1.080585f),
	FBoneAtom_(FQuat_(-0.304406f, 0.f, 0.952542f, 4.3e-05f), FVector(14.31401f, -2.037213f, 4.134252f), 1.080585f),
	FBoneAtom_(FQuat_(-0.611055f, 0.f, 0.791588f, 4.3e-05f), FVector(14.31401f, -2.037213f, 4.134252f), 1.080585f),
	FBoneAtom_(FQuat_(-0.433927f, 0.f, 0.900948f, -0.f), FVector(14.31401f, -2.037213f, 4.134252f), 1.080585f),
	FBoneAtom_(FQuat_(0.022314f, 0.f, 0.999751f, -0.f), FVector(14.31401f, -2.037213f, 4.134252f), 1.080585f),
	FBoneAtom_(FQuat_(0.472512f, 0.f, 0.881324f, -0.f), FVector(14.31401f, -2.037213f, 4.134252f), 1.080585f),
	FBoneAtom_(FQuat_(0.644288f, 0.f, 0.764783f, -0.f), FVector(14.31401f, -2.037213f, 4.134252f), 1.080585f),
	FBoneAtom_(FQuat_(-4.3e-05f, -0.461766f, 0.f, -0.887002f), FVector(-68.2839f, 19.933527f, -3.498366f), 1.f),
	FBoneAtom_(FQuat_(0.f, 0.240874f, 0.f, -0.970556f), FVector(-56.243706f, 19.933527f, -4.779932f), 1.f),
	FBoneAtom_(FQuat_(0.f, 0.211008f, 0.f, -0.977484f), FVector(-61.345303f, 19.93353f, 4.288614f), 1.f),
	FBoneAtom_(FQuat_(-4.3e-05f, 0.087139f, 0.f, -0.996196f), FVector(-67.637245f, 19.933529f, 1.454317f), 1.f),
	FBoneAtom_(FQuat_(0.f, 0.808384f, -4.3e-05f, 0.588655f), FVector(-56.600227f, 19.933529f, -5.24543f), 1.f),
	FBoneAtom_(FQuat_(0.f, 0.769403f, 0.f, 0.638763f), FVector(-63.566914f, 19.933527f, -7.428603f), 1.f),
	FBoneAtom_(FQuat_(-4.3e-05f, -0.653265f, 0.f, -0.757129f), FVector(-67.52782f, 19.933529f, -4.904842f), 1.f),
	FBoneAtom_(FQuat_(-4.3e-05f, -0.461765f, 0.f, -0.887002f), FVector(-68.2839f, 19.933527f, -3.498366f), 1.f),
	FBoneAtom_(FQuat_(0.f, 0.06871f, 0.f, -0.997637f), FVector(-60.99595f, 19.933521f, -7.553019f), 1.f),
	FBoneAtom_(FQuat_(-0.f, 0.082953f, 0.f, -0.996553f), FVector(-59.487225f, 19.933529f, 3.898496f), 1.f),
	FBoneAtom_(FQuat_(-4.3e-05f, 0.087139f, 0.f, -0.996196f), FVector(-67.637245f, 19.933529f, 1.454317f), 1.f),
	FBoneAtom_(FQuat_(-4.3e-05f, -0.283041f, 0.f, -0.959108f), FVector(-63.148937f, 19.933527f, 4.211643f), 1.f),
	FBoneAtom_(FQuat_(0.f, -0.38943f, 0.f, -0.921056f), FVector(-55.29707f, 19.933529f, -2.352526f), 1.f),
	FBoneAtom_(FQuat_(0.f, -0.445235f, 0.f, -0.895414f), FVector(-64.632904f, 19.933527f, -7.100353f), 1.f),
	FBoneAtom_(FQuat_(-4.3e-05f, -0.461766f, 0.f, -0.887002f), FVector(-68.2839f, 19.933527f, -3.498366f), 1.f),
};
