// Engine_09a0000.cpp (part 2 of 2): 54 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

// @baa 0x009aea10
void sub_009aea10(void) {  }

// @baa 0x009aea20
void sub_009aea20(void) {  }

// @baa 0x009aea30
void sub_009aea30(void) {  }

struct C {
    void sub_009aeac0(float *, int);
};

// @baa 0x009aeac0
void C::sub_009aeac0(float * param_2, int param_3)
{
    float * param_1 = (float *)this;
  if (param_3 != 0) {
    *param_2 = param_1[3] + *param_1;
    param_2[1] = param_1[4] + param_1[1];
    param_2[2] = param_1[5] + param_1[2];
    return;
  }
  *param_2 = *param_1 - param_1[3];
  param_2[1] = param_1[1] - param_1[4];
  param_2[2] = param_1[2] - param_1[5];
  return;
}

// @baa 0x009aeb30
undefined2 sub_009aeb30(void)
{
  return 0x73;
}

extern "C" int g_026c52a8;
extern "C" int g_026c52ac;
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
    void sub_009aeb40();
};

// @baa 0x009aeb40
void UObjectThunk::sub_009aeb40()
{
    this->ProcessEvent(this->sub_005d7d10(g_026c52a8, g_026c52ac, 0), 0, 0);
}

int sub_0077bcb0(...);
int sub_007835d0(void);
extern undefined4 g_026b3ca0;
// @baa 0x009aeb70
int sub_009aeb70(void)
{
  if (g_026b3ca0 == 0) {
    g_026b3ca0 = sub_0077bcb0(L"Engine");
    sub_007835d0();
  }
  return g_026b3ca0;
}

// @baa 0x009aeba0
int sub_009aeba0(int a0, int a1) { return a1; }

// @baa 0x009aebb0
int sub_009aebb0(int a0, int a1) { return a1; }

// @baa 0x009aebc0
int sub_009aebc0(int a0, int a1) { return a1; }

// @baa 0x009aebd0
int sub_009aebd0(int a0, int a1) { return a1; }

extern "C" int g_026c3d40;
extern "C" int g_026c3d44;
struct UObjectThunk_009aebe0 {
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
    void sub_009aebe0();
};

// @baa 0x009aebe0
void UObjectThunk_009aebe0::sub_009aebe0()
{
    this->ProcessEvent(this->sub_005d7d10(g_026c3d40, g_026c3d44, 0), 0, 0);
}

struct C_009aec10 { C_009aec10* sub_009aec10(int a0); };

// @baa 0x009aec10
C_009aec10* C_009aec10::sub_009aec10(int a0) { return this; }

struct C_009aec20 { C_009aec20* sub_009aec20(int a0); };

// @baa 0x009aec20
C_009aec20* C_009aec20::sub_009aec20(int a0) { return this; }

struct C_009aec30 { C_009aec30* sub_009aec30(int a0); };

// @baa 0x009aec30
C_009aec30* C_009aec30::sub_009aec30(int a0) { return this; }

extern "C" int g_026c4158;
extern "C" int g_026c415c;
struct UObjectThunk_009aed50 {
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
    void sub_009aed50();
};

// @baa 0x009aed50
void UObjectThunk_009aed50::sub_009aed50()
{
    this->ProcessEvent(this->sub_005d7d10(g_026c4158, g_026c415c, 0), 0, 0);
}

extern "C" int g_026c43dc;
extern "C" int g_026c43e0;
struct UObjectThunk_009aed80 {
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
    void sub_009aed80();
};

// @baa 0x009aed80
void UObjectThunk_009aed80::sub_009aed80()
{
    this->ProcessEvent(this->sub_005d7d10(g_026c43dc, g_026c43e0, 0), 0, 0);
}

struct C_009aedb0 { C_009aedb0* sub_009aedb0(void); };

// @baa 0x009aedb0
C_009aedb0* C_009aedb0::sub_009aedb0(void) { return this; }

