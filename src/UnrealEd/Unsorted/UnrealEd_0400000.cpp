// UnrealEd_0400000.cpp: 184 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

extern "C" void *__cdecl memcpy(void *, const void *, unsigned int);
// @baa 0x00401de0
void sub_00401de0(void * param_1, void * param_2, int param_3)
{
  memcpy(param_1,param_2,param_3 * 2);
  return;
}

int sub_00401830(ushort *a, ushort *b, int c);
// @baa 0x00401df0
int sub_00401df0(ushort *a, ushort *b, int c) { return sub_00401830(a, b, c); }

void sub_01ab3960();
// @baa 0x00401e00
void sub_00401e00(void) { sub_01ab3960(); }

struct C {
    undefined1 sub_00401e20();
};

// @baa 0x00401e20
undefined1 C::sub_00401e20(void)
{
    int param_1 = (int)this;

  return *(undefined1 *)(param_1 + 0xc);
}

struct C_00401e30 {
    undefined4 sub_00401e30();
};

// @baa 0x00401e30
undefined4 C_00401e30::sub_00401e30(void)
{
    int param_1 = (int)this;

  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  if (((iVar1 != 4) && (iVar1 != 2)) && (iVar1 != 3)) {
    return 0;
  }
  return 1;
}

struct C_00401e50 {
    undefined4 sub_00401e50();
};

// @baa 0x00401e50
undefined4 C_00401e50::sub_00401e50(void)
{
    int param_1 = (int)this;

  if ((*(int *)(param_1 + 4) != 0) && (*(int *)(param_1 + 4) != 1)) {
    return 0;
  }
  return 1;
}

struct C_00401e70 { int sub_00401e70(void); };

// @baa 0x00401e70
int C_00401e70::sub_00401e70(void) { return *(int*)((char*)this + 20); }

struct C_00401e80 { int sub_00401e80(void); };

// @baa 0x00401e80
int C_00401e80::sub_00401e80(void) { return *(int*)((char*)this + 32); }

struct C_00401e90 { int sub_00401e90(void); };

// @baa 0x00401e90
int C_00401e90::sub_00401e90(void) { return *(int*)((char*)this + 40); }

extern int g_027ca4d0;
int sub_01ab5d40();
// @baa 0x00401f20
int sub_00401f20() { if (!g_027ca4d0) g_027ca4d0 = sub_01ab5d40(); return g_027ca4d0; }

extern int g_027ca4d8;
int sub_01ab6860();
// @baa 0x00401f60
int sub_00401f60() { if (!g_027ca4d8) g_027ca4d8 = sub_01ab6860(); return g_027ca4d8; }

struct C_00401f80 { char* sub_00401f80(void); };

// @baa 0x00401f80
char* C_00401f80::sub_00401f80(void) { return (char*)this + 4; }

struct M_00401f90 { void sub_01ab3c30(); };

struct C_00401f90 { char pad[4]; M_00401f90 m; void sub_00401f90(); };

// @baa 0x00401f90
void C_00401f90::sub_00401f90() { m.sub_01ab3c30(); }

struct C_00401fa0 {
    char pad_00[0x20];
    int field_20;
    BYTE sub_00401fa0();
};

// @baa 0x00401fa0
BYTE C_00401fa0::sub_00401fa0(void)
{
    return field_20 != 0;
}

extern int g_02663d00;
int sub_00488670();
// @baa 0x00401fb0
int sub_00401fb0() { if (!g_02663d00) g_02663d00 = sub_00488670(); return g_02663d00; }

struct C_00401fd0 { int sub_00401fd0(void); };

// @baa 0x00401fd0
int C_00401fd0::sub_00401fd0(void) { return *(int*)((char*)this + 12); }

struct C_00402000 {
    undefined4 sub_00402000();
};

// @baa 0x00402000
undefined4 C_00402000::sub_00402000(void)
{
    int param_1 = (int)this;
  return *(undefined4 *)(param_1 + 0x14);
}

extern int g_027ca4dc;
int sub_01ab69a0();
// @baa 0x00402010
int sub_00402010() { if (!g_027ca4dc) g_027ca4dc = sub_01ab69a0(); return g_027ca4dc; }

struct C_00402030 { float sub_00402030(void); };

// @baa 0x00402030
float C_00402030::sub_00402030(void) { return *(float*)((char*)this + 16); }

struct C_00402040 { float sub_00402040(void); };

// @baa 0x00402040
float C_00402040::sub_00402040(void) { return *(float*)((char*)this + 20); }

struct C_00402150 { char* sub_00402150(void); };

// @baa 0x00402150
char* C_00402150::sub_00402150(void) { return (char*)this + 20; }

extern int g_027ca4e0;
int sub_01ab8200();
// @baa 0x00402160
int sub_00402160() { if (!g_027ca4e0) g_027ca4e0 = sub_01ab8200(); return g_027ca4e0; }

struct C_00402180 { int a; C_00402180(int); };

// @baa 0x00402180
C_00402180::C_00402180(int x) : a(x) {}

struct C_00402190 {
    int x;
    C_00402190* sub_00402190();
};

// @baa 0x00402190
C_00402190* C_00402190::sub_00402190()
{
    this->x += 4;
    return this;
}

