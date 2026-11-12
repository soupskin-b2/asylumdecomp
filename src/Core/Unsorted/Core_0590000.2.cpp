// Core_0590000.cpp (part 2 of 4): 116 functions
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
    FRotator Difference(A.Pitch - B.Pitch, A.Yaw - B.Yaw, A.Roll - B.Roll);
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
    FRotator Sum(A.Pitch + B.Pitch, B.Yaw + A.Yaw, B.Roll + A.Roll);
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

// @baa 0x00596310
void UObject::execVSizeSq(FFrame& Stack, RESULT_DECL)
{
    P_GET_STRUCT(FVector, A);
    P_FINISH;
    *(FLOAT*)Result = A.Z * A.Z + A.X * A.X + A.Y * A.Y;
}

// @baa 0x00592120
void UObject::execSubtract_IntInt(FFrame& Stack, RESULT_DECL)
{
    P_GET_INT(A);
    P_GET_INT(B);
    P_FINISH;
    *(INT*)Result = A - B;
}

// @baa 0x00592630
void UObject::execAnd_IntInt(FFrame& Stack, RESULT_DECL)
{
    P_GET_INT(A);
    P_GET_INT(B);
    P_FINISH;
    *(INT*)Result = A & B;
}

// @baa 0x005926c0
void UObject::execXor_IntInt(FFrame& Stack, RESULT_DECL)
{
	P_GET_INT(A);
	P_GET_INT(B);
	P_FINISH;
	*(INT*)Result = A ^ B;
}

// @baa 0x00592750
void UObject::execOr_IntInt(FFrame& Stack, RESULT_DECL)
{
	P_GET_INT(A);
	P_GET_INT(B);
	P_FINISH;
	*(INT*)Result = A | B;
}

// @baa 0x00599040
void UObject::execAdd_QuatQuat(FFrame& Stack, RESULT_DECL)
{
	P_GET_STRUCT(FQuat, A);
	P_GET_STRUCT(FQuat, B);
	P_FINISH;
	FQuat Sum = {A.X + B.X, B.Y + A.Y, B.Z + A.Z, B.W + A.W};
	*(FQuat*)Result = Sum;
}

// @baa 0x00599110
void UObject::execSubtract_QuatQuat(FFrame& Stack, RESULT_DECL)
{
	P_GET_STRUCT(FQuat, A);
	P_GET_STRUCT(FQuat, B);
	P_FINISH;
	FQuat Difference = {A.X - B.X, A.Y - B.Y, A.Z - B.Z, A.W - B.W};
	*(FQuat*)Result = Difference;
}

// @baa 0x00591800
void UObject::execMultiplyEqual_ByteByte(FFrame& Stack, RESULT_DECL)
{
	P_GET_BYTE_REF(A);
	P_GET_BYTE(B);
	P_FINISH;
	A = A * B;
	*(BYTE*)Result = A;
}

// @baa 0x00591a10
void UObject::execAddEqual_ByteByte(FFrame& Stack, RESULT_DECL)
{
	P_GET_BYTE_REF(A);
	P_GET_BYTE(B);
	P_FINISH;
	A = A + B;
	*(BYTE*)Result = A;
}

// @baa 0x00591ab0
void UObject::execSubtractEqual_ByteByte(FFrame& Stack, RESULT_DECL)
{
	P_GET_BYTE_REF(A);
	P_GET_BYTE(B);
	P_FINISH;
	A = A - B;
	*(BYTE*)Result = A;
}

// @baa 0x005933c0
void UObject::execLess_FloatFloat(FFrame& Stack, RESULT_DECL)
{
	P_GET_FLOAT(A);
	P_GET_FLOAT(B);
	P_FINISH;
	*(UBOOL*)Result = A < B;
}

// @baa 0x00593460
void UObject::execGreater_FloatFloat(FFrame& Stack, RESULT_DECL)
{
	P_GET_FLOAT(A);
	P_GET_FLOAT(B);
	P_FINISH;
	*(UBOOL*)Result = A > B;
}

// @baa 0x00593640
void UObject::execEqualEqual_FloatFloat(FFrame& Stack, RESULT_DECL)
{
	P_GET_FLOAT(A);
	P_GET_FLOAT(B);
	P_FINISH;
	*(UBOOL*)Result = A == B;
}

