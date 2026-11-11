// FCollada_1be0000.cpp (part 1 of 4): 65 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

int sub_01bb53d0(...);
// @baa 0x01be0480
void sub_01be0480(void)
{
  sub_01bb53d0(1,0x38);
  return;
}

// @baa 0x01be0ad0
void __fastcall sub_01be0ad0(undefined4 param_1, int * param_2)
{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = *param_2;
  if (*(char *)(**(int **)(iVar2 + 0xc) + 1) != '\0') {
    *(int *)(**(int **)(iVar2 + 0xc) + 8) =
         *(int *)(iVar2 + 0x18) + *(int *)(**(int **)(iVar2 + 0xc) + 8) * 4;
  }
  iVar2 = *param_2;
  iVar4 = 1;
  if (1 < *(int *)(iVar2 + 0x24)) {
    iVar3 = 0xc;
    do {
      piVar1 = (int *)(**(int **)(iVar2 + 0xc) + 4 + iVar3);
      *piVar1 = *piVar1 + *(int *)(iVar2 + 0x2c);
      iVar2 = *param_2;
      if (*(char *)(**(int **)(iVar2 + 0xc) + 1 + iVar3) != '\0') {
        *(int *)(**(int **)(iVar2 + 0xc) + 8 + iVar3) =
             *(int *)(iVar2 + 0x18) + *(int *)(**(int **)(iVar2 + 0xc) + 8 + iVar3) * 4;
      }
      iVar2 = *param_2;
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 0xc;
    } while (iVar4 < *(int *)(iVar2 + 0x24));
  }
  iVar2 = *param_2;
  iVar4 = 0;
  if (0 < *(int *)(iVar2 + 0x24)) {
    do {
      *(int *)(*(int *)(iVar2 + 0x18) + iVar4 * 4) =
           **(int **)(iVar2 + 0xc) + *(int *)(*(int *)(iVar2 + 0x18) + iVar4 * 4) * 0xc;
      iVar2 = *param_2;
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(iVar2 + 0x24));
  }
  return;
}

void * sub_01a37612(void *, int, size_t);
int sub_01bb50e0(...);
// @baa 0x01be1d20
void sub_01be1d20(int param_1)
{
  void *_Dst;
  
  _Dst = (void *)sub_01bb50e0(0x200);
  *(void **)(param_1 + 0x2730) = _Dst;
  sub_01a37612(_Dst,0,0x200);
  *(int *)(param_1 + 0x2734) = param_1;
  return;
}

int sub_01bb51e0(...);
// @baa 0x01be2010
void sub_01be2010(int param_1)
{
  sub_01bb51e0(*(undefined4 *)(param_1 + 0x2730));
  *(undefined4 *)(param_1 + 0x2730) = 0;
  return;
}

int sub_01be1f40(...);
int sub_01be20e0(...);
// @baa 0x01be21d0
void sub_01be21d0(int param_1, int param_2)
{
  if ((*(int *)(param_1 + 0x18) == 0) && (*(int *)(param_1 + 0x1c) != 0)) {
    *(undefined4 *)(param_1 + 0x18) = 1;
    sub_01be20e0(param_1,param_2,param_1 + 0x20,*(int *)(param_1 + 0x1c));
  }
  if ((param_2 == 0) ||
     (((*(int *)(param_2 + 4) == 0 && (*(int *)(param_2 + 8) == 0)) &&
      (*(int *)(param_2 + 0xc) == 0)))) {
    sub_01be1f40(param_1);
  }
  else if (*(code **)(param_2 + 0xc) != (code *)0x0) {
    (**(code **)(param_2 + 0xc))(*(undefined4 *)(param_1 + 0x2734));
    return;
  }
  return;
}

// @baa 0x01be2240
int sub_01be2240(void) { return 0; }

// @baa 0x01be2250
int sub_01be2250(void) { return 0; }

// @baa 0x01be2260
int sub_01be2260(void) { return 0; }

// @baa 0x01be2270
int sub_01be2270(void) { return 0; }

// @baa 0x01be2280
int sub_01be2280(void) { return 0; }

// @baa 0x01be2290
int sub_01be2290(void) { return 0; }

// @baa 0x01be22a0
int sub_01be22a0(void) { return 0; }

// @baa 0x01be22b0
int sub_01be22b0(void) { return 0; }

