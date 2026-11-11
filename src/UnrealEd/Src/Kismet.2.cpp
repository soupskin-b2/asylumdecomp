// Kismet.cpp (part 2 of 4): 8 functions
// Placed here by: neighbours 8.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Cast.h"

// @baa 0x01194040
template URSeqVar_LocalFlag* Cast<URSeqVar_LocalFlag>(UObject* Src);

// @baa 0x011940a0
template URSeqVar_GlobalFlag* Cast<URSeqVar_GlobalFlag>(UObject* Src);

// @baa 0x01194100
template URSeqAct_SwitchFlags* Cast<URSeqAct_SwitchFlags>(UObject* Src);

// @baa 0x01194160
template USequenceObject* Cast<USequenceObject>(UObject* Src);

// @baa 0x01194300
template USequenceFrame* Cast<USequenceFrame>(UObject* Src);

// @baa 0x01194360
template UUnrealEdEngine* Cast<UUnrealEdEngine>(UObject* Src);

// @baa 0x011943d0
template USeqCond_SwitchBase* Cast<USeqCond_SwitchBase>(UObject* Src);

// @baa 0x011944b0
template UGFxAction_Invoke* Cast<UGFxAction_Invoke>(UObject* Src);
