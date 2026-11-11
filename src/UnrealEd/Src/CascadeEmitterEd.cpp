// CascadeEmitterEd.cpp: 20 functions
// Placed here by: callers 11, neighbours 8, file 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

int sub_00b9db00(...);
int sub_00b9fb90(void);
extern undefined4 g_026bf74c;
// @baa 0x00b318e0
int sub_00b318e0(void)
{
  if (g_026bf74c == 0) {
    g_026bf74c = sub_00b9db00(L"Engine");
    sub_00b9fb90();
  }
  return g_026bf74c;
}

struct C {
    void sub_0129e9e0(undefined4, undefined4);
};

// @baa 0x0129e9e0
void C::sub_0129e9e0(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;

  *(undefined4 *)(param_1 + 0x344) = param_2;
  *(undefined4 *)(param_1 + 0x340) = param_3;
  return;
}

extern undefined4 g_026af518;
extern undefined4 g_026af51c;
extern undefined4 g_026af520;
extern undefined4 g_026d69f8;
extern undefined4 g_026d69fc;
extern undefined4 g_026d6a00;
// @baa 0x012c0c90
undefined * sub_012c0c90(void)
{
  if ((g_026d6a00 & 1) == 0) {
    g_026d6a00 = g_026d6a00 | 1;
    if ((g_026af520 & 1) == 0) {
      g_026af520 = g_026af520 | 1;
      g_026af518 = 0;
      g_026af51c = (undefined4)(L"HHitProxy");
    }
    g_026d69f8 = (undefined4)(&g_026af518);
    g_026d69fc = (undefined4)(L"HCascadeEmitterProxy");
  }
  return (undefined *)(&g_026d69f8);
}

int sub_0053dfa0(...);
int sub_00c38ac0(void);
// @baa 0x012c0cf0
undefined4 UObject::sub_012c0cf0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00c38ac0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

extern undefined4 g_026d6a04;
extern undefined4 g_026d6a08;
extern undefined4 g_026d6a0c;
// @baa 0x012c0d10
undefined * sub_012c0d10(void)
{
  if ((g_026d6a0c & 1) == 0) {
    g_026d6a0c = g_026d6a0c | 1;
    if ((g_026af520 & 1) == 0) {
      g_026af520 = g_026af520 | 1;
      g_026af518 = 0;
      g_026af51c = (undefined4)(L"HHitProxy");
    }
    g_026d6a04 = (undefined4)(&g_026af518);
    g_026d6a08 = (undefined4)(L"HCascadeModuleProxy");
  }
  return (undefined *)(&g_026d6a04);
}

