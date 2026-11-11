// Kismet.cpp (part 4 of 4): 3 functions
// Placed here by: callers 2, neighbours 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C{
int sub_01196760(undefined4*);
};

int sub_0053d240(...);
int sub_0053df70(...);
// @baa 0x01196760
int C::sub_01196760(undefined4*param_2)
{
int*param_1=(int*)this;

undefined4*puVar1;
int iVar3;
int iVar2;

iVar2=param_1[1];
iVar3=iVar2+1;
param_1[1]=iVar3;
if(iVar3>param_1[2]){
iVar3=sub_0053d240(iVar3,param_1[2],8);
param_1[2]=iVar3;
if((*param_1!=0)||(iVar3)){
iVar3=sub_0053df70(*param_1,iVar3*8,8);
*param_1=iVar3;
}
}
puVar1=(undefined4*)(*param_1+iVar2*8);
if(puVar1!=(undefined4*)0x0){
*puVar1=*param_2;
puVar1[1]=param_2[1];
}
return iVar2;
}

struct C_011a0bd0 {
    void sub_011a0bd0(int);
};

// @baa 0x011a0bd0
void C_011a0bd0::sub_011a0bd0(int param_2)
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

struct C_011a3000 {
    void sub_011a3000();
};

// @baa 0x011a3000
void C_011a3000::sub_011a3000(void)
{
    int param_1 = (int)this;

  undefined4 uVar1;
  
  *(undefined4 *)(param_1 + 0x364) = 0;
  if (*(int *)(param_1 + 0x368) != 0) {
    *(undefined4 *)(param_1 + 0x368) = 0;
    if (*(int *)(param_1 + 0x360) != 0) {
      uVar1 = sub_0053df70(*(int *)(param_1 + 0x360),0,8);
      *(undefined4 *)(param_1 + 0x360) = uVar1;
    }
  }
  return;
}
