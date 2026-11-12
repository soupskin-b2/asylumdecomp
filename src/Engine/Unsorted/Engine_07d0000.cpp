// Engine_07d0000.cpp (part 1 of 9): 319 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x007d3da0
int sub_007d3da0(void) { return 1687; }

// @baa 0x007d3db0
int ULensFlare::sub_007d3db0(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 8) * 0x1c;
}

// @baa 0x007d3dd0
int ULensFlare::sub_007d3dd0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0xb4) * 7 + *(int *)(param_1 + 0x84)) * 4;
}

// @baa 0x007d3df0
int ULensFlare::sub_007d3df0(void)
{
    int param_1 = (int)this;

  return ((*(int *)(param_1 + 0xb4) + 0xc) * 7 + *(int *)(param_1 + 0x84)) * 4;
}

int sub_0053dfa0(...);
int sub_007d3d10(void);
// @baa 0x007d3e10
undefined4 ULensFlare::sub_007d3e10(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_007d3d10();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

void sub_007d4020();
// @baa 0x007d4b50
void sub_007d4b50(void) { sub_007d4020(); }

// @baa 0x007d57a0
void sub_007d57a0(void) {  }

// @baa 0x007d57b0
void sub_007d57b0(void) {  }

// @baa 0x007d57c0
float10 sub_007d57c0(double param_1)
{
  return (float10)param_1;
}

struct C { void sub_007d57d0(void); };

// @baa 0x007d57d0
void C::sub_007d57d0(void) { *(int*)((char*)this + 68) = 1; }

struct C_007d57e0 { C_007d57e0* sub_007d57e0(int a0); };

// @baa 0x007d57e0
C_007d57e0* C_007d57e0::sub_007d57e0(int a0) { *(int*)((char*)this + 0) = 0; return this; }

// @baa 0x007d5930
uint sub_007d5930(uint param_1)
{
  return param_1 & 0xfffc;
}

struct C_007d5960 {
    void sub_007d5960();
};

// @baa 0x007d5960
void C_007d5960::sub_007d5960(void)
{
    int param_1 = (int)this;

  *(uint *)(param_1 + 0x74) = *(uint *)(param_1 + 0x74) | 0x20000;
  return;
}

// @baa 0x007d5970
undefined2 sub_007d5970(void)
{
  return 0x73;
}

// @baa 0x007d5980
undefined2 sub_007d5980(void)
{
  return 0x73;
}

struct C_007d5990 {
    void sub_007d5990(float);
};

// @baa 0x007d5990
void C_007d5990::sub_007d5990(float param_2)
{
    float * param_1 = (float *)this;
  *param_1 = param_2;
  param_1[1] = param_1[1] + param_2;
  return;
}

int sub_00c96790(void);
int sub_00cb2930(...);
extern undefined4 g_026c3ca8;
// @baa 0x007d59b0
int sub_007d59b0(void)
{
  if (g_026c3ca8 == 0) {
    g_026c3ca8 = sub_00cb2930(L"Engine");
    sub_00c96790();
  }
  return g_026c3ca8;
}

struct C_007d5a90 { C_007d5a90* sub_007d5a90(void); };

// @baa 0x007d5a90
C_007d5a90* C_007d5a90::sub_007d5a90(void) { return this; }

struct C_007d5af0 {
    bool sub_007d5af0();
};

// @baa 0x007d5af0
bool C_007d5af0::sub_007d5af0(void)
{
    int * param_1 = (int *)this;

  return *param_1 != 0;
}

struct C_007d5b00 { C_007d5b00* sub_007d5b00(int a0); };

// @baa 0x007d5b00
C_007d5b00* C_007d5b00::sub_007d5b00(int a0) { return this; }

struct C_007d5b10 { C_007d5b10* sub_007d5b10(int a0); };

// @baa 0x007d5b10
C_007d5b10* C_007d5b10::sub_007d5b10(int a0) { return this; }

struct C_007d5b20 { C_007d5b20* sub_007d5b20(int a0); };

// @baa 0x007d5b20
C_007d5b20* C_007d5b20::sub_007d5b20(int a0) { return this; }

struct C_007d5b30 { C_007d5b30* sub_007d5b30(int a0); };

// @baa 0x007d5b30
C_007d5b30* C_007d5b30::sub_007d5b30(int a0) { return this; }

struct C_007d5b40 { C_007d5b40* sub_007d5b40(int a0); };

// @baa 0x007d5b40
C_007d5b40* C_007d5b40::sub_007d5b40(int a0) { return this; }

extern "C" int g_026c4e64;
extern "C" int g_026c4e68;
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
    void sub_007d5b50();
};

// @baa 0x007d5b50
void UObjectThunk::sub_007d5b50()
{
    this->ProcessEvent(this->sub_005d7d10(g_026c4e64, g_026c4e68, 0), 0, 0);
}

extern "C" int g_026c3ff8;
extern "C" int g_026c3ffc;
struct UObjectThunk_007d5b80 {
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
    void sub_007d5b80();
};

// @baa 0x007d5b80
void UObjectThunk_007d5b80::sub_007d5b80()
{
    this->ProcessEvent(this->sub_005d7d10(g_026c3ff8, g_026c3ffc, 0), 0, 0);
}

struct C_007d6240 { C_007d6240* sub_007d6240(int a0); };

// @baa 0x007d6240
C_007d6240* C_007d6240::sub_007d6240(int a0) { return this; }

struct C_007d6250 { C_007d6250* sub_007d6250(int a0); };

// @baa 0x007d6250
C_007d6250* C_007d6250::sub_007d6250(int a0) { return this; }

extern "C" int g_026c5104;
extern "C" int g_026c5108;
struct UObjectThunk_007d6260 {
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
    void sub_007d6260();
};

// @baa 0x007d6260
void UObjectThunk_007d6260::sub_007d6260()
{
    this->ProcessEvent(this->sub_005d7d10(g_026c5104, g_026c5108, 0), 0, 0);
}

int sub_00d67620(void);
int sub_00d8ad50(...);
extern undefined4 g_026c5968;
// @baa 0x007d6310
int sub_007d6310(void)
{
  if (g_026c5968 == 0) {
    g_026c5968 = sub_00d8ad50(L"Engine");
    sub_00d67620();
  }
  return g_026c5968;
}

struct C_007d6340 { C_007d6340* sub_007d6340(int a0); };

// @baa 0x007d6340
C_007d6340* C_007d6340::sub_007d6340(int a0) { return this; }

extern "C" int g_026c4200;
extern "C" int g_026c4204;
struct UObjectThunk_007d6350 {
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
    void sub_007d6350();
};

// @baa 0x007d6350
void UObjectThunk_007d6350::sub_007d6350()
{
    this->ProcessEvent(this->sub_005d7d10(g_026c4200, g_026c4204, 0), 0, 0);
}

struct S {
    virtual void vf_00();
    virtual void vf_04();
    virtual void vf_08();
    virtual void vf_0c();
    virtual void vf_10();
    virtual void vf_14();
    virtual void vf_18(INT Value);
};

// @baa 0x007d63f0
void sub_007d63f0(S* p, INT Value)
{
    p->vf_18(Value);
}

// @baa 0x007d6410
void sub_007d6410(S* p, INT Value)
{
    p->vf_18(Value);
}

struct C_007d6430 { C_007d6430* sub_007d6430(int a0); };

// @baa 0x007d6430
C_007d6430* C_007d6430::sub_007d6430(int a0) { return this; }

extern "C" int g_026c53e4;
extern "C" int g_026c53e8;
struct UObjectThunk_007d6440 {
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
    void sub_007d6440();
};

// @baa 0x007d6440
void UObjectThunk_007d6440::sub_007d6440()
{
    this->ProcessEvent(this->sub_005d7d10(g_026c53e4, g_026c53e8, 0), 0, 0);
}

