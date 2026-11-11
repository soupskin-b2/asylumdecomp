// fmod_compositionconditions.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Core.h"

struct FMOD_RefCountCondition
{
    virtual ~FMOD_RefCountCondition() {}
    int unk_04;
    int unk_08;
    DWORD count;
    virtual void sub_017f8560();
};

struct FMOD_CompositionConditionOwner
{
    int unk_00;
    struct
    {
        void sub_01776283(FMOD_RefCountCondition* Condition, const char* File, int Line, int Arg);
    }* handler;
};

extern FMOD_CompositionConditionOwner* g_025f0e64;
// @baa 0x017f8560
void FMOD_RefCountCondition::sub_017f8560()
{
    g_025f0e64->handler->sub_01776283(this, "..\\src\\fmod_compositionconditions.cpp", 0x1c, 0);
}