struct C_004021a0 {
    undefined4 sub_004021a0();
};

// @baa 0x004021a0
undefined4 C_004021a0::sub_004021a0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(undefined4 *)*param_1;
}

struct C_004021d0 { float sub_004021d0(void); };

// @baa 0x004021d0
float C_004021d0::sub_004021d0(void) { return *(float*)((char*)this + 24); }

struct C_004021e0 { char* sub_004021e0(void); };

// @baa 0x004021e0
char* C_004021e0::sub_004021e0(void) { return (char*)this + 52; }

struct C_004021f0 { char* sub_004021f0(void); };

// @baa 0x004021f0
char* C_004021f0::sub_004021f0(void) { return (char*)this + 64; }

struct C_00402200 { int sub_00402200(void); };

// @baa 0x00402200
int C_00402200::sub_00402200(void) { return *(int*)((char*)this + 80); }

struct C_00402250 { char* sub_00402250(void); };

// @baa 0x00402250
char* C_00402250::sub_00402250(void) { return (char*)this + 12; }

struct C_00402260 { char* sub_00402260(void); };

// @baa 0x00402260
char* C_00402260::sub_00402260(void) { return (char*)this + 28; }

struct C_00402270 { char* sub_00402270(void); };

// @baa 0x00402270
char* C_00402270::sub_00402270(void) { return (char*)this + 60; }

struct C_00402280 { char* sub_00402280(void); };

// @baa 0x00402280
char* C_00402280::sub_00402280(void) { return (char*)this + 24712; }

struct C_00402290 { C_00402290* sub_00402290(int a0); };

// @baa 0x00402290
C_00402290* C_00402290::sub_00402290(int a0) { return this; }

extern int g_02618848;
int sub_0047ce20();
// @baa 0x004022a0
int sub_004022a0() { if (!g_02618848) g_02618848 = sub_0047ce20(); return g_02618848; }

struct C_004022c0 { int a, b; C_004022c0(int, int); };

// @baa 0x004022c0
C_004022c0::C_004022c0(int x, int y) : a(x), b(y) {}

struct C_004022e0 { int a, b; C_004022e0(int, int); };

// @baa 0x004022e0
C_004022e0::C_004022e0(int x, int y) : a(x), b(y) {}

struct S16 {
    INT f00;
    INT f04;
    INT f08;
    INT f0c;
    S16* sub_00402300();
};

// @baa 0x00402300
S16* S16::sub_00402300()
{
    f00 = 0;
    f04 = 0;
    f08 = 0;
    f0c = 0;
    return this;
}

struct C_00402310 {
    undefined4 sub_00402310();
};

// @baa 0x00402310
undefined4 C_00402310::sub_00402310(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  return *param_1;
}

struct C_00402320 { int sub_00402320(void); };

// @baa 0x00402320
int C_00402320::sub_00402320(void) { return *(int*)((char*)this + 4); }

struct C_00402330 { void sub_00402330(int a0); };

// @baa 0x00402330
void C_00402330::sub_00402330(int a0) { *(int*)((char*)this + 0) = a0; }

struct C_00402340 { void sub_00402340(int a0); };

// @baa 0x00402340
void C_00402340::sub_00402340(int a0) { *(int*)((char*)this + 4) = a0; }

struct C_00402350 {
    void sub_00402350(undefined1);
};

// @baa 0x00402350
void C_00402350::sub_00402350(undefined1 param_2)
{
    int param_1 = (int)this;

  *(undefined1 *)(param_1 + 0x188) = 1;
  *(undefined1 *)(param_1 + 0x18a) = param_2;
  return;
}

struct C_00402370 { int sub_00402370(void); };

// @baa 0x00402370
int C_00402370::sub_00402370(void) { return *(int*)((char*)this + 324); }

// @baa 0x00402380
int sub_00402380(void) { return 0; }

extern int g_0261883c;
int sub_004843e0();
// @baa 0x00402390
int sub_00402390() { if (!g_0261883c) g_0261883c = sub_004843e0(); return g_0261883c; }

extern int g_026657b0;
int sub_00534190();
// @baa 0x004023b0
int sub_004023b0() { if (!g_026657b0) g_026657b0 = sub_00534190(); return g_026657b0; }

struct C_004025c0 { C_004025c0* sub_004025c0(void); };

