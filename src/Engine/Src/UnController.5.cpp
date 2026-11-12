// UnController.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Native.h"

/* FUniqueNetId::operator== (struct cpptext; UE3 declares Uid as a QWORD, the kit as FQWord) */
inline UBOOL operator==(const FUniqueNetId& A, const FUniqueNetId& B)
{
	return (QWORD&)A.Uid == (QWORD&)B.Uid;
}

struct APlayerController_ : public APlayerController
{
	APlayerController* GetPlayerControllerFromNetId(FUniqueNetId PlayerNetId);
};

// @baa 0x007a1eb0
APlayerController* APlayerController_::GetPlayerControllerFromNetId(FUniqueNetId PlayerNetId)
{
	AWorldInfo* WorldInfo = GWorld->GetWorldInfo();
#line 2597 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnController.cpp"
	check(WorldInfo);
	// Iterate through the controller list looking for the net id
	for (AController* Controller = WorldInfo->ControllerList; Controller; Controller = Controller->NextController)
	{
		APlayerController* PC = Controller->GetAPlayerController();
		if (PC && PC->PlayerReplicationInfo && PC->PlayerReplicationInfo->UniqueId == PlayerNetId)
		{
			return PC;
		}
	}
	return NULL;
}

#line 37 "candidate.cpp"
