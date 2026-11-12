// UnrealEd_1270000.cpp (part 1 of 8): 240 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

extern char g_022170c0[];
struct C { void sub_012771d0(void); };

// @baa 0x012771d0
void C::sub_012771d0(void) { *(int*)((char*)this + 0) = (int)g_022170c0; }

// @baa 0x012771e0
void sub_012771e0(void) {  }

extern char g_026d4e24[];
// @baa 0x012771f0
int sub_012771f0(void) { return (int)g_026d4e24; }

extern char g_025e8cb4[];
// @baa 0x01277200
int sub_01277200(void) { return (int)g_025e8cb4; }

extern char g_026d4e3c[];
// @baa 0x01277210
int sub_01277210(void) { return (int)g_026d4e3c; }

struct C_01277220 { C_01277220* sub_01277220(void); };

// @baa 0x01277220
C_01277220* C_01277220::sub_01277220(void) { *(int*)((char*)this + 0) = (int)g_022170c0; return this; }

extern char g_026d4ee0[];
// @baa 0x01277230
int sub_01277230(void) { return (int)g_026d4ee0; }

extern char g_025e8cbc[];
// @baa 0x01277240
int sub_01277240(void) { return (int)g_025e8cbc; }

extern char g_026d4ef8[];
// @baa 0x01277250
int sub_01277250(void) { return (int)g_026d4ef8; }

extern char g_026d4f60[];
// @baa 0x01277260
int sub_01277260(void) { return (int)g_026d4f60; }

extern char g_025e8cc4[];
// @baa 0x01277270
int sub_01277270(void) { return (int)g_025e8cc4; }

extern char g_026d4f78[];
// @baa 0x01277280
int sub_01277280(void) { return (int)g_026d4f78; }

extern char g_025e8ccc[];
// @baa 0x012772b0
int sub_012772b0(void) { return (int)g_025e8ccc; }

extern char g_026d4fe0[];
// @baa 0x012772c0
int sub_012772c0(void) { return (int)g_026d4fe0; }

struct C_012772f0 {
    virtual void v00(); virtual void v01(); virtual void v02(); virtual void v03();
    virtual void v04(); virtual void v05(); virtual void v06(); virtual void v07();
    virtual void v08(); virtual void v09(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14();
    void sub_012772f0(int x);
};

void C_012772f0::v00(){}

void C_012772f0::v01(){}

void C_012772f0::v02(){}

void C_012772f0::v03(){}

void C_012772f0::v04(){}

void C_012772f0::v05(){}

void C_012772f0::v06(){}

void C_012772f0::v07(){}

void C_012772f0::v08(){}

void C_012772f0::v09(){}

void C_012772f0::v10(){}

void C_012772f0::v11(){}

void C_012772f0::v12(){}

void C_012772f0::v13(){}

void C_012772f0::v14(){}

// @baa 0x012772f0
// Thunk: one stack arg (cleaned by the callee, ret 4), forwards to virtual slot 14 (offset 0x38).
void C_012772f0::sub_012772f0(int x) { v14(); }

int sub_005e1960(...);
int sub_00f1bcc0(void);
int sub_00f36050(...);
extern undefined4 g_026667a8;
extern undefined4 g_026cccf0;
// @baa 0x012774c0
void sub_012774c0(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6)
{
  if (g_026cccf0 == 0) {
    g_026cccf0 = sub_00f36050(L"Editor");
    sub_00f1bcc0();
  }
  sub_005e1960(g_026cccf0,param_2,param_3,param_4,param_5,param_6,0,g_026667a8,0,0,0);
  return;
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

// @baa 0x01277520
void sub_01277520(S* p, INT Value)
{
    p->vf_18(Value);
}

int sub_00ec5970(void);
// @baa 0x012777d0
void UUnrealEdEngine::vf_1a8(void) {
  int iVar1;
  
  iVar1 = sub_00ec5970();
  *(undefined4 *)(iVar1 + 0x10) = 0;
  iVar1 = sub_00ec5970();
  *(undefined4 *)(iVar1 + 0x14) = 0;
  return;
}

struct C_012777f0 {
    void sub_012777f0();
};

int sub_00f5bbb0(void);
extern undefined * g_022170c8;
// @baa 0x012777f0
void C_012777f0::sub_012777f0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_022170c8);
  sub_00f5bbb0();
  return;
}

struct C_01277af0 { void sub_01277af0(int a0); };

// @baa 0x01277af0
void C_01277af0::sub_01277af0(int a0) { *(int*)((char*)this + 920) = a0; }

extern char g_025e8cd4[];
// @baa 0x01277b00
int sub_01277b00(void) { return (int)g_025e8cd4; }

extern char g_026d50d4[];
// @baa 0x01277b10
int sub_01277b10(void) { return (int)g_026d50d4; }

extern char g_0221414c[];
// @baa 0x01277c10
int sub_01277c10(void) { return (int)g_0221414c; }

extern char g_026d5114[];
// @baa 0x01277c20
int sub_01277c20(void) { return (int)g_026d5114; }

int sub_014c8770(void);
int sub_014ca510(...);
extern undefined4 g_026dde70;
// @baa 0x01277d10
int sub_01277d10(void)
{
  if (g_026dde70 == 0) {
    g_026dde70 = sub_014ca510(L"UnrealEd");
    sub_014c8770();
  }
  return g_026dde70;
}

int sub_014094c0(void);
int sub_014228e0(...);
extern undefined4 g_026da750;
// @baa 0x01277d40
int sub_01277d40(void)
{
  if (g_026da750 == 0) {
    g_026da750 = sub_014228e0(L"UnrealEd");
    sub_014094c0();
  }
  return g_026da750;
}

int sub_0149d000(void);
int sub_014a7170(...);
extern undefined4 g_026dd928;
// @baa 0x01277d70
int sub_01277d70(void)
{
  if (g_026dd928 == 0) {
    g_026dd928 = sub_014a7170(L"UnrealEd");
    sub_0149d000();
  }
  return g_026dd928;
}

struct C_01277da0 { C_01277da0* sub_01277da0(void); };

// @baa 0x01277da0
C_01277da0* C_01277da0::sub_01277da0(void) { return this; }

int sub_0149d5b0(void);
int sub_014b3c90(...);
extern undefined4 g_026dd940;
// @baa 0x01277db0
int sub_01277db0(void)
{
  if (g_026dd940 == 0) {
    g_026dd940 = sub_014b3c90(L"UnrealEd");
    sub_0149d5b0();
  }
  return g_026dd940;
}

int sub_014b3d50(...);
int sub_014ba650(void);
extern undefined4 g_026dd944;
// @baa 0x01277de0
int sub_01277de0(void)
{
  if (g_026dd944 == 0) {
    g_026dd944 = sub_014b3d50(L"UnrealEd");
    sub_014ba650();
  }
  return g_026dd944;
}

int sub_0149d170(void);
int sub_0149fc90(...);
extern undefined4 g_026dd92c;
// @baa 0x01277e10
int sub_01277e10(void)
{
  if (g_026dd92c == 0) {
    g_026dd92c = sub_0149fc90(L"UnrealEd");
    sub_0149d170();
  }
  return g_026dd92c;
}

int sub_014c7710(...);
int sub_014c77d0(void);
extern undefined4 g_026dde4c;
// @baa 0x01277e40
int sub_01277e40(void)
{
  if (g_026dde4c == 0) {
    g_026dde4c = sub_014c7710(L"UnrealEd");
    sub_014c77d0();
  }
  return g_026dde4c;
}

struct C_01278050 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    void sub_01278050();
};

void C_01278050::v0() {}

void C_01278050::v1() {}

void C_01278050::v2() {}

// @baa 0x01278050
void C_01278050::sub_01278050()
{
    v2();
}

