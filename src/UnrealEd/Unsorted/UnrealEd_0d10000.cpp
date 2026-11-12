// UnrealEd_0d10000.cpp: 12 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

struct S {
    void sub_00c38ac0();
    void sub_00d1ec60();
};

// @baa 0x00d1ec60
void S::sub_00d1ec60() { this->sub_00c38ac0(); }

struct C_view {
    int sub_00c407b0(int);
};

extern undefined4 g_020a7ad0;
// @baa 0x00d1ec70
undefined4 * UUnrealEdEngine::sub_00d1ec70(undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_view *)(this))->sub_00c407b0(2);
  param_1[4] = param_2;
  *param_1 = (undefined4)(&g_020a7ad0);
  param_1[5] = param_3;
  param_1[6] = param_4;
  return param_1;
}

extern undefined4 g_026af518;
extern undefined4 g_026af51c;
extern undefined4 g_026af520;
extern undefined4 g_026c585c;
extern undefined4 g_026c5860;
extern undefined4 g_026c5864;
// @baa 0x00d1eca0
undefined * sub_00d1eca0(void)
{
  if ((g_026c5864 & 1) == 0) {
    g_026c5864 = g_026c5864 | 1;
    if ((g_026af520 & 1) == 0) {
      g_026af520 = g_026af520 | 1;
      g_026af518 = 0;
      g_026af51c = (undefined4)(L"HHitProxy");
    }
    g_026c585c = (undefined4)(&g_026af518);
    g_026c5860 = (undefined4)(L"HInterpTrackKeypointProxy");
  }
  return (undefined *)(&g_026c585c);
}

// @baa 0x00d1ed00
int sub_00d1ed00(void) { return 3; }

void sub_00c38ac0();
// @baa 0x00d1ed10
void sub_00d1ed10(void) { sub_00c38ac0(); }

// @baa 0x00d1edc0
int sub_00d1edc0(void) { return 3; }

// @baa 0x00d1edd0
void sub_00d1edd0(void) { sub_00c38ac0(); }

int sub_005eae70(...);
int sub_006adc00(void);
int sub_006d6b80(...);
extern undefined4 g_026b0de0;
// @baa 0x00d1edf0
void sub_00d1edf0(void)
{
  if (g_026b0de0 == 0) {
    g_026b0de0 = sub_006d6b80(L"Engine");
    sub_006adc00();
  }
  sub_005eae70(g_026b0de0,0,L"EditorMaterials.MatineeGroups.MAT_Groups_Float_Mat",0,0,0,1);
  return;
}

extern undefined4 g_026c5874;
extern undefined4 g_026c5878;
extern undefined4 g_026c587c;
// @baa 0x00d1f6b0
undefined * sub_00d1f6b0(void)
{
  if ((g_026c587c & 1) == 0) {
    g_026c587c = g_026c587c | 1;
    if ((g_026af520 & 1) == 0) {
      g_026af520 = g_026af520 | 1;
      g_026af518 = 0;
      g_026af51c = (undefined4)(L"HHitProxy");
    }
    g_026c5874 = (undefined4)(&g_026af518);
    g_026c5878 = (undefined4)(L"HLinkedObjProxySpecial");
  }
  return (undefined *)(&g_026c5874);
}

// @baa 0x00d1f740
void sub_00d1f740(void) { sub_00c38ac0(); }

// @baa 0x00d1f770
IMPLEMENT_CLASS_AT(UOnlineStats, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnOnlineStats.cpp", 7);

extern INT g_025e3b40;
// @baa 0x00d1ede0
void __stdcall sub_00d1ede0(INT* Out, INT Unused)
{
    *Out = g_025e3b40;
}
