// FCDGeometryMesh.cpp (part 2 of 3): 2 functions
// Placed here by: neighbours 2.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    void sub_01848190(int *);
};

// @baa 0x01848190
void C::sub_01848190(int * param_2)
{
    int param_1 = (int)this;
  int *piVar1;
  int *piVar2;
  piVar2 = *(int **)(param_1 + 8);
  piVar1 = piVar2 + *(int *)(param_1 + 4);
  if (piVar2 != piVar1) {
    do {
      if (*piVar2 == *param_2) {
        return;
      }
      piVar2 = piVar2 + 1;
    } while (piVar2 != piVar1);
  }
  return;
}

struct C_018481d0 {
    undefined4 sub_018481d0();
};

// @baa 0x018481d0
undefined4 C_018481d0::sub_018481d0(void)
{
    int param_1 = (int)this;
  return *(undefined4 *)(param_1 + 0xd0);
}
