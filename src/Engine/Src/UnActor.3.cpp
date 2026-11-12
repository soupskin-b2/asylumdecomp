// UnActor.cpp: 7 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

extern FName ENGINE_Detach;
struct Actor_eventDetach_Parms
{
	AActor* Other;
};

// The script events aren't declared in Classes.h yet.
struct AActor_ : public AActor
{
	void eventDetach(AActor* Other);
};

// @baa 0x007538b0
void AActor_::eventDetach(AActor* Other)
{
	if (!StateFrame || (StateFrame->ProbeMask & ((QWORD)1 << (NAME_Detach - NAME_PROBEMIN))))
	{
		Actor_eventDetach_Parms Parms;
		Parms.Other = Other;
		ProcessEvent(FindFunctionChecked(ENGINE_Detach), &Parms);
	}
}

extern FName g_026c513c;
	/* ENGINE_Touch */
/* EName entries Core.h doesn't list yet (UnNames.h) */
#define NAME_PROBEMIN 0x12c
#define NAME_Touch 0x139
struct AActor__007539f0 : public AActor
{
	void eventTouch(AActor* Other, UPrimitiveComponent* OtherComp, FVector HitLocation, FVector HitNormal);
};

// @baa 0x007539f0
/* The script event's generated glue (EngineClasses.h), out of line here. Touch is a probe
 * function: the glue only calls into script when the current state probes for it. */
void AActor__007539f0::eventTouch(AActor* Other, UPrimitiveComponent* OtherComp, FVector HitLocation, FVector HitNormal)
{
	if (!StateFrame || (StateFrame->ProbeMask & ((QWORD)1 << (NAME_Touch - NAME_PROBEMIN))))
	{
		struct Actor_eventTouch_Parms
		{
			class AActor* Other;
			class UPrimitiveComponent* OtherComp;
			FVector HitLocation;
			FVector HitNormal;
		} Parms;
		Parms.Other = Other;
		Parms.OtherComp = OtherComp;
		Parms.HitLocation = HitLocation;
		Parms.HitNormal = HitNormal;
		ProcessEvent(FindFunctionChecked(g_026c513c), &Parms);
	}
}

extern FName g_026c4aa4;
#define NAME_BaseChange 0x13e
struct AActor__00753950 : public AActor
{
	void eventBaseChange();
};

// @baa 0x00753950
/* The script event's generated glue (EngineClasses.h), out of line here. BaseChange is a probe
 * function: the glue only calls into script when the current state probes for it. */
void AActor__00753950::eventBaseChange()
{
	if (!StateFrame || (StateFrame->ProbeMask & ((QWORD)1 << (NAME_BaseChange - NAME_PROBEMIN))))
	{
		ProcessEvent(FindFunctionChecked(g_026c4aa4), NULL);
	}
}

extern FName g_026c4ec4;
#define NAME_UnTouch 0x13a
struct AActor__007539a0 : public AActor
{
	void eventUnTouch(AActor* Other);
};

// @baa 0x007539a0
/* The script event's generated glue (EngineClasses.h), out of line here. UnTouch is a probe
 * function: the glue only calls into script when the current state probes for it. */
void AActor__007539a0::eventUnTouch(AActor* Other)
{
	struct Actor_eventUnTouch_Parms
	{
		class AActor* Other;
	} Parms;
	if (!StateFrame || (StateFrame->ProbeMask & ((QWORD)1 << (NAME_UnTouch - NAME_PROBEMIN))))
	{
		Parms.Other = Other;
		ProcessEvent(FindFunctionChecked(g_026c4ec4), &Parms);
	}
}

extern FName g_026c3fc0;
#define NAME_LostChild 0x12f
struct AActor__00753a80 : public AActor
{
	void eventLostChild(AActor* Other);
};

// @baa 0x00753a80
/* The script event's generated glue (EngineClasses.h), out of line here. LostChild is a probe
 * function: the glue only calls into script when the current state probes for it. */
void AActor__00753a80::eventLostChild(AActor* Other)
{
	struct Actor_eventLostChild_Parms
	{
		class AActor* Other;
	} Parms;
	if (!StateFrame || (StateFrame->ProbeMask & ((QWORD)1 << (NAME_LostChild - NAME_PROBEMIN))))
	{
		Parms.Other = Other;
		ProcessEvent(FindFunctionChecked(g_026c3fc0), &Parms);
	}
}

extern FName g_026c43fc;
#define NAME_GainedChild 0x12e
struct AActor__00753ad0 : public AActor
{
	void eventGainedChild(AActor* Other);
};

// @baa 0x00753ad0
/* The script event's generated glue (EngineClasses.h), out of line here. GainedChild is a probe
 * function: the glue only calls into script when the current state probes for it. */
void AActor__00753ad0::eventGainedChild(AActor* Other)
{
	struct Actor_eventGainedChild_Parms
	{
		class AActor* Other;
	} Parms;
	if (!StateFrame || (StateFrame->ProbeMask & ((QWORD)1 << (NAME_GainedChild - NAME_PROBEMIN))))
	{
		Parms.Other = Other;
		ProcessEvent(FindFunctionChecked(g_026c43fc), &Parms);
	}
}

extern FName g_026c4b84;
	/* GetMuzzleLoc */
struct AWeapon_ : public AWeapon
{
	FVector eventGetMuzzleLoc();
};

// @baa 0x007542b0
/* Weapon.GetMuzzleLoc script event: the generated glue, out of line here. */
FVector AWeapon_::eventGetMuzzleLoc()
{
	struct Weapon_eventGetMuzzleLoc_Parms
	{
		FVector ReturnValue;
	} Parms;
	appMemzero(&Parms.ReturnValue, sizeof(Parms.ReturnValue));
	ProcessEvent(FindFunctionChecked(g_026c4b84), &Parms);
	return Parms.ReturnValue;
}