// @baa 0x012c0d70
undefined4 UObject::sub_012c0d70(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00c38ac0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

extern undefined4 g_026d6a10;
extern undefined4 g_026d6a14;
extern undefined4 g_026d6a18;
// @baa 0x012c0d90
undefined * sub_012c0d90(void)
{
  if ((g_026d6a18 & 1) == 0) {
    g_026d6a18 = g_026d6a18 | 1;
    if ((g_026af520 & 1) == 0) {
      g_026af520 = g_026af520 | 1;
      g_026af518 = 0;
      g_026af51c = (undefined4)(L"HHitProxy");
    }
    g_026d6a10 = (undefined4)(&g_026af518);
    g_026d6a14 = (undefined4)(L"HCascadeEmitterEnableProxy");
  }
  return (undefined *)(&g_026d6a10);
}

// @baa 0x012c0df0
undefined4 UObject::sub_012c0df0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00c38ac0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

extern undefined4 g_026d6a1c;
extern undefined4 g_026d6a20;
extern undefined4 g_026d6a24;
// @baa 0x012c0e10
undefined * sub_012c0e10(void)
{
  if ((g_026d6a24 & 1) == 0) {
    g_026d6a24 = g_026d6a24 | 1;
    if ((g_026af520 & 1) == 0) {
      g_026af520 = g_026af520 | 1;
      g_026af518 = 0;
      g_026af51c = (undefined4)(L"HHitProxy");
    }
    g_026d6a1c = (undefined4)(&g_026af518);
    g_026d6a20 = (undefined4)(L"HCascadeDrawModeButtonProxy");
  }
  return (undefined *)(&g_026d6a1c);
}

// @baa 0x012c0e70
undefined4 UObject::sub_012c0e70(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00c38ac0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

extern undefined4 g_026d6a28;
extern undefined4 g_026d6a2c;
extern undefined4 g_026d6a30;
// @baa 0x012c0e90
undefined * sub_012c0e90(void)
{
  if ((g_026d6a30 & 1) == 0) {
    g_026d6a30 = g_026d6a30 | 1;
    if ((g_026af520 & 1) == 0) {
      g_026af520 = g_026af520 | 1;
      g_026af518 = 0;
      g_026af51c = (undefined4)(L"HHitProxy");
    }
    g_026d6a28 = (undefined4)(&g_026af518);
    g_026d6a2c = (undefined4)(L"HCascadeGraphButton");
  }
  return (undefined *)(&g_026d6a28);
}

// @baa 0x012c0ef0
undefined4 UObject::sub_012c0ef0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00c38ac0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

extern undefined4 g_026d6a34;
extern undefined4 g_026d6a38;
extern undefined4 g_026d6a3c;
// @baa 0x012c0f10
undefined * sub_012c0f10(void)
{
  if ((g_026d6a3c & 1) == 0) {
    g_026d6a3c = g_026d6a3c | 1;
    if ((g_026af520 & 1) == 0) {
      g_026af520 = g_026af520 | 1;
      g_026af518 = 0;
      g_026af51c = (undefined4)(L"HHitProxy");
    }
    g_026d6a34 = (undefined4)(&g_026af518);
    g_026d6a38 = (undefined4)(L"HCascadeColorButtonProxy");
  }
  return (undefined *)(&g_026d6a34);
}

// @baa 0x012c0f70
undefined4 UObject::sub_012c0f70(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00c38ac0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

extern undefined4 g_026d6a40;
extern undefined4 g_026d6a44;
extern undefined4 g_026d6a48;
// @baa 0x012c0f90
undefined * sub_012c0f90(void)
{
  if ((g_026d6a48 & 1) == 0) {
    g_026d6a48 = g_026d6a48 | 1;
    if ((g_026af520 & 1) == 0) {
      g_026af520 = g_026af520 | 1;
      g_026af518 = 0;
      g_026af51c = (undefined4)(L"HHitProxy");
    }
    g_026d6a40 = (undefined4)(&g_026af518);
    g_026d6a44 = (undefined4)(L"HCascade3DDrawModeButtonProxy");
  }
  return (undefined *)(&g_026d6a40);
}

// @baa 0x012c0ff0
undefined4 UObject::sub_012c0ff0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00c38ac0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

extern undefined4 g_026d6a4c;
extern undefined4 g_026d6a50;
extern undefined4 g_026d6a54;
// @baa 0x012c1010
undefined * sub_012c1010(void)
{
  if ((g_026d6a54 & 1) == 0) {
    g_026d6a54 = g_026d6a54 | 1;
    if ((g_026af520 & 1) == 0) {
      g_026af520 = g_026af520 | 1;
      g_026af518 = 0;
      g_026af51c = (undefined4)(L"HHitProxy");
    }
    g_026d6a4c = (undefined4)(&g_026af518);
    g_026d6a50 = (undefined4)(L"HCascadeEnableButtonProxy");
  }
  return (undefined *)(&g_026d6a4c);
}

// @baa 0x012c1070
undefined4 UObject::sub_012c1070(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00c38ac0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

extern undefined4 g_026d6a58;
extern undefined4 g_026d6a5c;
extern undefined4 g_026d6a60;
// @baa 0x012c1090
undefined * sub_012c1090(void)
{
  if ((g_026d6a60 & 1) == 0) {
    g_026d6a60 = g_026d6a60 | 1;
    if ((g_026af520 & 1) == 0) {
      g_026af520 = g_026af520 | 1;
      g_026af518 = 0;
      g_026af51c = (undefined4)(L"HHitProxy");
    }
    g_026d6a58 = (undefined4)(&g_026af518);
    g_026d6a5c = (undefined4)(L"HCascade3DDrawModeOptionsButtonProxy");
  }
  return (undefined *)(&g_026d6a58);
}

struct C_012c17d0 {
    void sub_012c17d0();
};

int sub_005eae70(...);
int sub_006311e0(...);
int sub_0072a530(void);
int sub_00733250(...);
extern undefined4 g_02226a14;
extern undefined4 g_02226bfc;
extern undefined4 g_02226cfc;
extern undefined4 g_02226dfc;
extern undefined4 g_02226f7c;
extern undefined4 g_02227080;
extern undefined4 g_02227190;
extern undefined4 g_022272a0;
extern undefined4 g_022273b0;
extern undefined4 g_02227510;
extern undefined4 g_026b2250;
// @baa 0x012c17d0
void C_012c17d0::sub_012c17d0(void)
{
    int param_1 = (int)this;

  undefined4 uVar1;
  int iVar2;
  
  if (g_026b2250 == 0) {
    g_026b2250 = sub_00733250(L"Engine");
    sub_0072a530();
  }
  uVar1 = sub_005eae70(g_026b2250,0,L"EditorMaterials.Cascade.CASC_Normal",0,0,0,1);
  *(undefined4 *)(param_1 + 0x374) = uVar1;
  if (g_026b2250 == 0) {
    g_026b2250 = sub_00733250(L"Engine");
    sub_0072a530();
  }
  uVar1 = sub_005eae70(g_026b2250,0,L"EditorMaterials.Cascade.CASC_Cross",0,0,0,1);
  *(undefined4 *)(param_1 + 0x378) = uVar1;
  if (g_026b2250 == 0) {
    g_026b2250 = sub_00733250(L"Engine");
    sub_0072a530();
  }
  uVar1 = sub_005eae70(g_026b2250,0,L"EditorMaterials.Cascade.CASC_Point",0,0,0,1);
  *(undefined4 *)(param_1 + 0x37c) = uVar1;
  if (g_026b2250 == 0) {
    g_026b2250 = sub_00733250(L"Engine");
    sub_0072a530();
  }
  uVar1 = sub_005eae70(g_026b2250,0,L"EditorMaterials.Cascade.CASC_None",0,0,0,1);
  *(undefined4 *)(param_1 + 0x380) = uVar1;
  if (g_026b2250 == 0) {
    g_026b2250 = sub_00733250(L"Engine");
    sub_0072a530();
  }
  uVar1 = sub_005eae70(g_026b2250,0,L"EditorMaterials.Cascade.CASC_CurveEd",0,0,0,1);
  *(undefined4 *)(param_1 + 900) = uVar1;
  if (g_026b2250 == 0) {
    g_026b2250 = sub_00733250(L"Engine");
    sub_0072a530();
  }
  uVar1 = sub_005eae70(g_026b2250,0,L"EditorMaterials.Cascade.CASC_ModuleEnable",0,0,0,1);
  *(undefined4 *)(param_1 + 0x388) = uVar1;
  if (g_026b2250 == 0) {
    g_026b2250 = sub_00733250(L"Engine");
    sub_0072a530();
  }
  uVar1 = sub_005eae70(g_026b2250,0,L"EditorMaterials.Cascade.CASC_ModuleDisable",0,0,0,1);
  *(undefined4 *)(param_1 + 0x38c) = uVar1;
  if (g_026b2250 == 0) {
    g_026b2250 = sub_00733250(L"Engine");
    sub_0072a530();
  }
  uVar1 = sub_005eae70(g_026b2250,0,L"EditorMaterials.Cascade.CASC_ModuleEnable",0,0,0,1);
  *(undefined4 *)(param_1 + 0x390) = uVar1;
  if (g_026b2250 == 0) {
    g_026b2250 = sub_00733250(L"Engine");
    sub_0072a530();
  }
  uVar1 = sub_005eae70(g_026b2250,0,L"EditorMaterials.Cascade.CASC_ModuleDisable",0,0,0,1);
  *(undefined4 *)(param_1 + 0x394) = uVar1;
  if (*(int *)(param_1 + 0x374) == 0) {
    sub_006311e0("IconTex[CASC_Icon_Render_Normal]",
                 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\CascadeEmitterEd.cpp"
                 ,0x2df,&g_02226a14);
  }
  if (*(int *)(param_1 + 0x378) == 0) {
    sub_006311e0("IconTex[CASC_Icon_Render_Cross]",
                 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\CascadeEmitterEd.cpp"
                 ,0x2e0,&g_02226bfc);
  }
  if (*(int *)(param_1 + 0x37c) == 0) {
    sub_006311e0("IconTex[CASC_Icon_Render_Point]",
                 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\CascadeEmitterEd.cpp"
                 ,0x2e1,&g_02226cfc);
  }
  if (*(int *)(param_1 + 0x380) == 0) {
    sub_006311e0("IconTex[CASC_Icon_Render_None]",
                 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\CascadeEmitterEd.cpp"
                 ,0x2e2,&g_02226dfc);
  }
  if (*(int *)(param_1 + 900) == 0) {
    sub_006311e0("IconTex[CASC_Icon_CurveEdit]",
                 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\CascadeEmitterEd.cpp"
                 ,0x2e3,&g_02226f7c);
  }
  if (*(int *)(param_1 + 0x388) == 0) {
    sub_006311e0("IconTex[CASC_Icon_3DDraw_Enabled]",
                 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\CascadeEmitterEd.cpp"
                 ,0x2e4,&g_02227080);
  }
  if (*(int *)(param_1 + 0x38c) == 0) {
    sub_006311e0("IconTex[CASC_Icon_3DDraw_Disabled]",
                 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\CascadeEmitterEd.cpp"
                 ,0x2e5,&g_02227190);
  }
  if (*(int *)(param_1 + 0x390) == 0) {
    sub_006311e0("IconTex[CASC_Icon_Module_Enabled]",
                 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\CascadeEmitterEd.cpp"
                 ,0x2e6,&g_022272a0);
  }
  if (*(int *)(param_1 + 0x394) == 0) {
    sub_006311e0("IconTex[CASC_Icon_Module_Disabled]",
                 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\CascadeEmitterEd.cpp"
                 ,0x2e7,&g_022273b0);
  }
  if (g_026b2250 == 0) {
    g_026b2250 = sub_00733250(L"Engine");
    sub_0072a530();
  }
  iVar2 = sub_005eae70(g_026b2250,0,L"EditorMaterials.Cascade.CASC_DisabledModule",0,0,0,1);
  *(int *)(param_1 + 0x398) = iVar2;
  if (iVar2 == 0) {
    sub_006311e0("TexModuleDisabledBackground",
                 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\CascadeEmitterEd.cpp"
                 ,0x2ea,&g_02227510);
  }
  return;
}
