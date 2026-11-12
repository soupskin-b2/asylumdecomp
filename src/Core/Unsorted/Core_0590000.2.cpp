// Core_0590000.cpp (part 2 of 4): 35 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

extern Native g_02688ca0[];
struct UObject_ : public UObject {
    void sub_005996a0(FFrame& Stack, RESULT_DECL);
};

// @baa 0x005996a0
void UObject_::sub_005996a0(FFrame& Stack, RESULT_DECL)
{
    BYTE B = *Stack.Code++;
    (this->*g_02688ca0[B])(Stack, Result);
}

// @baa 0x00599e30
void UObject::execIsPendingKill(FFrame& Stack, RESULT_DECL)
{
    P_FINISH;
    *(UBOOL*)Result = this->vf_038();
}

// Returns a random unit vector (UnMath.cpp).
FVector VRand();
// @baa 0x00596a30
void UObject::execVRand( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	*(FVector*)Result = VRand();
}

// @baa 0x00599c60
void UObject::execScriptTrace( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
}

// @baa 0x00599c90
void UObject::execDebugBreak( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
}

// @baa 0x0059ef60
void UObject::execDumpStateStack( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
}

// @baa 0x00591d50
void UObject::execComplement_PreInt(FFrame& Stack, RESULT_DECL)
{
    P_GET_INT(A);
    P_FINISH;
    *(INT*)Result = ~A;
}

// @baa 0x00591e40
void UObject::execSubtract_PreInt(FFrame& Stack, RESULT_DECL)
{
    P_GET_INT(A);
    P_FINISH;
    *(INT*)Result = -A;
}

// @baa 0x005975d0
void UObject::execSubtract_RotatorRotator(FFrame& Stack, RESULT_DECL)
{
    P_GET_STRUCT(FRotator, A);
    P_GET_STRUCT(FRotator, B);
    P_FINISH;
    FRotator Difference = {A.Pitch - B.Pitch, A.Yaw - B.Yaw, A.Roll - B.Roll};
    *(FRotator*)Result = Difference;
}

struct FRotationTranslationMatrix : FMatrix
{
    FRotationTranslationMatrix(const FRotator& Rotation, const FVector& Origin);
};

// @baa 0x0059eb20
void UObject::execMakeRotationTranslationMatrix(FFrame& Stack, RESULT_DECL)
{
    P_GET_STRUCT(FVector, Translation);
    P_GET_STRUCT(FRotator, Rotation);
    P_FINISH;
    *(FMatrix*)Result = FRotationTranslationMatrix(Rotation, Translation);
}

// @baa 0x00592d50
void UObject::execMin(FFrame& Stack, RESULT_DECL)
{
    P_GET_INT(A);
    P_GET_INT(B);
    P_FINISH;
    *(INT*)Result = A <= B ? A : B;
}

// @baa 0x00592df0
void UObject::execMax(FFrame& Stack, RESULT_DECL)
{
    P_GET_INT(A);
    P_GET_INT(B);
    P_FINISH;
    *(INT*)Result = A >= B ? A : B;
}

// @baa 0x00597530
void UObject::execAdd_RotatorRotator(FFrame& Stack, RESULT_DECL)
{
    P_GET_STRUCT(FRotator, A);
    P_GET_STRUCT(FRotator, B);
    P_FINISH;
    FRotator Sum = {A.Pitch + B.Pitch, B.Yaw + A.Yaw, B.Roll + A.Roll};
    *(FRotator*)Result = Sum;
}

FVector __cdecl sub_005c3600(const FVector& MinRange, const FVector& MaxRange);
// @baa 0x00596800
void UObject::execVRandRange(FFrame& Stack, RESULT_DECL)
{
    P_GET_STRUCT(FVector, MinRange);
    P_GET_STRUCT(FVector, MaxRange);
    P_FINISH;
    *(FVector*)Result = sub_005c3600(MinRange, MaxRange);
}

// @baa 0x005952e0
void UObject::execSubtract_PreVector(FFrame& Stack, RESULT_DECL)
{
    P_GET_STRUCT(FVector, A);
    P_FINISH;
    FVector Negated(-A.X, -A.Y, -A.Z);
    *(FVector*)Result = Negated;
}

struct FQuatRotationTranslationMatrix : FMatrix
{
    FQuatRotationTranslationMatrix(const FQuat& Rotation, const FVector& Origin);
    FRotator sub_005c3fc0() const;
};

// @baa 0x0059ed90
void UObject::execQuatToRotator(FFrame& Stack, RESULT_DECL)
{
    P_GET_STRUCT(FQuat, A);
    P_FINISH;
    FVector Origin(0.0f, 0.0f, 0.0f);
    *(FRotator*)Result = FQuatRotationTranslationMatrix(A, Origin).sub_005c3fc0();
}

struct UObject__00599970 : public UObject
{
	void sub_005de600(INT, INT, INT);
};

