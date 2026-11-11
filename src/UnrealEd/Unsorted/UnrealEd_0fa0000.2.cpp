// UnrealEd_0fa0000.cpp (part 2 of 2): 7 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    void sub_00fa9e60(int);
};

int sub_0053df70(...);
// @baa 0x00fa9e60
void C::sub_00fa9e60(int param_2)
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

void sub_004025d0(void*);
struct D { void* p; ~D(){ if(0) sub_004025d0(p);} };

void sub_0053dfa0(void*);
struct C_00fa9ea0 { void* Data; int Num; int Max; void sub_00fa9ea0(); };

// @baa 0x00fa9ea0
void C_00fa9ea0::sub_00fa9ea0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00fa9f00 {
    void sub_00fa9f00(int);
};

// @baa 0x00fa9f00
void C_00fa9f00::sub_00fa9f00(int param_2)
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

struct C_00fa9f40 { void* Data; int Num; int Max; void sub_00fa9f40(); };

// @baa 0x00fa9f40
void C_00fa9f40::sub_00fa9f40() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00fa9fa0 {
    int sub_00fa9fa0();
};

// @baa 0x00fa9fa0
int C_00fa9fa0::sub_00fa9fa0(void)
{
    int param_1 = (int)this;
  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_00faa010 { int sub_00faa010(void); };

// @baa 0x00faa010
int C_00faa010::sub_00faa010(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_00faa020 { void* Data; int Num; int Max; void sub_00faa020(); };

// @baa 0x00faa020
void C_00faa020::sub_00faa020() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}