// @baa 0x004025c0
C_004025c0* C_004025c0::sub_004025c0(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_004025d0 {
    void sub_004025d0();
};

int sub_0053dfa0(...);
// @baa 0x004025d0
void C_004025d0::sub_004025d0(void)
{
    int * param_1 = (int *)this;

  if (*param_1 != 0) {
    sub_0053dfa0(*param_1);
    *param_1 = 0;
  }
  return;
}

struct C_004025f0 { int sub_004025f0(void); };

// @baa 0x004025f0
int C_004025f0::sub_004025f0(void) { return *(int*)((char*)this + 0); }

struct C_00402600 {
    void sub_00402600(undefined4, int, int);
};

int sub_0053df70(...);
// @baa 0x00402600
void C_00402600::sub_00402600(undefined4 param_2, int param_3, int param_4)
{
    int * param_1 = (int *)this;

  int iVar1;
  
  if ((*param_1 != 0) || (param_3 != 0)) {
    iVar1 = sub_0053df70(*param_1,param_3 * param_4,8);
    *param_1 = iVar1;
  }
  return;
}

int sub_0053df40(...);
// @baa 0x00402650
void sub_00402650(undefined4 param_1)
{
  sub_0053df40(param_1,8);
  return;
}

// @baa 0x00402670
void sub_00402670(undefined4 param_1)
{
  sub_0053df40(param_1,8);
  return;
}

struct C_00402690 {
    undefined4 sub_00402690(int *);
};

// @baa 0x00402690
undefined4 C_00402690::sub_00402690(int * param_2)
{
    int * param_1 = (int *)this;

  if ((*param_1 == *param_2) && (param_1[1] == param_2[1])) {
    return 1;
  }
  return 0;
}

struct C_004026b0 {
    INT Unk00; // 0x00
    INT Unk04; // 0x04
    C_004026b0* sub_004026b0(INT value);
};

// @baa 0x004026b0
C_004026b0* C_004026b0::sub_004026b0(INT value)
{
    Unk00 = value;
    Unk04 = 0;
    return this;
}

extern undefined4 g_026a1c50;
// @baa 0x00402740
undefined4 sub_00402740(void)
{
  return g_026a1c50;
}

struct C_004027e0 {
    undefined4 sub_004027e0();
};

// @baa 0x004027e0
undefined4 C_004027e0::sub_004027e0(void)
{
    undefined4 param_1 = (undefined4)this;
  return param_1;
}

struct C_00402870 {
    undefined4 sub_00402870();
};

// @baa 0x00402870
undefined4 C_00402870::sub_00402870(void)
{
    float * param_1 = (float *)this;
  if (((*param_1 == 0.0) && (param_1[1] == 0.0)) && (param_1[2] == 0.0)) {
    return 1;
  }
  return 0;
}

struct C_004028f0 { C_004028f0* sub_004028f0(void); };

// @baa 0x004028f0
C_004028f0* C_004028f0::sub_004028f0(void) { return this; }

struct C_00402920 {
    float10 sub_00402920(int);
};

// @baa 0x00402920
float10 C_00402920::sub_00402920(int param_2)
{
    int param_1 = (int)this;

  return (float10)*(float *)(param_1 + (param_2 >> 2 & 0x3fffU) * 4);
}

struct C_00402940 {
    float10 sub_00402940(int);
};

// @baa 0x00402940
float10 C_00402940::sub_00402940(int param_2)
{
    int param_1 = (int)this;

  return (float10)*(float *)(param_1 + (param_2 + 0x4000 >> 2 & 0x3fffU) * 4);
}

struct C_00402960 { C_00402960* sub_00402960(void); };

// @baa 0x00402960
C_00402960* C_00402960::sub_00402960(void) { return this; }

// @baa 0x00402970
void sub_00402970()
{
}

struct C_00402b30 { int sub_00402b30(void); };

// @baa 0x00402b30
int C_00402b30::sub_00402b30(void) { return *(int*)((char*)this + 48); }

int sub_0062c2a0(void);
int sub_0063f2d0(...);
extern undefined4 g_026a4ba4;
// @baa 0x00402b70
int sub_00402b70(void)
{
  if (g_026a4ba4 == 0) {
    g_026a4ba4 = sub_0063f2d0(L"Core");
    sub_0062c2a0();
  }
  return g_026a4ba4;
}

int sub_005e1960(...);
extern undefined4 g_026667a8;
// @baa 0x00402ba0
void sub_00402ba0(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6)
{
  if (g_026a4ba4 == 0) {
    g_026a4ba4 = sub_0063f2d0(L"Core");
    sub_0062c2a0();
  }
  sub_005e1960(g_026a4ba4,param_2,param_3,param_4,param_5,param_6,0,g_026667a8,0,0,0);
  return;
}

struct C_004046e0 {
    uint sub_004046e0();
};

// @baa 0x004046e0
uint C_004046e0::sub_004046e0(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 0x44) & 1;
}

// @baa 0x004046f0
void sub_004046f0(void) {  }

int sub_00becaf0(void);
int sub_00bf4420(...);
extern undefined4 g_026c0584;
// @baa 0x00404700
int sub_00404700(void)
{
  if (g_026c0584 == 0) {
    g_026c0584 = sub_00bf4420(L"Engine");
    sub_00becaf0();
  }
  return g_026c0584;
}

struct S {
    char _pad0[0x30];
    INT field_0x30;
    char _pad4[8];
    INT field_0x3c;
    S *sub_00404730();
};

// @baa 0x00404730
S *S::sub_00404730()
{
    S *t = this;
    t->field_0x3c = 0;
    t->field_0x30 = 0;
    return t;
}

struct S_00404740 {
    virtual void vf_00();
    virtual void vf_04();
    virtual void vf_08();
    virtual void vf_0c();
    virtual void vf_10();
    virtual void vf_14();
    virtual void vf_18(INT Value);
};

// @baa 0x00404740
void sub_00404740(S_00404740* p, INT Value)
{
    p->vf_18(Value);
}

struct C_00404760 {
    void sub_00404760(undefined4, int);
};

