// FCollada_1bf0000.cpp (part 2 of 3): 6 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

typedef void *_StartAddress;

int sub_01bf5190(...);
extern "C" __declspec(dllimport) int _beginthread(...);
// @baa 0x01bf51e0
void sub_01bf51e0(void * param_1)
{
  _beginthread((_StartAddress *)&sub_01bf5190,0x2800,param_1);
  return;
}

int sub_01bf9c30(void);
int sub_01bf9d10(void);
int sub_01bf9e70(void);
int sub_01bf9f90(...);
extern undefined4 g_027d4cac;
// @baa 0x01bfa300
int * sub_01bfa300(int param_1, undefined4 param_2)
{
  int *piVar1;
  
  if (g_027d4cac == 0) {
    sub_01bf9e70();
  }
  if (param_1 == 0) {
    return (int *)0x0;
  }
  piVar1 = (int *)sub_01bf9f90(param_2);
  if (piVar1 != (int *)0x0) {
    *piVar1 = param_1;
    piVar1[1] = (int)sub_01bf9c30;
    piVar1[2] = (int)&sub_01bf9d10;
  }
  return piVar1;
}

int sub_01bfce10(...);
int sub_01bfce60(...);
// @baa 0x01bfce70
undefined4 sub_01bfce70(undefined4 param_1, undefined4 param_2)
{
  undefined4 uVar1;
  
  uVar1 = sub_01bfce10(param_2);
  sub_01bfce60(param_1,uVar1);
  return uVar1;
}

int sub_01bfce40(...);
int sub_01c18dd0(...);
// @baa 0x01bfce90
void sub_01bfce90(int param_1, int param_2, undefined4 param_3)
{
  undefined4 uVar1;
  
  if ((param_2 != 0) && (*(int *)(param_2 + 0x14) == param_1)) {
    uVar1 = sub_01bfce10(param_3);
    sub_01c18dd0(param_2,uVar1);
    return;
  }
  sub_01bfce40(param_1,param_3);
  return;
}

int sub_01bfced0(...);
int sub_01bfd000(...);
// @baa 0x01bfd090
undefined4 sub_01bfd090(undefined4 param_1, undefined4 param_2, char * param_3)
{
  undefined4 uVar1;
  
  uVar1 = sub_01bfce10(param_2);
  if ((param_3 != (char *)0x0) && (*param_3 != '\0')) {
    sub_01bfced0(uVar1,param_3);
  }
  sub_01bfd000(param_1,uVar1);
  return uVar1;
}

// @baa 0x01bfd0f0
int sub_01bfd0f0(undefined4 param_1, undefined4 param_2, char * param_3)
{
  int iVar1;
  
  iVar1 = sub_01bfce40(param_1,param_2);
  if (((iVar1 != 0) && (param_3 != (char *)0x0)) && (*param_3 != '\0')) {
    sub_01bfced0(iVar1,param_3);
  }
  return iVar1;
}
