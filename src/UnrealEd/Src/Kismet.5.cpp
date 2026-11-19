// Kismet.cpp: 3 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

#include "ue3/ConstructObject.h"

// @baa 0x01196ef0
template USequenceVariable* ConstructObject<USequenceVariable>(UClass*, UObject*, FName, QWORD, UObject*, UObject*, FObjectInstancingGraph*);

#line 44 "candidate.cpp"

// @baa 0x01196f90
template USequenceEvent* ConstructObject<USequenceEvent>(UClass*, UObject*, FName, QWORD, UObject*, UObject*, FObjectInstancingGraph*);

// @baa 0x01197030
template USeqEvent_SequenceActivated* ConstructObject<USeqEvent_SequenceActivated>(UClass*, UObject*, FName, QWORD, UObject*, UObject*, FObjectInstancingGraph*);
