// UnObjectRedirector.cpp: 3 functions
// Placed here by: callers 2, file 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

struct S_005f2bf0 {
    int __thiscall sub_005f2bf0(int);
};

struct C_0062da20 {
    char pad[0x28];
    S_005f2bf0 *member_28;
    int __thiscall sub_0062da20();
};

// @baa 0x0062da20
int C_0062da20::sub_0062da20() {
    return member_28->sub_005f2bf0(0x30);
}

// @baa 0x0062faa0
IMPLEMENT_CLASS_AT(UObjectRedirector, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Core\\Src\\UnObjectRedirector.cpp", 75);

// @baa 0x00631830