struct S {
    virtual void vf_00();
    virtual void vf_04();
    virtual void vf_08();
    virtual void vf_0c();
    virtual void vf_10();
    virtual void vf_14();
    virtual void vf_18(INT Value);
};

// @baa 0x009aedc0
void sub_009aedc0(S* p, INT Value)
{
    p->vf_18(Value);
}

// @baa 0x009aede0
void sub_009aede0(S* p, INT Value)
{
    p->vf_18(Value);
}

// @baa 0x009aee00
void sub_009aee00(S* p, INT Value)
{
    p->vf_18(Value);
}

struct C_009aee20 { C_009aee20* sub_009aee20(void); };

// @baa 0x009aee20
C_009aee20* C_009aee20::sub_009aee20(void) { return this; }

int sub_005e1960(...);
int sub_007f5440(void);
int sub_007f9820(...);
extern undefined4 g_026667a8;
extern undefined4 g_026b53d0;
// @baa 0x009aeea0
void sub_009aeea0(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6)
{
  if (g_026b53d0 == 0) {
    g_026b53d0 = sub_007f9820(L"Engine");
    sub_007f5440();
  }
  sub_005e1960(g_026b53d0,param_2,param_3,param_4,param_5,param_6,0,g_026667a8,0,0,0);
  return;
}

// @baa 0x009aef00
int sub_009aef00(int a0, int a1) { return a1; }

extern char g_01f99c70[];
struct C_009aef10 { C_009aef10* sub_009aef10(void); };

// @baa 0x009aef10
C_009aef10* C_009aef10::sub_009aef10(void) { *(int*)((char*)this + 0) = (int)g_01f99c70; return this; }

struct C_009aefd0 {
    undefined4 sub_009aefd0(int *);
};

// @baa 0x009aefd0
undefined4 C_009aefd0::sub_009aefd0(int * param_2)
{
    int * param_1 = (int *)this;

  if (((param_1[2] == param_2[2]) && (*param_1 == *param_2)) && (param_1[1] == param_2[1])) {
    return 1;
  }
  return 0;
}

struct C_009af030 {
    byte sub_009af030();
};

// @baa 0x009af030
byte C_009af030::sub_009af030(void)
{
    byte * param_1 = (byte *)this;

  return *param_1 >> 1 & 1;
}

struct C_009af040 {
    undefined4 sub_009af040(int);
};

// @baa 0x009af040
undefined4 C_009af040::sub_009af040(int param_2)
{
    float * param_1 = (float *)this;
  if ((((*param_1 <= *(float *)(param_2 + 0xa8)) && (*(float *)(param_2 + 0xa8) <= param_1[3])) &&
      (param_1[1] <= *(float *)(param_2 + 0xac))) &&
     (((*(float *)(param_2 + 0xac) <= param_1[4] && (param_1[2] <= *(float *)(param_2 + 0xb0))) &&
      (*(float *)(param_2 + 0xb0) <= param_1[5])))) {
    return 1;
  }
  return 0;
}

struct C_009afd20 {
    void sub_009afd20();
};

// @baa 0x009afd20
void C_009afd20::sub_009afd20(void)
{
    int param_1 = (int)this;
  *(undefined4 *)(param_1 + 4) = 1;
  return;
}

struct C_009afd30 { int sub_009afd30(void); };

// @baa 0x009afd30
int C_009afd30::sub_009afd30(void) { return *(int*)((char*)this + 44); }

struct C_009afd40 { int sub_009afd40(void); };

// @baa 0x009afd40
int C_009afd40::sub_009afd40(void) { return *(int*)((char*)this + 48); }

struct C_009afd50 { int sub_009afd50(void); };

// @baa 0x009afd50
int C_009afd50::sub_009afd50(void) { return *(int*)((char*)this + 52); }

struct C_009afd60 { void sub_009afd60(void); };