// @baa 0x00404760
void C_00404760::sub_00404760(undefined4 param_2, int param_3)
{
    int param_1 = (int)this;

  if (param_3 != 0) {
    *(undefined4 *)(param_1 + 0x304) = *(undefined4 *)(param_1 + 0x300);
    *(undefined4 *)(param_1 + 0x300) = param_2;
    return;
  }
  *(undefined4 *)(param_1 + 0x300) = param_2;
  return;
}

extern char g_01e3f3f0[];
struct C_00404790 { void sub_00404790(void); };

// @baa 0x00404790
void C_00404790::sub_00404790(void) { *(int*)((char*)this + 0) = (int)g_01e3f3f0; }

struct C_004047a0 {
    undefined4 * sub_004047a0(byte);
};

// @baa 0x004047a0
undefined4 * C_004047a0::sub_004047a0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01e3f3f0);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_0140a0d0(void);
int sub_0141c520(...);
extern undefined4 g_026da758;
// @baa 0x004047c0
int sub_004047c0(void)
{
  if (g_026da758 == 0) {
    g_026da758 = sub_0141c520(L"UnrealEd");
    sub_0140a0d0();
  }
  return g_026da758;
}

extern char g_01e3f40c[];
struct C_004047f0 { C_004047f0* sub_004047f0(void); };

// @baa 0x004047f0
C_004047f0* C_004047f0::sub_004047f0(void) { *(int*)((char*)this + 0) = (int)g_01e3f40c; return this; }

// @baa 0x00404800
void __stdcall sub_00404800(int a0) {  }

// @baa 0x00404810
void __stdcall sub_00404810(int a0, int a1) {  }

// @baa 0x00404820
void __stdcall sub_00404820(int a0, int a1) {  }

// @baa 0x00404830
void __stdcall sub_00404830(int a0, int a1) {  }

extern undefined4 g_02616ee4;
// @baa 0x00404840
undefined4 sub_00404840(void)
{
  return g_02616ee4;
}

extern undefined1 g_02616ee8;
// @baa 0x00404850
undefined1 sub_00404850(void)
{
  return g_02616ee8;
}

extern undefined1 g_02616ee9;
// @baa 0x00404860
undefined1 sub_00404860(void)
{
  return g_02616ee9;
}

extern undefined1 g_02616eea;
// @baa 0x00404870
void sub_00404870(undefined1 param_1)
{
  g_02616eea = param_1;
  return;
}

// @baa 0x00404880
undefined1 sub_00404880(void)
{
  return g_02616eea;
}

extern char g_025d4470[];
// @baa 0x00405360
int sub_00405360(void) { return (int)g_025d4470; }

extern char g_02617600[];
// @baa 0x00405370
int sub_00405370(void) { return (int)g_02617600; }

extern char g_025d4468[];
// @baa 0x00405440
int sub_00405440(void) { return (int)g_025d4468; }

extern char g_026175c4[];
// @baa 0x00405450
int sub_00405450(void) { return (int)g_026175c4; }

extern char g_02617050[];
// @baa 0x00405510
int sub_00405510(void) { return (int)g_02617050; }

struct C_00405520 {
    undefined4 sub_00405520();
};

// @baa 0x00405520
undefined4 C_00405520::sub_00405520(void)
{
    int param_1 = (int)this;

  return *(undefined4 *)(*(int *)(param_1 + 0x158) + 0x144);
}

// @baa 0x00405530
void __stdcall sub_00405530(int a0) {  }

// @baa 0x00405540
void __stdcall sub_00405540(int a0) {  }

// @baa 0x00405550
void __stdcall sub_00405550(int a0) {  }

// @baa 0x00405560
void __stdcall sub_00405560(int a0, int a1) {  }

// @baa 0x00405570
void __stdcall sub_00405570(int a0) {  }

// @baa 0x00405580
void __stdcall sub_00405580(int a0, int a1) {  }

// @baa 0x004055d0
void __stdcall sub_004055d0(int a0) {  }

// @baa 0x004055e0
void __stdcall sub_004055e0(int a0, int a1) {  }

extern char g_025d4478[];
// @baa 0x00405700
int sub_00405700(void) { return (int)g_025d4478; }

extern char g_026170a4[];
// @baa 0x00405710
int sub_00405710(void) { return (int)g_026170a4; }

class wxString;
class wxString {
    public:
    public: __declspec(dllimport) int Cmp(wchar_t const *) const;
    friend bool sub_00409220(wxString * param_1, wchar_t * param_2);
};

// @baa 0x00409220
bool sub_00409220(wxString * param_1, wchar_t * param_2)
{
  int iVar1;
  
  iVar1 = ((wxString *)(param_1))->wxString::Cmp(param_2);
  return iVar1 == 0;
}

// @baa 0x00409350
BYTE __stdcall sub_00409350(DWORD a)
{
    return 1;
}

extern undefined4 g_02616eec;
// @baa 0x00409620
undefined4 sub_00409620(void)
{
  return g_02616eec;
}

// @baa 0x00409630
void sub_00409630(undefined4 param_1)
{
  g_02616eec = param_1;
  return;
}

extern undefined4 g_02616ef0;
// @baa 0x00409780
undefined4 sub_00409780(void)
{
  return g_02616ef0;
}

// @baa 0x00409790
void sub_00409790(undefined4 param_1)
{
  g_02616ef0 = param_1;
  return;
}

