// RAnimNode_Pose.cpp (part 4 of 4): 54 functions
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

extern double g_01e5f588;
struct C_015bcbd0
{
    void* P0;
    BYTE Pad[8];
    FLOAT F0c;
    INT sub_015bcbd0();
};

// @baa 0x015bcbd0
INT C_015bcbd0::sub_015bcbd0()
{
    if (F0c > g_01e5f588 && P0 != NULL)
        return 0;
    return 1;
}

struct C_X_20_b8ce0
{
    BYTE Pad[4];
    INT V4;
    BYTE Pad2[0x24];
    INT V2c;
    void sub_00bf5ad0(INT A, INT B);
};

struct C_015b8ce0
{
    BYTE Pad[0x20];
    C_X_20_b8ce0* X;
    INT F24;
    void* F28;
    void sub_015b8ce0();
};

// @baa 0x015b8ce0
void C_015b8ce0::sub_015b8ce0()
{
    if (F24 != 0 && F28 != NULL)
        X->sub_00bf5ad0(X->V4 - X->V2c, 1);
}

struct C_E40_1230
{
    FLOAT F;
    BYTE Pad[0x3c];
};

struct C_015c1230
{
    INT N;
    BYTE Pad[0x10];
    C_E40_1230 Arr[1];
    void sub_015c1230();
};

// @baa 0x015c1230
void C_015c1230::sub_015c1230()
{
    for (INT i = 0; i < N; i++)
        Arr[i].F = 0.0f;
}

// @baa 0x01595610
void __stdcall sub_01595610(DWORD* P)
{
    P[0] = 0;
    P[1] = 0;
    P[2] = 0;
    P[3] = 0;
    P[4] = 0;
    P[5] = 0;
    P[6] = 0;
    P[7] = 0;
}

struct C_Target_4380
{
    void sub_015d4380(FLOAT A, FLOAT B);
};

struct C_01596090
{
    BYTE Pad[0x2bc0];
    C_Target_4380 T;
    void sub_01596090(INT A1, FLOAT F2, FLOAT F3);
};

// @baa 0x01596090
void C_01596090::sub_01596090(INT A1, FLOAT F2, FLOAT F3)
{
    T.sub_015d4380(F2, F3);
}

struct C_P_2820
{
    BYTE Pad[0x624];
    FLOAT F624;
};

struct C_T_224_2820
{
    C_P_2820* sub_015c2820();
};

struct C_015960d0
{
    BYTE Pad[0x224];
    C_T_224_2820 T;
    void sub_015960d0(FLOAT F);
};

// @baa 0x015960d0
void C_015960d0::sub_015960d0(FLOAT F)
{
    C_P_2820* P = T.sub_015c2820();
    if (P != NULL)
        P->F624 = F;
}

struct C_015a94a0
{
    BYTE Pad[0xc];
    DWORD A, B, C, D, E, F, G, H, I, J;
    C_015a94a0* sub_015a94a0();
};

// @baa 0x015a94a0
C_015a94a0* C_015a94a0::sub_015a94a0()
{
    A = 0;
    B = 0;
    C = 0;
    D = 0;
    E = 0;
    F = 0;
    H = 0;
    I = 0;
    J = 0;
    return this;
}

struct C_015b40f0
{
    BYTE Pad[0x54];
    DWORD A, B, C;
    BYTE Pad2[0x4c];
    DWORD D, E, F;
    C_015b40f0* sub_015b40f0();
};

// @baa 0x015b40f0
C_015b40f0* C_015b40f0::sub_015b40f0()
{
    A = 0;
    B = 0;
    C = 0;
    D = 0;
    E = 0;
    F = 0;
    return this;
}

struct C_Sub4_ef0
{
    void sub_015b5bd0(INT X);
};

struct C_015b5ef0
{
    FLOAT F0;
    C_Sub4_ef0 Sub4;
    C_015b5ef0* sub_015b5ef0(FLOAT F, INT A);
};

