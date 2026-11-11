// ScopedObjectStateChange.cpp: 1 function
// Placed here by: file 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

int sub_006311e0(...);
// @baa 0x00715e40
void UTexture2DComposite::sub_00715e40(int param_2)
{
    int * param_1 = (int *)this;

  if (*param_1 != 0) {
    sub_006311e0("ModifiedObject == NULL",
                 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\ScopedObjectStateChange.cpp"
                 ,0x29,
                 L"Not allowed to change the object associated with an FScopedObjectStateChange!");
  }
  if (param_1[3] != 0) {
    sub_006311e0("!bActive",
                 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\ScopedObjectStateChange.cpp"
                 ,0x2a,
                 L"Cannot change the object associated with an FScopedObjectStateChange if BeginEdit() has been called without a matching call to FinishEdit()!"
                );
    *param_1 = param_2;
    return;
  }
  *param_1 = param_2;
  return;
}
