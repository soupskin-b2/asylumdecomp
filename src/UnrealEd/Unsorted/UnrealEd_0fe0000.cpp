// UnrealEd_0fe0000.cpp: 10 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x00fefbe0
IMPLEMENT_CLASS_AT(UTerrainMaterialFactoryNew, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Editor\\Src\\UnTerrainEdit.cpp", 2769);

// @baa 0x00fefcf0
int UTerrainMaterialFactoryNew::vf_000(void) { return 1; }

// @baa 0x00fefd00
bool UTerrainMaterialFactoryNew::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00fefd40
IMPLEMENT_CLASS_AT(UTerrainLayerSetupFactoryNew, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Editor\\Src\\UnTerrainEdit.cpp", 2808);

// @baa 0x00fefe50
int UTerrainLayerSetupFactoryNew::vf_000(void) { return 1; }

// @baa 0x00fefe60
bool UTerrainLayerSetupFactoryNew::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

struct S {
    TArray<DWORD> Items; // 0x00
    const DWORD* sub_00fefea0(INT Index) const;
};

// @baa 0x00fefea0
const DWORD* S::sub_00fefea0(INT Index) const
{
    return &Items(Index);
}

struct C_00fefef0 { int a, b, c; C_00fefef0(); };

// @baa 0x00fefef0
C_00fefef0::C_00fefef0() : a(0), b(0), c(0) {}

struct C_00feff00 { int a, b, c; C_00feff00(); };

// @baa 0x00feff00
C_00feff00::C_00feff00() : a(0), b(0), c(0) {}

struct C{
int sub_00feff80(undefined4*);
};

int sub_0053d240(...);
int sub_0053df70(...);
// @baa 0x00feff80
int C::sub_00feff80(undefined4*param_2)
{
int*param_1=(int*)this;

int iVar2;
undefined4*puVar1;
int iVar3;

iVar2=param_1[1];
iVar3=iVar2+1;
param_1[1]=iVar3;
if(iVar3>param_1[2]){
iVar3=sub_0053d240(iVar3,param_1[2],0xc);
param_1[2]=iVar3;
if((*param_1!=0)||(iVar3!=0)){
iVar3=sub_0053df70(*param_1,iVar3*0xc,8);
*param_1=iVar3;
}
}
puVar1=(undefined4*)(*param_1+iVar2*0xc);
if(puVar1!=(undefined4*)0x0){
*puVar1=*param_2;
puVar1[1]=param_2[1];
puVar1[2]=param_2[2];
}
return iVar2;
}
