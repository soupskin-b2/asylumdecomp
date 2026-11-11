// SoundCueEditor.cpp: 7 functions
// Placed here by: neighbours 4, callers 2, file 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

void sub_004025d0(void*);
struct D { void* p; ~D(){ if(0) sub_004025d0(p);} };

void sub_0053dfa0(void*);
struct C { void* Data; int Num; int Max; void sub_008c2370(); };

// @baa 0x008c2370
void C::sub_008c2370() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

// @baa 0x01222fb0
IMPLEMENT_CLASS_AT(USoundNodeHelper, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\SoundCueEditor.cpp", 13);

// @baa 0x012234e0
extern char g_02202bb8[];
// @baa 0x0122fce0
int sub_0122fce0(void) { return (int)g_02202bb8; }

struct A_0122fcf0 { virtual void sub_01233140(); char pad[420]; };

struct B_0122fcf0 { virtual void sub_01233140(); };

struct C_0122fcf0 : A_0122fcf0, B_0122fcf0 { virtual void sub_01233140(); C_0122fcf0(); };

C_0122fcf0::C_0122fcf0() {}

// @baa 0x0122fcf0
void C_0122fcf0::sub_01233140() {}

struct A_0122fd00 { virtual void sub_01233140(); char pad[424]; };

struct B_0122fd00 { virtual void sub_01233140(); };

struct C_0122fd00 : A_0122fd00, B_0122fd00 { virtual void sub_01233140(); C_0122fd00(); };

C_0122fd00::C_0122fd00() {}

// @baa 0x0122fd00
void C_0122fd00::sub_01233140() {}

struct A_0122fd10 { virtual void sub_01233140(); char pad[408]; };

struct B_0122fd10 { virtual void sub_01233140(); };

struct C_0122fd10 : A_0122fd10, B_0122fd10 { virtual void sub_01233140(); C_0122fd10(); };

C_0122fd10::C_0122fd10() {}

// @baa 0x0122fd10
void C_0122fd10::sub_01233140() {}