extern undefined4 g_02616ef4;
// @baa 0x004097a0
undefined4 sub_004097a0(void)
{
  return g_02616ef4;
}

// @baa 0x004097b0
void sub_004097b0(undefined4 param_1)
{
  g_02616ef4 = param_1;
  return;
}

extern float g_025d4008;
// @baa 0x004097c0
float sub_004097c0()
{
    return g_025d4008;
}

extern undefined4 g_025d400c;
// @baa 0x004097e0
undefined4 sub_004097e0(void)
{
  return g_025d400c;
}

// @baa 0x004097f0
void sub_004097f0(undefined4 param_1)
{
  g_025d400c = param_1;
  return;
}

extern char g_026175c0[];
// @baa 0x00409800
int sub_00409800(void) { return (int)g_026175c0; }

extern undefined4 g_026175f0;
extern undefined4 g_026175f4;
extern undefined4 g_026175f8;
extern undefined4 g_026175fc;
// @baa 0x00409860
void sub_00409860(undefined4 * param_1)
{
  g_026175f0 = *param_1;
  g_026175f4 = param_1[1];
  g_026175f8 = param_1[2];
  g_026175fc = param_1[3];
  return;
}

extern undefined1 g_02616ef8;
// @baa 0x00409890
undefined1 sub_00409890(void)
{
  return g_02616ef8;
}

// @baa 0x004098a0
void sub_004098a0(undefined1 param_1)
{
  g_02616ef8 = param_1;
  return;
}

extern undefined4 g_025d4010;
extern undefined4 g_025d4014;
extern undefined4 g_025d4018;
// @baa 0x004098b0
void sub_004098b0(undefined4 * param_1, undefined4 * param_2, undefined4 * param_3)
{
  *param_1 = g_025d4010;
  *param_2 = g_025d4014;
  *param_3 = g_025d4018;
  return;
}

// @baa 0x004098e0
void sub_004098e0(undefined4 param_1, undefined4 param_2, undefined4 param_3)
{
  g_025d4010 = param_1;
  g_025d4014 = param_2;
  g_025d4018 = param_3;
  return;
}

extern char g_02617038[];
// @baa 0x00409900
int sub_00409900(void) { return (int)g_02617038; }

extern char g_025d4460[];
// @baa 0x0040bb70
int sub_0040bb70(void) { return (int)g_025d4460; }

extern char g_026170bc[];
// @baa 0x0040bb80
int sub_0040bb80(void) { return (int)g_026170bc; }

extern char g_02616fac[];
// @baa 0x0040bc00
int sub_0040bc00(void) { return (int)g_02616fac; }

class wxWindowBase;
class wxWindowBase {
    public:
    public: __declspec(dllimport) bool Close(bool);
    friend void sub_0040c590(void);
};

// @baa 0x0040c590
void sub_0040c590(void)
{
  if (g_02616ee4 != 0) {
    ((wxWindowBase *)((wxWindowBase *)g_02616ee4))->wxWindowBase::Close(false);
  }
  return;
}

struct C_0040c5b0 {
    void sub_0040c5b0(undefined1);
};

// @baa 0x0040c5b0
void C_0040c5b0::sub_0040c5b0(undefined1 param_2)
{
    int param_1 = (int)this;

  *(undefined1 *)(param_1 + 0x19) = param_2;
  return;
}

struct C_0040c5c0 {
    undefined4 sub_0040c5c0(byte);
};

int sub_01ab3290(...);
int sub_01abc3b0(void);
// @baa 0x0040c5c0
undefined4 C_0040c5c0::sub_0040c5c0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01abc3b0();
  if ((param_2 & 1) != 0) {
    sub_01ab3290(param_1,0x50);
  }
  return param_1;
}

struct C_0040c630 { int sub_0040c630(void); };

// @baa 0x0040c630
int C_0040c630::sub_0040c630(void) { return *(int*)((char*)this + 28); }

struct C_0040c640 { int sub_0040c640(void); };

// @baa 0x0040c640
int C_0040c640::sub_0040c640(void) { return *(int*)((char*)this + 32); }

struct C_0040c650 { int sub_0040c650(void); };

// @baa 0x0040c650
int C_0040c650::sub_0040c650(void) { return *(int*)((char*)this + 52); }

struct C_0040c660 { char* sub_0040c660(void); };

// @baa 0x0040c660
char* C_0040c660::sub_0040c660(void) { return (char*)this + 60; }

struct C_0040c670 { int sub_0040c670(void); };

// @baa 0x0040c670
int C_0040c670::sub_0040c670(void) { return *(int*)((char*)this + 72); }

struct C_0040c680 { int sub_0040c680(void); };

// @baa 0x0040c680
int C_0040c680::sub_0040c680(void) { return *(int*)((char*)this + 76); }

// @baa 0x0040c690
undefined4 sub_0040c690(void)
{
  return g_02616eec;
}

struct C_0040c6a0 {
    undefined1 sub_0040c6a0();
};

// @baa 0x0040c6a0
undefined1 C_0040c6a0::sub_0040c6a0(void)
{
    int param_1 = (int)this;

  return *(undefined1 *)(param_1 + 0xac);
}

struct C_0040c6b0 {
    void sub_0040c6b0(undefined4);
    int sub_0051dae0(int);
};

