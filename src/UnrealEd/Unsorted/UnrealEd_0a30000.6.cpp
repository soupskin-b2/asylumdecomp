// UnrealEd_0a30000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

extern FName g_026c526c;
// A parameterless UnrealScript event that returns a FLOAT: the generated glue, out of line here.
struct UObject_ : public UObject
{
    FLOAT eventScriptCall();
};

// @baa 0x00a34120
FLOAT UObject_::eventScriptCall()
{
    struct ScriptCall_Parms
    {
        FLOAT ReturnValue;
    } Parms;
    Parms.ReturnValue = 0.f;
    ProcessEvent(FindFunctionChecked(g_026c526c), &Parms);
    return Parms.ReturnValue;
}
