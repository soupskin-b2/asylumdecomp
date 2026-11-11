// FCDGeometryPolygons.cpp (part 2 of 2): 4 functions
// Placed here by: neighbours 4.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    void sub_01824eb0();
};

void sub_01826080(void *);
// @baa 0x01824eb0
void C::sub_01824eb0(void)
{
    int param_1 = (int)this;

  if (*(void **)(param_1 + 8) != (void *)0x0) {
    sub_01826080(*(void **)(param_1 + 8));
  }
  return;
}

struct C_01824ec0 {
    int sub_01824ec0();
};

// @baa 0x01824ec0
int C_01824ec0::sub_01824ec0(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 8) + *(int *)(param_1 + 4) * 4;
}

struct C_01824ed0 { int sub_01824ed0(void); };

// @baa 0x01824ed0
int C_01824ed0::sub_01824ed0(void) { return *(int*)((char*)this + 4); }

struct C_01824ee0 { char* sub_01824ee0(void); };

// @baa 0x01824ee0
char* C_01824ee0::sub_01824ee0(void) { return (char*)this + 4; }
