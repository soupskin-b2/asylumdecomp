// Editor_0460000.cpp: 48 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C { int sub_00460010(void); };

// @baa 0x00460010
int C::sub_00460010(void) { return *(int*)((char*)this + 8); }

struct C_00460020 {
    int sub_00460020(int);
};

// @baa 0x00460020
int C_00460020::sub_00460020(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0xc;
}

// @baa 0x00460030
uint sub_00460030(uint * param_1, uint * param_2)
{
  uint uVar1;
  
  uVar1 = *param_1;
  if (*param_1 < *param_2) {
    uVar1 = *param_2;
  }
  return uVar1;
}

// @baa 0x00460070
int sub_00460070(int * param_1, int * param_2)
{
  int iVar1;
  
  iVar1 = *param_1;
  if (*param_1 < *param_2) {
    iVar1 = *param_2;
  }
  return iVar1;
}

struct C_00460090 { int sub_00460090(void); };

// @baa 0x00460090
int C_00460090::sub_00460090(void) { return *(int*)((char*)this + 0); }

struct C_004607a0 { int a; C_004607a0(int); };

// @baa 0x004607a0
C_004607a0::C_004607a0(int x) : a(x) {}

// @baa 0x004607b0
void sub_004607b0(undefined4 * param_1, undefined4 * param_2)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
  }
  return;
}

// @baa 0x004607d0
void sub_004607d0(void) {  }

// @baa 0x00460930
void sub_00460930(undefined4 * param_1, undefined4 * param_2)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
  }
  return;
}

// @baa 0x00460950
void sub_00460950(undefined4 * param_1, undefined4 * param_2)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
    param_1[3] = param_2[3];
  }
  return;
}

// @baa 0x00460980
void sub_00460980(void) {  }

// @baa 0x004609b0
void sub_004609b0(undefined4 * param_1, undefined4 * param_2)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
    param_1[3] = param_2[3];
  }
  return;
}

struct C_00460a20 { int sub_00460a20(void); };

// @baa 0x00460a20
int C_00460a20::sub_00460a20(void) { return *(int*)((char*)this + 8); }

struct C_00460a30 {
    int sub_00460a30(int);
};

// @baa 0x00460a30
int C_00460a30::sub_00460a30(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x78;
}

// @baa 0x00460a50
void sub_00460a50(undefined4 * param_1, undefined4 * param_2)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
  }
  return;
}

// @baa 0x00460a70
void sub_00460a70(undefined4 * param_1, undefined4 * param_2)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
  }
  return;
}

// @baa 0x00460a90
void sub_00460a90(void) {  }

// @baa 0x00460aa0
void sub_00460aa0(void) {  }

// @baa 0x00460ab0
void sub_00460ab0(void) {  }

// @baa 0x00460ac0
void sub_00460ac0(void) {  }

// @baa 0x00460af0
void sub_00460af0(void) {  }

// @baa 0x00460b00
void sub_00460b00(void) {  }

// @baa 0x00460b10
void sub_00460b10(undefined4 * param_1, undefined4 * param_2)
{
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return;
}

// @baa 0x00460b30
void sub_00460b30(undefined4 * param_1, undefined4 * param_2)
{
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return;
}

// @baa 0x00460b70
void sub_00460b70(undefined4 * param_1, undefined4 * param_2)
{
  undefined4 uVar1;
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return;
}

extern undefined4 wxEmptyString_exref;
// @baa 0x00460b90
void sub_00460b90(undefined4 * param_1)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *(undefined4 *)wxEmptyString_exref;
  }
  return;
}

// @baa 0x00460bb0
void sub_00460bb0(undefined4 * param_1, undefined4 * param_2)
{
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return;
}

// @baa 0x00460bd0
void sub_00460bd0(undefined4 * param_1, undefined4 * param_2)
{
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return;
}

// @baa 0x00460bf0
void sub_00460bf0(undefined4 * param_1, undefined4 * param_2)
{
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return;
}

// @baa 0x00460c10
void sub_00460c10(undefined4 * param_1, undefined4 * param_2)
{
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return;
}

// @baa 0x00460c30
void sub_00460c30(undefined4 * param_1, undefined4 * param_2)
{
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return;
}

// @baa 0x00460c50
void sub_00460c50(undefined4 * param_1, undefined4 * param_2)
{
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return;
}

// @baa 0x00460ce0
void sub_00460ce0(undefined4 * param_1, undefined4 * param_2)
{
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return;
}

// @baa 0x00460d00
void sub_00460d00(undefined4 * param_1, undefined4 * param_2)
{
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return;
}

// @baa 0x00460d20
void sub_00460d20(undefined4 * param_1, undefined4 * param_2)
{
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return;
}

// @baa 0x00460d90
void sub_00460d90(undefined4 * param_1, undefined4 * param_2)
{
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return;
}

// @baa 0x00460e10
void sub_00460e10(undefined4 * param_1, undefined4 * param_2)
{
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return;
}

// @baa 0x00460e80
void sub_00460e80(undefined4 * param_1, undefined4 * param_2)
{
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return;
}

// @baa 0x00460ea0
void sub_00460ea0(undefined4 * param_1, undefined4 * param_2)
{
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return;
}

// @baa 0x00460ec0
void sub_00460ec0(undefined4 * param_1, undefined4 * param_2)
{
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return;
}

// @baa 0x00460ee0
void sub_00460ee0(undefined4 * param_1, undefined4 * param_2)
{
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return;
}

// @baa 0x00460f00
void sub_00460f00(undefined4 * param_1, undefined4 * param_2)
{
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return;
}

// @baa 0x00460f20
void sub_00460f20(undefined4 * param_1, undefined4 * param_2)
{
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return;
}

// @baa 0x00460f40
void sub_00460f40(undefined4 * param_1, undefined4 * param_2)
{
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return;
}

// @baa 0x00460f60
void sub_00460f60(undefined4 * param_1, undefined4 * param_2)
{
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return;
}

// @baa 0x00460f80
void sub_00460f80(undefined4 * param_1, undefined4 * param_2)
{
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return;
}

struct C_00461030 {
    int sub_00461030(int);
    int sub_01ab3c10(int);
};

// @baa 0x00461030
int C_00461030::sub_00461030(int param_2)
{
    int param_1 = (int)this;
  ((C_00461030 *)(this))->sub_01ab3c10(param_2);
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  return param_1;
}

struct C_004611b0 {
    undefined4 sub_004611b0(byte);
};

int sub_0045e0c0(void);
int sub_0053dfa0(...);
// @baa 0x004611b0
undefined4 C_004611b0::sub_004611b0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0045e0c0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}