extern "C" int g_026c3f24;
extern "C" int g_026c3f28;
struct UObjectThunk_007d6470 {
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
    void sub_007d6470();
};

// @baa 0x007d6470
void UObjectThunk_007d6470::sub_007d6470()
{
    this->ProcessEvent(this->sub_005d7d10(g_026c3f24, g_026c3f28, 0), 0, 0);
}

int sub_007826a0(...);
int sub_00782760(void);
extern undefined4 g_026b3b90;
// @baa 0x007d6510
int sub_007d6510(void)
{
  if (g_026b3b90 == 0) {
    g_026b3b90 = sub_007826a0(L"Engine");
    sub_00782760();
  }
  return g_026b3b90;
}

struct C_007d6540 { C_007d6540* sub_007d6540(int a0); };

// @baa 0x007d6540
C_007d6540* C_007d6540::sub_007d6540(int a0) { return this; }

// @baa 0x007d6960
undefined4 sub_007d6960(undefined4 param_1, undefined4 param_2)
{
  return param_2;
}

struct C_007d6970 {
    void sub_007d6970(undefined4, int, int);
};

// @baa 0x007d6970
void C_007d6970::sub_007d6970(undefined4 param_2, int param_3, int param_4)
{
    int param_1 = (int)this;

  if ((param_3 == 0) && (param_4 == 0)) {
    *(undefined4 *)(param_1 + 200) = param_2;
  }
  return;
}

struct C_007d6990 { void sub_007d6990(int a0); };

// @baa 0x007d6990
void C_007d6990::sub_007d6990(int a0) { *(int*)((char*)this + 608) = a0; }

int sub_009441d0(void);
int sub_0097fe70(...);
extern undefined4 g_026b5ef0;
// @baa 0x007d69a0
int sub_007d69a0(void)
{
  if (g_026b5ef0 == 0) {
    g_026b5ef0 = sub_0097fe70(L"Engine");
    sub_009441d0();
  }
  return g_026b5ef0;
}

// @baa 0x007d69d0
void sub_007d69d0(S* p, INT Value)
{
    p->vf_18(Value);
}

int sub_008f1180(...);
int sub_008f9480(void);
extern undefined4 g_026b5b70;
// @baa 0x007d69f0
int sub_007d69f0(void)
{
  if (g_026b5b70 == 0) {
    g_026b5b70 = sub_008f1180(L"Engine");
    sub_008f9480();
  }
  return g_026b5b70;
}

int sub_00d78200(void);
int sub_00d8c5a0(...);
extern undefined4 g_026c59b4;
// @baa 0x007d6a20
int sub_007d6a20(void)
{
  if (g_026c59b4 == 0) {
    g_026c59b4 = sub_00d8c5a0(L"Engine");
    sub_00d78200();
  }
  return g_026c59b4;
}

void sub_005ecf90();
// @baa 0x007d6e00
void sub_007d6e00(void) { sub_005ecf90(); }

extern char g_01f3059c[];
// @baa 0x007d6e20
int sub_007d6e20(void) { return (int)g_01f3059c; }

extern char g_01f36a7c[];
struct C_007d6e30 { C_007d6e30* sub_007d6e30(void); };

// @baa 0x007d6e30
C_007d6e30* C_007d6e30::sub_007d6e30(void) { *(int*)((char*)this + 0) = (int)g_01f36a7c; return this; }

extern char g_01ebb554[];
// @baa 0x007d6e40
void UGameEngine::sub_007d6e40(void) { *(int*)((char*)this + 0) = (int)g_01ebb554; }

// @baa 0x007d6e50
undefined4 * UGameEngine::sub_007d6e50(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ebb554);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

extern undefined4 g_026b21a0;
// @baa 0x007d6e70
undefined4 sub_007d6e70(void)
{
  g_026b21a0 = 1;
  return 4;
}

extern char g_01f3156c[];
// @baa 0x007d6e80
int sub_007d6e80(void) { return (int)g_01f3156c; }

extern char g_01f31590[];
// @baa 0x007d6ee0
int sub_007d6ee0(void) { return (int)g_01f31590; }

// @baa 0x007d6f10
undefined4 UGameEngine::sub_007d6f10(void)
{
    int param_1 = (int)this;
  float fVar1;
  float *pfVar2;
  pfVar2 = *(float **)(param_1 + 4);
  fVar1 = *(float *)(param_1 + 8);
  *pfVar2 = fVar1;
  pfVar2[1] = pfVar2[1] + fVar1;
  return 0xc;
}

extern char g_01f315b0[];
// @baa 0x007d6f30
int sub_007d6f30(void) { return (int)g_01f315b0; }

extern char g_01f36a94[];
struct C_007d6f40 { C_007d6f40* sub_007d6f40(void); };

// @baa 0x007d6f40
C_007d6f40* C_007d6f40::sub_007d6f40(void) { *(int*)((char*)this + 0) = (int)g_01f36a94; return this; }

// @baa 0x007d6f50
void UGameEngine::sub_007d6f50(void) { *(int*)((char*)this + 0) = (int)g_01ebb554; }

extern char g_01f36aa0[];
struct C_007d6f60 { C_007d6f60* sub_007d6f60(void); };

// @baa 0x007d6f60
C_007d6f60* C_007d6f60::sub_007d6f60(void) { *(int*)((char*)this + 0) = (int)g_01f36aa0; return this; }

// @baa 0x007d6f70
void UGameEngine::sub_007d6f70(void) { *(int*)((char*)this + 0) = (int)g_01ebb554; }

// @baa 0x007d6f80
void UGameEngine::sub_007d6f80(void) { *(int*)((char*)this + 0) = (int)g_01ebb554; }

// @baa 0x007d6f90
undefined4 * UGameEngine::sub_007d6f90(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ebb554);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x007d6fb0
undefined4 * UGameEngine::sub_007d6fb0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ebb554);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x007d6fd0
undefined4 * UGameEngine::sub_007d6fd0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ebb554);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_00579430(void);
extern undefined4 g_026b62b8;
// @baa 0x007d7010
void UGameEngine::vf_18c(void) {
  if (*(int *)(g_026b62b8 + 0x270) == 0) {
    sub_00579430();
  }
  *(uint *)(g_026b62b8 + 0x270) = (uint)(*(int *)(g_026b62b8 + 0x270) == 0);
  return;
}

int sub_009d8930(void);
int sub_009f3300(...);
extern undefined4 g_026b6418;
// @baa 0x007d7040
int sub_007d7040(void)
{
  if (g_026b6418 == 0) {
    g_026b6418 = sub_009f3300(L"Engine");
    sub_009d8930();
  }
  return g_026b6418;
}

// @baa 0x007d7070
void sub_007d7070(void) {  }

// @baa 0x007d7080
void AActor::vf_1a4(int a0, int a1) {  }

// @baa 0x007d7130
void AWorldInfo::SetZone(UBOOL a0, UBOOL a1) {  }

// @baa 0x007d7140
void __stdcall sub_007d7140(int a0) {  }

// @baa 0x007d7150
void __stdcall sub_007d7150(int a0) {  }

// @baa 0x007d7160
void AStaticMeshActorBase::vf_1d8(void)
{
    int param_1 = (int)this;

  *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) | 0x400000;
  return;
}

// @baa 0x007d72b0
void sub_007d72b0(void) {  }

// @baa 0x007d72c0
void sub_007d72c0(void) {  }

int sub_00982140(void);
int sub_009a4d10(...);
extern undefined4 g_026b6010;
// @baa 0x007d7400
int sub_007d7400(void)
{
  if (g_026b6010 == 0) {
    g_026b6010 = sub_009a4d10(L"Engine");
    sub_00982140();
  }
  return g_026b6010;
}

