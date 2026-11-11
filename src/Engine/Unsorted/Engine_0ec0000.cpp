// Engine_0ec0000.cpp: 13 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

extern char g_02132108[];
struct C { void sub_00ec1450(void); };

// @baa 0x00ec1450
void C::sub_00ec1450(void) { *(int*)((char*)this + 0) = (int)g_02132108; }

// @baa 0x00ec1460
int sub_00ec1460(void) { return 0; }

struct C_00ec1530 {
    INT x;
    bool sub_00ec1530();
};

// @baa 0x00ec1530
bool C_00ec1530::sub_00ec1530()
{
    return x >= 0;
}

// @baa 0x00ec1540
void sub_00ec1540(void) {  }

struct C_00ec1550 { int a, b; C_00ec1550(int, int); };

// @baa 0x00ec1550
C_00ec1550::C_00ec1550(int x, int y) : a(x), b(y) {}

// @baa 0x00ec1570
int __stdcall sub_00ec1570(int a0) { return 0; }

// @baa 0x00ec1580
int __stdcall sub_00ec1580(int a0) { return 0; }

// @baa 0x00ec1590
int __stdcall sub_00ec1590(int a0) { return 1; }

struct C_00ec15a0 {
    int sub_00ec15a0();
};

// @baa 0x00ec15a0
int C_00ec15a0::sub_00ec15a0(void)
{
    int * param_1 = (int *)this;

  return *param_1 + 0x100;
}

extern char g_025d67c0[];
// @baa 0x00ec15b0
int sub_00ec15b0(void) { return (int)g_025d67c0; }

// @baa 0x00ec15c0
float10 sub_00ec15c0(void)
{
  return (float10)1;
}

// @baa 0x00ec1610
int sub_00ec1610(void) { return 0; }

struct C_00ec1620 {
    int sub_00ec1620();
};

// @baa 0x00ec1620
int C_00ec1620::sub_00ec1620(void)
{
    int * param_1 = (int *)this;

  return *(int *)(*param_1 + 0x14) + -1;
}
