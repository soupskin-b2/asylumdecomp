// UnUIEditorWindows.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

extern FName g_026c3e70;
// A one-INT UnrealScript event that returns an int: the generated glue, out of line here.
struct UObject_ : public UObject
{
    INT eventScriptCall(INT Value);
};

// @baa 0x014c7200
INT UObject_::eventScriptCall(INT Value)
{
    struct ScriptCall_Parms
    {
        INT Value;
        INT ReturnValue;
    } Parms;
    Parms.Value = Value;
    Parms.ReturnValue = 0;
    ProcessEvent(FindFunctionChecked(g_026c3e70), &Parms);
    return Parms.ReturnValue;
}
