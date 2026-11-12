// BmGame_1590000.cpp: 4 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

extern FName g_026e2cfc;
	/* OnBreatheOut */
struct ARPawnCharacter_ : public ARPawnCharacter
{
	void eventOnBreatheOut();
};

// @baa 0x01594e30
/* RPawnCharacter.OnBreatheOut script event: the generated glue, out of line here. */
void ARPawnCharacter_::eventOnBreatheOut()
{
	ProcessEvent(FindFunctionChecked(g_026e2cfc), NULL);
}

extern FName g_026e29b0;
	/* OnBreatheIn */
struct ARPawnCharacter__01594e60 : public ARPawnCharacter
{
	void eventOnBreatheIn();
};

// @baa 0x01594e60
/* RPawnCharacter.OnBreatheIn script event: the generated glue, out of line here. */
void ARPawnCharacter__01594e60::eventOnBreatheIn()
{
	ProcessEvent(FindFunctionChecked(g_026e29b0), NULL);
}

extern FName g_026e37fc;
	/* BMGAME_OnFoleyNotify */
struct ARPawn_ : public ARPawn
{
	void eventOnFoleyNotify(BYTE Foley);
};

// @baa 0x01594d70
/* The script event's generated glue (BmGameClasses.h), out of line here. */
void ARPawn_::eventOnFoleyNotify(BYTE Foley)
{
	struct RPawn_eventOnFoleyNotify_Parms
	{
		BYTE Foley;
	} Parms;
	Parms.Foley = Foley;
	ProcessEvent(FindFunctionChecked(g_026e37fc), &Parms);
}

extern FName g_026e2fe4;
	/* BMGAME_OnFootstepNotify */
struct ARPawn__01594db0 : public ARPawn
{
	void eventOnFootstepNotify(BYTE Foot, BYTE Contact, FVector FootLocation);
};

// @baa 0x01594db0
/* The script event's generated glue (BmGameClasses.h), out of line here. */
void ARPawn__01594db0::eventOnFootstepNotify(BYTE Foot, BYTE Contact, FVector FootLocation)
{
	struct RPawn_eventOnFootstepNotify_Parms
	{
		BYTE Foot;
		BYTE Contact;
		FVector FootLocation;
	} Parms;
	Parms.Foot = Foot;
	Parms.Contact = Contact;
	Parms.FootLocation = FootLocation;
	ProcessEvent(FindFunctionChecked(g_026e2fe4), &Parms);
}
