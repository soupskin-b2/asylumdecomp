// Engine_0980000.cpp (part 6 of 6): 5 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    void sub_00989bc0(int);
};

int sub_0053df70(...);
// @baa 0x00989bc0
void C::sub_00989bc0(int param_2)
{
    int * param_1 = (int *)this;

  int iVar1;
  
  param_1[1] = 0;
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if ((*param_1 != 0) || (param_2 != 0)) {
      iVar1 = sub_0053df70(*param_1,param_2 * 0x54,8);
      *param_1 = iVar1;
    }
  }
  return;
}

struct C_00989c00 {
    void sub_00989c00(int);
};

// @baa 0x00989c00
void C_00989c00::sub_00989c00(int param_2)
{
    int * param_1 = (int *)this;

  int iVar1;
  
  param_1[1] = 0;
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if ((*param_1 != 0) || (param_2 != 0)) {
      iVar1 = sub_0053df70(*param_1,param_2 * 8,8);
      *param_1 = iVar1;
    }
  }
  return;
}

struct C_00989c40 {
    void sub_00989c40(int);
};

// @baa 0x00989c40
void C_00989c40::sub_00989c40(int param_2)
{
    int * param_1 = (int *)this;

  int iVar1;
  
  param_1[1] = 0;
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if ((*param_1 != 0) || (param_2 != 0)) {
      iVar1 = sub_0053df70(*param_1,param_2 * 0x14,8);
      *param_1 = iVar1;
    }
  }
  return;
}

struct C_00981e40
{
    WORD Value;

    C_00981e40* sub_00981e40(WORD In);
};

// @baa 0x00981e40
C_00981e40* C_00981e40::sub_00981e40(WORD In)
{
    Value = In;
    return this;
}

struct C_00981da0
{
	int f0;
	int f1;
	int f2;
	C_00981da0* sub_00981da0(int Value);
};

// @baa 0x00981da0
C_00981da0* C_00981da0::sub_00981da0(int Value)
{
	f0 = 0;
	f1 = 0;
	f2 = Value;
	return this;
}
