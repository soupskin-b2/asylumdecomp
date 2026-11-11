// Editor_10c0000.cpp: 9 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C { int sub_010c6310(void); };

// @baa 0x010c6310
int C::sub_010c6310(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

void sub_004025d0(void*);
struct D { void* p; ~D(){ if(0) sub_004025d0(p);} };

void sub_0053dfa0(void*);
struct C_010c6320 { void* Data; int Num; int Max; void sub_010c6320(); };

// @baa 0x010c6320
void C_010c6320::sub_010c6320() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_010c6380 {
    void sub_010c6380(int);
};

int sub_0053df70(...);
// @baa 0x010c6380
void C_010c6380::sub_010c6380(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  param_1[1] = 0;
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if ((*param_1 != 0) || (param_2 != 0)) {
      iVar1 = sub_0053df70(*param_1,param_2 * 4,8);
      *param_1 = iVar1;
    }
  }
  return;
}

struct C_010c6490 {
    int sub_010c6490();
};

// @baa 0x010c6490
int C_010c6490::sub_010c6490(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_010c6510 {
    int sub_010c6510();
};

// @baa 0x010c6510
int C_010c6510::sub_010c6510(void)
{
    int param_1 = (int)this;
  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_010c6530 {
    int sub_010c6530();
};

// @baa 0x010c6530
int C_010c6530::sub_010c6530(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_010c6780 { void* Data; int Num; int Max; void sub_010c6780(); };

// @baa 0x010c6780
void C_010c6780::sub_010c6780() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_010c67e0 {
    void sub_010c67e0(int);
};

// @baa 0x010c67e0
void C_010c67e0::sub_010c67e0(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  param_1[1] = 0;
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if ((*param_1 != 0) || (param_2 != 0)) {
      iVar1 = sub_0053df70(*param_1,param_2 * 4,8);
      *param_1 = iVar1;
    }
  }
  return;
}

struct C_010c6950 {
    int sub_010c6950(int);
};

// @baa 0x010c6950
int C_010c6950::sub_010c6950(int param_2)
{
    int * param_1 = (int *)this;
  return *param_1 + param_2 * 0x44;
}
