// UnConn.cpp: 3 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

extern TCHAR g_01e3f3dc[];
// @baa 0x00c1a1d0
FString UNetConnection::LowLevelGetRemoteAddress() PURE_VIRTUAL(UNetConnection::LowLevelGetRemoteAddress, return FString(g_01e3f3dc);)

// @baa 0x00c1a210
FString UNetConnection::LowLevelDescribe() PURE_VIRTUAL(UNetConnection::LowLevelDescribe, return FString(g_01e3f3dc);)

#include "ue3/ConstructObject.h"

// @baa 0x00e09570
template UDownload* ConstructObject<UDownload>(UClass*, UObject*, FName, QWORD, UObject*, UObject*, FObjectInstancingGraph*);

#line 61 "candidate.cpp"
