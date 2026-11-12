// GameSkelControls.cpp: 14 functions
// Placed here by: class 7, neighbours 4, file 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x00e25d50
IMPLEMENT_CLASS_AT(UGameSkelCtrl_Recoil, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\GameFramework\\Src\\GameSkelControls.cpp", 9);

// @baa 0x00e25e60
int UGameSkelCtrl_Recoil::vf_000(void) { return 1; }

// @baa 0x00e25e70
bool UGameSkelCtrl_Recoil::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00e25ed0
int UGameSkelCtrl_Recoil::vf_154(int a0) { return 0; }

struct M_00e272a0 { void sub_0040fcc0(); };

struct C { char pad[12]; M_00e272a0 m; void sub_00e272a0(); };

// @baa 0x00e272a0
void C::sub_00e272a0() { m.sub_0040fcc0(); }

struct C_00e273e0 {
    undefined4 sub_00e273e0(byte);
    int sub_0040fcc0();
};

int sub_0053dfa0(...);
// @baa 0x00e273e0
undefined4 C_00e273e0::sub_00e273e0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_00e273e0 *)(((char *)this + 0xc)))->sub_0040fcc0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_005c7a20(void);
extern undefined * g_020ecda0;
// @baa 0x00e27470
undefined4 * UObject::sub_00e27470(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_020ecda0);
  return param_1;
}

// @baa 0x00e27490
// @baa 0x00e274f0
void sub_00e27520();
// @baa 0x00e275f0
void sub_00e275f0(void) { sub_00e27520(); }

// @baa 0x00e27600
// @baa 0x00e27620

struct RecoilRange { INT Min; INT Max; };

struct UGameSkelCtrl_Recoil_ : public UGameSkelCtrl_Recoil
{
    virtual RecoilRange vf_150(INT a);
};

// @baa 0x00e25eb0
RecoilRange UGameSkelCtrl_Recoil_::vf_150(INT a)
{
    RecoilRange R;
    R.Min = *(INT*)&_native[0x74];
    R.Max = *(INT*)&_native[0x78];
    return R;
}

/* TArray<INT>::AddItem, out of line here (0x00545f40); not in the kit TArray. */
struct FIntArray : public TArray<INT>
{
    INT AddItem(const INT& Item);
};

/* GameSkelCtrl_Recoil's script bools (bBoneSpaceRecoil, bPlayRecoil, bOldPlayRecoil, bApplyControl) sit at
 * the start of the kit's _native blob (0xa8); this stand-in names them. */
struct FRecoilFlags
{
    BITFIELD bBoneSpaceRecoil : 1;
    BITFIELD bPlayRecoil : 1;
    BITFIELD bOldPlayRecoil : 1;
    BITFIELD bApplyControl : 1;
};

// @baa 0x00e26c90
/* Only the controlled bone is affected, and only while the recoil is being applied. */
void UGameSkelCtrl_Recoil::GetAffectedBones(INT BoneIndex, USkeletalMeshComponent* SkelComp, TArray<INT>& OutBoneIndices)
{
#line 117 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\GameFramework\\Src\\GameSkelControls.cpp"
    check(OutBoneIndices.Num() == 0);
    if (((FRecoilFlags*)_native)->bApplyControl)
    {
        ((FIntArray&)OutBoneIndices).AddItem(BoneIndex);
    }
}

#line 111 "candidate.cpp"
