// RAnimNode_Pose.cpp (part 4 of 4): 10 functions
// Placed here by: neighbours 3, class 2, callers 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

struct C {
    void sub_015a23b0(int);
};

int sub_0053df70(...);
// @baa 0x015a23b0
void C::sub_015a23b0(int param_2)
{
    int * param_1 = (int *)this;

  int iVar1;
  
  param_1[1] = 0;
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if ((*param_1 != 0) || (param_2 != 0)) {
      iVar1 = sub_0053df70(*param_1,param_2 * 8,8);
      *param_1 = iVar1;
    }
  }
  return;
}

struct C_015a23f0 {
    void sub_015a23f0(int);
};

// @baa 0x015a23f0
void C_015a23f0::sub_015a23f0(int param_2)
{
    int * param_1 = (int *)this;

  int iVar1;
  
  param_1[1] = 0;
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if ((*param_1 != 0) || (param_2 != 0)) {
      iVar1 = sub_0053df70(*param_1,param_2 << 5,8);
      *param_1 = iVar1;
    }
  }
  return;
}

struct C_015a2430 {
    void sub_015a2430(int);
};

// @baa 0x015a2430
void C_015a2430::sub_015a2430(int param_2)
{
    int * param_1 = (int *)this;

  int iVar1;
  
  param_1[1] = 0;
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if ((*param_1 != 0) || (param_2 != 0)) {
      iVar1 = sub_0053df70(*param_1,param_2 << 6,8);
      *param_1 = iVar1;
    }
  }
  return;
}

// @baa 0x015a7730
void URAnimNode_Pose::sub_015a7730(int param_2)
{
    int * param_1 = (int *)this;

  int iVar1;
  
  param_1[1] = 0;
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if ((*param_1 != 0) || (param_2 != 0)) {
      iVar1 = sub_0053df70(*param_1,param_2 * 0x24,8);
      *param_1 = iVar1;
    }
  }
  return;
}

// @baa 0x015a7770
void URAnimNode_Pose::sub_015a7770(int param_2)
{
    int * param_1 = (int *)this;

  int iVar1;
  
  param_1[1] = 0;
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if ((*param_1 != 0) || (param_2 != 0)) {
      iVar1 = sub_0053df70(*param_1,param_2 * 0x24,8);
      *param_1 = iVar1;
    }
  }
  return;
}

struct C_015d43d0 {
    void sub_015d43d0();
};

// @baa 0x015d43d0
void C_015d43d0::sub_015d43d0(void)
{
    uint * param_1 = (uint *)this;

  uint uVar1;
  
  *param_1 = *param_1 | 1;
  param_1[4] = param_1[4] & 0xfffffffe;
  param_1[6] = 0;
  if (param_1[7] != 0) {
    param_1[7] = 0;
    if (param_1[5] != 0) {
      uVar1 = sub_0053df70(param_1[5],0,8);
      param_1[5] = uVar1;
    }
  }
  return;
}

// The weighted proportional-motion sample held at the end of RAnimUtil_AnimAccumulator
// (the accumulator is 0xe00 bytes; this field sits at 0xddc, the last 36 bytes of it).
struct FPoseProportionalMotion
{
	float PositionProportion[3];
	float TargetPosition[3];
	float RotationProportion[3];
};

struct RAnimUtil_AnimAccumulator_
{
	char Pad_0000[0xddc];
	FPoseProportionalMotion ProportionalMotion;

	void sub_01599c10(const FPoseProportionalMotion& InMotion);
};

// @baa 0x01599c10
// Copy the newest change's proportional motion into the accumulator.
void RAnimUtil_AnimAccumulator_::sub_01599c10(const FPoseProportionalMotion& InMotion)
{
	ProportionalMotion = InMotion;
}

// @baa 0x0159a3b0
// BmGame/Src/RAnimNode_Pose.cpp
// Small out-of-line predicate: true when a float is at least 0.999.
int sub_0159a3b0(int a, int b, float Value)
{
    return Value >= 0.999f;
}

// Slot vf_258 passes its argument in xmm0 (movss), so it is a FLOAT even though
// the header types it as INT.
struct URAnimNode_Pose_ : public URAnimNode_Pose {
    void sub_01595c40(FLOAT YawVelocity);
};

// @baa 0x01595c40
void URAnimNode_Pose_::sub_01595c40(FLOAT YawVelocity)
{
    MovementOutput.ProceduralMovement.OverrideYawVelocityEnabled = 1;
    MovementOutput.ProceduralMovement.OverrideYawVelocity = YawVelocity;
}

struct T_015be1f0 {
    void sub_015be1f0();
};

struct C_015c2be0 {
    int a;
    int b;
    char pad[0x5bc - 4];
    T_015be1f0 m;
    void sub_015c2be0();
};

// @baa 0x015c2be0
void C_015c2be0::sub_015c2be0()
{
    if (a == 0)
        return;
    int * p = &b;
    if (p == 0)
        return;
    ((T_015be1f0 *)((int)p + 0x5bc))->sub_015be1f0();
}
