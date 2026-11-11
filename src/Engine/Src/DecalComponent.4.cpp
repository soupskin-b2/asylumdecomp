// DecalComponent.cpp: 3 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

struct UDecalComponent_ : public UDecalComponent
{
	void ResetToDefaults();
	void execResetToDefaults(FFrame& Stack, RESULT_DECL);
};

// @baa 0x00c9ed40
void UDecalComponent_::execResetToDefaults( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	ResetToDefaults();
}

struct UDecalComponent__00c9edd0 : public UDecalComponent
{
	UMaterialInterface* sub_0064e0e0();
};

// @baa 0x00c9edd0
void UDecalComponent::execGetDecalMaterial(FFrame& Stack, RESULT_DECL)
{
	P_FINISH;
	*(UMaterialInterface**)Result = ((UDecalComponent__00c9edd0*)this)->sub_0064e0e0();
}

struct UDecalComponent__00c9ed70 : public UDecalComponent
{
	void sub_0064e0c0(UMaterialInterface*);
};

// @baa 0x00c9ed70
void UDecalComponent::execSetDecalMaterial(FFrame& Stack, RESULT_DECL)
{
	P_GET_OBJECT(UMaterialInterface, NewDecalMaterial);
	P_FINISH;
	((UDecalComponent__00c9ed70*)this)->sub_0064e0c0(NewDecalMaterial);
}
