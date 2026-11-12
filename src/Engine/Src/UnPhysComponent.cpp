// UnPhysComponent.cpp: 5 functions
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