// @baa 0x007d7430
IMPLEMENT_CLASS_AT(ULineBatchComponent, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnLevel.cpp", 18);

// @baa 0x007d7540
int ULineBatchComponent::vf_000(void) { return 1; }

// @baa 0x007d7550
bool ULineBatchComponent::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x007d7780
undefined4 sub_007d7780(int * param_1, int * param_2)
{
  if ((((*param_1 == *param_2) && (param_1[1] == param_2[1])) && (param_1[2] == param_2[2])) &&
     (((param_1[3] == param_2[3] && (param_1[4] == param_2[4])) && (param_1[5] == param_2[5])))) {
    return 1;
  }
  return 0;
}

int sub_00627f70(...);
// @baa 0x007d77c0
void sub_007d77c0(undefined4 param_1)
{
  sub_00627f70(param_1,0x18,0);
  return;
}

struct C_007d7800 { C_007d7800* sub_007d7800(void); };

// @baa 0x007d7800
C_007d7800* C_007d7800::sub_007d7800(void) { return this; }

struct C_007d7810 {
    void sub_007d7810();
};

// @baa 0x007d7810
void C_007d7810::sub_007d7810(void)
{
    int param_1 = (int)this;

  *(undefined4 *)(param_1 + 0x1d0) = 0;
  *(undefined4 *)(param_1 + 0x1d4) = 0;
  *(undefined4 *)(param_1 + 0x1d8) = 0;
  *(undefined4 *)(param_1 + 0x1dc) = 0;
  return;
}

extern char g_01f33d8c[];
// @baa 0x007d7850
int sub_007d7850(void) { return (int)g_01f33d8c; }

struct C_007d7860 { void sub_007d7860(void); };

// @baa 0x007d7860
void C_007d7860::sub_007d7860(void) { *(int*)((char*)this + 0) = (int)g_01ebb554; }

struct C_007d7870 {
    undefined4 * sub_007d7870(byte);
};

// @baa 0x007d7870
undefined4 * C_007d7870::sub_007d7870(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ebb554);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_007d7890 {
    void sub_007d7890();
};

int sub_0053df70(...);
// @baa 0x007d7890
void C_007d7890::sub_007d7890(void)
{
    int * param_1 = (int *)this;

  int iVar1;
  
  iVar1 = param_1[1];
  if (param_1[2] != iVar1) {
    param_1[2] = iVar1;
    if ((*param_1 != 0) || (iVar1 != 0)) {
      iVar1 = sub_0053df70(*param_1,iVar1 * 4,8);
      *param_1 = iVar1;
    }
  }
  return;
}

struct C_007d78c0 { int a, b, c; C_007d78c0(); };

// @baa 0x007d78c0
C_007d78c0::C_007d78c0() : a(0), b(0), c(0) {}

struct C_007d78d0 { int sub_007d78d0(void); };

// @baa 0x007d78d0
int C_007d78d0::sub_007d78d0(void) { return *(int*)((char*)this + 4); }

struct C_007d78e0 { int sub_007d78e0(void); };

// @baa 0x007d78e0
int C_007d78e0::sub_007d78e0(void) { return *(int*)((char*)this + 4); }

struct C_007d78f0 { int sub_007d78f0(void); };

// @baa 0x007d78f0
int C_007d78f0::sub_007d78f0(void) { return *(int*)((char*)this + 4); }

struct C_007d7900 { int sub_007d7900(void); };

// @baa 0x007d7900
int C_007d7900::sub_007d7900(void) { return *(int*)((char*)this + 0); }

struct C_007d7910 { int sub_007d7910(void); };

// @baa 0x007d7910
int C_007d7910::sub_007d7910(void) { return *(int*)((char*)this + 4); }

struct T_007d7920 { int x; };

// @baa 0x007d7920
template const T_007d7920& TIndirectArray<T_007d7920>::operator()(INT) const;

struct C_007d7970 {
    INT Unk00; // 0x0
    INT Size;  // 0x4

    UBOOL sub_007d7970(INT Index);
};

// @baa 0x007d7970
UBOOL C_007d7970::sub_007d7970(INT Index)
{
    if (Index >= 0 && Index < Size)
        return 1;
    return 0;
}

struct C_007d7990 { int sub_007d7990(void); };

// @baa 0x007d7990
int C_007d7990::sub_007d7990(void) { return *(int*)((char*)this + 4); }

struct C_007d79a0 { int sub_007d79a0(void); };

// @baa 0x007d79a0
int C_007d79a0::sub_007d79a0(void) { return *(int*)((char*)this + 4); }

struct C_007d79b0 { int sub_007d79b0(void); };

// @baa 0x007d79b0
int C_007d79b0::sub_007d79b0(void) { return *(int*)((char*)this + 4); }

struct C_007d79c0 { int sub_007d79c0(void); };

// @baa 0x007d79c0
int C_007d79c0::sub_007d79c0(void) { return *(int*)((char*)this + 4); }

struct C_007d79d0 { int a, b, c; C_007d79d0(); };

// @baa 0x007d79d0
C_007d79d0::C_007d79d0() : a(0), b(0), c(0) {}

struct C_007d79e0 { int sub_007d79e0(void); };

// @baa 0x007d79e0
int C_007d79e0::sub_007d79e0(void) { return *(int*)((char*)this + 4); }

struct C_007d7a30 { int a, b, c; C_007d7a30(); };

// @baa 0x007d7a30
C_007d7a30::C_007d7a30() : a(0), b(0), c(0) {}

struct C_007d7a40 { int a, b, c; C_007d7a40(); };

// @baa 0x007d7a40
C_007d7a40::C_007d7a40() : a(0), b(0), c(0) {}

struct C_007d7a50 { int sub_007d7a50(void); };

// @baa 0x007d7a50
int C_007d7a50::sub_007d7a50(void) { return *(int*)((char*)this + 4); }

struct C_007d7a60 { int a, b, c; C_007d7a60(); };

// @baa 0x007d7a60
C_007d7a60::C_007d7a60() : a(0), b(0), c(0) {}

struct C_007d7a70 { int a, b, c; C_007d7a70(); };

// @baa 0x007d7a70
C_007d7a70::C_007d7a70() : a(0), b(0), c(0) {}

struct C_007d7a80 { int a, b, c; C_007d7a80(); };

// @baa 0x007d7a80
C_007d7a80::C_007d7a80() : a(0), b(0), c(0) {}

struct C_007d7a90 { int sub_007d7a90(void); };

// @baa 0x007d7a90
int C_007d7a90::sub_007d7a90(void) { return *(int*)((char*)this + 4); }

struct C_007d7aa0 { int sub_007d7aa0(void); };

// @baa 0x007d7aa0
int C_007d7aa0::sub_007d7aa0(void) { return *(int*)((char*)this + 4); }

struct C_007d7ab0 { int sub_007d7ab0(void); };

// @baa 0x007d7ab0
int C_007d7ab0::sub_007d7ab0(void) { return *(int*)((char*)this + 4); }

struct C_007d7ac0 { int sub_007d7ac0(void); };

// @baa 0x007d7ac0
int C_007d7ac0::sub_007d7ac0(void) { return *(int*)((char*)this + 4); }

struct C_007d7ad0 { int a, b, c; C_007d7ad0(); };

// @baa 0x007d7ad0
C_007d7ad0::C_007d7ad0() : a(0), b(0), c(0) {}

struct C_007d7ae0 { int sub_007d7ae0(void); };

// @baa 0x007d7ae0
int C_007d7ae0::sub_007d7ae0(void) { return *(int*)((char*)this + 0); }

struct C_007d7af0 { int sub_007d7af0(void); };

// @baa 0x007d7af0
int C_007d7af0::sub_007d7af0(void) { return *(int*)((char*)this + 4); }

struct S_007d7b00 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_007d7b00(INT Index);
};