int sub_0047ceb0(...);
// @baa 0x0040c6b0
void C_0040c6b0::sub_0040c6b0(undefined4 param_2)
{
    int param_1 = (int)this;
  if (*(char *)(param_1 + 0x14) != '\0') {
    sub_0047ceb0("Message received from %#x: AppStartup.",param_2);
  }
  ((C_0040c6b0 *)(this))->sub_0051dae0(param_2);
  return;
}

struct C_0040c6e0 {
    undefined4 sub_0040c6e0(byte);
};

int sub_0046f910(void);
// @baa 0x0040c6e0
undefined4 C_0040c6e0::sub_0040c6e0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0046f910();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_0040c700 {
    void sub_0040c700(undefined4);
    int sub_0051dce0(int);
};

// @baa 0x0040c700
void C_0040c700::sub_0040c700(undefined4 param_2)
{
    int param_1 = (int)this;
  if (*(char *)(param_1 + 0x14) != '\0') {
    sub_0047ceb0("Message received from %#x: ActorRenamed.",param_2);
  }
  ((C_0040c700 *)(this))->sub_0051dce0(param_2);
  return;
}

struct C_0040c730 {
    void sub_0040c730(undefined4, undefined4);
    int sub_0051dd20(int, int);
};

// @baa 0x0040c730
void C_0040c730::sub_0040c730(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  if (*(char *)(param_1 + 0x14) != '\0') {
    sub_0047ceb0("Message received from %#x: QueryLanguageInfo.",param_2);
  }
  ((C_0040c730 *)(this))->sub_0051dd20(param_2, param_3);
  return;
}

struct C_0040c7b0 {
    void sub_0040c7b0(undefined4);
    int sub_0051e010(int);
};

// @baa 0x0040c7b0
void C_0040c7b0::sub_0040c7b0(undefined4 param_2)
{
    int param_1 = (int)this;
  if (*(char *)(param_1 + 0x14) != '\0') {
    sub_0047ceb0("Message received from %#x: LayoutFaceGraph.",param_2);
  }
  ((C_0040c7b0 *)(this))->sub_0051e010(param_2);
  return;
}

struct C_0040c7e0 {
    void sub_0040c7e0(undefined4, undefined4);
    int sub_0051e050(int, int);
};

// @baa 0x0040c7e0
void C_0040c7e0::sub_0040c7e0(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  if (*(char *)(param_1 + 0x14) != '\0') {
    sub_0047ceb0("Message received from %#x: AddFaceGraphNode.  node (%#x)",param_2,param_3);
  }
  ((C_0040c7e0 *)(this))->sub_0051e050(param_2, param_3);
  return;
}

struct C_0040c820 {
    void sub_0040c820(undefined4, undefined4);
    int sub_0051e090(int, int);
};

// @baa 0x0040c820
void C_0040c820::sub_0040c820(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  if (*(char *)(param_1 + 0x14) != '\0') {
    sub_0047ceb0("Message received from %#x: RemoveFaceGraphNode.  node (%#x)",param_2,param_3);
  }
  ((C_0040c820 *)(this))->sub_0051e090(param_2, param_3);
  return;
}

struct C_0040c8b0 {
    void sub_0040c8b0(undefined4);
    int sub_0051e1b0(int);
};

// @baa 0x0040c8b0
void C_0040c8b0::sub_0040c8b0(undefined4 param_2)
{
    int param_1 = (int)this;
  if (*(char *)(param_1 + 0x14) != '\0') {
    sub_0047ceb0("Message received from %#x: Refresh.",param_2);
  }
  ((C_0040c8b0 *)(this))->sub_0051e1b0(param_2);
  return;
}

struct C_0040c9d0 {
    void sub_0040c9d0(undefined4);
    int sub_0051e3f0(int);
};

// @baa 0x0040c9d0
void C_0040c9d0::sub_0040c9d0(undefined4 param_2)
{
    int param_1 = (int)this;
  if (*(char *)(param_1 + 0x14) != '\0') {
    sub_0047ceb0("Message received from %#x: RecalculateGrid.",param_2);
  }
  ((C_0040c9d0 *)(this))->sub_0051e3f0(param_2);
  return;
}

struct C_0040ca00 {
    void sub_0040ca00(undefined4, undefined4);
    int sub_0051e430(int, int);
};

// @baa 0x0040ca00
void C_0040ca00::sub_0040ca00(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  if (*(char *)(param_1 + 0x14) != '\0') {
    sub_0047ceb0("Message received from %#x: QueryRenderWidgetCaps.",param_2);
  }
  ((C_0040ca00 *)(this))->sub_0051e430(param_2, param_3);
  return;
}

struct C_0040ca30 {
    void sub_0040ca30(undefined4, undefined4, undefined4);
    int sub_0051e480(int, int, int);
};

// @baa 0x0040ca30
void C_0040ca30::sub_0040ca30(undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
    int param_1 = (int)this;
  if (*(char *)(param_1 + 0x14) != '\0') {
    sub_0047ceb0("Message received from %#x: InteractEditWidget.",param_2);
  }
  ((C_0040ca30 *)(this))->sub_0051e480(param_2, param_3, param_4);
  return;
}

