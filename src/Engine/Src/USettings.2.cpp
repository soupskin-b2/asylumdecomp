// USettings.cpp (part 2 of 2): 1 function
// Placed here by: class 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Core.h"

struct FSettingsData {
    BYTE Type;
    INT Value1;
    void* Value2;
    UBOOL sub_00d67dc0(INT Value);
};

// @baa 0x00d67dc0
UBOOL FSettingsData::sub_00d67dc0(INT Value)
{
    UBOOL bResult = 0;
    if (Type == 1)
    {
        bResult = Value == Value1;
    }
    return bResult;
}
