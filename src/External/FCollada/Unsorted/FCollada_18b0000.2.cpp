// FCollada_18b0000.cpp (part 2 of 2): 15 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    bool sub_018b18b0(int *);
};

// @baa 0x018b18b0
bool C::sub_018b18b0(int * param_2)
{
    int * param_1 = (int *)this;
  return *param_2 != *param_1;
}

struct C_018b18c0 {
    int sub_018b18c0();
};

// @baa 0x018b18c0
int C_018b18c0::sub_018b18c0(void)
{
    int * param_1 = (int *)this;
  return *param_1 + 0x10;
}

struct C_018b18d0 {
    bool sub_018b18d0(int *);
};

// @baa 0x018b18d0
bool C_018b18d0::sub_018b18d0(int * param_2)
{
    int * param_1 = (int *)this;
  return *param_2 != *param_1;
}

struct C_018b18e0 {
    int sub_018b18e0();
};

// @baa 0x018b18e0
int C_018b18e0::sub_018b18e0(void)
{
    int * param_1 = (int *)this;
  return *param_1 + 0x10;
}

struct C_018b18f0 { int a; C_018b18f0(int); };

// @baa 0x018b18f0
C_018b18f0::C_018b18f0(int x) : a(x) {}

struct C_018b1900 { int a; C_018b1900(int); };

// @baa 0x018b1900
C_018b1900::C_018b1900(int x) : a(x) {}

struct C_018b1e30 {
    void sub_018b1e30(undefined4);
    int sub_01818f80(int);
};

// @baa 0x018b1e30
void C_018b1e30::sub_018b1e30(undefined4 param_2)
{
    int param_1 = (int)this;
  ((C_018b1e30 *)(((char *)this + 0x64)))->sub_01818f80(param_2);
  *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | 1;
  return;
}

struct C_018b1e50 {
    int v;
    int *sub_018b1e50(int *a);
};

// @baa 0x018b1e50
int *C_018b1e50::sub_018b1e50(int *a) {
    *a = v;
    return a;
}

struct C_018b1ea0 {
    int v;
    int *sub_018b1ea0(int *a);
};

// @baa 0x018b1ea0
int *C_018b1ea0::sub_018b1ea0(int *a) {
    *a = v;
    return a;
}

struct C_018be100 {
    void sub_018be100(undefined4);
    int sub_01818f20(int);
};

// @baa 0x018be100
void C_018be100::sub_018be100(undefined4 param_2)
{
    int param_1 = (int)this;
  ((C_018be100 *)(((char *)this + 0x84)))->sub_01818f20(param_2);
  *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | 1;
  return;
}

struct C_018be120 {
    void sub_018be120(undefined4);
    int sub_01818f20(int);
};

// @baa 0x018be120
void C_018be120::sub_018be120(undefined4 param_2)
{
    int param_1 = (int)this;
  ((C_018be120 *)(((char *)this + 0x64)))->sub_01818f20(param_2);
  *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | 1;
  return;
}

struct C_018bfdb0 {
    int v;
    int *sub_018bfdb0(int *a);
};

// @baa 0x018bfdb0
int *C_018bfdb0::sub_018bfdb0(int *a) {
    *a = v;
    return a;
}

struct C_018b1b80
{
    char pad_00[0x18];
    volatile DWORD Flags;
    char pad_1c[0xc];
    INT State;

    void sub_018b1b80();
};

// @baa 0x018b1b80
void C_018b1b80::sub_018b1b80()
{
    State = 1;
    Flags |= 1;
}

struct C_018b1b90
{
    char pad_00[0x18];
    volatile DWORD Flags;
    char pad_1c[0xc];
    INT State;

    void sub_018b1b90();
};

// @baa 0x018b1b90
void C_018b1b90::sub_018b1b90()
{
    State = 2;
    Flags |= 1;
}

struct C_018b1ba0
{
    char pad_00[0x18];
    volatile DWORD Flags;
    char pad_1c[0xc];
    INT State;

    void sub_018b1ba0();
};

// @baa 0x018b1ba0
void C_018b1ba0::sub_018b1ba0()
{
    State = 3;
    Flags |= 1;
}
