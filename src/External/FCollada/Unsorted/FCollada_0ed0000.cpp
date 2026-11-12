// FCollada_0ed0000.cpp: 13 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

void sub_004025d0(void*);
struct D { void* p; ~D(){ if(0) sub_004025d0(p);} };

void sub_0053dfa0(void*);
struct C { void* Data; int Num; int Max; void sub_00ed0050(); };

// @baa 0x00ed0050
void C::sub_00ed0050() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00ed00b0 { void* Data; int Num; int Max; void sub_00ed00b0(); };

// @baa 0x00ed00b0
void C_00ed00b0::sub_00ed00b0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00ed0110 {
    void sub_00ed0110(int);
};

int sub_0053df70(...);
// @baa 0x00ed0110
void C_00ed0110::sub_00ed0110(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  param_1[1] = 0;
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if ((*param_1 != 0) || (param_2 != 0)) {
      iVar1 = sub_0053df70(*param_1,param_2 << 6,8);
      *param_1 = iVar1;
    }
  }
  return;
}

struct C_00ed0150 { void* Data; int Num; int Max; void sub_00ed0150(); };

// @baa 0x00ed0150
void C_00ed0150::sub_00ed0150() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00ed01b0 { void* Data; int Num; int Max; void sub_00ed01b0(); };

// @baa 0x00ed01b0
void C_00ed01b0::sub_00ed01b0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00ed0210 {
    void sub_00ed0210(int);
};

// @baa 0x00ed0210
void C_00ed0210::sub_00ed0210(int param_2)
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

typedef uint size_t;

struct C_00ed0290 {
    undefined4 * sub_00ed0290(undefined4 *);
    int sub_00ec7a20(int);
};

void * sub_01a375f0(void *, void *, size_t);
// @baa 0x00ed0290
undefined4 * C_00ed0290::sub_00ed0290(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  if (param_1 != param_2) {
    ((C_00ed0290 *)(this))->sub_00ec7a20(param_2[1]);
    param_1[1] = *param_1;
    sub_01a375f0((void *)param_1[2],(void *)param_2[2],param_2[1] * 2);
  }
  return param_1;
}

struct C_00ed02d0 {
    void sub_00ed02d0(undefined4);
    int sub_00ecb6e0(int, int);
};

// @baa 0x00ed02d0
void C_00ed02d0::sub_00ed02d0(undefined4 param_2)
{
    int param_1 = (int)this;
  ((C_00ed02d0 *)(this))->sub_00ecb6e0(*(int *)(param_1 + 8) + *(int *)(param_1 + 4) * 4, param_2);
  return;
}

struct C_00ed02f0 { void* Data; int Num; int Max; void sub_00ed02f0(); };

// @baa 0x00ed02f0
void C_00ed02f0::sub_00ed02f0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00ed0350 {
    void sub_00ed0350(int);
};

// @baa 0x00ed0350
void C_00ed0350::sub_00ed0350(int param_2)
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

struct C_00ed0390 { void* Data; int Num; int Max; void sub_00ed0390(); };

// @baa 0x00ed0390
void C_00ed0390::sub_00ed0390() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00ed03f0 {
    void sub_00ed03f0(int);
};

// @baa 0x00ed03f0
void C_00ed03f0::sub_00ed03f0(int param_2)
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

struct C_00ed0250
{
    char pad_0[0x20];
    INT Value_20;
    INT Value_24;
    INT Value_28;

    C_00ed0250* sub_00ed0250();
};

// @baa 0x00ed0250
C_00ed0250* C_00ed0250::sub_00ed0250()
{
    Value_20 = 0;
    Value_24 = 0;
    Value_28 = 0;
    return this;
}