// @baa 0x007d7b00
DWORD* S_007d7b00::sub_007d7b00(INT Index)
{
    return &Items(Index);
}

struct C_007d7b50 { int a, b, c; C_007d7b50(); };

// @baa 0x007d7b50
C_007d7b50::C_007d7b50() : a(0), b(0), c(0) {}

struct C_007d7b60 { int sub_007d7b60(void); };

// @baa 0x007d7b60
int C_007d7b60::sub_007d7b60(void) { return *(int*)((char*)this + 4); }

struct C_007d7b70 { int sub_007d7b70(void); };

// @baa 0x007d7b70
int C_007d7b70::sub_007d7b70(void) { return *(int*)((char*)this + 4); }

struct C_007d7b80 { int sub_007d7b80(void); };

// @baa 0x007d7b80
int C_007d7b80::sub_007d7b80(void) { return *(int*)((char*)this + 4); }

struct C_007d7b90 { int sub_007d7b90(void); };

// @baa 0x007d7b90
int C_007d7b90::sub_007d7b90(void) { return *(int*)((char*)this + 4); }

struct C_007d7ba0 { int a, b, c; C_007d7ba0(); };

// @baa 0x007d7ba0
C_007d7ba0::C_007d7ba0() : a(0), b(0), c(0) {}

struct C_007d7bb0 { int sub_007d7bb0(void); };

// @baa 0x007d7bb0
int C_007d7bb0::sub_007d7bb0(void) { return *(int*)((char*)this + 4); }

struct C_007d7bc0 { int a, b, c; C_007d7bc0(); };

// @baa 0x007d7bc0
C_007d7bc0::C_007d7bc0() : a(0), b(0), c(0) {}

struct C_007d7bd0 { int sub_007d7bd0(void); };

// @baa 0x007d7bd0
int C_007d7bd0::sub_007d7bd0(void) { return *(int*)((char*)this + 4); }

struct C_007d7c80 { C_007d7c80* sub_007d7c80(int a0); };

// @baa 0x007d7c80
C_007d7c80* C_007d7c80::sub_007d7c80(int a0) { return this; }

struct C_007d7d70 { int sub_007d7d70(void); };

// @baa 0x007d7d70
int C_007d7d70::sub_007d7d70(void) { return *(int*)((char*)this + 0); }

struct C_007d7e20 { int sub_007d7e20(void); };

// @baa 0x007d7e20
int C_007d7e20::sub_007d7e20(void) { return *(int*)((char*)this + 0); }

struct C_007d7e30 { int sub_007d7e30(void); };

// @baa 0x007d7e30
int C_007d7e30::sub_007d7e30(void) { return *(int*)((char*)this + 0); }

struct C_007d7eb0 { int sub_007d7eb0(void); };

// @baa 0x007d7eb0
int C_007d7eb0::sub_007d7eb0(void) { return *(int*)((char*)this + 0); }

struct C_007d7f30 { C_007d7f30* sub_007d7f30(int a0); };

// @baa 0x007d7f30
C_007d7f30* C_007d7f30::sub_007d7f30(int a0) { return this; }

struct C_007d7f40 { C_007d7f40* sub_007d7f40(int a0); };

// @baa 0x007d7f40
C_007d7f40* C_007d7f40::sub_007d7f40(int a0) { return this; }

struct C_007d7f50 { int sub_007d7f50(void); };

// @baa 0x007d7f50
int C_007d7f50::sub_007d7f50(void) { return *(int*)((char*)this + 0); }

struct C_007d7fd0 { C_007d7fd0* sub_007d7fd0(int a0); };

// @baa 0x007d7fd0
C_007d7fd0* C_007d7fd0::sub_007d7fd0(int a0) { return this; }

struct C_007d7fe0 { int sub_007d7fe0(void); };

// @baa 0x007d7fe0
int C_007d7fe0::sub_007d7fe0(void) { return *(int*)((char*)this + 0); }

struct C_007d8070 { C_007d8070* sub_007d8070(int a0); };

// @baa 0x007d8070
C_007d8070* C_007d8070::sub_007d8070(int a0) { return this; }

struct C_007d8080 { int sub_007d8080(void); };

// @baa 0x007d8080
int C_007d8080::sub_007d8080(void) { return *(int*)((char*)this + 0); }

struct C_007d8100 { int sub_007d8100(void); };

// @baa 0x007d8100
int C_007d8100::sub_007d8100(void) { return *(int*)((char*)this + 0); }

// @baa 0x007d8110
void sub_007d8110(S* p, INT Value)
{
    p->vf_18(Value);
}

// @baa 0x007d8130
void sub_007d8130(void) {  }

struct C_007d8140 { int sub_007d8140(void); };

// @baa 0x007d8140
int C_007d8140::sub_007d8140(void) { return *(int*)((char*)this + 0); }

struct C_007d81f0 { int sub_007d81f0(void); };

// @baa 0x007d81f0
int C_007d81f0::sub_007d81f0(void) { return *(int*)((char*)this + 0); }

struct C_007d8200 { int sub_007d8200(void); };

// @baa 0x007d8200
int C_007d8200::sub_007d8200(void) { return *(int*)((char*)this + 0); }

struct C_007d8210 { int sub_007d8210(void); };

// @baa 0x007d8210
int C_007d8210::sub_007d8210(void) { return *(int*)((char*)this + 0); }

struct C_007d8250 {
    int sub_007d8250(int);
};