// @baa 0x015b5ef0
C_015b5ef0* C_015b5ef0::sub_015b5ef0(FLOAT F, INT A)
{
    FLOAT V = F;
    F0 = V;
    Sub4.sub_015b5bd0(A);
    return this;
}

// @baa 0x01595b30
void URAnimNode_Pose::AddTranslationVelocity(FVector Velocity)
{
	FVector& V = MovementOutput.ProceduralMovement.AddTranslationVelocity;
	V.X += Velocity.X;
	V.Y += Velocity.Y;
	V.Z += Velocity.Z;
}

// @baa 0x01595b80
void URAnimNode_Pose::AddTranslation(FVector Translation)
{
	FVector& V = MovementOutput.ProceduralMovement.AddTranslation;
	V.X += Translation.X;
	V.Y += Translation.Y;
	V.Z += Translation.Z;
}

// @baa 0x0159c2b0
/* Slot 0x318 (unnamed in the kit): queues a floor height change for the IK; the other parameters are unused here. */
INT URAnimNode_Pose::vf_318(FLOAT FloorChange, INT, INT, INT)
{
	FIKOutput& Output = IKOutput;
	Output.PendingFloorChange += FloorChange;
	return TRUE;
}

/* Kit gap: FPosePlayer's methods aren't declared (the node forwards to the one of the same name; they take the
 * fuzziness as a 32-bit enum). */
struct FPosePlayer__01595770 : public FPosePlayer
{
	INT sub_015c2c00(INT); /* 0x015c2c00 */
};

// @baa 0x01595770
/* Slot 0x284 (unnamed in the kit). */
INT URAnimNode_Pose::vf_284(BYTE Fuzziness)
{
	return ((FPosePlayer__01595770&)PosePlayer).sub_015c2c00(Fuzziness);
}

/* Kit gap: FPosePlayer's methods aren't declared (the node forwards to the one of the same name; they take the
 * fuzziness as a 32-bit enum). */
struct FPosePlayer__01595790 : public FPosePlayer
{
	INT IsInAnyAutomaticTransition(INT Fuzziness, FTransitionId* Transition); /* 0x015c2c70 */
};

// @baa 0x01595790
INT URAnimNode_Pose::IsInAnyAutomaticTransition(BYTE Fuzziness, FTransitionId* Transition)
{
	return ((FPosePlayer__01595790&)PosePlayer).IsInAnyAutomaticTransition(Fuzziness, Transition);
}

/* Kit gap: FPosePlayer's methods aren't declared (the node forwards to the one of the same name; they take the
 * fuzziness as a 32-bit enum). */
struct FPosePlayer__015957b0 : public FPosePlayer
{
	INT sub_015c2d00(INT); /* 0x015c2d00 */
};

// @baa 0x015957b0
/* Slot 0x28c (unnamed in the kit). */
INT URAnimNode_Pose::vf_28c(BYTE Fuzziness)
{
	return ((FPosePlayer__015957b0&)PosePlayer).sub_015c2d00(Fuzziness);
}

/* Kit gap: FPosePlayer's methods aren't declared (the node forwards to the one of the same name; they take the
 * fuzziness as a 32-bit enum). */
struct FPosePlayer__015957d0 : public FPosePlayer
{
	INT IsInTransition(FTransitionId Transition, INT Fuzziness); /* 0x015c2d70 */
};

// @baa 0x015957d0
INT URAnimNode_Pose::IsInTransition(FTransitionId Transition, BYTE Fuzziness)
{
	return ((FPosePlayer__015957d0&)PosePlayer).IsInTransition(Transition, Fuzziness);
}

/* Kit gap: FPosePlayer's methods aren't declared (the node forwards to the one of the same name; they take the
 * fuzziness as a 32-bit enum). */
struct FPosePlayer__01595a40 : public FPosePlayer
{
	INT sub_015c2ff0(INT); /* 0x015c2ff0 */
};

// @baa 0x01595a40
/* Slot 0x1e4 (unnamed in the kit). */
INT URAnimNode_Pose::vf_1e4(BYTE Fuzziness)
{
	return ((FPosePlayer__01595a40&)PosePlayer).sub_015c2ff0(Fuzziness);
}

