// Engine_07b0000.cpp (part 2 of 3): 7 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

struct C{
int sub_007b2ab0(undefined4*);
};

int sub_0053d240(...);
int sub_0053df70(...);
// @baa 0x007b2ab0
int C::sub_007b2ab0(undefined4*param_2)
{
int*param_1=(int*)this;

undefined4*puVar1;
int iVar3;
int iVar2;

iVar2=param_1[1];
iVar3=iVar2+1;
param_1[1]=iVar3;
if(iVar3>param_1[2]){
iVar3=sub_0053d240(iVar3,param_1[2],8);
param_1[2]=iVar3;
if((*param_1!=0)||(iVar3)){
iVar3=sub_0053df70(*param_1,iVar3*8,8);
*param_1=iVar3;
}
}
puVar1=(undefined4*)(*param_1+iVar2*8);
if(puVar1!=(undefined4*)0x0){
*puVar1=*param_2;
puVar1[1]=param_2[1];
}
return iVar2;
}

struct C_007b4b20 {
    void sub_007b4b20(int);
};

// @baa 0x007b4b20
void C_007b4b20::sub_007b4b20(int param_2)
{
    int * param_1 = (int *)this;

  int iVar1;
  
  param_1[1] = 0;
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if ((*param_1 != 0) || (param_2 != 0)) {
      iVar1 = sub_0053df70(*param_1,param_2 * 4,8);
      *param_1 = iVar1;
    }
  }
  return;
}

int sub_0053dfa0(...);
int sub_00656490(void);
// @baa 0x007b7770
undefined4 ULensFlare::sub_007b7770(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00656490();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x007b78e0
undefined4 ULensFlare::sub_007b78e0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00656490();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_007bf220 {
    void sub_007bf220(int);
};

// @baa 0x007bf220
void C_007bf220::sub_007bf220(int param_2)
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

/* 0x007b1d40 */
struct TArrayNoInit_ANavPoint_ : public TArrayNoInit<class ANavigationPoint*> {
    INT Add(const class ANavigationPoint* const& Item); /* 0x007b1d40 */
};

// @baa 0x007b53f0
void AController::RouteCache_AddItem(class ANavigationPoint* NavPoint)
{
    if (NavPoint != NULL) {
        ((TArrayNoInit_ANavPoint_*)&RouteCache)->Add(NavPoint);
    }
}

/* Kit gap (Array.h, issue #39): this build inlines TArray::operator() where the kit's plain-inline one is
 * called out of line; same body, forced inline. */
template<class T> struct TArrayAt_ : public TArray<T>
{
    using TArray<T>::ArrayNum;
    __forceinline T& At(INT i)
    {
#line 560 BAA_ARRAY_FILE
        check(i>=0 && (i<ArrayNum||(i==0 && ArrayNum==0)));
        return this->GetTypedData()[i];
    }
};

// @baa 0x007b5600
/* UE3's APlayerController::IsPlayerMuted(const FUniqueNetId& PlayerId) (execIsPlayerMuted's native): the id is in
 * the voice packet filter (VoicePacketFilter.ContainsItem, FUniqueNetId::operator== inlined). UE3 declares
 * Uid as a QWORD; the kit has it as the script struct FQWord {A, B}, so it is compared as a QWORD here. */
UBOOL APlayerController::sub_007b5600(FUniqueNetId& PlayerId)
{
    for (INT i = 0; i < VoicePacketFilter.Num(); i++)
    {
        if (*(QWORD*)&((TArrayAt_<FUniqueNetId>&)VoicePacketFilter).At(i) == *(QWORD*)&PlayerId)
        {
            return TRUE;
        }
    }
    return FALSE;
}

#line 158 "candidate.cpp"
