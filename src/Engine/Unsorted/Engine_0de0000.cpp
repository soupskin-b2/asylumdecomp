// Engine_0de0000.cpp: 24 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

// @baa 0x00defb60
void sub_00defb60(void) {  }

// @baa 0x00defb70
void sub_00defb70(void) {  }

// @baa 0x00defb80
void sub_00defb80(void) {  }

// @baa 0x00defb90
void sub_00defb90(void) {  }

// @baa 0x00defba0
float10 sub_00defba0(double param_1)
{
  return (float10)param_1;
}

// @baa 0x00defbb0
void sub_00defbb0(void) {  }

struct C { int sub_00defbc0(void); };

// @baa 0x00defbc0
int C::sub_00defbc0(void) { return *(int*)((char*)this + 20); }

struct S {
    virtual void vf_00();
    virtual void vf_04();
    virtual void vf_08();
    virtual void vf_0c();
    virtual void vf_10();
    virtual void vf_14();
    virtual void vf_18(INT Value);
};

// @baa 0x00defc30
void sub_00defc30(S* p, INT Value)
{
    p->vf_18(Value);
}

struct C_00defc70 {
    int sub_00defc70();
};

// @baa 0x00defc70
int C_00defc70::sub_00defc70(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 0x88) + 7 >> 3;
}

struct C_00defc80 { int sub_00defc80(void); };

// @baa 0x00defc80
int C_00defc80::sub_00defc80(void) { return *(int*)((char*)this + 136); }

struct C_00defc90 { int sub_00defc90(void); };

// @baa 0x00defc90
int C_00defc90::sub_00defc90(void) { return *(int*)((char*)this + 140); }

struct C_00defca0 { void sub_00defca0(void); };

// @baa 0x00defca0
void C_00defca0::sub_00defca0(void) { *(int*)((char*)this + 52) = 1; }

struct C_00defcb0 { C_00defcb0* sub_00defcb0(void); };

// @baa 0x00defcb0
C_00defcb0* C_00defcb0::sub_00defcb0(void) { *(int*)((char*)this + 4) = 0; return this; }

struct C_00defce0 { int sub_00defce0(void); };

// @baa 0x00defce0
int C_00defce0::sub_00defce0(void) { return *(int*)((char*)this + 4); }

// @baa 0x00defcf0
undefined2 sub_00defcf0(void)
{
  return 0x69;
}

// @baa 0x00defd00
undefined2 sub_00defd00(void)
{
  return 0x66;
}

// @baa 0x00defd10
undefined2 sub_00defd10(void)
{
  return 99;
}

// @baa 0x00defd20
undefined2 sub_00defd20(void)
{
  return 0x73;
}

struct C_00defd30 { int sub_00defd30(void); };

// @baa 0x00defd30
int C_00defd30::sub_00defd30(void) { return *(int*)((char*)this + 148); }

struct C_00defd40 { char* sub_00defd40(void); };

// @baa 0x00defd40
char* C_00defd40::sub_00defd40(void) { return (char*)this + 136; }

extern "C" int g_026c47d8;
extern "C" int g_026c47dc;
struct UObjectThunk {
    virtual void V00();
    virtual void V04();
    virtual void V08();
    virtual void V0c();
    virtual void V10();
    virtual void V14();
    virtual void V18();
    virtual void V1c();
    virtual void V20();
    virtual void V24();
    virtual void V28();
    virtual void V2c();
    virtual void V30();
    virtual void V34();
    virtual void V38();
    virtual void V3c();
    virtual void V40();
    virtual void V44();
    virtual void V48();
    virtual void V4c();
    virtual void V50();
    virtual void V54();
    virtual void V58();
    virtual void V5c();
    virtual void V60();
    virtual void V64();
    virtual void V68();
    virtual void V6c();
    virtual void V70();
    virtual void V74();
    virtual void V78();
    virtual void V7c();
    virtual void V80();
    virtual void V84();
    virtual void V88();
    virtual void V8c();
    virtual void V90();
    virtual void V94();
    virtual void V98();
    virtual void V9c();
    virtual void VA0();
    virtual void VA4();
    virtual void VA8();
    virtual void VAc();
    virtual void VB0();
    virtual void VB4();
    virtual void VB8();
    virtual void VBc();
    virtual void VC0();
    virtual void VC4();
    virtual void VC8();
    virtual void VCc();
    virtual void VD0();
    virtual void VD4();
    virtual void VD8();
    virtual void VDc();
    virtual void VE0();
    virtual void VE4();
    virtual void VE8();
    virtual void ProcessEvent(int, int, int);
    int __thiscall sub_005d7d10(int, int, int);
    void sub_00defd70();
};

// @baa 0x00defd70
void UObjectThunk::sub_00defd70()
{
    this->ProcessEvent(this->sub_005d7d10(g_026c47d8, g_026c47dc, 0), 0, 0);
}

extern "C" int g_026c5178;
extern "C" int g_026c517c;
struct UObjectThunk_00defda0 {
    virtual void V00();
    virtual void V04();
    virtual void V08();
    virtual void V0c();
    virtual void V10();
    virtual void V14();
    virtual void V18();
    virtual void V1c();
    virtual void V20();
    virtual void V24();
    virtual void V28();
    virtual void V2c();
    virtual void V30();
    virtual void V34();
    virtual void V38();
    virtual void V3c();
    virtual void V40();
    virtual void V44();
    virtual void V48();
    virtual void V4c();
    virtual void V50();
    virtual void V54();
    virtual void V58();
    virtual void V5c();
    virtual void V60();
    virtual void V64();
    virtual void V68();
    virtual void V6c();
    virtual void V70();
    virtual void V74();
    virtual void V78();
    virtual void V7c();
    virtual void V80();
    virtual void V84();
    virtual void V88();
    virtual void V8c();
    virtual void V90();
    virtual void V94();
    virtual void V98();
    virtual void V9c();
    virtual void VA0();
    virtual void VA4();
    virtual void VA8();
    virtual void VAc();
    virtual void VB0();
    virtual void VB4();
    virtual void VB8();
    virtual void VBc();
    virtual void VC0();
    virtual void VC4();
    virtual void VC8();
    virtual void VCc();
    virtual void VD0();
    virtual void VD4();
    virtual void VD8();
    virtual void VDc();
    virtual void VE0();
    virtual void VE4();
    virtual void VE8();
    virtual void ProcessEvent(int, int, int);
    int __thiscall sub_005d7d10(int, int, int);
    void sub_00defda0();
};

// @baa 0x00defda0
void UObjectThunk_00defda0::sub_00defda0()
{
    this->ProcessEvent(this->sub_005d7d10(g_026c5178, g_026c517c, 0), 0, 0);
}

struct C_00defdd0 { char* sub_00defdd0(void); };

// @baa 0x00defdd0
char* C_00defdd0::sub_00defdd0(void) { return (char*)this + 296; }

struct C_view {
    int sub_0073f030(int);
};

int sub_009e0e10(...);
// @baa 0x00deff40
uint UMorphWeightSequence::sub_00deff40(undefined4 param_2)
{
    int param_1 = (int)this;
  uint uVar1;
  uint uVar2;
  uVar1 = ((C_view *)(this))->sub_0073f030(param_2);
  uVar2 = sub_009e0e10(param_2,param_1 + 0x4c);
  return uVar2 | uVar1;
}
