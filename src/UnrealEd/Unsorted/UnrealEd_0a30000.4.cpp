// UnrealEd_0a30000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

extern FName g_026c42d8;
// A one-FLOAT UnrealScript event with no return value: the generated glue, out of line here.
struct UObject_ : public UObject
{
    void eventScriptCall(FLOAT Value);
};

// @baa 0x00a33da0
void UObject_::eventScriptCall(FLOAT Value)
{
    struct ScriptCall_Parms
    {
        FLOAT Value;
    } Parms;
    Parms.Value = Value;
    ProcessEvent(FindFunctionChecked(g_026c42d8), &Parms);
}
