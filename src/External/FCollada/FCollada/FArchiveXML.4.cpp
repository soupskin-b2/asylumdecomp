// FArchiveXML.cpp (part 4 of 4): 8 functions
// Placed here by: callers 5, neighbours 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    undefined4 sub_018920c0(byte);
};

int sub_00402660(...);
int sub_01816150(void);
// @baa 0x018920c0
undefined4 C::sub_018920c0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01816150();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

int sub_01c1d3f0(...);
extern undefined4 g_027d4e00;
extern undefined4 g_027d4e04;
// @baa 0x01c1d470
void sub_01c1d470(void)
{
  if (g_027d4e04 != 0) {
    sub_01c1d3f0(&g_027d4e00);
  }
  return;
}

int sub_01c2df00(...);
extern undefined4 g_027d4cd4;
// @baa 0x01c20b90
void sub_01c20b90(void)
{
  if (g_027d4cd4 != 0) {
    sub_01c2df00(g_027d4cd4);
    g_027d4cd4 = 0;
  }
  return;
}

void sub_01c2df50(void *);
extern undefined4 g_027d4d6c;
extern undefined4 g_027d4d70;
// @baa 0x01c291b0
void sub_01c291b0(void)
{
  if (g_027d4d70 != 0) {
    sub_01c2df50((void *)(g_027d4d6c));
    g_027d4d70 = 0;
  }
  return;
}

extern undefined4 g_027d4d74;
extern undefined4 g_027d4d84;
// @baa 0x01c2d770
void sub_01c2d770(void)
{
  if (g_027d4d74 != 0) {
    sub_01c2df00(g_027d4d84);
    g_027d4d84 = 0;
    g_027d4d74 = 0;
  }
  return;
}

// @baa 0x01c2dfe0
void sub_01c2dfe0(void) {  }

extern "C" __declspec(dllimport) void* __cdecl malloc(unsigned int Size);
// @baa 0x01c2def0
void* sub_01c2def0()
{
    return malloc(4);
}

// @baa 0x01c2df40
void* sub_01c2df40()
{
    return malloc(4);
}
