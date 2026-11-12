// Engine_0780000.cpp: 4 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

// @baa 0x0078e4c0
void UAudioComponent::execGetMinDistance( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	*(FLOAT*)Result = GetMinDistance();
}

// @baa 0x0078e500
void UAudioComponent::execGetMaxDistance( FFrame& Stack, RESULT_DECL )
{
	P_FINISH;
	*(FLOAT*)Result = GetMaxDistance();
}

struct UAudioComponent_ : public UAudioComponent
{
    /* SetFloatParameter (UnAudio.cpp); Classes.h doesn't declare it. */
    void sub_0078dbc0(FName InName, FLOAT InFloat);
};

// @baa 0x0078e540
void UAudioComponent::execSetFloatParameter(FFrame& Stack, RESULT_DECL)
{
    P_GET_NAME(InName);
    P_GET_FLOAT(InFloat);
    P_FINISH;
    ((UAudioComponent_*)this)->sub_0078dbc0(InName, InFloat);
}

struct UAudioComponent__0078e5e0 : public UAudioComponent
{
    /* SetVelocity (UnAudio.cpp); Classes.h doesn't declare it. */
    void sub_0078df40(FName InName, FLOAT InFloat);
};

// @baa 0x0078e5e0
void UAudioComponent::execSetVelocity(FFrame& Stack, RESULT_DECL)
{
    P_GET_NAME(InName);
    P_GET_FLOAT(InFloat);
    P_FINISH;
    ((UAudioComponent__0078e5e0*)this)->sub_0078df40(InName, InFloat);
}