extern char g_01e66a54[];
// @baa 0x01be22c0
int sub_01be22c0(void) { return (int)g_01e66a54; }

// @baa 0x01be22d0
int sub_01be22d0(void) { return 0; }

// @baa 0x01be22e0
void sub_01be22e0(void) {  }

// @baa 0x01be24f0
int sub_01be24f0(void) { return 0; }

// @baa 0x01be2500
int sub_01be2500(void) { return 0; }

// @baa 0x01be2510
int sub_01be2510(void) { return 0; }

// @baa 0x01be2520
int sub_01be2520(void) { return 0; }

// @baa 0x01be2530
int sub_01be2530(void) { return 0; }

// @baa 0x01be2540
int sub_01be2540(void) { return 0; }

// @baa 0x01be2550
int sub_01be2550(void) { return 0; }

// @baa 0x01be2560
int sub_01be2560(void) { return (int)g_01e66a54; }

// @baa 0x01be2570
int sub_01be2570(void) { return 0; }

// @baa 0x01be2580
int sub_01be2580(void) { return 0; }

// @baa 0x01be2590
void sub_01be2590(void) {  }

int sub_01bb6960(...);
// @baa 0x01be27c0
undefined4 sub_01be27c0(int param_1, undefined1 * param_2, int param_3)
{
  if (((param_1 != 0) && (param_2 != (undefined1 *)0x0)) && (param_3 != 0)) {
    if (*(int *)(param_1 + 4) != 0) {
      sub_01bb6960(param_2,*(int *)(param_1 + 4),param_3);
      sub_01bb51e0(*(undefined4 *)(param_1 + 4));
      *(undefined4 *)(param_1 + 4) = 0;
      return 0;
    }
    *param_2 = 0;
    return 0;
  }
  return 2;
}

// @baa 0x01be48c0
void sub_01be48c0(void) {  }

// @baa 0x01be48d0
void sub_01be48d0(void) {  }

int sub_01be4e00(...);
// @baa 0x01be4c60
undefined4 sub_01be4c60(int param_1)
{
  sub_01be4e00(*(undefined4 *)(param_1 + 0x3c));
  return 0;
}

int sub_01be4f20(void);
// @baa 0x01be4c80
undefined4 sub_01be4c80(void)
{
  sub_01be4f20();
  return 0;
}

// @baa 0x01be4c90
int sub_01be4c90(void) { return 0; }

// @baa 0x01be4ca0
int sub_01be4ca0(void) { return 0; }

// @baa 0x01be4cb0
int sub_01be4cb0(void) { return 0; }

// @baa 0x01be4cc0
int sub_01be4cc0(void) { return 0; }

// @baa 0x01be4cd0
int sub_01be4cd0(void) { return 0; }

// @baa 0x01be4ce0
int sub_01be4ce0(void) { return 0; }

// @baa 0x01be4cf0
int sub_01be4cf0(void) { return 0; }

// @baa 0x01be4d00
int sub_01be4d00(void) { return 0; }

int sub_01be4fd0(void);
int sub_01bf51e0(...);
// @baa 0x01be4e10
void sub_01be4e10(void)
{
  int iVar1;
  int iVar2;
  
  iVar1 = sub_01be4fd0();
  *(undefined4 *)(iVar1 + 0x10) = 0;
  *(undefined4 *)(iVar1 + 0x14) = 0;
  *(undefined4 *)(iVar1 + 8) = 0;
  iVar2 = sub_01bf51e0(iVar1);
  *(int *)(iVar1 + 0xc) = iVar2;
  *(uint *)(iVar1 + 0x18) = (uint)(iVar2 == -1);
  return;
}

int sub_01bf51c0(void);
int sub_01bf51d0(void);
// @baa 0x01be4e40
void sub_01be4e40(void)
{
  int iVar1;
  
  iVar1 = sub_01be4fd0();
  sub_01bf51c0();
  *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
  sub_01bf51d0();
  return;
}

// @baa 0x01be6200
int sub_01be6200(void) { return 1; }

// @baa 0x01be6210
uint sub_01be6210(uint param_1)
{
  return (param_1 & 0xff00 | param_1 << 0x10) << 8 | (param_1 & 0xff0000 | param_1 >> 0x10) >> 8;
}

