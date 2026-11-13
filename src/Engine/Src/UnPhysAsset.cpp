// UnPhysAsset.cpp: 41 functions
// Placed here by: class 16, neighbours 9, file 6, callers 2.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x009f7540
IMPLEMENT_CLASS_AT(URB_BodyInstance, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnPhysAsset.cpp", 19);

// @baa 0x009f75a0
// @baa 0x009f90e0
IMPLEMENT_CLASS_AT(UPhysicsAssetInstance, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnPhysAsset.cpp", 18);

// @baa 0x009f91f0
int UPhysicsAssetInstance::vf_000(void) { return 1; }

// @baa 0x009f9200
bool UPhysicsAssetInstance::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x009f9240
// @baa 0x009f9350
int URB_BodyInstance::vf_000(void) { return 1; }

// @baa 0x009f9360
bool URB_BodyInstance::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x009f9b40
int URB_BodyInstance::sub_009f9b40(void) { return *(int*)((char*)this + 88); }

// @baa 0x00a03250
IMPLEMENT_CLASS_AT(UPhysicalMaterialPropertyBase, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnPhysAsset.cpp", 22);

// @baa 0x00a03270
// @baa 0x00a04700
// @baa 0x00a047c0
IMPLEMENT_CLASS_AT(UPhysicalMaterial, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnPhysAsset.cpp", 21);

// @baa 0x00a04880
int sub_006b0420(...);
// @baa 0x00a051a0
undefined4 URB_BodyInstance::GetPhysicsAssetInstance(void)
{
    int param_1 = (int)this;

  int iVar1;
  
  iVar1 = sub_006b0420(*(undefined4 *)(param_1 + 0x30));
  if (iVar1 != 0) {
    return *(undefined4 *)(iVar1 + 0x1dc);
  }
  return 0;
}

int sub_00a0ab90(void);
// @baa 0x00a0acb0
void URB_BodyInstance::SetDampingRampupProportion(float param_2)
{
    int param_1 = (int)this;
  if (*(float *)(param_1 + 0x98) != param_2) {
    *(float *)(param_1 + 0x98) = param_2;
    sub_00a0ab90();
  }
  return;
}

int sub_00a17400(void);
extern undefined4 g_026b62b8;
// @baa 0x00a207c0
void URB_BodyInstance::sub_00a207c0(undefined4 param_2)
{
    int param_1 = (int)this;

  if ((*(int *)(g_026b62b8 + 0x130) == 0) || (*(int *)(g_026b62b8 + 0x138) != 2)) {
    *(undefined4 *)(param_1 + 0x88) = param_2;
    sub_00a17400();
  }
  return;
}

struct C_view {
    int sub_005dfd20(int);
};

int sub_00a2b420(...);
// @baa 0x00a2c860
void UPhysicsAssetInstance::Serialize(FArchive& Ar)
{
    undefined4 param_2 = (undefined4)&Ar;
    int param_1 = (int)this;
  ((C_view *)(this))->sub_005dfd20(param_2);
  sub_00a2b420(param_2,param_1 + 0x50);
  return;
}

struct C {
    int sub_00a2cd80();
};

int sub_00a221f0(void);
// @baa 0x00a2cd80
int C::sub_00a2cd80(void)
{
    int param_1 = (int)this;

  sub_00a221f0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_00a2cda0 { void sub_00a2b4d0(int); C_00a2cda0 *sub_00a2cda0(int); };

// @baa 0x00a2cda0
C_00a2cda0 *C_00a2cda0::sub_00a2cda0(int a) { sub_00a2b4d0(a); return this; }

// @baa 0x00a2cdc0
IMPLEMENT_CLASS_AT(URB_BodySetup, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnPhysAsset.cpp", 16);

// @baa 0x00a2ce60
// @baa 0x00a2ce80
int sub_005c7a70(...);
int sub_00a2cf20(void);
// @baa 0x00a2cfc0
undefined4 UPhysicsAsset::sub_00a2cfc0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00a2cf20();
  if ((param_2 & 1) != 0) {
    sub_005c7a70(param_1,0x98);
  }
  return param_1;
}

void sub_00a2b2e0();
// @baa 0x00a2cff0
void sub_00a2cff0(void) { sub_00a2b2e0(); }

// @baa 0x00a2d070
struct C_00a2dfa0 { void sub_00a2b4d0(int); C_00a2dfa0 *sub_00a2dfa0(int); };

// @baa 0x00a2dfa0
C_00a2dfa0 *C_00a2dfa0::sub_00a2dfa0(int a) { sub_00a2b4d0(a); return this; }

// @baa 0x00a2dfc0
IMPLEMENT_CLASS_AT(UPhysicsAsset, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnPhysAsset.cpp", 15);

// @baa 0x00a2e060
int sub_00a2dfd0(void);
// @baa 0x00a2e070
undefined4 UPhysicsAssetInstance::sub_00a2e070(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00a2dfd0();
  if ((param_2 & 1) != 0) {
    sub_005c7a70(param_1,0xac);
  }
  return param_1;
}

// @baa 0x00a2e0a0
// @baa 0x00a2e160
int sub_00df1fd0(void);
int sub_00df87d0(...);
extern undefined4 g_026c5e7c;
// @baa 0x00c94df0
int sub_00c94df0(void)
{
  if (g_026c5e7c == 0) {
    g_026c5e7c = sub_00df87d0(L"Engine");
    sub_00df1fd0();
  }
  return g_026c5e7c;
}

struct C_00a04940
{
    char pad_00[0x58];
    INT Value;

    INT sub_00a04940();
};

// @baa 0x00a04940
INT C_00a04940::sub_00a04940()
{
    INT Result = 0;
    if (Value)
        Result = 1;
    return Result;
}

// @baa 0x00a0bb00
void UPhysicsAssetInstance::SetFullAnimWeightBonesFixed(UBOOL bNewFixed, USkeletalMeshComponent* SkelMesh)
{
    if (!SkelMesh || !SkelMesh->PhysicsAsset || !SkelMesh->PhysicsAssetInstance)
    {
        return;
    }

    for (INT i = 0; i < SkelMesh->PhysicsAsset->BodySetup.Num(); i++)
    {
        URB_BodyInstance* BodyInst = SkelMesh->PhysicsAssetInstance->Bodies(i);
        URB_BodySetup* BodySetup = SkelMesh->PhysicsAsset->BodySetup(i);

        // fix or unfix only the bodies that always follow the animation
        if (BodySetup->bAlwaysFullAnimWeight)
        {
            BodyInst->SetFixed(bNewFixed); // SetFixed
        }
    }
}

/* FName::operator== (UnName.h); the kit's FName has no operators. */
// @baa 0x00a0b500
void UPhysicsAssetInstance::SetGroupBodiesFixed(UBOOL bNewFixed, FName GroupName, USkeletalMeshComponent* SkelMesh, UBOOL bSetOtherBodiesToComplement)
{
    if (!SkelMesh || !SkelMesh->PhysicsAsset || !SkelMesh->PhysicsAssetInstance)
    {
        return;
    }

    for (INT i = 0; i < SkelMesh->PhysicsAsset->BodySetup.Num(); i++)
    {
        URB_BodyInstance* BodyInst = SkelMesh->PhysicsAssetInstance->Bodies(i);
        URB_BodySetup* BodySetup = SkelMesh->PhysicsAsset->BodySetup(i);

        if (BodySetup->GroupName == GroupName)
        {
            BodyInst->SetFixed(bNewFixed); // SetFixed
        }
        else if (bSetOtherBodiesToComplement)
        {
            BodyInst->SetFixed(!bNewFixed); // SetFixed
        }
    }
}

// @baa 0x00a23220
void UPhysicsAssetInstance::SetAllMotorsAngularPositionDrive(UBOOL bEnableSwingDrive, UBOOL bEnableTwistDrive, USkeletalMeshComponent* SkelMesh, UBOOL bSkipFullAnimWeightBodies)
{
    for (INT i = 0; i < Constraints.Num(); i++)
    {
        if (bSkipFullAnimWeightBodies && SkelMesh)
        {
            const INT BodyIndex = SkelMesh->PhysicsAsset->FindBodyIndex(SkelMesh->PhysicsAsset->ConstraintSetup(i)->JointName); // FindBodyIndex
            if (SkelMesh->PhysicsAsset->BodySetup(BodyIndex)->bAlwaysFullAnimWeight)
            {
                continue;
            }
        }

        Constraints(i)->SetAngularPositionDrive(bEnableSwingDrive, bEnableTwistDrive);
    }
}

// @baa 0x00a234a0
void UPhysicsAssetInstance::SetAllMotorsAngularDriveParams(FLOAT InSpring, FLOAT InDamping, FLOAT InForceLimit, USkeletalMeshComponent* SkelMesh, UBOOL bSkipFullAnimWeightBodies)
{
    for (INT i = 0; i < Constraints.Num(); i++)
    {
        if (bSkipFullAnimWeightBodies && SkelMesh)
        {
            const INT BodyIndex = SkelMesh->PhysicsAsset->FindBodyIndex(SkelMesh->PhysicsAsset->ConstraintSetup(i)->JointName); // FindBodyIndex
            if (SkelMesh->PhysicsAsset->BodySetup(BodyIndex)->bAlwaysFullAnimWeight)
            {
                continue;
            }
        }

        Constraints(i)->SetAngularDriveParams(InSpring * AngularSpringScale, InDamping * AngularDampingScale, InForceLimit * AngularForceLimitScale);
    }
}

// @baa 0x00a0b190
void UPhysicsAssetInstance::SetLinearDriveScale(FLOAT InLinearSpringScale, FLOAT InLinearDampingScale, FLOAT InLinearForceLimitScale)
{
    LinearSpringScale = InLinearSpringScale;
    LinearDampingScale = InLinearDampingScale;
    LinearForceLimitScale = InLinearForceLimitScale;

    for (INT i = 0; i < Constraints.Num(); i++)
    {
        URB_ConstraintInstance* ConInst = Constraints(i);
#line 2572 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnPhysAsset.cpp"
        check(ConInst);
        ConInst->SetLinearDriveParams(ConInst->LinearDriveSpring * LinearSpringScale, ConInst->LinearDriveDamping * LinearDampingScale, ConInst->LinearDriveForceLimit * LinearForceLimitScale);
    }
}

#line 300 "candidate.cpp"

// @baa 0x00a0b280
void UPhysicsAssetInstance::SetAngularDriveScale(FLOAT InAngularSpringScale, FLOAT InAngularDampingScale, FLOAT InAngularForceLimitScale)
{
    AngularSpringScale = InAngularSpringScale;
    AngularDampingScale = InAngularDampingScale;
    AngularForceLimitScale = InAngularForceLimitScale;

    for (INT i = 0; i < Constraints.Num(); i++)
    {
        URB_ConstraintInstance* ConInst = Constraints(i);
#line 2598 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnPhysAsset.cpp"
        check(ConInst);
        ConInst->SetAngularDriveParams(ConInst->AngularDriveSpring * AngularSpringScale, ConInst->AngularDriveDamping * AngularDampingScale, ConInst->AngularDriveForceLimit * AngularForceLimitScale);
    }
}

#line 318 "candidate.cpp"

/* TArray<FName>::FindItemIndex, which the exe keeps out of line (00546020). */
struct FNameFindArray : public TArray<FName> {
    INT sub_00546020(const FName& Item) const;
    INT FindItemIndex(const FName& Item) const { return sub_00546020(Item); }
};

// @baa 0x00a0b3e0
void UPhysicsAssetInstance::SetNamedBodiesFixed(UBOOL bNewFixed, const TArray<FName>& BoneNames, USkeletalMeshComponent* SkelMesh, UBOOL bSetOtherBodiesToComplement, UBOOL bSkipFullAnimWeightBodies)
{
    if (!SkelMesh || !SkelMesh->PhysicsAsset || !SkelMesh->PhysicsAssetInstance)
    {
        return;
    }

    for (INT i = 0; i < SkelMesh->PhysicsAsset->BodySetup.Num(); i++)
    {
        URB_BodyInstance* BodyInst = SkelMesh->PhysicsAssetInstance->Bodies(i);
        URB_BodySetup* BodySetup = SkelMesh->PhysicsAsset->BodySetup(i);

        if (bSkipFullAnimWeightBodies && BodySetup->bAlwaysFullAnimWeight)
        {
            continue;
        }

        if (BoneNames.FindItemIndex(BodySetup->BoneName) != INDEX_NONE)
        {
            BodyInst->SetFixed(bNewFixed); // SetFixed
        }
        else if (bSetOtherBodiesToComplement)
        {
            BodyInst->SetFixed(!bNewFixed); // SetFixed
        }
    }
}
