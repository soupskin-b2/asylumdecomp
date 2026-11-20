// UnPhysComponent.cpp: 10 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

// @baa 0x009fe9e0
void UPrimitiveComponent::execRigidBodyIsAwake(FFrame& Stack, RESULT_DECL)
{
    P_GET_NAME_OPTX(BoneName, NAME_None);
    P_FINISH;
    *(UBOOL*)Result = RigidBodyIsAwake(BoneName);
}

// @baa 0x009fe910
void UPrimitiveComponent::execRigidBodyIsFullyDynamic(FFrame& Stack, RESULT_DECL)
{
	P_GET_NAME_OPTX(BoneName, NAME_None);
	P_FINISH;
	*(UBOOL*)Result = RigidBodyIsFullyDynamic(BoneName);
}

// @baa 0x009ff3c0
void UPrimitiveComponent::execAddTorque(FFrame& Stack, RESULT_DECL)
{
    P_GET_STRUCT(FVector, Torque);
    P_GET_NAME_OPTX(BoneName, NAME_None);
    P_FINISH;
    this->AddTorque(Torque, BoneName);
}

// @baa 0x009ff500
void UPrimitiveComponent::execAddTorqueForce(FFrame& Stack, RESULT_DECL)
{
    P_GET_STRUCT(FVector, Torgue);
    P_GET_NAME_OPTX(BoneName, NAME_None);
    P_FINISH;
    this->AddTorqueForce(Torgue, BoneName);
}

// @baa 0x009ff640
void UPrimitiveComponent::execAddTorqueImpulse(FFrame& Stack, RESULT_DECL)
{
    P_GET_STRUCT(FVector, Torgue);
    P_GET_NAME_OPTX(BoneName, NAME_None);
    P_FINISH;
    this->AddTorqueImpulse(Torgue, BoneName);
}

// @baa 0x009fea70
void UPrimitiveComponent::execRigidBodyIsNearlyStill(FFrame& Stack, RESULT_DECL)
{
    P_GET_NAME_OPTX(BoneName, NAME_None);
    P_FINISH;
    *(UBOOL*)Result = RigidBodyIsNearlyStill(BoneName);
}

/* Kit gap: Script.h lacks UE3's P_GET_STRUCT_OPTX (UnScript.h); the struct constructors (UnMath.h) build the defaults. */
#define P_GET_STRUCT_OPTX(t, v, d) t v; GRuntimeUCFlags &= ~RUC_SkippedOptionalParm; Stack.Step(Stack.Object, &v); if (GRuntimeUCFlags & RUC_SkippedOptionalParm) v = d;
// @baa 0x009fed10
void UPrimitiveComponent::execAddImpulse(FFrame& Stack, RESULT_DECL)
{
	P_GET_VECTOR(Impulse);
	P_GET_STRUCT_OPTX(FVector, Position, FVector(0.f, 0.f, 0.f));
	P_GET_NAME_OPTX(BoneName, NAME_None);
	P_GET_UBOOL_OPTX(bVelChange, FALSE);
	P_FINISH;
	AddImpulse(Impulse, Position, BoneName, bVelChange);
}

// @baa 0x009ff200
void UPrimitiveComponent::execAddForce(FFrame& Stack, RESULT_DECL)
{
	P_GET_VECTOR(Force);
	P_GET_STRUCT_OPTX(FVector, Position, FVector(0.f, 0.f, 0.f));
	P_GET_NAME_OPTX(BoneName, NAME_None);
	P_FINISH;
	this->AddForce(Force, Position, BoneName);
}

// @baa 0x009fe790
// @baa 0x009fe790
void UPrimitiveComponent::execSetRBPosition(FFrame& Stack, RESULT_DECL)
{
	P_GET_STRUCT(FVector, NewPos);
	P_GET_NAME_OPTX(BoneName, NAME_None);
	P_FINISH;
	SetRBPosition(NewPos, BoneName);
}

// @baa 0x009fe830
// @baa 0x009fe830
void UPrimitiveComponent::execSetRBRotation(FFrame& Stack, RESULT_DECL)
{
	P_GET_ROTATOR(NewRot);
	P_GET_NAME_OPTX(BoneName, NAME_None);
	P_FINISH;
	SetRBRotation(NewRot, BoneName);
}
