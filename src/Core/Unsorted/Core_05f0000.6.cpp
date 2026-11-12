// Core_05f0000.cpp (part 6 of 6): 4 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

int sub_0053d240(...);
undefined4 sub_0053df70(...);
// @baa 0x005fedc0
int UPackageMap::sub_005fedc0(undefined4*param_2)
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

extern INT g_026a4b20;
extern WORD g_025d6ac8;
struct UPackageMap_ : public UPackageMap
{
    virtual void sub_005fb0c0(WORD W);
};

// @baa 0x005fb0c0
void UPackageMap_::sub_005fb0c0(WORD W)
{
    WORD V = W;
    g_026a4b20 = 1;
    g_025d6ac8 = V;
}

struct UPackageMap__005ff380 : public UPackageMap
{
    FPointer* sub_005ff380(FPointer* Out);
};

// @baa 0x005ff380
FPointer* UPackageMap__005ff380::sub_005ff380(FPointer* Out)
{
    *Out = HashOuterNext;
    return Out;
}

// @baa 0x005fa520
INT __stdcall sub_005fa520(INT A, INT* Out)
{
    *Out = 0;
    return 0;
}
