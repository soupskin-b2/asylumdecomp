// Engine_0df0000.cpp (part 5 of 5): 7 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    void sub_00dfb4e0(int);
};

int sub_0053df70(...);
// @baa 0x00dfb4e0
void C::sub_00dfb4e0(int param_2)
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

struct C_00dff0b0 {
    void sub_00dff0b0(int);
};

// @baa 0x00dff0b0
void C_00dff0b0::sub_00dff0b0(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  param_1[1] = 0;
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if ((*param_1 != 0) || (param_2 != 0)) {
      iVar1 = sub_0053df70(*param_1,param_2 << 4,8);
      *param_1 = iVar1;
    }
  }
  return;
}

struct C_00dff380 {
    void sub_00dff380(int);
};

// @baa 0x00dff380
void C_00dff380::sub_00dff380(int param_2)
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

struct C_00dff440 {
    void sub_00dff440(int);
};

// @baa 0x00dff440
void C_00dff440::sub_00dff440(int param_2)
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

struct C_00dffcc0 {
    void sub_00dffcc0(int);
};

// @baa 0x00dffcc0
void C_00dffcc0::sub_00dffcc0(int param_2)
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

struct C_00df18c0
{
    char pad_00[0x20];
    float First;
    float Second;

    void sub_00df18c0();
};

// @baa 0x00df18c0
void C_00df18c0::sub_00df18c0()
{
    First = 0.0f;
    Second = 0.0f;
}

struct D {
    int a;
    int b;
    int c;
};

struct C_00df5dc0 {
    int x;
    int y;
    int z;
    C_00df5dc0& sub_00df5dc0(const D& o);
};

// @baa 0x00df5dc0
C_00df5dc0& C_00df5dc0::sub_00df5dc0(const D& o)
{
    x = o.a;
    y = o.b;
    z = o.c;
    return *this;
}

static int Keep(C_00df5dc0& c, const D& o) { return c.sub_00df5dc0(o).x; }
