// FCollada_1bd0000.cpp (part 1 of 2): 19 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

int sub_01bb51e0(...);
int sub_01be68a0(...);
// @baa 0x01bd02e0
void sub_01bd02e0(undefined4 param_1)
{
  sub_01be68a0(param_1);
  sub_01bb51e0(param_1);
  return;
}

// @baa 0x01bd0300
uint sub_01bd0300(undefined4 param_1, int param_2)
{
  int iVar1;
  
  iVar1 = (**(code **)(param_2 + 0x2c))(param_2,param_1);
  if (iVar1 != 0) {
    return (uint)*(ushort *)(iVar1 + 0xc);
  }
  return 0xffffffff;
}

// @baa 0x01bd18b0
void sub_01bd18b0(int param_1, ushort param_2)
{
  int *piVar1;
  uint uVar2;
  
  if (param_1 != 0) {
    if (0 < (short)param_2) {
      piVar1 = (int *)(param_1 + 8);
      uVar2 = (uint)param_2;
      do {
        if (piVar1[-2] != 0) {
          sub_01bb51e0(piVar1[-2]);
        }
        if (piVar1[-1] != 0) {
          sub_01bb51e0(piVar1[-1]);
        }
        if (*piVar1 != 0) {
          sub_01bb51e0(*piVar1);
        }
        if (piVar1[2] != 0) {
          sub_01bb51e0(piVar1[2]);
        }
        piVar1 = piVar1 + 5;
        uVar2 = uVar2 - 1;
      } while (uVar2 != 0);
    }
    sub_01bb51e0(param_1);
  }
  return;
}

int sub_01bd16b0(...);
int sub_01bd1730(...);
int sub_01bd17b0(...);
int sub_01bd1810(...);
// @baa 0x01bd1c10
void sub_01bd1c10(int param_1)
{
  if (param_1 != 0) {
    sub_01bd1810(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x50));
    sub_01bd16b0(*(undefined4 *)(param_1 + 0x5c),*(undefined4 *)(param_1 + 0x58));
    sub_01bd1730(*(undefined4 *)(param_1 + 100),*(undefined4 *)(param_1 + 0x60));
    sub_01bd17b0(*(undefined4 *)(param_1 + 0x6c),*(undefined4 *)(param_1 + 0x68));
    *(undefined4 *)(param_1 + 0x54) = 0;
    *(undefined4 *)(param_1 + 0x5c) = 0;
    *(undefined4 *)(param_1 + 100) = 0;
    *(undefined4 *)(param_1 + 0x6c) = 0;
    *(undefined4 *)(param_1 + 0x50) = 0;
    *(undefined4 *)(param_1 + 0x58) = 0;
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined4 *)(param_1 + 0x68) = 0;
  }
  return;
}

// @baa 0x01bd4550
void sub_01bd4550(int param_1)
{
  if (param_1 != 0) {
    if (*(int *)(param_1 + 0xc) != 0) {
      sub_01bb51e0(*(int *)(param_1 + 0xc));
    }
    if (*(int *)(param_1 + 8) != 0) {
      sub_01bb51e0(*(int *)(param_1 + 8));
    }
    if (*(int *)(param_1 + 0x10) != 0) {
      sub_01bb51e0(*(int *)(param_1 + 0x10));
    }
  }
  return;
}

int sub_01bbac00(...);
int sub_01bd46b0(...);
int sub_01bf33d0(...);
extern undefined4 g_023df6f0;
extern undefined4 g_023f78ac;
// @baa 0x01bd4780
undefined4 sub_01bd4780(undefined4 param_1, undefined4 param_2, undefined4 param_3, int param_4)
{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  puVar1 = (undefined *)(&g_023f78ac);
  if (param_4 == 0) {
    puVar1 = (undefined *)(&g_023df6f0);
  }
  iVar2 = sub_01bf33d0(param_1,puVar1);
  if (iVar2 != 0) {
    uVar3 = sub_01bd46b0(iVar2,param_2,param_3);
    sub_01bbac00(iVar2);
    return uVar3;
  }
  return 1;
}

int sub_01bb50e0(...);
int sub_01bc18f0(...);
int sub_01bc1ac0(...);
int sub_01bd4980(...);
// @baa 0x01bd4bf0
undefined4 sub_01bd4bf0(undefined4 param_1)
{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int local_8;
  undefined1 local_4 [4];
  
  uVar3 = 0;
  sub_01bc18f0(param_1,local_4);
  sub_01bc18f0(param_1,&local_8);
  iVar1 = sub_01bb50e0(local_8 * 4);
  if (iVar1 != 0) {
    iVar2 = sub_01bc1ac0(param_1,iVar1,local_8);
    if (iVar2 == 0) {
      uVar3 = sub_01bd4980(local_8,iVar1,param_1);
    }
    sub_01bb51e0(iVar1);
  }
  return uVar3;
}

void sub_01bd4d00();
// @baa 0x01bd4dc0
void sub_01bd4dc0(void) { sub_01bd4d00(); }

