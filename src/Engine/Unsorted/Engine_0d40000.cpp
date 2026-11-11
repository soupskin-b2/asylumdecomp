// Engine_0d40000.cpp (part 1 of 4): 186 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

int sub_005c7a20(void);
extern undefined * g_020a86a0;
// @baa 0x00d40120
undefined4 * UObject::sub_00d40120(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_020a86a0);
  return param_1;
}

// @baa 0x00d40140
IMPLEMENT_CLASS_AT(UOnlineStatsRead, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnOnlineStats.cpp", 8);

// @baa 0x00d401d0
struct C { void sub_00d3f4a0(int); C *sub_00d41e40(int); };

// @baa 0x00d41e40
C *C::sub_00d41e40(int a) { sub_00d3f4a0(a); return this; }

// @baa 0x00d45170
void sub_00d45170(void) {  }

// @baa 0x00d45180
void sub_00d45180(void) {  }

// @baa 0x00d45190
float10 sub_00d45190(double param_1)
{
  return (float10)param_1;
}

int sub_00627f70(...);
// @baa 0x00d45200
void sub_00d45200(undefined4 param_1)
{
  sub_00627f70(param_1,0xc,0);
  return;
}

struct C_00d45270 { void sub_00d45270(int a0); };

// @baa 0x00d45270
void C_00d45270::sub_00d45270(int a0) { *(int*)((char*)this + 44) = a0; }

// @baa 0x00d45280
int sub_00d45280(byte * param_1, byte * param_2)
{
  return (uint)*param_1 - (uint)*param_2;
}

// @baa 0x00d45380
undefined4 sub_00d45380(int param_1, int param_2)
{
  if (*(float *)(param_1 + 4) < *(float *)(param_2 + 4)) {
    return 0xffffffff;
  }
  if (*(float *)(param_2 + 4) < *(float *)(param_1 + 4)) {
    return 1;
  }
  return 0;
}

// @baa 0x00d45730
undefined4 sub_00d45730(int param_1, int param_2)
{
  if (*(float *)(param_1 + 4) < *(float *)(param_2 + 4)) {
    return 0xffffffff;
  }
  if (*(float *)(param_2 + 4) < *(float *)(param_1 + 4)) {
    return 1;
  }
  return 0;
}

// @baa 0x00d45780
undefined4 sub_00d45780(float * param_1, float * param_2)
{
  if (0.0 < *param_2 - *param_1) {
    return 1;
  }
  return 0xffffffff;
}

extern char g_020afad4[];
struct C_00d459d0 { void sub_00d459d0(void); };

// @baa 0x00d459d0
void C_00d459d0::sub_00d459d0(void) { *(int*)((char*)this + 0) = (int)g_020afad4; }

struct C_00d459e0 {
    undefined4 * sub_00d459e0(byte);
};

int sub_0053dfa0(...);
// @baa 0x00d459e0
undefined4 * C_00d459e0::sub_00d459e0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_020afad4);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

extern char g_020afae0[];
struct C_00d45a00 { void sub_00d45a00(void); };

// @baa 0x00d45a00
void C_00d45a00::sub_00d45a00(void) { *(int*)((char*)this + 0) = (int)g_020afae0; }

struct C_00d45a10 {
    undefined4 * sub_00d45a10(byte);
};

// @baa 0x00d45a10
undefined4 * C_00d45a10::sub_00d45a10(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_020afae0);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00d45a60 { C_00d45a60* sub_00d45a60(void); };

// @baa 0x00d45a60
C_00d45a60* C_00d45a60::sub_00d45a60(void) { return this; }

struct C_00d45a70 { C_00d45a70* sub_00d45a70(void); };

// @baa 0x00d45a70
C_00d45a70* C_00d45a70::sub_00d45a70(void) { return this; }

struct C_00d45f80 { C_00d45f80* sub_00d45f80(void); };

// @baa 0x00d45f80
C_00d45f80* C_00d45f80::sub_00d45f80(void) { *(int*)((char*)this + 0) = (int)g_020afad4; return this; }

struct C_00d45f90 { C_00d45f90* sub_00d45f90(void); };

// @baa 0x00d45f90
C_00d45f90* C_00d45f90::sub_00d45f90(void) { *(int*)((char*)this + 0) = (int)g_020afae0; return this; }

struct C_00d45fa0 { void sub_00d45fa0(void); };

// @baa 0x00d45fa0
void C_00d45fa0::sub_00d45fa0(void) { *(int*)((char*)this + 0) = (int)g_020afae0; }

// @baa 0x00d460a0
int AActor::vf_2b4(void) { return 0; }

struct C_00d460b0 {
    INT Unk00; // 0x0
    INT Size;  // 0x4

