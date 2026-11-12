// UnAnimTreeDraw.cpp: 12 functions
// Placed here by: class 7, file 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x00c4b340
int UAnimNodeBlend::vf_000(void) { return 1; }

// @baa 0x00c648b0
IMPLEMENT_CLASS_AT(UAnimNodeBlend, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnAnimTree.cpp", 13);

// @baa 0x00c64910
UINT UAnimNodeBlend::vf_170() { return 1; }

// @baa 0x00c64920
// @baa 0x00c6af90
// @baa 0x00c77aa0
// @baa 0x00c77bb0
bool UAnimNodeBlend::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

int sub_006311e0(...);
extern undefined4 g_0205ccbc;
// @baa 0x00c92af0
FLOAT UAnimNodeBlend::GetSliderPosition(INT param_2, INT param_3) {
    int param_1 = (int)this;

  if ((param_2 != 0) || (param_3 != 0)) {
    sub_006311e0("0 == SliderIndex && 0 == ValueIndex",
                 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnAnimTreeDraw.cpp"
                 ,0x16c,&g_0205ccbc);
  }
  return (float10)*(float *)(param_1 + 200);
}

/* FString::Printf, as the linker specialised it for one FLOAT argument (0x005a9fc0); the kit declares
 * no FString::Printf. */
struct FString_ : public FString
{
	static FString Printf(const TCHAR* Fmt, FLOAT Value);
};

// @baa 0x00cc0730
FString UAnimNodeBlend::GetSliderDrawValue(INT SliderIndex)
{
#line 379 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnAnimTreeDraw.cpp"
	check(0 == SliderIndex);
	return FString_::Printf(TEXT("%3.2f"), Child2Weight);
}

#line 60 "candidate.cpp"

/* UAnimNodeBlendBySpeed's editor slider label (UAnimNode vtable slot, declared only as a vf_). */
// @baa 0x00cc0790
FString UAnimNodeBlendBySpeed::GetSliderDrawValue(INT SliderIndex)
{
#line 402 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnAnimTreeDraw.cpp"
	check(0 == SliderIndex);
	return FString_::Printf(TEXT("%3.2f"), Speed);
}

#line 76 "candidate.cpp"

/* FString::Printf, as the linker specialised it for (FLOAT, TCHAR) arguments (0x00cbf650); the kit
 * declares no FString::Printf. */
struct FString__00cc07f0 : public FString
{
	static FString Printf(const TCHAR* Fmt, FLOAT Value, TCHAR Char);
};

#define PI (3.1415926535897932)	/* UnMath.h; not in the kit */
/* UAnimNodeBlendDirectional's editor slider label (UAnimNode vtable slot, declared only as a vf_). */
// @baa 0x00cc07f0
FString UAnimNodeBlendDirectional::GetSliderDrawValue(INT SliderIndex)
{
#line 426 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnAnimTreeDraw.cpp"
	check(0 == SliderIndex);

	// the direction in degrees, with a degree sign
	return FString__00cc07f0::Printf(TEXT("%3.2f%c"), DirAngle * (180.f / (FLOAT)PI), 176);
}

#line 102 "candidate.cpp"

/* Kit gaps, with UE3's definitions (UnName.h): FName has no comparison operators. */
inline UBOOL operator!=(const FName& A, EName N) { return A.Index != N || A.Number != 0; }

/* UClass::GetDescription isn't declared in Classes.h. */

/* UAnimNode::GetNodeTitle (editor drawing; its vtable slot is declared only as a vf_). */
struct UAnimNode_ : public UAnimNode
{
	FString GetNodeTitle();
};

// @baa 0x00cb91a0
FString UAnimNode_::GetNodeTitle()
{
	FString NodeTitle;
	FString NodeDesc = ((UClass*)GetClass())->sub_00572f10();

	// the node's name, or else its class's description
	if (NodeName != NAME_None)
	{
		NodeTitle = NodeName.ToString();
	}
	else
	{
		NodeTitle = NodeDesc;
	}

	return NodeTitle;
}
