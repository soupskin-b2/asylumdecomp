// FCDGeometryPolygons.cpp (part 1 of 2): 3 functions
// Placed here by: neighbours 2, callers 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    int sub_01824440(int);
    int sub_01824240(int);
};

// @baa 0x01824440
int C::sub_01824440(int param_2)
{
    int param_1 = (int)this;
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  iVar4 = 0;
  iVar2 = ((C *)(this))->sub_01824240(param_2);
  if ((uint)(iVar2 + param_2) < *(uint *)(param_1 + 0x40)) {
    piVar3 = *(int **)(param_1 + 0x44);
    piVar1 = piVar3 + iVar2 + param_2;
    for (; piVar3 != piVar1; piVar3 = piVar3 + 1) {
      iVar4 = iVar4 + *piVar3;
    }
  }
  return iVar4;
}

struct C_01824ef0 {
    bool sub_01824ef0(int *);
};

// @baa 0x01824ef0
bool C_01824ef0::sub_01824ef0(int * param_2)
{
    int * param_1 = (int *)this;
  return *param_2 == *param_1;
}

struct C_01824f00 {
    int sub_01824f00();
};

// @baa 0x01824f00
int C_01824f00::sub_01824f00(void)
{
    int * param_1 = (int *)this;
  return *param_1 + 0x10;
}
