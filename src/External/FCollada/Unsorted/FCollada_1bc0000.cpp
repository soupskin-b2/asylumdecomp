// FCollada_1bc0000.cpp (part 1 of 3): 35 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

int sub_01bb51e0(...);
int sub_01bb55c0(...);
// @baa 0x01bc0030
void sub_01bc0030(int param_1)
{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (param_1 != 0) {
    if (*(int *)(param_1 + 0xc) != 0) {
      sub_01bb51e0(*(int *)(param_1 + 0xc));
      *(undefined4 *)(param_1 + 0xc) = 0;
    }
    iVar1 = *(int *)(param_1 + 0x20);
    if (iVar1 != 0) {
      iVar2 = *(int *)(iVar1 + 8);
      if ((iVar2 == 1) && (*(int *)(iVar1 + 0xc) != 0)) {
        sub_01bb55c0(*(int *)(iVar1 + 0xc));
        *(undefined4 *)(iVar1 + 0xc) = 0;
      }
      else if ((*(int *)(iVar1 + 0x10) != 0) && (1 < iVar2)) {
        iVar3 = 0;
        if (0 < iVar2) {
          do {
            sub_01bb55c0(*(undefined4 *)(*(int *)(iVar1 + 0x10) + iVar3 * 4));
            *(undefined4 *)(*(int *)(iVar1 + 0x10) + iVar3 * 4) = 0;
            iVar3 = iVar3 + 1;
          } while (iVar3 < *(int *)(iVar1 + 8));
        }
        sub_01bb51e0(*(undefined4 *)(iVar1 + 0x10));
        if (*(int *)(iVar1 + 0xc) != 0) {
          sub_01bb51e0(*(int *)(iVar1 + 0xc));
        }
      }
      sub_01bb51e0(*(undefined4 *)(param_1 + 0x20));
    }
    sub_01bb51e0(param_1);
  }
  return;
}

int sub_01bb53d0(...);
// @baa 0x01bc00f0
void sub_01bc00f0(undefined4 param_1, undefined4 param_2, undefined4 param_3)
{
  int iVar1;
  
  iVar1 = sub_01bb53d0(1,0x30);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 4) = param_3;
    *(undefined4 *)(iVar1 + 8) = param_2;
    *(undefined4 *)(iVar1 + 0xc) = param_1;
    *(undefined4 *)(iVar1 + 0x14) = param_2;
    *(undefined4 *)(iVar1 + 0x18) = 2;
    *(undefined2 *)(iVar1 + 0x1c) = 1;
    *(undefined2 *)(iVar1 + 0x1e) = 1;
  }
  return;
}

int sub_01bbb920(...);
// @baa 0x01bc0c40
undefined4 sub_01bc0c40(undefined4 param_1, undefined4 param_2)
{
  sub_01bbb920(0,param_2,"FnxPrintText");
  return 0;
}

extern "C" __declspec(dllimport) int _spawnlp(...);
// @baa 0x01bc0e20
undefined4 sub_01bc0e20(undefined4 param_1, char * param_2)
{
  if ((param_2 != (char *)0x0) && (*param_2 != '\0')) {
    _spawnlp(1,param_2,"<placeholder>",0);
  }
  return 0;
}

int sub_01bbb600(...);
int sub_01be6210(...);
// @baa 0x01bc18f0
undefined4 sub_01bc18f0(undefined4 param_1, undefined4 * param_2)
{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = sub_01bbb600(param_2,4,1,param_1);
  if (iVar1 == 1) {
    uVar2 = sub_01be6210(*param_2);
    *param_2 = uVar2;
    return 0;
  }
  return 0xffffffff;
}

int sub_01be6240(...);
// @baa 0x01bc1930
undefined4 sub_01bc1930(undefined4 param_1, undefined2 * param_2)
{
  undefined2 uVar1;
  int iVar2;
  
  iVar2 = sub_01bbb600(param_2,2,1,param_1);
  if (iVar2 == 1) {
    uVar1 = sub_01be6240(*param_2);
    *param_2 = uVar1;
    return 0;
  }
  return 0xffffffff;
}

// @baa 0x01bc1970
undefined4 sub_01bc1970(undefined4 param_1, undefined4 * param_2)
{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = sub_01bbb600(param_2,4,1,param_1);
  if (iVar1 == 1) {
    uVar2 = sub_01be6210(*param_2);
    *param_2 = uVar2;
    return 0;
  }
  return 0xffffffff;
}

