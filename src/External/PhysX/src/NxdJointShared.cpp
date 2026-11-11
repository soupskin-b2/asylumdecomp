// NxdJointShared.cpp (part 1 of 2): 5 functions
// Placed here by: neighbours 5.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    void sub_01a42ce0(undefined4, undefined4);
};

// @baa 0x01a42ce0
void C::sub_01a42ce0(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;

  *(undefined4 *)(param_1 + 8) = param_2;
  *(undefined4 *)(param_1 + 4) = param_3;
  return;
}

struct C_01a42d80 {
    bool sub_01a42d80();
};

// @baa 0x01a42d80
bool C_01a42d80::sub_01a42d80(void)
{
    int * param_1 = (int *)this;

  return *param_1 != 0;
}

struct C_01a430c0 { void sub_01a430c0(void); };

// @baa 0x01a430c0
void C_01a430c0::sub_01a430c0(void) { *(int*)((char*)this + 24) = 0; }

struct C_01a43130 { int sub_01a43130(void); };

// @baa 0x01a43130
int C_01a43130::sub_01a43130(void) { return *(int*)((char*)this + 12); }

struct C_01a43140 {
    bool sub_01a43140();
};

// @baa 0x01a43140
bool C_01a43140::sub_01a43140(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 0x10) == -1;
}