// @baa 0x01be6390
void sub_01be6390(int param_1)
{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  if (param_1 != 0) {
    puVar2 = *(undefined4 **)(param_1 + 4);
    while (puVar2 != (undefined4 *)0x0) {
      puVar1 = (undefined4 *)*puVar2;
      sub_01bb51e0(puVar2);
      puVar2 = puVar1;
    }
    sub_01bb51e0(param_1);
  }
  return;
}

int sub_01be62d0(...);
// @baa 0x01be63c0
int * sub_01be63c0(int * param_1)
{
  int *_Dst;
  
  if (param_1 == (int *)0x0) {
    return (int *)0x0;
  }
  _Dst = (int *)*param_1;
  if (_Dst == (int *)0x0) {
    sub_01be62d0(param_1);
    _Dst = (int *)*param_1;
    if (_Dst == (int *)0x0) {
      return (int *)0x0;
    }
  }
  *param_1 = *_Dst;
  sub_01a37612(_Dst,0,param_1[3]);
  return _Dst;
}

// @baa 0x01be6400
void sub_01be6400(undefined4 * param_1, undefined4 * param_2)
{
  if ((param_1 != (undefined4 *)0x0) && (param_2 != (undefined4 *)0x0)) {
    *param_1 = *param_2;
    *param_2 = (undefined4)(param_1);
  }
  return;
}

// @baa 0x01be6770
int sub_01be6770(void) { return 0; }

int sub_01be6650(void);
int sub_01be66b0(void);
int sub_01be66f0(void);
int sub_01be6930(void);
int sub_01be6a20(void);
int sub_01be6ab0(void);
// @baa 0x01be6bb0
void sub_01be6bb0(undefined4 * param_1, int param_2)
{
  *param_1 = (undefined4)(param_1 + 1);
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[5] = 4;
  param_1[6] = 0;
  param_1[7] = 0xc;
  param_1[8] = 0x1c;
  param_1[9] = 3;
  param_1[10] = param_2;
  if (param_2 == 0) {
    param_1[0xb] = (undefined4)(sub_01be6650);
    param_1[0xc] = (undefined4)(sub_01be6930);
    return;
  }
  if (param_2 == 1) {
    param_1[0xb] = (undefined4)(&sub_01be66b0);
    param_1[0xc] = (undefined4)(&sub_01be6a20);
    return;
  }
  param_1[0xb] = (undefined4)(sub_01be66f0);
  param_1[0xc] = (undefined4)(sub_01be6ab0);
  return;
}

int sub_01bc71e0(...);
int sub_01bc7380(...);
// @baa 0x01be7160
undefined4 sub_01be7160(undefined4 * param_1, undefined4 param_2)
{
  undefined4 local_4;
  
  local_4 = 0;
  for (; param_1 != (undefined4 *)0x0; param_1 = (undefined4 *)*param_1) {
    sub_01bc71e0(param_1[1],&local_4,param_2);
  }
  sub_01bc7380(&local_4);
  return local_4;
}

int sub_01bc73d0(...);
// @baa 0x01be8980
void sub_01be8980(int * param_1, undefined4 param_2)
{
  int *piVar1;
  
  if (param_1 != (int *)0x0) {
    if (*param_1 != 0) {
      sub_01bc73d0(param_1,param_2);
    }
    if (param_1[1] != 0) {
      sub_01bc73d0(param_1 + 1,param_2);
    }
    if (param_1[3] != 0) {
      sub_01bb51e0(param_1[3]);
    }
    if (param_1[4] != 0) {
      sub_01bb51e0(param_1[4]);
    }
    piVar1 = (int *)param_1[9];
    if (piVar1 != (int *)0x0) {
      do {
        if (piVar1[1] != 0) {
          sub_01be8980((int *)(piVar1[1]), param_2);
        }
        piVar1 = (int *)*piVar1;
      } while (piVar1 != (int *)0x0);
      sub_01bc73d0(param_1 + 9,param_2);
    }
    sub_01bb51e0(param_1);
  }
  return;
}