struct C_01278060 { void sub_01278060(void); };

// @baa 0x01278060
void C_01278060::sub_01278060(void) { *(int*)((char*)this + 4) = 0; }

struct C_01278080 { int sub_01278080(void); };

// @baa 0x01278080
int C_01278080::sub_01278080(void) { return *(int*)((char*)this + 468); }

struct C_01278090 { void sub_01278090(int a0); };

// @baa 0x01278090
void C_01278090::sub_01278090(int a0) { *(int*)((char*)this + 468) = a0; }

// @baa 0x012780f0
void sub_012780f0(void) {  }

extern undefined4 g_026d4e00;
// @baa 0x012781a0
INT UUnrealEdEngine::vf_178() {
  return *(undefined4 *)(g_026d4e00 + 0x1d4);
}

class wxWindowBase;
class wxWindowBase {
    public:
    public: __declspec(dllimport) bool Close(bool);
    friend void sub_012781d0(void);
};

// @baa 0x012781d0
void UUnrealEdEngine::vf_2dc(void) {
  ((wxWindowBase *)(*(wxWindowBase **)(g_026d4e00 + 0x58)))->wxWindowBase::Close(false);
  return;
}

// @baa 0x012781f0
void sub_012781f0(void) {  }

struct C_01278350 { int sub_01278350(void); };

// @baa 0x01278350
int C_01278350::sub_01278350(void) { return *(int*)((char*)this + 4); }

struct C_01278360 { int sub_01278360(void); };

// @baa 0x01278360
int C_01278360::sub_01278360(void) { return *(int*)((char*)this + 4); }

struct C_01278370 {
    INT Unk00; // 0x0
    INT Size;  // 0x4

    UBOOL sub_01278370(INT Index);
};

// @baa 0x01278370
UBOOL C_01278370::sub_01278370(INT Index)
{
    if (Index >= 0 && Index < Size)
        return 1;
    return 0;
}

struct C_01278390 { int sub_01278390(void); };

// @baa 0x01278390
int C_01278390::sub_01278390(void) { return *(int*)((char*)this + 4); }

struct C_012783a0 { C_012783a0* sub_012783a0(void); };

