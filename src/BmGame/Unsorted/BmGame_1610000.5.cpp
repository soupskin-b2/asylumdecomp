// BmGame_1610000.cpp: 3 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

// @baa 0x01612de0
void URSeqAct_SpeechEventManagerBase::vf_110(INT, INT)
{
    vf_1ac();
}

struct C
{
    BYTE Flag_00;
    char pad_01[0x1f];
    BYTE Flag_20;
    INT Value_24;

    C* sub_01612250(INT Unused);
};

// @baa 0x01612250
C* C::sub_01612250(INT)
{
    Flag_00 = 0;
    Flag_20 = 0;
    Value_24 = 0;
    return this;
}

struct URSeqAct_SpeechEventManagerBase_ : public URSeqAct_SpeechEventManagerBase
{
    void UpdateObject(); /* 0x00902260 */
};

// @baa 0x01612e00
void URSeqAct_SpeechEventManagerBase::vf_140()
{
    ((URSeqAct_SpeechEventManagerBase_*)this)->UpdateObject();
    vf_1ac();
}