    UBOOL sub_00d460b0(INT Index);
};

// @baa 0x00d460b0
UBOOL C_00d460b0::sub_00d460b0(INT Index)
{
    if (Index >= 0 && Index < Size)
        return 1;
    return 0;
}

struct C_00d46170 {
    INT Unk00; // 0x0
    INT Size;  // 0x4

    UBOOL sub_00d46170(INT Index);
};

// @baa 0x00d46170
UBOOL C_00d46170::sub_00d46170(INT Index)
{
    if (Index >= 0 && Index < Size)
        return 1;
    return 0;
}

struct C_00d46190 { int sub_00d46190(void); };

// @baa 0x00d46190
int C_00d46190::sub_00d46190(void) { return *(int*)((char*)this + 4); }

struct C_00d461a0 { int sub_00d461a0(void); };

// @baa 0x00d461a0
int C_00d461a0::sub_00d461a0(void) { return *(int*)((char*)this + 4); }

struct C_00d461b0 { int sub_00d461b0(void); };

// @baa 0x00d461b0
int C_00d461b0::sub_00d461b0(void) { return *(int*)((char*)this + 4); }

struct C_00d461c0 { int a, b, c; C_00d461c0(); };

// @baa 0x00d461c0
C_00d461c0::C_00d461c0() : a(0), b(0), c(0) {}

struct C_00d461d0 { int a, b, c; C_00d461d0(); };

// @baa 0x00d461d0
C_00d461d0::C_00d461d0() : a(0), b(0), c(0) {}

struct C_00d461e0 { int sub_00d461e0(void); };

// @baa 0x00d461e0
int C_00d461e0::sub_00d461e0(void) { return *(int*)((char*)this + 4); }

struct C_00d461f0 { int sub_00d461f0(void); };

// @baa 0x00d461f0
int C_00d461f0::sub_00d461f0(void) { return *(int*)((char*)this + 4); }

struct C_00d46200 {
    INT Unk00; // 0x0
    INT Size;  // 0x4

    UBOOL sub_00d46200(INT Index);
};

// @baa 0x00d46200
UBOOL C_00d46200::sub_00d46200(INT Index)
{
    if (Index >= 0 && Index < Size)
        return 1;
    return 0;
}

struct C_00d46220 { int sub_00d46220(void); };

// @baa 0x00d46220
int C_00d46220::sub_00d46220(void) { return *(int*)((char*)this + 4); }

struct C_00d46230 { int a, b, c; C_00d46230(); };

// @baa 0x00d46230
C_00d46230::C_00d46230() : a(0), b(0), c(0) {}

struct C_00d46240 { int a, b, c; C_00d46240(); };

// @baa 0x00d46240
C_00d46240::C_00d46240() : a(0), b(0), c(0) {}

struct C_00d46250 { int sub_00d46250(void); };

// @baa 0x00d46250
int C_00d46250::sub_00d46250(void) { return *(int*)((char*)this + 4); }

struct C_00d46260 { int a, b, c; C_00d46260(); };

// @baa 0x00d46260
C_00d46260::C_00d46260() : a(0), b(0), c(0) {}

struct C_00d46270 { int sub_00d46270(void); };

// @baa 0x00d46270
int C_00d46270::sub_00d46270(void) { return *(int*)((char*)this + 0); }

struct C_00d46280 { int sub_00d46280(void); };

// @baa 0x00d46280
int C_00d46280::sub_00d46280(void) { return *(int*)((char*)this + 4); }

struct S {
    TArray<QWORD> Items; // 0x00
    QWORD* sub_00d46290(INT Index);
};

// @baa 0x00d46290
QWORD* S::sub_00d46290(INT Index)
{
    return &Items(Index);
}

struct C_00d462e0 { int a, b, c; C_00d462e0(); };

// @baa 0x00d462e0
C_00d462e0::C_00d462e0() : a(0), b(0), c(0) {}

struct C_00d462f0 { int a, b, c; C_00d462f0(); };

// @baa 0x00d462f0
C_00d462f0::C_00d462f0() : a(0), b(0), c(0) {}

struct C_00d46300 { int a, b, c; C_00d46300(); };

// @baa 0x00d46300
C_00d46300::C_00d46300() : a(0), b(0), c(0) {}

struct C_00d46310 { int sub_00d46310(void); };

// @baa 0x00d46310
int C_00d46310::sub_00d46310(void) { return *(int*)((char*)this + 4); }

struct C_00d46320 { int a, b, c; C_00d46320(); };

// @baa 0x00d46320
C_00d46320::C_00d46320() : a(0), b(0), c(0) {}

struct C_00d46330 { int a, b, c; C_00d46330(); };

