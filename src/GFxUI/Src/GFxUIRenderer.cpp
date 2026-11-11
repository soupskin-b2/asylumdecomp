// GFxUIRenderer.cpp (part 1 of 3): 382 functions
// Placed here by: neighbours 366, callers 14, file 2.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

int sub_005e1960(...);
int sub_0072a530(void);
int sub_00733250(...);
extern undefined4 g_026667a8;
extern undefined4 g_026b2250;
// @baa 0x00e41c60
void sub_00e41c60(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6)
{
  if (g_026b2250 == 0) {
    g_026b2250 = sub_00733250(L"Engine");
    sub_0072a530();
  }
  sub_005e1960(g_026b2250,param_2,param_3,param_4,param_5,param_6,0,g_026667a8,0,0,0);
  return;
}

extern char g_020fca6c[];
// @baa 0x00e451e0
int sub_00e451e0(void) { return (int)g_020fca6c; }

extern char g_01ebb554[];
struct C { void sub_00e451f0(void); };

// @baa 0x00e451f0
void C::sub_00e451f0(void) { *(int*)((char*)this + 0) = (int)g_01ebb554; }

struct C_00e45200 {
    undefined4 * sub_00e45200(byte);
};

int sub_0053dfa0(...);
// @baa 0x00e45200
undefined4 * C_00e45200::sub_00e45200(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ebb554);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

extern char g_020fccbc[];
// @baa 0x00e45260
int sub_00e45260(void) { return (int)g_020fccbc; }

struct C_00e45270 { void sub_00e45270(void); };

// @baa 0x00e45270
void C_00e45270::sub_00e45270(void) { *(int*)((char*)this + 0) = (int)g_01ebb554; }

// @baa 0x00e453a0
void sub_00e453a0(float * param_1, int param_2)
{
  float fVar1;
  if ((param_2 == 3) || (param_2 == 6)) {
    fVar1 = param_1[3];
    *param_1 = (*param_1 - 1.0) * fVar1 + 1.0;
    param_1[1] = (param_1[1] - 1.0) * fVar1 + 1.0;
    param_1[2] = (param_1[2] - 1.0) * fVar1 + 1.0;
  }
  return;
}

int sub_006311e0(...);
extern undefined4 g_020fd780;
// @baa 0x00e45400
undefined4 sub_00e45400(undefined4 param_1)
{
  switch(param_1) {
  case 0:
    break;
  case 1:
    return 4;
  case 2:
  case 3:
    return 8;
  case 4:
    return 0xc;
  default:
    sub_006311e0("0 : \"FGFxRenderer::GetUIRenderElementSize - Unrecognized vertex format\"",
                 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\GFxUI\\Src\\GFxUIRenderer.cpp"
                 ,0x50c,&g_020fd780);
  }
  return 0;
}

// @baa 0x00e454a0
int sub_00e454a0(void) { return 36; }

struct C_00e454b0 {
    void sub_00e454b0(int);
};

// @baa 0x00e454b0
void C_00e454b0::sub_00e454b0(int param_2)
{
    int * param_1 = (int *)this;

  param_1[1] = *(int *)(param_2 + 4);
  *param_1 = param_2;
  **(int **)(param_2 + 4) = (int)param_1;
  *(int **)(param_2 + 4) = param_1;
  return;
}

struct C_00e45600 {
    undefined4 sub_00e45600();
};

// @baa 0x00e45600
undefined4 C_00e45600::sub_00e45600(void)
{
    int param_1 = (int)this;

  **(undefined4 **)(param_1 + 4) = *(undefined4 *)(param_1 + 8);
  return 0xc;
}

extern char g_020fdb9c[];
// @baa 0x00e45610
int sub_00e45610(void) { return (int)g_020fdb9c; }

struct C_00e45620 { void sub_00e45620(void); };

// @baa 0x00e45620
void C_00e45620::sub_00e45620(void) { *(int*)((char*)this + 0) = (int)g_01ebb554; }

struct C_00e45630 {
    undefined4 * sub_00e45630(byte);
};

// @baa 0x00e45630
undefined4 * C_00e45630::sub_00e45630(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ebb554);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00e45650 {
    void sub_00e45650(undefined4 *, int *);
};

extern undefined4 g_020fdf48;
// @baa 0x00e45650
void C_00e45650::sub_00e45650(undefined4 * param_2, int * param_3)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 4) == 0) {
    sub_006311e0("GFx_SM_Disabled != StyleMode",
                 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\GFxUI\\Src\\GFxUIRenderer.cpp"
                 ,0x6c1,&g_020fdf48);
  }
  if (*param_3 == 1) {
    param_2[1] = 0x4000;
    param_2[2] = 0x200000;
    *param_2 = 1;
    return;
  }
  *param_2 = 1;
  return;
}

extern char g_020feb20[];
// @baa 0x00e45940
int sub_00e45940(void) { return (int)g_020feb20; }

extern char g_020feb74[];
// @baa 0x00e45950
int sub_00e45950(void) { return (int)g_020feb74; }

struct C_00e45960 { void sub_00e45960(void); };

// @baa 0x00e45960
void C_00e45960::sub_00e45960(void) { *(int*)((char*)this + 0) = (int)g_01ebb554; }

struct C_00e45970 {
    undefined4 * sub_00e45970(byte);
};

// @baa 0x00e45970
undefined4 * C_00e45970::sub_00e45970(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ebb554);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

extern int g_02106364;
// A small two-dword value struct used by DecalComponent.cpp.
struct FDecalValue
{
    FDecalValue* sub_00e45990(int* Src);
    int Value;  // 0x0
    int Unk04;  // 0x4
};

// @baa 0x00e45990
FDecalValue* FDecalValue::sub_00e45990(int* Src)
{
    Value = (int)&g_02106364;
    Unk04 = *Src;
    return this;
}

extern char g_020fedd4[];
// @baa 0x00e459b0
int sub_00e459b0(void) { return (int)g_020fedd4; }

struct C_00e459c0 { void sub_00e459c0(void); };

// @baa 0x00e459c0
void C_00e459c0::sub_00e459c0(void) { *(int*)((char*)this + 0) = (int)g_01ebb554; }

struct C_00e459d0 {
    undefined4 * sub_00e459d0(byte);
};

// @baa 0x00e459d0
undefined4 * C_00e459d0::sub_00e459d0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ebb554);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

extern char g_020ff19c[];
// @baa 0x00e45a20
int sub_00e45a20(void) { return (int)g_020ff19c; }

struct C_00e45a30 { void sub_00e45a30(void); };

// @baa 0x00e45a30
void C_00e45a30::sub_00e45a30(void) { *(int*)((char*)this + 0) = (int)g_01ebb554; }

struct C_00e45a40 {
    undefined4 * sub_00e45a40(byte);
};

// @baa 0x00e45a40
undefined4 * C_00e45a40::sub_00e45a40(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ebb554);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

extern char g_020ff558[];
// @baa 0x00e45a80
int sub_00e45a80(void) { return (int)g_020ff558; }

struct C_00e45a90 { void sub_00e45a90(void); };

// @baa 0x00e45a90
void C_00e45a90::sub_00e45a90(void) { *(int*)((char*)this + 0) = (int)g_01ebb554; }

struct C_00e45aa0 {
    undefined4 * sub_00e45aa0(byte);
};

// @baa 0x00e45aa0
undefined4 * C_00e45aa0::sub_00e45aa0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ebb554);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

extern char g_020ff7a4[];
// @baa 0x00e45b00
int sub_00e45b00(void) { return (int)g_020ff7a4; }

struct C_00e45b10 { void sub_00e45b10(void); };

// @baa 0x00e45b10
void C_00e45b10::sub_00e45b10(void) { *(int*)((char*)this + 0) = (int)g_01ebb554; }

struct C_00e45b20 {
    undefined4 * sub_00e45b20(byte);
};

// @baa 0x00e45b20
undefined4 * C_00e45b20::sub_00e45b20(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ebb554);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

extern char g_0210046c[];
// @baa 0x00e45b70
int sub_00e45b70(void) { return (int)g_0210046c; }

struct C_00e45b80 { void sub_00e45b80(void); };

// @baa 0x00e45b80
void C_00e45b80::sub_00e45b80(void) { *(int*)((char*)this + 0) = (int)g_01ebb554; }

struct C_00e45b90 {
    undefined4 * sub_00e45b90(byte);
};

// @baa 0x00e45b90
undefined4 * C_00e45b90::sub_00e45b90(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ebb554);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

extern char g_0210100c[];
// @baa 0x00e45bb0
int sub_00e45bb0(void) { return (int)g_0210100c; }

struct C_00e45bc0 { void sub_00e45bc0(void); };

// @baa 0x00e45bc0
void C_00e45bc0::sub_00e45bc0(void) { *(int*)((char*)this + 0) = (int)g_01ebb554; }

struct C_00e45bd0 { C_00e45bd0* sub_00e45bd0(void); };

// @baa 0x00e45bd0
C_00e45bd0* C_00e45bd0::sub_00e45bd0(void) { return this; }

extern char g_02101554[];
// @baa 0x00e45be0
int sub_00e45be0(void) { return (int)g_02101554; }

struct C_00e45bf0 { void sub_00e45bf0(void); };

// @baa 0x00e45bf0
void C_00e45bf0::sub_00e45bf0(void) { *(int*)((char*)this + 0) = (int)g_01ebb554; }

extern char g_021017a4[];
// @baa 0x00e45c00
int sub_00e45c00(void) { return (int)g_021017a4; }

struct C_00e45c10 { void sub_00e45c10(void); };

// @baa 0x00e45c10
void C_00e45c10::sub_00e45c10(void) { *(int*)((char*)this + 0) = (int)g_01ebb554; }

extern char g_021019f4[];
// @baa 0x00e45d10
int sub_00e45d10(void) { return (int)g_021019f4; }

struct C_00e45d20 { void sub_00e45d20(void); };

// @baa 0x00e45d20
void C_00e45d20::sub_00e45d20(void) { *(int*)((char*)this + 0) = (int)g_01ebb554; }

struct C_00e45d30 {
    undefined4 * sub_00e45d30(byte);
};

// @baa 0x00e45d30
undefined4 * C_00e45d30::sub_00e45d30(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ebb554);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00e45d50 {
    void sub_00e45d50(undefined4 *, char);
};

