// TaskDatabaseThread.cpp: 1 function
// Placed here by: file 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

int sub_006311e0(...);
extern undefined4 g_022a2858;
// @baa 0x01476ca0
undefined4 UFMODReverbLabelRenderer::sub_01476ca0(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 0x38) == 0) {
    sub_006311e0("TaskDatabaseProvider != NULL",
                 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\TaskDatabaseThread.cpp"
                 ,0x3f,&g_022a2858);
  }
  return 1;
}
