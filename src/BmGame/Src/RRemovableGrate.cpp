// RRemovableGrate.cpp: 9 functions
// Placed here by: class 6, file 2.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x01717ba0
UBOOL ARRemoveableGrate::HasUniqueStaticConfigName() const { return 1; }

struct C_view {
    int sub_00a3fe50(int, int);
};

int sub_006311e0(...);
extern undefined4 g_023c5274;
extern undefined4 g_026b62b8;
// @baa 0x01718330
void ARRemoveableGrate::vf_358(void)
{
    int param_1 = (int)this;
  if (g_026b62b8 == 0) {
    sub_006311e0("GWorld != NULL",
                 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RRemovableGrate.cpp"
                 ,0x79,&g_023c5274);
  }
  ((C_view *)((*(char **)((char *)this + 0x28c))))->sub_00a3fe50(*(undefined4 *)(g_026b62b8 + 0x15c), 0);
  *(uint *)(param_1 + 0x1d0) = *(uint *)(param_1 + 0x1d0) & 0xffffbfff;
  return;
}

// @baa 0x017319f0
IMPLEMENT_CLASS_AT(ARRemoveableGrate, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RRemovableGrate.cpp", 16);

// @baa 0x01731a70
// @baa 0x01733310
// @baa 0x01734390
// @baa 0x01734d40
// @baa 0x01734e50
UBOOL ARRemoveableGrate::HasParentClassChanged() const
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x01717f10
INT ARRemoveableGrate::AddMyMarker(AActor * P)
{
    PostEditMove(TRUE);
    return 0;
}
