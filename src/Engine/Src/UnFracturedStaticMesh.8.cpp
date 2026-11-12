// UnFracturedStaticMesh.cpp: 8 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

struct C_007a5160
{
    float X;
    float Y;
    float Z;

    C_007a5160& sub_007a5160(const C_007a5160& Other);
};

// @baa 0x007a5160
C_007a5160& C_007a5160::sub_007a5160(const C_007a5160& Other)
{
    X = Other.X;
    Y = Other.Y;
    Z = Other.Z;
    return *this;
}

static void use_007a5160(C_007a5160& A, const C_007a5160& B)
{
    A.sub_007a5160(B);
}

int sub_008038f0(void);
// @baa 0x007a7ac0
undefined4 AFracturedStaticMeshPart::vf_178(void)
{
    int param_1 = (int)this;

  int iVar1;
  
  if ((*(byte *)(param_1 + 0x238) & 1) == 0) {
    iVar1 = sub_008038f0();
    if (iVar1 == 0) {
      return 0;
    }
  }
  return 1;
}

extern float g_026c0dd4;
// @baa 0x007a7b30
float AFractureManager::vf_354(void) { return g_026c0dd4; }

extern float g_026c0dd8;
// @baa 0x007a7b40
float AFractureManager::vf_358(void) { return g_026c0dd8; }

extern float g_026c0ddc;
// @baa 0x007a7b50
float AFractureManager::vf_35c() {
    return g_026c0ddc;
}

extern float g_026c0de0;
// @baa 0x007a7b60
float AFractureManager::vf_360(void)
{
    return g_026c0de0;
}

struct C {
    undefined4 sub_007c3370();
};

int sub_007c2df0(...);
// @baa 0x007c3370
undefined4 C::sub_007c3370(void)
{
    int param_1 = (int)this;

  sub_007c2df0(*(undefined4 *)(param_1 + 4),param_1 + 8);
  return 0x14;
}

// @baa 0x007a7ae0
/* A fracture part's gravity is the zone's gravity scaled by FracPartGravScale. */
FLOAT AFracturedStaticMeshPart::GetGravityZ()
{
    return Super::GetGravityZ() * FracPartGravScale;
}