// @baa 0x01be8e70
undefined4 sub_01be8e70(int param_1)
{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  
  if ((param_1 != 0) && (*(int *)(param_1 + 0xc) != 0)) {
    for (puVar1 = *(undefined4 **)(param_1 + 4); puVar1 != (undefined4 *)0x0;
        puVar1 = (undefined4 *)*puVar1) {
      uVar3 = puVar1[1];
      for (puVar2 = *(undefined4 **)(param_1 + 8); puVar2 != (undefined4 *)0x0;
          puVar2 = (undefined4 *)*puVar2) {
        iVar4 = puVar2[1];
        sub_01bc71e0(uVar3,iVar4 + 4,*(undefined4 *)(param_1 + 0x18));
        sub_01bc71e0(iVar4,uVar3,*(undefined4 *)(param_1 + 0x18));
      }
    }
  }
  return 0;
}

// @baa 0x01beb100
void sub_01beb100(undefined4 * param_1)
{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  if (0 < (int)param_1[5]) {
    iVar3 = 0;
    do {
      iVar1 = *(int *)(iVar3 + 0x44 + param_1[1]);
      if (iVar1 != 0) {
        sub_01bb51e0(iVar1);
        *(undefined4 *)(iVar3 + 0x40 + param_1[1]) = 0;
        *(undefined4 *)(iVar3 + 0x44 + param_1[1]) = 0;
      }
      if (*(int *)(iVar3 + param_1[1]) != 0) {
        sub_01bb51e0(*(int *)(iVar3 + param_1[1]));
      }
      iVar1 = *(int *)(iVar3 + 4 + param_1[1]);
      if (iVar1 != 0) {
        sub_01bb51e0(iVar1);
      }
      iVar1 = *(int *)(iVar3 + 8 + param_1[1]);
      if (iVar1 != 0) {
        sub_01bb51e0(iVar1);
      }
      iVar1 = *(int *)(iVar3 + 0xc + param_1[1]);
      if (iVar1 != 0) {
        sub_01bb51e0(iVar1);
      }
      iVar1 = *(int *)(iVar3 + 0x10 + param_1[1]);
      if (iVar1 != 0) {
        sub_01bb51e0(iVar1);
      }
      iVar1 = *(int *)(iVar3 + 0x14 + param_1[1]);
      if (iVar1 != 0) {
        sub_01bb51e0(iVar1);
      }
      iVar1 = *(int *)(iVar3 + 0x18 + param_1[1]);
      if (iVar1 != 0) {
        sub_01bb51e0(iVar1);
      }
      iVar1 = *(int *)(iVar3 + 0x38 + param_1[1]);
      if (iVar1 != 0) {
        sub_01bb51e0(iVar1);
      }
      iVar1 = *(int *)(iVar3 + 0x3c + param_1[1]);
      if (iVar1 != 0) {
        sub_01bb51e0(iVar1);
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0x48;
    } while (iVar2 < (int)param_1[5]);
  }
  sub_01bb51e0(*param_1);
  sub_01bb51e0(param_1[1]);
  sub_01bb51e0(param_1[2]);
  sub_01bb51e0(param_1[3]);
  sub_01bb51e0(param_1);
  return;
}

// @baa 0x01bee530
void sub_01bee530(int param_1)
{
  sub_01a37612(*(void **)(param_1 + 4),0,*(int *)(param_1 + 8) * 4);
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return;
}

// @baa 0x01bee560
void sub_01bee560(undefined4 * param_1)
{
  sub_01bb51e0(param_1[1]);
  sub_01bb51e0(*param_1);
  sub_01bb51e0(param_1);
  return;
}

// @baa 0x01bee6c0
void sub_01bee6c0(int param_1)
{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)sub_01bb50e0(0x18);
  *puVar1 = *(undefined4 *)(param_1 + 0x70);
  puVar1[1] = *(undefined4 *)(param_1 + 0x94);
  puVar1[2] = *(undefined4 *)(param_1 + 0x18);
  puVar1[3] = *(undefined4 *)(param_1 + 0xc4);
  puVar1[4] = *(undefined4 *)(param_1 + 0xf4);
  puVar1[5] = *(undefined4 *)(param_1 + 0xf8);
  return;
}

// @baa 0x01bee820
void sub_01bee820(int param_1)
{
  if (*(int *)(param_1 + 0x24) != 0) {
    sub_01a37612(*(void **)(param_1 + 0xc),0,*(int *)(param_1 + 0x14) * 4);
  }
  sub_01a37612(*(void **)(param_1 + 8),0,*(int *)(param_1 + 0x14) * 4);
  sub_01a37612(*(void **)(param_1 + 4),0,*(int *)(param_1 + 0x10) * 4);
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  return;
}