int sub_01bbad30(...);
int sub_01be6260(...);
// @baa 0x01bc1b40
undefined4 sub_01bc1b40(undefined4 param_1, undefined4 param_2, int param_3)
{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  sub_01be6260(param_2,param_3);
  iVar1 = sub_01bbad30(param_2,4,param_3,param_1);
  if (iVar1 != param_3) {
    uVar2 = 0xffffffff;
  }
  sub_01be6260(param_2,param_3);
  return uVar2;
}

int sub_01be62a0(...);
// @baa 0x01bc1b80
undefined4 sub_01bc1b80(undefined4 param_1, undefined4 param_2, int param_3)
{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  sub_01be62a0(param_2,param_3);
  iVar1 = sub_01bbad30(param_2,2,param_3,param_1);
  if (iVar1 != param_3) {
    uVar2 = 0xffffffff;
  }
  sub_01be62a0(param_2,param_3);
  return uVar2;
}

int sub_01bc7180(...);
int sub_01bc71d0(...);
int sub_01be6390(...);
int sub_01be68a0(...);
// @baa 0x01bc1f90
void sub_01bc1f90(int param_1)
{
  if (param_1 != 0) {
    if (*(int *)(param_1 + 0x10) != 0) {
      sub_01bc7180(*(int *)(param_1 + 0x10),(int)*(short *)(param_1 + 4));
    }
    if (*(int *)(param_1 + 0x14) != 0) {
      sub_01bb51e0(*(int *)(param_1 + 0x14));
    }
    if (*(int *)(param_1 + 0x18) != 0) {
      sub_01be68a0(*(int *)(param_1 + 0x18));
      sub_01bb51e0(*(undefined4 *)(param_1 + 0x18));
    }
    if (*(int *)(param_1 + 0x1c) != 0) {
      sub_01bb51e0(*(int *)(param_1 + 0x1c));
    }
    if (*(int *)(param_1 + 0x20) != 0) {
      sub_01bb51e0(*(int *)(param_1 + 0x20));
    }
    if (*(int *)(param_1 + 0x24) != 0) {
      sub_01bc7180(*(int *)(param_1 + 0x24),
                   (int)*(short *)(param_1 + 6) - (int)*(short *)(param_1 + 4));
    }
    if (*(int *)(param_1 + 0x3c) != 0) {
      sub_01bb51e0(*(int *)(param_1 + 0x3c));
    }
    sub_01be6390(*(undefined4 *)(param_1 + 0x40));
    sub_01bc71d0(*(undefined4 *)(param_1 + 0x44));
    sub_01bb51e0(param_1);
  }
  return;
}

int sub_01bc71e0(...);
// @baa 0x01bc2b70
void sub_01bc2b70(int param_1, undefined4 param_2, undefined4 param_3)
{
  int iVar1;
  
  if (param_1 != 0) {
    sub_01bc71e0(param_1,param_2,param_3);
    for (iVar1 = *(int *)(param_1 + 0x10); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0xc)) {
      sub_01bc2b70(iVar1,param_2,param_3);
    }
  }
  return;
}

// @baa 0x01bc3060
void sub_01bc3060(short * param_1)
{
  if (param_1 != (short *)0x0) {
    if (*(int *)(param_1 + 2) != 0) {
      sub_01bb51e0(*(int *)(param_1 + 2));
    }
    if (*(int *)(param_1 + 6) != 0) {
      sub_01bb51e0(*(int *)(param_1 + 6));
    }
    if (*(int *)(param_1 + 8) != 0) {
      sub_01bb51e0(*(int *)(param_1 + 8));
    }
    if (*(int *)(param_1 + 10) != 0) {
      sub_01bb51e0(*(int *)(param_1 + 10));
    }
    if (*(int *)(param_1 + 0x14) != 0) {
      sub_01bc7180(*(int *)(param_1 + 0x14),(int)*param_1);
    }
    if (*(int *)(param_1 + 0x10) != 0) {
      sub_01bb51e0(*(int *)(param_1 + 0x10));
    }
    if (*(int *)(param_1 + 0x12) != 0) {
      sub_01bc71d0(*(int *)(param_1 + 0x12));
    }
    sub_01bb51e0(param_1);
  }
  return;
}

