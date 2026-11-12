// Engine_0a00000.cpp: 28 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"
#include "ue3/PhysX.h"

FLOAT USkeletalMeshComponent::GetClothAttachmentResponseCoefficient()
{
    if (SkeletalMesh && ClothSim)
    {
        NxCloth* nCloth = (NxCloth*)ClothSim;
        return nCloth->getAttachmentResponseCoefficient();
    }
    return -1.0f;
}

// @baa 0x00a00560
void USkeletalMeshComponent::execGetClothAttachmentResponseCoefficient(FFrame& Stack, RESULT_DECL)
{
    P_FINISH;
    *(FLOAT*)Result = GetClothAttachmentResponseCoefficient();
}

FLOAT USkeletalMeshComponent::GetClothAttachmentTearFactor()
{
    if (SkeletalMesh && ClothSim)
    {
        NxCloth* nCloth = (NxCloth*)ClothSim;
        return nCloth->getAttachmentTearFactor();
    }
    return -1.0f;
}

// @baa 0x00a005d0
void USkeletalMeshComponent::execGetClothAttachmentTearFactor(FFrame& Stack, RESULT_DECL)
{
    P_FINISH;
    *(FLOAT*)Result = GetClothAttachmentTearFactor();
}

FLOAT USkeletalMeshComponent::GetClothBendingStiffness()
{
    if (SkeletalMesh && ClothSim)
    {
        NxCloth* nCloth = (NxCloth*)ClothSim;
        return nCloth->getBendingStiffness();
    }
    return -1.0f;
}

// @baa 0x00a00640
void USkeletalMeshComponent::execGetClothBendingStiffness(FFrame& Stack, RESULT_DECL)
{
    P_FINISH;
    *(FLOAT*)Result = GetClothBendingStiffness();
}

FLOAT USkeletalMeshComponent::GetClothCollisionResponseCoefficient()
{
    if (SkeletalMesh && ClothSim)
    {
        NxCloth* nCloth = (NxCloth*)ClothSim;
        return nCloth->getCollisionResponseCoefficient();
    }
    return -1.0f;
}

// @baa 0x00a006b0
void USkeletalMeshComponent::execGetClothCollisionResponseCoefficient(FFrame& Stack, RESULT_DECL)
{
    P_FINISH;
    *(FLOAT*)Result = GetClothCollisionResponseCoefficient();
}

FLOAT USkeletalMeshComponent::GetClothDampingCoefficient()
{
    if (SkeletalMesh && ClothSim)
    {
        NxCloth* nCloth = (NxCloth*)ClothSim;
        return nCloth->getDampingCoefficient();
    }
    return -1.0f;
}

// @baa 0x00a00720
void USkeletalMeshComponent::execGetClothDampingCoefficient(FFrame& Stack, RESULT_DECL)
{
    P_FINISH;
    *(FLOAT*)Result = GetClothDampingCoefficient();
}

INT USkeletalMeshComponent::GetClothFlags()
{
    if (SkeletalMesh && ClothSim)
    {
        NxCloth* nCloth = (NxCloth*)ClothSim;
        return nCloth->getFlags();
    }
    return -1;
}

// @baa 0x00a00790
void USkeletalMeshComponent::execGetClothFlags(FFrame& Stack, RESULT_DECL)
{
    P_FINISH;
    *(INT*)Result = GetClothFlags();
}

FLOAT USkeletalMeshComponent::GetClothFriction()
{
    if (SkeletalMesh && ClothSim)
    {
        NxCloth* nCloth = (NxCloth*)ClothSim;
        return nCloth->getFriction();
    }
    return -1.0f;
}

// @baa 0x00a007f0
void USkeletalMeshComponent::execGetClothFriction(FFrame& Stack, RESULT_DECL)
{
    P_FINISH;
    *(FLOAT*)Result = GetClothFriction();
}

FLOAT USkeletalMeshComponent::GetClothPressure()
{
    if (SkeletalMesh && ClothSim)
    {
        NxCloth* nCloth = (NxCloth*)ClothSim;
        return nCloth->getPressure();
    }
    return -1.0f;
}

// @baa 0x00a00860
void USkeletalMeshComponent::execGetClothPressure(FFrame& Stack, RESULT_DECL)
{
    P_FINISH;
    *(FLOAT*)Result = GetClothPressure();
}

