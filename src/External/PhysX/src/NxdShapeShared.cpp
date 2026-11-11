// NxdShapeShared.cpp (part 1 of 2): 7 functions
// Placed here by: neighbours 6, callers 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    bool sub_01a3ec90();
};

// @baa 0x01a3ec90
bool C::sub_01a3ec90(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 0x14) == -1;
}

struct C_01a50570 { int sub_01a50570(void); };

// @baa 0x01a50570
int C_01a50570::sub_01a50570(void) { return *(int*)((char*)this + 0); }

struct C_01a50580 { void sub_01a50580(int a0); };

// @baa 0x01a50580
void C_01a50580::sub_01a50580(int a0) { *(int*)((char*)this + 8) = a0; }

struct C_01a50590 {
    void sub_01a50590(undefined4, undefined4);
};

// @baa 0x01a50590
void C_01a50590::sub_01a50590(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;

  *(undefined4 *)(param_1 + 4) = param_2;
  *(undefined4 *)(param_1 + 0xc) = param_3;
  return;
}

struct C_01a507d0 {
    undefined4 sub_01a507d0(int);
};

// @baa 0x01a507d0
undefined4 C_01a507d0::sub_01a507d0(int param_2)
{
    int param_1 = (int)this;

  if (*(int *)(*(int *)(param_1 + 0xc) + 4) == param_2) {
    return *(undefined4 *)(param_1 + 4);
  }
  return 0;
}

struct C_01a507f0 {
    undefined4 sub_01a507f0(int);
};

// @baa 0x01a507f0
undefined4 C_01a507f0::sub_01a507f0(int param_2)
{
    int param_1 = (int)this;

  if (*(int *)(*(int *)(param_1 + 0xc) + 4) == param_2) {
    return *(undefined4 *)(param_1 + 4);
  }
  return 0;
}

struct C_01a50920 {
    undefined4 sub_01a50920();
};

// @baa 0x01a50920
undefined4 C_01a50920::sub_01a50920(void)
{
    int param_1 = (int)this;

  undefined4 uVar1;
  
  if ((*(byte *)(param_1 + 0x18) & 4) != 0) {
    return *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x68);
  }
                    
                    
  uVar1 = (**(code **)(**(int **)(param_1 + 8) + 0x94))();
  return uVar1;
}