// @baa 0x007d8250
int C_007d8250::sub_007d8250(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_007d8260 { int sub_007d8260(void); };

// @baa 0x007d8260
int C_007d8260::sub_007d8260(void) { return *(int*)((char*)this + 0); }

// @baa 0x007d8300
void __stdcall sub_007d8300(int a0, int a1) {  }

struct C_007d8310 { int sub_007d8310(void); };

// @baa 0x007d8310
int C_007d8310::sub_007d8310(void) { return *(int*)((char*)this + 0); }

struct C_007d8320 { int sub_007d8320(void); };

// @baa 0x007d8320
int C_007d8320::sub_007d8320(void) { return *(int*)((char*)this + 4); }

struct C_007d8360 { int sub_007d8360(void); };

// @baa 0x007d8360
int C_007d8360::sub_007d8360(void) { return *(int*)((char*)this + 0); }

struct C_007d8370 { int sub_007d8370(void); };

// @baa 0x007d8370
int C_007d8370::sub_007d8370(void) { return *(int*)((char*)this + 4); }

struct C_007d83b0 { int sub_007d83b0(void); };

// @baa 0x007d83b0
int C_007d83b0::sub_007d83b0(void) { return *(int*)((char*)this + 0); }

struct C_007d83c0 { int sub_007d83c0(void); };

// @baa 0x007d83c0
int C_007d83c0::sub_007d83c0(void) { return *(int*)((char*)this + 0); }

struct C_007d83d0 { int sub_007d83d0(void); };

// @baa 0x007d83d0
int C_007d83d0::sub_007d83d0(void) { return *(int*)((char*)this + 0); }

struct C_007d83e0 { int sub_007d83e0(void); };

// @baa 0x007d83e0
int C_007d83e0::sub_007d83e0(void) { return *(int*)((char*)this + 0); }

// @baa 0x007d83f0
void __stdcall sub_007d83f0(int a0, int a1) {  }

struct C_007d8400 { int sub_007d8400(void); };

// @baa 0x007d8400
int C_007d8400::sub_007d8400(void) { return *(int*)((char*)this + 0); }

struct C_007d8410 { int sub_007d8410(void); };

// @baa 0x007d8410
int C_007d8410::sub_007d8410(void) { return *(int*)((char*)this + 0); }

int sub_005d88c0(...);
int sub_009b04f0(void);
int sub_009c7e30(...);
extern undefined4 g_026b62b4;
// @baa 0x007d93f0
void sub_007d93f0(undefined4 param_1, undefined4 param_2, undefined4 param_3)
{
  if (g_026b62b4 == 0) {
    g_026b62b4 = sub_009c7e30(L"Engine");
    sub_009b04f0();
  }
  sub_005d88c0(g_026b62b4,param_1,param_2,param_3);
  return;
}

int sub_00becaf0(void);
int sub_00bf4420(...);
extern undefined4 g_026c0584;
// @baa 0x007d9490
void sub_007d9490(undefined4 param_1, undefined4 param_2, undefined4 param_3)
{
  if (g_026c0584 == 0) {
    g_026c0584 = sub_00bf4420(L"Engine");
    sub_00becaf0();
  }
  sub_005d88c0(g_026c0584,param_1,param_2,param_3);
  return;
}

// @baa 0x007d96b0
int sub_007d96b0(int param_1)
{
  int iVar1;
  
  if (param_1 != 0) {
    iVar1 = *(int *)(param_1 + 0x28);
    if (g_026b6010 == 0) {
      g_026b6010 = sub_009a4d10(L"Engine");
      sub_00982140();
    }
    if (iVar1 == g_026b6010) {
      return param_1;
    }
  }
  return 0;
}

int sub_00627f00(...);
// @baa 0x007d9790
void sub_007d9790(undefined4 param_1, undefined4 param_2)
{
  sub_00627f00(param_1,param_2,0xc);
  return;
}

// @baa 0x007d97b0
uint sub_007d97b0(uint param_1, uint param_2)
{
  return param_1 | -(uint)(param_1 == 0) & param_2;
}

struct C_007d97d0 { int sub_007d97d0(void); };

// @baa 0x007d97d0
int C_007d97d0::sub_007d97d0(void) { return *(int*)((char*)this + 4); }

struct S_007d97e0 {
    TArray<QWORD> Items; // 0x00
    const QWORD* sub_007d97e0(INT Index) const;
};

// @baa 0x007d97e0
const QWORD* S_007d97e0::sub_007d97e0(INT Index) const
{
    return &Items(Index);
}

struct E { BYTE Bytes[32]; };

struct S_007d9950 {
    TArray<E> Items; // 0x00
    const E* sub_007d9950(INT Index) const;
};

// @baa 0x007d9950
const E* S_007d9950::sub_007d9950(INT Index) const
{
    return &Items(Index);
}

struct C_007d99a0 { int a, b; C_007d99a0(const C_007d99a0 &); };

// @baa 0x007d99a0
C_007d99a0::C_007d99a0(const C_007d99a0 &o) : a(o.a), b(o.b) {}

struct C_007d9aa0 { int a, b; C_007d9aa0(const C_007d9aa0 &); };

// @baa 0x007d9aa0
C_007d9aa0::C_007d9aa0(const C_007d9aa0 &o) : a(o.a), b(o.b) {}

struct C_007d9ac0 { int a, b; C_007d9ac0(const C_007d9ac0 &); };

// @baa 0x007d9ac0
C_007d9ac0::C_007d9ac0(const C_007d9ac0 &o) : a(o.a), b(o.b) {}

// @baa 0x007d9ae0
void sub_007d9ae0(undefined1 * param_1, undefined1 * param_2)
{
  undefined1 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return;
}

// @baa 0x007d9b00
void sub_007d9b00(undefined4 * param_1, undefined4 * param_2)
{
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return;
}

// @baa 0x007d9c10
UBOOL UGameEngine::IsPreparingMapChange()
{
    int param_1 = (int)this;

  return 0 < *(int *)(param_1 + 0x4ec);
}

// @baa 0x007d9c20
UBOOL UGameEngine::IsReadyForMapChange()
{
    int param_1 = (int)this;

  if ((0 < *(int *)(param_1 + 0x4ec)) && (*(int *)(param_1 + 0x4ec) == *(int *)(param_1 + 0x504))) {
    return 1;
  }
  return 0;
}

// @baa 0x007d9c40
void UGameEngine::sub_007d9c40(float param_2)
{
    float * param_1 = (float *)this;
  if (param_2 <= 0.0) {
    param_2 = 0.0;
  }
  *param_1 = param_2;
  param_1[1] = param_2;
  param_1[2] = param_2;
  param_1[3] = param_2;
  param_1[4] = param_2;
  param_1[5] = param_2;
  param_1[6] = param_2;
  param_1[7] = param_2;
  param_1[8] = param_2;
  param_1[9] = param_2;
  return;
}

struct S_007da5c0 {
    TArray<DWORD> Items; // 0x00
    const DWORD* sub_007da5c0(INT Index) const;
};

// @baa 0x007da5c0
const DWORD* S_007da5c0::sub_007da5c0(INT Index) const
{
    return &Items(Index);
}

struct S_007da670 {
    TArray<DWORD> Items; // 0x00
    const DWORD* sub_007da670(INT Index) const;
};

// @baa 0x007da670
const DWORD* S_007da670::sub_007da670(INT Index) const
{
    return &Items(Index);
}

struct E_007da6c0 { BYTE Bytes[16]; };

struct S_007da6c0 {
    TArray<E_007da6c0> Items; // 0x00
    E_007da6c0* sub_007da6c0(INT Index);
};

// @baa 0x007da6c0
E_007da6c0* S_007da6c0::sub_007da6c0(INT Index)
{
    return &Items(Index);
}

struct E_007da770 { BYTE Bytes[12]; };

struct S_007da770 {
    TArray<E_007da770> Items; // 0x00
    E_007da770* sub_007da770(INT Index);
};

// @baa 0x007da770
E_007da770* S_007da770::sub_007da770(INT Index)
{
    return &Items(Index);
}

struct S_007da7c0 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_007da7c0(INT Index);
};

// @baa 0x007da7c0
DWORD* S_007da7c0::sub_007da7c0(INT Index)
{
    return &Items(Index);
}

typedef uint size_t;

struct C_007da810 {
    int sub_007da810(int);
    int sub_007d7f60(int);
};

void * sub_01a37612(void *, int, size_t);
// @baa 0x007da810
int C_007da810::sub_007da810(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  iVar1 = ((C_007da810 *)(this))->sub_007d7f60(param_2);
  sub_01a37612((void *)(*param_1 + iVar1 * 4),0,param_2 * 4);
  return iVar1;
}

struct E_007da850 { BYTE Bytes[40]; };

struct S_007da850 {
    TArray<E_007da850> Items; // 0x00
    E_007da850* sub_007da850(INT Index);
};

// @baa 0x007da850
E_007da850* S_007da850::sub_007da850(INT Index)
{
    return &Items(Index);
}

struct C_007da8a0 {
    int sub_007da8a0(int);
    int sub_007d7ff0(int);
};

// @baa 0x007da8a0
int C_007da8a0::sub_007da8a0(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  iVar1 = ((C_007da8a0 *)(this))->sub_007d7ff0(param_2);
  sub_01a37612((void *)(*param_1 + iVar1 * 0x28),0,param_2 * 0x28);
  return iVar1;
}

struct E_007da8e0 { BYTE Bytes[12]; };

struct S_007da8e0 {
    TArray<E_007da8e0> Items; // 0x00
    E_007da8e0* sub_007da8e0(INT Index);
};

// @baa 0x007da8e0
E_007da8e0* S_007da8e0::sub_007da8e0(INT Index)
{
    return &Items(Index);
}

struct C_007da930 {
    int sub_007da930(int);
    int sub_007d8090(int);
};

// @baa 0x007da930
int C_007da930::sub_007da930(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  iVar1 = ((C_007da930 *)(this))->sub_007d8090(param_2);
  sub_01a37612((void *)(*param_1 + iVar1 * 0xc),0,param_2 * 0xc);
  return iVar1;
}

struct E_007da970 { BYTE Bytes[48]; };

