// BmGame_1630000.cpp: 4 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

extern FName g_026e3ab8;
	/* IsGettingUpFromRagdoll */
struct ARPawnCharacter_ : public ARPawnCharacter
{
	UBOOL eventIsGettingUpFromRagdoll();
};

// @baa 0x01638310
/* RPawnCharacter.IsGettingUpFromRagdoll script event: the generated glue, out of line here. */
UBOOL ARPawnCharacter_::eventIsGettingUpFromRagdoll()
{
	struct RPawnCharacter_eventIsGettingUpFromRagdoll_Parms
	{
		UBOOL ReturnValue;
	} Parms;
	Parms.ReturnValue = FALSE;
	ProcessEvent(FindFunctionChecked(g_026e3ab8), &Parms);
	return Parms.ReturnValue;
}

extern FName g_026e2a10;
	/* CollisionWithActor */
struct ARPawnCombat_ : public ARPawnCombat
{
	void eventCollisionWithActor(class AActor* OtherActor);
};

// @baa 0x01638460
/* RPawnCombat.CollisionWithActor script event: the generated glue, out of line here. */
void ARPawnCombat_::eventCollisionWithActor(class AActor* OtherActor)
{
	struct RPawnCombat_eventCollisionWithActor_Parms
	{
		class AActor* OtherActor;
	} Parms;
	Parms.OtherActor = OtherActor;
	ProcessEvent(FindFunctionChecked(g_026e2a10), &Parms);
}

extern FName g_026e26d0;
	/* BatarangCanTargetOffscreen */
struct ARPlayerController_ : public ARPlayerController
{
	UBOOL eventBatarangCanTargetOffscreen();
};

// @baa 0x01638500
/* RPlayerController.BatarangCanTargetOffscreen script event: the generated glue, out of line here. */
UBOOL ARPlayerController_::eventBatarangCanTargetOffscreen()
{
	struct RPlayerController_eventBatarangCanTargetOffscreen_Parms
	{
		UBOOL ReturnValue;
	} Parms;
	Parms.ReturnValue = FALSE;
	ProcessEvent(FindFunctionChecked(g_026e26d0), &Parms);
	return Parms.ReturnValue;
}

extern FName g_026e3240;
	/* TestPos */
struct ARPhotoScanner_ : public ARPhotoScanner
{
	FVector eventTestPos(FVector testPosition, class UCanvas* Canvas);
};

// @baa 0x01638b70
/* RPhotoScanner.TestPos script event: the generated glue, out of line here. */
FVector ARPhotoScanner_::eventTestPos(FVector testPosition, class UCanvas* Canvas)
{
	struct RPhotoScanner_eventTestPos_Parms
	{
		FVector testPosition;
		class UCanvas* Canvas;
		FVector ReturnValue;
	} Parms;
	appMemzero(&Parms.ReturnValue, sizeof(Parms.ReturnValue));
	Parms.testPosition = testPosition;
	Parms.Canvas = Canvas;
	ProcessEvent(FindFunctionChecked(g_026e3240), &Parms);
	return Parms.ReturnValue;
}
