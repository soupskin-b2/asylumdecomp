// BmGameEnvironmentClasses.cpp: 50 functions
// Placed here by: callers 8, file 8.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x0172d7d0
IMPLEMENT_CLASS_AT(URHidePointRenderingComponent, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmGameEnvironmentClasses.cpp", 14);

// @baa 0x0172d7f0
IMPLEMENT_CLASS_AT(URPatrolPointRenderingComponent, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmGameEnvironmentClasses.cpp", 17);

// @baa 0x0172ee90
// @baa 0x0172ef50
// @baa 0x01733130
IMPLEMENT_CLASS_AT(ARHarpoonDragBase, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmGameEnvironmentClasses.cpp", 22);

// @baa 0x017331f0
IMPLEMENT_CLASS_AT(ARHarpoonDragPhysicsBase, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmGameEnvironmentClasses.cpp", 24);

// @baa 0x01733250
IMPLEMENT_CLASS_AT(ARPatrolPoint, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmGameEnvironmentClasses.cpp", 16);

// @baa 0x01733280
IMPLEMENT_CLASS_AT(ARSnapToPositionActor, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmGameEnvironmentClasses.cpp", 260);

// @baa 0x017332b0
IMPLEMENT_CLASS_AT(ARSpecialMoveEnvironmentObject, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmGameEnvironmentClasses.cpp", 19);

// @baa 0x01733350
IMPLEMENT_CLASS_AT(ARTunnelGrateBase, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmGameEnvironmentClasses.cpp", 20);

// @baa 0x017339d0
// @baa 0x01733a90
// @baa 0x01733b50
// @baa 0x01733c10
// @baa 0x01733cd0
// @baa 0x01733d90

// @baa 0x017156a0

// @baa 0x017157b0
int URHidePointRenderingComponent::vf_000(void) { return 1; }

// @baa 0x017157c0
bool URHidePointRenderingComponent::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x01715800

// @baa 0x01715910
int ARPatrolPoint::vf_000(void) { return 1; }

// @baa 0x01715920
bool ARPatrolPoint::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x01715960

// @baa 0x01715a70
int URPatrolPointRenderingComponent::vf_000(void) { return 1; }

// @baa 0x01715a80
bool URPatrolPointRenderingComponent::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x01715ac0

// @baa 0x01715bd0
int ARSpecialMoveEnvironmentObject::vf_000(void) { return 1; }

// @baa 0x01715be0
bool ARSpecialMoveEnvironmentObject::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x01715c20
int ARTunnelGrateBase::vf_000(void) { return 1; }

// @baa 0x01715c30

// @baa 0x01715d40
int ARHarpoonDragBase::vf_000(void) { return 1; }

// @baa 0x01715d50
bool ARHarpoonDragBase::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x01715d90

// @baa 0x01715ea0
int ARHarpoonDragPhysicsBase::vf_000(void) { return 1; }

// @baa 0x01715eb0
bool ARHarpoonDragPhysicsBase::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x01715ef0
int URHidePointRenderingComponent::vf_200(void) { return 1; }

struct C_01715f00 { void sub_00772150(int); void sub_01715f00(); };

// @baa 0x01715f00
void C_01715f00::sub_01715f00() { sub_00772150(0); }

// @baa 0x01716050
int URPatrolPointRenderingComponent::vf_200(void) { return 1; }

// @baa 0x01716060

// @baa 0x01728110
int sub_01728110(void) { return 1690; }

struct C_01728120 {
    int sub_01728120();
};

// @baa 0x01728120
int C_01728120::sub_01728120(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 0x84) * 4;
}

struct C_01728130 {
    int sub_01728130();
};

// @baa 0x01728130
int C_01728130::sub_01728130(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 0x84) * 4 + 0xe0;
}

void sub_006837e0();
// @baa 0x01728140
void sub_01728140(void) { sub_006837e0(); }

int sub_006f7810(void);
extern undefined * g_023ca0d0;
// @baa 0x0172ace0
undefined4 * UPrimitiveComponent::sub_0172ace0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_006f7810();
  *param_1 = (undefined4)(&g_023ca0d0);
  return param_1;
}

int sub_017156a0(void);
int sub_0172ee90(...);
extern undefined4 g_026e24bc;
// @baa 0x01731510
int sub_01731510(void)
{
  if (g_026e24bc == 0) {
    g_026e24bc = sub_0172ee90(L"BmGame");
    sub_017156a0();
  }
  return g_026e24bc;
}

int sub_01715960(void);
int sub_0172ef50(...);
extern undefined4 g_026e24c4;
// @baa 0x01731540
int sub_01731540(void)
{
  if (g_026e24c4 == 0) {
    g_026e24c4 = sub_0172ef50(L"BmGame");
    sub_01715960();
  }
  return g_026e24c4;
}

// @baa 0x01735290
int sub_01735290(void) { return 1690; }

// @baa 0x017352a0
int ULensFlare::sub_017352a0(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 0x84) * 4;
}

// @baa 0x017352b0
int ULensFlare::sub_017352b0(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 0x84) * 4 + 0xe0;
}

// @baa 0x017352c0
void sub_017352c0(void) { sub_006837e0(); }
