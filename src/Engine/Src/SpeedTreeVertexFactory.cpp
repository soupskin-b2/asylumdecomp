// SpeedTreeVertexFactory.cpp (part 1 of 2): 8 functions
// Placed here by: neighbours 8.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    undefined4 * sub_00bb3f50(byte);
};

int sub_0053dfa0(...);
extern undefined * g_01ecdfc8;
// @baa 0x00bb3f50
undefined4 * C::sub_00bb3f50(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ecdfc8);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x01a71520
void __stdcall sub_01a71520(int a0, int a1) {  }

// @baa 0x01a71630
void __stdcall sub_01a71630(int a0, int a1) {  }

extern "C" __declspec(dllimport) int memmove_s(...);
// @baa 0x01a71980
void * sub_01a71980(void * param_1, int param_2, int param_3)
{
  int iVar1;
  void *_Dst;
  
  iVar1 = param_2 - (int)param_1 >> 2;
  _Dst = (void *)(param_3 + iVar1 * -4);
  if (0 < iVar1) {
    memmove_s(_Dst,iVar1 * 4,param_1,iVar1 * 4);
  }
  return _Dst;
}

// @baa 0x01a71a80
void __stdcall sub_01a71a80(int a0) {  }

void sub_01a71530();
// @baa 0x01a72390
void sub_01a72390(void) { sub_01a71530(); }

void sub_01a71640();
// @baa 0x01a723c0
void sub_01a723c0(void) { sub_01a71640(); }

// @baa 0x01a726a0
void sub_01a726a0(void) {  }