// @baa 0x00d46330
C_00d46330::C_00d46330() : a(0), b(0), c(0) {}

struct C_00d46340 { int sub_00d46340(void); };

// @baa 0x00d46340
int C_00d46340::sub_00d46340(void) { return *(int*)((char*)this + 4); }

struct C_00d46350 { int a, b, c; C_00d46350(); };

// @baa 0x00d46350
C_00d46350::C_00d46350() : a(0), b(0), c(0) {}

struct C_00d46360 { int a, b, c; C_00d46360(); };

// @baa 0x00d46360
C_00d46360::C_00d46360() : a(0), b(0), c(0) {}

struct C_00d46370 { int sub_00d46370(void); };

// @baa 0x00d46370
int C_00d46370::sub_00d46370(void) { return *(int*)((char*)this + 0); }

struct C_00d46380 { int sub_00d46380(void); };

// @baa 0x00d46380
int C_00d46380::sub_00d46380(void) { return *(int*)((char*)this + 4); }

struct S_00d46390 {
    TArray<QWORD> Items; // 0x00
    QWORD* sub_00d46390(INT Index);
};

// @baa 0x00d46390
QWORD* S_00d46390::sub_00d46390(INT Index)
{
    return &Items(Index);
}

struct C_00d463f0 { int sub_00d463f0(void); };

// @baa 0x00d463f0
int C_00d463f0::sub_00d463f0(void) { return *(int*)((char*)this + 4); }

struct C_00d46530 { int sub_00d46530(void); };

// @baa 0x00d46530
int C_00d46530::sub_00d46530(void) { return *(int*)((char*)this + 0); }

struct C_00d46540 { int sub_00d46540(void); };

// @baa 0x00d46540
int C_00d46540::sub_00d46540(void) { return *(int*)((char*)this + 0); }

struct C_00d46550 { int sub_00d46550(void); };

// @baa 0x00d46550
int C_00d46550::sub_00d46550(void) { return *(int*)((char*)this + 0); }

struct C_00d465d0 {
    void sub_00d465d0();
};

int sub_0053df70(...);
// @baa 0x00d465d0
void C_00d465d0::sub_00d465d0(void)
{
    int * param_1 = (int *)this;

  int iVar1;
  
  iVar1 = param_1[1];
  if (param_1[2] != iVar1) {
    param_1[2] = iVar1;
    if ((*param_1 != 0) || (iVar1 != 0)) {
      iVar1 = sub_0053df70(*param_1,iVar1 << 5,8);
      *param_1 = iVar1;
    }
  }
  return;
}

struct C_00d46600 { int sub_00d46600(void); };

// @baa 0x00d46600
int C_00d46600::sub_00d46600(void) { return *(int*)((char*)this + 0); }

struct C_00d46680 { int sub_00d46680(void); };

// @baa 0x00d46680
int C_00d46680::sub_00d46680(void) { return *(int*)((char*)this + 0); }

struct C_00d46690 { int sub_00d46690(void); };

// @baa 0x00d46690
int C_00d46690::sub_00d46690(void) { return *(int*)((char*)this + 0); }

struct C_00d46710 { int sub_00d46710(void); };

// @baa 0x00d46710
int C_00d46710::sub_00d46710(void) { return *(int*)((char*)this + 0); }

struct C_00d46790 {
    int sub_00d46790(int);
};

// @baa 0x00d46790
int C_00d46790::sub_00d46790(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x40 + *param_1;
}

struct C_00d467a0 { int sub_00d467a0(void); };

// @baa 0x00d467a0
int C_00d467a0::sub_00d467a0(void) { return *(int*)((char*)this + 0); }

// @baa 0x00d46890
void __stdcall sub_00d46890(int a0, int a1) {  }

struct C_00d468a0 { int sub_00d468a0(void); };

// @baa 0x00d468a0
int C_00d468a0::sub_00d468a0(void) { return *(int*)((char*)this + 0); }

struct C_00d468b0 { int sub_00d468b0(void); };

// @baa 0x00d468b0
int C_00d468b0::sub_00d468b0(void) { return *(int*)((char*)this + 0); }

struct C_00d468c0 { int sub_00d468c0(void); };

// @baa 0x00d468c0
int C_00d468c0::sub_00d468c0(void) { return *(int*)((char*)this + 0); }

struct C_00d46950 { int sub_00d46950(void); };

// @baa 0x00d46950
int C_00d46950::sub_00d46950(void) { return *(int*)((char*)this + 0); }

struct C_00d46a50 { int sub_00d46a50(void); };

// @baa 0x00d46a50
int C_00d46a50::sub_00d46a50(void) { return *(int*)((char*)this + 0); }