// @baa 0x005936e0
void UObject::execNotEqual_FloatFloat(FFrame& Stack, RESULT_DECL)
{
	P_GET_FLOAT(A);
	P_GET_FLOAT(B);
	P_FINISH;
	*(UBOOL*)Result = A != B;
}

// @baa 0x00592970
void UObject::execAddEqual_IntInt(FFrame& Stack, RESULT_DECL)
{
	P_GET_INT_REF(A);
	P_GET_INT(B);
	P_FINISH;
	A = A + B;
	*(INT*)Result = A;
}

// @baa 0x00592a10
void UObject::execSubtractEqual_IntInt(FFrame& Stack, RESULT_DECL)
{
	P_GET_INT_REF(A);
	P_GET_INT(B);
	P_FINISH;
	A = A - B;
	*(INT*)Result = A;
}

// @baa 0x00595c60
void UObject::execDot_VectorVector(FFrame& Stack, RESULT_DECL)
{
	P_GET_STRUCT(FVector, A);
	P_GET_STRUCT(FVector, B);
	P_FINISH;
	*(FLOAT*)Result = B.Z * A.Z + A.X * B.X + B.Y * A.Y;
}

// @baa 0x00592090
void UObject::execAdd_IntInt(FFrame& Stack, RESULT_DECL)
{
	P_GET_INT(A);
	P_GET_INT(B);
	P_FINISH;
	*(INT*)Result = A + B;
}

// @baa 0x005938e0
void UObject::execDivideEqual_FloatFloat(FFrame& Stack, RESULT_DECL)
{
	P_GET_FLOAT_REF(A);
	P_GET_FLOAT(B);
	P_FINISH;

	if (B == 0.0f)
		sub_00630ea0(Stack, 0x301, L"Divide by zero");

	A = A / B;
	*(FLOAT*)Result = A;
}

// @baa 0x00595df0
void UObject::execMultiplyEqual_VectorFloat(FFrame& Stack, RESULT_DECL)
{
	P_GET_STRUCT_REF(FVector, A);
	P_GET_FLOAT(B);
	P_FINISH;

	const FLOAT Scale = B;
	A.X = A.X * Scale;
	A.Y = A.Y * Scale;
	A.Z = A.Z * Scale;

	*(FVector*)Result = A;
}

// @baa 0x00591ea0
void UObject::execMultiply_IntInt(FFrame& Stack, RESULT_DECL)
{
    P_GET_INT(A);
    P_GET_INT(B);
    P_FINISH;
    *(INT*)Result = A * B;
}

// @baa 0x005922d0
// @baa 0x005922d0
void UObject::execLess_IntInt(FFrame& Stack, RESULT_DECL)
{
    P_GET_INT(A);
    P_GET_INT(B);
    P_FINISH;
    *(INT*)Result = A < B;
}

// @baa 0x00593500
void UObject::execLessEqual_FloatFloat(FFrame& Stack, RESULT_DECL)
{
	P_GET_FLOAT(A);
	P_GET_FLOAT(B);
	P_FINISH;
	*(UBOOL*)Result = A <= B;
}

// @baa 0x005935a0
void UObject::execGreaterEqual_FloatFloat(FFrame& Stack, RESULT_DECL)
{
	P_GET_FLOAT(A);
	P_GET_FLOAT(B);
	P_FINISH;
	*(UBOOL*)Result = A >= B;
}

// @baa 0x00596ea0
void UObject::execIsZero(FFrame& Stack, RESULT_DECL)
{
	P_GET_STRUCT(FVector, A);
	P_FINISH;
	*(UBOOL*)Result = (A.X == 0.0f) && (A.Y == 0.0f) && (A.Z == 0.0f);
}

// @baa 0x005921b0
void UObject::execLessLess_IntInt(FFrame& Stack, RESULT_DECL)
{
	P_GET_INT(A);
	P_GET_INT(B);
	P_FINISH;
	*(INT*)Result = A << B;
}

FLOAT sub_005c5ce0(const FVector& Point, const FVector& Line, const FVector& Origin);
// @baa 0x00594980
void UObject::execPointDistAlongLine(FFrame& Stack, RESULT_DECL)
{
	FVector Origin, Line, Point;

	Stack.Step(Stack.Object, &Point);
	Stack.Step(Stack.Object, &Line);
	Stack.Step(Stack.Object, &Origin);
	P_FINISH;
	*(FLOAT*)Result = sub_005c5ce0(Point, Line, Origin);
}

