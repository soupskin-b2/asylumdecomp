// Engine_08a0000.cpp (part 1 of 4): 163 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x008a45f0
void sub_008a45f0(void) {  }

// @baa 0x008a4600
void sub_008a4600(void) {  }

// @baa 0x008a4610
float10 sub_008a4610(double param_1)
{
  return (float10)param_1;
}

struct C_008a4630 { int a; C_008a4630(int); };

// @baa 0x008a4630
C_008a4630::C_008a4630(int x) : a(x) {}

struct C {
    void sub_008a4640(int *);
};

// @baa 0x008a4640
void C::sub_008a4640(int * param_2)
{
    int * param_1 = (int *)this;

  *param_2 = param_1[2] - *param_1;
  param_2[1] = param_1[3] - param_1[1];
  return;
}

struct C_008a4b60 { int sub_008a4b60(void); };

// @baa 0x008a4b60
int C_008a4b60::sub_008a4b60(void) { return *(int*)((char*)this + 48); }

struct C_008a4b70 {
    int Unk0;
    int Unk4;
    int sub_008a4b70();
};

// @baa 0x008a4b70
int C_008a4b70::sub_008a4b70()
{
    return Unk4 == 0 ? -1 : 0;
}

struct C_008a4b80 { int sub_008a4b80(void); };

// @baa 0x008a4b80
int C_008a4b80::sub_008a4b80(void) { return *(int*)((char*)this + 4); }

struct C_008a4b90 { int sub_008a4b90(void); };

// @baa 0x008a4b90
int C_008a4b90::sub_008a4b90(void) { return *(int*)((char*)this + 4); }

// @baa 0x008a4c00
undefined2 sub_008a4c00(void)
{
  return 0x73;
}

struct C_008a4c10 { C_008a4c10* sub_008a4c10(int a0); };

// @baa 0x008a4c10
C_008a4c10* C_008a4c10::sub_008a4c10(int a0) { return this; }

struct C_008a4c20 { C_008a4c20* sub_008a4c20(int a0); };

// @baa 0x008a4c20
C_008a4c20* C_008a4c20::sub_008a4c20(int a0) { return this; }

int sub_00799270(...);
int sub_0079b230(void);
extern undefined4 g_026b43c0;
// @baa 0x008a4d50
int sub_008a4d50(void)
{
  if (g_026b43c0 == 0) {
    g_026b43c0 = sub_00799270(L"Engine");
    sub_0079b230();
  }
  return g_026b43c0;
}

struct C_008a4d80 { int a, b; C_008a4d80(int, int); };

// @baa 0x008a4d80
C_008a4d80::C_008a4d80(int x, int y) : a(x), b(y) {}

// @baa 0x008a4da0
undefined4 UObject::sub_008a4da0(int * param_2)
{
    int * param_1 = (int *)this;

  if ((*param_2 == *param_1) && (param_2[1] == param_1[1])) {
    return 1;
  }
  return 0;
}

struct C_008a4dc0 { C_008a4dc0* sub_008a4dc0(int a0); };

// @baa 0x008a4dc0
C_008a4dc0* C_008a4dc0::sub_008a4dc0(int a0) { return this; }

struct C_008a4dd0 { C_008a4dd0* sub_008a4dd0(int a0); };

// @baa 0x008a4dd0
C_008a4dd0* C_008a4dd0::sub_008a4dd0(int a0) { return this; }

extern "C" int g_026c3ee4;
extern "C" int g_026c3ee8;
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
    void sub_008a4e70();
};

// @baa 0x008a4e70
void UObjectThunk::sub_008a4e70()
{
    this->ProcessEvent(this->sub_005d7d10(g_026c3ee4, g_026c3ee8, 0), 0, 0);
}

struct C_008a4ea0 { C_008a4ea0* sub_008a4ea0(int a0); };

// @baa 0x008a4ea0
C_008a4ea0* C_008a4ea0::sub_008a4ea0(int a0) { return this; }

struct C_008a4eb0 { C_008a4eb0* sub_008a4eb0(int a0); };

