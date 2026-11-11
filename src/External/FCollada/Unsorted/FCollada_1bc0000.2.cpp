// FCollada_1bc0000.cpp (part 2 of 3): 5 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

int sub_01bb51e0(...);
// @baa 0x01bc7180
void sub_01bc7180(int param_1, int param_2)
{
  int iVar1;
  int iVar2;
  
  if (param_1 != 0) {
    iVar2 = 0;
    if (0 < param_2) {
      do {
        iVar1 = *(int *)(param_1 + iVar2 * 4);
        if (iVar1 != 0) {
          sub_01bb51e0(iVar1);
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < param_2);
    }
    sub_01bb51e0(param_1);
  }
  return;
}

int sub_01bb50e0(...);
int sub_01be63c0(...);
// @baa 0x01bc71e0
void sub_01bc71e0(undefined4 param_1, undefined4 * param_2, int param_3)
{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  if (param_3 != 0) {
    puVar2 = (undefined4 *)sub_01be63c0(param_3);
    *puVar2 = *param_2;
    puVar2[1] = param_1;
    *param_2 = (undefined4)(puVar2);
    return;
  }
  uVar1 = *param_2;
  puVar2 = (undefined4 *)sub_01bb50e0(8);
  *puVar2 = uVar1;
  puVar2[1] = param_1;
  *param_2 = (undefined4)(puVar2);
  return;
}

int sub_01bcdb30(...);
int sub_01bee410(...);
int sub_01bf20e0(...);
// @baa 0x01bcf150
void sub_01bcf150(int param_1)
{
  if (*(int *)(param_1 + 0x3c) != 0) {
    sub_01bcdb30(*(int *)(param_1 + 0x3c));
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (*(int *)(param_1 + 0x48) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x48) + 0x58) = 1;
    *(undefined4 *)(*(int *)(param_1 + 0x48) + 0x60) = 0;
  }
  if (*(int *)(param_1 + 0x38) != 0) {
    sub_01bf20e0(*(int *)(param_1 + 0x38));
  }
  if (*(int *)(param_1 + 0x44) != 0) {
    sub_01bee410(*(int *)(param_1 + 0x44));
  }
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  return;
}

int sub_01bcccd0(...);
int sub_01bcdbf0(...);
int sub_01bd1970(...);
int sub_01bd4590(...);
int sub_01bdbb10(...);
int sub_01bee430(...);
// @baa 0x01bcf1b0
void sub_01bcf1b0(int param_1)
{
  if (param_1 != 0) {
    if (*(int *)(param_1 + 0x44) != 0) {
      sub_01bee430(*(int *)(param_1 + 0x44));
      *(undefined4 *)(param_1 + 0x44) = 0;
    }
    if (*(int *)(param_1 + 0x24) != 0) {
      sub_01bb51e0(*(int *)(param_1 + 0x24));
      *(undefined4 *)(param_1 + 0x24) = 0;
    }
    if (*(int *)(param_1 + 0x38) != 0) {
      sub_01bdbb10(*(undefined4 *)(param_1 + 8),*(int *)(param_1 + 0x38));
      *(undefined4 *)(param_1 + 0x38) = 0;
    }
    if (*(int *)(param_1 + 0x40) != 0) {
      sub_01bd4590(*(int *)(param_1 + 0x40));
      *(undefined4 *)(param_1 + 0x40) = 0;
    }
    if (*(int *)(param_1 + 0x48) != 0) {
      sub_01bcccd0(*(int *)(param_1 + 0x48));
      *(undefined4 *)(param_1 + 0x48) = 0;
    }
    if (*(int *)(param_1 + 0x4c) != 0) {
      sub_01bd1970(*(int *)(param_1 + 0x4c));
      *(undefined4 *)(param_1 + 0x4c) = 0;
    }
    if (*(int *)(param_1 + 0x3c) != 0) {
      sub_01bcdbf0(*(int *)(param_1 + 0x3c));
      *(undefined4 *)(param_1 + 0x3c) = 0;
    }
    sub_01bb51e0(param_1);
  }
  return;
}

int sub_01bd9b90(...);
// @baa 0x01bcf260
void sub_01bcf260(int param_1, int param_2)
{
  if (param_1 != 0) {
    if (*(int *)(param_1 + 0x44) != 0) {
      sub_01bee430(*(int *)(param_1 + 0x44));
      *(undefined4 *)(param_1 + 0x44) = 0;
    }
    if (*(int *)(param_1 + 0x24) != 0) {
      sub_01bb51e0(*(int *)(param_1 + 0x24));
      *(undefined4 *)(param_1 + 0x24) = 0;
    }
    if (*(int *)(param_1 + 0x38) != 0) {
      sub_01bd9b90(*(int *)(param_1 + 0x38),param_2);
      *(undefined4 *)(param_1 + 0x38) = 0;
    }
    if (*(int *)(param_1 + 0x40) != 0) {
      sub_01bd4590(*(int *)(param_1 + 0x40));
      *(undefined4 *)(param_1 + 0x40) = 0;
    }
    if (*(int *)(param_1 + 0x48) != 0) {
      sub_01bcccd0(*(int *)(param_1 + 0x48));
      *(undefined4 *)(param_1 + 0x48) = 0;
    }
    if ((*(int *)(param_1 + 0x4c) != 0) && (param_2 != 0)) {
      sub_01bd1970(*(int *)(param_1 + 0x4c));
      *(undefined4 *)(param_1 + 0x4c) = 0;
    }
    if (*(int *)(param_1 + 0x3c) != 0) {
      sub_01bcdbf0(*(int *)(param_1 + 0x3c));
      *(undefined4 *)(param_1 + 0x3c) = 0;
    }
    sub_01bb51e0(param_1);
  }
  return;
}
