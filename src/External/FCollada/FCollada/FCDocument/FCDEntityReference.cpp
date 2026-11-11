// FCDEntityReference.cpp (part 1 of 2): 5 functions
// Placed here by: neighbours 5.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    undefined4 sub_018529d0();
};

int sub_01852940(void);
// @baa 0x018529d0
undefined4 C::sub_018529d0(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 0x28) == 0) {
    sub_01852940();
  }
  return *(undefined4 *)(param_1 + 0x28);
}

struct C_01853030 { int sub_01853030(void); };

// @baa 0x01853030
int C_01853030::sub_01853030(void) { return *(int*)((char*)this + 52); }

extern char g_027b7fac[];
// @baa 0x01853040
int sub_01853040(void) { return (int)g_027b7fac; }

struct C_018577b0 {
    void sub_018577b0();
};

void sub_01826080(void *);
// @baa 0x018577b0
void C_018577b0::sub_018577b0(void)
{
    int param_1 = (int)this;

  if (*(void **)(param_1 + 8) != (void *)0x0) {
    sub_01826080(*(void **)(param_1 + 8));
  }
  return;
}

struct C_01857880 {
    void sub_01857880(int *);
};

// @baa 0x01857880
void C_01857880::sub_01857880(int * param_2)
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
