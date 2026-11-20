// UnrealEd_0790000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

extern FName g_026c4a64;
// @baa 0x0079f5e0
INT UObject::eventScriptCall(INT Value)
{
    struct ScriptCall_Parms
    {
        INT Value;
        INT ReturnValue;
    } Parms;
    Parms.Value = Value;
    Parms.ReturnValue = 0;
    ProcessEvent(FindFunctionChecked(g_026c4a64), &Parms);
    return Parms.ReturnValue;
}
