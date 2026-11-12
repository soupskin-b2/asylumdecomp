// UnAnimTree.cpp: 3 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Array.h"
#include "ue3/Script.h"
#include "ue3/Cast.h"

/* Kit gaps: UAnimNodeBlend::SetBlendTarget (00c54040), USkeletalMeshComponent::FindAnimSequence (0091d860) and
 * aren't declared. */
struct UAnimNodeBlend_ : public UAnimNodeBlend
{
	void SetBlendTarget(FLOAT BlendTarget, FLOAT BlendTime);
};

struct USkeletalMeshComponent_ : public USkeletalMeshComponent
{
	UAnimSequence* FindAnimSequence(FName AnimSeqName);
};

// @baa 0x00c7a980
void UAnimNodeCrossfader::execBlendToLoopingAnim(FFrame& Stack, RESULT_DECL)
{
	P_GET_NAME(AnimSeqName);
	P_GET_FLOAT_OPTX(BlendInTime, 0.f);
	P_GET_FLOAT_OPTX(Rate, 1.f);
	P_FINISH;
	if (Children.Num() != 2 || !Children(0).Anim || !Children(1).Anim || !SkelComponent ||
		!((USkeletalMeshComponent_*)SkelComponent)->FindAnimSequence(AnimSeqName))
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
		((UAnimNodeBlend_*)this)->SetBlendTarget(BlendTarget, BlendInTime);
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
		!((USkeletalMeshComponent_*)SkelComponent)->FindAnimSequence(AnimSeqName))
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
		((UAnimNodeBlend_*)this)->SetBlendTarget(BlendTarget, BlendInTime);
	}
}

/* FString::operator* (UnString.h) and UObject::GetFullName/GetName (UnObjBas.h), which the headers lack. */
struct FString_ : public FString
{
	const TCHAR* operator*() const { return Num() ? &(*this)(0) : TEXT(""); }
};

struct UObject_ : public UObject
{
	FString_ GetFullName(const UObject* StopOuter = NULL) const;
	FString_ GetName() const;
};

/* Core.h: appErrorf hands the message to an attached debugger first. This build has no debugger
 * support (appIsDebuggerPresent is constant), so only the temporaries' destructor flags are left
 * of that branch in the code. */
inline UBOOL appIsDebuggerPresent() { return FALSE; }

void __cdecl appFailAssertFuncDebug(const ANSICHAR* Expr, const ANSICHAR* File, INT Line, const TCHAR* Format = TEXT(""), ...);
#define appErrorf(...) ( (appIsDebuggerPresent() ? (appFailAssertFuncDebug("appErrorf", __FILE__, __LINE__, ##__VA_ARGS__), 1) : 1), GError->Logf(__VA_ARGS__) )
/* UnObjBas.h: the cast that must succeed (out of line per class in this build). */
template<class T> T* CastChecked(UObject* Src)
{
	if (!Src || !ObjectIsA(Src, T::StaticClass()))
	{
		appErrorf(TEXT("Cast of %s to %s failed"), Src ? *((UObject_*)Src)->GetFullName() : TEXT("NULL"), *((UObject_*)T::StaticClass())->GetName());
	}
	return (T*)Src;
}

// @baa 0x00c7f740
template UAnimNodeAimOffset* CastChecked<UAnimNodeAimOffset>(UObject* Src);