int sub_01bb5620(...);
// @baa 0x01bc4750
void sub_01bc4750(int * param_1)
{
  int iVar1;
  int iVar2;
  
  if (param_1 != (int *)0x0) {
    if (param_1[1] != 0) {
      iVar2 = 0;
      if (0 < *param_1) {
        do {
          iVar1 = *(int *)(param_1[1] + iVar2 * 4);
          if (iVar1 != 0) {
            sub_01bb5620(iVar1 + 8);
            if (param_1[2] == 0) {
              sub_01bb5620(iVar1);
            }
            sub_01bb51e0(iVar1);
          }
          iVar2 = iVar2 + 1;
        } while (iVar2 < *param_1);
      }
      sub_01bb51e0(param_1[1]);
    }
    sub_01bb51e0(param_1);
  }
  return;
}

// @baa 0x01bc4a70
void sub_01bc4a70(int param_1, int * param_2)
{
  short *psVar1;
  int iVar2;
  short sVar3;
  int iVar4;
  
  if (((param_1 != 0) && (param_2 != (int *)0x0)) && (iVar4 = 0, 0 < *param_2)) {
    do {
      iVar2 = *(int *)(param_2[1] + iVar4 * 4);
      sVar3 = 0;
      if (0 < *(short *)(iVar2 + 4)) {
        do {
          psVar1 = (short *)(*(int *)(iVar2 + 8) + sVar3 * 2);
          sVar3 = sVar3 + 1;
          *psVar1 = *(short *)(*(int *)(param_1 + 0x1c) + *psVar1 * 2);
        } while (sVar3 < *(short *)(iVar2 + 4));
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < *param_2);
  }
  return;
}

// @baa 0x01bc7080
undefined4 sub_01bc7080(undefined4 * param_1)
{
  undefined4 uVar1;
  
  if (param_1 != (undefined4 *)0x0) {
    uVar1 = *param_1;
    if (param_1[1] != 0) {
      sub_01bb51e0(param_1[1]);
    }
    sub_01bb51e0(param_1);
    return uVar1;
  }
  return 0;
}

int sub_01bb50e0(...);
// @baa 0x01bc7120
void sub_01bc7120(undefined4 param_1, undefined4 param_2)
{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)sub_01bb50e0(8);
  puVar1[1] = param_1;
  *puVar1 = param_2;
  return;
}

// @baa 0x01bc7140
undefined4 sub_01bc7140(undefined4 * param_1)
{
  undefined4 uVar1;
  
  if (param_1 != (undefined4 *)0x0) {
    uVar1 = *param_1;
    sub_01bb51e0(param_1);
    return uVar1;
  }
  return 0;
}

// @baa 0x01bc7160
int sub_01bc7160(undefined4 * param_1)
{
  int iVar1;
  
  iVar1 = 0;
  for (; param_1 != (undefined4 *)0x0; param_1 = (undefined4 *)*param_1) {
    iVar1 = iVar1 + 1;
  }
  return iVar1;
}

int sub_01be6320(...);
// @baa 0x01bc71c0
void sub_01bc71c0(undefined4 param_1)
{
  sub_01be6320(param_1,8);
  return;
}

int sub_01be63c0(...);
// @baa 0x01bc7230
void sub_01bc7230(undefined4 param_1, undefined4 * param_2, int param_3)
{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)*param_2;
  while (puVar1 = puVar2, puVar1 != (undefined4 *)0x0) {
    param_2 = puVar1;
    puVar2 = (undefined4 *)*puVar1;
  }
  if (param_3 != 0) {
    puVar2 = (undefined4 *)sub_01be63c0(param_3);
    puVar2[1] = param_1;
    *puVar2 = 0;
    *param_2 = (undefined4)(puVar2);
    return;
  }
  puVar2 = (undefined4 *)sub_01bb50e0(8);
  puVar2[1] = param_1;
  *puVar2 = 0;
  *param_2 = (undefined4)(puVar2);
  return;
}

// @baa 0x01bc72c0
undefined4 sub_01bc72c0(undefined4 * param_1, int param_2, undefined4 param_3)
{
  while( true ) {
    if (param_1 == (undefined4 *)0x0) {
      return 0xffffffff;
    }
    if (param_1[1] == param_2) break;
    param_1 = (undefined4 *)*param_1;
  }
  param_1[1] = param_3;
  return 0;
}

