// SoundCueEditor.cpp: 13 functions
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

struct C_01221750 { C_01221750* sub_01221750(void); };

// @baa 0x01221750
C_01221750* C_01221750::sub_01221750(void) { *(int*)((char*)this + 0) = 0; return this; }

extern undefined4 g_026af518;
extern undefined4 g_026af51c;
extern undefined4 g_026af520;
extern undefined4 g_026d40a4;
extern undefined4 g_026d40a8;
extern undefined4 g_026d40ac;
// @baa 0x01221760
undefined * sub_01221760(void)
{
  if ((g_026d40ac & 1) == 0) {
    g_026d40ac = g_026d40ac | 1;
    if ((g_026af520 & 1) == 0) {
      g_026af520 = g_026af520 | 1;
      g_026af518 = 0;
      g_026af51c = (undefined4)(L"HHitProxy");
    }
    g_026d40a4 = (undefined4)(&g_026af518);
    g_026d40a8 = (undefined4)(L"HWidgetUtilProxy");
  }
  return (undefined *)(&g_026d40a4);
}

// @baa 0x012217b0
void __stdcall sub_012217b0(int a0, int a1, int a2) {  }

// @baa 0x012217c0
void sub_012217c0(void) {  }

// @baa 0x012217d0
void sub_012217d0(void) {  }

struct C_01221a80 { int sub_01221a80(void); };

// @baa 0x01221a80
int C_01221a80::sub_01221a80(void) { return *(int*)((char*)this + 392); }
