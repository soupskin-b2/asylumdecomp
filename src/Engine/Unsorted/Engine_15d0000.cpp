// Engine_15d0000.cpp: 19 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x015d81a0
void sub_015d81a0(void) {  }

struct C { C* sub_015d81b0(int a0); };

// @baa 0x015d81b0
C* C::sub_015d81b0(int a0) { return this; }

struct C_015d8220 { C_015d8220* sub_015d8220(void); };

// @baa 0x015d8220
C_015d8220* C_015d8220::sub_015d8220(void) { return this; }

// @baa 0x015d8250
int sub_015d8250(int a0, int a1) { return a1; }

int sub_005c7a20(void);
extern undefined * g_023302f8;
// @baa 0x015d8260
undefined4 * UObject::sub_015d8260(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_023302f8);
  return param_1;
}

// @baa 0x015d8280
IMPLEMENT_CLASS_AT(URSpotableInterface, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RBmAIClass.cpp", 33);

// @baa 0x015d82e0
extern char g_02330404[];
// @baa 0x015d8300
void URSpotableInterface::sub_015d8300(void) { *(int*)((char*)this + 0) = (int)g_02330404; }

struct C_015d8310 { C_015d8310* sub_015d8310(void); };

// @baa 0x015d8310
C_015d8310* C_015d8310::sub_015d8310(void) { *(int*)((char*)this + 0) = (int)g_02330404; return this; }

int sub_0053dfa0(...);
// @baa 0x015d8320
undefined4 * URSpotableInterface::sub_015d8320(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_02330404);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x015d8370
int sub_015d8370(int a0, int a1) { return a1; }

// @baa 0x015d8380
int sub_015d8380(int a0, int a1) { return a1; }

int sub_016d2430(void);
int sub_016def80(...);
extern undefined4 g_026e2324;
// @baa 0x015d8390
int sub_015d8390(void)
{
  if (g_026e2324 == 0) {
    g_026e2324 = sub_016def80(L"BmGame");
    sub_016d2430();
  }
  return g_026e2324;
}

struct C_015d8480 { C_015d8480* sub_015d8480(void); };

// @baa 0x015d8480
C_015d8480* C_015d8480::sub_015d8480(void) { return this; }

struct C_015d84b0 { C_015d84b0* sub_015d84b0(void); };

// @baa 0x015d84b0
C_015d84b0* C_015d84b0::sub_015d84b0(void) { return this; }

struct C_015d84e0 { C_015d84e0* sub_015d84e0(int a0); };

// @baa 0x015d84e0
C_015d84e0* C_015d84e0::sub_015d84e0(int a0) { return this; }

struct C_015d84f0 { C_015d84f0* sub_015d84f0(int a0); };

// @baa 0x015d84f0
C_015d84f0* C_015d84f0::sub_015d84f0(int a0) { return this; }

struct C_015d8500 { C_015d8500* sub_015d8500(int a0); };

// @baa 0x015d8500
C_015d8500* C_015d8500::sub_015d8500(int a0) { return this; }

// @baa 0x015d8610
int sub_015d8610(int a0, int a1) { return a1; }
