// UnAudio.cpp: 6 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"


// @baa 0x00786260
void UAudioComponent::sub_00786260(UBOOL bPaused)
{
    bIsPaused = bPaused;
}

/* Unnamed in the kit: UE3's UAudioComponent::SetParentToWorld(const FMatrix& ParentToWorld): remember the component's
 * world location (FMatrix::GetOrigin inlined). */

// @baa 0x00786210
void UAudioComponent::sub_00786210(const FMatrix& ParentToWorld)
{
    FVector Origin;
    Origin.X = ParentToWorld.WPlane.X;
    Origin.Y = ParentToWorld.WPlane.Y;
    Origin.Z = ParentToWorld.WPlane.Z;
    ComponentLocation = Origin;
}

/* Kit gap: FName has no comparison operator (UnName.h compares Index and Number). */
/* Unnamed in the kit: UE3's UAudioComponent::GetFloatParameter(FName InName, FLOAT& OutValue): the FloatParam of the instance
 * parameter named InName. */

// @baa 0x0078e280
UBOOL UAudioComponent::sub_0078e280(FName InName, FLOAT& OutValue)
{
    if (InName.Index != 0 || InName.Number != 0)
    {
        for (INT i = 0; i < InstanceParameters.Num(); i++)
        {
            FAudioComponentParam& Param = InstanceParameters(i);
            if (Param.ParamName == InName)
            {
                OutValue = Param.FloatParam;
                return TRUE;
            }
        }
    }
    return FALSE;
}

/* Unnamed in the kit: UE3's UAudioComponent::GetVelocityParameter-style(FName InName, FLOAT& OutValue): the Velocity of the instance
 * parameter named InName. */

// @baa 0x0078e310
UBOOL UAudioComponent::sub_0078e310(FName InName, FLOAT& OutValue)
{
    if (InName.Index != 0 || InName.Number != 0)
    {
        for (INT i = 0; i < InstanceParameters.Num(); i++)
        {
            FAudioComponentParam& Param = InstanceParameters(i);
            if (Param.ParamName == InName)
            {
                OutValue = Param.Velocity;
                return TRUE;
            }
        }
    }
    return FALSE;
}

/* Unnamed in the kit: UE3's UAudioComponent::GetSeekSpeedParameter-style(FName InName, FLOAT& OutValue): the SeekSpeed of the instance
 * parameter named InName. */

// @baa 0x0078e3a0
UBOOL UAudioComponent::sub_0078e3a0(FName InName, FLOAT& OutValue)
{
    if (InName.Index != 0 || InName.Number != 0)
    {
        for (INT i = 0; i < InstanceParameters.Num(); i++)
        {
            FAudioComponentParam& Param = InstanceParameters(i);
            if (Param.ParamName == InName)
            {
                OutValue = Param.SeekSpeed;
                return TRUE;
            }
        }
    }
    return FALSE;
}

// @baa 0x0078a830
void AAnimatedCamera::StopCameraAnim(UCameraAnimInst* AnimInst, UBOOL bImmediate)
{
	if (AnimInst)
	{
		AnimInst->Stop(bImmediate);	/* UCameraAnimInst::Stop */
	}
}
