// UnScrCom.cpp: 8 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Array.h"
#include "ue3/Script.h"
#include "ue3/Cast.h"

// @baa 0x00faadd0
template UArrayProperty* CastChecked<UArrayProperty>(UObject* Src);

// @baa 0x00fab240
template UConst* CastChecked<UConst>(UObject* Src);

// @baa 0x00fab5f0
template UFunction* CastChecked<UFunction>(UObject* Src);

// @baa 0x00faafe0
template UProperty* CastChecked<UProperty>(UObject* Src);

// @baa 0x00fab7c0
template UClass* CastChecked<UClass>(UObject* Src);

// @baa 0x00fab9f0
template UState* CastChecked<UState>(UObject* Src);

// @baa 0x00fabbc0
template UEnum* CastChecked<UEnum>(UObject* Src);

// @baa 0x00fabd90
template UScriptStruct* CastChecked<UScriptStruct>(UObject* Src);