// @baa 0x008a4eb0
C_008a4eb0* C_008a4eb0::sub_008a4eb0(int a0) { return this; }

struct C_008a4ec0 { C_008a4ec0* sub_008a4ec0(int a0); };

// @baa 0x008a4ec0
C_008a4ec0* C_008a4ec0::sub_008a4ec0(int a0) { return this; }

struct C_008a4ed0 { C_008a4ed0* sub_008a4ed0(int a0); };

// @baa 0x008a4ed0
C_008a4ed0* C_008a4ed0::sub_008a4ed0(int a0) { return this; }

struct C_008a4ee0 { C_008a4ee0* sub_008a4ee0(int a0); };

// @baa 0x008a4ee0
C_008a4ee0* C_008a4ee0::sub_008a4ee0(int a0) { return this; }

struct C_008a4ef0 { C_008a4ef0* sub_008a4ef0(int a0); };

// @baa 0x008a4ef0
C_008a4ef0* C_008a4ef0::sub_008a4ef0(int a0) { return this; }

struct C_008a4f00 { C_008a4f00* sub_008a4f00(int a0); };

// @baa 0x008a4f00
C_008a4f00* C_008a4f00::sub_008a4f00(int a0) { return this; }

struct C_008a4f10 { C_008a4f10* sub_008a4f10(int a0); };

// @baa 0x008a4f10
C_008a4f10* C_008a4f10::sub_008a4f10(int a0) { return this; }

struct C_008a4f20 { C_008a4f20* sub_008a4f20(int a0); };

// @baa 0x008a4f20
C_008a4f20* C_008a4f20::sub_008a4f20(int a0) { return this; }

struct C_008a4f30 { C_008a4f30* sub_008a4f30(int a0); };

// @baa 0x008a4f30
C_008a4f30* C_008a4f30::sub_008a4f30(int a0) { return this; }

extern "C" int g_026c3f34;
extern "C" int g_026c3f38;
struct UObjectThunk_008a4ff0 {
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
    void sub_008a4ff0();
};

// @baa 0x008a4ff0
void UObjectThunk_008a4ff0::sub_008a4ff0()
{
    this->ProcessEvent(this->sub_005d7d10(g_026c3f34, g_026c3f38, 0), 0, 0);
}

extern "C" int g_026c3e7c;
extern "C" int g_026c3e80;
struct UObjectThunk_008a5090 {
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
    void sub_008a5090();
};

// @baa 0x008a5090
void UObjectThunk_008a5090::sub_008a5090()
{
    this->ProcessEvent(this->sub_005d7d10(g_026c3e7c, g_026c3e80, 0), 0, 0);
}

int sub_00b51030(void);
int sub_00b6c630(...);
extern undefined4 g_026bf598;
// @baa 0x008a53a0
int sub_008a53a0(void)
{
  if (g_026bf598 == 0) {
    g_026bf598 = sub_00b6c630(L"Engine");
    sub_00b51030();
  }
  return g_026bf598;
}

struct C_008a53d0 { C_008a53d0* sub_008a53d0(int a0); };

// @baa 0x008a53d0
C_008a53d0* C_008a53d0::sub_008a53d0(int a0) { return this; }

// @baa 0x008a5440
int sub_008a5440(int a0, int a1) { return a1; }

extern "C" int g_026c4dc8;
extern "C" int g_026c4dcc;
struct UObjectThunk_008a5450 {
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
    void sub_008a5450();
};

// @baa 0x008a5450
void UObjectThunk_008a5450::sub_008a5450()
{
    this->ProcessEvent(this->sub_005d7d10(g_026c4dc8, g_026c4dcc, 0), 0, 0);
}

int sub_00779eb0(...);
int sub_0077d250(void);
extern undefined4 g_026b3bd8;
// @baa 0x008a5480
int sub_008a5480(void)
{
  if (g_026b3bd8 == 0) {
    g_026b3bd8 = sub_00779eb0(L"Engine");
    sub_0077d250();
  }
  return g_026b3bd8;
}

