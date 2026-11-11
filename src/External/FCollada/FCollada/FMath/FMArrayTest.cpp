// FMArrayTest.cpp (part 1 of 2): 3 functions
// Placed here by: neighbours 2, callers 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    void sub_0186c7e0(int *);
};

// @baa 0x0186c7e0
void C::sub_0186c7e0(int * param_2)
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

struct C_0186c810 {
    void sub_0186c810(int *);
};

// @baa 0x0186c810
void C_0186c810::sub_0186c810(int * param_2)
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

// @baa 0x0186c870
bool sub_0186c870(int param_1, int param_2)
{
  return param_1 == param_2;
}
