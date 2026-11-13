// LevelBrowser.cpp: 3 functions
// Placed here by: callers 1, file 1, neighbours 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

// @baa 0x005fae90
void sub_005fae90(void)
{
    GCallbackEvent->Send((ECallbackEventType)23);
}

int sub_006311e0(...);
extern undefined4 g_02264a78;
// @baa 0x013a33e0
void UUnrealEdEngine::sub_013a33e0(void)
{
    int param_1 = (int)this;

  int *piVar1;
  
  piVar1 = (int *)(param_1 + 0x1ac);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 < 0) {
    sub_006311e0("SuppressUpdateMutex>=0",
                 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\LevelBrowser.cpp"
                 ,0x8ef,&g_02264a78);
  }
  return;
}

struct C {
    void sub_013aac10();
    int sub_013a8410(int, int);
};

// @baa 0x013aac10
void C::sub_013aac10(void)
{
    int param_1 = (int)this;
  ((C *)(this))->sub_013a8410(param_1 + 0x1b4, 0x40);
  return;
}