// @baa 0x008a54b0
int sub_008a54b0(int a0, int a1) { return a1; }

// @baa 0x008a54c0
int sub_008a54c0(int a0, int a1) { return a1; }

// @baa 0x008a54d0
int sub_008a54d0(int a0, int a1) { return a1; }

// @baa 0x008a54e0
int sub_008a54e0(int a0, int a1) { return a1; }

// @baa 0x008a54f0
int sub_008a54f0(int a0, int a1) { return a1; }

// @baa 0x008a5500
int sub_008a5500(int a0, int a1) { return a1; }

// @baa 0x008a5510
int sub_008a5510(int a0, int a1) { return a1; }

// @baa 0x008a5520
int sub_008a5520(int a0, int a1) { return a1; }

// @baa 0x008a5530
int sub_008a5530(int a0, int a1) { return a1; }

// @baa 0x008a5540
int sub_008a5540(int a0, int a1) { return a1; }

// @baa 0x008a5550
int sub_008a5550(int a0, int a1) { return a1; }

struct C_008a5560 {
    undefined4 sub_008a5560();
};

// @baa 0x008a5560
undefined4 C_008a5560::sub_008a5560(void)
{
    int param_1 = (int)this;

  if ((*(byte *)(param_1 + 0x30) & 2) != 0) {
    return *(undefined4 *)(param_1 + 0x2c);
  }
  return 0;
}

extern "C" int g_026c49f0;
extern "C" int g_026c49f4;
struct UObjectThunk_008a5630 {
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
    void sub_008a5630();
};

// @baa 0x008a5630
void UObjectThunk_008a5630::sub_008a5630()
{
    this->ProcessEvent(this->sub_005d7d10(g_026c49f0, g_026c49f4, 0), 0, 0);
}

// @baa 0x008a5660
int sub_008a5660(int a0, int a1) { return a1; }

// @baa 0x008a72f0
void USceneCaptureComponent::SetFrameRate(float param_2)
{
    int param_1 = (int)this;
  if (param_2 != *(float *)(param_1 + 0x5c)) {
    *(uint *)(param_1 + 0x4c) = *(uint *)(param_1 + 0x4c) | 0x20;
    *(float *)(param_1 + 0x5c) = param_2;
  }
  return;
}

int sub_0053dfa0(...);

struct C_008a76c0 { int a, b; C_008a76c0(int, int); };

// @baa 0x008a76c0
C_008a76c0::C_008a76c0(int x, int y) : a(x), b(y) {}

extern char g_01f50ca4[];
// @baa 0x008a7700
int sub_008a7700(void) { return (int)g_01f50ca4; }

extern char g_01ebb554[];
// @baa 0x008a7710
void UGoal_Null::sub_008a7710(void) { *(int*)((char*)this + 0) = (int)g_01ebb554; }

// @baa 0x008a7720
undefined4 * UGoal_Null::sub_008a7720(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ebb554);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_00df3930(void);
int sub_00e14d50(...);
extern undefined4 g_026c5ebc;
// @baa 0x008a7740
int sub_008a7740(void)
{
  if (g_026c5ebc == 0) {
    g_026c5ebc = sub_00e14d50(L"Engine");
    sub_00df3930();
  }
  return g_026c5ebc;
}

struct C_008a7770 { C_008a7770* sub_008a7770(int a0); };

// @baa 0x008a7770
C_008a7770* C_008a7770::sub_008a7770(int a0) { return this; }

extern undefined4 g_0266e850;
// @baa 0x008a77c0
undefined4 sub_008a77c0(void)
{
  return g_0266e850;
}

// @baa 0x008a77d0
int __stdcall IsConsoleBuild(int a0) { return 0; }

// @baa 0x008a77e0
int sub_008a77e0(void) { return 1; }

// @baa 0x008a77f0
int sub_008a77f0(void) { return 0; }

