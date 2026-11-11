// GFxUI_18e0000.cpp (part 1 of 2): 12 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct A_018e0400 { virtual void sub_018e15d0(); char pad[12]; };

struct B_018e0400 { virtual void sub_018e15d0(); };

struct C_018e0400 : A_018e0400, B_018e0400 { virtual void sub_018e15d0(); C_018e0400(); };

C_018e0400::C_018e0400() {}

// @baa 0x018e0400
void C_018e0400::sub_018e15d0() {}

struct A_018e0410 { virtual void sub_018e15d0(); char pad[20]; };

struct B_018e0410 { virtual void sub_018e15d0(); };

struct C_018e0410 : A_018e0410, B_018e0410 { virtual void sub_018e15d0(); C_018e0410(); };

C_018e0410::C_018e0410() {}

// @baa 0x018e0410
void C_018e0410::sub_018e15d0() {}

struct A_018e3840 { virtual void sub_018e3b40(); char pad[12]; };

struct B_018e3840 { virtual void sub_018e3b40(); };

struct C_018e3840 : A_018e3840, B_018e3840 { virtual void sub_018e3b40(); C_018e3840(); };

C_018e3840::C_018e3840() {}

// @baa 0x018e3840
void C_018e3840::sub_018e3b40() {}

struct C {
    undefined4 sub_018e50e0(undefined4 *);
    int sub_018e40b0(int, int);
};

// @baa 0x018e50e0
undefined4 C::sub_018e50e0(undefined4 * param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C *)(this))->sub_018e40b0(*param_2, param_2[1]);
  return param_1;
}

struct C_018e5100 {
    undefined4 sub_018e5100(short *);
    int sub_018e40b0(int, int);
};

// @baa 0x018e5100
undefined4 C_018e5100::sub_018e5100(short * param_2)
{
    undefined4 param_1 = (undefined4)this;
  short sVar1;
  short *psVar2;
  int iVar3;
  iVar3 = 0;
  sVar1 = *param_2;
  psVar2 = param_2;
  while (sVar1 != 0) {
    psVar2 = psVar2 + 1;
    iVar3 = iVar3 + 1;
    sVar1 = *psVar2;
  }
  ((C_018e5100 *)(this))->sub_018e40b0((int)(param_2), iVar3);
  return param_1;
}

struct C_018e5210 {
    undefined4 sub_018e5210(int, int, int);
    int sub_018e4eb0(int, int);
};

// @baa 0x018e5210
undefined4 C_018e5210::sub_018e5210(int param_2, int param_3, int param_4)
{
    undefined4 param_1 = (undefined4)this;
  int iVar1;
  int iVar2;
  iVar2 = 0;
  if (0 < param_4) {
    do {
      iVar1 = ((C_018e5210 *)(this))->sub_018e4eb0(*(undefined4 *)(param_2 + iVar2 * 4), param_3);
      iVar2 = iVar2 + 1;
      param_3 = param_3 + iVar1;
    } while (iVar2 < param_4);
  }
  return param_1;
}

struct C_018e52d0 { int a; C_018e52d0(int); };

// @baa 0x018e52d0
C_018e52d0::C_018e52d0(int x) : a(x) {}

struct C_018e53a0 { int a, b; C_018e53a0(int, int); };

// @baa 0x018e53a0
C_018e53a0::C_018e53a0(int x, int y) : a(x), b(y) {}

struct C_018e53c0 {
    int sub_018e53c0(int);
};

// @baa 0x018e53c0
int C_018e53c0::sub_018e53c0(int param_2)
{
    int * param_1 = (int *)this;
  return *param_1 + 8 + param_2 * 0x14;
}

struct C_018e53d0 {
    bool sub_018e53d0();
};

// @baa 0x018e53d0
bool C_018e53d0::sub_018e53d0(void)
{
    int * param_1 = (int *)this;
  return *param_1 == -2;
}

struct C_018e5410 {
    int sub_018e5410(int);
};

// @baa 0x018e5410
int C_018e5410::sub_018e5410(int param_2)
{
    int * param_1 = (int *)this;
  return *param_1 + 8 + param_2 * 0x14;
}

struct C_018e5fb0 { C_018e5fb0* sub_018e5fb0(void); };

// @baa 0x018e5fb0
C_018e5fb0* C_018e5fb0::sub_018e5fb0(void) { *(int*)((char*)this + 0) = 0; return this; }
