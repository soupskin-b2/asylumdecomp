// BmGame_0900000.cpp: 5 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

int sub_00759550(void);
// @baa 0x0090e590
undefined4 USkeletalMeshComponent::vf_12c(void)
{
    int param_1 = (int)this;

  int iVar1;
  
  if (*(int *)(param_1 + 0x1b0) != 0) {
    iVar1 = sub_00759550();
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}

// @baa 0x0090e5f0
int sub_0090e5f0(byte * param_1, byte * param_2)
{
  return (uint)*param_1 - (uint)*param_2;
}

void sub_00bf75f0(int);
struct S {
    void sub_0090e690(int A);
};

// @baa 0x0090e690
void S::sub_0090e690(int A)
{
    sub_00bf75f0(A);
}

struct FxActorInstance {
    FLOAT sub_01abca80(void* Item);
};

void* sub_00bf7480(INT Arg);
struct USkeletalMeshComponent_ : public USkeletalMeshComponent {
    FLOAT sub_0090e6a0(INT Arg);
};

// @baa 0x0090e6a0
FLOAT USkeletalMeshComponent_::sub_0090e6a0(INT Arg)
{
    FxActorInstance* Instance = *(FxActorInstance**)&FaceFXActorInstance;
    if (Instance)
    {
        void* Item = sub_00bf7480(Arg);
        if (Item)
            return (*(FxActorInstance**)&FaceFXActorInstance)->sub_01abca80(Item);
    }
    return 0.f;
}

int sub_00765d00(void);
// @baa 0x0090eaa0
void USkeletalMeshComponent::sub_0090eaa0(undefined4 param_2)
{
    int param_1 = (int)this;

  *(undefined4 *)(param_1 + 0x2f0) = param_2;
  sub_00765d00();
  return;
}
