// FxRenderWidgetUE3.cpp (part 2 of 2): 3 functions
// Placed here by: neighbours 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    void sub_00410220(int);
};

extern "C" __declspec(dllimport) int memmove(...);
// @baa 0x00410220
void C::sub_00410220(int param_2)
{
    int * param_1 = (int *)this;

  void *_Dst;
  
  _Dst = (void *)(*param_1 + param_2 * 4);
  memmove(_Dst,(void *)((int)_Dst + 4),(param_1[2] - param_2) * 4 - 4);
  param_1[2] = param_1[2] + -1;
  *(undefined4 *)(*param_1 + param_1[2] * 4) = 0;
  return;
}

struct FWidgetItem
{
	UINT Unknown;
	UINT Count;
};

// @baa 0x00410dc0
UINT sub_00410dc0(FWidgetItem* Item)
{
	return (Item->Count * 16) / 8;
}

// @baa 0x00410210
UINT sub_00410210(FWidgetItem* Item)
{
	return (Item->Count * 16) / 8;
}