// @baa 0x01bc7350
undefined4 sub_01bc7350(int param_1, undefined4 * param_2)
{
  while( true ) {
    if (param_2 == (undefined4 *)0x0) {
      return 0;
    }
    if (param_2[1] == param_1) break;
    param_2 = (undefined4 *)*param_2;
  }
  return 1;
}

// @baa 0x01bc7380
void sub_01bc7380(undefined4 * param_1)
{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar1 = (undefined4 *)*param_1;
  puVar3 = (undefined4 *)0x0;
  while (puVar2 = puVar1, puVar2 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)*puVar2;
    *puVar2 = (undefined4)(puVar3);
    puVar3 = puVar2;
  }
  *param_1 = (undefined4)(puVar3);
  return;
}

int sub_01bb66d0(...);
// @baa 0x01bc73a0
void sub_01bc73a0(undefined4 param_1, undefined4 param_2)
{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  uVar1 = sub_01bb66d0(param_1);
  puVar2 = (undefined4 *)sub_01bb50e0(8);
  puVar2[1] = uVar1;
  *puVar2 = param_2;
  return;
}

// @baa 0x01bc7620
void sub_01bc7620(char * param_1)
{
  char cVar1;
  
  cVar1 = *param_1;
  while (cVar1 != '\0') {
    if (*param_1 == '\\') {
      *param_1 = '/';
    }
    param_1 = param_1 + 1;
    cVar1 = *param_1;
  }
  return;
}

int sub_01bcb8a0(...);
// @baa 0x01bcab10
undefined4 sub_01bcab10(int param_1, char * param_2, int param_3)
{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (((param_1 != 0) && (param_2 != (char *)0x0)) && (*param_2 != '\0')) {
    if (param_3 == 0) {
      uVar1 = *(undefined4 *)(param_1 + 0x40);
      *(undefined4 *)(param_1 + 0x40) = 0;
    }
    sub_01bcb8a0(param_2,*(undefined4 *)(param_1 + 0x48),param_1);
    if (param_3 == 0) {
      *(undefined4 *)(param_1 + 0x40) = uVar1;
    }
    return 1;
  }
  return 0;
}

int sub_01bbab40(...);
int sub_01bbac00(...);
int sub_01bcb530(...);
int sub_01bcd360(...);
int sub_01bcd9e0(...);
extern undefined4 g_023db678;
// @baa 0x01bcb820
undefined4 sub_01bcb820(undefined4 param_1, int * param_2, int * param_3)
{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if ((param_2 == (int *)0x0) || (param_3 == (int *)0x0)) {
    return 0xffffffff;
  }
  iVar1 = sub_01bbab40(param_1,&g_023db678);
  if (iVar1 != 0) {
    iVar2 = sub_01bcd360(iVar1,0,0);
    *param_2 = iVar2;
    iVar2 = sub_01bcb530(iVar1,0);
    *param_3 = iVar2;
    sub_01bbac00(iVar1);
    if ((*param_2 != 0) && (*param_3 != 0)) {
      uVar3 = sub_01bcd9e0(*param_2);
      *(undefined4 *)(*param_3 + 0x3c) = uVar3;
      return 0;
    }
  }
  return 0xffffffff;
}

int sub_01bcb750(...);
// @baa 0x01bcb900
void sub_01bcb900(undefined4 param_1, int * param_2, int * param_3, undefined4 * param_4, undefined4 param_5)
{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = sub_01bbab40(param_1,&g_023db678);
  if (iVar1 != 0) {
    iVar2 = sub_01bcd360(iVar1,0,0);
    *param_2 = iVar2;
    iVar2 = sub_01bcb530(iVar1,0);
    *param_3 = iVar2;
    uVar3 = sub_01bcb750(iVar1,param_5);
    *param_4 = uVar3;
    if (*param_2 != 0) {
      uVar3 = sub_01bcd9e0(*param_2);
      *(undefined4 *)(*param_3 + 0x3c) = uVar3;
    }
    sub_01bbac00(iVar1);
  }
  return;
}