FLOAT sub_005c5d90(const FVector& Point, const FVector& Line, const FVector& Origin);
// @baa 0x00594a30
void UObject::execPointDistAlongLineSegment(FFrame& Stack, RESULT_DECL)
{
	FVector Origin, Line, Point;

	Stack.Step(Stack.Object, &Point);
	Stack.Step(Stack.Object, &Line);
	Stack.Step(Stack.Object, &Origin);
	P_FINISH;
	*(FLOAT*)Result = sub_005c5d90(Point, Line, Origin);
}

FLOAT sub_005c5e70(const FVector& Point, const FVector& Line, const FVector& Origin);
// @baa 0x00594ae0
void UObject::execPointDistSquaredToLineSegment(FFrame& Stack, RESULT_DECL)
{
	FVector Origin, Line, Point;

	Stack.Step(Stack.Object, &Point);
	Stack.Step(Stack.Object, &Line);
	Stack.Step(Stack.Object, &Origin);
	P_FINISH;
	*(FLOAT*)Result = sub_005c5e70(Point, Line, Origin);
}

void sub_005c6c40(FVector2D& OutAngDist, const FVector2D& DotDist);
// @baa 0x00595060
void UObject::execGetAngularFromDotDist(FFrame& Stack, RESULT_DECL)
{
	P_GET_STRUCT_REF(FVector2D, OutAngDist);
	P_GET_STRUCT(FVector2D, DotDist);
	P_FINISH;
	sub_005c6c40(OutAngDist, DotDist);
}

// @baa 0x00593830
void UObject::execMultiplyEqual_FloatFloat(FFrame& Stack, RESULT_DECL)
{
	P_GET_FLOAT_REF(A);
	P_GET_FLOAT(B);
	P_FINISH;
	A = A * B;
	*(FLOAT*)Result = A;
}

// @baa 0x005939b0
void UObject::execAddEqual_FloatFloat(FFrame& Stack, RESULT_DECL)
{
	P_GET_FLOAT_REF(A);
	P_GET_FLOAT(B);
	P_FINISH;
	A = A + B;
	*(FLOAT*)Result = A;
}

// @baa 0x00593a60
void UObject::execSubtractEqual_FloatFloat(FFrame& Stack, RESULT_DECL)
{
	P_GET_FLOAT_REF(A);
	P_GET_FLOAT(B);
	P_FINISH;
	A = A - B;
	*(FLOAT*)Result = A;
}

// @baa 0x00591690
void UObject::execXorXor_BoolBool(FFrame& Stack, RESULT_DECL)
{
	P_GET_UBOOL(A);
	P_GET_UBOOL(B);
	P_FINISH;
	*(UBOOL*)Result = (A == 0) ^ (B == 0);
}

// @baa 0x00599270
void UObject::execEqualEqual_NameName(FFrame& Stack, RESULT_DECL)
{
	P_GET_NAME(A);
	P_GET_NAME(B);
	P_FINISH;
	*(UBOOL*)Result = (A.Index == B.Index) && (A.Number == B.Number);
}

// @baa 0x00599320
void UObject::execNotEqual_NameName(FFrame& Stack, RESULT_DECL)
{
	P_GET_NAME(A);
	P_GET_NAME(B);
	P_FINISH;
	*(UBOOL*)Result = (A.Index != B.Index) || (A.Number != B.Number);
}

// @baa 0x00592360
// @baa 0x00592360
void UObject::execGreater_IntInt(FFrame& Stack, RESULT_DECL)
{
	P_GET_INT(A);
	P_GET_INT(B);
	P_FINISH;
	*(UBOOL*)Result = A > B;
}

UBOOL sub_005cabf0(FVector2D& OutAngularDist, const FVector& Direction, const FVector& AxisX, const FVector& AxisY, const FVector& AxisZ);
// @baa 0x00594f50
void UObject::execGetAngularDistance(FFrame& Stack, RESULT_DECL)
{
	P_GET_STRUCT_REF(FVector2D, OutAngularDist);

	// the axes and the direction, read in the script's order
	FVector Vectors[4];

	Stack.Step(Stack.Object, &Vectors[3]);
	Stack.Step(Stack.Object, &Vectors[2]);
	Stack.Step(Stack.Object, &Vectors[1]);
	Stack.Step(Stack.Object, &Vectors[0]);
	P_FINISH;
	*(UBOOL*)Result = sub_005cabf0(OutAngularDist, Vectors[3], Vectors[2], Vectors[1], Vectors[0]);
}

