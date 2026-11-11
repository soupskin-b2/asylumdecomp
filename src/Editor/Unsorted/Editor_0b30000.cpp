// Editor_0b30000.cpp: 10 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

// @baa 0x00b314d0
void sub_00b314d0(void) {  }

int sub_009d6ee0(void);
int sub_009f1cc0(...);
extern undefined4 g_026b63b0;
// @baa 0x00b31560
int sub_00b31560(void)
{
  if (g_026b63b0 == 0) {
    g_026b63b0 = sub_009f1cc0(L"Engine");
    sub_009d6ee0();
  }
  return g_026b63b0;
}

struct C {
    void * sub_00b31590();
};

void * sub_01a37612(void *, int, size_t);
// @baa 0x00b31590
void * C::sub_00b31590(void)
{
    void * param_1 = (void *)this;

  sub_01a37612(param_1,0,0x2c);
  return param_1;
}

int sub_00b515d0(void);
int sub_00b68e20(...);
extern undefined4 g_026bf5b0;
// @baa 0x00b315b0
int sub_00b315b0(void)
{
  if (g_026bf5b0 == 0) {
    g_026bf5b0 = sub_00b68e20(L"Engine");
    sub_00b515d0();
  }
  return g_026bf5b0;
}

int sub_00b51300(void);
int sub_00b6a600(...);
extern undefined4 g_026bf5a4;
// @baa 0x00b315e0
int sub_00b315e0(void)
{
  if (g_026bf5a4 == 0) {
    g_026bf5a4 = sub_00b6a600(L"Engine");
    sub_00b51300();
  }
  return g_026bf5a4;
}

// @baa 0x00b31610
DWORD __stdcall sub_00b31610(int p)
{
    return *(DWORD *)(p + 0x10);
}

int sub_00b6a6c0(...);
int sub_00b6b590(void);
extern undefined4 g_026bf5a8;
// @baa 0x00b31620
int sub_00b31620(void)
{
  if (g_026bf5a8 == 0) {
    g_026bf5a8 = sub_00b6a6c0(L"Engine");
    sub_00b6b590();
  }
  return g_026bf5a8;
}

int sub_00b725d0(void);
int sub_00b9dd40(...);
extern undefined4 g_026bf760;
// @baa 0x00b31650
int sub_00b31650(void)
{
  if (g_026bf760 == 0) {
    g_026bf760 = sub_00b9dd40(L"Engine");
    sub_00b725d0();
  }
  return g_026bf760;
}

int sub_00b69dc0(...);
int sub_00b69e80(void);
extern undefined4 g_026bf588;
// @baa 0x00b31680
int sub_00b31680(void)
{
  if (g_026bf588 == 0) {
    g_026bf588 = sub_00b69dc0(L"Engine");
    sub_00b69e80();
  }
  return g_026bf588;
}

// @baa 0x00b318b0
int sub_00b318b0(int a0, int a1) { return a1; }
