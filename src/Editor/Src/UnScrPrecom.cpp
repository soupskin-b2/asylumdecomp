// UnScrPrecom.cpp: 4 functions
// Placed here by: callers 2.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

typedef uint size_t;

struct C_view {
    int sub_005fc710(int, int);
};

void * sub_01a37612(void *, int, size_t);
// @baa 0x00ff1b60
void UPackageMap::sub_00ff1b60(int param_2, int param_3)
{
    int * param_1 = (int *)this;
  ((C_view *)(this))->sub_005fc710(param_2, param_3);
  sub_01a37612((void *)(*param_1 + param_2 * 0xc),0,param_3 * 0xc);
  return;
}

struct C_view_00fff1c0 {
    int sub_00ffa960(int, int);
};

// @baa 0x00fff1c0
int UTexture2D::sub_00fff1c0(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  ((C_view_00fff1c0 *)(this))->sub_00ffa960((int)(&param_2), param_2);
  if ((param_2 != -1) && (iVar1 = *param_1 + param_2 * 0x28, iVar1 != 0)) {
    return iVar1 + 8;
  }
  return 0;
}

struct Sub
{
    INT* sub_00de0ab0(INT Value);
};

struct C
{
    char pad_00[0x34];
    Sub Marker;

    INT sub_00ff3250();
};

// @baa 0x00ff3250
INT C::sub_00ff3250()
{
    return *Marker.sub_00de0ab0(0);
}

struct TScrMarkerObj
{
    int sub_00ffff90(int, int);
};

struct TScrPrecom
{
    TScrMarkerObj * Obj;
};

// TArray<TScrPrecom>-like: Data at 0, Num at 4
struct FScrPrecomArray
{
    TScrPrecom * Data;

    int Num;

    int Max;

    TScrPrecom * sub_00ff0440(int);

    int sub_00ffffe0(int, int);
};

// @baa 0x00ffffe0
// @baa 0x00ffffe0
int FScrPrecomArray::sub_00ffffe0(int Param1, int Param2)
{
    if (Num > 0)
        return sub_00ff0440(0)->Obj->sub_00ffff90(Param1, Param2);
    return 0;
}
