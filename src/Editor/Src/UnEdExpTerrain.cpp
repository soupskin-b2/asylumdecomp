// UnEdExpTerrain.cpp (part 1 of 2): 34 functions
// Placed here by: neighbours 19, class 10, file 4, callers 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x00f19ce0
int __stdcall sub_00f19ce0(int a0, int a1, int a2, int a3, int a4, int a5) { return 0; }

// @baa 0x00f1b0b0
IMPLEMENT_CLASS_AT(UTerrainHeightMapExporter, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Editor\\Src\\UnEdExpTerrain.cpp", 691);

// @baa 0x00f1b1c0
int UTerrainHeightMapExporter::vf_000(void) { return 1; }

// @baa 0x00f1b1d0
bool UTerrainHeightMapExporter::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00f1e5a0
IMPLEMENT_CLASS_AT(UTextureExporterBMP, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Editor\\Src\\UnEdFact.cpp", 6870);

// @baa 0x00f1e6b0
int UTextureExporterBMP::vf_000(void) { return 1; }

// @baa 0x00f1e6c0
bool UTextureExporterBMP::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00f1e700
IMPLEMENT_CLASS_AT(UTextureExporterTGA, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Editor\\Src\\UnEdFact.cpp", 6919);

// @baa 0x00f1e810
int UTextureExporterTGA::vf_000(void) { return 1; }

// @baa 0x00f1e820
bool UTextureExporterTGA::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00f1e860
IMPLEMENT_CLASS_AT(URenderTargetExporterTGA, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Editor\\Src\\UnEdFact.cpp", 6987);

// @baa 0x00f1e970
int URenderTargetExporterTGA::vf_000(void) { return 1; }

// @baa 0x00f1e980
bool URenderTargetExporterTGA::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00f1ead0
int sub_00f1ead0(void) { return 1; }

int sub_005fba80(void);
int sub_0060f7d0(...);
extern undefined4 g_026a4b34;
// @baa 0x00f1eae0
bool UTerrainHeightMapExporter::sub_00f1eae0(void)
{
    int param_1 = (int)this;

  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x28) + 0x30);
  if (g_026a4b34 == 0) {
    g_026a4b34 = sub_0060f7d0(L"Core");
    sub_005fba80();
  }
  return iVar1 != g_026a4b34;
}

// @baa 0x00f31920
// @baa 0x00f31980
int sub_0060b320(void);
extern undefined * g_0214cbe8;
// @baa 0x00f319a0
undefined4 * UExporter::sub_00f319a0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_0060b320();
  *param_1 = (undefined4)(&g_0214cbe8);
  return param_1;
}

extern undefined * g_0214cd18;
// @baa 0x00f319c0
undefined4 * UExporter::sub_00f319c0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_0060b320();
  *param_1 = (undefined4)(&g_0214cd18);
  return param_1;
}

// @baa 0x00f319e0
IMPLEMENT_CLASS_AT(UTerrainHeightMapExporterTextT3D, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Editor\\Src\\UnEdExpTerrain.cpp", 767);

// @baa 0x00f31a40
extern undefined * g_0214ce48;
// @baa 0x00f31a60
undefined4 * UExporter::sub_00f31a60(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_0060b320();
  *param_1 = (undefined4)(&g_0214ce48);
  return param_1;
}

// @baa 0x00f31a80
IMPLEMENT_CLASS_AT(UTerrainHeightMapExporterG16BMPT3D, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Editor\\Src\\UnEdExpTerrain.cpp", 921);

// @baa 0x00f31ae0
extern undefined * g_0214cf78;
// @baa 0x00f31b00
undefined4 * UExporter::sub_00f31b00(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_0060b320();
  *param_1 = (undefined4)(&g_0214cf78);
  return param_1;
}

int sub_005c7a70(...);
int sub_00f31b20(void);
// @baa 0x00f31b80
undefined4 UTerrainHeightMapExporter::sub_00f31b80(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00f31b20();
  if ((param_2 & 1) != 0) {
    sub_005c7a70(param_1,0x58);
  }
  return param_1;
}

// @baa 0x00f351e0
IMPLEMENT_CLASS_AT(UTerrainExporterT3D, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Editor\\Src\\UnEdExpTerrain.cpp", 637);

// @baa 0x00f35200
// @baa 0x00f35220
// @baa 0x00f35240
// @baa 0x00f35280
// @baa 0x00f35340
// @baa 0x00f35400
// @baa 0x00f354c0