// @baa 0x008a7830
void AActor::sub_008a7830(undefined4 param_2, float * param_3)
{
    int param_1 = (int)this;
  float fVar1;
  float fVar2;
  fVar1 = *param_3;
  fVar2 = *(float *)(param_1 + 0xf0) - fVar1;
  *(float *)(param_1 + 0xf0) = fVar2;
  if (fVar2 < fVar1 * 0.5) {
    *(undefined2 *)(*(int *)(param_1 + 0x18) + 0x34) = 0;
  }
  return;
}

// @baa 0x008a9420
void AGameInfo::sub_008a9420(void)
{
    int param_1 = (int)this;

  *(uint *)(param_1 + 0x1a8) = *(uint *)(param_1 + 0x1a8) & 0xf7ffffff;
  return;
}

// @baa 0x008aa010
void __stdcall sub_008aa010(int a0, int a1) {  }

// @baa 0x008aa020
void __stdcall sub_008aa020(int a0, int a1) {  }

// @baa 0x008aa030
void __stdcall Clock(int a0) {  }

struct C_008aa200 { C_008aa200* sub_008aa200(int a0); };

// @baa 0x008aa200
C_008aa200* C_008aa200::sub_008aa200(int a0) { return this; }

// @baa 0x008aa250
undefined4 sub_008aa250(undefined4 param_1, undefined4 param_2)
{
  return param_2;
}

struct C_008acbc0 { int sub_008acbc0(void); };

// @baa 0x008acbc0
int C_008acbc0::sub_008acbc0(void) { return *(int*)((char*)this + 4); }

struct C_008acbd0 {
    INT Unk00; // 0x0
    INT Size;  // 0x4

    UBOOL sub_008acbd0(INT Index);
};

// @baa 0x008acbd0
UBOOL C_008acbd0::sub_008acbd0(INT Index)
{
    if (Index >= 0 && Index < Size)
        return 1;
    return 0;
}

struct C_008acbf0 { int sub_008acbf0(void); };

// @baa 0x008acbf0
int C_008acbf0::sub_008acbf0(void) { return *(int*)((char*)this + 4); }

struct C_008acc00 {
    INT Unk00; // 0x0
    INT Size;  // 0x4

    UBOOL sub_008acc00(INT Index);
};

// @baa 0x008acc00
UBOOL C_008acc00::sub_008acc00(INT Index)
{
    if (Index >= 0 && Index < Size)
        return 1;
    return 0;
}

struct C_008acc20 { int sub_008acc20(void); };

// @baa 0x008acc20
int C_008acc20::sub_008acc20(void) { return *(int*)((char*)this + 4); }

struct C_008acc30 {
    INT Unk00; // 0x0
    INT Size;  // 0x4

    UBOOL sub_008acc30(INT Index);
};

// @baa 0x008acc30
UBOOL C_008acc30::sub_008acc30(INT Index)
{
    if (Index >= 0 && Index < Size)
        return 1;
    return 0;
}

struct C_008acc50 { int sub_008acc50(void); };

// @baa 0x008acc50
int C_008acc50::sub_008acc50(void) { return *(int*)((char*)this + 4); }

struct C_008acc60 { int sub_008acc60(void); };

// @baa 0x008acc60
int C_008acc60::sub_008acc60(void) { return *(int*)((char*)this + 4); }

struct C_008acc70 { int a, b, c; C_008acc70(); };

// @baa 0x008acc70
C_008acc70::C_008acc70() : a(0), b(0), c(0) {}

struct C_008acc80 {
    int Unk0;
    int Unk4;
    int sub_008acc80();
};

// @baa 0x008acc80
int C_008acc80::sub_008acc80()
{
    return Unk4 == 0 ? -1 : 0;
}

struct C_008acc90 { int sub_008acc90(void); };

// @baa 0x008acc90
int C_008acc90::sub_008acc90(void) { return *(int*)((char*)this + 4); }

struct C_008acca0 { int a, b, c; C_008acca0(); };

// @baa 0x008acca0
C_008acca0::C_008acca0() : a(0), b(0), c(0) {}

struct C_008accb0 { int sub_008accb0(void); };