// @baa 0x00599970
void UObject::execStoreConfig(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	((UObject__00599970*)this)->sub_005de600(0x4000, 0, 0);
}

struct UObject__005999b0 : public UObject
{
	void sub_005df020(INT, INT, INT);
};

// @baa 0x005999b0
void UObject::execSaveConfig(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	((UObject__005999b0*)this)->sub_005df020(0x4000, 0, 0);
}

int sub_00630ea0(FFrame&, INT, const TCHAR*);
// @baa 0x00599d30
void UObject::execIsUTracing(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	sub_00630ea0(Stack, 0x301, L"UTracing is disabled in this build");
	*(UBOOL*)Result = 0;
}

// @baa 0x00594050
void UObject::execSquare(FFrame& Stack, RESULT_DECL)
{
	P_GET_FLOAT(A);
	P_FINISH;
	*(FLOAT*)Result = A * A;
}

extern FLOAT g_01e3f360;
// @baa 0x00592f70
void UObject::execSubtract_PreFloat(FFrame& Stack, RESULT_DECL)
{
	P_GET_FLOAT(A);
	P_FINISH;
	*(FLOAT*)Result = g_01e3f360 - A;
}

struct FVector_ : public FVector
{
	FVector* sub_0058df30(FVector*);
};

// @baa 0x00597c60
void UObject::execNormalize(FFrame& Stack, RESULT_DECL)
{
	P_GET_STRUCT(FVector, A);
	P_FINISH;
	FVector Out;
	*(FVector*)Result = *((FVector_*)&A)->sub_0058df30(&Out);
}

// @baa 0x0059ee30
void UObject::execChr(FFrame& Stack, RESULT_DECL)
{
	P_GET_INT(Ch);
	P_FINISH;
	TCHAR Str[2];
	Str[0] = (TCHAR)Ch;
	Str[1] = 0;
	*(FString*)Result = Str;
}

// @baa 0x00599cc0
void UObject::execSetUTracing(FFrame& Stack, RESULT_DECL)
{
	P_GET_UBOOL(bShouldUTrace);
	P_FINISH;
	sub_00630ea0(Stack, 0x301, L"UTracing is disabled in this build");
}

// @baa 0x005963a0
void UObject::execVSizeSq2D(FFrame& Stack, RESULT_DECL)
{
	P_GET_STRUCT(FVector, A);
	P_FINISH;
	*(FLOAT*)Result = A.Y * A.Y + A.X * A.X;
}

// @baa 0x00591bd0
void UObject::execSubtractSubtract_PreByte(FFrame& Stack, RESULT_DECL)
{
	P_GET_BYTE_REF(A);
	P_FINISH;
	*(BYTE*)Result = --A;
}

// @baa 0x00592ab0
void UObject::execAddAdd_PreInt(FFrame& Stack, RESULT_DECL)
{
	P_GET_INT_REF(A);
	P_FINISH;
	*(INT*)Result = ++A;
}

// @baa 0x005980c0
void UObject::execNormalizeRotAxis(FFrame& Stack, RESULT_DECL)
{
	P_GET_INT(Angle);
	P_FINISH;
	INT A = Angle & 0xffff;
	if (A > 0x7fff)
		A -= 0x10000;
	*(INT*)Result = A;
}

// @baa 0x00591c50
void UObject::execAddAdd_Byte(FFrame& Stack, RESULT_DECL)
{
	P_GET_BYTE_REF(A);
	P_FINISH;
	*(BYTE*)Result = A++;
}

// @baa 0x00591cd0
void UObject::execSubtractSubtract_Byte(FFrame& Stack, RESULT_DECL)
{
	P_GET_BYTE_REF(A);
	P_FINISH;
	*(BYTE*)Result = A--;
}

// @baa 0x00592bb0
void UObject::execAddAdd_Int(FFrame& Stack, RESULT_DECL)
{
	P_GET_INT_REF(A);
	P_FINISH;
	*(INT*)Result = A++;
}

// @baa 0x00592c30
void UObject::execSubtractSubtract_Int(FFrame& Stack, RESULT_DECL)
{
	P_GET_INT_REF(A);
	P_FINISH;
	*(INT*)Result = A--;
}

// @baa 0x00592b30
void UObject::execSubtractSubtract_PreInt(FFrame& Stack, RESULT_DECL)
{
	P_GET_INT_REF(A);
	P_FINISH;
	*(INT*)Result = --A;
}

// @baa 0x00591400
void UObject::execNot_PreBool(FFrame& Stack, RESULT_DECL)
{
	P_GET_UBOOL(A);
	P_FINISH;
	*(UBOOL*)Result = !A;
}

// @baa 0x00591b50
void UObject::execAddAdd_PreByte(FFrame& Stack, RESULT_DECL)
{
	P_GET_BYTE_REF(A);
	P_FINISH;
	*(BYTE*)Result = ++A;
}
