// FCollada_1be0000.cpp (part 2 of 4): 4 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

int sub_01bf51a0(void);
// @baa 0x01be4e00
void sub_01be4e00(int param_1)
{
  if (param_1 != 0) {
    sub_01bf51a0();
    return;
  }
  return;
}

int sub_01bb51e0(...);
int sub_01be6760(...);
int sub_01be6770(...);
// @baa 0x01be68a0
void sub_01be68a0(int * param_1)
{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  
  iVar4 = 0;
  if (0 < param_1[5]) {
    do {
      puVar3 = *(undefined4 **)(*param_1 + iVar4 * 4);
      while (puVar3 != (undefined4 *)0x0) {
        puVar1 = (undefined4 *)*puVar3;
        sub_01bb51e0(puVar3);
        puVar3 = puVar1;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < param_1[5]);
  }
  piVar2 = (int *)*param_1;
  if ((piVar2 != (int *)0x0) && (piVar2 != param_1 + 1)) {
    sub_01bb51e0(piVar2);
  }
  param_1[0xb] = (int)&sub_01be6760;
  param_1[0xc] = (int)&sub_01be6770;
  return;
}

int sub_01bc73d0(...);
int sub_01be8980(...);
// @baa 0x01be8a10
void sub_01be8a10(int * param_1)
{
  int *piVar1;
  undefined4 *puVar2;
  
  if (param_1 != (int *)0x0) {
    piVar1 = param_1 + 3;
    for (puVar2 = (undefined4 *)*piVar1; puVar2 != (undefined4 *)0x0; puVar2 = (undefined4 *)*puVar2
        ) {
      if (puVar2[1] != 0) {
        sub_01be8980(puVar2[1],param_1[6]);
      }
    }
    if (*piVar1 != 0) {
      sub_01bc73d0(piVar1,param_1[6]);
    }
    if (param_1[1] != 0) {
      sub_01bc73d0(param_1 + 1,param_1[6]);
    }
    if (param_1[2] != 0) {
      sub_01bc73d0(param_1 + 2,param_1[6]);
    }
    if (*param_1 != 0) {
      sub_01bb51e0(*param_1);
    }
    sub_01bb51e0(param_1);
  }
  return;
}

int sub_01be6390(...);
// @baa 0x01bee430
void sub_01bee430(undefined4 * param_1)
{
  if (param_1 != (undefined4 *)0x0) {
    sub_01be6390(*param_1);
    sub_01bb51e0(param_1);
  }
  return;
}