// @baa 0x008accb0
int C_008accb0::sub_008accb0(void) { return *(int*)((char*)this + 4); }

struct C_008accc0 { int a, b, c; C_008accc0(); };

// @baa 0x008accc0
C_008accc0::C_008accc0() : a(0), b(0), c(0) {}

struct C_008accd0 { int sub_008accd0(void); };

// @baa 0x008accd0
int C_008accd0::sub_008accd0(void) { return *(int*)((char*)this + 4); }

struct C_008acce0 { int a, b, c; C_008acce0(); };

// @baa 0x008acce0
C_008acce0::C_008acce0() : a(0), b(0), c(0) {}

struct C_008accf0 { int sub_008accf0(void); };

// @baa 0x008accf0
int C_008accf0::sub_008accf0(void) { return *(int*)((char*)this + 4); }

struct C_008acd00 { int a, b, c; C_008acd00(); };

// @baa 0x008acd00
C_008acd00::C_008acd00() : a(0), b(0), c(0) {}

struct C_008acd10 { int sub_008acd10(void); };

// @baa 0x008acd10
int C_008acd10::sub_008acd10(void) { return *(int*)((char*)this + 4); }

struct C_008acd20 { int a, b, c; C_008acd20(); };

// @baa 0x008acd20
C_008acd20::C_008acd20() : a(0), b(0), c(0) {}

struct C_008acd30 { int sub_008acd30(void); };

// @baa 0x008acd30
int C_008acd30::sub_008acd30(void) { return *(int*)((char*)this + 4); }

struct C_008acd40 { int a, b, c; C_008acd40(); };

// @baa 0x008acd40
C_008acd40::C_008acd40() : a(0), b(0), c(0) {}

struct C_008acd50 { int sub_008acd50(void); };

// @baa 0x008acd50
int C_008acd50::sub_008acd50(void) { return *(int*)((char*)this + 4); }

struct C_008acd60 { int a, b, c; C_008acd60(); };

// @baa 0x008acd60
C_008acd60::C_008acd60() : a(0), b(0), c(0) {}

struct C_008acd70 { int sub_008acd70(void); };

// @baa 0x008acd70
int C_008acd70::sub_008acd70(void) { return *(int*)((char*)this + 4); }

struct C_008acd80 { int a, b, c; C_008acd80(); };

// @baa 0x008acd80
C_008acd80::C_008acd80() : a(0), b(0), c(0) {}

struct C_008acd90 { int sub_008acd90(void); };

// @baa 0x008acd90
int C_008acd90::sub_008acd90(void) { return *(int*)((char*)this + 4); }

struct C_008acda0 { int a, b, c; C_008acda0(); };

// @baa 0x008acda0
C_008acda0::C_008acda0() : a(0), b(0), c(0) {}

struct C_008acdb0 { int a, b, c; C_008acdb0(); };

// @baa 0x008acdb0
C_008acdb0::C_008acdb0() : a(0), b(0), c(0) {}

struct C_008acdc0 { int sub_008acdc0(void); };

// @baa 0x008acdc0
int C_008acdc0::sub_008acdc0(void) { return *(int*)((char*)this + 4); }

struct C_008acdd0 { int a, b, c; C_008acdd0(); };

// @baa 0x008acdd0
C_008acdd0::C_008acdd0() : a(0), b(0), c(0) {}

struct C_008acde0 { int sub_008acde0(void); };

// @baa 0x008acde0
int C_008acde0::sub_008acde0(void) { return *(int*)((char*)this + 4); }

struct C_008acdf0 { int a, b, c; C_008acdf0(); };

// @baa 0x008acdf0
C_008acdf0::C_008acdf0() : a(0), b(0), c(0) {}

struct C_008ace00 { int sub_008ace00(void); };

// @baa 0x008ace00
int C_008ace00::sub_008ace00(void) { return *(int*)((char*)this + 4); }

struct C_008ace10 { int a, b, c; C_008ace10(); };

// @baa 0x008ace10
C_008ace10::C_008ace10() : a(0), b(0), c(0) {}

