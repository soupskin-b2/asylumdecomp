// BmGame_1590000.cpp: 2 functions
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
