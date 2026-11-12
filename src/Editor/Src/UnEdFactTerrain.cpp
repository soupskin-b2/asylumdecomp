// UnEdFactTerrain.cpp: 35 functions
// Placed here by: neighbours 15, callers 11, file 5.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x00f4cb20
void sub_00f4cb20(undefined4 * param_1)
{
  short sVar1;
  
  while( true ) {
    sVar1 = *(short *)*param_1;
    if ((sVar1 != 0x20) && (sVar1 != 9)) break;
    *param_1 = (undefined4)((short *)*param_1 + 1);
  }
  return;
}

int sub_005c7a20(void);
extern undefined * g_021586e8;
// @baa 0x00f4cb70
undefined4 * UObject::sub_00f4cb70(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_021586e8);
  return param_1;
}

// @baa 0x00f4cb90
void sub_00f4cb90(void) {  }

// @baa 0x00f4cba0
int UTerrainHeightMapFactory::vf_10c(int a0, int a1, int a2, int a3, int a4) { return 0; }

// @baa 0x00f4cbb0
int UTerrainHeightMapFactory::vf_110(int a0, int a1, int a2, int a3, int a4) { return 0; }

extern undefined * g_02158920;
// @baa 0x00f4cbc0
undefined4 * UObject::sub_00f4cbc0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_02158920);
  return param_1;
}

// @baa 0x00f4cbe0
IMPLEMENT_CLASS_AT(UTerrainHeightMapFactoryTextT3D, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Editor\\Src\\UnEdFactTerrain.cpp", 1558);

// @baa 0x00f4cc40
// @baa 0x00f4cc60
void sub_00f4cc60(void)
{
  return;
}

extern undefined * g_02158800;
// @baa 0x00f4cc70
undefined4 * UObject::sub_00f4cc70(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_02158800);
  return param_1;
}

// @baa 0x00f4cc90
void sub_00f4cc90(void) {  }

extern undefined * g_02158a38;
// @baa 0x00f4cca0
undefined4 * UObject::sub_00f4cca0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_02158a38);
  return param_1;
}

// @baa 0x00f4ccc0
IMPLEMENT_CLASS_AT(UTerrainHeightMapFactoryG16BMPT3D, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Editor\\Src\\UnEdFactTerrain.cpp", 1882);

// @baa 0x00f4cd20
// @baa 0x00f4cd40
void sub_00f4cd40(void)
{
  return;
}

// @baa 0x00f4cd50
void sub_00f4cd50(void) {  }

// @baa 0x00f4e510
IMPLEMENT_CLASS_AT(UTerrainHeightMapFactory, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Editor\\Src\\UnEdFactTerrain.cpp", 1489);

// @baa 0x00f4e530
// @baa 0x00f4e550
IMPLEMENT_CLASS_AT(UTerrainHeightMapFactoryG16BMP, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Editor\\Src\\UnEdFactTerrain.cpp", 1813);

// @baa 0x00f4e570
// @baa 0x00f4e6f0
// @baa 0x00f4e7b0
// @baa 0x00f4e8c0
int UTerrainHeightMapFactory::vf_000(void) { return 1; }

// @baa 0x00f4e8d0
bool UTerrainHeightMapFactory::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00f4e910
// @baa 0x00f4e9d0
int UTerrainHeightMapFactoryTextT3D::vf_000(void) { return 1; }

// @baa 0x00f4e9e0
// @baa 0x00f4eaa0
int UTerrainHeightMapFactoryG16BMP::vf_000(void) { return 1; }

// @baa 0x00f4eab0
void sub_004025d0(void*);
struct D { void* p; ~D(){ if(0) sub_004025d0(p);} };

void sub_0053dfa0(void*);
struct C { void* Data; int Num; int Max; void sub_00f5e0b0(); };

// @baa 0x00f5e0b0
void C::sub_00f5e0b0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

// @baa 0x00f657c0
IMPLEMENT_CLASS_AT(UTerrainFactory, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Editor\\Src\\UnEdFactTerrain.cpp", 1466);

// @baa 0x00f4ca80
int sub_00f4ca80(int a0, int a1) { return a1; }

// @baa 0x00f4eb70
int UTerrainHeightMapFactoryG16BMPT3D::vf_000(void) { return 1; }

// @baa 0x00f55400

// @baa 0x00f55510
bool UTerrainHeightMapFactoryG16BMPT3D::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}