struct C_0040ca70 {
    void sub_0040ca70(undefined4, undefined4);
    int sub_0051e4d0(int, int);
};

// @baa 0x0040ca70
void C_0040ca70::sub_0040ca70(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  if (*(char *)(param_1 + 0x14) != '\0') {
    sub_0047ceb0("Message received from %#x: OnGenericCoarticulationConfigChanged config=%#x",
                 param_2,param_3);
  }
  ((C_0040ca70 *)(this))->sub_0051e4d0(param_2, param_3);
  return;
}

struct C_0040cab0 {
    void sub_0040cab0(undefined4, undefined4);
    int sub_0051e520(int, int);
};

// @baa 0x0040cab0
void C_0040cab0::sub_0040cab0(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  if (*(char *)(param_1 + 0x14) != '\0') {
    sub_0047ceb0("Message received from %#x: OnGestureConfigChanged config=%#x",param_2,param_3);
  }
  ((C_0040cab0 *)(this))->sub_0051e520(param_2, param_3);
  return;
}

extern undefined1 g_025d4005;
// @baa 0x0040cb20
void sub_0040cb20(undefined1 param_1)
{
  g_025d4005 = param_1;
  return;
}

extern undefined1 g_02616ef9;
// @baa 0x0040cb30
undefined1 sub_0040cb30(void)
{
  return g_02616ef9;
}

int sub_0046c200(void);
int sub_004b88a0(void);
// @baa 0x0040cb40
void sub_0040cb40(void)
{
  sub_004b88a0();
  sub_0046c200();
  return;
}

extern undefined1 g_025d4006;
// @baa 0x0040cb60
void sub_0040cb60(undefined1 param_1)
{
  g_025d4006 = param_1;
  return;
}

extern char g_01e4037c[];
struct C_0040cb70 { void sub_0040cb70(void); };

// @baa 0x0040cb70
void C_0040cb70::sub_0040cb70(void) { *(int*)((char*)this + 0) = (int)g_01e4037c; }

// @baa 0x0040cb80
void sub_0040cb80(void) {  }

// @baa 0x0040cb90
void __stdcall sub_0040cb90(int a0) {  }

// @baa 0x0040cba0
void __stdcall sub_0040cba0(int a0) {  }

struct C_0040cbb0 {
    undefined4 * sub_0040cbb0(byte);
};

// @baa 0x0040cbb0
undefined4 * C_0040cbb0::sub_0040cbb0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01e4037c);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x0040cbd0
void sub_0040cbd0(void) {  }

// @baa 0x0040cbe0
void sub_0040cbe0(void) {  }

// @baa 0x0040cbf0
undefined1 sub_0040cbf0(void)
{
  return 0;
}

// @baa 0x0040cc00
BYTE __stdcall sub_0040cc00(int arg1)
{
    return 0;
}

struct C_0040cc10 { char* sub_0040cc10(void); };

// @baa 0x0040cc10
char* C_0040cc10::sub_0040cc10(void) { return (char*)this + 4; }

struct C_0040cc20 {
    undefined1 sub_0040cc20();
};

// @baa 0x0040cc20
undefined1 C_0040cc20::sub_0040cc20(void)
{
    int param_1 = (int)this;

  return *(undefined1 *)(param_1 + 0x10);
}

struct C_0040cc30 { int sub_0040cc30(void); };

// @baa 0x0040cc30
int C_0040cc30::sub_0040cc30(void) { return *(int*)((char*)this + 20); }

struct C_0040cc40 { int sub_0040cc40(void); };

// @baa 0x0040cc40
int C_0040cc40::sub_0040cc40(void) { return *(int*)((char*)this + 24); }

struct C_0040cc50 { int sub_0040cc50(void); };

// @baa 0x0040cc50
int C_0040cc50::sub_0040cc50(void) { return *(int*)((char*)this + 28); }

struct C_0040cc60 { int sub_0040cc60(void); };

// @baa 0x0040cc60
int C_0040cc60::sub_0040cc60(void) { return *(int*)((char*)this + 32); }

struct C_0040cc70 { int sub_0040cc70(void); };

// @baa 0x0040cc70
int C_0040cc70::sub_0040cc70(void) { return *(int*)((char*)this + 36); }

struct C_0040cc80 { void sub_0040cc80(int a0); };

// @baa 0x0040cc80
void C_0040cc80::sub_0040cc80(int a0) { *(int*)((char*)this + 20) = a0; }

struct C_0040cc90 { void sub_0040cc90(int a0); };

// @baa 0x0040cc90
void C_0040cc90::sub_0040cc90(int a0) { *(int*)((char*)this + 24) = a0; }

struct C_0040cca0 { void sub_0040cca0(int a0); };

// @baa 0x0040cca0
void C_0040cca0::sub_0040cca0(int a0) { *(int*)((char*)this + 28) = a0; }

struct C_0040ccb0 { void sub_0040ccb0(int a0); };

// @baa 0x0040ccb0
void C_0040ccb0::sub_0040ccb0(int a0) { *(int*)((char*)this + 32) = a0; }

struct C_0040ccc0 { void sub_0040ccc0(int a0); };

// @baa 0x0040ccc0
void C_0040ccc0::sub_0040ccc0(int a0) { *(int*)((char*)this + 36) = a0; }

