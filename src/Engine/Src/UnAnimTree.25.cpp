// UnAnimTree.cpp: 3 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Array.h"
#include "ue3/Script.h"
#include "ue3/Cast.h"

/* Kit gaps: UAnimNodeBlend::SetBlendTarget (00c54040), USkeletalMeshComponent::FindAnimSequence (0091d860) and
 * aren't declared. */

// @baa 0x00c7a980
void UAnimNodeCrossfader::execBlendToLoopingAnim(FFrame& Stack, RESULT_DECL)
{
	P_GET_NAME(AnimSeqName);
	P_GET_FLOAT_OPTX(BlendInTime, 0.f);
	P_GET_FLOAT_OPTX(Rate, 1.f);
	P_FINISH;
	if (Children.Num() != 2 || !Children(0).Anim || !Children(1).Anim || !SkelComponent ||
		!SkelComponent->FindAnimSequence(AnimSeqName))
	{
		return;
	}
	UAnimNodeSequence* Child = Cast<UAnimNodeSequence>(Child2WeightTarget < 0.5f ? Children(1).Anim : Children(0).Anim);
	if (Child)
	{
		FLOAT BlendTarget = Child2WeightTarget < 0.5f ? 1.f : 0.f;
		bDontBlendOutOneShot = TRUE;
		PendingBlendOutTimeOneShot = 0.f;
		Child->SetAnim(AnimSeqName);
		Child->PlayAnim(TRUE, Rate, 0.f);
		this->SetBlendTarget(BlendTarget, BlendInTime);
	}
}

// @baa 0x00c7a6a0
void UAnimNodeCrossfader::execPlayOneShotAnim(FFrame& Stack, RESULT_DECL)
{
	P_GET_NAME(AnimSeqName);
	P_GET_FLOAT_OPTX(BlendInTime, 0.f);
	P_GET_FLOAT_OPTX(BlendOutTime, 0.f);
	P_GET_UBOOL_OPTX(bDontBlendOut, FALSE);
	P_GET_FLOAT_OPTX(Rate, 1.f);
	P_FINISH;
	if (Children.Num() != 2 || !Children(0).Anim || !Children(1).Anim || !SkelComponent ||
		!SkelComponent->FindAnimSequence(AnimSeqName))
	{
		return;
	}
	UAnimNodeSequence* Child = Cast<UAnimNodeSequence>(Child2WeightTarget < 0.5f ? Children(1).Anim : Children(0).Anim);
	if (Child)
	{
		FLOAT BlendTarget = Child2WeightTarget < 0.5f ? 1.f : 0.f;
		bDontBlendOutOneShot = bDontBlendOut;
		PendingBlendOutTimeOneShot = BlendOutTime;
		Child->SetAnim(AnimSeqName);
		Child->PlayAnim(FALSE, Rate, 0.f);
		this->SetBlendTarget(BlendTarget, BlendInTime);
	}
}

// @baa 0x00c7f740
template UAnimNodeAimOffset* CastChecked<UAnimNodeAimOffset>(UObject* Src);