// @baa 0x009afd60
void C_009afd60::sub_009afd60(void) { *(int*)((char*)this + 52) = 1; }

struct C_009afd70 { void sub_009afd70(void); };

// @baa 0x009afd70
void C_009afd70::sub_009afd70(void) { *(int*)((char*)this + 52) = 0; }

struct C_009afd80 { int sub_009afd80(void); };

// @baa 0x009afd80
int C_009afd80::sub_009afd80(void) { return *(int*)((char*)this + 28); }

struct C_009afd90 { int sub_009afd90(void); };

// @baa 0x009afd90
int C_009afd90::sub_009afd90(void) { return *(int*)((char*)this + 28); }

struct C_009afda0 { void sub_009afda0(int a0); };

// @baa 0x009afda0
void C_009afda0::sub_009afda0(int a0) { *(int*)((char*)this + 8) = a0; }

struct C_009afdb0 { int sub_009afdb0(void); };

// @baa 0x009afdb0
int C_009afdb0::sub_009afdb0(void) { return *(int*)((char*)this + 12); }

struct C_009afdc0 { void sub_009afdc0(int a0); };

// @baa 0x009afdc0
void C_009afdc0::sub_009afdc0(int a0) { *(int*)((char*)this + 12) = a0; }

struct C_009afdd0 { int sub_009afdd0(void); };

// @baa 0x009afdd0
int C_009afdd0::sub_009afdd0(void) { return *(int*)((char*)this + 24); }

struct C_009afde0 { int sub_009afde0(void); };

// @baa 0x009afde0
int C_009afde0::sub_009afde0(void) { return *(int*)((char*)this + 28); }

struct C_009afdf0 { int sub_009afdf0(void); };

// @baa 0x009afdf0
int C_009afdf0::sub_009afdf0(void) { return *(int*)((char*)this + 56); }

struct C_009afe10 {
    void sub_009afe10(undefined4 *);
};

// @baa 0x009afe10
void C_009afe10::sub_009afe10(undefined4 * param_2)
{
    int param_1 = (int)this;

  *(undefined4 *)(param_1 + 0x50) = *param_2;
  *(undefined4 *)(param_1 + 0x54) = param_2[1];
  return;
}

struct C_009afe30 {
    void sub_009afe30(undefined4 *);
};

// @baa 0x009afe30
void C_009afe30::sub_009afe30(undefined4 * param_2)
{
    int param_1 = (int)this;

  *(undefined4 *)(param_1 + 0x58) = *param_2;
  *(undefined4 *)(param_1 + 0x5c) = param_2[1];
  return;
}

struct C_009afe50 { int sub_009afe50(void); };

// @baa 0x009afe50
int C_009afe50::sub_009afe50(void) { return *(int*)((char*)this + 280); }

// @baa 0x009afed0
int __stdcall sub_009afed0(int param1)
{
    return 0xFFFFFFFF;
}

// @baa 0x009afee0
undefined4 sub_009afee0(void)
{
  return 0xffffffff;
}

// @baa 0x009afef0
undefined4 sub_009afef0(void)
{
  return 0xffffffff;
}

// @baa 0x009aff00
undefined4 sub_009aff00(void)
{
  return 0xffffffff;
}

// @baa 0x009aff10
undefined4 sub_009aff10(void)
{
  return 0xffffffff;
}

// @baa 0x009aff20
undefined4 sub_009aff20(void)
{
  return 0xffffffff;
}

// @baa 0x009aff30
undefined4 sub_009aff30(void)
{
  return 0xffffffff;
}

struct C_009afe00
{
    char pad_00[0x68];
    INT Offset;

    BYTE sub_009afe00(char* Object);
};

// @baa 0x009afe00
BYTE C_009afe00::sub_009afe00(char* Object)
{
    return Object[Offset];
}

// @baa 0x009afe60
INT __stdcall sub_009afe60(INT Value)
{
    return Value == 1;
}