int sub_01bcb440(...);
int sub_01bcb6f0(...);
int sub_01bcbab0(...);
extern undefined4 g_023df6f0;
// @baa 0x01bcb970
void sub_01bcb970(undefined4 param_1, int param_2, int param_3, undefined4 param_4, undefined4 param_5)
{
  int iVar1;
  
  if (((param_2 != 0) && (param_3 != 0)) &&
     (iVar1 = sub_01bbab40(param_1,&g_023df6f0), iVar1 != 0)) {
    sub_01bcbab0(iVar1,param_2,2,4);
    sub_01bcb440(iVar1,param_3);
    sub_01bcb6f0(iVar1,param_4,param_5);
    sub_01bbac00(iVar1);
  }
  return;
}

// @baa 0x01bcccd0
void sub_01bcccd0(int * param_1)
{
  if (param_1 != (int *)0x0) {
    if (param_1[9] != 0) {
      sub_01bb51e0(param_1[9]);
      param_1[9] = 0;
    }
    if (*param_1 != 0) {
      sub_01bb51e0(*param_1);
    }
    if (param_1[1] != 0) {
      sub_01bb51e0(param_1[1]);
    }
    if (param_1[2] != 0) {
      sub_01bb51e0(param_1[2]);
    }
    if (param_1[3] != 0) {
      sub_01bb51e0(param_1[3]);
    }
    sub_01bb51e0(param_1);
  }
  return;
}

int sub_01bee530(...);
int sub_01bee820(...);
int sub_01bef060(...);
int sub_01bef560(...);
int sub_01bf1760(...);
// @baa 0x01bcdb30
void sub_01bcdb30(int * param_1)
{
  if ((param_1[8] == 0) && (*param_1 != 0)) {
    sub_01bf1760(*param_1);
  }
  if (param_1[3] != 0) {
    sub_01bef560(param_1[3]);
  }
  if (param_1[1] != 0) {
    sub_01bef060(param_1[1]);
  }
  if (param_1[2] != 0) {
    sub_01bef060(param_1[2]);
  }
  if (param_1[4] != 0) {
    sub_01bee820(param_1[4]);
  }
  if (param_1[5] != 0) {
    sub_01bee530(param_1[5]);
  }
  return;
}

int sub_01bee560(...);
int sub_01bee890(...);
int sub_01beeff0(...);
int sub_01bef590(...);
int sub_01bf1690(...);
// @baa 0x01bcdbf0
void sub_01bcdbf0(int * param_1)
{
  if (param_1 != (int *)0x0) {
    if ((param_1[8] == 0) && (*param_1 != 0)) {
      sub_01bf1690(*param_1);
    }
    if (param_1[3] != 0) {
      sub_01bef590(param_1[3]);
    }
    if (param_1[1] != 0) {
      sub_01beeff0(param_1[1]);
    }
    if (param_1[2] != 0) {
      sub_01beeff0(param_1[2]);
    }
    if (param_1[4] != 0) {
      sub_01bee890(param_1[4]);
    }
    sub_01bee560(param_1[5]);
    sub_01bb51e0(param_1);
  }
  return;
}

void sub_01bcddb0();
// @baa 0x01bcde10
void sub_01bcde10(void) { sub_01bcddb0(); }

// @baa 0x01bce5e0
void sub_01bce5e0(int param_1)
{
  int iVar1;
  
  while (param_1 != 0) {
    iVar1 = *(int *)(param_1 + 0x10);
    sub_01bb51e0(param_1);
    param_1 = iVar1;
  }
  return;
}

int sub_01bee2d0(...);
int sub_01bee450(...);
// @baa 0x01bcf0e0
undefined4 * sub_01bcf0e0(int param_1)
{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined4 *)sub_01bb53d0(1,0x58);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *(undefined4 *)(param_1 + 0x44);
    puVar1[1] = *(undefined4 *)(param_1 + 0x48);
    puVar1[3] = 0;
    puVar1[4] = *(undefined4 *)(param_1 + 0x4c);
    puVar1[0xd] = *(undefined4 *)(param_1 + 0xa0);
    uVar2 = sub_01bee450(1000,1000);
    puVar1[0x11] = uVar2;
    sub_01bee2d0(puVar1 + 6,1000,1000);
    uVar2 = sub_01bcd9e0(param_1);
    puVar1[0xf] = uVar2;
  }
  return puVar1;
}
