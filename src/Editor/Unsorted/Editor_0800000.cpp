// Editor_0800000.cpp: 25 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

extern "C" int g_026c4e04;
extern "C" int g_026c4e08;
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
    void sub_00802cb0();
};

// @baa 0x00802cb0
void UObjectThunk::sub_00802cb0()
{
    this->ProcessEvent(this->sub_005d7d10(g_026c4e04, g_026c4e08, 0), 0, 0);
}

extern "C" int g_026c4a7c;
extern "C" int g_026c4a80;
struct UObjectThunk_00802ce0 {
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
    void sub_00802ce0();
};

// @baa 0x00802ce0
void UObjectThunk_00802ce0::sub_00802ce0()
{
    this->ProcessEvent(this->sub_005d7d10(g_026c4a7c, g_026c4a80, 0), 0, 0);
}

struct C { C* sub_00802d10(int a0); };

// @baa 0x00802d10
C* C::sub_00802d10(int a0) { return this; }

struct S {
    virtual void vf_00();
    virtual void vf_04();
    virtual void vf_08();
    virtual void vf_0c();
    virtual void vf_10();
    virtual void vf_14();
    virtual void vf_18(INT Value);
};

// @baa 0x00802d60
void sub_00802d60(S* p, INT Value)
{
    p->vf_18(Value);
}

// @baa 0x00802d80
int sub_00802d80(int a0, int a1) { return a1; }

extern char g_01e3f3e0[];
// @baa 0x00802d90
int sub_00802d90(void) { return (int)g_01e3f3e0; }

struct C_00802da0 { C_00802da0* sub_00802da0(int a0); };

// @baa 0x00802da0
C_00802da0* C_00802da0::sub_00802da0(int a0) { return this; }

extern "C" int g_026c52a0;
extern "C" int g_026c52a4;
struct UObjectThunk_00802db0 {
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
    void sub_00802db0();
};

// @baa 0x00802db0
void UObjectThunk_00802db0::sub_00802db0()
{
    this->ProcessEvent(this->sub_005d7d10(g_026c52a0, g_026c52a4, 0), 0, 0);
}

int sub_006fd000(...);
int sub_006ff0b0(void);
extern undefined4 g_026b12c4;
// @baa 0x00802e40
int sub_00802e40(void)
{
  if (g_026b12c4 == 0) {
    g_026b12c4 = sub_006fd000(L"Engine");
    sub_006ff0b0();
  }
  return g_026b12c4;
}

// @baa 0x00802e70
void sub_00802e70(S* p, INT Value)
{
    p->vf_18(Value);
}

int sub_005e1960(...);
int sub_0090b930(void);
int sub_009126b0(...);
extern undefined4 g_026667a8;
extern undefined4 g_026b5d80;
// @baa 0x00802ec0
void sub_00802ec0(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6)
{
  if (g_026b5d80 == 0) {
    g_026b5d80 = sub_009126b0(L"Engine");
    sub_0090b930();
  }
  sub_005e1960(g_026b5d80,param_2,param_3,param_4,param_5,param_6,0,g_026667a8,0,0,0);
  return;
}

// @baa 0x00802f20
void sub_00802f20(S* p, INT Value)
{
    p->vf_18(Value);
}

struct C_00802f90 { C_00802f90* sub_00802f90(void); };

// @baa 0x00802f90
C_00802f90* C_00802f90::sub_00802f90(void) { return this; }

// @baa 0x00802fc0
int sub_00802fc0(int a0, int a1) { return a1; }

// @baa 0x00802ff0
int sub_00802ff0(int a0, int a1) { return a1; }

struct C_00803000 { int sub_00803000(void); };

// @baa 0x00803000
int C_00803000::sub_00803000(void) { return *(int*)((char*)this + 420); }

struct C_00803010 { int sub_00803010(void); };

// @baa 0x00803010
int C_00803010::sub_00803010(void) { return *(int*)((char*)this + 424); }

extern undefined4 g_025e30f8;
// @baa 0x00803020
bool sub_00803020(void)
{
  return g_025e30f8 != 0;
}

// @baa 0x008034a0
undefined4 sub_008034a0(int param_1, int param_2)
{
  if (0.0 < *(float *)(param_2 + 4) - *(float *)(param_1 + 4)) {
    return 1;
  }
  return 0xffffffff;
}

extern char g_01f3df94[];
struct C_008034d0 { C_008034d0* sub_008034d0(void); };

// @baa 0x008034d0
C_008034d0* C_008034d0::sub_008034d0(void) { *(int*)((char*)this + 0) = (int)g_01f3df94; return this; }

struct C_00803520 {
    undefined4 sub_00803520();
};

// @baa 0x00803520
undefined4 C_00803520::sub_00803520(void)
{
    int param_1 = (int)this;

  if ((*(int *)(param_1 + 0x168) != 0) && (*(int *)(param_1 + 0x150) == 0)) {
    return 1;
  }
  return 0;
}

struct C_00803540 { C_00803540* sub_00803540(int a0); };

// @baa 0x00803540
C_00803540* C_00803540::sub_00803540(int a0) { return this; }

// @baa 0x00803810
void AActor::vf_1b4(FLOAT a0) {  }

// @baa 0x00803510
INT __stdcall sub_00803510(void* Object)
{
    return *(INT*)((char*)Object + 0x11c);
}

/* Kit gap: APawn::eventBreathTimer (the script-event glue, 0x00802db0) isn't declared. */

// @baa 0x00803820
/* APawn slot 0x1b4 (kit vf_1b4): UE3's APawn::TickSpecial(FLOAT DeltaSeconds): the authority counts down
 * BreathTime (firing BreathTimer when it runs out); a pawn without physics counts down its controller's MoveTimer. */
void APawn::vf_1b4(FLOAT DeltaSeconds)
{
    if (Role == ROLE_Authority && BreathTime > 0.f)
    {
        BreathTime -= DeltaSeconds;
        if (BreathTime < 0.001f)
        {
            BreathTime = 0.f;
            ((APawn*)this)->eventBreathTimer();
        }
    }
    if (Physics == PHYS_None && Controller)
    {
        Controller->MoveTimer -= DeltaSeconds;
    }
}
