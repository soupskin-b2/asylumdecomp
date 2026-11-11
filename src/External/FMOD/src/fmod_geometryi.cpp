// fmod_geometryi.cpp (part 1 of 2): 4 functions
// Placed here by: neighbours 4.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    undefined4 sub_0179a968(undefined4 *);
};

// @baa 0x0179a968
undefined4 C::sub_0179a968(undefined4 * param_2)
{
    int param_1 = (int)this;

  undefined4 uVar1;
  
  if (param_2 == (undefined4 *)0x0) {
    uVar1 = 0x25;
  }
  else {
    *param_2 = *(undefined4 *)(param_1 + 0x24);
    uVar1 = 0;
  }
  return uVar1;
}

struct C_0179aef6 {
    undefined4 sub_0179aef6(undefined1 *);
};

// @baa 0x0179aef6
undefined4 C_0179aef6::sub_0179aef6(undefined1 * param_2)
{
    int param_1 = (int)this;
  undefined4 uVar1;
  if (param_2 == (undefined1 *)0x0) {
    uVar1 = 0x25;
  }
  else {
    *param_2 = *(undefined1 *)(param_1 + 0x54);
    uVar1 = 0;
  }
  return uVar1;
}

struct C_017bb847 {
    void sub_017bb847(int);
};

// @baa 0x017bb847
void C_017bb847::sub_017bb847(int param_2)
{
    int param_1 = (int)this;

  *(undefined4 *)(param_2 + 0x38) = *(undefined4 *)(param_1 + 0x14);
  *(int *)(param_1 + 0x14) = param_2;
  if (*(int *)(param_2 + 0x38) != 0) {
    *(int *)(*(int *)(param_2 + 0x38) + 0x2c) = param_2;
  }
  *(undefined4 *)(param_2 + 0x2c) = 0;
  *(uint *)(param_2 + 0x18) = *(uint *)(param_2 + 0x18) | 0x20;
  return;
}

struct C_017bb869 {
    void sub_017bb869();
};

// @baa 0x017bb869
void C_017bb869::sub_017bb869(void)
{
    int param_1 = (int)this;

  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x14);
  iVar2 = *(int *)(iVar1 + 0x38);
  *(int *)(param_1 + 0x14) = iVar2;
  if (iVar2 != 0) {
    *(undefined4 *)(iVar2 + 0x2c) = 0;
  }
  *(undefined4 *)(iVar1 + 0x38) = 0;
  *(uint *)(iVar1 + 0x18) = *(uint *)(iVar1 + 0x18) & 0xffffffdf;
  return;
}
