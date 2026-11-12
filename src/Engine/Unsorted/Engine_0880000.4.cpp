// Engine_0880000.cpp (part 4 of 6): 2 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x008872b0
IMPLEMENT_CLASS_AT(ARoute, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnPath.cpp", 16);

struct C
{
    float First;
    float Second;

    C* sub_00888510();
};

// @baa 0x00888510
C* C::sub_00888510()
{
    First = 0.0f;
    Second = 0.0f;
    return this;
}
