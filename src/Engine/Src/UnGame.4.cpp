// UnGame.cpp: 4 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

#include "ue3/ConstructObject.h"

// @baa 0x007dbe70
template UClient* ConstructObject<UClient>(UClass*, UObject*, FName, QWORD, UObject*, UObject*, FObjectInstancingGraph*);

#line 44 "candidate.cpp"

// @baa 0x007dbf10
template UGameViewportClient* ConstructObject<UGameViewportClient>(UClass*, UObject*, FName, QWORD, UObject*, UObject*, FObjectInstancingGraph*);

// @baa 0x007dc020
template ULevelStreamingPersistent* ConstructObject<ULevelStreamingPersistent>(UClass*, UObject*, FName, QWORD, UObject*, UObject*, FObjectInstancingGraph*);

// @baa 0x007dc0c0
template UOnlineSubsystem* ConstructObject<UOnlineSubsystem>(UClass*, UObject*, FName, QWORD, UObject*, UObject*, FObjectInstancingGraph*);
