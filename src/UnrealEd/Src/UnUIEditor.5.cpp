// UnUIEditor.cpp (part 5 of 5): 5 functions
// Placed here by: neighbours 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C{
int sub_014a0eb0(undefined4*);
};

int sub_0053d240(...);
undefined4 sub_0053df70(...);
// @baa 0x014a0eb0
int C::sub_014a0eb0(undefined4*param_2)
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

INT sub_01194160(void* Value);
struct C_0149f530
{
    char pad_00[0xc];
    void* Value;

    INT sub_0149f530();
};

// @baa 0x0149f530
INT C_0149f530::sub_0149f530()
{
    return sub_01194160(Value);
}

INT sub_0149f540(void* Value);
struct C_014a1730
{
    char pad_00[0xc];
    void* Value;

    INT sub_014a1730();
};

// @baa 0x014a1730
INT C_014a1730::sub_014a1730()
{
    return sub_0149f540(Value);
}

// UnrealEd_14a0000.cpp (part 3 of 6): 1 function
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
void sub_013e9bc0();
// @baa 0x014adbf0
void sub_014adbf0(void) { sub_013e9bc0(); }

// @baa 0x014adc50
void sub_014adc50(void) { sub_013e9bc0(); }
