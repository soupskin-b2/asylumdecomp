// LensFlareEditorElementEd.cpp: 8 functions
// Placed here by: neighbours 4, callers 3, file 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

extern undefined4 g_026af518;
extern undefined4 g_026af51c;
extern undefined4 g_026af520;
extern undefined4 g_026dc550;
extern undefined4 g_026dc554;
extern undefined4 g_026dc558;
// @baa 0x0144f2d0
undefined * sub_0144f2d0(void)
{
  if ((g_026dc558 & 1) == 0) {
    g_026dc558 = g_026dc558 | 1;
    if ((g_026af520 & 1) == 0) {
      g_026af520 = g_026af520 | 1;
      g_026af518 = 0;
      g_026af51c = (undefined4)(L"HHitProxy");
    }
    g_026dc550 = (undefined4)(&g_026af518);
    g_026dc554 = (undefined4)(L"HLensFlareElementProxy");
  }
  return (undefined *)(&g_026dc550);
}

struct C_view {
    int sub_00c407b0(int);
};

extern undefined4 g_0229ccf8;
// @baa 0x0144f320
undefined4 * UUnrealEdEngine::sub_0144f320(undefined4 param_2, undefined4 param_3)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_view *)(this))->sub_00c407b0(2);
  param_1[4] = param_2;
  *param_1 = (undefined4)(&g_0229ccf8);
  param_1[5] = param_3;
  return param_1;
}

void sub_00c38ac0();
// @baa 0x0144f360
void sub_0144f360(void) { sub_00c38ac0(); }

extern undefined4 g_026dc55c;
extern undefined4 g_026dc560;
extern undefined4 g_026dc564;
// @baa 0x0144f370
undefined * sub_0144f370(void)
{
  if ((g_026dc564 & 1) == 0) {
    g_026dc564 = g_026dc564 | 1;
    if ((g_026af520 & 1) == 0) {
      g_026af520 = g_026af520 | 1;
      g_026af518 = 0;
      g_026af51c = (undefined4)(L"HHitProxy");
    }
    g_026dc55c = (undefined4)(&g_026af518);
    g_026dc560 = (undefined4)(L"HLensFlareElementEnableProxy");
  }
  return (undefined *)(&g_026dc55c);
}

extern undefined4 g_0229cd44;
// @baa 0x0144f3c0
undefined4 * UUnrealEdEngine::sub_0144f3c0(undefined4 param_2, undefined4 param_3)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_view *)(this))->sub_00c407b0(2);
  param_1[4] = param_2;
  *param_1 = (undefined4)(&g_0229cd44);
  param_1[5] = param_3;
  return param_1;
}

// @baa 0x0144f400
void sub_0144f400(void) { sub_00c38ac0(); }

extern undefined4 g_026dc568;
extern undefined4 g_026dc56c;
extern undefined4 g_026dc570;
// @baa 0x0144f410
undefined * sub_0144f410(void)
{
  if ((g_026dc570 & 1) == 0) {
    g_026dc570 = g_026dc570 | 1;
    if ((g_026af520 & 1) == 0) {
      g_026af520 = g_026af520 | 1;
      g_026af518 = 0;
      g_026af51c = (undefined4)(L"HHitProxy");
    }
    g_026dc568 = (undefined4)(&g_026af518);
    g_026dc56c = (undefined4)(L"HLensFlareElementColorButtonProxy");
  }
  return (undefined *)(&g_026dc568);
}

struct C {
    void sub_014509a0();
};

int sub_005eae70(...);
int sub_006311e0(...);
int sub_0072a530(void);
int sub_00733250(...);
extern undefined4 g_02295e24;
extern undefined4 g_0229602c;
extern undefined4 g_022961a4;
extern undefined4 g_026b2250;
// @baa 0x014509a0
void C::sub_014509a0(void)
{
    int param_1 = (int)this;

  undefined4 uVar1;
  int iVar2;
  
  if (g_026b2250 == 0) {
    g_026b2250 = sub_00733250(L"Engine");
    sub_0072a530();
  }
  uVar1 = sub_005eae70(g_026b2250,0,L"EditorMaterials.Cascade.CASC_ModuleEnable",0,0,0,1);
  *(undefined4 *)(param_1 + 0x358) = uVar1;
  if (g_026b2250 == 0) {
    g_026b2250 = sub_00733250(L"Engine");
    sub_0072a530();
  }
  uVar1 = sub_005eae70(g_026b2250,0,L"EditorMaterials.Cascade.CASC_ModuleDisable",0,0,0,1);
  *(undefined4 *)(param_1 + 0x35c) = uVar1;
  if (*(int *)(param_1 + 0x358) == 0) {
    sub_006311e0("IconTex[LFEDITOR_Icon_Module_Enabled]",
                 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\LensFlareEditorElementEd.cpp"
                 ,0x160,&g_02295e24);
  }
  if (*(int *)(param_1 + 0x35c) == 0) {
    sub_006311e0("IconTex[LFEDITOR_Icon_Module_Disabled]",
                 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\LensFlareEditorElementEd.cpp"
                 ,0x161,&g_0229602c);
  }
  if (g_026b2250 == 0) {
    g_026b2250 = sub_00733250(L"Engine");
    sub_0072a530();
  }
  iVar2 = sub_005eae70(g_026b2250,0,L"EditorMaterials.Cascade.CASC_DisabledModule",0,0,0,1);
  *(int *)(param_1 + 0x360) = iVar2;
  if (iVar2 == 0) {
    sub_006311e0("TexElementDisabledBackground",
                 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\LensFlareEditorElementEd.cpp"
                 ,0x165,&g_022961a4);
  }
  return;
}
