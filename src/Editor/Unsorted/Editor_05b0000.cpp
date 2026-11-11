// Editor_05b0000.cpp: 8 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x005b3aa0
IMPLEMENT_CLASS_AT(UCommandlet, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Core\\Src\\UnCoreNative.cpp", 674);

int sub_005b08d0(void);
// @baa 0x005ba250
int UTexture2D::sub_005ba250(void)
{
    int param_1 = (int)this;

  sub_005b08d0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

int sub_005b0930(void);
// @baa 0x005ba270
int UTexture2D::sub_005ba270(void)
{
    int param_1 = (int)this;

  sub_005b0930();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

int sub_005b0990(void);
// @baa 0x005ba290
int UTexture2D::sub_005ba290(void)
{
    int param_1 = (int)this;

  sub_005b0990();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_view {
    int sub_005b8460(int);
};

// @baa 0x005ba2b0
undefined4 UTexture2D::sub_005ba2b0(undefined4 param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_view *)(this))->sub_005b8460(param_2);
  return param_1;
}

struct C { void sub_005b84c0(int); C *sub_005ba2d0(int); };

// @baa 0x005ba2d0
C *C::sub_005ba2d0(int a) { sub_005b84c0(a); return this; }

void sub_005bdd80();
// @baa 0x005bf820
void sub_005bf820(void) { sub_005bdd80(); }

struct C_view_005bf830 {
    int sub_005dfd20(int);
};

int sub_005bdd80(...);
// @baa 0x005bf830
void UMetaData::Serialize(FArchive& Ar)
{
    undefined4 param_2 = (undefined4)&Ar;
    int param_1 = (int)this;
  ((C_view_005bf830 *)(this))->sub_005dfd20(param_2);
  sub_005bdd80(param_2,param_1 + 0x30);
  return;
}
