// UnNavigationPoint.cpp (part 3 of 4): 2 functions
// Placed here by: callers 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C{
int sub_0083c5e0(undefined4*);
};

int sub_0053d240(...);
int sub_0053df70(...);
// @baa 0x0083c5e0
int C::sub_0083c5e0(undefined4*param_2)
{
int*param_1=(int*)this;

int iVar1;
int iVar2;
undefined4*puVar3;

iVar1=param_1[1];
iVar2=iVar1+1;
param_1[1]=iVar2;
if(iVar2>param_1[2]){
iVar2=sub_0053d240(iVar2,param_1[2],0x10);
param_1[2]=iVar2;
if((*param_1!=0)||(iVar2!=0)){
iVar2=sub_0053df70(*param_1,iVar2<<4,8);
*param_1=iVar2;
}
}
puVar3=(undefined4*)(iVar1*0x10+*param_1);
if(puVar3!=(undefined4*)0x0){
*puVar3=*param_2;
puVar3[1]=param_2[1];
puVar3[2]=param_2[2];
puVar3[3]=param_2[3];
}
return iVar1;
}

// Engine_0850000.cpp (part 2 of 3): 1 function
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
extern char g_01ebe858[];
extern char g_01f44ca8[];
struct C_00857800 { C_00857800* sub_005c7a20(void); };

struct AInfo {
    INT Unk00;  // 0x00 vtable ptr
    INT Unk04;
    INT Unk08;
    INT Unk0C;
    INT Unk10;
    INT Unk14;
    INT Unk18;
    INT Unk1C;
    INT Unk20;
    INT Unk24;
    INT Unk28;
    INT Unk2C;
    INT Unk30;
    INT Unk34;
    INT Unk38;
    INT Unk3C;
    INT Unk40;
    INT Unk44;
    INT Unk48;
    INT Unk4C;
    INT Unk50;
    INT Unk54;
    INT Unk58;
    INT Unk5C;
    INT Unk60;
    INT Unk64;
    INT Unk68;
    INT Unk6C;
    INT Unk70;
    INT Unk74;
    INT Unk78;
    INT Unk7C;
    INT Unk80;
    INT Unk84;
    INT DetachFence; // 0x88
    AInfo* sub_00857800(void);
};

// @baa 0x00857800
AInfo* AInfo::sub_00857800(void)
{
    ((C_00857800*)this)->sub_005c7a20();
    *(volatile INT*)this = (INT)g_01ebe858;
    DetachFence = 0;
    *(INT*)this = (INT)g_01f44ca8;
    return this;
}
