// UnPhysComponent.cpp: 8 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

// @baa 0x009fe9e0
void UPrimitiveComponent::execRigidBodyIsAwake(FFrame& Stack, RESULT_DECL)
{
    P_GET_NAME_OPTX(BoneName, NAME_None);
    P_FINISH;
    *(UBOOL*)Result = (UBOOL)vf_1bc(BoneName.Index, BoneName.Number);
}

// @baa 0x009fe910
void UPrimitiveComponent::execRigidBodyIsFullyDynamic(FFrame& Stack, RESULT_DECL)
{
	P_GET_NAME_OPTX(BoneName, NAME_None);
	P_FINISH;
	*(UBOOL*)Result = vf_1b8(BoneName.Index, BoneName.Number);
}

/* UPrimitiveComponent::AddTorque (0x9ff330) isn't declared in the kit. */
struct UPrimitiveComponent_ : public UPrimitiveComponent
{
    void AddTorque(FVector Torque, FName BoneName);
};

// @baa 0x009ff3c0
void UPrimitiveComponent::execAddTorque(FFrame& Stack, RESULT_DECL)
{
    P_GET_STRUCT(FVector, Torque);
    P_GET_NAME_OPTX(BoneName, NAME_None);
    P_FINISH;
    ((UPrimitiveComponent_*)this)->AddTorque(Torque, BoneName);
}

/* UPrimitiveComponent::AddTorqueForce (0x9ff470) isn't declared in the kit. */
struct UPrimitiveComponent__009ff500 : public UPrimitiveComponent
{
    void AddTorqueForce(FVector Torgue, FName BoneName);
};

// @baa 0x009ff500
void UPrimitiveComponent::execAddTorqueForce(FFrame& Stack, RESULT_DECL)
{
    P_GET_STRUCT(FVector, Torgue);
    P_GET_NAME_OPTX(BoneName, NAME_None);
    P_FINISH;
    ((UPrimitiveComponent__009ff500*)this)->AddTorqueForce(Torgue, BoneName);
}

/* UPrimitiveComponent::AddTorqueImpulse (0x9ff5b0) isn't declared in the kit. */
struct UPrimitiveComponent__009ff640 : public UPrimitiveComponent
{
    void AddTorqueImpulse(FVector Torgue, FName BoneName);
};

// @baa 0x009ff640
void UPrimitiveComponent::execAddTorqueImpulse(FFrame& Stack, RESULT_DECL)
{
    P_GET_STRUCT(FVector, Torgue);
    P_GET_NAME_OPTX(BoneName, NAME_None);
    P_FINISH;
    ((UPrimitiveComponent__009ff640*)this)->AddTorqueImpulse(Torgue, BoneName);
}

// @baa 0x009fea70
void UPrimitiveComponent::execRigidBodyIsNearlyStill(FFrame& Stack, RESULT_DECL)
{
    P_GET_NAME_OPTX(BoneName, NAME_None);
    P_FINISH;
    *(UBOOL*)Result = vf_1c0(BoneName.Index, BoneName.Number);
}

/* Kit gap: Script.h lacks UE3's P_GET_STRUCT_OPTX (UnScript.h); the struct constructors (UnMath.h) build the defaults. */
#define P_GET_STRUCT_OPTX(t, v, d) t v; GRuntimeUCFlags &= ~RUC_SkippedOptionalParm; Stack.Step(Stack.Object, &v); if (GRuntimeUCFlags & RUC_SkippedOptionalParm) v = d;
struct FVector_ : public FVector
{
	FVector_(FLOAT InX, FLOAT InY, FLOAT InZ) { X = InX; Y = InY; Z = InZ; }
};

// @baa 0x009fed10
void UPrimitiveComponent::execAddImpulse(FFrame& Stack, RESULT_DECL)
{
	P_GET_VECTOR(Impulse);
	P_GET_STRUCT_OPTX(FVector, Position, FVector_(0.f, 0.f, 0.f));
	P_GET_NAME_OPTX(BoneName, NAME_None);
	P_GET_UBOOL_OPTX(bVelChange, FALSE);
	P_FINISH;
	AddImpulse(Impulse, Position, BoneName, bVelChange);
}

/* Kit gaps: AddForce (009ff110) isn't declared (names from the exe's native table). */
struct UPrimitiveComponent__009ff200 : public UPrimitiveComponent
{
	void AddForce(FVector Force, FVector Position, FName BoneName);	/* 0x009ff110 */
};

// @baa 0x009ff200
void UPrimitiveComponent::execAddForce(FFrame& Stack, RESULT_DECL)
{
	P_GET_VECTOR(Force);
	P_GET_STRUCT_OPTX(FVector, Position, FVector_(0.f, 0.f, 0.f));
	P_GET_NAME_OPTX(BoneName, NAME_None);
	P_FINISH;
	((UPrimitiveComponent__009ff200*)this)->AddForce(Force, Position, BoneName);
}