// @baa 0x01bee890
void sub_01bee890(undefined4 * param_1)
{
  if (param_1 != (undefined4 *)0x0) {
    if (param_1[9] != 0) {
      sub_01bb51e0(param_1[3]);
    }
    sub_01bb51e0(param_1[2]);
    sub_01bb51e0(param_1[1]);
    sub_01bb51e0(*param_1);
    sub_01bb51e0(param_1[0xe]);
    sub_01bb51e0(param_1[0xf]);
    sub_01bb51e0(param_1);
  }
  return;
}

// @baa 0x01beeda0
int * sub_01beeda0(int param_1)
{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)sub_01bb50e0(0x14);
  piVar1[2] = *(int *)(param_1 + 0x20);
  piVar1[3] = *(int *)(param_1 + 0x18);
  piVar1[4] = *(int *)(param_1 + 0x70);
  iVar2 = sub_01bb50e0(*(int *)(param_1 + 0x20) * 4);
  piVar1[1] = iVar2;
  iVar2 = sub_01bb50e0(*(int *)(param_1 + 0x20) * 4);
  *piVar1 = iVar2;
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x20)) {
    do {
      *(undefined4 *)(*piVar1 + iVar2 * 4) = *(undefined4 *)(*(int *)(param_1 + 0x24) + iVar2 * 4);
      *(undefined4 *)(piVar1[1] + iVar2 * 4) = 1;
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_1 + 0x20));
  }
  return piVar1;
}

// @baa 0x01beee20
void sub_01beee20(int * param_1)
{
  if (param_1 != (int *)0x0) {
    if (*param_1 != 0) {
      sub_01bb51e0(*param_1);
    }
    if (param_1[1] != 0) {
      sub_01bb51e0(param_1[1]);
    }
    sub_01bb51e0(param_1);
  }
  return;
}

// @baa 0x01beeff0
void sub_01beeff0(int param_1)
{
  if (param_1 != 0) {
    if (*(int *)(param_1 + 0x14) != 0) {
      sub_01bb51e0(*(int *)(param_1 + 0x14));
    }
    if (*(int *)(param_1 + 0x20) != 0) {
      sub_01bb51e0(*(int *)(param_1 + 0x20));
    }
    if (*(int *)(param_1 + 0x1c) != 0) {
      sub_01bb51e0(*(int *)(param_1 + 0x1c));
    }
    if (*(int *)(param_1 + 4) != 0) {
      sub_01bb51e0(*(int *)(param_1 + 4));
    }
    if (*(int *)(param_1 + 8) != 0) {
      sub_01bb51e0(*(int *)(param_1 + 8));
    }
    sub_01bb51e0(param_1);
  }
  return;
}

// @baa 0x01bef060
void sub_01bef060(int param_1)
{
  *(undefined4 *)(param_1 + 0x24) = 0;
  sub_01a37612(*(void **)(param_1 + 0x1c),0,*(int *)(param_1 + 0x18) * 4);
  return;
}

// @baa 0x01bef350
void sub_01bef350(int param_1)
{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)sub_01bb50e0(0xc);
  *puVar1 = *(undefined4 *)(param_1 + 0x34);
  puVar1[1] = *(undefined4 *)(param_1 + 0x18);
  puVar1[2] = *(undefined4 *)(param_1 + 0xb8);
  return;
}

// @baa 0x01bef560
void sub_01bef560(int * param_1)
{
  if (param_1 != (int *)0x0) {
    param_1[8] = 0;
    sub_01a37612((void *)param_1[3],0,*param_1 * 4);
  }
  return;
}

// @baa 0x01bef590
void sub_01bef590(int param_1)
{
  if (param_1 != 0) {
    if (*(int *)(param_1 + 0x10) != 0) {
      sub_01bb51e0(*(int *)(param_1 + 0x10));
    }
    if (*(int *)(param_1 + 0xc) != 0) {
      sub_01bb51e0(*(int *)(param_1 + 0xc));
    }
    if (*(int *)(param_1 + 0x18) != 0) {
      sub_01bb51e0(*(int *)(param_1 + 0x18));
    }
    sub_01bb51e0(param_1);
  }
  return;
}
