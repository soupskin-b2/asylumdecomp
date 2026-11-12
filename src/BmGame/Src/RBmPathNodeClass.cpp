// RBmPathNodeClass.cpp: 88 functions
// Placed here by: callers 17, file 17, neighbours 4.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x015dfec0
int ARBMPathNode_FenceJumpProxy::vf_188(void) { return 1; }

// @baa 0x015e0130
int ARBMPathNode_GapJump::vf_394(int a0, int a1) { return 0; }

// @baa 0x015e01b0
void ARBMPathNode_GapJump::vf_184(void)
{
    int param_1 = (int)this;

  *(undefined4 *)(param_1 + 0x2d4) = 0;
  *(undefined4 *)(param_1 + 0x2d8) = 0;
  *(undefined4 *)(param_1 + 0x2e0) = 0;
  *(undefined4 *)(param_1 + 0x2e4) = 0;
  return;
}

// @baa 0x015e0210
int ARBMPathNode_GapJumpProxy::vf_188(void) { return 1; }

// @baa 0x015f1f00
IMPLEMENT_CLASS_AT(URBMSpecialMove_ReachSpec, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RBmPathNodeClass.cpp", 18);

// @baa 0x015f24c0
// @baa 0x015f2f50
IMPLEMENT_CLASS_AT(URPairedCornerRenderingComponent, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RBmPathNodeClass.cpp", 36);

// @baa 0x015f31b0
// @baa 0x015f71f0
IMPLEMENT_CLASS_AT(AREndPointMarker, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RBmPathNodeClass.cpp", 32);

// @baa 0x015f75a0
IMPLEMENT_CLASS_AT(ARBMPathNode_CrossLevel, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RBmPathNodeClass.cpp", 15);

// @baa 0x015f75e0
IMPLEMENT_CLASS_AT(ARBMPathNode_SpecialMove, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RBmPathNodeClass.cpp", 17);

// @baa 0x015f7620
IMPLEMENT_CLASS_AT(ARBMPathNode_DisruptableDoor, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RBmPathNodeClass.cpp", 21);

// @baa 0x015f7660
IMPLEMENT_CLASS_AT(ARBMPathNode_Ladder, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RBmPathNodeClass.cpp", 20);

// @baa 0x015f76a0
IMPLEMENT_CLASS_AT(ARBMPathNode_VariablePositionTraverse, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RBmPathNodeClass.cpp", 23);

// @baa 0x015f76e0
IMPLEMENT_CLASS_AT(ARBMPathNode_FenceJump, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RBmPathNodeClass.cpp", 26);

// @baa 0x015f7720
IMPLEMENT_CLASS_AT(ARBMPathNode_GapJump, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RBmPathNodeClass.cpp", 29);

// @baa 0x015f7760
IMPLEMENT_CLASS_AT(ARBMPathNode_VariablePositionTraverseProxy, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RBmPathNodeClass.cpp", 24);

// @baa 0x015f77a0
IMPLEMENT_CLASS_AT(ARBMPathNode_FenceJumpProxy, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RBmPathNodeClass.cpp", 27);

// @baa 0x015f77e0
IMPLEMENT_CLASS_AT(ARBMPathNode_GapJumpProxy, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RBmPathNodeClass.cpp", 30);

// @baa 0x015f7820
IMPLEMENT_CLASS_AT(ARCornerPointBase, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RBmPathNodeClass.cpp", 34);

// @baa 0x015f7850
IMPLEMENT_CLASS_AT(ARCornerPoint, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RBmPathNodeClass.cpp", 35);

// @baa 0x015f7880
IMPLEMENT_CLASS_AT(ARCornerWallMarkerBase, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RBmPathNodeClass.cpp", 38);

// @baa 0x015f78b0
IMPLEMENT_CLASS_AT(ARCornerWallMarker, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RBmPathNodeClass.cpp", 39);

// @baa 0x015f9310
// @baa 0x015f93d0
// @baa 0x015f9490
// @baa 0x015f9550
// @baa 0x015f9610
// @baa 0x015f96d0
// @baa 0x015f9790
// @baa 0x015f9850
// @baa 0x015f9910
// @baa 0x015f99d0
// @baa 0x015f9a90
// @baa 0x015f9b50
// @baa 0x015f9c10
// @baa 0x015f9cd0
// @baa 0x015f9d90

// @baa 0x015deea0

// @baa 0x015defb0
int ARBMPathNode_CrossLevel::vf_000(void) { return 1; }

// @baa 0x015defc0
bool ARBMPathNode_CrossLevel::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x015df000

// @baa 0x015df110
int ARBMPathNode_SpecialMove::vf_000(void) { return 1; }

// @baa 0x015df120
bool ARBMPathNode_SpecialMove::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x015df160

// @baa 0x015df270
int URBMSpecialMove_ReachSpec::vf_000(void) { return 1; }

// @baa 0x015df280
bool URBMSpecialMove_ReachSpec::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x015df2c0
int ARBMPathNode_Ladder::vf_000(void) { return 1; }

// @baa 0x015df2d0
int ARBMPathNode_DisruptableDoor::vf_000(void) { return 1; }

// @baa 0x015df2e0
int ARBMPathNode_VariablePositionTraverse::vf_000(void) { return 1; }

// @baa 0x015df2f0
int ARBMPathNode_VariablePositionTraverseProxy::vf_000(void) { return 1; }

// @baa 0x015df300
int ARBMPathNode_FenceJump::vf_000(void) { return 1; }

// @baa 0x015df310
int ARBMPathNode_FenceJumpProxy::vf_000(void) { return 1; }

// @baa 0x015df320
int ARBMPathNode_GapJump::vf_000(void) { return 1; }

// @baa 0x015df330
int ARBMPathNode_GapJumpProxy::vf_000(void) { return 1; }

// @baa 0x015df340

// @baa 0x015df450
int AREndPointMarker::vf_000(void) { return 1; }

// @baa 0x015df460
bool AREndPointMarker::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x015df4a0

// @baa 0x015df5b0
int ARCornerPointBase::vf_000(void) { return 1; }

// @baa 0x015df5c0
bool ARCornerPointBase::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x015df600
int ARCornerPoint::vf_000(void) { return 1; }

// @baa 0x015df610

// @baa 0x015df720
int URPairedCornerRenderingComponent::vf_000(void) { return 1; }

// @baa 0x015df730
bool URPairedCornerRenderingComponent::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x015df770

// @baa 0x015df880
int ARCornerWallMarkerBase::vf_000(void) { return 1; }

// @baa 0x015df890
bool ARCornerWallMarkerBase::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x015df8d0
int ARCornerWallMarker::vf_000(void) { return 1; }

// @baa 0x015df920
int ARBMPathNode_VariablePositionTraverse::vf_3bc(int a0) { return 0; }

// @baa 0x015dfbc0
int ARBMPathNode_FenceJump::vf_394(int a0, int a1) { return 0; }

// @baa 0x015dfc40
void ARBMPathNode_FenceJump::vf_184(void)
{
    int param_1 = (int)this;

  *(undefined4 *)(param_1 + 0x2d4) = 0;
  *(undefined4 *)(param_1 + 0x2d8) = 0;
  *(undefined4 *)(param_1 + 0x2e0) = 0;
  *(undefined4 *)(param_1 + 0x2e4) = 0;
  return;
}

// @baa 0x015e0a90
void ARCornerPointBase::vf_184(void)
{
    int param_1 = (int)this;

  *(undefined4 *)(param_1 + 0x1a8) = 0;
  *(undefined4 *)(param_1 + 0x1ac) = 0;
  *(undefined4 *)(param_1 + 0x1b0) = 0;
  *(undefined4 *)(param_1 + 0x1b4) = 0;
  return;
}

struct C { void sub_00772150(int); void sub_015e0ab0(); };

// @baa 0x015e0ab0
void C::sub_015e0ab0() { sub_00772150(0); }

// @baa 0x015e0fd0
int URPairedCornerRenderingComponent::vf_200(void) { return 1; }

// @baa 0x015e1080
int ARCornerWallMarkerBase::vf_188(void) { return 1; }

int sub_0053dfa0(...);
int sub_006837e0(void);
// @baa 0x01605db0
undefined4 ULensFlare::sub_01605db0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_006837e0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x016013c0

// @baa 0x016014d0
bool ARBMPathNode_FenceJump::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x01601510

// @baa 0x01601620
bool ARBMPathNode_FenceJumpProxy::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x01601660

// @baa 0x01601770
bool ARBMPathNode_GapJump::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x016017b0

// @baa 0x016018c0
bool ARBMPathNode_GapJumpProxy::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x01605d70
int sub_01605d70(void) { return 1690; }

// @baa 0x01605d80
int ULensFlare::sub_01605d80(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 0x84) * 4;
}

// @baa 0x01605d90
int ULensFlare::sub_01605d90(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 0x84) * 4 + 0xe0;
}