int sub_01bcf0e0(...);
int sub_01bd5260(...);
int sub_01bdd240(...);
int sub_01bdf1b0(...);
// @baa 0x01bd5570
int sub_01bd5570(int param_1, int param_2, int param_3, undefined4 param_4)
{
  int iVar1;
  int iVar2;
  
  if (((param_1 == 0) || (param_2 == 0)) || (param_3 == 0)) {
    return 0;
  }
  iVar1 = sub_01bd5260(param_1,1);
  if (iVar1 == 0) {
    return 0;
  }
  iVar2 = sub_01bcf0e0(param_2);
  if (iVar2 == 0) {
    return 0;
  }
  *(int *)(iVar2 + 0x40) = param_3;
  *(undefined4 *)(iVar1 + 0x18) = 1;
  sub_01bdd240(param_2,param_1,iVar1,iVar2,0,param_4);
  sub_01bdf1b0(iVar1);
  return iVar2;
}

int sub_01bc0030(...);
int sub_01bcdbf0(...);
// @baa 0x01bda640
void sub_01bda640(int param_1)
{
  int iVar1;
  
  if (param_1 != 0) {
    if (*(int *)(param_1 + 4) != 0) {
      iVar1 = *(int *)(*(int *)(param_1 + 4) + 0x130);
      if (iVar1 != 0) {
        sub_01bc0030(iVar1);
      }
      sub_01bb51e0(*(undefined4 *)(param_1 + 4));
      *(undefined4 *)(param_1 + 4) = 0;
    }
    if (*(int *)(param_1 + 8) != 0) {
      sub_01bcdbf0(*(int *)(param_1 + 8));
    }
    sub_01bb51e0(param_1);
  }
  return;
}

int sub_01bcd9e0(...);
// @baa 0x01bda700
void sub_01bda700(int param_1, int param_2)
{
  undefined4 uVar1;
  
  if ((param_1 != 0) && (param_2 != 0)) {
    uVar1 = sub_01bcd9e0(param_2);
    *(undefined4 *)(param_1 + 8) = uVar1;
  }
  return;
}

int sub_01bd9a80(...);
// @baa 0x01bdbb10
void sub_01bdbb10(undefined4 param_1, undefined4 param_2)
{
  sub_01bd9a80(param_2);
  return;
}

// @baa 0x01bdcb20
undefined4 sub_01bdcb20(undefined4 * param_1, undefined4 * param_2, undefined4 * param_3, undefined4 * param_4, undefined4 * param_5, undefined4 * param_6, undefined4 * param_7, undefined4 * param_8, undefined4 * param_9, undefined4 * param_10, undefined4 * param_11)
{
  if (param_1 == (undefined4 *)0x0) {
    return 0xffffffff;
  }
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_1;
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = param_1[1];
  }
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = param_1[2];
  }
  if (param_5 != (undefined4 *)0x0) {
    *param_5 = param_1[3];
  }
  if (param_6 != (undefined4 *)0x0) {
    *param_6 = param_1[4];
  }
  if (param_7 != (undefined4 *)0x0) {
    *param_7 = param_1[5];
  }
  if (param_8 != (undefined4 *)0x0) {
    *param_8 = param_1[6];
  }
  if (param_9 != (undefined4 *)0x0) {
    *param_9 = param_1[7];
  }
  if (param_10 != (undefined4 *)0x0) {
    *param_10 = param_1[8];
  }
  if (param_11 != (undefined4 *)0x0) {
    *param_11 = param_1[9];
  }
  return 0;
}

// @baa 0x01bdce30
undefined4 sub_01bdce30(int param_1)
{
  if (((param_1 != 0) && (*(int *)(*(int *)(param_1 + 0x38) + 0x5c) == 1)) &&
     (*(int *)(*(int *)(param_1 + 0x38) + 0xac) == 1)) {
    return 1;
  }
  return 0;
}

// @baa 0x01bdf220
void sub_01bdf220(void)
{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)sub_01bb50e0(8);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
  }
  return;
}

// @baa 0x01bdf240
void sub_01bdf240(int * param_1)
{
  if (param_1 != (int *)0x0) {
    if (*param_1 != 0) {
      sub_01bc0030(*param_1);
    }
    *param_1 = 0;
    param_1[1] = 0;
    sub_01bb51e0(param_1);
  }
  return;
}

// @baa 0x01bdf560
void sub_01bdf560(int * param_1)
{
  int *piVar1;
  
  while (param_1 != (int *)0x0) {
    piVar1 = (int *)param_1[1];
    if (*param_1 != 0) {
      sub_01bc0030(*param_1);
    }
    *param_1 = 0;
    param_1[1] = 0;
    sub_01bb51e0(param_1);
    param_1 = piVar1;
  }
  return;
}

// @baa 0x01bdfef0
void sub_01bdfef0(int param_1, char param_2, int param_3, int param_4)
{
  int iVar1;
  
  iVar1 = 0;
  if (0 < *(int *)(param_4 + 0x58)) {
    do {
      *(int *)(param_1 + iVar1 * 4) =
           *(int *)(*(int *)(*(int *)(param_4 + 0x18) + iVar1 * 4) + param_2 * 4) + param_3;
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(param_4 + 0x58));
  }
  return;
}

// @baa 0x01bdff30
undefined4 sub_01bdff30(int param_1)
{
  while( true ) {
    if (param_1 == 0) {
      return 0;
    }
    if (*(int *)(param_1 + 4) != 0) break;
    param_1 = **(int **)(param_1 + 8);
  }
  return *(undefined4 *)(param_1 + 4);
}