/* Kit gap: FPosePlayer's methods (RPosePlayer.cpp) aren't declared; the node forwards to the one of the same name. */
struct FPosePlayer__01595650 : public FPosePlayer
{
	void OverrideTransitionTime(FLOAT, INT); /* 0x015c2910 */
};

// @baa 0x01595650
void URAnimNode_Pose::OverrideTransitionTime(FLOAT Time, INT Param)
{
	((FPosePlayer__01595650&)PosePlayer).OverrideTransitionTime(Time, Param);
}

/* Kit gap: FPosePlayer's methods aren't declared (the node forwards to the one of the same name; they take the
 * fuzziness as a 32-bit enum). */
struct FPosePlayer__015959c0 : public FPosePlayer
{
	INT IsInMovementStance(FName Stance, INT Fuzziness); /* 0x015c2ec0 */
};

// @baa 0x015959c0
INT URAnimNode_Pose::IsInMovementStance(FName Stance, BYTE Fuzziness)
{
	return ((FPosePlayer__015959c0&)PosePlayer).IsInMovementStance(Stance, Fuzziness);
}

/* Kit gap: FPosePlayer's methods aren't declared (the node forwards to the one of the same name; they take the
 * fuzziness as a 32-bit enum). */
struct FPosePlayer__015959e0 : public FPosePlayer
{
	INT IsInWeaponStance(FName Stance, INT Fuzziness); /* 0x015c2f50 */
};

// @baa 0x015959e0
INT URAnimNode_Pose::IsInWeaponStance(FName Stance, BYTE Fuzziness)
{
	return ((FPosePlayer__015959e0&)PosePlayer).IsInWeaponStance(Stance, Fuzziness);
}

/* Kit gap: FPosePlayer's methods aren't declared (the node forwards to the one of the same name). */
struct FPosePlayer__01595810 : public FPosePlayer
{
	INT WillBeInTransition(FTransitionId Transition, FLOAT Time, INT Fuzziness); /* 0x015c8f00 */
};

// @baa 0x01595810
INT URAnimNode_Pose::WillBeInTransition(FTransitionId Transition, FLOAT Time, BYTE Fuzziness)
{
	return ((FPosePlayer__01595810&)PosePlayer).WillBeInTransition(Transition, Time, Fuzziness);
}

/* Kit gap: FPosePlayer's methods aren't declared (the node forwards to the one of the same name). */
struct FPosePlayer__01595740 : public FPosePlayer
{
	INT sub_015c2b90(USkeletalMeshComponent* SkelComp, INT, FLOAT); /* 0x015c2b90 */
};

// @baa 0x01595740
/* Slot 0x1c0 (unnamed in the kit). */
INT URAnimNode_Pose::vf_1c0(INT Param, FLOAT Value)
{
	return ((FPosePlayer__01595740&)PosePlayer).sub_015c2b90(SkelComponent, Param, Value);
}

/* Kit gap: FPosePlayer's methods aren't declared (the node forwards to the one of the same name). */
struct FPosePlayer__01595a00 : public FPosePlayer
{
	INT HasPose(USkeletalMeshComponent* SkelComp, FName MovementStance, FName WeaponStance, FName IdleStance); /* 0x015c28b0 */
};

// @baa 0x01595a00
INT URAnimNode_Pose::HasPose(FName MovementStance, FName WeaponStance, FName IdleStance)
{
	return ((FPosePlayer__01595a00&)PosePlayer).HasPose(SkelComponent, MovementStance, WeaponStance, IdleStance);
}

/* The project's existing binding for FStanceChangeArray's find-by-transition-id (0x015c2830, bound as
 * C_015c8f00::sub_015c2830 returning INT*): the stance change with that id, or NULL. */
struct C_015c8f00
{
    INT* sub_015c2830(INT TransitionId);
};

/* Unnamed in the kit (0x015c6460): whether the stance change's transition is over by Time (within Fuzziness). */
struct FStanceChange_ : public FStanceChange
{
    UBOOL sub_015c6460(FLOAT Time, INT Fuzziness);
};