// @baa 0x0040cda0
void __stdcall sub_0040cda0(int a0) {  }

struct C_0040cdb0 {
    void sub_0040cdb0();
};

int sub_01ab5ca0(void);
extern undefined * g_01e40390;
// @baa 0x0040cdb0
void C_0040cdb0::sub_0040cdb0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01e40390);
  sub_01ab5ca0();
  return;
}

int sub_00404da0(void);
// @baa 0x0040f070
undefined4 UUnrealEdEngine::sub_0040f070(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00404da0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_0040f0f0 {
    undefined4 sub_0040f0f0(byte);
};

int sub_00405460(void);
// @baa 0x0040f0f0
undefined4 C_0040f0f0::sub_0040f0f0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00405460();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00402900 {
    unsigned int x, y, z;
    C_00402900* sub_00402900(unsigned int a, unsigned int b, unsigned int c);
};

// @baa 0x00402900
C_00402900* C_00402900::sub_00402900(unsigned int a, unsigned int b, unsigned int c)
{
    x = a;
    y = b;
    z = c;
    return this;
}

extern char g_01e3f370[];
struct C_00402c00;
struct Manager {
    void sub_006379b0(C_00402c00*);
};

extern Manager* g_026a4ba8;
struct C_00402c00 {
    void* table;
    void sub_00402c00();
};

// @baa 0x00402c00
void C_00402c00::sub_00402c00()
{
    table = g_01e3f370;
    if (g_026a4ba8)
        g_026a4ba8->sub_006379b0(this);
}

// @baa 0x004097d0
void sub_004097d0(float Value)
{
    g_025d4008 = Value;
}

int __cdecl sub_0053d240(int a, int b, int c);
// @baa 0x00402630
int __stdcall sub_00402630(int a, int b, int c)
{
    return sub_0053d240(a, b, c);
}

// The callee takes one argument; this wrapper hands back what it returns.
INT sub_00483e90(UObject* Object);
// @baa 0x0040c5e0
INT __stdcall sub_0040c5e0(UObject* Object)
{
    return sub_00483e90(Object);
}

// The callee takes one argument; this wrapper hands back what it returns.
INT sub_004824e0(UObject* Object);
// @baa 0x0040c5f0
INT __stdcall sub_0040c5f0(UObject* Object)
{
    return sub_004824e0(Object);
}

// The callee takes one argument; this wrapper hands back what it returns.
INT sub_0047e520(UObject* Object);
// @baa 0x0040c600
INT __stdcall sub_0040c600(UObject* Object)
{
    return sub_0047e520(Object);
}

/* Kit gaps: UnMath.h's FGlobalMath (GMath, its sine table the only member) and FRotationMatrix aren't declared;
 * this build has FRotationMatrix's constructor out of line. */
class FGlobalMath
{
public:
	enum { ANGLE_SHIFT = 2 };
	enum { ANGLE_BITS = 14 };
	enum { NUM_ANGLES = 16384 };

	FORCEINLINE FLOAT SinTab(int i) const
	{
		return TrigFLOAT[((i >> ANGLE_SHIFT) & (NUM_ANGLES - 1))];
	}
	FORCEINLINE FLOAT CosTab(int i) const
	{
		return TrigFLOAT[(((i + 16384) >> ANGLE_SHIFT) & (NUM_ANGLES - 1))];
	}

private:
	FLOAT TrigFLOAT[NUM_ANGLES];
};

extern FGlobalMath g_026761a8;
#define GMath g_026761a8

// @baa 0x004029a0
/* UnMath.h: the rotation matrix for a rotator (roll, then pitch, then yaw). */
FRotationMatrix::FRotationMatrix(const FRotator& Rot)
{
	const FLOAT SR = GMath.SinTab(Rot.Roll);
	const FLOAT SP = GMath.SinTab(Rot.Pitch);
	const FLOAT SY = GMath.SinTab(Rot.Yaw);
	const FLOAT CR = GMath.CosTab(Rot.Roll);
	const FLOAT CP = GMath.CosTab(Rot.Pitch);
	const FLOAT CY = GMath.CosTab(Rot.Yaw);

	XPlane.X = CP * CY;
	XPlane.Y = CP * SY;
	XPlane.Z = SP;
	XPlane.W = 0.f;

	YPlane.X = SR * SP * CY - CR * SY;
	YPlane.Y = SR * SP * SY + CR * CY;
	YPlane.Z = - SR * CP;
	YPlane.W = 0.f;

	ZPlane.X = -( CR * SP * CY + SR * SY );
	ZPlane.Y = CY * SR - CR * SP * SY;
	ZPlane.Z = CR * CP;
	ZPlane.W = 0.f;

	WPlane.X = 0.f;
	WPlane.Y = 0.f;
	WPlane.Z = 0.f;
	WPlane.W = 1.f;
}

// @baa 0x00402b40
/* UObject::IsA, out of line: whether the object's class is SomeBase or derives from it. */
UBOOL UObject::sub_00402b40(UClass* SomeBase) const
{
	if (!SomeBase)
	{
		return 1;
	}
	for (UClass* TempClass = Class; TempClass; TempClass = (UClass*)TempClass->SuperField)
	{
		if (TempClass == SomeBase)
		{
			return 1;
		}
	}
	return 0;
}
