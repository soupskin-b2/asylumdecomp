// RActorContextMenu.cpp (part 2 of 2): 2 functions
// Placed here by: neighbours 1, callers 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    void sub_01479d10(int, int);
};

int sub_00627f00(...);
int sub_006311e0(...);
extern undefined2 g_01e3f3dc;
// @baa 0x01479d10
void C::sub_01479d10(int param_2, int param_3)
{
    int * param_1 = (int *)this;

  if ((param_2 < 0) || (param_3 < 0)) {
    sub_006311e0("(A >= 0) && (B >= 0)",
                 "e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\Array.h"
                 ,0x41f,&g_01e3f3dc);
  }
  if ((param_1[1] <= param_2) || (param_1[1] <= param_3)) {
    sub_006311e0("(ArrayNum > A) && (ArrayNum > B)",
                 "e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\Array.h"
                 ,0x420,&g_01e3f3dc);
  }
  if (param_2 != param_3) {
    sub_00627f00(*param_1 + param_2 * 4,*param_1 + param_3 * 4,4);
  }
  return;
}

typedef uint size_t;

struct C_01479e50 {
    int sub_01479e50(int);
    int sub_01478ab0(int);
};

void * sub_01a37612(void *, int, size_t);
// @baa 0x01479e50
int C_01479e50::sub_01479e50(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  iVar1 = ((C_01479e50 *)(this))->sub_01478ab0(param_2);
  sub_01a37612((void *)(*param_1 + iVar1 * 0x1c),0,param_2 * 0x1c);
  return iVar1;
}