// @baa 0x00598920
void UObject::execQuatInvert(FFrame& Stack, RESULT_DECL)
{
	P_GET_STRUCT(FQuat, A);
	P_FINISH;

	FQuat Inverted;
	Inverted.X = -A.X;
	Inverted.Y = -A.Y;
	Inverted.Z = -A.Z;
	Inverted.W = A.W;

	*(FQuat*)Result = Inverted;
}

// @baa 0x0059e690
void __stdcall sub_0059e690(FFrame& Stack, RESULT_DECL)
{
	UBOOL A = 0;
	Stack.Step(Stack.Object, &A);
	A = (A != 0);
	((FString*)Result)->sub_00544ab0(A ? L"True" : L"False");
}

// @baa 0x00595100
void __stdcall sub_00595100(FFrame& Stack, RESULT_DECL)
{
	FVector A(0.0f);
	Stack.Step(Stack.Object, &A);

	UBOOL bIsZero = A.X == 0.0f && A.Y == 0.0f && A.Z == 0.0f;
	*(UBOOL*)Result = !bIsZero;
}

// @baa 0x00592240
void UObject::execGreaterGreater_IntInt(FFrame& Stack, RESULT_DECL)
{
    P_GET_INT(A);
    P_GET_INT(B);
    P_FINISH;
    *(INT*)Result = A >> B;
}

// @baa 0x005923f0
// @baa 0x005923f0
void UObject::execLessEqual_IntInt(FFrame& Stack, RESULT_DECL)
{
	P_GET_INT(A);
	P_GET_INT(B);
	P_FINISH;
	*(INT*)Result = A <= B;
}

/* UObject::IsInState (0x59dc80) isn't declared in the kit. */
struct UObject__0059ef90 : public UObject
{
    UBOOL IsInState(FName TestState, UBOOL bTestStateStack);
};

// @baa 0x0059ef90
void UObject::execIsInState(FFrame& Stack, RESULT_DECL)
{
    P_GET_NAME(TestState);
    P_GET_UBOOL_OPTX(bTestStateStack, FALSE);
    P_FINISH;
    *(UBOOL*)Result = ((UObject__0059ef90*)this)->IsInState(TestState, bTestStateStack);
}

// @baa 0x00592510
void UObject::execEqualEqual_IntInt(FFrame& Stack, RESULT_DECL)
{
    P_GET_INT(A);
    P_GET_INT(B);
    P_FINISH;
    *(DWORD*)Result = A == B;
}

// @baa 0x00591470
void UObject::execEqualEqual_BoolBool(FFrame& Stack, RESULT_DECL)
{
    P_GET_UBOOL(A);
    P_GET_UBOOL(B);
    P_FINISH;
    *(UBOOL*)Result = ((!A) == (!B));
}

// @baa 0x00591520
void UObject::execNotEqual_BoolBool(FFrame& Stack, RESULT_DECL)
{
    P_GET_UBOOL(A);
    P_GET_UBOOL(B);
    P_FINISH;
    *(UBOOL*)Result = ((!A) != (!B));
}

// @baa 0x00591db0
void UObject::execGreaterGreaterGreater_IntInt(FFrame& Stack, RESULT_DECL)
{
    P_GET_INT(A);
    P_GET_INT(B);
    P_FINISH;
    *(INT*)Result = ((DWORD)A) >> B;
}

// @baa 0x00592480
void UObject::execGreaterEqual_IntInt(FFrame& Stack, RESULT_DECL)
{
    P_GET_INT(A);
    P_GET_INT(B);
    P_FINISH;
    *(UBOOL*)Result = A >= B;
}

// @baa 0x005993d0
void UObject::execEqualEqual_ObjectObject(FFrame& Stack, RESULT_DECL)
{
    P_GET_OBJECT(UObject, A);
    P_GET_OBJECT(UObject, B);
    P_FINISH;
    *(UBOOL*)Result = A == B;
}

// @baa 0x005925a0
void UObject::execNotEqual_IntInt(FFrame& Stack, RESULT_DECL)
{
    P_GET_INT(A);
    P_GET_INT(B);
    P_FINISH;
    *(UBOOL*)Result = A != B;
}

