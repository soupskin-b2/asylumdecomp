// UnrealEd_1110000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

extern FName g_026d5158;
// @baa 0x011194b0
INT UObject::eventScriptCall(INT bValue)
{
    struct ScriptCall_Parms
    {
        INT bValue;
        INT ReturnValue;
    } Parms;
    Parms.bValue = bValue != 0;
    Parms.ReturnValue = 0;
    ProcessEvent(FindFunctionChecked(g_026d5158), &Parms);
    return Parms.ReturnValue;
}
