// RAnimNode_Pose.cpp (part 4 of 4): 27 functions
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

struct URAnimNode_Pose_Pose : public URAnimNode_Pose {
    virtual void vf_24c(FLOAT Delta);
};

// @baa 0x01595bd0
void URAnimNode_Pose_Pose::vf_24c(FLOAT Delta)
{
    MovementOutput.ProceduralMovement.AddYawVelocity += Delta;
}

// URAnimNode_Pose::AddYaw (vtable 0x250): the header declares the slot as
// vf_250(INT), but the code adds a FLOAT to the procedural AddYaw output.
struct URAnimNode_Pose__01595bf0 : public URAnimNode_Pose {
    virtual void AddYaw(FLOAT Amount);
};

// @baa 0x01595bf0
void URAnimNode_Pose__01595bf0::AddYaw(FLOAT Amount)
{
    MovementOutput.ProceduralMovement.AddYaw += Amount;
}

struct FPosePlayer_ : public FPosePlayer
{
    INT sub_015c8f40(USkeletalMeshComponent* Mesh);
};

// @baa 0x01595a80
INT URAnimNode_Pose::vf_204()
{
    return ((FPosePlayer_*)&PosePlayer)->sub_015c8f40(SkelComponent);
}

struct FPosePlayer__01595a90 : public FPosePlayer
{
    INT sub_015c9010(USkeletalMeshComponent* Mesh);
};

// @baa 0x01595a90
INT URAnimNode_Pose::vf_208()
{
    return ((FPosePlayer__01595a90*)&PosePlayer)->sub_015c9010(SkelComponent);
}

struct C_015b7d30
{
    INT A, B, C, D;
    C_015b7d30* sub_015b7d30(INT P);
};

// @baa 0x015b7d30
C_015b7d30* C_015b7d30::sub_015b7d30(INT P)
{
    A = 0;
    B = 0;
    C = 0;
    D = 0;
    return this;
}

struct C_015bcc20
{
    INT A, B, C, D, E;
    C_015bcc20* sub_015bcc20(INT P);
};

// @baa 0x015bcc20
C_015bcc20* C_015bcc20::sub_015bcc20(INT P)
{
    A = 0;
    B = 0;
    C = 0;
    D = 0;
    E = 0;
    return this;
}

struct FPosePlayer__015956e0 : public FPosePlayer
{
    void sub_015c29f0(INT A);
};

// @baa 0x015956e0
INT URAnimNode_Pose::vf_1b0(INT A)
{
    ((FPosePlayer__015956e0*)&PosePlayer)->sub_015c29f0(A);
    return A;
}

struct FPosePlayer__01595710 : public FPosePlayer
{
    void sub_015c2a80(INT A);
};

// @baa 0x01595710
INT URAnimNode_Pose::vf_1b8(INT A)
{
    ((FPosePlayer__01595710*)&PosePlayer)->sub_015c2a80(A);
    return A;
}

struct C_015b5f10
{
    INT V0;
    INT A, B, C, D, E, F, G;
    C_015b5f10* sub_015b5f10();
};

// @baa 0x015b5f10
C_015b5f10* C_015b5f10::sub_015b5f10()
{
    A = 0;
    B = 0;
    C = 0;
    E = 0;
    F = 0;
    G = 0;
    return this;
}

struct C_015bcc00
{
    FLOAT A, B, C, D;
    C_015bcc00* sub_015bcc00(INT P);
};

// @baa 0x015bcc00
C_015bcc00* C_015bcc00::sub_015bcc00(INT P)
{
    A = 0.0f;
    B = 0.0f;
    C = 0.0f;
    D = 0.0f;
    return this;
}

struct FRagdollPlayer_ : public FRagdollPlayer
{
    INT sub_015d7a70(USkeletalMeshComponent* Skel, INT A, INT B);
};

// @baa 0x01596000
INT URAnimNode_Pose::vf_2d0(INT A, INT B)
{
    return ((FRagdollPlayer_*)&RagdollPlayer)->sub_015d7a70(SkelComponent, A, B);
}

struct C_015bcb00
{
    FLOAT A, B;
    INT C;
    INT sub_015bcb00();
};

// @baa 0x015bcb00
INT C_015bcb00::sub_015bcb00()
{
    if (C > 0 || (C == 0 && A >= B))
        return 1;
    return 0;
}

struct C_Elem28
{
    FLOAT F;
    BYTE Pad[24];
};

struct C_015998c0
{
    BYTE Pad[0x18];
    C_Elem28 Arr[7];
    void sub_015998c0(FLOAT* Out, INT Idx);
};

// @baa 0x015998c0
void C_015998c0::sub_015998c0(FLOAT* Out, INT Idx)
{
    FLOAT V = Arr[Idx].F;
    *Out = V;
}

struct C_015c1d60
{
    BYTE Pad[0x598];
    FLOAT F598;
    BYTE Pad2[0x14];
    FLOAT F5b0;
    INT sub_015c1d60();
};

// @baa 0x015c1d60
INT C_015c1d60::sub_015c1d60()
{
    if (F598 > F5b0)
        return 1;
    return 0;
}

struct C_P_0c
{
    BYTE Pad[0xc];
    FLOAT F;
};

struct C_015b9a30
{
    BYTE Pad[0xc];
    FLOAT F;
    C_015b9a30* sub_015b9a30(C_P_0c* P);
    void sub_015b7c30(C_P_0c* P);
};

// @baa 0x015b9a30
C_015b9a30* C_015b9a30::sub_015b9a30(C_P_0c* P)
{
    sub_015b7c30(P);
    F = P->F;
    return this;
}

struct C_Sub4_bbd0
{
    void sub_015b5bd0(FLOAT* P);
};

struct C_015b5d20
{
    FLOAT F0;
    C_Sub4_bbd0 Sub4;
    C_015b5d20* sub_015b5d20(FLOAT* P);
};

// @baa 0x015b5d20
C_015b5d20* C_015b5d20::sub_015b5d20(FLOAT* P)
{
    FLOAT V = *P;
    F0 = V;
    Sub4.sub_015b5bd0(P + 1);
    return this;
}

struct C_015bc010
{
    INT sub_005c1a10(INT P);
    void sub_015bbb90(INT P, INT Z);
    void sub_015bc010(UINT P);
};

// @baa 0x015bc010
void C_015bc010::sub_015bc010(UINT P)
{
    sub_005c1a10((INT)P);
    sub_015bbb90((INT)P, 0);
}
