// RInventoryGadget.cpp (part 1 of 2): 40 functions
// Placed here by: neighbours 18, class 6, file 6, callers 5.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x0163ac30
IMPLEMENT_CLASS_AT(ARInventoryGadget, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RInventoryGadget.cpp", 23);

// @baa 0x0163ad40
int ARInventoryGadget::vf_000(void) { return 1; }

// @baa 0x0163ad50
bool ARInventoryGadget::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x0163ad90
IMPLEMENT_CLASS_AT(ARProjectile, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RInventoryGadget.cpp", 24);

// @baa 0x0163aea0
int ARProjectile::vf_000(void) { return 1; }

// @baa 0x0163aeb0
bool ARProjectile::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x0163aef0
int ARGooSpray::vf_000(void) { return 1; }

// @baa 0x0163af00
IMPLEMENT_CLASS_AT(ARExplosiveGooMine, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RInventoryGadget.cpp", 26);

// @baa 0x0163b010
int ARExplosiveGooMine::vf_000(void) { return 1; }

// @baa 0x0163b020
bool ARExplosiveGooMine::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x0163b060
int ARResonatorTuner::vf_000(void) { return 1; }

struct C { C* sub_0163b070(void); };

// @baa 0x0163b070
C* C::sub_0163b070(void) { return this; }

struct C_0163b0d0 { C_0163b0d0* sub_0163b0d0(void); };

// @baa 0x0163b0d0
C_0163b0d0* C_0163b0d0::sub_0163b0d0(void) { *(int*)((char*)this + 360) = 0; return this; }

struct C_016504b0 { C_016504b0* sub_016504b0(void); };

// @baa 0x016504b0
C_016504b0* C_016504b0::sub_016504b0(void) { return this; }

void sub_0164fee0();
// @baa 0x016504c0
void sub_016504c0(void) { sub_0164fee0(); }

void sub_0164ff40();
// @baa 0x016504d0
void sub_016504d0(void) { sub_0164ff40(); }

void sub_0164ffa0();
// @baa 0x016504e0
void sub_016504e0(void) { sub_0164ffa0(); }

void sub_01650000();
// @baa 0x016504f0
void sub_016504f0(void) { sub_01650000(); }

void sub_01650060();
// @baa 0x01650500
void sub_01650500(void) { sub_01650060(); }

void sub_016500c0();
// @baa 0x01650520
void sub_01650520(void) { sub_016500c0(); }

void sub_01650130();
// @baa 0x01650530
void sub_01650530(void) { sub_01650130(); }

// @baa 0x01655da0
// @baa 0x01655e60
// @baa 0x016585e0
// @baa 0x01658620
IMPLEMENT_CLASS_AT(ARGooSpray, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RInventoryGadget.cpp", 25);

// @baa 0x016586e0
IMPLEMENT_CLASS_AT(ARResonatorTuner, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RInventoryGadget.cpp", 27);

// @baa 0x01658720
IMPLEMENT_CLASS_AT(ARInventoryManager, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RInventoryGadget.cpp", 22);

// @baa 0x01658730
// @baa 0x01658800
// @baa 0x01659590
// @baa 0x01659650
// @baa 0x01659710
// @baa 0x016597d0
// @baa 0x01659890
// @baa 0x01659950

// @baa 0x0163aad0

// @baa 0x0163abe0
int ARInventoryManager::vf_000(void) { return 1; }

// @baa 0x0163abf0
bool ARInventoryManager::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

int sub_005c7a70(...);
int sub_01656540(void);
// @baa 0x016565e0
undefined4 ARInventoryManager::sub_016565e0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01656540();
  if ((param_2 & 1) != 0) {
    sub_005c7a70(param_1,0x29c);
  }
  return param_1;
}

extern FName g_026e3178;
	/* BMGAME_GetPotentialTargetPositions */
/* Script event glue (generated, BmGameClasses.h) for GetPotentialTargetPositions, which the
 * inventory gadget calls on its candidate targets. The declaring class isn't identified (the
 * kit has no script declaration for it), so it sits on a UObject helper; the first parameter
 * is a 4-byte value taken from the gadget's target list. */
struct UObject_GetPotentialTargetPositions_ : public UObject
{
	UBOOL eventGetPotentialTargetPositions(INT Param0, const FVector& Origin, TArray<FVector>& Positions); /* 0x016503e0 */
};

// @baa 0x016503e0
UBOOL UObject_GetPotentialTargetPositions_::eventGetPotentialTargetPositions(INT Param0, const FVector& Origin, TArray<FVector>& Positions)
{
	struct Object_eventGetPotentialTargetPositions_Parms
	{
		INT Param0;
		FVector Origin;
		TArray<FVector> Positions;
		UBOOL ReturnValue;
	} Parms;
	Parms.ReturnValue = FALSE;
	Parms.Param0 = Param0;
	Parms.Origin = Origin;
	Parms.Positions = Positions;
	ProcessEvent(FindFunctionChecked(g_026e3178), &Parms);
	Positions = Parms.Positions;
	return Parms.ReturnValue;
}