// @baa 0x012783a0
C_012783a0* C_012783a0::sub_012783a0(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_012783b0 {
    void sub_012783b0();
};

// @baa 0x012783b0
void C_012783b0::sub_012783b0(void)
{
    int * param_1 = (int *)this;

  *param_1 = *param_1 + 1;
  return;
}

struct C_012783c0 { int sub_012783c0(void); };

// @baa 0x012783c0
int C_012783c0::sub_012783c0(void) { return *(int*)((char*)this + 4); }

struct C_012783d0 { int sub_012783d0(void); };

// @baa 0x012783d0
int C_012783d0::sub_012783d0(void) { return *(int*)((char*)this + 4); }

struct C_01278410 {
    bool sub_01278410();
};

// @baa 0x01278410
bool C_01278410::sub_01278410(void)
{
    int * param_1 = (int *)this;

  return 0 < *param_1;
}

struct C_01278420 { int a, b; C_01278420(int, int); };

// @baa 0x01278420
C_01278420::C_01278420(int x, int y) : a(x), b(y) {}

struct C_01278440 { int a, b; C_01278440(int, int); };

// @baa 0x01278440
C_01278440::C_01278440(int x, int y) : a(x), b(y) {}

struct C_01278460 { int a, b; C_01278460(int, int); };

// @baa 0x01278460
C_01278460::C_01278460(int x, int y) : a(x), b(y) {}

// @baa 0x01278480
int sub_01278480(int a0) { return *(int*)a0; }

// @baa 0x01278490
bool sub_01278490(int param_1, int param_2)
{
  return param_1 == param_2;
}

struct C_012784c0 {
    void sub_012784c0(undefined4 *);
};

// @baa 0x012784c0
void C_012784c0::sub_012784c0(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_2 = *param_1;
  param_2[1] = (undefined4)(param_1 + 1);
  return;
}

// @baa 0x012784e0
int sub_012784e0(int a0) { return *(int*)a0; }

// @baa 0x012784f0
bool sub_012784f0(int param_1, int param_2)
{
  return param_1 == param_2;
}

struct C_01278500 { int a, b; C_01278500(const C_01278500 &); };

// @baa 0x01278500
C_01278500::C_01278500(const C_01278500 &o) : a(o.a), b(o.b) {}

// @baa 0x01278540
int sub_01278540(int a0) { return *(int*)a0; }

// @baa 0x01278550
bool sub_01278550(int param_1, int param_2)
{
  return param_1 == param_2;
}

struct C_01278560 { int a, b; C_01278560(const C_01278560 &); };

// @baa 0x01278560
C_01278560::C_01278560(const C_01278560 &o) : a(o.a), b(o.b) {}

struct C_012785f0 { int a, b; C_012785f0(const C_012785f0 &); };

// @baa 0x012785f0
C_012785f0::C_012785f0(const C_012785f0 &o) : a(o.a), b(o.b) {}

struct C_01278610 { int a, b; C_01278610(const C_01278610 &); };

// @baa 0x01278610
C_01278610::C_01278610(const C_01278610 &o) : a(o.a), b(o.b) {}

// @baa 0x01278630
void sub_01278630(void) {  }

// @baa 0x01278640
float10 sub_01278640(double param_1)
{
  return (float10)param_1;
}

// @baa 0x01278650
void sub_01278650(void) {  }

struct C_012786c0 { int sub_012786c0(void); };

// @baa 0x012786c0
int C_012786c0::sub_012786c0(void) { return *(int*)((char*)this + 80); }

// @baa 0x012786d0
undefined2 sub_012786d0(void)
{
  return 0x69;
}

// @baa 0x012786e0
undefined2 sub_012786e0(void)
{
  return 0x66;
}

// @baa 0x012786f0
undefined2 sub_012786f0(void)
{
  return 99;
}

// @baa 0x01278700
undefined2 sub_01278700(void)
{
  return 0x73;
}

struct C_01278710 {
    void sub_01278710();
};

// @baa 0x01278710
void C_01278710::sub_01278710(void)
{
    int param_1 = (int)this;

  *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
  return;
}

// @baa 0x01278740
void sub_01278740(S* p, INT Value)
{
    p->vf_18(Value);
}

struct C_01278760 {
    void sub_01278760(int);
};

int sub_006311e0(...);
extern undefined2 g_01e3f3dc;
// @baa 0x01278760
void C_01278760::sub_01278760(int param_2)
{
    int param_1 = (int)this;
  if (param_2 == 0) {
    sub_006311e0("InModeBar",
                 "e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\editor\\inc\\UnEdModes.h"
                 ,0xab,&g_01e3f3dc);
  }
  *(int *)(param_1 + 0x20) = param_2;
  return;
}

struct C_01278790 {
    undefined4 sub_01278790(int *);
};

// @baa 0x01278790
undefined4 C_01278790::sub_01278790(int * param_2)
{
    int * param_1 = (int *)this;
  if ((*param_1 == *param_2) && (param_1[1] == param_2[1])) {
    return 1;
  }
  return 0;
}

int sub_01338590(void);
int sub_0133a1b0(...);
extern undefined4 g_026d7d10;
// @baa 0x012787b0
int sub_012787b0(void)
{
  if (g_026d7d10 == 0) {
    g_026d7d10 = sub_0133a1b0(L"UnrealEd");
    sub_01338590();
  }
  return g_026d7d10;
}

int sub_0133a060(...);
int sub_01342f70(void);
extern undefined4 g_026d7d08;
// @baa 0x012787e0
int sub_012787e0(void)
{
  if (g_026d7d08 == 0) {
    g_026d7d08 = sub_0133a060(L"UnrealEd");
    sub_01342f70();
  }
  return g_026d7d08;
}

int sub_01369260(void);
int sub_0138d470(...);
extern undefined4 g_026d81c8;
// @baa 0x01278810
int sub_01278810(void)
{
  if (g_026d81c8 == 0) {
    g_026d81c8 = sub_0138d470(L"UnrealEd");
    sub_01369260();
  }
  return g_026d81c8;
}

// @baa 0x01278840
void sub_01278840(S* p, INT Value)
{
    p->vf_18(Value);
}

int sub_012a09c0(void);
int sub_012be5e0(...);
extern undefined4 g_026d5600;
// @baa 0x01278860
int sub_01278860(void)
{
  if (g_026d5600 == 0) {
    g_026d5600 = sub_012be5e0(L"UnrealEd");
    sub_012a09c0();
  }
  return g_026d5600;
}

int sub_01478800(void);
int sub_0148c1f0(...);
extern undefined4 g_026dd5b8;
// @baa 0x01278890
int sub_01278890(void)
{
  if (g_026dd5b8 == 0) {
    g_026dd5b8 = sub_0148c1f0(L"UnrealEd");
    sub_01478800();
  }
  return g_026dd5b8;
}

int sub_012a0b30(void);
int sub_012b5e40(...);
extern undefined4 g_026d5604;
// @baa 0x012788c0
int sub_012788c0(void)
{
  if (g_026d5604 == 0) {
    g_026d5604 = sub_012b5e40(L"UnrealEd");
    sub_012a0b30();
  }
  return g_026d5604;
}

int sub_014503b0(void);
int sub_0146d3a0(...);
extern undefined4 g_026db660;
// @baa 0x012788f0
int sub_012788f0(void)
{
  if (g_026db660 == 0) {
    g_026db660 = sub_0146d3a0(L"UnrealEd");
    sub_014503b0();
  }
  return g_026db660;
}

int sub_01338430(void);
int sub_013573c0(...);
extern undefined4 g_026d7d0c;
// @baa 0x01278920
int sub_01278920(void)
{
  if (g_026d7d0c == 0) {
    g_026d7d0c = sub_013573c0(L"UnrealEd");
    sub_01338430();
  }
  return g_026d7d0c;
}

int sub_01310360(void);
int sub_01327b00(...);
extern undefined4 g_026d6b90;
// @baa 0x01278950
int sub_01278950(void)
{
  if (g_026d6b90 == 0) {
    g_026d6b90 = sub_01327b00(L"UnrealEd");
    sub_01310360();
  }
  return g_026d6b90;
}

int sub_0140a920(void);
int sub_0141c5e0(...);
extern undefined4 g_026da760;
// @baa 0x01278980
int sub_01278980(void)
{
  if (g_026da760 == 0) {
    g_026da760 = sub_0141c5e0(L"UnrealEd");
    sub_0140a920();
  }
  return g_026da760;
}

int sub_0130f3b0(void);
int sub_01326490(...);
extern undefined4 g_026d6b88;
// @baa 0x012789b0
int sub_012789b0(void)
{
  if (g_026d6b88 == 0) {
    g_026d6b88 = sub_01326490(L"UnrealEd");
    sub_0130f3b0();
  }
  return g_026d6b88;
}

int sub_0140a7c0(void);
int sub_0141cd90(...);
extern undefined4 g_026da75c;
// @baa 0x012789e0
int sub_012789e0(void)
{
  if (g_026da75c == 0) {
    g_026da75c = sub_0141cd90(L"UnrealEd");
    sub_0140a7c0();
  }
  return g_026da75c;
}

int sub_01221d60(void);
int sub_01242b20(...);
extern undefined4 g_026d3528;
// @baa 0x01278a10
int sub_01278a10(void)
{
  if (g_026d3528 == 0) {
    g_026d3528 = sub_01242b20(L"UnrealEd");
    sub_01221d60();
  }
  return g_026d3528;
}

int sub_0111e310(...);
int sub_01126470(void);
extern undefined4 g_026ce6b4;
// @baa 0x01278a40
int sub_01278a40(void)
{
  if (g_026ce6b4 == 0) {
    g_026ce6b4 = sub_0111e310(L"UnrealEd");
    sub_01126470();
  }
  return g_026ce6b4;
}

int sub_0111e3d0(...);
int sub_011265c0(void);
extern undefined4 g_026ce6b8;
// @baa 0x01278a70
int sub_01278a70(void)
{
  if (g_026ce6b8 == 0) {
    g_026ce6b8 = sub_0111e3d0(L"UnrealEd");
    sub_011265c0();
  }
  return g_026ce6b8;
}

int sub_0111e550(...);
int sub_01126860(void);
extern undefined4 g_026ce6c0;
// @baa 0x01278aa0
int sub_01278aa0(void)
{
  if (g_026ce6c0 == 0) {
    g_026ce6c0 = sub_0111e550(L"UnrealEd");
    sub_01126860();
  }
  return g_026ce6c0;
}

int sub_011818d0(...);
int sub_01184fc0(void);
extern undefined4 g_026d0ee4;
// @baa 0x01278ad0
int sub_01278ad0(void)
{
  if (g_026d0ee4 == 0) {
    g_026d0ee4 = sub_011818d0(L"UnrealEd");
    sub_01184fc0();
  }
  return g_026d0ee4;
}

int sub_01181810(...);
int sub_01184e70(void);
extern undefined4 g_026d0ee0;
// @baa 0x01278b00
int sub_01278b00(void)
{
  if (g_026d0ee0 == 0) {
    g_026d0ee0 = sub_01181810(L"UnrealEd");
    sub_01184e70();
  }
  return g_026d0ee0;
}

int sub_011827d0(...);
int sub_011868b0(void);
extern undefined4 g_026d0f34;
// @baa 0x01278b30
int sub_01278b30(void)
{
  if (g_026d0f34 == 0) {
    g_026d0f34 = sub_011827d0(L"UnrealEd");
    sub_011868b0();
  }
  return g_026d0f34;
}

int sub_01182a10(...);
int sub_01186ca0(void);
extern undefined4 g_026d0f40;
// @baa 0x01278b60
int sub_01278b60(void)
{
  if (g_026d0f40 == 0) {
    g_026d0f40 = sub_01182a10(L"UnrealEd");
    sub_01186ca0();
  }
  return g_026d0f40;
}

int sub_01182950(...);
int sub_01186b50(void);
extern undefined4 g_026d0f3c;
// @baa 0x01278b90
int sub_01278b90(void)
{
  if (g_026d0f3c == 0) {
    g_026d0f3c = sub_01182950(L"UnrealEd");
    sub_01186b50();
  }
  return g_026d0f3c;
}

int sub_01182890(...);
int sub_01186a00(void);
extern undefined4 g_026d0f38;
// @baa 0x01278bc0
int sub_01278bc0(void)
{
  if (g_026d0f38 == 0) {
    g_026d0f38 = sub_01182890(L"UnrealEd");
    sub_01186a00();
  }
  return g_026d0f38;
}

int sub_01183790(...);
int sub_0118a5c0(void);
extern undefined4 g_026d0f88;
// @baa 0x01278bf0
int sub_01278bf0(void)
{
  if (g_026d0f88 == 0) {
    g_026d0f88 = sub_01183790(L"UnrealEd");
    sub_0118a5c0();
  }
  return g_026d0f88;
}

int sub_01181a50(...);
int sub_01185260(void);
extern undefined4 g_026d0eec;
// @baa 0x01278c20
int sub_01278c20(void)
{
  if (g_026d0eec == 0) {
    g_026d0eec = sub_01181a50(L"UnrealEd");
    sub_01185260();
  }
  return g_026d0eec;
}

int sub_01181b10(...);
int sub_011853b0(void);
extern undefined4 g_026d0ef0;
// @baa 0x01278c50
int sub_01278c50(void)
{
  if (g_026d0ef0 == 0) {
    g_026d0ef0 = sub_01181b10(L"UnrealEd");
    sub_011853b0();
  }
  return g_026d0ef0;
}

int sub_01181c90(...);
int sub_01185650(void);
extern undefined4 g_026d0ef8;
// @baa 0x01278c80
int sub_01278c80(void)
{
  if (g_026d0ef8 == 0) {
    g_026d0ef8 = sub_01181c90(L"UnrealEd");
    sub_01185650();
  }
  return g_026d0ef8;
}

int sub_01182ad0(...);
int sub_01186df0(void);
extern undefined4 g_026d0f44;
// @baa 0x01278cb0
int sub_01278cb0(void)
{
  if (g_026d0f44 == 0) {
    g_026d0f44 = sub_01182ad0(L"UnrealEd");
    sub_01186df0();
  }
  return g_026d0f44;
}

int sub_01181d50(...);
int sub_011857a0(void);
extern undefined4 g_026d0efc;
// @baa 0x01278ce0
int sub_01278ce0(void)
{
  if (g_026d0efc == 0) {
    g_026d0efc = sub_01181d50(L"UnrealEd");
    sub_011857a0();
  }
  return g_026d0efc;
}

int sub_01181e10(...);
int sub_011858f0(void);
extern undefined4 g_026d0f00;
// @baa 0x01278d10
int sub_01278d10(void)
{
  if (g_026d0f00 == 0) {
    g_026d0f00 = sub_01181e10(L"UnrealEd");
    sub_011858f0();
  }
  return g_026d0f00;
}

int sub_01181ed0(...);
int sub_01185a40(void);
extern undefined4 g_026d0f04;
// @baa 0x01278d40
int sub_01278d40(void)
{
  if (g_026d0f04 == 0) {
    g_026d0f04 = sub_01181ed0(L"UnrealEd");
    sub_01185a40();
  }
  return g_026d0f04;
}

int sub_01182050(...);
int sub_01185b90(void);
extern undefined4 g_026d0f0c;
// @baa 0x01278d70
int sub_01278d70(void)
{
  if (g_026d0f0c == 0) {
    g_026d0f0c = sub_01182050(L"UnrealEd");
    sub_01185b90();
  }
  return g_026d0f0c;
}

int sub_01182110(...);
int sub_01185ce0(void);
extern undefined4 g_026d0f10;
// @baa 0x01278da0
int sub_01278da0(void)
{
  if (g_026d0f10 == 0) {
    g_026d0f10 = sub_01182110(L"UnrealEd");
    sub_01185ce0();
  }
  return g_026d0f10;
}

int sub_011821d0(...);
int sub_01185e30(void);
extern undefined4 g_026d0f14;
// @baa 0x01278dd0
int sub_01278dd0(void)
{
  if (g_026d0f14 == 0) {
    g_026d0f14 = sub_011821d0(L"UnrealEd");
    sub_01185e30();
  }
  return g_026d0f14;
}

int sub_01182290(...);
int sub_01185f80(void);
extern undefined4 g_026d0f18;
// @baa 0x01278e00
int sub_01278e00(void)
{
  if (g_026d0f18 == 0) {
    g_026d0f18 = sub_01182290(L"UnrealEd");
    sub_01185f80();
  }
  return g_026d0f18;
}

int sub_01182350(...);
int sub_011860d0(void);
extern undefined4 g_026d0f1c;
// @baa 0x01278e30
int sub_01278e30(void)
{
  if (g_026d0f1c == 0) {
    g_026d0f1c = sub_01182350(L"UnrealEd");
    sub_011860d0();
  }
  return g_026d0f1c;
}

int sub_01182410(...);
int sub_01186220(void);
extern undefined4 g_026d0f20;
// @baa 0x01278e60
int sub_01278e60(void)
{
  if (g_026d0f20 == 0) {
    g_026d0f20 = sub_01182410(L"UnrealEd");
    sub_01186220();
  }
  return g_026d0f20;
}

int sub_011824d0(...);
int sub_01186370(void);
extern undefined4 g_026d0f24;
// @baa 0x01278e90
int sub_01278e90(void)
{
  if (g_026d0f24 == 0) {
    g_026d0f24 = sub_011824d0(L"UnrealEd");
    sub_01186370();
  }
  return g_026d0f24;
}

int sub_01182590(...);
int sub_011864c0(void);
extern undefined4 g_026d0f28;
// @baa 0x01278ec0
int sub_01278ec0(void)
{
  if (g_026d0f28 == 0) {
    g_026d0f28 = sub_01182590(L"UnrealEd");
    sub_011864c0();
  }
  return g_026d0f28;
}

int sub_01182650(...);
int sub_01186610(void);
extern undefined4 g_026d0f2c;
// @baa 0x01278ef0
int sub_01278ef0(void)
{
  if (g_026d0f2c == 0) {
    g_026d0f2c = sub_01182650(L"UnrealEd");
    sub_01186610();
  }
  return g_026d0f2c;
}

int sub_01182b90(...);
int sub_01186f40(void);
extern undefined4 g_026d0f48;
// @baa 0x01278f20
int sub_01278f20(void)
{
  if (g_026d0f48 == 0) {
    g_026d0f48 = sub_01182b90(L"UnrealEd");
    sub_01186f40();
  }
  return g_026d0f48;
}

int sub_01182710(...);
int sub_01186760(void);
extern undefined4 g_026d0f30;
// @baa 0x01278f50
int sub_01278f50(void)
{
  if (g_026d0f30 == 0) {
    g_026d0f30 = sub_01182710(L"UnrealEd");
    sub_01186760();
  }
  return g_026d0f30;
}

int sub_01182c50(...);
int sub_01187090(void);
extern undefined4 g_026d0f4c;
// @baa 0x01278f80
int sub_01278f80(void)
{
  if (g_026d0f4c == 0) {
    g_026d0f4c = sub_01182c50(L"UnrealEd");
    sub_01187090();
  }
  return g_026d0f4c;
}

int sub_01182d10(...);
int sub_011871e0(void);
extern undefined4 g_026d0f50;
// @baa 0x01278fb0
int sub_01278fb0(void)
{
  if (g_026d0f50 == 0) {
    g_026d0f50 = sub_01182d10(L"UnrealEd");
    sub_011871e0();
  }
  return g_026d0f50;
}

int sub_01182e90(...);
int sub_01187330(void);
extern undefined4 g_026d0f58;
// @baa 0x01278fe0
int sub_01278fe0(void)
{
  if (g_026d0f58 == 0) {
    g_026d0f58 = sub_01182e90(L"UnrealEd");
    sub_01187330();
  }
  return g_026d0f58;
}

int sub_01182f50(...);
int sub_01187480(void);
extern undefined4 g_026d0f5c;
// @baa 0x01279010
int sub_01279010(void)
{
  if (g_026d0f5c == 0) {
    g_026d0f5c = sub_01182f50(L"UnrealEd");
    sub_01187480();
  }
  return g_026d0f5c;
}

int sub_011830d0(...);
int sub_011875d0(void);
extern undefined4 g_026d0f64;
// @baa 0x01279040
int sub_01279040(void)
{
  if (g_026d0f64 == 0) {
    g_026d0f64 = sub_011830d0(L"UnrealEd");
    sub_011875d0();
  }
  return g_026d0f64;
}

int sub_01183010(...);
int sub_0118a1d0(void);
extern undefined4 g_026d0f60;
// @baa 0x01279070
int sub_01279070(void)
{
  if (g_026d0f60 == 0) {
    g_026d0f60 = sub_01183010(L"UnrealEd");
    sub_0118a1d0();
  }
  return g_026d0f60;
}

int sub_01183190(...);
int sub_0118a320(void);
extern undefined4 g_026d0f68;
// @baa 0x012790a0
int sub_012790a0(void)
{
  if (g_026d0f68 == 0) {
    g_026d0f68 = sub_01183190(L"UnrealEd");
    sub_0118a320();
  }
  return g_026d0f68;
}

int sub_01183310(...);
int sub_01187870(void);
extern undefined4 g_026d0f70;
// @baa 0x012790d0
int sub_012790d0(void)
{
  if (g_026d0f70 == 0) {
    g_026d0f70 = sub_01183310(L"UnrealEd");
    sub_01187870();
  }
  return g_026d0f70;
}

int sub_01427ed0(void);
int sub_0143e140(...);
extern undefined4 g_026dac9c;
// @baa 0x01279100
int sub_01279100(void)
{
  if (g_026dac9c == 0) {
    g_026dac9c = sub_0143e140(L"UnrealEd");
    sub_01427ed0();
  }
  return g_026dac9c;
}

int sub_01181f90(...);
int sub_01189f30(void);
extern undefined4 g_026d0f08;
// @baa 0x01279130
int sub_01279130(void)
{
  if (g_026d0f08 == 0) {
    g_026d0f08 = sub_01181f90(L"UnrealEd");
    sub_01189f30();
  }
  return g_026d0f08;
}

int sub_01183490(...);
int sub_01187b10(void);
extern undefined4 g_026d0f78;
// @baa 0x01279160
int sub_01279160(void)
{
  if (g_026d0f78 == 0) {
    g_026d0f78 = sub_01183490(L"UnrealEd");
    sub_01187b10();
  }
  return g_026d0f78;
}

int sub_01183550(...);
int sub_01187c60(void);
extern undefined4 g_026d0f7c;
// @baa 0x01279190
int sub_01279190(void)
{
  if (g_026d0f7c == 0) {
    g_026d0f7c = sub_01183550(L"UnrealEd");
    sub_01187c60();
  }
  return g_026d0f7c;
}

int sub_01182dd0(...);
int sub_0118a080(void);
extern undefined4 g_026d0f54;
// @baa 0x012791c0
int sub_012791c0(void)
{
  if (g_026d0f54 == 0) {
    g_026d0f54 = sub_01182dd0(L"UnrealEd");
    sub_0118a080();
  }
  return g_026d0f54;
}

int sub_011836d0(...);
int sub_0118a470(void);
extern undefined4 g_026d0f84;
// @baa 0x012791f0
int sub_012791f0(void)
{
  if (g_026d0f84 == 0) {
    g_026d0f84 = sub_011836d0(L"UnrealEd");
    sub_0118a470();
  }
  return g_026d0f84;
}

int sub_01183850(...);
int sub_01187f00(void);
extern undefined4 g_026d0f8c;
// @baa 0x01279220
int sub_01279220(void)
{
  if (g_026d0f8c == 0) {
    g_026d0f8c = sub_01183850(L"UnrealEd");
    sub_01187f00();
  }
  return g_026d0f8c;
}

int sub_01183910(...);
int sub_01188050(void);
extern undefined4 g_026d0f90;
// @baa 0x01279250
int sub_01279250(void)
{
  if (g_026d0f90 == 0) {
    g_026d0f90 = sub_01183910(L"UnrealEd");
    sub_01188050();
  }
  return g_026d0f90;
}

int sub_01478060(void);
int sub_0148ac90(...);
extern undefined4 g_026dd59c;
// @baa 0x01279280
int sub_01279280(void)
{
  if (g_026dd59c == 0) {
    g_026dd59c = sub_0148ac90(L"UnrealEd");
    sub_01478060();
  }
  return g_026dd59c;
}

int sub_014781c0(void);
int sub_0148ad50(...);
extern undefined4 g_026dd5a0;
// @baa 0x012792b0
int sub_012792b0(void)
{
  if (g_026dd5a0 == 0) {
    g_026dd5a0 = sub_0148ad50(L"UnrealEd");
    sub_014781c0();
  }
  return g_026dd5a0;
}

int sub_01478320(void);
int sub_0148ae10(...);
extern undefined4 g_026dd5a4;
// @baa 0x012792e0
int sub_012792e0(void)
{
  if (g_026dd5a4 == 0) {
    g_026dd5a4 = sub_0148ae10(L"UnrealEd");
    sub_01478320();
  }
  return g_026dd5a4;
}

int sub_012e1a20(void);
int sub_012e4a40(...);
extern undefined4 g_026d6b14;
// @baa 0x01279340
int sub_01279340(void)
{
  if (g_026d6b14 == 0) {
    g_026d6b14 = sub_012e4a40(L"UnrealEd");
    sub_012e1a20();
  }
  return g_026d6b14;
}

int sub_012e4b00(...);
int sub_012f0540(void);
extern undefined4 g_026d6b18;
// @baa 0x01279370
int sub_01279370(void)
{
  if (g_026d6b18 == 0) {
    g_026d6b18 = sub_012e4b00(L"UnrealEd");
    sub_012f0540();
  }
  return g_026d6b18;
}

int sub_012e4bc0(...);
int sub_012f0690(void);
extern undefined4 g_026d6b1c;
// @baa 0x012793a0
int sub_012793a0(void)
{
  if (g_026d6b1c == 0) {
    g_026d6b1c = sub_012e4bc0(L"UnrealEd");
    sub_012f0690();
  }
  return g_026d6b1c;
}

int sub_012e4c80(...);
int sub_012f0990(void);
extern undefined4 g_026d6b20;
// @baa 0x012793d0
int sub_012793d0(void)
{
  if (g_026d6b20 == 0) {
    g_026d6b20 = sub_012e4c80(L"UnrealEd");
    sub_012f0990();
  }
  return g_026d6b20;
}

int sub_012e5100(...);
int sub_012f1020(void);
extern undefined4 g_026d6b38;
// @baa 0x01279400
int sub_01279400(void)
{
  if (g_026d6b38 == 0) {
    g_026d6b38 = sub_012e5100(L"UnrealEd");
    sub_012f1020();
  }
  return g_026d6b38;
}

int sub_012e4e00(...);
int sub_012f0c30(void);
extern undefined4 g_026d6b28;
// @baa 0x01279430
int sub_01279430(void)
{
  if (g_026d6b28 == 0) {
    g_026d6b28 = sub_012e4e00(L"UnrealEd");
    sub_012f0c30();
  }
  return g_026d6b28;
}

int sub_012e5280(...);
int sub_012f12c0(void);
extern undefined4 g_026d6b40;
// @baa 0x01279460
int sub_01279460(void)
{
  if (g_026d6b40 == 0) {
    g_026d6b40 = sub_012e5280(L"UnrealEd");
    sub_012f12c0();
  }
  return g_026d6b40;
}

int sub_012e4d40(...);
int sub_012f0ae0(void);
extern undefined4 g_026d6b24;
// @baa 0x01279490
int sub_01279490(void)
{
  if (g_026d6b24 == 0) {
    g_026d6b24 = sub_012e4d40(L"UnrealEd");
    sub_012f0ae0();
  }
  return g_026d6b24;
}

int sub_012e4ec0(...);
int sub_012f0d80(void);
extern undefined4 g_026d6b2c;
// @baa 0x012794c0
int sub_012794c0(void)
{
  if (g_026d6b2c == 0) {
    g_026d6b2c = sub_012e4ec0(L"UnrealEd");
    sub_012f0d80();
  }
  return g_026d6b2c;
}

int sub_012e4f80(...);
int sub_012f0ed0(void);
extern undefined4 g_026d6b30;
// @baa 0x012794f0
int sub_012794f0(void)
{
  if (g_026d6b30 == 0) {
    g_026d6b30 = sub_012e4f80(L"UnrealEd");
    sub_012f0ed0();
  }
  return g_026d6b30;
}

int sub_012e5040(...);
int sub_01300ce0(void);
extern undefined4 g_026d6b34;
// @baa 0x01279520
int sub_01279520(void)
{
  if (g_026d6b34 == 0) {
    g_026d6b34 = sub_012e5040(L"UnrealEd");
    sub_01300ce0();
  }
  return g_026d6b34;
}

int sub_012e51c0(...);
int sub_012f1170(void);
extern undefined4 g_026d6b3c;
// @baa 0x01279550
int sub_01279550(void)
{
  if (g_026d6b3c == 0) {
    g_026d6b3c = sub_012e51c0(L"UnrealEd");
    sub_012f1170();
  }
  return g_026d6b3c;
}

int sub_01450240(void);
int sub_01461d10(...);
extern undefined4 g_026db65c;
// @baa 0x01279580
int sub_01279580(void)
{
  if (g_026db65c == 0) {
    g_026db65c = sub_01461d10(L"UnrealEd");
    sub_01450240();
  }
  return g_026db65c;
}

int sub_01450510(void);
int sub_0146f8c0(...);
extern undefined4 g_026db664;
// @baa 0x012795b0
int sub_012795b0(void)
{
  if (g_026db664 == 0) {
    g_026db664 = sub_0146f8c0(L"UnrealEd");
    sub_01450510();
  }
  return g_026db664;
}

int sub_0140ab70(void);
int sub_0141c6a0(...);
extern undefined4 g_026da764;
// @baa 0x012795e0
int sub_012795e0(void)
{
  if (g_026da764 == 0) {
    g_026da764 = sub_0141c6a0(L"UnrealEd");
    sub_0140ab70();
  }
  return g_026da764;
}

int sub_0140ada0(void);
int sub_014226f0(...);
extern undefined4 g_026da768;
// @baa 0x01279610
int sub_01279610(void)
{
  if (g_026da768 == 0) {
    g_026da768 = sub_014226f0(L"UnrealEd");
    sub_0140ada0();
  }
  return g_026da768;
}

int sub_014276f0(void);
int sub_0143ca40(...);
extern undefined4 g_026dac90;
// @baa 0x01279640
int sub_01279640(void)
{
  if (g_026dac90 == 0) {
    g_026dac90 = sub_0143ca40(L"UnrealEd");
    sub_014276f0();
  }
  return g_026dac90;
}

int sub_0130f510(void);
int sub_01310eb0(...);
extern undefined4 g_026d6b8c;
// @baa 0x01279670
int sub_01279670(void)
{
  if (g_026d6b8c == 0) {
    g_026d6b8c = sub_01310eb0(L"UnrealEd");
    sub_0130f510();
  }
  return g_026d6b8c;
}

int sub_014c84b0(void);
int sub_014ca390(...);
extern undefined4 g_026dde68;
// @baa 0x012796a0
int sub_012796a0(void)
{
  if (g_026dde68 == 0) {
    g_026dde68 = sub_014ca390(L"UnrealEd");
    sub_014c84b0();
  }
  return g_026dde68;
}

int sub_014c8350(void);
int sub_014ca2d0(...);
extern undefined4 g_026dde64;
// @baa 0x012796d0
int sub_012796d0(void)
{
  if (g_026dde64 == 0) {
    g_026dde64 = sub_014ca2d0(L"UnrealEd");
    sub_014c8350();
  }
  return g_026dde64;
}

int sub_014c8610(void);
int sub_014ca450(...);
extern undefined4 g_026dde6c;
// @baa 0x01279700
int sub_01279700(void)
{
  if (g_026dde6c == 0) {
    g_026dde6c = sub_014ca450(L"UnrealEd");
    sub_014c8610();
  }
  return g_026dde6c;
}

int sub_01221920(void);
int sub_012234e0(...);
extern undefined4 g_026d3520;
// @baa 0x01279730
int sub_01279730(void)
{
  if (g_026d3520 == 0) {
    g_026d3520 = sub_012234e0(L"UnrealEd");
    sub_01221920();
  }
  return g_026d3520;
}

int sub_01251660(...);
int sub_01259e50(void);
extern undefined4 g_026d40f4;
// @baa 0x01279760
int sub_01279760(void)
{
  if (g_026d40f4 == 0) {
    g_026d40f4 = sub_01251660(L"UnrealEd");
    sub_01259e50();
  }
  return g_026d40f4;
}

int sub_01251720(...);
int sub_01259fa0(void);
extern undefined4 g_026d40f8;
// @baa 0x01279790
int sub_01279790(void)
{
  if (g_026d40f8 == 0) {
    g_026d40f8 = sub_01251720(L"UnrealEd");
    sub_01259fa0();
  }
  return g_026d40f8;
}

int sub_01251960(...);
int sub_0125a390(void);
extern undefined4 g_026d4104;
// @baa 0x012797c0
int sub_012797c0(void)
{
  if (g_026d4104 == 0) {
    g_026d4104 = sub_01251960(L"UnrealEd");
    sub_0125a390();
  }
  return g_026d4104;
}

int sub_01477c40(void);
int sub_01479850(...);
extern undefined4 g_026dd590;
// @baa 0x012797f0
int sub_012797f0(void)
{
  if (g_026dd590 == 0) {
    g_026dd590 = sub_01479850(L"UnrealEd");
    sub_01477c40();
  }
  return g_026dd590;
}

int sub_01477da0(void);
int sub_01479910(...);
extern undefined4 g_026dd594;
// @baa 0x01279820
int sub_01279820(void)
{
  if (g_026dd594 == 0) {
    g_026dd594 = sub_01479910(L"UnrealEd");
    sub_01477da0();
  }
  return g_026dd594;
}

int sub_012517e0(...);
int sub_0125a0f0(void);
extern undefined4 g_026d40fc;
// @baa 0x01279850
int sub_01279850(void)
{
  if (g_026d40fc == 0) {
    g_026d40fc = sub_012517e0(L"UnrealEd");
    sub_0125a0f0();
  }
  return g_026d40fc;
}

int sub_01251ea0(...);
int sub_0125aa20(void);
extern undefined4 g_026d412c;
// @baa 0x01279880
int sub_01279880(void)
{
  if (g_026d412c == 0) {
    g_026d412c = sub_01251ea0(L"UnrealEd");
    sub_0125aa20();
  }
  return g_026d412c;
}

int sub_012515a0(...);
int sub_01259d00(void);
extern undefined4 g_026d40f0;
// @baa 0x012798b0
int sub_012798b0(void)
{
  if (g_026d40f0 == 0) {
    g_026d40f0 = sub_012515a0(L"UnrealEd");
    sub_01259d00();
  }
  return g_026d40f0;
}

int sub_01477f00(void);
int sub_014799d0(...);
extern undefined4 g_026dd598;
// @baa 0x012798e0
int sub_012798e0(void)
{
  if (g_026dd598 == 0) {
    g_026dd598 = sub_014799d0(L"UnrealEd");
    sub_01477f00();
  }
  return g_026dd598;
}

int sub_01252020(...);
int sub_0125ab70(void);
extern undefined4 g_026d4134;
// @baa 0x01279910
int sub_01279910(void)
{
  if (g_026d4134 == 0) {
    g_026d4134 = sub_01252020(L"UnrealEd");
    sub_0125ab70();
  }
  return g_026d4134;
}

int sub_012518a0(...);
int sub_0125a240(void);
extern undefined4 g_026d4100;
// @baa 0x01279940
int sub_01279940(void)
{
  if (g_026d4100 == 0) {
    g_026d4100 = sub_012518a0(L"UnrealEd");
    sub_0125a240();
  }
  return g_026d4100;
}

int sub_01251c60(...);
int sub_0125a780(void);
extern undefined4 g_026d4114;
// @baa 0x01279970
int sub_01279970(void)
{
  if (g_026d4114 == 0) {
    g_026d4114 = sub_01251c60(L"UnrealEd");
    sub_0125a780();
  }
  return g_026d4114;
}

int sub_01251a20(...);
int sub_0125a4e0(void);
extern undefined4 g_026d4108;
// @baa 0x012799a0
int sub_012799a0(void)
{
  if (g_026d4108 == 0) {
    g_026d4108 = sub_01251a20(L"UnrealEd");
    sub_0125a4e0();
  }
  return g_026d4108;
}

int sub_01251d20(...);
int sub_0125a8d0(void);
extern undefined4 g_026d4118;
// @baa 0x012799d0
int sub_012799d0(void)
{
  if (g_026d4118 == 0) {
    g_026d4118 = sub_01251d20(L"UnrealEd");
    sub_0125a8d0();
  }
  return g_026d4118;
}

int sub_01251ba0(...);
int sub_0125e3a0(void);
extern undefined4 g_026d4110;
// @baa 0x01279a00
int sub_01279a00(void)
{
  if (g_026d4110 == 0) {
    g_026d4110 = sub_01251ba0(L"UnrealEd");
    sub_0125e3a0();
  }
  return g_026d4110;
}

int sub_0124fa60(void);
int sub_0126dd70(...);
extern undefined4 g_026d40c4;
// @baa 0x01279a30
int sub_01279a30(void)
{
  if (g_026d40c4 == 0) {
    g_026d40c4 = sub_0126dd70(L"UnrealEd");
    sub_0124fa60();
  }
  return g_026d40c4;
}

struct C_0127a7a0 {
    undefined4 * sub_0127a7a0(byte);
};

int sub_0053dfa0(...);
int sub_011c1130(void);
extern undefined * g_022171a0;
// @baa 0x0127a7a0
undefined4 * C_0127a7a0::sub_0127a7a0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_022171a0);
  sub_011c1130();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_0127a7d0 {
    undefined4 sub_0127a7d0(byte);
};