// @baa 0x00e45d50
void C_00e45d50::sub_00e45d50(undefined4 * param_2, char param_3)
{
    int param_1 = (int)this;

  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *(undefined4 *)(param_1 + 0x10);
    param_2[1] = *(undefined4 *)(param_1 + 0x14);
    param_2[2] = *(undefined4 *)(param_1 + 0x18);
    param_2[3] = *(undefined4 *)(param_1 + 0x1c);
  }
  if (param_3 != '\0') {
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  return;
}

extern char g_02101c44[];
// @baa 0x00e45d90
int sub_00e45d90(void) { return (int)g_02101c44; }

struct C_00e45da0 { void sub_00e45da0(void); };

// @baa 0x00e45da0
void C_00e45da0::sub_00e45da0(void) { *(int*)((char*)this + 0) = (int)g_01ebb554; }

extern char g_02101e94[];
// @baa 0x00e45dd0
int sub_00e45dd0(void) { return (int)g_02101e94; }

struct C_00e45de0 { void sub_00e45de0(void); };

// @baa 0x00e45de0
void C_00e45de0::sub_00e45de0(void) { *(int*)((char*)this + 0) = (int)g_01ebb554; }

struct C_00e45df0 {
    undefined4 * sub_00e45df0(byte);
};

// @baa 0x00e45df0
undefined4 * C_00e45df0::sub_00e45df0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ebb554);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

extern int g_021063b8;
// A small two-dword value struct used by DecalComponent.cpp.
struct FDecalValue_00e45e10
{
    FDecalValue_00e45e10* sub_00e45e10(int* Src);
    int Value;  // 0x0
    int Unk04;  // 0x4
};

// @baa 0x00e45e10
FDecalValue_00e45e10* FDecalValue_00e45e10::sub_00e45e10(int* Src)
{
    Value = (int)&g_021063b8;
    Unk04 = *Src;
    return this;
}

extern char g_02102234[];
// @baa 0x00e45e30
int sub_00e45e30(void) { return (int)g_02102234; }

struct C_00e45e40 { void sub_00e45e40(void); };

// @baa 0x00e45e40
void C_00e45e40::sub_00e45e40(void) { *(int*)((char*)this + 0) = (int)g_01ebb554; }

struct C_00e45e50 {
    undefined4 * sub_00e45e50(byte);
};

// @baa 0x00e45e50
undefined4 * C_00e45e50::sub_00e45e50(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ebb554);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

extern int g_021063c4;
// A small two-dword value struct used by DecalComponent.cpp.
struct FDecalValue_00e45e70
{
    FDecalValue_00e45e70* sub_00e45e70(int* Src);
    int Value;  // 0x0
    int Unk04;  // 0x4
};

// @baa 0x00e45e70
FDecalValue_00e45e70* FDecalValue_00e45e70::sub_00e45e70(int* Src)
{
    Value = (int)&g_021063c4;
    Unk04 = *Src;
    return this;
}

extern char g_02102484[];
// @baa 0x00e45e90
int sub_00e45e90(void) { return (int)g_02102484; }

struct C_00e45ea0 { void sub_00e45ea0(void); };

// @baa 0x00e45ea0
void C_00e45ea0::sub_00e45ea0(void) { *(int*)((char*)this + 0) = (int)g_01ebb554; }

struct C_00e45eb0 {
    undefined4 * sub_00e45eb0(byte);
};

// @baa 0x00e45eb0
undefined4 * C_00e45eb0::sub_00e45eb0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ebb554);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

extern char g_021026cc[];
// @baa 0x00e45ef0
int sub_00e45ef0(void) { return (int)g_021026cc; }

struct C_00e45f00 { void sub_00e45f00(void); };

// @baa 0x00e45f00
void C_00e45f00::sub_00e45f00(void) { *(int*)((char*)this + 0) = (int)g_01ebb554; }

struct C_00e45f10 {
    undefined4 * sub_00e45f10(byte);
};

// @baa 0x00e45f10
undefined4 * C_00e45f10::sub_00e45f10(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ebb554);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

extern int g_021063dc;
// A small two-dword value struct used by DecalComponent.cpp.
struct FDecalValue_00e45f30
{
    FDecalValue_00e45f30* sub_00e45f30(int* Src);
    int Value;  // 0x0
    int Unk04;  // 0x4
};

// @baa 0x00e45f30
FDecalValue_00e45f30* FDecalValue_00e45f30::sub_00e45f30(int* Src)
{
    Value = (int)&g_021063dc;
    Unk04 = *Src;
    return this;
}

extern char g_02102a64[];
// @baa 0x00e45f50
int sub_00e45f50(void) { return (int)g_02102a64; }

struct C_00e45f60 { void sub_00e45f60(void); };

// @baa 0x00e45f60
void C_00e45f60::sub_00e45f60(void) { *(int*)((char*)this + 0) = (int)g_01ebb554; }

struct C_00e45f70 {
    undefined4 * sub_00e45f70(byte);
};

// @baa 0x00e45f70
undefined4 * C_00e45f70::sub_00e45f70(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ebb554);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

extern char g_021033b4[];
// @baa 0x00e46210
int sub_00e46210(void) { return (int)g_021033b4; }

struct C_00e46220 { void sub_00e46220(void); };

// @baa 0x00e46220
void C_00e46220::sub_00e46220(void) { *(int*)((char*)this + 0) = (int)g_01ebb554; }

struct C_00e46230 {
    undefined4 * sub_00e46230(byte);
};

// @baa 0x00e46230
undefined4 * C_00e46230::sub_00e46230(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ebb554);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x00e46250
bool sub_00e46250(int * param_1)
{
  return *param_1 != 0;
}

// @baa 0x00e46260
bool sub_00e46260(int * param_1)
{
  return *param_1 != 0;
}

struct C_00e46270 { int sub_00e46270(void); };

// @baa 0x00e46270
int C_00e46270::sub_00e46270(void) { return *(int*)((char*)this + 4); }

struct C_00e46280 { int sub_00e46280(void); };

// @baa 0x00e46280
int C_00e46280::sub_00e46280(void) { return *(int*)((char*)this + 4); }

struct C_00e46290 { int sub_00e46290(void); };

// @baa 0x00e46290
int C_00e46290::sub_00e46290(void) { return *(int*)((char*)this + 4); }

struct C_00e462a0 { int a, b, c; C_00e462a0(); };

// @baa 0x00e462a0
C_00e462a0::C_00e462a0() : a(0), b(0), c(0) {}

struct C_00e462b0 { int sub_00e462b0(void); };

// @baa 0x00e462b0
int C_00e462b0::sub_00e462b0(void) { return *(int*)((char*)this + 4); }

struct C_00e46340 { int sub_00e46340(void); };

// @baa 0x00e46340
int C_00e46340::sub_00e46340(void) { return *(int*)((char*)this + 0); }

struct C_00e46370 {
    undefined4 * sub_00e46370();
};

int sub_018d3d50(void);
extern undefined * g_023f4f24;
// @baa 0x00e46370
undefined4 * C_00e46370::sub_00e46370(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_018d3d50();
  *param_1 = (undefined4)(&g_023f4f24);
  return param_1;
}

struct C_00e46390 { int a; C_00e46390(int); };

// @baa 0x00e46390
C_00e46390::C_00e46390(int x) : a(x) {}

struct C_00e463c0 { int sub_00e463c0(void); };

// @baa 0x00e463c0
int C_00e463c0::sub_00e463c0(void) { return *(int*)((char*)this + 0); }

struct C_00e463d0 { int a; C_00e463d0(int); };

// @baa 0x00e463d0
C_00e463d0::C_00e463d0(int x) : a(x) {}

struct C_00e46400 { int a; C_00e46400(int); };

// @baa 0x00e46400
C_00e46400::C_00e46400(int x) : a(x) {}

struct C_00e46430 { int sub_00e46430(void); };

// @baa 0x00e46430
int C_00e46430::sub_00e46430(void) { return *(int*)((char*)this + 0); }

struct C_00e46440 { int a; C_00e46440(int); };

// @baa 0x00e46440
C_00e46440::C_00e46440(int x) : a(x) {}

struct C_00e46470 { int sub_00e46470(void); };

// @baa 0x00e46470
int C_00e46470::sub_00e46470(void) { return *(int*)((char*)this + 0); }

struct C_00e46480 { int sub_00e46480(void); };

// @baa 0x00e46480
int C_00e46480::sub_00e46480(void) { return *(int*)((char*)this + 0); }

struct C_00e46490 { int a; C_00e46490(int); };

// @baa 0x00e46490
C_00e46490::C_00e46490(int x) : a(x) {}

struct C_00e464c0 { int a; C_00e464c0(int); };

// @baa 0x00e464c0
C_00e464c0::C_00e464c0(int x) : a(x) {}

struct C_00e464f0 {
    int sub_00e464f0();
};

// @baa 0x00e464f0
int C_00e464f0::sub_00e464f0(void)
{
    int * param_1 = (int *)this;

  return param_1[2] - *param_1;
}

struct C_00e46500 { int sub_00e46500(void); };

// @baa 0x00e46500
int C_00e46500::sub_00e46500(void) { return *(int*)((char*)this + 12) - *(int*)((char*)this + 4); }

struct C_00e46510 {
    undefined4 * sub_00e46510();
};

extern undefined * g_021063f4;
// @baa 0x00e46510
undefined4 * C_00e46510::sub_00e46510(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_018d3d50();
  *param_1 = (undefined4)(&g_021063f4);
  return param_1;
}

struct C_00e46530 { int sub_00e46530(void); };

// @baa 0x00e46530
int C_00e46530::sub_00e46530(void) { return *(int*)((char*)this + 0); }

struct C_00e46540 { int sub_00e46540(void); };

// @baa 0x00e46540
int C_00e46540::sub_00e46540(void) { return *(int*)((char*)this + 0); }

struct C_00e46550 { int sub_00e46550(void); };

// @baa 0x00e46550
int C_00e46550::sub_00e46550(void) { return *(int*)((char*)this + 0); }

struct C_00e46560 { int a; C_00e46560(int); };

// @baa 0x00e46560
C_00e46560::C_00e46560(int x) : a(x) {}

