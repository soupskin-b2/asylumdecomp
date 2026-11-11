// Core_0590000.cpp (part 4 of 4): 8 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C{
int sub_0059d9a0(undefined4*);
};

int sub_0053d240(...);
undefined4 sub_0053df70(...);
// @baa 0x0059d9a0
int C::sub_0059d9a0(undefined4*param_2)
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

struct sub_00590d90_S
{
    int Field_00;
    int Field_04;
    int Field_08;
    int Field_0c;
    int Field_10;
    int Field_14;
    int* Field_18;
};

// @baa 0x00590d90
// Pop the front element: *Out = *Field_18; advance Field_18 past it.
void __stdcall sub_00590d90(struct sub_00590d90_S* List, int* Out)
{
    int* Item = List->Field_18;
    int Value = *Item;
    List->Field_18 = Item + 1;
    *Out = Value;
}

struct sub_00590dd0_S
{
    int Field_00;
    int Field_04;
    int Field_08;
    int Field_0c;
    int Field_10;
    int Field_14;
    int* Front;
};

// @baa 0x00590dd0
// Pop the front element: *Out = *Front; advance Front past it.
void __stdcall sub_00590dd0(struct sub_00590dd0_S* Queue, int* Out)
{
    int* Item = Queue->Front;
    int Value = *Item;
    Queue->Front = Item + 1;
    *Out = Value;
}

// @baa 0x00590e60
void __stdcall sub_00590e60(INT A, INT* Out)
{
    *Out = 0;
}

// @baa 0x00590e70
void __stdcall sub_00590e70(INT A, INT* Out)
{
    *Out = 1;
}

// @baa 0x00590e80
void __stdcall sub_00590e80(INT A, INT* Out)
{
    *Out = 1;
}

// @baa 0x00590e90
void __stdcall sub_00590e90(INT A, INT* Out)
{
    *Out = 0;
}

// @baa 0x00590ea0
void __stdcall sub_00590ea0(INT A, INT* Out)
{
    *Out = 0;
}