int sub_0142dce0(void);
// @baa 0x0127a7d0
undefined4 C_0127a7d0::sub_0127a7d0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0142dce0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

void sub_00f80980();
// @baa 0x0127a970
void sub_0127a970(void) { sub_00f80980(); }

struct C_0127bdf0 {
    undefined4 sub_0127bdf0(byte);
};

int sub_01277b20(void);
// @baa 0x0127bdf0
undefined4 C_0127bdf0::sub_0127bdf0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01277b20();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x0127d8b0
void sub_0127d8b0(undefined4 * param_1, undefined4 * param_2)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
  }
  return;
}

// @baa 0x0127d8d0
void sub_0127d8d0(undefined4 * param_1, undefined4 * param_2)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
  }
  return;
}

// @baa 0x0127d8f0
void sub_0127d8f0(undefined4 * param_1, undefined4 * param_2)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
  }
  return;
}

struct S_0127d980 {
    TArray<DWORD> Items; // 0x00
    const DWORD* sub_0127d980(INT Index) const;
};

// @baa 0x0127d980
const DWORD* S_0127d980::sub_0127d980(INT Index) const
{
    return &Items(Index);
}

struct C_0127d9d0 {
    int sub_0127d9d0(int);
};

// @baa 0x0127d9d0
int C_0127d9d0::sub_0127d9d0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_0127d9e0 {
    int sub_0127d9e0(int);
};

