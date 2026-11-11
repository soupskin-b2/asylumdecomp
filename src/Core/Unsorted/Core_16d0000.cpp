// Core_16d0000.cpp: 10 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

struct C { C* sub_016dbc80(void); };

// @baa 0x016dbc80
C* C::sub_016dbc80(void) { return this; }

struct C_016dbc90 { C_016dbc90* sub_016dbc90(void); };

// @baa 0x016dbc90
C_016dbc90* C_016dbc90::sub_016dbc90(void) { return this; }

struct C_016dbca0 { C_016dbca0* sub_016dbca0(void); };

// @baa 0x016dbca0
C_016dbca0* C_016dbca0::sub_016dbca0(void) { return this; }

struct C_016dbcb0 { void sub_016db350(int); C_016dbcb0 *sub_016dbcb0(int); };

// @baa 0x016dbcb0
C_016dbcb0 *C_016dbcb0::sub_016dbcb0(int a) { sub_016db350(a); return this; }

struct M_016dbda0 { void sub_016db050(); };

struct C_016dbda0 { char pad[8]; M_016dbda0 m; void sub_016dbda0(); };

// @baa 0x016dbda0
void C_016dbda0::sub_016dbda0() { m.sub_016db050(); }

struct C_016dbdb0 {
    undefined4 * sub_016dbdb0(undefined4);
    int sub_00c64160(int);
};

// @baa 0x016dbdb0
undefined4 * C_016dbdb0::sub_016dbdb0(undefined4 param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  ((C_016dbdb0 *)(this))->sub_00c64160(param_2);
  return param_1;
}

// @baa 0x016dbfd0
IMPLEMENT_CLASS_AT(URCharacterBioCueFactoryNew, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmGameGFxSupportClasses.cpp", 628);

// @baa 0x016dc030
int sub_005c7a20(void);
extern undefined * g_023a3268;
// @baa 0x016dc050
undefined4 * UObject::sub_016dc050(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_023a3268);
  return param_1;
}

// @baa 0x016dc070
IMPLEMENT_CLASS_AT(URCharacterBioCue, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BmGameGFxSupportClasses.cpp", 627);
