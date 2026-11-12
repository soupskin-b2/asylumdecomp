// RAnimNode_Pose.cpp: 2 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

extern FName g_026e280c;
	/* BMGAME_WeaponSwitchCallback */
struct ARPawnCharacter_ : public ARPawnCharacter
{
	void eventWeaponSwitchCallback(class AInventory* NewWeapon, class AInventory* PreviousWeapon);
};

// @baa 0x01594e90
/* The script event's generated glue (BmGameClasses.h), out of line here. */
void ARPawnCharacter_::eventWeaponSwitchCallback(class AInventory* NewWeapon, class AInventory* PreviousWeapon)
{
	struct RPawnCharacter_eventWeaponSwitchCallback_Parms
	{
		class AInventory* NewWeapon;
		class AInventory* PreviousWeapon;
	} Parms;
	Parms.NewWeapon = NewWeapon;
	Parms.PreviousWeapon = PreviousWeapon;
	ProcessEvent(FindFunctionChecked(g_026e280c), &Parms);
}

extern FName g_026e2590;
	/* BMGAME_HackyFallingCallback */
struct ARPawnPlayerAnim_ : public ARPawnPlayerAnim
{
	void eventHackyFallingCallback();
};

// @baa 0x01594f10
/* The script event's generated glue (BmGameClasses.h), out of line here. */
void ARPawnPlayerAnim_::eventHackyFallingCallback()
{
	ProcessEvent(FindFunctionChecked(g_026e2590), NULL);
}