// @baa 0x0127d9e0
int C_0127d9e0::sub_0127d9e0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

struct C_0127d9f0 {
    int sub_0127d9f0(int);
};

// @baa 0x0127d9f0
int C_0127d9f0::sub_0127d9f0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_0127da00 {
    int sub_0127da00(int);
};

// @baa 0x0127da00
int C_0127da00::sub_0127da00(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x28;
}

struct C_0127da10 {
    int sub_0127da10(int);
};

// @baa 0x0127da10
int C_0127da10::sub_0127da10(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x34 + *param_1;
}

struct C_0127da20 {
    int sub_0127da20(int);
};

// @baa 0x0127da20
int C_0127da20::sub_0127da20(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_0127da30 {
    int sub_0127da30(int);
};

// @baa 0x0127da30
int C_0127da30::sub_0127da30(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x28;
}

struct E { BYTE Bytes[16]; };

struct S_0127da40 {
    TArray<E> Items; // 0x00
    E* sub_0127da40(INT Index);
};

// @baa 0x0127da40
E* S_0127da40::sub_0127da40(INT Index)
{
    return &Items(Index);
}

struct FFaceFXElement
{
	INT X;    // 0x00
	INT Y;    // 0x04
	INT Z;    // 0x08
	INT W;    // 0x0c
	INT Unk10;// 0x10
};

struct UFxRenderWidget
{
	TArray<FFaceFXElement> BoneArray; // 0x00
	FFaceFXElement* sub_0127da90(INT Index);
};

// @baa 0x0127da90
FFaceFXElement* UFxRenderWidget::sub_0127da90(INT Index)
{
	return &BoneArray(Index);
}

struct S_0127dae0 {
    TArray<E> Items; // 0x00
    E* sub_0127dae0(INT Index);
};

// @baa 0x0127dae0
E* S_0127dae0::sub_0127dae0(INT Index)
{
    return &Items(Index);
}

struct E_0127db30 { BYTE Bytes[40]; };

struct S_0127db30 {
    TArray<E_0127db30> Items; // 0x00
    E_0127db30* sub_0127db30(INT Index);
};

// @baa 0x0127db30
E_0127db30* S_0127db30::sub_0127db30(INT Index)
{
    return &Items(Index);
}

struct E_0127db80 { BYTE Bytes[52]; };

struct S_0127db80 {
    TArray<E_0127db80> Items; // 0x00
    E_0127db80* sub_0127db80(INT Index);
};

// @baa 0x0127db80
E_0127db80* S_0127db80::sub_0127db80(INT Index)
{
    return &Items(Index);
}

struct S_0127dbd0 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_0127dbd0(INT Index);
};