// @baa 0x00599460
void UObject::execNotEqual_ObjectObject(FFrame& Stack, RESULT_DECL)
{
    P_GET_OBJECT(UObject, A);
    P_GET_OBJECT(UObject, B);
    P_FINISH;
    *(UBOOL*)Result = A != B;
}

// @baa 0x00593070
void UObject::execMultiply_FloatFloat(FFrame& Stack, RESULT_DECL)
{
    P_GET_FLOAT(A);
    P_GET_FLOAT(B);
    P_FINISH;
    *(FLOAT*)Result = A * B;
}

// @baa 0x005932a0
void UObject::execAdd_FloatFloat(FFrame& Stack, RESULT_DECL)
{
    P_GET_FLOAT(A);
    P_GET_FLOAT(B);
    P_FINISH;
    *(FLOAT*)Result = A + B;
}

// @baa 0x00593330
void UObject::execSubtract_FloatFloat(FFrame& Stack, RESULT_DECL)
{
    P_GET_FLOAT(A);
    P_GET_FLOAT(B);
    P_FINISH;
    *(FLOAT*)Result = A - B;
}

// @baa 0x00594520
void UObject::execLerp(FFrame& Stack, RESULT_DECL)
{
    P_GET_FLOAT(A);
    P_GET_FLOAT(B);
    P_GET_FLOAT(Alpha);
    P_FINISH;
    *(FLOAT*)Result = A + Alpha * (B - A);
}

// @baa 0x00595380
void UObject::execMultiply_VectorFloat(FFrame& Stack, RESULT_DECL)
{
    P_GET_STRUCT(FVector, A);
    P_GET_FLOAT(B);
    P_FINISH;
    FVector Product(A.X * B, A.Y * B, A.Z * B);
    *(FVector*)Result = Product;
}

// @baa 0x00595440
void UObject::execMultiply_FloatVector(FFrame& Stack, RESULT_DECL)
{
    P_GET_FLOAT(A);
    P_GET_STRUCT(FVector, B);
    P_FINISH;
    FVector Product(B.X * A, B.Y * A, B.Z * A);
    *(FVector*)Result = Product;
}

// @baa 0x00595770
void UObject::execSubtract_VectorVector(FFrame& Stack, RESULT_DECL)
{
    P_GET_STRUCT(FVector, A);
    P_GET_STRUCT(FVector, B);
    P_FINISH;
    FVector Difference(A.X - B.X, A.Y - B.Y, A.Z - B.Z);
    *(FVector*)Result = Difference;
}

// @baa 0x00595ae0
void UObject::execEqualEqual_VectorVector(FFrame& Stack, RESULT_DECL)
{
    P_GET_STRUCT(FVector, A);
    P_GET_STRUCT(FVector, B);
    P_FINISH;
    *(UBOOL*)Result = A.X == B.X && A.Y == B.Y && A.Z == B.Z;
}

// @baa 0x00595ba0
void UObject::execNotEqual_VectorVector(FFrame& Stack, RESULT_DECL)
{
    P_GET_STRUCT(FVector, A);
    P_GET_STRUCT(FVector, B);
    P_FINISH;
    *(UBOOL*)Result = A.X != B.X || A.Y != B.Y || A.Z != B.Z;
}

// @baa 0x00595ec0
void UObject::execMultiplyEqual_VectorVector(FFrame& Stack, RESULT_DECL)
{
    P_GET_STRUCT_REF(FVector, A);
    P_GET_STRUCT(FVector, B);
    P_FINISH;
    A.X *= B.X;
    A.Y *= B.Y;
    A.Z *= B.Z;
    *(FVector*)Result = A;
}

// @baa 0x00596090
void UObject::execAddEqual_VectorVector(FFrame& Stack, RESULT_DECL)
{
    P_GET_STRUCT_REF(FVector, A);
    P_GET_STRUCT(FVector, B);
    P_FINISH;
    A.X += B.X;
    A.Y += B.Y;
    A.Z += B.Z;
    *(FVector*)Result = A;
}

// @baa 0x00596160
void UObject::execSubtractEqual_VectorVector(FFrame& Stack, RESULT_DECL)
{
    P_GET_STRUCT_REF(FVector, A);
    P_GET_STRUCT(FVector, B);
    P_FINISH;
    A.X -= B.X;
    A.Y -= B.Y;
    A.Z -= B.Z;
    *(FVector*)Result = A;
}

