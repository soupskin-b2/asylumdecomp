// UnStaticMeshEdit.cpp (part 2 of 3): 4 functions
// Placed here by: neighbours 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

int sub_0053d240(...);
undefined4 sub_0053df70(...);
// @baa 0x00ff2350
int UObject::sub_00ff2350(undefined4*param_2)
{
int*param_1=(int*)this;

undefined4*puVar1;
int iVar2;
int iVar3;

iVar2=param_1[1];
iVar3=iVar2+1;
param_1[1]=iVar3;
if(iVar3>param_1[2]){
iVar3=sub_0053d240(iVar3,param_1[2],4);
param_1[2]=iVar3;
if((*param_1!=0)||(iVar3)){
iVar3=sub_0053df70(*param_1,iVar3*4,8);
*param_1=iVar3;
}
}
puVar1=(undefined4*)(*param_1+4*iVar2);
if((undefined4*)0x0!=puVar1){
*puVar1=*param_2;
}
return iVar2;
}

// @baa 0x00fef070
int UStaticMeshFactory::vf_000(void) { return 1; }

// @baa 0x00fef080
bool UStaticMeshFactory::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00ffd720
UStaticMeshFactory::UStaticMeshFactory()
{
    *(DWORD*)((BYTE*)this + 0x50) |= 0x4;
}