// @baa 0x0127dbd0
DWORD* S_0127dbd0::sub_0127dbd0(INT Index)
{
    return &Items(Index);
}

struct E_0127dc20 { BYTE Bytes[40]; };

struct S_0127dc20 {
    TArray<E_0127dc20> Items; // 0x00
    E_0127dc20* sub_0127dc20(INT Index);
};

// @baa 0x0127dc20
E_0127dc20* S_0127dc20::sub_0127dc20(INT Index)
{
    return &Items(Index);
}

struct C_view {
    int sub_0127b090(int, int);
};

// @baa 0x0127e2e0
void UUnrealEdEngine::sub_0127e2e0(undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
    int param_1 = (int)this;
  *(undefined4 *)(param_1 + 0x348) = param_3;
  *(undefined4 *)(param_1 + 0x34c) = param_4;
  ((C_view *)(this))->sub_0127b090(param_3, param_4);
  return;
}

struct C_0127e910 {
    int sub_0127e910(undefined4 *, int);
    int sub_0127ced0(int, int);
};

// @baa 0x0127e910
int C_0127e910::sub_0127e910(undefined4 * param_2, int param_3)
{
    int * param_1 = (int *)this;
  undefined4 *puVar1;
  ((C_0127e910 *)(this))->sub_0127ced0(param_3, 1);
  puVar1 = (undefined4 *)(*param_1 + param_3 * 8);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *param_2;
    puVar1[1] = param_2[1];
  }
  return param_3;
}

