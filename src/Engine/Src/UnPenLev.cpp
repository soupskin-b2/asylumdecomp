// UnPenLev.cpp: 4 functions
// Placed here by: callers 2, file 2.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

int sub_00df42a0(void);
int sub_00e04840(...);
extern undefined4 g_026c5ecc;
// @baa 0x00ca7d20
int sub_00ca7d20(void)
{
  if (g_026c5ecc == 0) {
    g_026c5ecc = sub_00e04840(L"Engine");
    sub_00df42a0();
  }
  return g_026c5ecc;
}

typedef uint size_t;

struct C {
    int sub_00dfab20(int);
    int sub_00df5670(int);
};

void * sub_01a37612(void *, int, size_t);
// @baa 0x00dfab20
int C::sub_00dfab20(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  iVar1 = ((C *)(this))->sub_00df5670(param_2);
  sub_01a37612((void *)(iVar1 * 0x20 + *param_1),0,param_2 << 5);
  return iVar1;
}

// @baa 0x00e1e5e0
IMPLEMENT_CLASS_AT(UPendingLevel, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnPenLev.cpp", 22);

// @baa 0x00e1ea90
IMPLEMENT_CLASS_AT(UNetPendingLevel, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnPenLev.cpp", 459);