// @baa 0x00596f40
void UObject::execEqualEqual_RotatorRotator(FFrame& Stack, RESULT_DECL)
{
    P_GET_STRUCT(FRotator, A);
    P_GET_STRUCT(FRotator, B);
    P_FINISH;
    *(UBOOL*)Result = A.Pitch == B.Pitch && A.Yaw == B.Yaw && A.Roll == B.Roll;
}

// @baa 0x00596fe0
void UObject::execNotEqual_RotatorRotator(FFrame& Stack, RESULT_DECL)
{
    P_GET_STRUCT(FRotator, A);
    P_GET_STRUCT(FRotator, B);
    P_FINISH;
    *(UBOOL*)Result = A.Pitch != B.Pitch || A.Yaw != B.Yaw || A.Roll != B.Roll;
}

// @baa 0x00597660
void UObject::execAddEqual_RotatorRotator(FFrame& Stack, RESULT_DECL)
{
    P_GET_STRUCT_REF(FRotator, A);
    P_GET_STRUCT(FRotator, B);
    P_FINISH;
    A.Pitch += B.Pitch;
    A.Yaw += B.Yaw;
    A.Roll += B.Roll;
    *(FRotator*)Result = A;
}

// @baa 0x00597710
void UObject::execSubtractEqual_RotatorRotator(FFrame& Stack, RESULT_DECL)
{
    P_GET_STRUCT_REF(FRotator, A);
    P_GET_STRUCT(FRotator, B);
    P_FINISH;
    A.Pitch -= B.Pitch;
    A.Yaw -= B.Yaw;
    A.Roll -= B.Roll;
    *(FRotator*)Result = A;
}

// @baa 0x005915d0
/* Short-circuit operator: the second operand is skipped with the EX_Skip offset when A decides it. */
void UObject::execAndAnd_BoolBool(FFrame& Stack, RESULT_DECL)
{
    P_GET_UBOOL(A);
    Stack.Code++; /* EX_Skip */
    WORD W = *(WORD*)Stack.Code;
    Stack.Code += sizeof(WORD);
    if (A)
    {
        P_GET_UBOOL(B);
        *(UBOOL*)Result = A && B;
        Stack.Code++;
    }
    else
    {
        *(UBOOL*)Result = 0;
        Stack.Code += W;
    }
}

// @baa 0x00591740
/* Short-circuit operator: the second operand is skipped with the EX_Skip offset when A decides it. */
void UObject::execOrOr_BoolBool(FFrame& Stack, RESULT_DECL)
{
    P_GET_UBOOL(A);
    Stack.Code++; /* EX_Skip */
    WORD W = *(WORD*)Stack.Code;
    Stack.Code += sizeof(WORD);
    if (!A)
    {
        P_GET_UBOOL(B);
        *(UBOOL*)Result = A || B;
        Stack.Code++;
    }
    else
    {
        *(UBOOL*)Result = 1;
        Stack.Code += W;
    }
}

// @baa 0x00591f30
void UObject::execDivide_IntInt(FFrame& Stack, RESULT_DECL)
{
	P_GET_INT(A);
	P_GET_INT(B);
	P_FINISH;

	if (B == 0)
	{
		sub_00630ea0(Stack, 0x301, L"Divide by zero");
	}

	*(INT*)Result = (B != 0) ? (A / B) : 0;
}

// @baa 0x00591fe0
void UObject::execPercent_IntInt(FFrame& Stack, RESULT_DECL)
{
	P_GET_INT(A);
	P_GET_INT(B);
	P_FINISH;

	if (B == 0)
	{
		sub_00630ea0(Stack, 0x301, L"Modulo by zero");
	}

	*(INT*)Result = (B != 0) ? (A % B) : 0;
}

// @baa 0x00593100
void UObject::execDivide_FloatFloat(FFrame& Stack, RESULT_DECL)
{
	P_GET_FLOAT(A);
	P_GET_FLOAT(B);
	P_FINISH;

	if (B == 0.0f)
		sub_00630ea0(Stack, 0x301, L"Divide by zero");

	*(FLOAT*)Result = A / B;
}

// @baa 0x00598870
void UObject::execQuatDot(FFrame& Stack, RESULT_DECL)
{
	FQuat A, B;

	Stack.Step(Stack.Object, &A);
	Stack.Step(Stack.Object, &B);
	P_FINISH;
	*(FLOAT*)Result = B.W * A.W + A.X * B.X + B.Z * A.Z + B.Y * A.Y;
}

