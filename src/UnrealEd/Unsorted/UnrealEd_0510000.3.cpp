// UnrealEd_0510000.cpp (part 3 of 3): 6 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    undefined4 sub_0051c660(byte);
};

int sub_00402660(...);
int sub_005193b0(void);
// @baa 0x0051c660
undefined4 C::sub_0051c660(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_005193b0();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_0051c680 {
    undefined4 sub_0051c680(byte);
};

int sub_005196d0(void);
// @baa 0x0051c680
undefined4 C_0051c680::sub_0051c680(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_005196d0();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

typedef void (__thiscall* Fn)(void*);

struct C_00510cd0
{
    void sub_00510cd0(INT Unused);
};

// @baa 0x00510cd0
void C_00510cd0::sub_00510cd0(INT)
{
    (*(Fn*)(*(char**)this + 0x1c8))(this);
}

struct C_00511920
{
    void sub_00511920(INT Unused);
};

// @baa 0x00511920
void C_00511920::sub_00511920(INT)
{
    (*(Fn*)(*(char**)this + 0x1c8))(this);
}

struct C_005121e0
{
    char pad_00[0x170];
    float Source;
    char pad_174[8];
    float Target;

    void sub_005121e0();
};

// @baa 0x005121e0
void C_005121e0::sub_005121e0()
{
    Target = Source;
}

struct C_0051bbd0
{
    INT pad_00[3];
    INT Source;
    INT pad_10[4];
    BYTE Result;

    void sub_0051bbd0(INT Unused);
};

// @baa 0x0051bbd0
void C_0051bbd0::sub_0051bbd0(INT)
{
    Result = Source != 0;
}