FLOAT USkeletalMeshComponent::GetClothSleepLinearVelocity()
{
    if (SkeletalMesh && ClothSim)
    {
        NxCloth* nCloth = (NxCloth*)ClothSim;
        return nCloth->getSleepLinearVelocity();
    }
    return -1.0f;
}

// @baa 0x00a008d0
void USkeletalMeshComponent::execGetClothSleepLinearVelocity(FFrame& Stack, RESULT_DECL)
{
    P_FINISH;
    *(FLOAT*)Result = GetClothSleepLinearVelocity();
}

INT USkeletalMeshComponent::GetClothSolverIterations()
{
    if (SkeletalMesh && ClothSim)
    {
        NxCloth* nCloth = (NxCloth*)ClothSim;
        return nCloth->getSolverIterations();
    }
    return -1;
}

// @baa 0x00a00940
void USkeletalMeshComponent::execGetClothSolverIterations(FFrame& Stack, RESULT_DECL)
{
    P_FINISH;
    *(INT*)Result = GetClothSolverIterations();
}

FLOAT USkeletalMeshComponent::GetClothStretchingStiffness()
{
    if (SkeletalMesh && ClothSim)
    {
        NxCloth* nCloth = (NxCloth*)ClothSim;
        return nCloth->getStretchingStiffness();
    }
    return -1.0f;
}

// @baa 0x00a009a0
void USkeletalMeshComponent::execGetClothStretchingStiffness(FFrame& Stack, RESULT_DECL)
{
    P_FINISH;
    *(FLOAT*)Result = GetClothStretchingStiffness();
}

FLOAT USkeletalMeshComponent::GetClothTearFactor()
{
    if (SkeletalMesh && ClothSim)
    {
        NxCloth* nCloth = (NxCloth*)ClothSim;
        return nCloth->getTearFactor();
    }
    return -1.0f;
}

// @baa 0x00a00a10
void USkeletalMeshComponent::execGetClothTearFactor(FFrame& Stack, RESULT_DECL)
{
    P_FINISH;
    *(FLOAT*)Result = GetClothTearFactor();
}

FLOAT USkeletalMeshComponent::GetClothThickness()
{
    if (SkeletalMesh && ClothSim)
    {
        NxCloth* nCloth = (NxCloth*)ClothSim;
        return nCloth->getThickness();
    }
    return -1.0f;
}

// @baa 0x00a00a80
void USkeletalMeshComponent::execGetClothThickness(FFrame& Stack, RESULT_DECL)
{
    P_FINISH;
    *(FLOAT*)Result = GetClothThickness();
}

void USkeletalMeshComponent::SetClothAttachmentResponseCoefficient(FLOAT ClothAttachmentResponseCoefficient)
{
    if (SkeletalMesh && ClothSim)
    {
        NxCloth* nCloth = (NxCloth*)ClothSim;
        nCloth->setAttachmentResponseCoefficient(ClothAttachmentResponseCoefficient);
    }
}

// @baa 0x00a00af0
void USkeletalMeshComponent::execSetClothAttachmentResponseCoefficient(FFrame& Stack, RESULT_DECL)
{
    P_GET_FLOAT(ClothAttachmentResponseCoefficient);
    P_FINISH;
    SetClothAttachmentResponseCoefficient(ClothAttachmentResponseCoefficient);
}

void USkeletalMeshComponent::SetClothAttachmentTearFactor(FLOAT ClothAttachmentTearFactor)
{
    if (SkeletalMesh && ClothSim)
    {
        NxCloth* nCloth = (NxCloth*)ClothSim;
        nCloth->setAttachmentTearFactor(ClothAttachmentTearFactor);
    }
}

// @baa 0x00a00b70
void USkeletalMeshComponent::execSetClothAttachmentTearFactor(FFrame& Stack, RESULT_DECL)
{
    P_GET_FLOAT(ClothAttachmentTearFactor);
    P_FINISH;
    SetClothAttachmentTearFactor(ClothAttachmentTearFactor);
}

