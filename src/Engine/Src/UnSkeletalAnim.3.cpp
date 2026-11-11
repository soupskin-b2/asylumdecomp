// UnSkeletalAnim.cpp (part 3 of 4): 6 functions
// Placed here by: neighbours 5, callers 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C{
int sub_00915830(undefined4*);
};

int sub_0053d240(...);
int sub_0053df70(...);
// @baa 0x00915830
int C::sub_00915830(undefined4*param_2)
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

struct C_00921110 {
    void sub_00921110(int);
};

// @baa 0x00921110
void C_00921110::sub_00921110(int param_2)
{
    int * param_1 = (int *)this;

  int iVar1;
  
  param_1[1] = 0;
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if ((*param_1 != 0) || (param_2 != 0)) {
      iVar1 = sub_0053df70(*param_1,param_2 << 4,8);
      *param_1 = iVar1;
    }
  }
  return;
}

struct C_009211b0 {
    void sub_009211b0(int);
};

// @baa 0x009211b0
void C_009211b0::sub_009211b0(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  param_1[1] = 0;
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if ((*param_1 != 0) || (param_2 != 0)) {
      iVar1 = sub_0053df70(*param_1,param_2 * 2,8);
      *param_1 = iVar1;
    }
  }
  return;
}

struct C_00921400 {
    void sub_00921400(int);
};

// @baa 0x00921400
void C_00921400::sub_00921400(int param_2)
{
    int * param_1 = (int *)this;

  int iVar1;
  
  param_1[1] = 0;
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if ((*param_1 != 0) || (param_2 != 0)) {
      iVar1 = sub_0053df70(*param_1,param_2 << 4,8);
      *param_1 = iVar1;
    }
  }
  return;
}

struct C_00921500 {
    void sub_00921500(int);
};

// @baa 0x00921500
void C_00921500::sub_00921500(int param_2)
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

struct C_0093da00 {
    void sub_0093da00();
    int sub_0093ca00(int);
};

// @baa 0x0093da00
void C_0093da00::sub_0093da00(void)
{
    int param_1 = (int)this;
  undefined4 uVar1;
  ((C_0093da00 *)(((char *)this + 0x58)))->sub_0093ca00(0);
  *(undefined4 *)(param_1 + 0x70) = 0;
  if (*(int *)(param_1 + 0x74) != 0) {
    *(undefined4 *)(param_1 + 0x74) = 0;
    if (*(int *)(param_1 + 0x6c) != 0) {
      uVar1 = sub_0053df70(*(int *)(param_1 + 0x6c),0,8);
      *(undefined4 *)(param_1 + 0x6c) = uVar1;
    }
  }
  *(undefined4 *)(param_1 + 0x7c) = 0;
  if (*(int *)(param_1 + 0x80) != 0) {
    *(undefined4 *)(param_1 + 0x80) = 0;
    if (*(int *)(param_1 + 0x78) != 0) {
      uVar1 = sub_0053df70(*(int *)(param_1 + 0x78),0,8);
      *(undefined4 *)(param_1 + 0x78) = uVar1;
    }
  }
  *(undefined4 *)(param_1 + 0x88) = 0;
  if (*(int *)(param_1 + 0x8c) != 0) {
    *(undefined4 *)(param_1 + 0x8c) = 0;
    if (*(int *)(param_1 + 0x84) != 0) {
      uVar1 = sub_0053df70(*(int *)(param_1 + 0x84),0,8);
      *(undefined4 *)(param_1 + 0x84) = uVar1;
    }
  }
  return;
}
