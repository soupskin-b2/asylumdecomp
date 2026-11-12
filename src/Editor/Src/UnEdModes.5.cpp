// UnEdModes.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

extern FName g_026ccb94;
// A parameterless UnrealScript event that returns an int: the generated glue, out of line here.
struct UObject_ : public UObject
{
    INT eventScriptCall();
};

// @baa 0x00f4dcd0
INT UObject_::eventScriptCall()
{
    struct ScriptCall_Parms
    {
        INT ReturnValue;
    } Parms;
    Parms.ReturnValue = 0;
    ProcessEvent(FindFunctionChecked(g_026ccb94), &Parms);
    return Parms.ReturnValue;
}