struct C_008ace20 { int sub_008ace20(void); };

// @baa 0x008ace20
int C_008ace20::sub_008ace20(void) { return *(int*)((char*)this + 4); }

struct C_008ace60 {
    void sub_008ace60(int, int);
};

int sub_00627f00(...);
// @baa 0x008ace60
void C_008ace60::sub_008ace60(int param_2, int param_3)
{
    int * param_1 = (int *)this;
  sub_00627f00(*param_1 + param_2 * 0xc,*param_1 + param_3 * 0xc,0xc);
  return;
}

struct C_008ace90 { int sub_008ace90(void); };

// @baa 0x008ace90
int C_008ace90::sub_008ace90(void) { return *(int*)((char*)this + 0); }

struct C_008acf10 {
    void sub_008acf10(int, int);
};

// @baa 0x008acf10
void C_008acf10::sub_008acf10(int param_2, int param_3)
{
    int * param_1 = (int *)this;

  sub_00627f00(*param_1 + param_2 * 4,*param_1 + param_3 * 4,4);
  return;
}

struct C_008ad250 { C_008ad250* sub_008ad250(int a0); };

// @baa 0x008ad250
C_008ad250* C_008ad250::sub_008ad250(int a0) { return this; }

struct C_008ad260 { int sub_008ad260(void); };

// @baa 0x008ad260
int C_008ad260::sub_008ad260(void) { return *(int*)((char*)this + 0); }

struct C_008ad270 { int sub_008ad270(void); };

// @baa 0x008ad270
int C_008ad270::sub_008ad270(void) { return *(int*)((char*)this + 0); }

struct C_008ad2f0 { C_008ad2f0* sub_008ad2f0(int a0); };

// @baa 0x008ad2f0
C_008ad2f0* C_008ad2f0::sub_008ad2f0(int a0) { return this; }

struct C_008ad300 { int sub_008ad300(void); };

// @baa 0x008ad300
int C_008ad300::sub_008ad300(void) { return *(int*)((char*)this + 0); }

struct C_008ad310 { int sub_008ad310(void); };

// @baa 0x008ad310
int C_008ad310::sub_008ad310(void) { return *(int*)((char*)this + 0); }

struct C_008ad320 {
    int sub_008ad320(int);
};

// @baa 0x008ad320
int C_008ad320::sub_008ad320(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 8;
}

struct C_008ad330 { int sub_008ad330(void); };

// @baa 0x008ad330
int C_008ad330::sub_008ad330(void) { return *(int*)((char*)this + 0); }

struct C_008ad340 { int sub_008ad340(void); };

// @baa 0x008ad340
int C_008ad340::sub_008ad340(void) { return *(int*)((char*)this + 0); }

struct C_008ae250 {
    int sub_008ae250(int);
};

