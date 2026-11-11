// FCollada_1bb0000.cpp (part 2 of 2): 6 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

int sub_01bb50e0(...);
int __stdcall sub_01be1c40(int, int);
// @baa 0x01bbb7e0
undefined4 sub_01bbb7e0(void)
{
  undefined4 uVar1;
  uVar1 = sub_01bb50e0(0x2c);
  sub_01be1c40(3,uVar1);
  return uVar1;
}

int __stdcall sub_01be1ca0(int);
// @baa 0x01bbb800
void sub_01bbb800(void)
{
  sub_01be1ca0(3);
  return;
}

// @baa 0x01bbb810
void sub_01bbb810(void)
{
  int iVar1;
  iVar1 = sub_01be1ca0(3);
  if (iVar1 != 0) {
    *(int *)(iVar1 + 0x28) = *(int *)(iVar1 + 0x28) + 1;
  }
  return;
}

// @baa 0x01bbb820
void sub_01bbb820(void)
{
  int iVar1;
  iVar1 = sub_01be1ca0(3);
  if (iVar1 != 0) {
    *(int *)(iVar1 + 0x28) = *(int *)(iVar1 + 0x28) + -1;
  }
  return;
}

int sub_01bb51e0(...);
int __stdcall sub_01be1ce0(int);
// @baa 0x01bbb830
void sub_01bbb830(void)
{
  int iVar1;
  int iVar2;
  iVar1 = sub_01be1ca0(3);
  if (iVar1 != 0) {
    iVar2 = sub_01be1ca0(3);
    if (iVar2 != 0) {
      *(int *)(iVar2 + 0x28) = *(int *)(iVar2 + 0x28) + -1;
    }
    if (*(int *)(iVar1 + 0x28) == 0) {
      sub_01bb51e0(iVar1);
      sub_01be1c40(3,0);
      sub_01be1ce0(3);
    }
  }
  return;
}

void sub_01be4ce0();
// @baa 0x01bbf750
void sub_01bbf750(void) { sub_01be4ce0(); }