struct C_00e46590 { int sub_00e46590(void); };

// @baa 0x00e46590
int C_00e46590::sub_00e46590(void) { return *(int*)((char*)this + 0); }

struct C_00e465a0 { int sub_00e465a0(void); };

// @baa 0x00e465a0
int C_00e465a0::sub_00e465a0(void) { return *(int*)((char*)this + 0); }

struct C_00e465b0 {
    undefined4 * sub_00e465b0();
};

extern undefined * g_023f55e4;
// @baa 0x00e465b0
undefined4 * C_00e465b0::sub_00e465b0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_018d3d50();
  *param_1 = (undefined4)(&g_023f55e4);
  return param_1;
}

struct C_00e465d0 { C_00e465d0* sub_00e465d0(void); };

// @baa 0x00e465d0
C_00e465d0* C_00e465d0::sub_00e465d0(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_00e465e0 { int a; C_00e465e0(int); };

// @baa 0x00e465e0
C_00e465e0::C_00e465e0(int x) : a(x) {}

struct Object;
struct ObjectRef {
    Object* ObjectPtr; // 0x00
    void sub_00e465f0();
};

struct Object {
    void sub_018dd090();
};

// @baa 0x00e465f0
void ObjectRef::sub_00e465f0()
{
    if (ObjectPtr != 0)
        ObjectPtr->sub_018dd090();
}

struct C_00e46660 { int sub_00e46660(void); };

// @baa 0x00e46660
int C_00e46660::sub_00e46660(void) { return *(int*)((char*)this + 0); }

struct C_00e46670 { int sub_00e46670(void); };

// @baa 0x00e46670
int C_00e46670::sub_00e46670(void) { return *(int*)((char*)this + 0); }

struct C_00e46680 { C_00e46680* sub_00e46680(void); };

// @baa 0x00e46680
C_00e46680* C_00e46680::sub_00e46680(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_00e46710 { int sub_00e46710(void); };

// @baa 0x00e46710
int C_00e46710::sub_00e46710(void) { return *(int*)((char*)this + 0); }

struct C_00e46720 { int sub_00e46720(void); };

// @baa 0x00e46720
int C_00e46720::sub_00e46720(void) { return *(int*)((char*)this + 0); }

struct C_00e46730 { int sub_00e46730(void); };

// @baa 0x00e46730
int C_00e46730::sub_00e46730(void) { return *(int*)((char*)this + 0); }

struct C_00e46740 { int a, b, c; C_00e46740(); };

// @baa 0x00e46740
C_00e46740::C_00e46740() : a(0), b(0), c(0) {}

struct C_00e46750 { int sub_00e46750(void); };

// @baa 0x00e46750
int C_00e46750::sub_00e46750(void) { return *(int*)((char*)this + 4); }

struct C_00e46760 { C_00e46760* sub_00e46760(void); };

// @baa 0x00e46760
C_00e46760* C_00e46760::sub_00e46760(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_00e467f0 { int sub_00e467f0(void); };

// @baa 0x00e467f0
int C_00e467f0::sub_00e467f0(void) { return *(int*)((char*)this + 0); }

struct C_00e46800 { int sub_00e46800(void); };

// @baa 0x00e46800
int C_00e46800::sub_00e46800(void) { return *(int*)((char*)this + 0); }

struct C_00e46810 { int sub_00e46810(void); };

// @baa 0x00e46810
int C_00e46810::sub_00e46810(void) { return *(int*)((char*)this + 0); }

struct C_00e46890 { int sub_00e46890(void); };

// @baa 0x00e46890
int C_00e46890::sub_00e46890(void) { return *(int*)((char*)this + 4); }

struct C_00e468a0 { int sub_00e468a0(void); };

// @baa 0x00e468a0
int C_00e468a0::sub_00e468a0(void) { return *(int*)((char*)this + 0); }

struct C_00e468b0 { int sub_00e468b0(void); };

// @baa 0x00e468b0
int C_00e468b0::sub_00e468b0(void) { return *(int*)((char*)this + 0); }

struct C_00e468c0 { int sub_00e468c0(void); };

// @baa 0x00e468c0
int C_00e468c0::sub_00e468c0(void) { return *(int*)((char*)this + 0); }

extern char g_023f4ef8[];
struct C_00e468d0 { void sub_00e468d0(void); };

// @baa 0x00e468d0
void C_00e468d0::sub_00e468d0(void) { *(int*)((char*)this + 0) = (int)g_023f4ef8; }

// @baa 0x00e468e0
undefined1 sub_00e468e0(void)
{
  return 1;
}

struct C_00e468f0 { int a; C_00e468f0(int); };

// @baa 0x00e468f0
C_00e468f0::C_00e468f0(int x) : a(x) {}

struct C_00e46920 { int sub_00e46920(void); };

// @baa 0x00e46920
int C_00e46920::sub_00e46920(void) { return *(int*)((char*)this + 0); }

struct C_00e46930 { int a; C_00e46930(int); };

// @baa 0x00e46930
C_00e46930::C_00e46930(int x) : a(x) {}

struct C_00e46960 { int sub_00e46960(void); };

// @baa 0x00e46960
int C_00e46960::sub_00e46960(void) { return *(int*)((char*)this + 0); }

struct C_00e46970 { int a; C_00e46970(int); };

// @baa 0x00e46970
C_00e46970::C_00e46970(int x) : a(x) {}

struct C_00e469a0 { int sub_00e469a0(void); };

// @baa 0x00e469a0
int C_00e469a0::sub_00e469a0(void) { return *(int*)((char*)this + 0); }

struct C_00e469b0 { int a; C_00e469b0(int); };

// @baa 0x00e469b0
C_00e469b0::C_00e469b0(int x) : a(x) {}

struct C_00e469e0 { int sub_00e469e0(void); };

// @baa 0x00e469e0
int C_00e469e0::sub_00e469e0(void) { return *(int*)((char*)this + 0); }

struct C_00e469f0 { int a; C_00e469f0(int); };

// @baa 0x00e469f0
C_00e469f0::C_00e469f0(int x) : a(x) {}

struct C_00e46a20 { int sub_00e46a20(void); };

// @baa 0x00e46a20
int C_00e46a20::sub_00e46a20(void) { return *(int*)((char*)this + 0); }

struct C_00e46a30 { int a; C_00e46a30(int); };

// @baa 0x00e46a30
C_00e46a30::C_00e46a30(int x) : a(x) {}

struct C_00e46a60 { int sub_00e46a60(void); };

// @baa 0x00e46a60
int C_00e46a60::sub_00e46a60(void) { return *(int*)((char*)this + 0); }

struct C_00e46a70 {
    INT Unk00; // 0x00
    INT Unk04; // 0x04
    C_00e46a70* sub_00e46a70(INT value);
};

// @baa 0x00e46a70
C_00e46a70* C_00e46a70::sub_00e46a70(INT value)
{
    Unk00 = value;
    Unk04 = 0;
    return this;
}

struct C_00e46a90 {
    int a;
    int b;
    C_00e46a90* sub_00e46a90();
};

// @baa 0x00e46a90
C_00e46a90* C_00e46a90::sub_00e46a90()
{
    this->b += 1;
    return this;
}

struct C_00e46aa0 {
    INT Unk00; // 0x00
    INT Unk04; // 0x04
    C_00e46aa0* sub_00e46aa0(INT value);
};

// @baa 0x00e46aa0
C_00e46aa0* C_00e46aa0::sub_00e46aa0(INT value)
{
    Unk00 = value;
    Unk04 = 0;
    return this;
}

struct C_00e46ac0 { char pad[4]; int field; C_00e46ac0* sub_00e46ac0(); };

// @baa 0x00e46ac0
C_00e46ac0* C_00e46ac0::sub_00e46ac0()
{
    field += 1;
    return this;
}

struct C_00e46ad0 { int sub_00e46ad0(void); };

// @baa 0x00e46ad0
int C_00e46ad0::sub_00e46ad0(void) { return *(int*)((char*)this + 4); }

struct C_00e46ae0 { int a; C_00e46ae0(int); };

// @baa 0x00e46ae0
C_00e46ae0::C_00e46ae0(int x) : a(x) {}

struct C_00e46b10 { int sub_00e46b10(void); };

// @baa 0x00e46b10
int C_00e46b10::sub_00e46b10(void) { return *(int*)((char*)this + 0); }

struct C_00e46b20 { int sub_00e46b20(void); };

// @baa 0x00e46b20
int C_00e46b20::sub_00e46b20(void) { return *(int*)((char*)this + 0); }

struct C_00e46b30 {
    void sub_00e46b30();
};

// @baa 0x00e46b30
void C_00e46b30::sub_00e46b30(void)
{
    int param_1 = (int)this;

  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x80);
  if ((iVar1 != param_1) && (iVar1 != 0)) {
    sub_0053dfa0(iVar1);
  }
  return;
}

struct C_00e46b50 { int sub_00e46b50(void); };

// @baa 0x00e46b50
int C_00e46b50::sub_00e46b50(void) { return *(int*)((char*)this + 128); }

struct C_00e46b60 { int a; C_00e46b60(int); };

// @baa 0x00e46b60
C_00e46b60::C_00e46b60(int x) : a(x) {}

struct C_00e46b70 { int sub_00e46b70(void); };

// @baa 0x00e46b70
int C_00e46b70::sub_00e46b70(void) { return *(int*)((char*)this + 0); }

struct C_00e46b80 { int sub_00e46b80(void); };

// @baa 0x00e46b80
int C_00e46b80::sub_00e46b80(void) { return *(int*)((char*)this + 0); }

struct C_00e46b90 {
    void sub_00e46b90();
};

// @baa 0x00e46b90
void C_00e46b90::sub_00e46b90(void)
{
    int param_1 = (int)this;

  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x100);
  if ((iVar1 != param_1) && (iVar1 != 0)) {
    sub_0053dfa0(iVar1);
  }
  return;
}

struct C_00e46bb0 { int sub_00e46bb0(void); };

// @baa 0x00e46bb0
int C_00e46bb0::sub_00e46bb0(void) { return *(int*)((char*)this + 256); }

// @baa 0x00e46bc0
int sub_00e46bc0(void) { return 1; }

// @baa 0x00e46bd0
int sub_00e46bd0(void) { return 1; }

// @baa 0x00e46be0
int sub_00e46be0(void) { return 1; }

// @baa 0x00e46bf0
int sub_00e46bf0(void) { return 1; }

// @baa 0x00e46c00
int sub_00e46c00(void) { return 1; }

// @baa 0x00e46c10
int sub_00e46c10(void) { return 1; }

// @baa 0x00e46c20
int sub_00e46c20(void) { return 1; }

// @baa 0x00e46c30
int sub_00e46c30(void) { return 1; }

// @baa 0x00e46c40
int sub_00e46c40(void) { return 1; }

// @baa 0x00e46c50
int sub_00e46c50(void) { return 1; }

// @baa 0x00e46c60
int sub_00e46c60(void) { return 1; }

// @baa 0x00e46c70
int sub_00e46c70(void) { return 1; }

// @baa 0x00e46c80
int sub_00e46c80(void) { return 1; }

// @baa 0x00e46c90
int sub_00e46c90(void) { return 1; }

struct C_00e46ca0 { int sub_00e46ca0(void); };

// @baa 0x00e46ca0
int C_00e46ca0::sub_00e46ca0(void) { return *(int*)((char*)this + 0); }

struct C_00e46cb0 { int sub_00e46cb0(void); };

// @baa 0x00e46cb0
int C_00e46cb0::sub_00e46cb0(void) { return *(int*)((char*)this + 0); }

struct C_00e46cc0 { int sub_00e46cc0(void); };

// @baa 0x00e46cc0
int C_00e46cc0::sub_00e46cc0(void) { return *(int*)((char*)this + 0); }

struct C_00e46cd0 { int sub_00e46cd0(void); };

// @baa 0x00e46cd0
int C_00e46cd0::sub_00e46cd0(void) { return *(int*)((char*)this + 0); }

struct C_00e46ce0 { int sub_00e46ce0(void); };

// @baa 0x00e46ce0
int C_00e46ce0::sub_00e46ce0(void) { return *(int*)((char*)this + 0); }

struct C_00e46cf0 { int sub_00e46cf0(void); };

// @baa 0x00e46cf0
int C_00e46cf0::sub_00e46cf0(void) { return *(int*)((char*)this + 0); }

struct C_00e46d00 { int sub_00e46d00(void); };

// @baa 0x00e46d00
int C_00e46d00::sub_00e46d00(void) { return *(int*)((char*)this + 0); }

struct C_00e46d10 { int sub_00e46d10(void); };

// @baa 0x00e46d10
int C_00e46d10::sub_00e46d10(void) { return *(int*)((char*)this + 0); }

struct C_00e46d20 { int sub_00e46d20(void); };

// @baa 0x00e46d20
int C_00e46d20::sub_00e46d20(void) { return *(int*)((char*)this + 0); }

struct C_00e46d30 { int sub_00e46d30(void); };

// @baa 0x00e46d30
int C_00e46d30::sub_00e46d30(void) { return *(int*)((char*)this + 0); }

struct C_00e46d40 { int sub_00e46d40(void); };

// @baa 0x00e46d40
int C_00e46d40::sub_00e46d40(void) { return *(int*)((char*)this + 0); }

struct C_00e46d50 { int sub_00e46d50(void); };

// @baa 0x00e46d50
int C_00e46d50::sub_00e46d50(void) { return *(int*)((char*)this + 0); }

struct C_00e46d60 { int sub_00e46d60(void); };

// @baa 0x00e46d60
int C_00e46d60::sub_00e46d60(void) { return *(int*)((char*)this + 0); }

struct C_00e46d70 { int sub_00e46d70(void); };

// @baa 0x00e46d70
int C_00e46d70::sub_00e46d70(void) { return *(int*)((char*)this + 0); }

struct C_00e46d80 { int sub_00e46d80(void); };

// @baa 0x00e46d80
int C_00e46d80::sub_00e46d80(void) { return *(int*)((char*)this + 0); }

struct C_00e46d90 { int sub_00e46d90(void); };

// @baa 0x00e46d90
int C_00e46d90::sub_00e46d90(void) { return *(int*)((char*)this + 0); }

struct C_00e46da0 { int sub_00e46da0(void); };

// @baa 0x00e46da0
int C_00e46da0::sub_00e46da0(void) { return *(int*)((char*)this + 0); }

struct C_00e46db0 { int sub_00e46db0(void); };

// @baa 0x00e46db0
int C_00e46db0::sub_00e46db0(void) { return *(int*)((char*)this + 0); }

struct C_00e46dc0 { int sub_00e46dc0(void); };

// @baa 0x00e46dc0
int C_00e46dc0::sub_00e46dc0(void) { return *(int*)((char*)this + 0); }

struct C_00e46dd0 { int sub_00e46dd0(void); };

// @baa 0x00e46dd0
int C_00e46dd0::sub_00e46dd0(void) { return *(int*)((char*)this + 0); }

struct C_00e46de0 { int sub_00e46de0(void); };

// @baa 0x00e46de0
int C_00e46de0::sub_00e46de0(void) { return *(int*)((char*)this + 0); }

struct C_00e46df0 { int sub_00e46df0(void); };

// @baa 0x00e46df0
int C_00e46df0::sub_00e46df0(void) { return *(int*)((char*)this + 0); }

struct C_00e46e00 { int sub_00e46e00(void); };

// @baa 0x00e46e00
int C_00e46e00::sub_00e46e00(void) { return *(int*)((char*)this + 0); }

struct C_00e46e10 { int sub_00e46e10(void); };

// @baa 0x00e46e10
int C_00e46e10::sub_00e46e10(void) { return *(int*)((char*)this + 0); }

struct C_00e46e20 { int sub_00e46e20(void); };

// @baa 0x00e46e20
int C_00e46e20::sub_00e46e20(void) { return *(int*)((char*)this + 0); }

struct C_00e46e30 { int sub_00e46e30(void); };

// @baa 0x00e46e30
int C_00e46e30::sub_00e46e30(void) { return *(int*)((char*)this + 0); }

struct C_00e46e40 { int sub_00e46e40(void); };

// @baa 0x00e46e40
int C_00e46e40::sub_00e46e40(void) { return *(int*)((char*)this + 0); }

struct C_00e46e50 { int sub_00e46e50(void); };

// @baa 0x00e46e50
int C_00e46e50::sub_00e46e50(void) { return *(int*)((char*)this + 0); }

// @baa 0x00e46e60
int sub_00e46e60(void) { return 1; }

// @baa 0x00e46e70
int sub_00e46e70(void) { return 1; }

// @baa 0x00e46e80
int sub_00e46e80(void) { return 1; }

// @baa 0x00e46e90
int sub_00e46e90(void) { return 1; }

// @baa 0x00e46ea0
int sub_00e46ea0(void) { return 1; }

// @baa 0x00e46eb0
int sub_00e46eb0(void) { return 1; }

// @baa 0x00e46ec0
int sub_00e46ec0(void) { return 1; }

struct C_00e46ed0 { int sub_00e46ed0(void); };

// @baa 0x00e46ed0
int C_00e46ed0::sub_00e46ed0(void) { return *(int*)((char*)this + 0); }

struct C_00e46ee0 { int sub_00e46ee0(void); };

// @baa 0x00e46ee0
int C_00e46ee0::sub_00e46ee0(void) { return *(int*)((char*)this + 0); }

struct C_00e46ef0 { int sub_00e46ef0(void); };

// @baa 0x00e46ef0
int C_00e46ef0::sub_00e46ef0(void) { return *(int*)((char*)this + 0); }

struct C_00e46f00 { int sub_00e46f00(void); };

// @baa 0x00e46f00
int C_00e46f00::sub_00e46f00(void) { return *(int*)((char*)this + 0); }

struct C_00e46f10 { int sub_00e46f10(void); };

// @baa 0x00e46f10
int C_00e46f10::sub_00e46f10(void) { return *(int*)((char*)this + 0); }

struct C_00e46f20 { int sub_00e46f20(void); };

// @baa 0x00e46f20
int C_00e46f20::sub_00e46f20(void) { return *(int*)((char*)this + 0); }

struct C_00e46f30 { int sub_00e46f30(void); };

// @baa 0x00e46f30
int C_00e46f30::sub_00e46f30(void) { return *(int*)((char*)this + 0); }

struct C_00e46f40 { int sub_00e46f40(void); };

// @baa 0x00e46f40
int C_00e46f40::sub_00e46f40(void) { return *(int*)((char*)this + 0); }

struct C_00e46f50 { int sub_00e46f50(void); };

// @baa 0x00e46f50
int C_00e46f50::sub_00e46f50(void) { return *(int*)((char*)this + 0); }

struct C_00e46f60 { int sub_00e46f60(void); };

// @baa 0x00e46f60
int C_00e46f60::sub_00e46f60(void) { return *(int*)((char*)this + 0); }

struct C_00e46f70 { int sub_00e46f70(void); };

// @baa 0x00e46f70
int C_00e46f70::sub_00e46f70(void) { return *(int*)((char*)this + 0); }

struct C_00e46f80 { int sub_00e46f80(void); };

// @baa 0x00e46f80
int C_00e46f80::sub_00e46f80(void) { return *(int*)((char*)this + 0); }

struct C_00e46f90 { int sub_00e46f90(void); };

// @baa 0x00e46f90
int C_00e46f90::sub_00e46f90(void) { return *(int*)((char*)this + 0); }

struct C_00e46fa0 { int sub_00e46fa0(void); };

// @baa 0x00e46fa0
int C_00e46fa0::sub_00e46fa0(void) { return *(int*)((char*)this + 0); }

struct C_00e47020 { int sub_00e47020(void); };

// @baa 0x00e47020
int C_00e47020::sub_00e47020(void) { return *(int*)((char*)this + 4); }

struct C_00e470b0 {
    int sub_00e470b0(int);
};

extern undefined2 g_01e3f3dc;
// @baa 0x00e470b0
int C_00e470b0::sub_00e470b0(int param_2)
{
    int * param_1 = (int *)this;

  if (*param_1 == 0) {
    sub_006311e0("GetTypedData()",
                 "e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\Array.h"
                 ,599,&g_01e3f3dc);
  }
  return *param_1 + -4 + (param_1[1] - param_2) * 4;
}

struct C_00e470f0 { C_00e470f0* sub_00e470f0(int a0); };

// @baa 0x00e470f0
C_00e470f0* C_00e470f0::sub_00e470f0(int a0) { return this; }

struct C_00e47100 { int sub_00e47100(void); };

// @baa 0x00e47100
int C_00e47100::sub_00e47100(void) { return *(int*)((char*)this + 0); }

struct C_00e47110 {
    INT Unk00; // 0x0
    INT Size;  // 0x4

    UBOOL sub_00e47110(INT Index);
};

// @baa 0x00e47110
UBOOL C_00e47110::sub_00e47110(INT Index)
{
    if (Index >= 0 && Index < Size)
        return 1;
    return 0;
}

struct S {
    TArray<QWORD> Items; // 0x00
    QWORD* sub_00e47130(INT Index);
};

// @baa 0x00e47130
QWORD* S::sub_00e47130(INT Index)
{
    return &Items(Index);
}

// @baa 0x00e471f0
void __stdcall sub_00e471f0(int a0, int a1) {  }

struct C_00e47200 { C_00e47200* sub_00e47200(int a0); };

// @baa 0x00e47200
C_00e47200* C_00e47200::sub_00e47200(int a0) { return this; }

struct C_00e47210 { int sub_00e47210(void); };

// @baa 0x00e47210
int C_00e47210::sub_00e47210(void) { return *(int*)((char*)this + 0); }

struct C_00e47220 { C_00e47220* sub_00e47220(int a0); };

// @baa 0x00e47220
C_00e47220* C_00e47220::sub_00e47220(int a0) { return this; }

struct C_00e47230 { int sub_00e47230(void); };

// @baa 0x00e47230
int C_00e47230::sub_00e47230(void) { return *(int*)((char*)this + 0); }

struct C_00e47240 { C_00e47240* sub_00e47240(int a0); };

// @baa 0x00e47240
C_00e47240* C_00e47240::sub_00e47240(int a0) { return this; }

struct C_00e47250 { int sub_00e47250(void); };

// @baa 0x00e47250
int C_00e47250::sub_00e47250(void) { return *(int*)((char*)this + 0); }

struct C_00e47260 { int sub_00e47260(void); };

// @baa 0x00e47260
int C_00e47260::sub_00e47260(void) { return *(int*)((char*)this + 0); }

struct C_00e47270 {
    int sub_00e47270(int);
};

// @baa 0x00e47270
int C_00e47270::sub_00e47270(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

struct C_00e47290 { C_00e47290* sub_00e47290(void); };

// @baa 0x00e47290
C_00e47290* C_00e47290::sub_00e47290(void) { return this; }

struct C_00e472a0 { int sub_00e472a0(void); };

// @baa 0x00e472a0
int C_00e472a0::sub_00e472a0(void) { return *(int*)((char*)this + 0); }

struct C_00e472b0 { int sub_00e472b0(void); };

// @baa 0x00e472b0
int C_00e472b0::sub_00e472b0(void) { return *(int*)((char*)this + 0); }

struct C_00e472c0 {
    INT Unk00; // 0x0
    INT Size;  // 0x4

    UBOOL sub_00e472c0(INT Index);
};

// @baa 0x00e472c0
UBOOL C_00e472c0::sub_00e472c0(INT Index)
{
    if (Index >= 0 && Index < Size)
        return 1;
    return 0;
}

struct C_00e47350 {
    int sub_00e47350(int);
};

// @baa 0x00e47350
int C_00e47350::sub_00e47350(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_00e47360 { C_00e47360* sub_00e47360(void); };

// @baa 0x00e47360
C_00e47360* C_00e47360::sub_00e47360(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_00e47370 { int sub_00e47370(void); };

// @baa 0x00e47370
int C_00e47370::sub_00e47370(void) { return *(int*)((char*)this + 0); }

struct C_00e47380 { int sub_00e47380(void); };

// @baa 0x00e47380
int C_00e47380::sub_00e47380(void) { return *(int*)((char*)this + 0); }

struct C_00e47390 { int sub_00e47390(void); };

// @baa 0x00e47390
int C_00e47390::sub_00e47390(void) { return *(int*)((char*)this + 0); }

struct C_00e473a0 {
    int sub_00e473a0(int);
};

// @baa 0x00e473a0
int C_00e473a0::sub_00e473a0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_00e473b0 {
    int sub_00e473b0();
};

// @baa 0x00e473b0
int C_00e473b0::sub_00e473b0(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_00e473c0 { int a, b; C_00e473c0(int, int); };

// @baa 0x00e473c0
C_00e473c0::C_00e473c0(int x, int y) : a(x), b(y) {}

struct C_00e47400 { int a, b; C_00e47400(int, int); };

// @baa 0x00e47400
C_00e47400::C_00e47400(int x, int y) : a(x), b(y) {}

struct C_00e47420 {
    int sub_00e47420();
};

// @baa 0x00e47420
int C_00e47420::sub_00e47420(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_00e47430 { int a, b; C_00e47430(int, int); };

// @baa 0x00e47430
C_00e47430::C_00e47430(int x, int y) : a(x), b(y) {}

extern char g_02106558[];
struct C_00e479f0 { C_00e479f0* sub_00e479f0(void); };

// @baa 0x00e479f0
C_00e479f0* C_00e479f0::sub_00e479f0(void) { *(int*)((char*)this + 0) = (int)g_02106558; return this; }

extern char g_02106574[];
struct C_00e47a00 { C_00e47a00* sub_00e47a00(void); };

// @baa 0x00e47a00
C_00e47a00* C_00e47a00::sub_00e47a00(void) { *(int*)((char*)this + 0) = (int)g_02106574; return this; }

int sub_00e47450(void);
// @baa 0x00e47a10
undefined4 ULensFlare::sub_00e47a10(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00e47450();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_00e474d0(void);
// @baa 0x00e47a30
undefined4 ULensFlare::sub_00e47a30(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00e474d0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_00e47550(void);
// @baa 0x00e47a50
undefined4 ULensFlare::sub_00e47a50(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00e47550();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_00e475d0(void);
// @baa 0x00e47a70
undefined4 ULensFlare::sub_00e47a70(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00e475d0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_00e47650(void);
// @baa 0x00e47a90
undefined4 ULensFlare::sub_00e47a90(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00e47650();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_00e476d0(void);
// @baa 0x00e47ab0
undefined4 ULensFlare::sub_00e47ab0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00e476d0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_00e47750(void);
// @baa 0x00e47ad0
undefined4 ULensFlare::sub_00e47ad0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00e47750();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_00e477d0(void);
// @baa 0x00e47af0
undefined4 ULensFlare::sub_00e47af0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00e477d0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_00e47850(void);
// @baa 0x00e47b10
undefined4 ULensFlare::sub_00e47b10(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00e47850();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_00e478d0(void);
// @baa 0x00e47b30
undefined4 ULensFlare::sub_00e47b30(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00e478d0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_00e47950(void);
// @baa 0x00e47b50
undefined4 ULensFlare::sub_00e47b50(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00e47950();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00e47b70 { int sub_00e47b70(void); };

// @baa 0x00e47b70
int C_00e47b70::sub_00e47b70(void) { return *(int*)((char*)this + 0); }

struct C_00e47b80 { int sub_00e47b80(void); };

// @baa 0x00e47b80
int C_00e47b80::sub_00e47b80(void) { return *(int*)((char*)this + 0); }

struct C_00e47b90 { int sub_00e47b90(void); };

// @baa 0x00e47b90
int C_00e47b90::sub_00e47b90(void) { return *(int*)((char*)this + 0); }

// @baa 0x00e47ba0
int sub_00e47ba0(int a0) { return *(int*)a0; }

// @baa 0x00e47bb0
undefined4 sub_00e47bb0(int * param_1, int * param_2)
{
  if ((*param_1 == *param_2) && (param_1[1] == param_2[1])) {
    return 1;
  }
  return 0;
}

struct C_00e47bf0 {
    void sub_00e47bf0(int *);
};

// @baa 0x00e47bf0
void C_00e47bf0::sub_00e47bf0(int * param_2)
{
    int param_1 = (int)this;

  *param_2 = param_1;
  param_2[1] = *(int *)(param_1 + 8);
  return;
}

struct C_00e47c00 { int sub_00e47c00(void); };

// @baa 0x00e47c00
int C_00e47c00::sub_00e47c00(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_00e47c60 {
    undefined4 sub_00e47c60();
};

// @baa 0x00e47c60
undefined4 C_00e47c60::sub_00e47c60(void)
{
    int * param_1 = (int *)this;

  if (((int *)*param_1 != (int *)0x0) && (*(int *)*param_1 != 0)) {
    return 0;
  }
  return 1;
}

struct C_00e47c80 {
    undefined4 sub_00e47c80();
};

// @baa 0x00e47c80
undefined4 C_00e47c80::sub_00e47c80(void)
{
    int * param_1 = (int *)this;

  if ((undefined4 *)*param_1 == (undefined4 *)0x0) {
    return 0;
  }
  return *(undefined4 *)*param_1;
}

struct C_00e47c90 {
    int sub_00e47c90(int);
};

// @baa 0x00e47c90
int C_00e47c90::sub_00e47c90(int param_2)
{
    int * param_1 = (int *)this;
  return param_2 * 0x10 + 8 + *param_1;
}

struct C_00e47ca0 {
    undefined4 sub_00e47ca0();
};

// @baa 0x00e47ca0
undefined4 C_00e47ca0::sub_00e47ca0(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  return *param_1;
}

struct S_00e47cb0 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_00e47cb0(INT Index);
};

// @baa 0x00e47cb0
DWORD* S_00e47cb0::sub_00e47cb0(INT Index)
{
    return &Items(Index);
}

// @baa 0x00e47d70
int sub_00e47d70(int a0) { return *(int*)a0; }

// @baa 0x00e47d80
bool sub_00e47d80(int param_1, int param_2)
{
  return param_1 == param_2;
}

struct C_00e47d90 {
    void sub_00e47d90(undefined4 *);
};

// @baa 0x00e47d90
void C_00e47d90::sub_00e47d90(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_2 = *param_1;
  param_2[1] = (undefined4)(param_1 + 1);
  return;
}

struct C_00e47db0 {
    bool sub_00e47db0();
};

// @baa 0x00e47db0
bool C_00e47db0::sub_00e47db0(void)
{
    int * param_1 = (int *)this;

  return *param_1 == -2;
}

struct C_00e47dc0 { void sub_00e47dc0(void); };

// @baa 0x00e47dc0
void C_00e47dc0::sub_00e47dc0(void) { *(int*)((char*)this + 0) = -2; }

struct C_00e47e30 {
    int sub_00e47e30(int);
};

// @baa 0x00e47e30
int C_00e47e30::sub_00e47e30(int param_2)
{
    int * param_1 = (int *)this;
  return param_2 * 0x10 + 8 + *param_1;
}

// @baa 0x00e47e40
undefined4 sub_00e47e40(undefined4 param_1)
{
  return param_1;
}

struct C_00e47e90 {
    int sub_00e47e90(int);
};

// @baa 0x00e47e90
int C_00e47e90::sub_00e47e90(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_00e47ea0 { int sub_00e47ea0(void); };

// @baa 0x00e47ea0
int C_00e47ea0::sub_00e47ea0(void) { return *(int*)((char*)this + 20); }

struct C_00e47eb0 { int sub_00e47eb0(void); };

// @baa 0x00e47eb0
int C_00e47eb0::sub_00e47eb0(void) { return *(int*)((char*)this + 20); }

struct C_00e47ec0 { int sub_00e47ec0(void); };

// @baa 0x00e47ec0
int C_00e47ec0::sub_00e47ec0(void) { return *(int*)((char*)this + 20); }

struct C_00e47ed0 { int sub_00e47ed0(void); };

// @baa 0x00e47ed0
int C_00e47ed0::sub_00e47ed0(void) { return *(int*)((char*)this + 20); }

struct C_00e47ee0 { int a, b; C_00e47ee0(int, int); };

// @baa 0x00e47ee0
C_00e47ee0::C_00e47ee0(int x, int y) : a(x), b(y) {}

extern char g_02105c90[];
// @baa 0x00e47f90
int sub_00e47f90(void) { return (int)g_02105c90; }

extern char g_02105cc8[];
// @baa 0x00e47ff0
int sub_00e47ff0(void) { return (int)g_02105cc8; }

extern char g_02105d00[];
// @baa 0x00e48020
int sub_00e48020(void) { return (int)g_02105d00; }

extern char g_02105d40[];
// @baa 0x00e48060
int sub_00e48060(void) { return (int)g_02105d40; }

extern char g_02105d90[];
// @baa 0x00e48090
int sub_00e48090(void) { return (int)g_02105d90; }

extern char g_02105dd0[];
// @baa 0x00e480d0
int sub_00e480d0(void) { return (int)g_02105dd0; }

struct C_00e480e0 { void sub_00e480e0(void); };

// @baa 0x00e480e0
void C_00e480e0::sub_00e480e0(void) { *(int*)((char*)this + 0) = (int)g_01ebb554; }

struct C_00e480f0 { void sub_00e480f0(void); };

// @baa 0x00e480f0
void C_00e480f0::sub_00e480f0(void) { *(int*)((char*)this + 0) = (int)g_01ebb554; }

struct C_00e48100 { void sub_00e48100(void); };

// @baa 0x00e48100
void C_00e48100::sub_00e48100(void) { *(int*)((char*)this + 0) = (int)g_01ebb554; }

struct C_00e48110 { void sub_00e48110(void); };

// @baa 0x00e48110
void C_00e48110::sub_00e48110(void) { *(int*)((char*)this + 0) = (int)g_01ebb554; }

struct C_00e48120 { void sub_00e48120(void); };

// @baa 0x00e48120
void C_00e48120::sub_00e48120(void) { *(int*)((char*)this + 0) = (int)g_01ebb554; }

struct C_00e48130 { void sub_00e48130(void); };

// @baa 0x00e48130
void C_00e48130::sub_00e48130(void) { *(int*)((char*)this + 0) = (int)g_01ebb554; }

struct C_00e48140{
int sub_00e48140(byte);
};

extern undefined4*g_026b0d94;
// @baa 0x00e48140
int C_00e48140::sub_00e48140(byte param_2)
{
int param_1=(int)this;

if(*(int*)(param_1+4)){
(*(int(__stdcall**)(int))(*g_026b0d94+0x23c))((int)(*(int*)(param_1+4)));
}
if((param_2&1)!=0){
sub_0053dfa0(param_1);
}
return param_1;
}

struct C_00e48180 {
    undefined4 * sub_00e48180(byte);
};

// @baa 0x00e48180
undefined4 * C_00e48180::sub_00e48180(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ebb554);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00e481a0 {
    undefined4 * sub_00e481a0(byte);
};

// @baa 0x00e481a0
undefined4 * C_00e481a0::sub_00e481a0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ebb554);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00e481c0 {
    undefined4 * sub_00e481c0(byte);
};

// @baa 0x00e481c0
undefined4 * C_00e481c0::sub_00e481c0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ebb554);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00e481e0 {
    undefined4 * sub_00e481e0(byte);
};

// @baa 0x00e481e0
undefined4 * C_00e481e0::sub_00e481e0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ebb554);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00e48200 {
    undefined4 * sub_00e48200(byte);
};

// @baa 0x00e48200
undefined4 * C_00e48200::sub_00e48200(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ebb554);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00e4a3f0 {
    undefined4 * sub_00e4a3f0(byte);
};

// @baa 0x00e4a3f0
undefined4 * C_00e4a3f0::sub_00e4a3f0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ebb554);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00e4a6d0 { C_00e4a6d0* sub_00e4a6d0(void); };

// @baa 0x00e4a6d0
C_00e4a6d0* C_00e4a6d0::sub_00e4a6d0(void) { *(int*)((char*)this + 8) = 0; return this; }

struct C_00e4a700 {
    void sub_00e4a700();
};

// @baa 0x00e4a700
void C_00e4a700::sub_00e4a700(void)
{
    int param_1 = (int)this;

  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0xff0000;
  return;
}

struct C_00e4aca0 {
    undefined4 * sub_00e4aca0();
};

extern undefined * g_02106618;
// @baa 0x00e4aca0
undefined4 * C_00e4aca0::sub_00e4aca0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_018d3d50();
  *param_1 = (undefined4)(&g_02106618);
  return param_1;
}

struct C_00e4af70 {
    undefined4 * sub_00e4af70(byte);
};

// @baa 0x00e4af70
undefined4 * C_00e4af70::sub_00e4af70(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ebb554);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct M_00e4afc0 { void sub_00e4a830(); };

struct C_00e4afc0 { char pad[288]; M_00e4afc0 m; void sub_00e4afc0(); };

// @baa 0x00e4afc0
void C_00e4afc0::sub_00e4afc0() { m.sub_00e4a830(); }

struct C_00e4b020 {
    undefined4 * sub_00e4b020(byte);
};

// @baa 0x00e4b020
undefined4 * C_00e4b020::sub_00e4b020(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ebb554);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct M_00e4b070 { void sub_00e4a830(); };

struct C_00e4b070 { char pad[424]; M_00e4b070 m; void sub_00e4b070(); };

// @baa 0x00e4b070
void C_00e4b070::sub_00e4b070() { m.sub_00e4a830(); }

struct C_00e4c150{
int sub_00e4c150(undefined4*);
};

int sub_0053d240(...);
undefined4 sub_0053df70(...);
// @baa 0x00e4c150
int C_00e4c150::sub_00e4c150(undefined4*param_2)
{
int*param_1=(int*)this;

undefined4*puVar1;
int iVar2;
int iVar3;

iVar2=param_1[1];
iVar3=iVar2+1;
param_1[1]=iVar3;
if(iVar3>param_1[2]){
iVar3=sub_0053d240(iVar3,param_1[2],4);
param_1[2]=iVar3;
if((*param_1!=0)||(iVar3)){
iVar3=sub_0053df70(*param_1,iVar3*4,8);
*param_1=iVar3;
}
}
puVar1=(undefined4*)(*param_1+4*iVar2);
if((undefined4*)0x0!=puVar1){
*puVar1=*param_2;
}
return iVar2;
}

// @baa 0x00e51120
void sub_00e51120(undefined4 * param_1, undefined4 * param_2)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
  }
  return;
}

struct C_00e561d0 {
    void sub_00e561d0(undefined4);
};

int sub_00e50fa0(...);
// @baa 0x00e561d0
void C_00e561d0::sub_00e561d0(undefined4 param_2)
{
    int param_1 = (int)this;

  sub_00e50fa0(param_2,param_1 + 0x74);
  return;
}

struct C_00e56270 {
    undefined4 * sub_00e56270(byte);
};

// @baa 0x00e56270
undefined4 * C_00e56270::sub_00e56270(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ebb554);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00e562f0 {
    undefined4 * sub_00e562f0(byte);
};

// @baa 0x00e562f0
undefined4 * C_00e562f0::sub_00e562f0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ebb554);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00e563e0 {
    undefined4 sub_00e563e0();
    int sub_00e4b080(int);
};

// @baa 0x00e563e0
undefined4 C_00e563e0::sub_00e563e0(void)
{
    int param_1 = (int)this;
  ((C_00e563e0 *)((*(char **)((char *)this + 8))))->sub_00e4b080(*(undefined4 *)(param_1 + 4));
  return 0xc;
}

void sub_004025d0(void*);
struct D { void* p; ~D(){ if(0) sub_004025d0(p);} };

void sub_0053dfa0(void*);
struct C_00e56630 { void* Data; int Num; int Max; void sub_00e56630(); };

// @baa 0x00e56630
void C_00e56630::sub_00e56630() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

void sub_00e4c110();
// @baa 0x00e56820
void sub_00e56820(void) { sub_00e4c110(); }

struct C_00e56830 { void* Data; int Num; int Max; void sub_00e56830(); };

// @baa 0x00e56830
void C_00e56830::sub_00e56830() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00e56890 {
  int sub_00e4c150(undefined4*);
  int sub_00e56890(undefined4*);
};

// @baa 0x00e56890
int C_00e56890::sub_00e56890(undefined4 *a)
{
  return sub_00e4c150(a);
}

struct C_00e578f0 { void* Data; int Num; int Max; void sub_00e578f0(); };

// @baa 0x00e578f0
void C_00e578f0::sub_00e578f0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

// @baa 0x00e57960
void sub_00e57960(void) { sub_00e4c110(); }

struct C_00e57b00{
void sub_00e57b00();
};

// @baa 0x00e57b00
void C_00e57b00::sub_00e57b00(void)
{
int param_1=(int)this;

int iVar1;

iVar1=*(int*)(param_1+0x14);
*(undefined4*)(param_1+0x14)=0;
if(iVar1!=0){
(*(int(__stdcall**)(int))(*g_026b0d94+0x24c))((int)(iVar1));
}
return;
}

struct C_00e57bd0{
void sub_00e57bd0();
};

// @baa 0x00e57bd0
void C_00e57bd0::sub_00e57bd0(void)
{
int param_1=(int)this;

int iVar1;

iVar1=*(int*)(param_1+0x14);
*(undefined4*)(param_1+0x14)=0;
if(iVar1!=0){
(*(int(__stdcall**)(int))(*g_026b0d94+0x24c))((int)(iVar1));
}
return;
}

struct C_00e57ca0{
void sub_00e57ca0();
};

// @baa 0x00e57ca0
void C_00e57ca0::sub_00e57ca0(void)
{
int param_1=(int)this;

int iVar1;

iVar1=*(int*)(param_1+0x14);
*(undefined4*)(param_1+0x14)=0;
if(iVar1){
(*(int(__stdcall**)(int))(*g_026b0d94+0x24c))((int)(iVar1));
}
return;
}

struct C_00e57d70{
void sub_00e57d70();
};

// @baa 0x00e57d70
void C_00e57d70::sub_00e57d70(void)
{
int param_1=(int)this;

int iVar1;

iVar1=*(int*)(param_1+0x14);
*(undefined4*)(param_1+0x14)=0;
if(iVar1!=0){
(*(int(__stdcall**)(int))(*g_026b0d94+0x24c))((int)(iVar1));
}
return;
}

struct C_00e57e40{
void sub_00e57e40();
};

// @baa 0x00e57e40
void C_00e57e40::sub_00e57e40(void)
{
int param_1=(int)this;

int iVar1;

iVar1=*(int*)(0x14+param_1);
*(undefined4*)(param_1+0x14)=0;
if(iVar1){
(*(int(__stdcall**)(int))(*g_026b0d94+0x24c))((int)(iVar1));
}
return;
}

struct C_00e57f10{
void sub_00e57f10();
};

// @baa 0x00e57f10
void C_00e57f10::sub_00e57f10(void)
{
DWORD param_1=(int)this;

int iVar1;

iVar1=*(int*)(param_1+0x14);
*(undefined4*)(param_1+0x14)=0;
if(0!=iVar1){
(*(int(__stdcall**)(int))(*g_026b0d94+0x24c))((iVar1));
}
return;
}

struct C_00e57fe0{
void sub_00e57fe0();
};

// @baa 0x00e57fe0
void C_00e57fe0::sub_00e57fe0(void)
{
int param_1=(int)this;

int iVar1;

iVar1=*(int*)(param_1+0x14);
*(undefined4*)(param_1+0x14)=0;
if(iVar1!=0){
(*(int(__stdcall**)(int))(*g_026b0d94+0x24c))((int)(iVar1));
}
return;
}

struct C_00e580b0{
void sub_00e580b0();
};

// @baa 0x00e580b0
void C_00e580b0::sub_00e580b0(void)
{
int param_1=(int)this;

int iVar1;

iVar1=*(int*)(param_1+0x14);
*(undefined4*)(0x14+param_1)=0;
if(iVar1!=0){
(*(int(__stdcall**)(int))(*g_026b0d94+0x24c))((int)(iVar1));
}
return;
}

struct C_00e58180{
void sub_00e58180();
};

// @baa 0x00e58180
void C_00e58180::sub_00e58180(void)
{
int param_1=(int)this;

int iVar1;

iVar1=*(int*)(param_1+0x14);
*(undefined4*)(param_1+0x14)=0;
if(iVar1!=0){
(*(int(__stdcall**)(int))(*g_026b0d94+0x24c))((int)(iVar1));
}
return;
}

struct C_00e58250{
void sub_00e58250();
};

// @baa 0x00e58250
void C_00e58250::sub_00e58250(void)
{
int param_1=(int)this;

int iVar1;

iVar1=*(int*)(param_1+0x14);
*(undefined4*)(param_1+0x14)=0;
if(iVar1){
(*(int(__stdcall**)(int))(*g_026b0d94+0x24c))((int)(iVar1));
}
return;
}

struct C_00e58320{
void sub_00e58320();
};

// @baa 0x00e58320
void C_00e58320::sub_00e58320(void)
{
int param_1=(int)this;

int iVar1;

iVar1=*(int*)(param_1+0x14);
*(undefined4*)(param_1+0x14)=0;
if(iVar1!=0){
(*(int(__stdcall**)(int))(*g_026b0d94+0x24c))((int)(iVar1));
}
return;
}

struct C_00e58340 {
    undefined4 sub_00e58340(byte);
    int sub_0040fcc0();
};

// @baa 0x00e58340
undefined4 C_00e58340::sub_00e58340(byte param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_00e58340 *)(((char *)this + 0xc)))->sub_0040fcc0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

void sub_0040fcc0();
// @baa 0x00e58370
void sub_00e58370(void) { sub_0040fcc0(); }

struct C_00e58450 {
    int sub_00e58450(int);
};

// @baa 0x00e58450
int C_00e58450::sub_00e58450(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

struct C_00e58540 {
    int sub_00e58540(int);
};

// @baa 0x00e58540
int C_00e58540::sub_00e58540(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_00e58550 {
    int sub_00e58550();
};

// @baa 0x00e58550
int C_00e58550::sub_00e58550(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x14;
}

struct C_00e58580 {
    int sub_00e58580(int);
};

// @baa 0x00e58580
int C_00e58580::sub_00e58580(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

struct C_00e585f0 {
    int sub_00e585f0();
};

// @baa 0x00e585f0
int C_00e585f0::sub_00e585f0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x14;
}

struct C_00e58600 {
    int sub_00e58600();
};

// @baa 0x00e58600
int C_00e58600::sub_00e58600(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return param_1[5] * 0x10 + *(int *)*param_1;
}

struct C_00e58610 {
    int sub_00e58610();
};

// @baa 0x00e58610
int C_00e58610::sub_00e58610(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x14;
}

struct M_00e5b8f0 { void sub_00e578f0(); };

struct C_00e5b8f0 { char pad[24]; M_00e5b8f0 m; void sub_00e5b8f0(); };

// @baa 0x00e5b8f0
void C_00e5b8f0::sub_00e5b8f0() { m.sub_00e578f0(); }

struct C_00e5b9d0 {
    void sub_00e5b9d0(undefined4);
};

int sub_00e58730(...);
// @baa 0x00e5b9d0
void C_00e5b9d0::sub_00e5b9d0(undefined4 param_2)
{
    int param_1 = (int)this;

  sub_00e58730(param_2,param_1 + 0x44);
  return;
}

struct C_00e5b9f0 {
    void sub_00e5b9f0(undefined4);
};

// @baa 0x00e5b9f0
void C_00e5b9f0::sub_00e5b9f0(undefined4 param_2)
{
    int param_1 = (int)this;

  sub_00e58730(param_2,param_1 + 0x2c);
  return;
}

struct C_00e5ba10 {
    undefined4 sub_00e5ba10();
    int sub_00e4c150(int);
};

int __stdcall sub_00e5a8d0(...);
// @baa 0x00e5ba10
undefined4 C_00e5ba10::sub_00e5ba10(void)
{
    int param_1 = (int)this;
  int *piVar1;
  int iVar2;
  piVar1 = *(int **)(param_1 + 4);
  ((C_00e5ba10 *)((*(char **)((char *)this + 8))))->sub_00e4c150((int)(piVar1));
  iVar2 = *(int *)(param_1 + 0x10);
  if ((2 < iVar2) && (*piVar1 != iVar2)) {
    *piVar1 = iVar2;
    sub_00e5a8d0(**(undefined4 **)(param_1 + 0xc),iVar2);
  }
  return 0x14;
}

struct C_00e61580 {
    undefined4 sub_00e61580(byte);
};

int sub_00e5b900(void);
// @baa 0x00e61580
undefined4 C_00e61580::sub_00e61580(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00e5b900();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_005c7a70(...);
int sub_0072ef30(void);
// @baa 0x00e644d0
undefined4 UTexture2D::sub_00e644d0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0072ef30();
  if ((param_2 & 1) != 0) {
    sub_005c7a70(param_1,0x100);
  }
  return param_1;
}

struct C_00e64500 { C_00e64500* sub_00e64500(void); };

// @baa 0x00e64500
C_00e64500* C_00e64500::sub_00e64500(void) { return this; }

struct C_00e64510 { C_00e64510* sub_00e64510(void); };

// @baa 0x00e64510
C_00e64510* C_00e64510::sub_00e64510(void) { return this; }

struct TBitArray {
    int* AllocatorData;
    int NumBits;
    int MaxBits;
    int InlineData[4];
};

struct FBitIterator {
    int WordIndex;
    int Mask;
    const int* WordData;
    int UnvisitedMask;
    int CurrentIndex;
    int BaseIndex;

    FBitIterator(const TBitArray& Array, int StartIndex)
        : WordIndex(StartIndex >> 5)
        , Mask(1 << (StartIndex & 31))
        , WordData(Array.InlineData)
        , UnvisitedMask(~0 << (StartIndex & 31))
        , CurrentIndex(StartIndex)
        , BaseIndex(StartIndex & ~31)
    {
    }
    void FindFirstSetBit();
    void Advance()
    {
        UnvisitedMask &= ~Mask;
        FindFirstSetBit();
    }
};

struct TConstSetBitIterator_00e64550 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00e64550(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00e64550& operator++();
};

TConstSetBitIterator_00e64550::TConstSetBitIterator_00e64550(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00e64550
TConstSetBitIterator_00e64550& TConstSetBitIterator_00e64550::operator++()
{
    It.Advance();
    return *this;
}

struct S_00e64570 { int sub_00e62bd0(); };

struct C_00e64570 { int a; C_00e64570(S_00e64570 *); };

// @baa 0x00e64570
C_00e64570::C_00e64570(S_00e64570 *s) : a(s->sub_00e62bd0()) {}

struct S_00e64590 { int sub_00e62c30(); };

struct C_00e64590 { int a; C_00e64590(S_00e64590 *); };

// @baa 0x00e64590
C_00e64590::C_00e64590(S_00e64590 *s) : a(s->sub_00e62c30()) {}

struct S_00e645b0 { int sub_00e62c90(); };

struct C_00e645b0 { int a; C_00e645b0(S_00e645b0 *); };

// @baa 0x00e645b0
C_00e645b0::C_00e645b0(S_00e645b0 *s) : a(s->sub_00e62c90()) {}

struct S_00e645d0 { int sub_00e62cf0(); };

struct C_00e645d0 { int a; C_00e645d0(S_00e645d0 *); };

// @baa 0x00e645d0
C_00e645d0::C_00e645d0(S_00e645d0 *s) : a(s->sub_00e62cf0()) {}

struct S_00e645f0 { int sub_00e62d50(); };

struct C_00e645f0 { int a; C_00e645f0(S_00e645f0 *); };

// @baa 0x00e645f0
C_00e645f0::C_00e645f0(S_00e645f0 *s) : a(s->sub_00e62d50()) {}

struct S_00e64610 { int sub_00e62db0(); };

struct C_00e64610 { int a; C_00e64610(S_00e64610 *); };

// @baa 0x00e64610
C_00e64610::C_00e64610(S_00e64610 *s) : a(s->sub_00e62db0()) {}

struct S_00e64630 { int sub_00e62e10(); };

struct C_00e64630 { int a; C_00e64630(S_00e64630 *); };

// @baa 0x00e64630
C_00e64630::C_00e64630(S_00e64630 *s) : a(s->sub_00e62e10()) {}

struct S_00e64650 { int sub_00e62e70(); };

struct C_00e64650 { int a; C_00e64650(S_00e64650 *); };

// @baa 0x00e64650
C_00e64650::C_00e64650(S_00e64650 *s) : a(s->sub_00e62e70()) {}

struct S_00e64670 { int sub_00e62ed0(); };

struct C_00e64670 { int a; C_00e64670(S_00e64670 *); };

// @baa 0x00e64670
C_00e64670::C_00e64670(S_00e64670 *s) : a(s->sub_00e62ed0()) {}

struct S_00e64690 { int sub_00e62f30(); };

struct C_00e64690 { int a; C_00e64690(S_00e64690 *); };

// @baa 0x00e64690
C_00e64690::C_00e64690(S_00e64690 *s) : a(s->sub_00e62f30()) {}

struct S_00e646b0 { int sub_00e62f90(); };

struct C_00e646b0 { int a; C_00e646b0(S_00e646b0 *); };

// @baa 0x00e646b0
C_00e646b0::C_00e646b0(S_00e646b0 *s) : a(s->sub_00e62f90()) {}

struct S_00e646d0 { int sub_00e62ff0(); };

struct C_00e646d0 { int a; C_00e646d0(S_00e646d0 *); };

// @baa 0x00e646d0
C_00e646d0::C_00e646d0(S_00e646d0 *s) : a(s->sub_00e62ff0()) {}

struct S_00e646f0 { int sub_00e63050(); };

struct C_00e646f0 { int a; C_00e646f0(S_00e646f0 *); };

// @baa 0x00e646f0
C_00e646f0::C_00e646f0(S_00e646f0 *s) : a(s->sub_00e63050()) {}

struct S_00e64710 { int sub_00e630b0(); };

struct C_00e64710 { int a; C_00e64710(S_00e64710 *); };

// @baa 0x00e64710
C_00e64710::C_00e64710(S_00e64710 *s) : a(s->sub_00e630b0()) {}

struct S_00e64730 { int sub_00e63110(); };

struct C_00e64730 { int a; C_00e64730(S_00e64730 *); };

// @baa 0x00e64730
C_00e64730::C_00e64730(S_00e64730 *s) : a(s->sub_00e63110()) {}

struct S_00e64750 { int sub_00e63170(); };

struct C_00e64750 { int a; C_00e64750(S_00e64750 *); };

// @baa 0x00e64750
C_00e64750::C_00e64750(S_00e64750 *s) : a(s->sub_00e63170()) {}

struct S_00e64770 { int sub_00e631d0(); };

struct C_00e64770 { int a; C_00e64770(S_00e64770 *); };

// @baa 0x00e64770
C_00e64770::C_00e64770(S_00e64770 *s) : a(s->sub_00e631d0()) {}

struct S_00e64790 { int sub_00e63230(); };

struct C_00e64790 { int a; C_00e64790(S_00e64790 *); };

// @baa 0x00e64790
C_00e64790::C_00e64790(S_00e64790 *s) : a(s->sub_00e63230()) {}

struct S_00e647b0 { int sub_00e63290(); };

struct C_00e647b0 { int a; C_00e647b0(S_00e647b0 *); };

// @baa 0x00e647b0
C_00e647b0::C_00e647b0(S_00e647b0 *s) : a(s->sub_00e63290()) {}

struct S_00e647d0 { int sub_00e632f0(); };

struct C_00e647d0 { int a; C_00e647d0(S_00e647d0 *); };

// @baa 0x00e647d0
C_00e647d0::C_00e647d0(S_00e647d0 *s) : a(s->sub_00e632f0()) {}

struct S_00e647f0 { int sub_00e63350(); };

struct C_00e647f0 { int a; C_00e647f0(S_00e647f0 *); };

// @baa 0x00e647f0
C_00e647f0::C_00e647f0(S_00e647f0 *s) : a(s->sub_00e63350()) {}

struct C_00e64c10 {
    int sub_00e64c10();
};

int sub_00e5ee70(void);
// @baa 0x00e64c10
int C_00e64c10::sub_00e64c10(void)
{
    int param_1 = (int)this;

  sub_00e5ee70();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_00e64d90 {
    int sub_00e64d90();
};

int sub_00e5eed0(void);
// @baa 0x00e64d90
int C_00e64d90::sub_00e64d90(void)
{
    int param_1 = (int)this;

  sub_00e5eed0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

void sub_00e66d00();
// @baa 0x00e69740
void sub_00e69740(void) { sub_00e66d00(); }

struct C_00e6bc10 {
    undefined4 sub_00e6bc10();
    int sub_00e69780(int, int, int, int, int);
};

// @baa 0x00e6bc10
undefined4 C_00e6bc10::sub_00e6bc10(void)
{
    int param_1 = (int)this;
  ((C_00e6bc10 *)((*(char **)((char *)this + 4))))->sub_00e69780(*(undefined4 *)(param_1 + 8), *(undefined4 *)(param_1 + 0xc), *(undefined4 *)(param_1 + 0x10), *(undefined4 *)(param_1 + 0x14), *(undefined4 *)(param_1 + 0x18));
  return 0x1c;
}

struct C_00e6bc40 {
    undefined4 sub_00e6bc40();
    int sub_00e69b30(int, int);
};

// @baa 0x00e6bc40
undefined4 C_00e6bc40::sub_00e6bc40(void)
{
    int param_1 = (int)this;
  ((C_00e6bc40 *)((*(char **)((char *)this + 0xc))))->sub_00e69b30(*(undefined4 *)(param_1 + 4), *(undefined4 *)(param_1 + 8));
  return 0x10;
}

struct C_018db8d0 {
    void sub_018db8d0(undefined1, undefined1, undefined1, undefined1);
};

// @baa 0x018db8d0
void C_018db8d0::sub_018db8d0(undefined1 param_2, undefined1 param_3, undefined1 param_4, undefined1 param_5)
{
    undefined1 * param_1 = (undefined1 *)this;

  param_1[2] = param_2;
  param_1[1] = param_3;
  *param_1 = param_4;
  param_1[3] = param_5;
  return;
}

struct D_01e257e0 { void sub_00e47950(); };

extern D_01e257e0 g_026cb0cc;
// @baa 0x01e257e0
void sub_01e257e0() { g_026cb0cc.sub_00e47950(); }

struct D_01e257f0 { void sub_00e478d0(); };

extern D_01e257f0 g_026cb0b0;
// @baa 0x01e257f0
void sub_01e257f0() { g_026cb0b0.sub_00e478d0(); }

struct D_01e25800 { void sub_00e47850(); };

extern D_01e25800 g_026cb094;
// @baa 0x01e25800
void sub_01e25800() { g_026cb094.sub_00e47850(); }

struct D_01e25810 { void sub_00e477d0(); };

extern D_01e25810 g_026cb078;
// @baa 0x01e25810
void sub_01e25810() { g_026cb078.sub_00e477d0(); }

struct D_01e25820 { void sub_00e47750(); };

extern D_01e25820 g_026cb05c;
// @baa 0x01e25820
void sub_01e25820() { g_026cb05c.sub_00e47750(); }

struct D_01e25830 { void sub_00e476d0(); };

extern D_01e25830 g_026cb040;
// @baa 0x01e25830
void sub_01e25830() { g_026cb040.sub_00e476d0(); }

struct D_01e25840 { void sub_00e47650(); };

extern D_01e25840 g_026cb024;
// @baa 0x01e25840
void sub_01e25840() { g_026cb024.sub_00e47650(); }

struct D_01e25850 { void sub_00e475d0(); };

extern D_01e25850 g_026cb008;
// @baa 0x01e25850
void sub_01e25850() { g_026cb008.sub_00e475d0(); }

struct D_01e25860 { void sub_00e47550(); };

extern D_01e25860 g_026cafec;
// @baa 0x01e25860
void sub_01e25860() { g_026cafec.sub_00e47550(); }

struct D_01e25870 { void sub_00e474d0(); };

extern D_01e25870 g_026cafd0;
// @baa 0x01e25870
void sub_01e25870() { g_026cafd0.sub_00e474d0(); }

struct D_01e25880 { void sub_00e47450(); };

extern D_01e25880 g_026cafb4;
// @baa 0x01e25880
void sub_01e25880() { g_026cafb4.sub_00e47450(); }
