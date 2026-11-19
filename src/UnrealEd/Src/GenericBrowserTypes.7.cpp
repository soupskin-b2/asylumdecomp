// GenericBrowserTypes.cpp: 2 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

#include "ue3/ConstructObject.h"

// @baa 0x013482d0
template UAnimNodeEditInfo* ConstructObject<UAnimNodeEditInfo>(UClass*, UObject*, FName, QWORD, UObject*, UObject*, FObjectInstancingGraph*);

#line 44 "candidate.cpp"

// @baa 0x0136bfd0
template UAnimTreeEdSkelComponent* ConstructObject<UAnimTreeEdSkelComponent>(UClass*, UObject*, FName, QWORD, UObject*, UObject*, FObjectInstancingGraph*);
