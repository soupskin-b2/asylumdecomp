// Engine_1a30000.cpp (part 2 of 2): 16 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

// @baa 0x01a336b0
int __stdcall sub_01a336b0(int a0, int a1) { return -2147467259; }

// @baa 0x01a336c0
int __stdcall sub_01a336c0(int a0, int a1) { return -2147467259; }

// @baa 0x01a336d0
int __stdcall sub_01a336d0(int a0, int a1) { return -2147467259; }

void sub_01a337d0();
// @baa 0x01a33f60
void sub_01a33f60(void) { sub_01a337d0(); }

void sub_01a338a0();
// @baa 0x01a33fd0
void sub_01a33fd0(void) { sub_01a338a0(); }

void sub_01a33a50();
// @baa 0x01a34170
void sub_01a34170(void) { sub_01a33a50(); }

struct C {
    int sub_01a34180();
};

int sub_01a2bab0(void);
// @baa 0x01a34180
int C::sub_01a34180(void)
{
    int param_1 = (int)this;

  int iVar1;
  
  iVar1 = sub_01a2bab0();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x21d) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}

struct C_01a341f0 {
    int sub_01a341f0();
};

int sub_01a2bb00(void);
// @baa 0x01a341f0
int C_01a341f0::sub_01a341f0(void)
{
    int param_1 = (int)this;

  int iVar1;
  
  iVar1 = sub_01a2bb00();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x2d) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}

struct C_01a39510 { int sub_01a39510(void); };

// @baa 0x01a39510
int C_01a39510::sub_01a39510(void) { return *(int*)((char*)this + 2300); }

struct C_01a39520 { int sub_01a39520(void); };

// @baa 0x01a39520
int C_01a39520::sub_01a39520(void) { return *(int*)((char*)this + 2320); }

struct C_01a39530 { int sub_01a39530(void); };

// @baa 0x01a39530
int C_01a39530::sub_01a39530(void) { return *(int*)((char*)this + 2328); }

struct C_01a39540 { int sub_01a39540(void); };

// @baa 0x01a39540
int C_01a39540::sub_01a39540(void) { return *(int*)((char*)this + 2336); }

struct C_01a39550 { int sub_01a39550(void); };

// @baa 0x01a39550
int C_01a39550::sub_01a39550(void) { return *(int*)((char*)this + 2368); }

struct C_01a39900 {
    bool sub_01a39900();
};

// @baa 0x01a39900
bool C_01a39900::sub_01a39900(void)
{
    int param_1 = (int)this;

  return *(char *)(param_1 + 0x14) == '\0';
}

struct C_01a39910 {
    bool sub_01a39910();
};

// @baa 0x01a39910
bool C_01a39910::sub_01a39910(void)
{
    int param_1 = (int)this;

  return *(char *)(param_1 + 0x14) == '\0';
}

struct C_01a399d0 { int sub_01a399d0(void); };

// @baa 0x01a399d0
int C_01a399d0::sub_01a399d0(void) { return *(int*)((char*)this + 2292); }