void USkeletalMeshComponent::SetClothBendingStiffness(FLOAT ClothBendingStiffness)
{
    if (SkeletalMesh && ClothSim)
    {
        NxCloth* nCloth = (NxCloth*)ClothSim;
        nCloth->setBendingStiffness(ClothBendingStiffness);
    }
}

// @baa 0x00a00bf0
void USkeletalMeshComponent::execSetClothBendingStiffness(FFrame& Stack, RESULT_DECL)
{
    P_GET_FLOAT(ClothBendingStiffness);
    P_FINISH;
    SetClothBendingStiffness(ClothBendingStiffness);
}

void USkeletalMeshComponent::SetClothCollisionResponseCoefficient(FLOAT ClothCollisionResponseCoefficient)
{
    if (SkeletalMesh && ClothSim)
    {
        NxCloth* nCloth = (NxCloth*)ClothSim;
        nCloth->setCollisionResponseCoefficient(ClothCollisionResponseCoefficient);
    }
}

// @baa 0x00a00c70
void USkeletalMeshComponent::execSetClothCollisionResponseCoefficient(FFrame& Stack, RESULT_DECL)
{
    P_GET_FLOAT(ClothCollisionResponseCoefficient);
    P_FINISH;
    SetClothCollisionResponseCoefficient(ClothCollisionResponseCoefficient);
}

void USkeletalMeshComponent::SetClothDampingCoefficient(FLOAT ClothDampingCoefficient)
{
    if (SkeletalMesh && ClothSim)
    {
        NxCloth* nCloth = (NxCloth*)ClothSim;
        nCloth->setDampingCoefficient(ClothDampingCoefficient);
    }
}

// @baa 0x00a00cf0
void USkeletalMeshComponent::execSetClothDampingCoefficient(FFrame& Stack, RESULT_DECL)
{
    P_GET_FLOAT(ClothDampingCoefficient);
    P_FINISH;
    SetClothDampingCoefficient(ClothDampingCoefficient);
}

void USkeletalMeshComponent::SetClothFlags(INT ClothFlags)
{
    if (SkeletalMesh && ClothSim && ClothFlags >= 0)
    {
        NxCloth* nCloth = (NxCloth*)ClothSim;
        nCloth->setFlags(ClothFlags);
    }
}

// @baa 0x00a00d70
void USkeletalMeshComponent::execSetClothFlags(FFrame& Stack, RESULT_DECL)
{
    P_GET_INT(ClothFlags);
    P_FINISH;
    SetClothFlags(ClothFlags);
}

void USkeletalMeshComponent::SetClothFriction(FLOAT ClothFriction)
{
    if (SkeletalMesh && ClothSim)
    {
        NxCloth* nCloth = (NxCloth*)ClothSim;
        nCloth->setFriction(ClothFriction);
    }
}

// @baa 0x00a00df0
void USkeletalMeshComponent::execSetClothFriction(FFrame& Stack, RESULT_DECL)
{
    P_GET_FLOAT(ClothFriction);
    P_FINISH;
    SetClothFriction(ClothFriction);
}

void USkeletalMeshComponent::SetClothPressure(FLOAT ClothPressure)
{
    if (SkeletalMesh && ClothSim)
    {
        NxCloth* nCloth = (NxCloth*)ClothSim;
        nCloth->setPressure(ClothPressure);
    }
}

// @baa 0x00a00e70
void USkeletalMeshComponent::execSetClothPressure(FFrame& Stack, RESULT_DECL)
{
    P_GET_FLOAT(ClothPressure);
    P_FINISH;
    SetClothPressure(ClothPressure);
}

void USkeletalMeshComponent::SetClothSleepLinearVelocity(FLOAT ClothSleepLinearVelocity)
{
    if (SkeletalMesh && ClothSim)
    {
        NxCloth* nCloth = (NxCloth*)ClothSim;
        nCloth->setSleepLinearVelocity(ClothSleepLinearVelocity);
    }
}

// @baa 0x00a00ef0
void USkeletalMeshComponent::execSetClothSleepLinearVelocity(FFrame& Stack, RESULT_DECL)
{
    P_GET_FLOAT(ClothSleepLinearVelocity);
    P_FINISH;
    SetClothSleepLinearVelocity(ClothSleepLinearVelocity);
}