struct S_007da970 {
    TArray<E_007da970> Items; // 0x00
    E_007da970* sub_007da970(INT Index);
};

// @baa 0x007da970
E_007da970* S_007da970::sub_007da970(INT Index)
{
    return &Items(Index);
}

struct S_007daa20 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_007daa20(INT Index);
};

// @baa 0x007daa20
DWORD* S_007daa20::sub_007daa20(INT Index)
{
    return &Items(Index);
}

struct S_007daa70 {
    TArray<DWORD> Items; // 0x00
    const DWORD* sub_007daa70(INT Index) const;
};

// @baa 0x007daa70
const DWORD* S_007daa70::sub_007daa70(INT Index) const
{
    return &Items(Index);
}

struct S_007dab30 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_007dab30(INT Index);
};

// @baa 0x007dab30
DWORD* S_007dab30::sub_007dab30(INT Index)
{
    return &Items(Index);
}

struct S_007dab80 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_007dab80(INT Index);
};

// @baa 0x007dab80
DWORD* S_007dab80::sub_007dab80(INT Index)
{
    return &Items(Index);
}

struct S_007dabd0 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_007dabd0(INT Index);
};

// @baa 0x007dabd0
DWORD* S_007dabd0::sub_007dabd0(INT Index)
{
    return &Items(Index);
}

struct S_007dac20 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_007dac20(INT Index);
};

// @baa 0x007dac20
DWORD* S_007dac20::sub_007dac20(INT Index)
{
    return &Items(Index);
}

struct S_007dac70 {
    TArray<DWORD> Items; // 0x00
    const DWORD* sub_007dac70(INT Index) const;
};

// @baa 0x007dac70
const DWORD* S_007dac70::sub_007dac70(INT Index) const
{
    return &Items(Index);
}

struct E_007dad20 { BYTE Bytes[20]; };

struct S_007dad20 {
    TArray<E_007dad20> Items; // 0x00
    const E_007dad20* sub_007dad20(INT Index) const;
};

// @baa 0x007dad20
const E_007dad20* S_007dad20::sub_007dad20(INT Index) const
{
    return &Items(Index);
}

struct E_007dad70 { BYTE Bytes[36]; };

struct S_007dad70 {
    TArray<E_007dad70> Items; // 0x00
    const E_007dad70* sub_007dad70(INT Index) const;
};

// @baa 0x007dad70
const E_007dad70* S_007dad70::sub_007dad70(INT Index) const
{
    return &Items(Index);
}

struct S_007dae10 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_007dae10(INT Index);
};

// @baa 0x007dae10
DWORD* S_007dae10::sub_007dae10(INT Index)
{
    return &Items(Index);
}

struct S_007dae60 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_007dae60(INT Index);
};

// @baa 0x007dae60
DWORD* S_007dae60::sub_007dae60(INT Index)
{
    return &Items(Index);
}

struct C_007daf20 {
    int sub_007daf20(int);
};

// @baa 0x007daf20
int C_007daf20::sub_007daf20(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

// @baa 0x007daf30
void __stdcall sub_007daf30(int a0, int a1) {  }

// @baa 0x007db010
void __stdcall sub_007db010(int a0, int a1) {  }

struct C_007db020 {
    int sub_007db020(int);
};

// @baa 0x007db020
int C_007db020::sub_007db020(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 8;
}

// @baa 0x007db030
void __stdcall sub_007db030(int a0, int a1) {  }

struct C_007db040 {
    int sub_007db040(int);
};

// @baa 0x007db040
int C_007db040::sub_007db040(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 8;
}

struct C_007db050 {
    int sub_007db050(int);
};

// @baa 0x007db050
int C_007db050::sub_007db050(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_007db060 {
    int sub_007db060(int);
};

// @baa 0x007db060
int C_007db060::sub_007db060(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x1c;
}

struct C_007db080 {
    int sub_007db080(int);
};

// @baa 0x007db080
int C_007db080::sub_007db080(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

// @baa 0x007db090
void __stdcall sub_007db090(int a0, int a1) {  }

struct C_007db0a0 {
    int sub_007db0a0(int);
};

// @baa 0x007db0a0
int C_007db0a0::sub_007db0a0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x24;
}

struct C_007db0b0 {
    int sub_007db0b0(int);
};

// @baa 0x007db0b0
int C_007db0b0::sub_007db0b0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0xc;
}

// @baa 0x007db0c0
void __stdcall sub_007db0c0(int a0, int a1) {  }

struct C_007db0d0 {
    int sub_007db0d0(int);
};

// @baa 0x007db0d0
int C_007db0d0::sub_007db0d0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

// @baa 0x007db0e0
void __stdcall sub_007db0e0(int a0, int a1) {  }

struct C_007db0f0 {
    int sub_007db0f0(int);
};

// @baa 0x007db0f0
int C_007db0f0::sub_007db0f0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x28;
}

struct C_007db100 {
    int sub_007db100(int);
};

// @baa 0x007db100
int C_007db100::sub_007db100(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0xc;
}

// @baa 0x007db110
void __stdcall sub_007db110(int a0, int a1) {  }

struct E_007db120 { BYTE Bytes[48]; };

struct S_007db120 {
    TArray<E_007db120> Items; // 0x00
    const E_007db120* sub_007db120(INT Index) const;
};

// @baa 0x007db120
const E_007db120* S_007db120::sub_007db120(INT Index) const
{
    return &Items(Index);
}

struct C_007db170 {
    int sub_007db170(int);
};

// @baa 0x007db170
int C_007db170::sub_007db170(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x30 + *param_1;
}

// @baa 0x007db180
void __stdcall sub_007db180(int a0, int a1) {  }

struct C_007db190 {
    int sub_007db190(int);
};

// @baa 0x007db190
int C_007db190::sub_007db190(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

// @baa 0x007db1a0
void __stdcall sub_007db1a0(int a0, int a1) {  }

// @baa 0x007db1b0
void __stdcall sub_007db1b0(int a0, int a1) {  }

struct C_007db200 {
    int sub_007db200(int);
};

// @baa 0x007db200
int C_007db200::sub_007db200(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x20 + *param_1;
}

struct E_007db210 { BYTE Bytes[12]; };

struct S_007db210 {
    TArray<E_007db210> Items; // 0x00
    E_007db210* sub_007db210(INT Index);
};

// @baa 0x007db210
E_007db210* S_007db210::sub_007db210(INT Index)
{
    return &Items(Index);
}

struct C_007db260 {
    int sub_007db260(int);
};

// @baa 0x007db260
int C_007db260::sub_007db260(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0xc;
}

struct E_007db270 { BYTE Bytes[12]; };

struct S_007db270 {
    TArray<E_007db270> Items; // 0x00
    E_007db270* sub_007db270(INT Index);
};

// @baa 0x007db270
E_007db270* S_007db270::sub_007db270(INT Index)
{
    return &Items(Index);
}

struct C_007db2c0 {
    int sub_007db2c0(int);
};

// @baa 0x007db2c0
int C_007db2c0::sub_007db2c0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0xc;
}

struct C_007db330 {
    int sub_007db330(int);
};

