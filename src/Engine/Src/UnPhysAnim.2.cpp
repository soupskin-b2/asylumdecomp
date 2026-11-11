// UnPhysAnim.cpp (part 2 of 2): 1 function
// Placed here by: callers 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

typedef uint size_t;

struct C {
    int sub_00a075c0(int);
    int sub_00a02df0(int);
};

void * sub_01a37612(void *, int, size_t);
// @baa 0x00a075c0
int C::sub_00a075c0(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  iVar1 = ((C *)(this))->sub_00a02df0(param_2);
  sub_01a37612((void *)(iVar1 * 0x50 + *param_1),0,param_2 * 0x50);
  return iVar1;
}