struct FPosePlayer__015c8f00 : public FPosePlayer
{
    INT WillBeInTransition(FTransitionId Transition, FLOAT Time, INT Fuzziness); /* 0x015c8f00 */
};

// @baa 0x015c8f00
/* Whether the given transition will still be running at Time. */
INT FPosePlayer__015c8f00::WillBeInTransition(FTransitionId Transition, FLOAT Time, INT Fuzziness)
{
    FStanceChange_* Change = (FStanceChange_*)((C_015c8f00*)this)->sub_015c2830(Transition.Id);
    if (Change != NULL && !Change->sub_015c6460(Time, Fuzziness))
    {
        return TRUE;
    }
    return FALSE;
}

/* The project's existing binding for FStanceChangeArray's find-by-transition-id (0x015c2830). */
struct C_015c2e90
{
    INT* sub_015c2830(INT TransitionId);
};

struct FPosePlayer__015c2e90 : public FPosePlayer
{
    INT sub_015c2e90(FTransitionId Transition); /* 0x015c2e90 */
};

// @baa 0x015c2e90
/* Unnamed in the kit: whether the transition has got past its translation meeting point (or is already gone). */
INT FPosePlayer__015c2e90::sub_015c2e90(FTransitionId Transition)
{
    FStanceChange* Change = (FStanceChange*)((C_015c2e90*)this)->sub_015c2830(Transition.Id);
    if (Change != NULL && !(Change->Time.Current >= Change->Transition.MeetingPointEndTranslation))
    {
        return FALSE;
    }
    return TRUE;
}

/* BmGameAnimNodeClasses.h's inline FDirectionalAnimState::BeginSetWeights (not in the kit's script struct). */
struct FDirectionalAnimState_ : public FDirectionalAnimState
{
    void BeginSetWeights()
    {
#line 1610 "BmGame/Inc\\BmGameAnimNodeClasses.h"
        check(!InsideSetWeights && "Missing EndSetWeights?");
        InsideSetWeights = TRUE;
    }
};

struct FPosePlayer__015c2b50 : public FPosePlayer
{
    void sub_015c2b50(); /* 0x015c2b50 */
};

// @baa 0x015c2b50
/* Unnamed in the kit: start setting the current (head) stance change's directional weights. */
void FPosePlayer__015c2b50::sub_015c2b50()
{
    FStanceChange* Head = Changes.Num ? &Changes.Data[0] : NULL;
    if (Head != NULL)
    {
        ((FDirectionalAnimState_&)Head->DirectionalAnimState).BeginSetWeights();
    }
}

#line 892 "candidate.cpp"

/* BmGame's FWeight(FLOAT) constructor (inline; the kit's script struct has none). */
struct FWeight_ : public FWeight
{
    FWeight_(FLOAT InValue)
    {
        Value = InValue;
    }
    FWeight_(const FWeight_& Other)
    {
        Value = Other.Value;
    }
};

/* Unnamed in the kit (0x015be160): FDirectionalAnimState::SetWeight (checks it is inside BeginSetWeights). */
struct FDirectionalAnimState__015c2b90 : public FDirectionalAnimState
{
    void sub_015be160(UINT Direction, FWeight_ Weight);
};

struct FPosePlayer__015c2b90 : public FPosePlayer
{
    void sub_015c2b90(INT Unused, UINT Direction, FLOAT Weight); /* 0x015c2b90 */
};

// @baa 0x015c2b90
/* Unnamed in the kit: set one directional weight (0..1) on the current (head) stance change; out-of-range input
 * is ignored. */
void FPosePlayer__015c2b90::sub_015c2b90(INT Unused, UINT Direction, FLOAT Weight)
{
    if (Direction > 12 || 0.f > Weight || Weight > 1.f)
    {
        return;
    }
    FStanceChange* Head = Changes.Num ? &Changes.Data[0] : NULL;
    if (Head != NULL)
    {
        ((FDirectionalAnimState__015c2b90&)Head->DirectionalAnimState).sub_015be160(Direction, FWeight_(Weight));
    }
}
