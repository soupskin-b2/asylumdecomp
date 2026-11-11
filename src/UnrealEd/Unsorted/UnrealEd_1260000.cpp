// UnrealEd_1260000.cpp (part 1 of 2): 23 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x012603a0
IMPLEMENT_CLASS_AT(UArchetypeThumbnailRenderer, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\ThumbnailManager.cpp", 45);

// @baa 0x012604b0
bool UArchetypeThumbnailRenderer::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x012604f0
IMPLEMENT_CLASS_AT(UPrefabThumbnailRenderer, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\ThumbnailManager.cpp", 46);

// @baa 0x01260600
bool UPrefabThumbnailRenderer::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x01260640
IMPLEMENT_CLASS_AT(UUISceneThumbnailRenderer, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\ThumbnailManager.cpp", 48);

// @baa 0x01260750
bool UUISceneThumbnailRenderer::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

struct C { void sub_0098f3b0(int); C *sub_01262200(int); };

// @baa 0x01262200
C *C::sub_01262200(int a) { sub_0098f3b0(a); return this; }

struct C_0126de30 { C_0126de30* sub_0126de30(void); };

// @baa 0x0126de30
C_0126de30* C_0126de30::sub_0126de30(void) { return this; }

struct C_0126e090 {
    int sub_0126e090(undefined4, undefined4);
    int sub_0126d430(int, int);
};

// @baa 0x0126e090
int C_0126e090::sub_0126e090(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_0126e090 *)(this))->sub_0126d430(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct C_0126e0b0 {
    int sub_0126e0b0(undefined4, undefined4);
    int sub_0126d4b0(int, int);
};

// @baa 0x0126e0b0
int C_0126e0b0::sub_0126e0b0(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_0126e0b0 *)(this))->sub_0126d4b0(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct C_0126e0d0 {
    int sub_0126e0d0();
};

int sub_012626b0(void);
// @baa 0x0126e0d0
int C_0126e0d0::sub_0126e0d0(void)
{
    int param_1 = (int)this;

  sub_012626b0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

void sub_0126d560();
// @baa 0x0126e0f0
void sub_0126e0f0(void) { sub_0126d560(); }

struct C_0126e100 {
    int sub_0126e100();
};

int sub_0125f4b0(void);
// @baa 0x0126e100
int C_0126e100::sub_0126e100(void)
{
    int param_1 = (int)this;

  sub_0125f4b0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

void sub_0126de40();
// @baa 0x0126e120
void sub_0126e120(void) { sub_0126de40(); }

struct C_0126e130 { C_0126e130* sub_0126e130(void); };

// @baa 0x0126e130
C_0126e130* C_0126e130::sub_0126e130(void) { return this; }

void sub_0126deb0();
// @baa 0x0126f8a0
void sub_0126f8a0(void) { sub_0126deb0(); }

struct C_0126f930 {
    int sub_0126f930();
};

// @baa 0x0126f930
int C_0126f930::sub_0126f930(void)
{
    int param_1 = (int)this;

  sub_012626b0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x0126f950
void sub_0126f950(void) { sub_0126d560(); }

// @baa 0x0126f960
void sub_0126f960(void) { sub_0126de40(); }

// @baa 0x0126fc00
void sub_0126fc00(void) { sub_0126d560(); }

struct C_0126fc10 {
    int sub_0126fc10();
};

// @baa 0x0126fc10
int C_0126fc10::sub_0126fc10(void)
{
    int param_1 = (int)this;

  sub_012626b0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_0126fc30 {
    int sub_0126fc30();
};

// @baa 0x0126fc30
int C_0126fc30::sub_0126fc30(void)
{
    int param_1 = (int)this;

  sub_0125f4b0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x0126fc50
void sub_0126fc50(void) { sub_0126de40(); }