void USkeletalMeshComponent::SetClothSolverIterations(INT ClothSolverIterations)
{
    if (SkeletalMesh && ClothSim && ClothSolverIterations >= 1)
    {
        NxCloth* nCloth = (NxCloth*)ClothSim;
        nCloth->setSolverIterations(ClothSolverIterations);
    }
}

// @baa 0x00a00f70
void USkeletalMeshComponent::execSetClothSolverIterations(FFrame& Stack, RESULT_DECL)
{
    P_GET_INT(ClothSolverIterations);
    P_FINISH;
    SetClothSolverIterations(ClothSolverIterations);
}

void USkeletalMeshComponent::SetClothStretchingStiffness(FLOAT ClothStretchingStiffness)
{
    if (SkeletalMesh && ClothSim)
    {
        NxCloth* nCloth = (NxCloth*)ClothSim;
        nCloth->setStretchingStiffness(ClothStretchingStiffness);
    }
}

// @baa 0x00a00ff0
void USkeletalMeshComponent::execSetClothStretchingStiffness(FFrame& Stack, RESULT_DECL)
{
    P_GET_FLOAT(ClothStretchingStiffness);
    P_FINISH;
    SetClothStretchingStiffness(ClothStretchingStiffness);
}

void USkeletalMeshComponent::SetClothTearFactor(FLOAT ClothTearFactor)
{
    if (SkeletalMesh && ClothSim)
    {
        NxCloth* nCloth = (NxCloth*)ClothSim;
        nCloth->setTearFactor(ClothTearFactor);
    }
}

// @baa 0x00a01070
void USkeletalMeshComponent::execSetClothTearFactor(FFrame& Stack, RESULT_DECL)
{
    P_GET_FLOAT(ClothTearFactor);
    P_FINISH;
    SetClothTearFactor(ClothTearFactor);
}

void USkeletalMeshComponent::SetClothThickness(FLOAT ClothThickness)
{
    if (SkeletalMesh && ClothSim)
    {
        NxCloth* nCloth = (NxCloth*)ClothSim;
        nCloth->setThickness(ClothThickness);
    }
}

// @baa 0x00a010f0
void USkeletalMeshComponent::execSetClothThickness(FFrame& Stack, RESULT_DECL)
{
    P_GET_FLOAT(ClothThickness);
    P_FINISH;
    SetClothThickness(ClothThickness);
}

void USkeletalMeshComponent::SetClothSleep(UBOOL bClothSleep)
{
    if (SkeletalMesh && ClothSim)
    {
        NxCloth* nCloth = (NxCloth*)ClothSim;
        if (bClothSleep)
        {
            nCloth->putToSleep();
        }
        else
        {
            nCloth->wakeUp();
        }
    }
}

// @baa 0x00a01170
void USkeletalMeshComponent::execSetClothSleep(FFrame& Stack, RESULT_DECL)
{
    P_GET_UBOOL(bClothSleep);
    P_FINISH;
    SetClothSleep(bClothSleep);
}

void USkeletalMeshComponent::AttachClothToCollidingShapes(UBOOL AttatchTwoWay, UBOOL AttachTearable)
{
    if (SkeletalMesh && ClothSim)
    {
        NxCloth* nCloth = (NxCloth*)ClothSim;
        if (AttatchTwoWay)
        {
            if (AttachTearable)
            {
                nCloth->attachToCollidingShapes(NX_CLOTH_ATTACHMENT_TWOWAY | NX_CLOTH_ATTACHMENT_TEARABLE);
            }
            else
            {
                nCloth->attachToCollidingShapes(NX_CLOTH_ATTACHMENT_TWOWAY);
            }
        }
        else
        {
            if (AttachTearable)
            {
                nCloth->attachToCollidingShapes(NX_CLOTH_ATTACHMENT_TEARABLE);
            }
            else
            {
                nCloth->attachToCollidingShapes(0);
            }
        }
    }
}

// @baa 0x00a012d0
void USkeletalMeshComponent::execAttachClothToCollidingShapes(FFrame& Stack, RESULT_DECL)
{
    P_GET_UBOOL(AttatchTwoWay);
    P_GET_UBOOL(AttachTearable);
    P_FINISH;
    AttachClothToCollidingShapes(AttatchTwoWay, AttachTearable);
}
