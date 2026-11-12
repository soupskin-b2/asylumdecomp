// ScriptDatabaseBuilder.cpp: 7 functions
// Placed here by: callers 3, file 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

struct C_view {
    int sub_00faa3c0(int, int);
};

// @baa 0x00fb56b0
int UTexture2D::sub_00fb56b0(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  ((C_view *)(this))->sub_00faa3c0((int)(&param_2), param_2);
  if ((param_2 != -1) && (iVar1 = *param_1 + param_2 * 0x18, iVar1 != 0)) {
    return iVar1 + 0xc;
  }
  return 0;
}

struct C{
int sub_0147a510(undefined4*);
};

int sub_0053d240(...);
undefined4 sub_0053df70(...);
// @baa 0x0147a510
int C::sub_0147a510(undefined4*param_2)
{
int*param_1=(int*)this;

undefined4*puVar1;
int iVar2;
int iVar3;

iVar2=param_1[1];
iVar3=iVar2+1;
param_1[1]=iVar3;
if(iVar3>param_1[2]){
iVar3=sub_0053d240(iVar3,param_1[2],0x14);
param_1[2]=iVar3;
if((*param_1!=0)||(0!=iVar3)){
iVar3=sub_0053df70(*param_1,iVar3*0x14,8);
*param_1=iVar3;
}
}
puVar1=(undefined4*)(*param_1+iVar2*0x14);
if(puVar1!=(undefined4*)0x0){
*puVar1=*param_2;
puVar1[1]=param_2[1];
puVar1[2]=param_2[2];
puVar1[3]=param_2[3];
puVar1[4]=param_2[4];
}
return iVar2;
}

// @baa 0x0148bdf0
IMPLEMENT_CLASS_AT(UScriptDataBaseCommandlet, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\ScriptDatabaseBuilder.cpp", 3431);

// @baa 0x0148c1f0

// @baa 0x01478800

// @baa 0x01478910
int UScriptDataBaseCommandlet::vf_000(void) { return 1; }

// @baa 0x01478920
bool UScriptDataBaseCommandlet::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}
