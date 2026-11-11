// Core_0ff0000.cpp: 3 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x00ffd620
IMPLEMENT_CLASS_AT(UTerrainLayerSetupFactoryNew, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Editor\\Src\\UnTerrainEdit.cpp", 2808);

// @baa 0x00ffd680
struct C_view {
    int sub_00672a40(int);
    int sub_00c009d0(int);
    int sub_007beb80(int);
};

// @baa 0x00ffd6a0
undefined4 UObject::sub_00ffd6a0(int param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_view *)(this))->sub_00672a40(param_2);
  ((C_view *)(((char *)this + 0xc)))->sub_00c009d0(param_2 + 0xc);
  ((C_view *)(((char *)this + 0x18)))->sub_007beb80(param_2 + 0x18);
  ((C_view *)(((char *)this + 0x24)))->sub_007beb80(param_2 + 0x24);
  return param_1;
}