// @baa 0x005956b0
void UObject::execAdd_VectorVector(FFrame& Stack, RESULT_DECL)
{
	// the two vectors, read in the script's order
	FVector V[2];

	Stack.Step(Stack.Object, &V[0]);
	Stack.Step(Stack.Object, &V[1]);
	P_FINISH;

	FVector Sum;
	Sum.X = V[0].X + V[1].X;
	Sum.Y = V[1].Y + V[0].Y;
	Sum.Z = V[1].Z + V[0].Z;

	*(FVector*)Result = Sum;
}

// @baa 0x00595500
void UObject::execMultiply_VectorVector(FFrame& Stack, RESULT_DECL)
{
	// the two vectors, read in the script's order
	FVector V[2];

	Stack.Step(Stack.Object, &V[0]);
	Stack.Step(Stack.Object, &V[1]);
	P_FINISH;

	FVector Product;
	Product.X = V[0].X * V[1].X;
	Product.Y = V[1].Y * V[0].Y;
	Product.Z = V[1].Z * V[0].Z;

	*(FVector*)Result = Product;
}

// Core.RotationMatrix: the rotation-matrix form of a transform, derived from FMatrix.
// Its constructor from a rotator is out-of-line at 0x004029a0.
struct FRotationMatrix : public FMatrix {
    explicit FRotationMatrix(const FRotator& R); /* 0x004029a0 */
};

// FQuat's constructor from a rotation matrix is out-of-line at 0x005c40e0.
struct FQuat_ : public FQuat {
    FQuat_(const FRotationMatrix& M); /* 0x005c40e0 */
};

// @baa 0x00598e90
void UObject::execQuatFromRotator(FFrame& Stack, RESULT_DECL)
{
    P_GET_ROTATOR(A);
    P_FINISH;
    *(FQuat*)Result = FQuat_(FRotationMatrix(A));
}

FLOAT sub_005c6f80(FLOAT Current, FLOAT Target, FLOAT DeltaTime, FLOAT InterpSpeed);
// @baa 0x005946f0
void UObject::execFInterpTo(FFrame& Stack, RESULT_DECL)
{
	P_GET_FLOAT(Current);
	P_GET_FLOAT(Target);
	P_GET_FLOAT(DeltaTime);
	P_GET_FLOAT(InterpSpeed);
	P_FINISH;

	*(FLOAT*)Result = sub_005c6f80(Current, Target, DeltaTime, InterpSpeed);
}

FLOAT sub_005c7370(FLOAT A, FLOAT B, FLOAT Alpha, FLOAT Exp);
// @baa 0x005945f0
void UObject::execFInterpEaseInOut(FFrame& Stack, RESULT_DECL)
{
	P_GET_FLOAT(A);
	P_GET_FLOAT(B);
	P_GET_FLOAT(Alpha);
	P_GET_FLOAT(Exp);
	P_FINISH;

	*(FLOAT*)Result = sub_005c7370(A, B, Alpha, Exp);
}

FRotator* sub_005c6e00(FRotator* Out, const FRotator* Current, const FRotator* Target, const FLOAT* DeltaTime, FLOAT InterpSpeed);
// @baa 0x00597fd0
void UObject::execRInterpTo(FFrame& Stack, RESULT_DECL)
{
	P_GET_STRUCT(FRotator, Current);
	P_GET_STRUCT(FRotator, Target);
	P_GET_FLOAT(DeltaTime);
	P_GET_FLOAT(InterpSpeed);
	P_FINISH;

	FRotator Out;
	*(FRotator*)Result = *sub_005c6e00(&Out, &Current, &Target, &DeltaTime, InterpSpeed);
}

FVector* sub_005c6d10(FVector* Out, const FVector* Current, const FVector* Target, const FLOAT* DeltaTime, FLOAT InterpSpeed);
// @baa 0x005968a0
void UObject::execVInterpTo(FFrame& Stack, RESULT_DECL)
{
	P_GET_STRUCT(FVector, Current);
	P_GET_STRUCT(FVector, Target);
	P_GET_FLOAT(DeltaTime);
	P_GET_FLOAT(InterpSpeed);
	P_FINISH;

	FVector Out;
	*(FVector*)Result = *sub_005c6d10(&Out, &Current, &Target, &DeltaTime, InterpSpeed);
}
