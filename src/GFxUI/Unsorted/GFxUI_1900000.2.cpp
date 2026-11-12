// GFxUI_1900000.cpp (part 2 of 2): 34 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    uint sub_01905d10();
};

// @baa 0x01905d10
uint C::sub_01905d10(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 8) & 0x3fffffff;
}

struct C_01905d40 { unsigned sub_01905d40(void); };

// @baa 0x01905d40
unsigned C_01905d40::sub_01905d40(void) { return *(unsigned*)((char*)this + 8) >> 30; }

struct C_01905d50 { unsigned sub_01905d50(void); };

// @baa 0x01905d50
unsigned C_01905d50::sub_01905d50(void) { return *(unsigned*)((char*)this + 8) >> 31; }

struct C_01905d60 {
    uint sub_01905d60();
};

// @baa 0x01905d60
uint C_01905d60::sub_01905d60(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 8) >> 0x1e & 1;
}

struct C_01905d70 {
    void sub_01905d70(uint);
};

// @baa 0x01905d70
void C_01905d70::sub_01905d70(uint param_2)
{
    int param_1 = (int)this;

  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xc0000000 | param_2;
  return;
}

struct C_01905d90 { unsigned sub_01905d90(void); };

// @baa 0x01905d90
unsigned C_01905d90::sub_01905d90(void) { return *(unsigned*)((char*)this + 8) >> 30; }

struct C_01905da0 { unsigned sub_01905da0(void); };

// @baa 0x01905da0
unsigned C_01905da0::sub_01905da0(void) { return *(unsigned*)((char*)this + 8) >> 31; }

struct C_01905db0 {
    uint sub_01905db0();
};

// @baa 0x01905db0
uint C_01905db0::sub_01905db0(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 8) >> 0x1e & 1;
}

struct C_01905dc0 {
    void sub_01905dc0(uint);
};

// @baa 0x01905dc0
void C_01905dc0::sub_01905dc0(uint param_2)
{
    int param_1 = (int)this;

  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xc0000000 | param_2;
  return;
}

struct C_01905e20 {
    uint sub_01905e20();
};

// @baa 0x01905e20
uint C_01905e20::sub_01905e20(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 8) & 0x3fffffff;
}

struct C_01905e30 {
    uint sub_01905e30();
};

// @baa 0x01905e30
uint C_01905e30::sub_01905e30(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 8) & 0x3fffffff;
}

struct C_01905e40 {
    bool sub_01905e40();
};

// @baa 0x01905e40
bool C_01905e40::sub_01905e40(void)
{
    int * param_1 = (int *)this;

  return *param_1 == -2;
}

struct C_01905e70 { unsigned sub_01905e70(void); };

// @baa 0x01905e70
unsigned C_01905e70::sub_01905e70(void) { return *(unsigned*)((char*)this + 8) >> 30; }

struct C_01905e80 { unsigned sub_01905e80(void); };

// @baa 0x01905e80
unsigned C_01905e80::sub_01905e80(void) { return *(unsigned*)((char*)this + 8) >> 31; }

struct C_01905e90 {
    uint sub_01905e90();
};

// @baa 0x01905e90
uint C_01905e90::sub_01905e90(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 8) >> 0x1e & 1;
}

struct C_01905ea0 {
    void sub_01905ea0(uint);
};

// @baa 0x01905ea0
void C_01905ea0::sub_01905ea0(uint param_2)
{
    int param_1 = (int)this;

  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xc0000000 | param_2;
  return;
}

struct C_01905ec0 { unsigned sub_01905ec0(void); };

// @baa 0x01905ec0
unsigned C_01905ec0::sub_01905ec0(void) { return *(unsigned*)((char*)this + 8) >> 30; }

struct C_01905ed0 { unsigned sub_01905ed0(void); };

// @baa 0x01905ed0
unsigned C_01905ed0::sub_01905ed0(void) { return *(unsigned*)((char*)this + 8) >> 31; }

struct C_01905ee0 {
    uint sub_01905ee0();
};

// @baa 0x01905ee0
uint C_01905ee0::sub_01905ee0(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 8) >> 0x1e & 1;
}

struct C_01905ef0 {
    void sub_01905ef0(uint);
};

// @baa 0x01905ef0
void C_01905ef0::sub_01905ef0(uint param_2)
{
    int param_1 = (int)this;

  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xc0000000 | param_2;
  return;
}

struct C_01905f10 { unsigned sub_01905f10(void); };

// @baa 0x01905f10
unsigned C_01905f10::sub_01905f10(void) { return *(unsigned*)((char*)this + 8) >> 30; }

struct C_01905f20 { unsigned sub_01905f20(void); };

// @baa 0x01905f20
unsigned C_01905f20::sub_01905f20(void) { return *(unsigned*)((char*)this + 8) >> 31; }

struct C_01905f30 {
    uint sub_01905f30();
};

// @baa 0x01905f30
uint C_01905f30::sub_01905f30(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 8) >> 0x1e & 1;
}

struct C_01905f40 {
    void sub_01905f40(uint);
};

// @baa 0x01905f40
void C_01905f40::sub_01905f40(uint param_2)
{
    int param_1 = (int)this;

  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xc0000000 | param_2;
  return;
}

// @baa 0x01905f60
int sub_01905f60(int param_1)
{
  return param_1 * 0x14;
}

// @baa 0x01905f90
uint sub_01905f90(uint param_1, uint param_2)
{
  if (param_2 < param_1) {
    param_2 = param_1;
  }
  return param_2;
}

// @baa 0x01905fa0
float10 sub_01905fa0(double param_1)
{
  return (float10)param_1 * (float10)20.0;
}

// @baa 0x01906070
undefined1 * sub_01906070(undefined1 * param_1)
{
  if (param_1 != (undefined1 *)0x0) {
    *param_1 = 0;
    return param_1;
  }
  return (undefined1 *)0x0;
}

// @baa 0x01906080
int sub_01906080(int param_1)
{
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 4) = 0xffffffff;
    return param_1;
  }
  return 0;
}

// @baa 0x019060a0
int sub_019060a0(int a0) { return a0; }

// @baa 0x019060f0
undefined1 sub_019060f0(void)
{
  return 0;
}

// @baa 0x01906120
undefined1 sub_01906120(void)
{
  return 0;
}

// @baa 0x01906130
void sub_01906130(void) {  }

// @baa 0x01906310
void __stdcall sub_01906310(int a0) {  }

