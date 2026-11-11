// D3D9Drv_05e0000.cpp: 20 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

// @baa 0x005ec3c0
unsigned short sub_005ec3c0(unsigned char arg1)
{
	return arg1;
}

// @baa 0x005ec3d0
void sub_005ec3d0(void) {  }

// @baa 0x005ec3e0
void sub_005ec3e0(void) {  }

// @baa 0x005ec3f0
float10 sub_005ec3f0(double param_1)
{
  return (float10)param_1;
}

struct Base {
    virtual void v0(int) = 0;
    virtual void v1(int) = 0;
    virtual void sub_005ec408(int) = 0;
};

struct C : Base {
    void sub_005ec400(int);
};

// @baa 0x005ec400
void C::sub_005ec400(int a)
{
    sub_005ec408(a);
}

// @baa 0x005ec410
undefined4 sub_005ec410(ushort param_1)
{
  if ((((param_1 < 0x41) || (0x5a < param_1)) && ((param_1 < 0xc0 || (0xff < param_1)))) &&
     ((((param_1 < 0x61 || (0x7a < param_1)) && (param_1 != 0x9f)) &&
      ((param_1 != 0x8c && (param_1 != 0x9c)))))) {
    return 0;
  }
  return 1;
}

// @baa 0x005ec460
undefined4 sub_005ec460(ushort param_1)
{
  if (((((param_1 < 0x41) || (0x5a < param_1)) && ((param_1 < 0xc0 || (0xff < param_1)))) &&
      ((((param_1 < 0x61 || (0x7a < param_1)) && (param_1 != 0x9f)) &&
       ((param_1 != 0x8c && (param_1 != 0x9c)))))) && ((param_1 < 0x30 || (0x39 < param_1)))) {
    return 0;
  }
  return 1;
}

typedef uint size_t;

extern "C" __declspec(dllimport) int _wcslwr_s(...);
// @baa 0x005ec4b0
wchar_t * sub_005ec4b0(wchar_t * param_1, size_t param_2)
{
  _wcslwr_s(param_1,param_2);
  return param_1;
}

typedef size_t rsize_t;

extern "C" __declspec(dllimport) int strcat_s(...);
// @baa 0x005ec4f0
char * sub_005ec4f0(char * param_1, rsize_t param_2, char * param_3)
{
  strcat_s(param_1,param_2,param_3);
  return param_1;
}

struct C_005ec510 { int sub_005ec510(void); };

// @baa 0x005ec510
int C_005ec510::sub_005ec510(void) { return *(int*)((char*)this + 0); }

extern char g_01e9f660[];
struct C_005ec520 { void sub_005ec520(void); };

// @baa 0x005ec520
void C_005ec520::sub_005ec520(void) { *(int*)((char*)this + 0) = (int)g_01e9f660; }

struct C_005ec530 {
    undefined4 * sub_005ec530(byte);
};

int sub_0053dfa0(...);
// @baa 0x005ec530
undefined4 * C_005ec530::sub_005ec530(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01e9f660);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

extern char g_01e9f688[];
struct C_005ec550 { void sub_005ec550(void); };

// @baa 0x005ec550
void C_005ec550::sub_005ec550(void) { *(int*)((char*)this + 0) = (int)g_01e9f688; }

struct C_005ec560 {
    undefined4 * sub_005ec560(byte);
};

// @baa 0x005ec560
undefined4 * C_005ec560::sub_005ec560(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01e9f688);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

extern char g_01e72ac0[];
struct C_005ec5a0 { C_005ec5a0* sub_005ec5a0(void); };

// @baa 0x005ec5a0
C_005ec5a0* C_005ec5a0::sub_005ec5a0(void) { *(int*)((char*)this + 0) = (int)g_01e72ac0; return this; }

struct C_005ec5b0 {
    undefined1 * sub_005ec5b0(int, uint);
};

int sub_006311e0(...);
extern undefined2 g_01e3f3dc;
// @baa 0x005ec5b0
undefined1 * C_005ec5b0::sub_005ec5b0(int param_2, uint param_3)
{
    undefined1 * param_1 = (undefined1 *)this;

  *param_1 = 0;
  param_1[1] = (char)param_2;
  *(short *)(param_1 + 2) = (short)param_3;
  if (param_2 == 0) {
    sub_006311e0("InType != GCRT_None",
                 "e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\UnObjGC.h"
                 ,0x2c,&g_01e3f3dc);
  }
  if ((param_3 & 0xffff0000) != 0) {
    sub_006311e0("(InOffset & ~0xFFFF) == 0",
                 "e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\UnObjGC.h"
                 ,0x2d,&g_01e3f3dc);
  }
  return param_1;
}

struct C_005ec610 { int a; C_005ec610(int); };

// @baa 0x005ec610
C_005ec610::C_005ec610(int x) : a(x) {}

struct C_005ec620 { int sub_005ec620(void); };

// @baa 0x005ec620
int C_005ec620::sub_005ec620(void) { return *(int*)((char*)this + 0); }

struct C_005ec630 { C_005ec630* sub_005ec630(void); };

// @baa 0x005ec630
C_005ec630* C_005ec630::sub_005ec630(void) { return this; }

struct C_005ec640 { int a; C_005ec640(int); };

// @baa 0x005ec640
C_005ec640::C_005ec640(int x) : a(x) {}