struct C_00d46a60 { int sub_00d46a60(void); };

// @baa 0x00d46a60
int C_00d46a60::sub_00d46a60(void) { return *(int*)((char*)this + 0); }

// @baa 0x00d46ae0
void __stdcall sub_00d46ae0(int a0, int a1) {  }

struct C_00d46af0 { int sub_00d46af0(void); };

// @baa 0x00d46af0
int C_00d46af0::sub_00d46af0(void) { return *(int*)((char*)this + 0); }

struct C_00d46b70 {
    int sub_00d46b70();
};

// @baa 0x00d46b70
int C_00d46b70::sub_00d46b70(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0xc) != -1) - 1;
}

struct C_00d46b80 {
    int sub_00d46b80();
};

// @baa 0x00d46b80
int C_00d46b80::sub_00d46b80(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_00d46b90 { int a, b; C_00d46b90(int, int); };

// @baa 0x00d46b90
C_00d46b90::C_00d46b90(int x, int y) : a(x), b(y) {}

struct C_00d46bd0 { int sub_00d46bd0(void); };

// @baa 0x00d46bd0
int C_00d46bd0::sub_00d46bd0(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_00d46c00 {
    undefined4 sub_00d46c00();
};

// @baa 0x00d46c00
undefined4 C_00d46c00::sub_00d46c00(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  return *param_1;
}

struct C_00d46c10 { int sub_00d46c10(void); };

// @baa 0x00d46c10
int C_00d46c10::sub_00d46c10(void) { return *(int*)((char*)this + 0); }

struct C_00d46c20 { int sub_00d46c20(void); };

// @baa 0x00d46c20
int C_00d46c20::sub_00d46c20(void) { return *(int*)((char*)this + 0); }

struct C_00d46c30 { int sub_00d46c30(void); };

// @baa 0x00d46c30
int C_00d46c30::sub_00d46c30(void) { return *(int*)((char*)this + 0); }

struct C_00d46c40 { int sub_00d46c40(void); };

// @baa 0x00d46c40
int C_00d46c40::sub_00d46c40(void) { return *(int*)((char*)this + 0); }

struct C_00d46c50 { int sub_00d46c50(void); };

// @baa 0x00d46c50
int C_00d46c50::sub_00d46c50(void) { return *(int*)((char*)this + 0); }

struct C_00d46c60 { int sub_00d46c60(void); };

// @baa 0x00d46c60
int C_00d46c60::sub_00d46c60(void) { return *(int*)((char*)this + 0); }

struct C_00d46c70 { int sub_00d46c70(void); };

// @baa 0x00d46c70
int C_00d46c70::sub_00d46c70(void) { return *(int*)((char*)this + 0); }

struct C_00d46c80 { int sub_00d46c80(void); };

// @baa 0x00d46c80
int C_00d46c80::sub_00d46c80(void) { return *(int*)((char*)this + 0); }

struct C_00d46c90 { int sub_00d46c90(void); };

// @baa 0x00d46c90
int C_00d46c90::sub_00d46c90(void) { return *(int*)((char*)this + 0); }

// @baa 0x00d46ca0
int sub_00d46ca0(int a0) { return *(int*)a0; }

// @baa 0x00d46cb0
bool sub_00d46cb0(int param_1, int param_2)
{
  return param_1 == param_2;
}

// @baa 0x00d46cc0
int sub_00d46cc0(int a0) { return a0; }

struct C_00d46cd0 {
    void sub_00d46cd0(undefined4 *);
};

// @baa 0x00d46cd0
void C_00d46cd0::sub_00d46cd0(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_2 = *param_1;
  param_2[1] = (undefined4)(param_1 + 1);
  return;
}

struct C_00d46dd0 { int sub_00d46dd0(void); };

// @baa 0x00d46dd0
int C_00d46dd0::sub_00d46dd0(void) { return *(int*)((char*)this + 0); }

// @baa 0x00d46de0
int* sub_00d46de0(int* a, int b)
{
  *a = b;
  return a;
}

struct C_00d46df0 { int sub_00d46df0(void); };

// @baa 0x00d46df0
int C_00d46df0::sub_00d46df0(void) { return *(int*)((char*)this + 20); }

struct C_00d46e00 { int a, b, c; C_00d46e00(); };

// @baa 0x00d46e00
C_00d46e00::C_00d46e00() : a(0), b(0), c(0) {}

struct C_00d46e10 { int sub_00d46e10(void); };

// @baa 0x00d46e10
int C_00d46e10::sub_00d46e10(void) { return *(int*)((char*)this + 4); }

struct C_00d46e20 { int a, b; C_00d46e20(int, int); };

// @baa 0x00d46e20
C_00d46e20::C_00d46e20(int x, int y) : a(x), b(y) {}

// @baa 0x00d46e40
int sub_00d46e40(int a0) { return *(int*)a0; }

struct C_00d46e80 { int sub_00d46e80(void); };

// @baa 0x00d46e80
int C_00d46e80::sub_00d46e80(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_00d46ec0 { int sub_00d46ec0(void); };

// @baa 0x00d46ec0
int C_00d46ec0::sub_00d46ec0(void) { return *(int*)((char*)this + 0); }

struct C_00d46ed0 { int sub_00d46ed0(void); };

// @baa 0x00d46ed0
int C_00d46ed0::sub_00d46ed0(void) { return *(int*)((char*)this + 0); }

struct C_00d46ee0 { int sub_00d46ee0(void); };

// @baa 0x00d46ee0
int C_00d46ee0::sub_00d46ee0(void) { return *(int*)((char*)this + 20); }

struct C_00d46ef0 {
    int sub_00d46ef0();
};

// @baa 0x00d46ef0
int C_00d46ef0::sub_00d46ef0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_00d46f00 { int sub_00d46f00(void); };

// @baa 0x00d46f00
int C_00d46f00::sub_00d46f00(void) { return *(int*)((char*)this + 20); }

// @baa 0x00d46f10
undefined4 sub_00d46f10(float * param_1, float * param_2)
{
  if (((*param_1 == *param_2) && (param_1[1] == param_2[1])) && (param_1[2] == param_2[2])) {
    return 1;
  }
  return 0;
}

// @baa 0x00d46f50
void sub_00d46f50(undefined4 param_1)
{
  sub_00627f70(param_1,0xc,0);
  return;
}

struct C_00d46f70 {
    void sub_00d46f70(int *);
};

// @baa 0x00d46f70
void C_00d46f70::sub_00d46f70(int * param_2)
{
    int param_1 = (int)this;

  *param_2 = param_1;
  param_2[1] = *(int *)(param_1 + 0xc);
  return;
}

struct C_00d46f80 {
    int sub_00d46f80(int);
};

// @baa 0x00d46f80
int C_00d46f80::sub_00d46f80(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

struct C_00d46f90 { int sub_00d46f90(void); };

// @baa 0x00d46f90
int C_00d46f90::sub_00d46f90(void) { return *(int*)((char*)this + 0); }

struct C_00d46fa0 { int sub_00d46fa0(void); };

// @baa 0x00d46fa0
int C_00d46fa0::sub_00d46fa0(void) { return *(int*)((char*)this + 20); }

struct C_00d46fb0 {
    int sub_00d46fb0(int);
};

// @baa 0x00d46fb0
int C_00d46fb0::sub_00d46fb0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

struct C_00d46fc0 { int sub_00d46fc0(void); };

// @baa 0x00d46fc0
int C_00d46fc0::sub_00d46fc0(void) { return *(int*)((char*)this + 20); }

int sub_00627f00(...);
// @baa 0x00d46fd0
void sub_00d46fd0(undefined4 param_1, undefined4 param_2)
{
  sub_00627f00(param_1,param_2,0xc);
  return;
}

struct C_00d470c0 { int a, b, c; C_00d470c0(); };

// @baa 0x00d470c0
C_00d470c0::C_00d470c0() : a(0), b(0), c(0) {}

struct C_00d47400 { int a, b, c; C_00d47400(); };

// @baa 0x00d47400
C_00d47400::C_00d47400() : a(0), b(0), c(0) {}

struct C_00d47480 { int sub_00d47480(void); };

// @baa 0x00d47480
int C_00d47480::sub_00d47480(void) { return *(int*)((char*)this + 0); }

struct C_00d47490 { int sub_00d47490(void); };

// @baa 0x00d47490
int C_00d47490::sub_00d47490(void) { return *(int*)((char*)this + 0); }

// @baa 0x00d474a0
void sub_00d474a0(undefined4 * param_1, undefined4 * param_2)
{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = uVar2;
  *param_2 = uVar1;
  return;
}

// @baa 0x00d474d0
void sub_00d474d0(undefined4 * param_1, undefined4 * param_2)
{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = uVar2;
  *param_2 = uVar1;
  return;
}

struct C_00d477b0 { void sub_00d477b0(int a0); };

// @baa 0x00d477b0
void C_00d477b0::sub_00d477b0(int a0) { *(int*)((char*)this + 4) = 0; }

struct C_00d477c0 {
    undefined4 * sub_00d477c0(byte);
};

// @baa 0x00d477c0
undefined4 * C_00d477c0::sub_00d477c0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_020afae0);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

void __stdcall sub_00544d40(char *);
extern char g_026c590c[];
// @baa 0x00d47f90
void sub_00d47f90(void)
{
  sub_00544d40(g_026c590c);
}

struct S_00d48000 {
    TArray<QWORD> Items; // 0x00
    const QWORD* sub_00d48000(INT Index) const;
};

// @baa 0x00d48000
const QWORD* S_00d48000::sub_00d48000(INT Index) const
{
    return &Items(Index);
}

struct E { BYTE Bytes[12]; };

struct S_00d48050 {
    TArray<E> Items; // 0x00
    const E* sub_00d48050(INT Index) const;
};

// @baa 0x00d48050
const E* S_00d48050::sub_00d48050(INT Index) const
{
    return &Items(Index);
}

struct S_00d480a0 {
    TArray<QWORD> Items; // 0x00
    const QWORD* sub_00d480a0(INT Index) const;
};

// @baa 0x00d480a0
const QWORD* S_00d480a0::sub_00d480a0(INT Index) const
{
    return &Items(Index);
}

typedef uint size_t;

struct C_00d48230 {
    int sub_00d48230(int);
    int sub_00d46560(int);
};

void * sub_01a37612(void *, int, size_t);
// @baa 0x00d48230
int C_00d48230::sub_00d48230(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  iVar1 = ((C_00d48230 *)(this))->sub_00d46560(param_2);
  sub_01a37612((void *)(*param_1 + iVar1 * 8),0,param_2 * 8);
  return iVar1;
}

struct C_00d482d0 {
    int sub_00d482d0(int);
    int sub_0094aa50(int);
};

// @baa 0x00d482d0
int C_00d482d0::sub_00d482d0(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  iVar1 = ((C_00d482d0 *)(this))->sub_0094aa50(param_2);
  sub_01a37612((void *)(*param_1 + iVar1 * 4),0,param_2 * 4);
  return iVar1;
}

struct S_00d483c0 {
    TArray<E> Items; // 0x00
    E* sub_00d483c0(INT Index);
};

// @baa 0x00d483c0
E* S_00d483c0::sub_00d483c0(INT Index)
{
    return &Items(Index);
}

struct C_00d48410 {
    int sub_00d48410(int);
    int sub_00d46610(int);
};

// @baa 0x00d48410
int C_00d48410::sub_00d48410(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  iVar1 = ((C_00d48410 *)(this))->sub_00d46610(param_2);
  sub_01a37612((void *)(*param_1 + iVar1 * 0xc),0,param_2 * 0xc);
  return iVar1;
}

struct S_00d48450 {
    TArray<DWORD> Items; // 0x00
    const DWORD* sub_00d48450(INT Index) const;
};

// @baa 0x00d48450
const DWORD* S_00d48450::sub_00d48450(INT Index) const
{
    return &Items(Index);
}

struct E_00d484a0 { BYTE Bytes[32]; };

struct S_00d484a0 {
    TArray<E_00d484a0> Items; // 0x00
    E_00d484a0* sub_00d484a0(INT Index);
};

// @baa 0x00d484a0
E_00d484a0* S_00d484a0::sub_00d484a0(INT Index)
{
    return &Items(Index);
}

struct S_00d484f0 {
    TArray<E> Items; // 0x00
    const E* sub_00d484f0(INT Index) const;
};

// @baa 0x00d484f0
const E* S_00d484f0::sub_00d484f0(INT Index) const
{
    return &Items(Index);
}

struct E_00d485a0 { BYTE Bytes[64]; };

struct S_00d485a0 {
    TArray<E_00d485a0> Items; // 0x00
    E_00d485a0* sub_00d485a0(INT Index);
};

// @baa 0x00d485a0
E_00d485a0* S_00d485a0::sub_00d485a0(INT Index)
{
    return &Items(Index);
}

struct E_00d48650 { BYTE Bytes[52]; };

struct S_00d48650 {
    TArray<E_00d48650> Items; // 0x00
    E_00d48650* sub_00d48650(INT Index);
};

// @baa 0x00d48650
E_00d48650* S_00d48650::sub_00d48650(INT Index)
{
    return &Items(Index);
}

struct E_00d487a0 { BYTE Bytes[36]; };

struct S_00d487a0 {
    TArray<E_00d487a0> Items; // 0x00
    E_00d487a0* sub_00d487a0(INT Index);
};

// @baa 0x00d487a0
E_00d487a0* S_00d487a0::sub_00d487a0(INT Index)
{
    return &Items(Index);
}

struct S_00d487f0 {
    TArray<E> Items; // 0x00
    E* sub_00d487f0(INT Index);
};

// @baa 0x00d487f0
E* S_00d487f0::sub_00d487f0(INT Index)
{
    return &Items(Index);
}

struct S_00d48840 {
    TArray<E> Items; // 0x00
    E* sub_00d48840(INT Index);
};

// @baa 0x00d48840
E* S_00d48840::sub_00d48840(INT Index)
{
    return &Items(Index);
}

struct C_00d48890 {
    int sub_00d48890(int);
    int sub_00d468d0(int);
};

// @baa 0x00d48890
int C_00d48890::sub_00d48890(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  iVar1 = ((C_00d48890 *)(this))->sub_00d468d0(param_2);
  sub_01a37612((void *)(*param_1 + iVar1 * 0x18),0,param_2 * 0x18);
  return iVar1;
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
	FFaceFXElement* sub_00d488d0(INT Index);
};

// @baa 0x00d488d0
FFaceFXElement* UFxRenderWidget::sub_00d488d0(INT Index)
{
	return &BoneArray(Index);
}

struct C_00d48920 {
    int sub_00d48920(int);
    int sub_00d46960(int);
};

// @baa 0x00d48920
int C_00d48920::sub_00d48920(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  iVar1 = ((C_00d48920 *)(this))->sub_00d46960(param_2);
  sub_01a37612((void *)(*param_1 + iVar1 * 0x14),0,param_2 * 0x14);
  return iVar1;
}

struct E_00d48960 { BYTE Bytes[52]; };

struct S_00d48960 {
    TArray<E_00d48960> Items; // 0x00
    E_00d48960* sub_00d48960(INT Index);
};

// @baa 0x00d48960
E_00d48960* S_00d48960::sub_00d48960(INT Index)
{
    return &Items(Index);
}

struct E_00d489b0 { BYTE Bytes[52]; };

struct S_00d489b0 {
    TArray<E_00d489b0> Items; // 0x00
    E_00d489b0* sub_00d489b0(INT Index);
};

// @baa 0x00d489b0
E_00d489b0* S_00d489b0::sub_00d489b0(INT Index)
{
    return &Items(Index);
}

struct S_00d48aa0 {
    TArray<E> Items; // 0x00
    E* sub_00d48aa0(INT Index);
};

// @baa 0x00d48aa0
E* S_00d48aa0::sub_00d48aa0(INT Index)
{
    return &Items(Index);
}

struct E_00d49130 { BYTE Bytes[24]; };

struct S_00d49130 {
    TArray<E_00d49130> Items; // 0x00
    E_00d49130* sub_00d49130(INT Index);
};

// @baa 0x00d49130
E_00d49130* S_00d49130::sub_00d49130(INT Index)
{
    return &Items(Index);
}

struct C_00d49180 { int sub_00d49180(void); };

// @baa 0x00d49180
int C_00d49180::sub_00d49180(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_00d491a0 {
    int sub_00d491a0();
};

// @baa 0x00d491a0
int C_00d491a0::sub_00d491a0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00d491c0 {
    int sub_00d491c0(int);
};

// @baa 0x00d491c0
int C_00d491c0::sub_00d491c0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x34 + *param_1;
}

// @baa 0x00d491d0
void __stdcall sub_00d491d0(int a0, int a1) {  }

struct C_00d491e0 {
    int sub_00d491e0(int);
};

// @baa 0x00d491e0
int C_00d491e0::sub_00d491e0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x24;
}

struct S_00d491f0 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_00d491f0(INT Index);
};

// @baa 0x00d491f0
DWORD* S_00d491f0::sub_00d491f0(INT Index)
{
    return &Items(Index);
}

struct C_00d49240 {
    int sub_00d49240(int);
};

// @baa 0x00d49240
int C_00d49240::sub_00d49240(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

struct C_00d49250 {
    int sub_00d49250(int);
};

// @baa 0x00d49250
int C_00d49250::sub_00d49250(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x24;
}

struct C_00d49260 {
    int sub_00d49260(int);
};

// @baa 0x00d49260
int C_00d49260::sub_00d49260(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

// @baa 0x00d49270
void __stdcall sub_00d49270(int a0, int a1) {  }

struct C_00d49280 {
    int sub_00d49280();
};

// @baa 0x00d49280
int C_00d49280::sub_00d49280(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00d492a0 {
    int sub_00d492a0();
};

// @baa 0x00d492a0
int C_00d492a0::sub_00d492a0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00d492c0 {
    int sub_00d492c0();
};

// @baa 0x00d492c0
int C_00d492c0::sub_00d492c0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x18;
}

struct C_00d492d0 {
    int sub_00d492d0();
};

// @baa 0x00d492d0
int C_00d492d0::sub_00d492d0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00d49320 {
    int sub_00d49320(int);
};

// @baa 0x00d49320
int C_00d49320::sub_00d49320(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

struct C_00d49330 {
    int sub_00d49330();
};

// @baa 0x00d49330
int C_00d49330::sub_00d49330(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00d49350 {
    int sub_00d49350();
};

// @baa 0x00d49350
int C_00d49350::sub_00d49350(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x18;
}

// @baa 0x00d49970
void sub_00d49970(undefined4 * param_1, undefined4 * param_2)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
  }
  return;
}

// @baa 0x00d49a30
void sub_00d49a30(undefined4 * param_1, undefined4 * param_2)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
    param_1[3] = param_2[3];
  }
  return;
}

struct E_00d49a60 { BYTE Bytes[32]; };

struct S_00d49a60 {
    TArray<E_00d49a60> Items; // 0x00
    E_00d49a60* sub_00d49a60(INT Index);
};

// @baa 0x00d49a60
E_00d49a60* S_00d49a60::sub_00d49a60(INT Index)
{
    return &Items(Index);
}

struct C_00d49ab0 {
    int sub_00d49ab0(int);
};

// @baa 0x00d49ab0
int C_00d49ab0::sub_00d49ab0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x20 + *param_1;
}

