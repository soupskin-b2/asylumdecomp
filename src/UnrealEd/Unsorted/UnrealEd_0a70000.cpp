// UnrealEd_0a70000.cpp: 5 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C{
void sub_00a75330();
};

extern undefined4*g_026b0d94;
// @baa 0x00a75330
void C::sub_00a75330(void)
{
int param_1=(int)this;

int iVar1;

iVar1=*(int*)(param_1+0x14);
*(undefined4*)(param_1+0x14)=0;
if(iVar1!=0){
(*(int(__stdcall**)(int))(*g_026b0d94+0x248))((int)(iVar1));
}
return;
}

// @baa 0x00a7b660
void sub_00a7b660(void) {  }

struct B {
    virtual int f0();
    virtual int f1();
    virtual int f2();
    virtual int f3();
    virtual int f4();
    virtual int f5();
};

struct A { int m0; };

struct C_00a7b670 : A, B {
    int sub_00a7b670();
};

// @baa 0x00a7b670
int C_00a7b670::sub_00a7b670() {
    return ((B *)((char *)this + 4))->f5();
}

struct A_00a7b6a0 { virtual void sub_00a7b6d0(); };

struct B_00a7b6a0 { virtual void sub_00a7b6d0(); };

struct C_00a7b6a0 : A_00a7b6a0, B_00a7b6a0 { virtual void sub_00a7b6d0(); C_00a7b6a0(); };

C_00a7b6a0::C_00a7b6a0() {}

// @baa 0x00a7b6a0
void C_00a7b6a0::sub_00a7b6d0() {}

struct C_00a7b700 {
    void sub_00a7b700();
};

int sub_0053df70(...);
// @baa 0x00a7b700
void C_00a7b700::sub_00a7b700(void)
{
    int * param_1 = (int *)this;

  int iVar1;
  
  param_1[1] = 0;
  if (param_1[2] != 0) {
    param_1[2] = 0;
    if (*param_1 != 0) {
      iVar1 = sub_0053df70(*param_1,0,8);
      *param_1 = iVar1;
    }
  }
  param_1[4] = 0;
  if (param_1[5] != 0) {
    param_1[5] = 0;
    if (param_1[3] != 0) {
      iVar1 = sub_0053df70(param_1[3],0,8);
      param_1[3] = iVar1;
    }
  }
  return;
}
