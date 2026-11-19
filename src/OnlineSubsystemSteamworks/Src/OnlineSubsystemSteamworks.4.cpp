// OnlineSubsystemSteamworks.cpp: 2 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

#include "ue3/ConstructObject.h"

// @baa 0x00e8c380
template UTexture2D* ConstructObject<UTexture2D>(UClass*, UObject*, FName, QWORD, UObject*, UObject*, FObjectInstancingGraph*);

#line 44 "candidate.cpp"

// @baa 0x00e98e30
template UOnlineGameInterfaceSteamworks* ConstructObject<UOnlineGameInterfaceSteamworks>(UClass*, UObject*, FName, QWORD, UObject*, UObject*, FObjectInstancingGraph*);