struct S_0127ea60 {
    TArray<E> Items; // 0x00
    E* sub_0127ea60(INT Index);
};

// @baa 0x0127ea60
E* S_0127ea60::sub_0127ea60(INT Index)
{
    return &Items(Index);
}

struct S_0127eab0 {
    TArray<E> Items; // 0x00
    const E* sub_0127eab0(INT Index) const;
};

// @baa 0x0127eab0
const E* S_0127eab0::sub_0127eab0(INT Index) const
{
    return &Items(Index);
}

struct UFxRenderWidget_0127ec50
{
	TArray<FFaceFXElement> BoneArray; // 0x00
	FFaceFXElement* sub_0127ec50(INT Index);
};

// @baa 0x0127ec50
FFaceFXElement* UFxRenderWidget_0127ec50::sub_0127ec50(INT Index)
{
	return &BoneArray(Index);
}

// @baa 0x0127ed50
void __stdcall sub_0127ed50(int a, int b)
{
}

struct C_0127ed90 {
    int sub_0127ed90(int);
};

// @baa 0x0127ed90
int C_0127ed90::sub_0127ed90(int param_2)
{
    int * param_1 = (int *)this;
  return *param_1 + param_2 * 4;
}

// @baa 0x0127eda0
void __stdcall sub_0127eda0(int a0, int a1) {  }

