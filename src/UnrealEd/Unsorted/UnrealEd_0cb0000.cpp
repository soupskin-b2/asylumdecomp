// UnrealEd_0cb0000.cpp (part 1 of 2): 6 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

void sub_004025d0(void*);
struct D { void* p; ~D(){ if(0) sub_004025d0(p);} };

void sub_0053dfa0(void*);
struct C { void* Data; int Num; int Max; void sub_00cbeb70(); };

// @baa 0x00cbeb70
void C::sub_00cbeb70() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00cbecb0 {
    void sub_00cbecb0(int);
};

int sub_0053df70(...);
// @baa 0x00cbecb0
void C_00cbecb0::sub_00cbecb0(int param_2)
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

struct C_00cbecf0 { void sub_00cbecf0(void); };

// @baa 0x00cbecf0
void C_00cbecf0::sub_00cbecf0(void) { *(int*)((char*)this + 4) = 0; }

struct C_00cbed00 { void* Data; int Num; int Max; void sub_00cbed00(); };

// @baa 0x00cbed00
void C_00cbed00::sub_00cbed00() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00cbedb0 {
    void sub_00cbedb0(int);
};

// @baa 0x00cbedb0
void C_00cbedb0::sub_00cbedb0(int param_2)
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

struct C_00cbedf0 { void sub_00cbedf0(void); };

// @baa 0x00cbedf0
void C_00cbedf0::sub_00cbedf0(void) { *(int*)((char*)this + 4) = 0; }
