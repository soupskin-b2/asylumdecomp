// NewMaterialEditor.cpp (part 8 of 8): 5 functions
// Placed here by: neighbours 5.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C{
int sub_0142a640(undefined4*);
};

int sub_0053d240(...);
int sub_0053df70(...);
// @baa 0x0142a640
int C::sub_0142a640(undefined4*param_2)
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

struct C_014321f0 {
    void sub_014321f0(int);
};

// @baa 0x014321f0
void C_014321f0::sub_014321f0(int param_2)
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

struct C_01432290 {
    void sub_01432290(int);
};

// @baa 0x01432290
void C_01432290::sub_01432290(int param_2)
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

struct C_01433610 {
    void sub_01433610();
};

// @baa 0x01433610
void C_01433610::sub_01433610(void)
{
    int param_1 = (int)this;

  undefined4 uVar1;
  
  *(undefined4 *)(param_1 + 0x158) = 0;
  if (*(int *)(param_1 + 0x15c) != 0) {
    *(undefined4 *)(param_1 + 0x15c) = 0;
    if (*(int *)(param_1 + 0x154) != 0) {
      uVar1 = sub_0053df70(*(int *)(param_1 + 0x154),0,8);
      *(undefined4 *)(param_1 + 0x154) = uVar1;
    }
  }
  *(undefined4 *)(param_1 + 0x164) = 0;
  if (*(int *)(param_1 + 0x168) != 0) {
    *(undefined4 *)(param_1 + 0x168) = 0;
    if (*(int *)(param_1 + 0x160) != 0) {
      uVar1 = sub_0053df70(*(int *)(param_1 + 0x160),0,8);
      *(undefined4 *)(param_1 + 0x160) = uVar1;
    }
  }
  *(undefined4 *)(param_1 + 0x170) = 0;
  if (*(int *)(param_1 + 0x174) != 0) {
    *(undefined4 *)(param_1 + 0x174) = 0;
    if (*(int *)(param_1 + 0x16c) != 0) {
      uVar1 = sub_0053df70(*(int *)(param_1 + 0x16c),0,8);
      *(undefined4 *)(param_1 + 0x16c) = uVar1;
    }
  }
  return;
}

int sub_0143b550(...);
int sub_01440f00(void);
// @baa 0x01442260
void sub_01442260(int param_1, undefined4 param_2, int * param_3)
{
  int iVar1;
  
  param_3[1] = 0;
  if (param_3[2] != 0) {
    param_3[2] = 0;
    if (*param_3 != 0) {
      iVar1 = sub_0053df70(*param_3,0,8);
      *param_3 = iVar1;
    }
  }
  sub_01440f00();
  sub_0143b550(*(undefined4 *)(param_1 + 0x48),param_2,param_3);
  sub_0143b550(*(undefined4 *)(param_1 + 0x6c),param_2,param_3);
  sub_0143b550(*(undefined4 *)(param_1 + 0x90),param_2,param_3);
  sub_0143b550(*(undefined4 *)(param_1 + 0xb4),param_2,param_3);
  sub_0143b550(*(undefined4 *)(param_1 + 0xd8),param_2,param_3);
  sub_0143b550(*(undefined4 *)(param_1 + 0x104),param_2,param_3);
  sub_0143b550(*(undefined4 *)(param_1 + 0x128),param_2,param_3);
  sub_0143b550(*(undefined4 *)(param_1 + 0x14c),param_2,param_3);
  sub_0143b550(*(undefined4 *)(param_1 + 0x174),param_2,param_3);
  sub_0143b550(*(undefined4 *)(param_1 + 0x1a0),param_2,param_3);
  sub_0143b550(*(undefined4 *)(param_1 + 0x1c4),param_2,param_3);
  sub_0143b550(*(undefined4 *)(param_1 + 0x1e8),param_2,param_3);
  return;
}
