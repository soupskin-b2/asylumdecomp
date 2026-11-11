// ActorBrowser.cpp: 6 functions
// Placed here by: callers 3, neighbours 3.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

void sub_004025d0(void*);
struct D { void* p; ~D(){ if(0) sub_004025d0(p);} };

void sub_0053dfa0(void*);
struct C { void* Data; int Num; int Max; void sub_00fa9d20(); };

// @baa 0x00fa9d20
void C::sub_00fa9d20() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_view {
    int sub_013752b0(int, int);
};

// @baa 0x0137e200
int UObject::sub_0137e200(int param_2)
{
    int * param_1 = (int *)this;
  ((C_view *)(this))->sub_013752b0((int)(&param_2), param_2);
  if (param_2 != -1) {
    return param_2 * 0x20 + *param_1;
  }
  return 0;
}

struct C_view_0137e2b0 {
    int sub_0137e230(int);
};

// @baa 0x0137e2b0
int UObject::sub_0137e2b0(undefined4 param_2)
{
    int param_1 = (int)this;
  ((C_view_0137e2b0 *)(this))->sub_0137e230(param_2);
  *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
  return param_1;
}

int sub_0053dfa0(...);
int sub_01376960(void);
// @baa 0x0137e440
undefined4 UUnrealEdEngine::sub_0137e440(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01376960();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_013872d0 { void sub_01387050(); void sub_013872d0(int); };

// @baa 0x013872d0
void C_013872d0::sub_013872d0(int) { sub_01387050(); }

struct C_013872e0 { void sub_01387050(); void sub_013872e0(int); };

// @baa 0x013872e0
void C_013872e0::sub_013872e0(int) { sub_01387050(); }