// @baa 0x008ae250
int C_008ae250::sub_008ae250(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_008ae260 { int sub_008ae260(void); };

// @baa 0x008ae260
int C_008ae260::sub_008ae260(void) { return *(int*)((char*)this + 0); }

struct C_008ae2e0 { int sub_008ae2e0(void); };

// @baa 0x008ae2e0
int C_008ae2e0::sub_008ae2e0(void) { return *(int*)((char*)this + 0); }

struct C_008ae360 { int sub_008ae360(void); };

// @baa 0x008ae360
int C_008ae360::sub_008ae360(void) { return *(int*)((char*)this + 0); }

struct C_008ae3e0 { int sub_008ae3e0(void); };

// @baa 0x008ae3e0
int C_008ae3e0::sub_008ae3e0(void) { return *(int*)((char*)this + 0); }

struct C_008ae3f0 { int sub_008ae3f0(void); };

// @baa 0x008ae3f0
int C_008ae3f0::sub_008ae3f0(void) { return *(int*)((char*)this + 0); }

struct C_008ae400 { int sub_008ae400(void); };

// @baa 0x008ae400
int C_008ae400::sub_008ae400(void) { return *(int*)((char*)this + 0); }

struct C_008ae410 { int sub_008ae410(void); };

// @baa 0x008ae410
int C_008ae410::sub_008ae410(void) { return *(int*)((char*)this + 0); }

struct C_008ae490 { int sub_008ae490(void); };

// @baa 0x008ae490
int C_008ae490::sub_008ae490(void) { return *(int*)((char*)this + 0); }

struct C_008ae510 { int sub_008ae510(void); };

// @baa 0x008ae510
int C_008ae510::sub_008ae510(void) { return *(int*)((char*)this + 0); }

struct C_008ae520 { int sub_008ae520(void); };

// @baa 0x008ae520
int C_008ae520::sub_008ae520(void) { return *(int*)((char*)this + 0); }

struct C_008ae5a0 { int sub_008ae5a0(void); };

// @baa 0x008ae5a0
int C_008ae5a0::sub_008ae5a0(void) { return *(int*)((char*)this + 0); }

struct C_008ae5b0 { int sub_008ae5b0(void); };

// @baa 0x008ae5b0
int C_008ae5b0::sub_008ae5b0(void) { return *(int*)((char*)this + 0); }

struct C_008ae5c0 { int sub_008ae5c0(void); };

// @baa 0x008ae5c0
int C_008ae5c0::sub_008ae5c0(void) { return *(int*)((char*)this + 0); }

struct C_008ae5d0 { int sub_008ae5d0(void); };

// @baa 0x008ae5d0
int C_008ae5d0::sub_008ae5d0(void) { return *(int*)((char*)this + 0); }

struct C_008ae5e0 { int sub_008ae5e0(void); };

// @baa 0x008ae5e0
int C_008ae5e0::sub_008ae5e0(void) { return *(int*)((char*)this + 0); }

struct C_008ae5f0 { int sub_008ae5f0(void); };

// @baa 0x008ae5f0
int C_008ae5f0::sub_008ae5f0(void) { return *(int*)((char*)this + 0); }

struct C_008ae600 { int sub_008ae600(void); };

// @baa 0x008ae600
int C_008ae600::sub_008ae600(void) { return *(int*)((char*)this + 0); }

struct S {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_008ae610(INT Index);
};

// @baa 0x008ae610
DWORD* S::sub_008ae610(INT Index)
{
    return &Items(Index);
}

struct C_008ae660 { int sub_008ae660(void); };

// @baa 0x008ae660
int C_008ae660::sub_008ae660(void) { return *(int*)((char*)this + 0); }

struct C_008ae670 { int sub_008ae670(void); };

// @baa 0x008ae670
int C_008ae670::sub_008ae670(void) { return *(int*)((char*)this + 0); }

struct C_008ae6f0 { int sub_008ae6f0(void); };

// @baa 0x008ae6f0
int C_008ae6f0::sub_008ae6f0(void) { return *(int*)((char*)this + 0); }

struct C_008ae700 { int sub_008ae700(void); };

// @baa 0x008ae700
int C_008ae700::sub_008ae700(void) { return *(int*)((char*)this + 0); }

struct C_008ae710 { int sub_008ae710(void); };

// @baa 0x008ae710
int C_008ae710::sub_008ae710(void) { return *(int*)((char*)this + 0); }

struct C_008ae720 { int sub_008ae720(void); };

// @baa 0x008ae720
int C_008ae720::sub_008ae720(void) { return *(int*)((char*)this + 0); }

struct C_008ae730 { int sub_008ae730(void); };

// @baa 0x008ae730
int C_008ae730::sub_008ae730(void) { return *(int*)((char*)this + 0); }

struct S_008ae740 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_008ae740(INT Index);
};

// @baa 0x008ae740
DWORD* S_008ae740::sub_008ae740(INT Index)
{
    return &Items(Index);
}

struct C_008ae790 { int sub_008ae790(void); };

// @baa 0x008ae790
int C_008ae790::sub_008ae790(void) { return *(int*)((char*)this + 0); }

struct C_008ae810 { int sub_008ae810(void); };

// @baa 0x008ae810
int C_008ae810::sub_008ae810(void) { return *(int*)((char*)this + 0); }