// @baa 0x007db330
int C_007db330::sub_007db330(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

// @baa 0x007db340
void __stdcall sub_007db340(int a0, int a1) {  }

struct C_007db350 {
    int sub_007db350(int);
};

// @baa 0x007db350
int C_007db350::sub_007db350(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

// @baa 0x007db360
void __stdcall sub_007db360(int a0, int a1) {  }

struct C_007db370 {
    int sub_007db370(int);
};

// @baa 0x007db370
int C_007db370::sub_007db370(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x30 + *param_1;
}

// @baa 0x007db380
void __stdcall sub_007db380(int a0, int a1) {  }

struct C_007db3c0 { int sub_007db3c0(void); };

// @baa 0x007db3c0
int C_007db3c0::sub_007db3c0(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct S_007db3d0 {
    TArray<QWORD> Items; // 0x00
    QWORD* sub_007db3d0(INT Index);
};

// @baa 0x007db3d0
QWORD* S_007db3d0::sub_007db3d0(INT Index)
{
    return &Items(Index);
}

struct S_007db420 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_007db420(INT Index);
};

// @baa 0x007db420
DWORD* S_007db420::sub_007db420(INT Index)
{
    return &Items(Index);
}

struct E_007db4c0 { BYTE Bytes[36]; };

struct S_007db4c0 {
    TArray<E_007db4c0> Items; // 0x00
    E_007db4c0* sub_007db4c0(INT Index);
};

// @baa 0x007db4c0
E_007db4c0* S_007db4c0::sub_007db4c0(INT Index)
{
    return &Items(Index);
}

struct C_007db510 { int sub_007db510(void); };

// @baa 0x007db510
int C_007db510::sub_007db510(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_007db520 { int sub_007db520(void); };

// @baa 0x007db520
int C_007db520::sub_007db520(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_007db530 { int sub_007db530(void); };

// @baa 0x007db530
int C_007db530::sub_007db530(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_007db540 { int sub_007db540(void); };

// @baa 0x007db540
int C_007db540::sub_007db540(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_007db550 { int sub_007db550(void); };

// @baa 0x007db550
int C_007db550::sub_007db550(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_007db580 { int sub_007db580(void); };

// @baa 0x007db580
int C_007db580::sub_007db580(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_007db590 { int sub_007db590(void); };

// @baa 0x007db590
int C_007db590::sub_007db590(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_007db5c0 {
    int sub_007db5c0(int);
};

// @baa 0x007db5c0
int C_007db5c0::sub_007db5c0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x2c + *param_1;
}

struct C_007db5d0 {
    int sub_007db5d0(int);
};

// @baa 0x007db5d0
int C_007db5d0::sub_007db5d0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_007db6a0 { C_007db6a0* sub_007db6a0(void); };

// @baa 0x007db6a0
C_007db6a0* C_007db6a0::sub_007db6a0(void) { *(int*)((char*)this + 8) = -1; return this; }

struct C_007db860 {
    int sub_007db860(int);
};

// @baa 0x007db860
int C_007db860::sub_007db860(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x44;
}

int sub_005413d0(...);
// @baa 0x007db8b0
void sub_007db8b0(undefined4 param_1)
{
  sub_005413d0(param_1,0);
  return;
}

struct C_007db8c0 {
    int sub_007db8c0(int);
};

// @baa 0x007db8c0
int C_007db8c0::sub_007db8c0(int param_2)
{
    int * param_1 = (int *)this;
  return param_2 * 0x10 + *param_1;
}

struct C_007db8d0 {
    int sub_007db8d0(int);
};

// @baa 0x007db8d0
int C_007db8d0::sub_007db8d0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_007db8e0 { int sub_007db8e0(void); };

// @baa 0x007db8e0
int C_007db8e0::sub_007db8e0(void) { return *(int*)((char*)this + 20); }

// @baa 0x007db920
void sub_007db920(undefined4 param_1)
{
  sub_005413d0(param_1,0);
  return;
}

struct C_007db930 {
    int sub_007db930(int);
};

// @baa 0x007db930
int C_007db930::sub_007db930(int param_2)
{
    int * param_1 = (int *)this;
  return param_2 * 0x10 + *param_1;
}

struct C_007db940 {
    int sub_007db940(int);
};

// @baa 0x007db940
int C_007db940::sub_007db940(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

// @baa 0x007db980
void sub_007db980(undefined4 param_1)
{
  sub_005413d0(param_1,0);
  return;
}

struct C_007db990 {
    int sub_007db990(int);
};

// @baa 0x007db990
int C_007db990::sub_007db990(int param_2)
{
    int * param_1 = (int *)this;
  return *param_1 + param_2 * 0x44;
}

struct C_007db9b0 { int sub_007db9b0(void); };

// @baa 0x007db9b0
int C_007db9b0::sub_007db9b0(void) { return *(int*)((char*)this + 20); }

struct C_007db9c0 { int sub_007db9c0(void); };

// @baa 0x007db9c0
int C_007db9c0::sub_007db9c0(void) { return *(int*)((char*)this + 20); }

struct C_007dba00 {
    int sub_007dba00(int);
};

// @baa 0x007dba00
int C_007dba00::sub_007dba00(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x2c + *param_1;
}

struct C_007dba10 { int sub_007dba10(void); };

// @baa 0x007dba10
int C_007dba10::sub_007dba10(void) { return *(int*)((char*)this + 20); }

struct C_007dba20 { int sub_007dba20(void); };

// @baa 0x007dba20
int C_007dba20::sub_007dba20(void) { return *(int*)((char*)this + 20); }

struct C_007dba30 {
    int sub_007dba30();
};

// @baa 0x007dba30
int C_007dba30::sub_007dba30(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_007dba40 {
    int sub_007dba40();
};

// @baa 0x007dba40
int C_007dba40::sub_007dba40(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_007dba60 {
    int sub_007dba60();
};

// @baa 0x007dba60
int C_007dba60::sub_007dba60(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_007dba80 {
    int sub_007dba80();
};

// @baa 0x007dba80
int C_007dba80::sub_007dba80(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_007dbaa0 {
    int sub_007dbaa0();
};

// @baa 0x007dbaa0
int C_007dbaa0::sub_007dbaa0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_007dbac0 {
    int sub_007dbac0();
};

// @baa 0x007dbac0
int C_007dbac0::sub_007dbac0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_007dbad0 {
    int sub_007dbad0();
};

// @baa 0x007dbad0
int C_007dbad0::sub_007dbad0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_007dbb20 { C_007dbb20* sub_007dbb20(void); };

// @baa 0x007dbb20
C_007dbb20* C_007dbb20::sub_007dbb20(void) { return this; }

struct C_007dbb30 {
    int sub_007dbb30(int);
};

// @baa 0x007dbb30
int C_007dbb30::sub_007dbb30(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x1c;
}

struct C_007dbb80 { C_007dbb80* sub_007dbb80(void); };

// @baa 0x007dbb80
C_007dbb80* C_007dbb80::sub_007dbb80(void) { return this; }

struct C_007dbb90 {
    int sub_007dbb90(int);
};

// @baa 0x007dbb90
int C_007dbb90::sub_007dbb90(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x1c;
}

struct E_007dbbb0 { BYTE Bytes[68]; };

struct S_007dbbb0 {
    TArray<E_007dbbb0> Items; // 0x00
    E_007dbbb0* sub_007dbbb0(INT Index);
};

// @baa 0x007dbbb0
E_007dbbb0* S_007dbbb0::sub_007dbbb0(INT Index)
{
    return &Items(Index);
}

struct C_007dbc00 {
    uint sub_007dbc00();
};

// @baa 0x007dbc00
uint C_007dbc00::sub_007dbc00(void)
{
    uint param_1 = (uint)this;

  return *(uint *)(param_1 + 0x3c0) | -(uint)(*(uint *)(param_1 + 0x3c0) == 0) & param_1;
}

struct C_007dbc20 {
    int sub_007dbc20(int);
};

// @baa 0x007dbc20
int C_007dbc20::sub_007dbc20(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x44;
}

struct C_007dbc40 {
    int sub_007dbc40(int);
};

// @baa 0x007dbc40
int C_007dbc40::sub_007dbc40(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x2c + *param_1;
}

struct C_007dbc50 {
    int sub_007dbc50();
};

// @baa 0x007dbc50
int C_007dbc50::sub_007dbc50(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_007dbc70 {
    int sub_007dbc70();
};

// @baa 0x007dbc70
int C_007dbc70::sub_007dbc70(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_007dbc90 {
    int sub_007dbc90();
};

// @baa 0x007dbc90
int C_007dbc90::sub_007dbc90(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x18;
}

struct C_007dbca0 {
    int sub_007dbca0();
};

// @baa 0x007dbca0
int C_007dbca0::sub_007dbca0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_007dbcc0 {
    int sub_007dbcc0();
};

// @baa 0x007dbcc0
int C_007dbcc0::sub_007dbcc0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_007dbcd0 {
    int sub_007dbcd0();
};

// @baa 0x007dbcd0
int C_007dbcd0::sub_007dbcd0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_007dbcf0 {
    int sub_007dbcf0();
};

// @baa 0x007dbcf0
int C_007dbcf0::sub_007dbcf0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_007dbd10 {
    int sub_007dbd10();
};

// @baa 0x007dbd10
int C_007dbd10::sub_007dbd10(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_007dbd30 {
    int sub_007dbd30();
};

// @baa 0x007dbd30
int C_007dbd30::sub_007dbd30(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_007dbd40 {
    int sub_007dbd40();
};

// @baa 0x007dbd40
int C_007dbd40::sub_007dbd40(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

// @baa 0x007dbd60
void sub_007dbd60(undefined4 param_1)
{
  sub_005413d0(param_1,0);
  return;
}

struct C_007dbd90 {
    int sub_007dbd90(int);
};

// @baa 0x007dbd90
int C_007dbd90::sub_007dbd90(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

// @baa 0x007dbda0
void sub_007dbda0(undefined4 param_1)
{
  sub_005413d0(param_1,0);
  return;
}

struct C_007dbdb0 {
    void sub_007dbdb0(undefined4 *);
};

// @baa 0x007dbdb0
void C_007dbdb0::sub_007dbdb0(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_2 = *param_1;
  param_2[1] = (undefined4)(param_1 + 1);
  return;
}

struct C_007dbdd0 {
    int sub_007dbdd0(int);
};

// @baa 0x007dbdd0
int C_007dbdd0::sub_007dbdd0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x1c;
}

// @baa 0x007dbdf0
void sub_007dbdf0(undefined4 param_1)
{
  sub_005413d0(param_1,0);
  return;
}

struct C_007dbe00 {
    void sub_007dbe00(undefined4 *);
};

// @baa 0x007dbe00
void C_007dbe00::sub_007dbe00(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_2 = *param_1;
  param_2[1] = (undefined4)(param_1 + 1);
  return;
}

struct C_007dbe20 {
    int sub_007dbe20(int);
};

// @baa 0x007dbe20
int C_007dbe20::sub_007dbe20(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x1c;
}

struct C_007dbe40 {
    int sub_007dbe40();
};

// @baa 0x007dbe40
int C_007dbe40::sub_007dbe40(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_007dbe60 {
    int sub_007dbe60();
};

// @baa 0x007dbe60
int C_007dbe60::sub_007dbe60(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

// @baa 0x007dc2a0
void sub_007dc2a0(undefined1 * param_1, undefined1 * param_2)
{
  undefined1 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return;
}

#pragma pack(push, 1)
struct CRect { char _pad0[1]; };

#pragma pack(pop)
struct C_007dc2c0 {
    void sub_007dc2c0(int, int, int, int);
};

int sub_00630f20(...);
// @baa 0x007dc2c0
void C_007dc2c0::sub_007dc2c0(int param_1, int param_2, int param_3, int param_4)
{
    CRect * this_ = (CRect *)this;

  sub_00630f20(this_,param_1,param_2,param_3,param_4);
  return;
}

// @baa 0x007dc840
void sub_007dc840(undefined4 * param_1, undefined4 * param_2)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
  }
  return;
}

// @baa 0x007dc860
void sub_007dc860(undefined4 * param_1, undefined4 * param_2)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
  }
  return;
}

// @baa 0x007dc880
void sub_007dc880(undefined4 * param_1, undefined4 * param_2)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
  }
  return;
}

// @baa 0x007dca20
void sub_007dca20(undefined4 * param_1, undefined4 * param_2)
{
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return;
}

void sub_004025d0(void*);
struct D { void* p; ~D(){ if(0) sub_004025d0(p);} };

void sub_0053dfa0(void*);
struct C_007df200 { void* Data; int Num; int Max; void sub_007df200(); };

// @baa 0x007df200
void C_007df200::sub_007df200() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_007df2a0 { void* Data; int Num; int Max; void sub_007df2a0(); };

// @baa 0x007df2a0
void C_007df2a0::sub_007df2a0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_007df300 {
    undefined4 sub_007df300();
};

// @baa 0x007df300
undefined4 C_007df300::sub_007df300(void)
{
    undefined4 param_1 = (undefined4)this;
  return param_1;
}

struct C_007df310 { void* Data; int Num; int Max; void sub_007df310(); };

// @baa 0x007df310
void C_007df310::sub_007df310() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_007df3b0 { void* Data; int Num; int Max; void sub_007df3b0(); };

// @baa 0x007df3b0
void C_007df3b0::sub_007df3b0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_007df410 { void* Data; int Num; int Max; void sub_007df410(); };

// @baa 0x007df410
void C_007df410::sub_007df410() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_007df550 { void* Data; int Num; int Max; void sub_007df550(); };

// @baa 0x007df550
void C_007df550::sub_007df550() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_007df7b0 {
    int sub_007df7b0(undefined4, undefined4);
    int sub_007d7d00(int);
};

// @baa 0x007df7b0
int C_007df7b0::sub_007df7b0(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_007df7b0 *)(this))->sub_007d7d00(param_3);
  *(undefined4 *)(param_1 + 0xc) = param_2;
  return param_1;
}

struct C_007df800 { void* Data; int Num; int Max; void sub_007df800(); };

// @baa 0x007df800
void C_007df800::sub_007df800() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_007df8a0 { void* Data; int Num; int Max; void sub_007df8a0(); };

// @baa 0x007df8a0
void C_007df8a0::sub_007df8a0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_007df900 { void* Data; int Num; int Max; void sub_007df900(); };

// @baa 0x007df900
void C_007df900::sub_007df900() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_007dfb60 { void* Data; int Num; int Max; void sub_007dfb60(); };

// @baa 0x007dfb60
void C_007dfb60::sub_007dfb60() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_007dfbc0 { void* Data; int Num; int Max; void sub_007dfbc0(); };

// @baa 0x007dfbc0
void C_007dfbc0::sub_007dfbc0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_007dfc20 { void* Data; int Num; int Max; void sub_007dfc20(); };

// @baa 0x007dfc20
void C_007dfc20::sub_007dfc20() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_007dfc80 { int a, b, c; C_007dfc80(); };

// @baa 0x007dfc80
C_007dfc80::C_007dfc80() : a(0), b(0), c(0) {}

// @baa 0x007dfc90
void __stdcall sub_007dfc90(int a0, int a1) {  }

// @baa 0x007dfca0
void __stdcall sub_007dfca0(int a0, int a1) {  }

struct M_007dfda0 { void sub_007df900(); };

struct C_007dfda0 { char pad[4]; M_007dfda0 m; void sub_007dfda0(); };

// @baa 0x007dfda0
void C_007dfda0::sub_007dfda0() { m.sub_007df900(); }

struct M_007dfdb0 { void sub_00602210(); };

struct C_007dfdb0 { char pad[24]; M_007dfdb0 m; void sub_007dfdb0(); };

// @baa 0x007dfdb0
void C_007dfdb0::sub_007dfdb0() { m.sub_00602210(); }

struct M_007dfdc0 { void sub_0040fcc0(); };

struct C_007dfdc0 { char pad[24]; M_007dfdc0 m; void sub_007dfdc0(); };

// @baa 0x007dfdc0
void C_007dfdc0::sub_007dfdc0() { m.sub_0040fcc0(); }
