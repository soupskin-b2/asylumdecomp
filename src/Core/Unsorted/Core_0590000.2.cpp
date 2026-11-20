// Core_0590000.cpp (part 2 of 4): 173 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

// @baa 0x005996a0
void UObject::sub_005996a0(FFrame& Stack, RESULT_DECL)
{
    BYTE B = *Stack.Code++;
    (this->*GNatives[0x100 + B])(Stack, Result);  // extended native page 1
}

// @baa 0x00599e30
void UObject::execIsPendingKill(FFrame& Stack, RESULT_DECL)
{
    P_FINISH;
    *(UBOOL*)Result = this->IsPendingKill();
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

// @baa 0x0059ed90
void UObject::execQuatToRotator(FFrame& Stack, RESULT_DECL)
{
    P_GET_STRUCT(FQuat, A);
    P_FINISH;
    FVector Origin(0.0f, 0.0f, 0.0f);
    *(FRotator*)Result = FQuatRotationTranslationMatrix(A, Origin).Rotator();
}

// @baa 0x00599970
void UObject::execStoreConfig(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	this->StoreConfig(0x4000, 0, 0);
}

// @baa 0x005999b0
void UObject::execSaveConfig(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	SaveConfig();
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

// @baa 0x00597c60
void UObject::execNormalize(FFrame& Stack, RESULT_DECL)
{
	P_GET_STRUCT(FRotator, A);
	P_FINISH;
	*(FRotator*)Result = A.GetNormalized();
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
	FQuat Sum(A.X + B.X, B.Y + A.Y, B.Z + A.Z, B.W + A.W);
	*(FQuat*)Result = Sum;
}

// @baa 0x00599110
void UObject::execSubtract_QuatQuat(FFrame& Stack, RESULT_DECL)
{
	P_GET_STRUCT(FQuat, A);
	P_GET_STRUCT(FQuat, B);
	P_FINISH;
	FQuat Difference(A.X - B.X, A.Y - B.Y, A.Z - B.Z, A.W - B.W);
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

// @baa 0x0059ef90
void UObject::execIsInState(FFrame& Stack, RESULT_DECL)
{
    P_GET_NAME(TestState);
    P_GET_UBOOL_OPTX(bTestStateStack, FALSE);
    P_FINISH;
    *(UBOOL*)Result = this->IsInState(TestState, bTestStateStack);
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

// FQuat's constructor from a rotation matrix is out-of-line at 0x005c40e0.
// @baa 0x00598e90
void UObject::execQuatFromRotator(FFrame& Stack, RESULT_DECL)
{
    P_GET_ROTATOR(A);
    P_FINISH;
    *(FQuat*)Result = FQuat(FRotationMatrix(A));
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

// @baa 0x005986a0
void UObject::execMatrixGetOrigin(FFrame& Stack, RESULT_DECL)
{
	P_GET_STRUCT(FMatrix, TM);
	P_FINISH;
	*(FVector*)Result = ((FMatrix&)TM).GetOrigin();
}

// @baa 0x005982f0
void UObject::execMultiply_MatrixMatrix(FFrame& Stack, RESULT_DECL)
{
	P_GET_STRUCT(FMatrix, A);
	P_GET_STRUCT(FMatrix, B);
	P_FINISH;
	*(FMatrix*)Result = (A) * B;
}

// @baa 0x0059eea0
void UObject::execClassIsChildOf(FFrame& Stack, RESULT_DECL)
{
	P_GET_OBJECT(UClass, TestClass);
	P_GET_OBJECT(UClass, ParentClass);
	P_FINISH;
	*(UBOOL*)Result = (ParentClass && TestClass) ? TestClass->IsChildOf(ParentClass) : FALSE;
}

// @baa 0x00599a60
void UObject::execIsChildState(FFrame& Stack, RESULT_DECL)
{
	P_GET_NAME(TestState);
	P_GET_NAME(TestParentState);
	P_FINISH;
	UState* ParentState = this->FindState(TestParentState);
	if (ParentState)
	{
		UState* State = this->FindState(TestState);
		if (State && State->IsChildOf((UField*)ParentState))
		{
			*(UBOOL*)Result = TRUE;
			return;
		}
	}
	*(UBOOL*)Result = FALSE;
}

// @baa 0x005965c0
void UObject::execVLerp(FFrame& Stack, RESULT_DECL)
{
	P_GET_STRUCT(FVector, A);
	P_GET_STRUCT(FVector, B);
	P_GET_FLOAT(Alpha);
	P_FINISH;

	*(FVector*)Result = A + (B - A) * Alpha;
}

/* An unnamed script bytecode handler (registered in the GNatives table, entry at 0x025d6xxx) that just
 * evaluates the next expression into Result. */

// @baa 0x00599670
void UObject::sub_00599670(FFrame& Stack, RESULT_DECL)
{
	BYTE B = *Stack.Code++;
	(this->*GNatives[B])(Stack, Result);
}

/* Extended native call, page 2 (bytecode EX_ExtendedNative+2): this build splits UE3's execExtendedNative
 * into one handler per page; the native index is page*256 plus the next code byte. */

// @baa 0x005996d0
void UObject::sub_005996d0(FFrame& Stack, RESULT_DECL)
{
	BYTE B = *Stack.Code++;
	(this->*GNatives[0x200 + B])(Stack, Result);
}

/* Extended native call, page 3 (bytecode EX_ExtendedNative+3): this build splits UE3's execExtendedNative
 * into one handler per page; the native index is page*256 plus the next code byte. */

// @baa 0x00599700
void UObject::sub_00599700(FFrame& Stack, RESULT_DECL)
{
	BYTE B = *Stack.Code++;
	(this->*GNatives[0x300 + B])(Stack, Result);
}

/* Extended native call, page 4 (bytecode EX_ExtendedNative+4): this build splits UE3's execExtendedNative
 * into one handler per page; the native index is page*256 plus the next code byte. */

// @baa 0x00599730
void UObject::sub_00599730(FFrame& Stack, RESULT_DECL)
{
	BYTE B = *Stack.Code++;
	(this->*GNatives[0x400 + B])(Stack, Result);
}

/* Extended native call, page 5 (bytecode EX_ExtendedNative+5): this build splits UE3's execExtendedNative
 * into one handler per page; the native index is page*256 plus the next code byte. */

// @baa 0x00599760
void UObject::sub_00599760(FFrame& Stack, RESULT_DECL)
{
	BYTE B = *Stack.Code++;
	(this->*GNatives[0x500 + B])(Stack, Result);
}

/* Extended native call, page 6 (bytecode EX_ExtendedNative+6): this build splits UE3's execExtendedNative
 * into one handler per page; the native index is page*256 plus the next code byte. */

// @baa 0x00599790
void UObject::sub_00599790(FFrame& Stack, RESULT_DECL)
{
	BYTE B = *Stack.Code++;
	(this->*GNatives[0x600 + B])(Stack, Result);
}

/* Extended native call, page 7 (bytecode EX_ExtendedNative+7): this build splits UE3's execExtendedNative
 * into one handler per page; the native index is page*256 plus the next code byte. */

// @baa 0x005997c0
void UObject::sub_005997c0(FFrame& Stack, RESULT_DECL)
{
	BYTE B = *Stack.Code++;
	(this->*GNatives[0x700 + B])(Stack, Result);
}

/* Extended native call, page 8 (bytecode EX_ExtendedNative+8): this build splits UE3's execExtendedNative
 * into one handler per page; the native index is page*256 plus the next code byte. */

// @baa 0x005997f0
void UObject::sub_005997f0(FFrame& Stack, RESULT_DECL)
{
	BYTE B = *Stack.Code++;
	(this->*GNatives[0x800 + B])(Stack, Result);
}

/* Extended native call, page 9 (bytecode EX_ExtendedNative+9): this build splits UE3's execExtendedNative
 * into one handler per page; the native index is page*256 plus the next code byte. */

// @baa 0x00599820
void UObject::sub_00599820(FFrame& Stack, RESULT_DECL)
{
	BYTE B = *Stack.Code++;
	(this->*GNatives[0x900 + B])(Stack, Result);
}

/* Extended native call, page 10 (bytecode EX_ExtendedNative+10): this build splits UE3's execExtendedNative
 * into one handler per page; the native index is page*256 plus the next code byte. */

// @baa 0x00599850
void UObject::sub_00599850(FFrame& Stack, RESULT_DECL)
{
	BYTE B = *Stack.Code++;
	(this->*GNatives[0xa00 + B])(Stack, Result);
}

/* Extended native call, page 11 (bytecode EX_ExtendedNative+11): this build splits UE3's execExtendedNative
 * into one handler per page; the native index is page*256 plus the next code byte. */

// @baa 0x00599880
void UObject::sub_00599880(FFrame& Stack, RESULT_DECL)
{
	BYTE B = *Stack.Code++;
	(this->*GNatives[0xb00 + B])(Stack, Result);
}

/* Extended native call, page 12 (bytecode EX_ExtendedNative+12): this build splits UE3's execExtendedNative
 * into one handler per page; the native index is page*256 plus the next code byte. */

// @baa 0x005998b0
void UObject::sub_005998b0(FFrame& Stack, RESULT_DECL)
{
	BYTE B = *Stack.Code++;
	(this->*GNatives[0xc00 + B])(Stack, Result);
}

/* Extended native call, page 13 (bytecode EX_ExtendedNative+13): this build splits UE3's execExtendedNative
 * into one handler per page; the native index is page*256 plus the next code byte. */

// @baa 0x005998e0
void UObject::sub_005998e0(FFrame& Stack, RESULT_DECL)
{
	BYTE B = *Stack.Code++;
	(this->*GNatives[0xd00 + B])(Stack, Result);
}

/* Extended native call, page 14 (bytecode EX_ExtendedNative+14): this build splits UE3's execExtendedNative
 * into one handler per page; the native index is page*256 plus the next code byte. */

// @baa 0x00599910
void UObject::sub_00599910(FFrame& Stack, RESULT_DECL)
{
	BYTE B = *Stack.Code++;
	(this->*GNatives[0xe00 + B])(Stack, Result);
}

/* Extended native call, page 15 (bytecode EX_ExtendedNative+15): this build splits UE3's execExtendedNative
 * into one handler per page; the native index is page*256 plus the next code byte. */

// @baa 0x00599940
void UObject::sub_00599940(FFrame& Stack, RESULT_DECL)
{
	BYTE B = *Stack.Code++;
	(this->*GNatives[0xf00 + B])(Stack, Result);
}

// @baa 0x005989d0
void UObject::execQuatRotateVector(FFrame& Stack, RESULT_DECL)
{
	P_GET_STRUCT(FQuat, A);
	P_GET_STRUCT(FVector, B);
	P_FINISH;
	*(FVector*)Result = ((FQuat*)&A)->RotateVector(B);
}

// @baa 0x00591960
/* byte /= byte; division by zero leaves A alone and yields 0. */
void UObject::execDivideEqual_ByteByte(FFrame& Stack, RESULT_DECL)
{
	P_GET_BYTE_REF(A);
	P_GET_BYTE(B);
	P_FINISH;
	*(BYTE*)Result = B ? (A /= B) : 0;
}

// @baa 0x005994f0
void UObject::execEqualEqual_InterfaceInterface(FFrame& Stack, RESULT_DECL)
{
	P_GET_INTERFACE(A);
	P_GET_INTERFACE(B);
	P_FINISH;

	*(UBOOL*)Result = (A == B);
}

// @baa 0x005995b0
void UObject::execNotEqual_InterfaceInterface(FFrame& Stack, RESULT_DECL)
{
	P_GET_INTERFACE(A);
	P_GET_INTERFACE(B);
	P_FINISH;

	*(UBOOL*)Result = (A != B);
}

// @baa 0x00590720
void UObject::execEndFunctionParms(FFrame& Stack, RESULT_DECL)
{
	// For skipping over optional function parms without values specified.
	GProperty = NULL;
	Stack.Code--;
}

// @baa 0x00590db0
void UObject::execFloatConst(FFrame& Stack, RESULT_DECL)
{
	*(FLOAT*)Result = Stack.ReadFloat();
}

// @baa 0x00590e20
void UObject::execNameConst(FFrame& Stack, RESULT_DECL)
{
	*(FName*)Result = Stack.ReadName();
}

// @baa 0x00590e40
void UObject::execByteConst(FFrame& Stack, RESULT_DECL)
{
	*(BYTE*)Result = *Stack.Code++;
}

// @baa 0x00590eb0
void UObject::execEmptyDelegate(FFrame& Stack, RESULT_DECL)
{
	((FScriptDelegate*)Result)->Object = NULL;
	((FScriptDelegate*)Result)->FunctionName = NAME_None;
}

// @baa 0x00590ed0
void UObject::execIntConstByte(FFrame& Stack, RESULT_DECL)
{
	*(INT*)Result = *Stack.Code++;
}

// @baa 0x00590100
void UObject::execInterfaceToObject(FFrame& Stack, RESULT_DECL)
{
	TScriptInterface<UObject> InterfaceValue;
	Stack.Step(this, &InterfaceValue);
	if (Result)
	{
		*(UObject**)Result = InterfaceValue.GetObject();
	}
}

// @baa 0x005907d0
void UObject::execConditional(FFrame& Stack, RESULT_DECL)
{
	// Get test expression.
	UBOOL CondValue = 0;
	Stack.Step(Stack.Object, &CondValue);

	// Get first skip offset.
	INT SkipOffset = Stack.ReadWord();

	// Skip ahead if false.
	if (!CondValue)
	{
		Stack.Code += SkipOffset + 2;
	}

	// Evaluate and return the result.
	Stack.Step(Stack.Object, Result);

	// Skip second expression if first was chosen.
	if (CondValue)
	{
		Stack.Code += Stack.ReadWord();
	}
}

/* GPropObject (0x026667d0) isn't in Script.h yet. */
extern UProperty* g_026667d0;
	/* GPropObject */

// @baa 0x00590940
void UObject::execLetDelegate(FFrame& Stack, RESULT_DECL)
{
	// Get variable address.
	GPropAddr = NULL;
	g_026667d0 = NULL;
	GProperty = NULL;
	Stack.Step(Stack.Object, NULL);	// Evaluate variable.
	FScriptDelegate* DelegateAddr = (FScriptDelegate*)GPropAddr;
	FScriptDelegate Delegate;
	Stack.Step(Stack.Object, &Delegate);
	if (DelegateAddr)
	{
		DelegateAddr->FunctionName = Delegate.FunctionName;
		DelegateAddr->Object = Delegate.Object;
	}
}

// @baa 0x00590f30
void UObject::execByteToInt(FFrame& Stack, RESULT_DECL)
{
	BYTE B = 0;
	Stack.Step(Stack.Object, &B);
	*(INT*)Result = B;
}

// @baa 0x00590f70
void UObject::execByteToBool(FFrame& Stack, RESULT_DECL)
{
	BYTE B = 0;
	Stack.Step(Stack.Object, &B);
	*(DWORD*)Result = B ? 1 : 0;
}

// @baa 0x00590fb0
void UObject::execByteToFloat(FFrame& Stack, RESULT_DECL)
{
	BYTE B = 0;
	Stack.Step(Stack.Object, &B);
	*(FLOAT*)Result = B;
}

// @baa 0x00590ff0
void UObject::execIntToByte(FFrame& Stack, RESULT_DECL)
{
	INT I = 0;
	Stack.Step(Stack.Object, &I);
	*(BYTE*)Result = I;
}

// @baa 0x00591030
void UObject::execIntToBool(FFrame& Stack, RESULT_DECL)
{
	INT I = 0;
	Stack.Step(Stack.Object, &I);
	*(DWORD*)Result = I ? 1 : 0;
}

// @baa 0x00591070
void UObject::execIntToFloat(FFrame& Stack, RESULT_DECL)
{
	INT I = 0;
	Stack.Step(Stack.Object, &I);
	*(FLOAT*)Result = I;
}

// @baa 0x005910b0
void UObject::execBoolToByte(FFrame& Stack, RESULT_DECL)
{
	UBOOL B = 0;
	Stack.Step(Stack.Object, &B);
	*(BYTE*)Result = B & 1;
}

// @baa 0x005910f0
void UObject::execBoolToInt(FFrame& Stack, RESULT_DECL)
{
	UBOOL B = 0;
	Stack.Step(Stack.Object, &B);
	*(INT*)Result = B & 1;
}

// @baa 0x00591130
void UObject::execBoolToFloat(FFrame& Stack, RESULT_DECL)
{
	DWORD B = 0;
	Stack.Step(Stack.Object, &B);
	*(FLOAT*)Result = B & 1;
}

// @baa 0x00591180
void UObject::execFloatToByte(FFrame& Stack, RESULT_DECL)
{
	FLOAT F = 0.f;
	Stack.Step(Stack.Object, &F);
	*(BYTE*)Result = (BYTE)appTrunc(F);
}

// @baa 0x005911c0
void UObject::execFloatToInt(FFrame& Stack, RESULT_DECL)
{
	FLOAT F = 0.f;
	Stack.Step(Stack.Object, &F);
	*(INT*)Result = appTrunc(F);
}

// @baa 0x00591200
void UObject::execFloatToBool(FFrame& Stack, RESULT_DECL)
{
	FLOAT F = 0.f;
	Stack.Step(Stack.Object, &F);
	*(DWORD*)Result = F != 0.f ? 1 : 0;
}

// @baa 0x00591260
void UObject::execObjectToBool(FFrame& Stack, RESULT_DECL)
{
	UObject* Obj = NULL;
	Stack.Step(Stack.Object, &Obj);
	*(DWORD*)Result = Obj != NULL;
}

// @baa 0x00591340
void UObject::execNameToBool(FFrame& Stack, RESULT_DECL)
{
	FName N = NAME_None;
	Stack.Step(Stack.Object, &N);
	*(DWORD*)Result = N != NAME_None ? 1 : 0;
}

/* Kit gaps: FScriptDelegate (Classes.h line 106) is a bare POD; UE3's (UnScript.h) zero-inits in its default ctor,
 * and Script.h has no P_GET_DELEGATE. The delegate comparison natives aren't declared on UObject. */
struct FScriptDelegate_ : public FScriptDelegate
{
	FScriptDelegate_() { Object = NULL; FunctionName.Index = 0; FunctionName.Number = 0; }
};

#define P_GET_DELEGATE(v) FScriptDelegate_ v; Stack.Step(Stack.Object, &v);

// @baa 0x005909d0
void UObject::execEqualEqual_DelegateDelegate(FFrame& Stack, RESULT_DECL)
{
	P_GET_DELEGATE(A);
	P_GET_DELEGATE(B);
	P_FINISH;

	// fix up any self references
	if (A.Object == NULL && A.FunctionName != NAME_None)
	{
		A.Object = this;
	}
	if (B.Object == NULL && B.FunctionName != NAME_None)
	{
		B.Object = this;
	}
	*(UBOOL*)Result = (A.Object == B.Object && A.FunctionName == B.FunctionName);
}

// @baa 0x00590ac0
void UObject::execNotEqual_DelegateDelegate(FFrame& Stack, RESULT_DECL)
{
	P_GET_DELEGATE(A);
	P_GET_DELEGATE(B);
	P_FINISH;

	// fix up any self references
	if (A.Object == NULL && A.FunctionName != NAME_None)
	{
		A.Object = this;
	}
	if (B.Object == NULL && B.FunctionName != NAME_None)
	{
		B.Object = this;
	}
	*(UBOOL*)Result = (A.Object != B.Object || A.FunctionName != B.FunctionName);
}

// @baa 0x00590bb0
void UObject::execEqualEqual_DelegateFunction(FFrame& Stack, RESULT_DECL)
{
	P_GET_DELEGATE(A);
	P_GET_DELEGATE(B);
	P_FINISH;

	// fix up any self references
	if (A.Object == NULL && A.FunctionName != NAME_None)
	{
		A.Object = this;
	}
	if (B.Object == NULL && B.FunctionName != NAME_None)
	{
		B.Object = this;
	}
	*(UBOOL*)Result = (A.Object == B.Object && A.FunctionName == B.FunctionName);
}

// @baa 0x00590ca0
void UObject::execNotEqual_DelegateFunction(FFrame& Stack, RESULT_DECL)
{
	P_GET_DELEGATE(A);
	P_GET_DELEGATE(B);
	P_FINISH;

	// fix up any self references
	if (A.Object == NULL && A.FunctionName != NAME_None)
	{
		A.Object = this;
	}
	if (B.Object == NULL && B.FunctionName != NAME_None)
	{
		B.Object = this;
	}
	*(UBOOL*)Result = (A.Object != B.Object || A.FunctionName != B.FunctionName);
}

// @baa 0x00594830
void UObject::execVectorConst(FFrame& Stack, RESULT_DECL)
{
	((FVector*)Result)->X = Stack.ReadFloat();
	((FVector*)Result)->Y = Stack.ReadFloat();
	((FVector*)Result)->Z = Stack.ReadFloat();
}

// @baa 0x005947f0
void UObject::execRotationConst(FFrame& Stack, RESULT_DECL)
{
	((FRotator*)Result)->Pitch = Stack.ReadInt();
	((FRotator*)Result)->Yaw = Stack.ReadInt();
	((FRotator*)Result)->Roll = Stack.ReadInt();
}

// @baa 0x005951a0
void UObject::execVectorToRotator(FFrame& Stack, RESULT_DECL)
{
	FVector V(0.f, 0.f, 0.f);
	Stack.Step(Stack.Object, &V);
	*(FRotator*)Result = V.Rotation();
}

// @baa 0x00595200
void UObject::execRotatorToBool(FFrame& Stack, RESULT_DECL)
{
	FRotator R(0, 0, 0);
	Stack.Step(Stack.Object, &R);
	*(DWORD*)Result = !R.IsZero();
}

// @baa 0x00595280
void UObject::execRotatorToVector(FFrame& Stack, RESULT_DECL)
{
	FRotator R(0, 0, 0);
	Stack.Step(Stack.Object, &R);
	*(FVector*)Result = R.Vector();
}

// @baa 0x00590090
void UObject::execDefaultParmValue(FFrame& Stack, RESULT_DECL)
{
	WORD Offset = Stack.ReadWord();
	if ((GRuntimeUCFlags & RUC_SkippedOptionalParm) == 0)
	{
		// skip over the default value expression
		Stack.Code += Offset;
	}
	else
	{
		// evaluate the default value into the local property address space
		while (*Stack.Code != EX_EndParmValue)
		{
			Stack.Step(Stack.Object, Result);
		}

		// advance past the EX_EndParmValue
		Stack.Code++;
	}

	GRuntimeUCFlags &= ~RUC_SkippedOptionalParm;
}