struct C_008ae820 { int sub_008ae820(void); };

// @baa 0x008ae820
int C_008ae820::sub_008ae820(void) { return *(int*)((char*)this + 0); }

struct C_008ae830 { int sub_008ae830(void); };

// @baa 0x008ae830
int C_008ae830::sub_008ae830(void) { return *(int*)((char*)this + 0); }

// @baa 0x008ae840
int sub_008ae840(int a0) { return *(int*)a0; }

// @baa 0x008ae850
bool sub_008ae850(int param_1, int param_2)
{
  return param_1 == param_2;
}

// @baa 0x008ae860
int sub_008ae860(int a0) { return *(int*)a0; }

// @baa 0x008ae870
bool sub_008ae870(int param_1, int param_2)
{
  return param_1 == param_2;
}

struct C_008ae880 { int a, b; C_008ae880(int, int); };

// @baa 0x008ae880
C_008ae880::C_008ae880(int x, int y) : a(x), b(y) {}

struct C_008ae8a0 { int a, b; C_008ae8a0(int, int); };

// @baa 0x008ae8a0
C_008ae8a0::C_008ae8a0(int x, int y) : a(x), b(y) {}

void sub_00572b30();
// @baa 0x008ae8c0
void sub_008ae8c0(void) { sub_00572b30(); }

// @baa 0x008ae930
void sub_008ae930(void) { sub_00572b30(); }

// @baa 0x008ae940
void sub_008ae940(void) { sub_00572b30(); }

// @baa 0x008aeaa0
void sub_008aeaa0(void) { sub_00572b30(); }

// @baa 0x008aeb70
void sub_008aeb70(void) { sub_00572b30(); }

struct E { BYTE Bytes[12]; };

struct S_008aed60 {
    TArray<E> Items; // 0x00
    const E* sub_008aed60(INT Index) const;
};

// @baa 0x008aed60
const E* S_008aed60::sub_008aed60(INT Index) const
{
    return &Items(Index);
}

struct C_008aedb0 { int sub_008aedb0(void); };

// @baa 0x008aedb0
int C_008aedb0::sub_008aedb0(void) { return *(int*)((char*)this + 4); }

struct S_008aedc0 {
    TArray<DWORD> Items; // 0x00
    const DWORD* sub_008aedc0(INT Index) const;
};

// @baa 0x008aedc0
const DWORD* S_008aedc0::sub_008aedc0(INT Index) const
{
    return &Items(Index);
}

extern "C" void sub_008a4ba0();
struct CNode {
    // 0x00
    void* Unk00;
    // 0x04
    void* Unk04;
    void sub_008aef40();
};

// @baa 0x008aef40
void CNode::sub_008aef40()
{
    Unk04 = *(void**)((char*)Unk04 + 0x34);
    sub_008a4ba0();
}

extern FName g_026c48d4;
	/* OnSystemFinished */
/* Kit gap: the delegate's generated glue isn't declared. */
struct UParticleSystemComponent_ : public UParticleSystemComponent
{
	void delegateOnSystemFinished(class UParticleSystemComponent* PSystem);
};

// @baa 0x008a7780
/* The script delegate's generated glue, out of line here. */
void UParticleSystemComponent_::delegateOnSystemFinished(class UParticleSystemComponent* PSystem)
{
	struct ParticleSystemComponent_eventOnSystemFinished_Parms
	{
		class UParticleSystemComponent* PSystem;
	} Parms;
	Parms.PSystem = PSystem;
	ProcessDelegate(g_026c48d4, &__OnSystemFinished__Delegate, &Parms, NULL);
}

/* GSecondsPerCycle (UnVcWin32.cpp), not in the kit. */
extern DOUBLE g_0266e7f8;
#define GSecondsPerCycle g_0266e7f8
// @baa 0x008aa040
/* Converts a cycle count to milliseconds in place. */
void AActor::UnClock(FLOAT& Value)
{
	Value = Value * GSecondsPerCycle * 1000.0;
}
