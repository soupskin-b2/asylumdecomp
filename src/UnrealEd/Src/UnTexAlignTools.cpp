// UnTexAlignTools.cpp: 11 functions
// Placed here by: callers 6, file 5.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

struct C{
int sub_012a29e0(undefined4*);
};

int sub_0053d240(...);
undefined4 sub_0053df70(...);
// @baa 0x012a29e0
int C::sub_012a29e0(undefined4*param_2)
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

// @baa 0x012afab0
IMPLEMENT_CLASS_AT(UTexAligner, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\UnTexAlignTools.cpp", 48);

// @baa 0x012afac0
IMPLEMENT_CLASS_AT(UTexAlignerPlanar, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\UnTexAlignTools.cpp", 168);

// @baa 0x012afad0
IMPLEMENT_CLASS_AT(UTexAlignerDefault, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\UnTexAlignTools.cpp", 233);

// @baa 0x012afae0
IMPLEMENT_CLASS_AT(UTexAlignerBox, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\UnTexAlignTools.cpp", 268);

// @baa 0x012afaf0
IMPLEMENT_CLASS_AT(UTexAlignerFit, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\UnTexAlignTools.cpp", 305);

// @baa 0x012afb00
// @baa 0x012afbc0
// @baa 0x012afc80
// @baa 0x012afd40
// @baa 0x012afe00