struct C_00d49ac0 {
    int sub_00d49ac0(int);
};

// @baa 0x00d49ac0
int C_00d49ac0::sub_00d49ac0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x20 + *param_1;
}

// @baa 0x00d49ad0
void __stdcall sub_00d49ad0(int a0, int a1) {  }

// @baa 0x00d49ae0
void sub_00d49ae0(undefined4 * param_1, undefined4 * param_2)
{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = uVar2;
  *param_2 = uVar1;
  return;
}

// @baa 0x00d49b10
void sub_00d49b10(undefined4 * param_1, undefined4 * param_2)
{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = uVar2;
  *param_2 = uVar1;
  return;
}

struct C_00d4ba60 { int sub_00d4ba60(void); };

// @baa 0x00d4ba60
int C_00d4ba60::sub_00d4ba60(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_00d4c210 { int sub_00d4c210(void); };

// @baa 0x00d4c210
int C_00d4c210::sub_00d4c210(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_00d4c220 {
    int sub_00d4c220();
};

// @baa 0x00d4c220
int C_00d4c220::sub_00d4c220(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

int sub_00549160(void);
// @baa 0x00d4c240
undefined4 UObject::sub_00d4c240(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00549160();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct M_00d4c260 { void sub_00602210(); };

struct C_00d4c260 { char pad[12]; M_00d4c260 m; void sub_00d4c260(); };

// @baa 0x00d4c260
void C_00d4c260::sub_00d4c260() { m.sub_00602210(); }

void sub_004025d0(void*);
struct D { void* p; ~D(){ if(0) sub_004025d0(p);} };

void sub_0053dfa0(void*);
struct C_00d4c340 { void* Data; int Num; int Max; void sub_00d4c340(); };

// @baa 0x00d4c340
void C_00d4c340::sub_00d4c340() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00d4c430 {
    int sub_00d4c430(int);
};

// @baa 0x00d4c430
int C_00d4c430::sub_00d4c430(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x24;
}

struct C_00d4c440 {
    int sub_00d4c440();
};

// @baa 0x00d4c440
int C_00d4c440::sub_00d4c440(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x24;
}

struct C_00d4c450 {
    int sub_00d4c450(int);
};

// @baa 0x00d4c450
int C_00d4c450::sub_00d4c450(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

struct C_00d4c460 {
    int sub_00d4c460(int);
};

// @baa 0x00d4c460
int C_00d4c460::sub_00d4c460(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x24;
}

struct C_00d4c470 {
    int sub_00d4c470();
};

// @baa 0x00d4c470
int C_00d4c470::sub_00d4c470(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x24;
}

struct C_00d4c480 { void* Data; int Num; int Max; void sub_00d4c480(); };

// @baa 0x00d4c480
void C_00d4c480::sub_00d4c480() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00d4c640 {
    int sub_00d4c640();
};

// @baa 0x00d4c640
int C_00d4c640::sub_00d4c640(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x14;
}

struct C_00d4c650 {
    int sub_00d4c650();
};

// @baa 0x00d4c650
int C_00d4c650::sub_00d4c650(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x24;
}

struct C_00d4c660 {
    int sub_00d4c660(int);
};

// @baa 0x00d4c660
int C_00d4c660::sub_00d4c660(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

struct C_00d4c670 {
    int sub_00d4c670(int);
};

// @baa 0x00d4c670
int C_00d4c670::sub_00d4c670(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

struct C_00d4cf90 { void* Data; int Num; int Max; void sub_00d4cf90(); };

// @baa 0x00d4cf90
void C_00d4cf90::sub_00d4cf90() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}
