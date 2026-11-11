// FCDObjectWithId.cpp: 4 functions
// Placed here by: neighbours 4.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C { char* sub_018358a0(void); };

// @baa 0x018358a0
char* C::sub_018358a0(void) { return (char*)this + 4; }

struct C_018358c0 {
    void sub_018358c0();
};

void sub_01826080(void *);
extern undefined4 g_023e4d30;
// @baa 0x018358c0
void C_018358c0::sub_018358c0(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023e4d30));
  if ((void *)param_1[3] != (void *)0x0) {
    sub_01826080((void *)param_1[3]);
  }
  return;
}

extern char g_027b7dbc[];
// @baa 0x018358e0
int sub_018358e0(void) { return (int)g_027b7dbc; }

struct C_01835960 {
    undefined4 sub_01835960(byte);
};

int sub_00402660(...);
int sub_01835400(void);
// @baa 0x01835960
undefined4 C_01835960::sub_01835960(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01835400();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}