struct C_0127edb0 {
    int sub_0127edb0(int);
};

// @baa 0x0127edb0
int C_0127edb0::sub_0127edb0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

// @baa 0x0127edc0
void __stdcall sub_0127edc0(int a0, int a1) {  }

struct S_0127edd0 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_0127edd0(INT Index);
};

// @baa 0x0127edd0
DWORD* S_0127edd0::sub_0127edd0(INT Index)
{
    return &Items(Index);
}

struct C_0127eeb0 {
    int sub_0127eeb0(int);
};

// @baa 0x0127eeb0
int C_0127eeb0::sub_0127eeb0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

// @baa 0x0127eec0
void __stdcall sub_0127eec0(int a0, int a1) {  }

struct C_0127eed0 {
    int sub_0127eed0(int);
};

// @baa 0x0127eed0
int C_0127eed0::sub_0127eed0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_0127eee0 {
    int sub_0127eee0(int);
};

// @baa 0x0127eee0
int C_0127eee0::sub_0127eee0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

struct C_0127eef0 {
    int sub_0127eef0(int);
};

// @baa 0x0127eef0
int C_0127eef0::sub_0127eef0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_0127ef00 {
    int sub_0127ef00();
};

// @baa 0x0127ef00
int C_0127ef00::sub_0127ef00(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_0127ef20 {
    int sub_0127ef20();
};

// @baa 0x0127ef20
int C_0127ef20::sub_0127ef20(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct S_0127ef30 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_0127ef30(INT Index);
};

// @baa 0x0127ef30
DWORD* S_0127ef30::sub_0127ef30(INT Index)
{
    return &Items(Index);
}

struct C_0127ef80 {
    int sub_0127ef80(int);
};

// @baa 0x0127ef80
int C_0127ef80::sub_0127ef80(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_0127ef90 {
    int sub_0127ef90(int);
};

// @baa 0x0127ef90
int C_0127ef90::sub_0127ef90(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_0127efd0 {
    int sub_0127efd0(int);
};

// @baa 0x0127efd0
int C_0127efd0::sub_0127efd0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

int sub_005413d0(...);
// @baa 0x0127f010
void sub_0127f010(undefined4 param_1)
{
  sub_005413d0(param_1,0);
  return;
}

struct C_0127f020 {
    int sub_0127f020(int);
};

// @baa 0x0127f020
int C_0127f020::sub_0127f020(int param_2)
{
    int * param_1 = (int *)this;
  return param_2 * 0x10 + *param_1;
}

struct C_0127f030 {
    int sub_0127f030();
};

// @baa 0x0127f030
int C_0127f030::sub_0127f030(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

// @baa 0x0127f070
void sub_0127f070(undefined4 param_1)
{
  sub_005413d0(param_1,0);
  return;
}

struct C_0127f080 {
    int sub_0127f080();
};

// @baa 0x0127f080
int C_0127f080::sub_0127f080(void)
{
    int param_1 = (int)this;
  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_0127f0a0 {
    int sub_0127f0a0();
};

// @baa 0x0127f0a0
int C_0127f0a0::sub_0127f0a0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_0127f0b0 {
    int sub_0127f0b0();
};

// @baa 0x0127f0b0
int C_0127f0b0::sub_0127f0b0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_0127f0d0 {
    int sub_0127f0d0();
};

// @baa 0x0127f0d0
int C_0127f0d0::sub_0127f0d0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x14;
}

struct C_0127f0e0 {
    int sub_0127f0e0();
};

// @baa 0x0127f0e0
int C_0127f0e0::sub_0127f0e0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_0127f100 {
    int sub_0127f100();
};

// @baa 0x0127f100
int C_0127f100::sub_0127f100(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_0127f110 {
    int sub_0127f110();
};

// @baa 0x0127f110
int C_0127f110::sub_0127f110(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_0127f130 {
    int sub_0127f130();
};

// @baa 0x0127f130
int C_0127f130::sub_0127f130(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct M_0127f3c0 { void sub_0040fcc0(); };

struct C_0127f3c0 { char pad[4]; M_0127f3c0 m; void sub_0127f3c0(); };

// @baa 0x0127f3c0
void C_0127f3c0::sub_0127f3c0() { m.sub_0040fcc0(); }

struct C_0127f3d0 {
    FString sub_0127f3d0();
};

// @baa 0x0127f3d0
FString C_0127f3d0::sub_0127f3d0()
{
    return TEXT("Interp Edit");
}

// @baa 0x0127f400
void __stdcall sub_0127f400(int a0, int a1) {  }

// @baa 0x0127f410
void __stdcall sub_0127f410(int a0, int a1) {  }

// @baa 0x0127f420
void __stdcall sub_0127f420(int a0, int a1) {  }

// @baa 0x0127f430
void __stdcall sub_0127f430(int a0, int a1) {  }

struct M_0127f440 { void sub_0040fcc0(); };

struct C_0127f440 { char pad[4]; M_0127f440 m; void sub_0127f440(); };

// @baa 0x0127f440
void C_0127f440::sub_0127f440() { m.sub_0040fcc0(); }

struct A_0127f670 { virtual void sub_0128c6b0(); char pad[320]; };

struct B_0127f670 { virtual void sub_0128c6b0(); };

struct C_0127f670 : A_0127f670, B_0127f670 { virtual void sub_0128c6b0(); C_0127f670(); };

C_0127f670::C_0127f670() {}

// @baa 0x0127f670
void C_0127f670::sub_0128c6b0() {}

struct A_0127f7b0 { virtual void sub_0128c710(); char pad[408]; };

struct B_0127f7b0 { virtual void sub_0128c710(); };

struct C_0127f7b0 : A_0127f7b0, B_0127f7b0 { virtual void sub_0128c710(); C_0127f7b0(); };

C_0127f7b0::C_0127f7b0() {}

// @baa 0x0127f7b0
void C_0127f7b0::sub_0128c710() {}

struct A_0127f8f0 { virtual void sub_0128c770(); char pad[412]; };

struct B_0127f8f0 { virtual void sub_0128c770(); };

struct C_0127f8f0 : A_0127f8f0, B_0127f8f0 { virtual void sub_0128c770(); C_0127f8f0(); };

C_0127f8f0::C_0127f8f0() {}

// @baa 0x0127f8f0
void C_0127f8f0::sub_0128c770() {}
