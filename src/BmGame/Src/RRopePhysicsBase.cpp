// RRopePhysicsBase.cpp: 5 functions
// Placed here by: neighbours 3, file 2.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    void sub_01668e90();
};

int sub_006311e0(...);
int sub_01560eb0(...);
extern undefined2 g_01e3f3dc;
extern undefined4 g_02363d2c;
// @baa 0x01668e90
void C::sub_01668e90(void)
{
    int param_1 = (int)this;

  int iVar1;
  
  if (*(int *)(param_1 + 4) == 0) {
    sub_006311e0("m_pOwner != NULL",
                 "e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\bmgame\\inc\\RRopePhysicsBase.h"
                 ,0x92,&g_01e3f3dc);
  }
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 == 0) {
    sub_006311e0("pOwner != NULL",
                 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RRopePhysicsBase.cpp"
                 ,0x40,&g_02363d2c);
  }
  sub_01560eb0(*(undefined4 *)(iVar1 + 0x1b0),*(undefined4 *)(iVar1 + 0x1b8),
               *(undefined4 *)(iVar1 + 0x1bc));
  return;
}

struct C_01668f00 {
    void sub_01668f00();
};

extern undefined4 g_02363e0c;
// @baa 0x01668f00
void C_01668f00::sub_01668f00(void)
{
    int param_1 = (int)this;

  int iVar1;
  
  if (*(int *)(param_1 + 4) == 0) {
    sub_006311e0("m_pOwner != NULL",
                 "e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\bmgame\\inc\\RRopePhysicsBase.h"
                 ,0x92,&g_01e3f3dc);
  }
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 == 0) {
    sub_006311e0("pOwner != NULL",
                 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RRopePhysicsBase.cpp"
                 ,0x48,&g_02363e0c);
  }
  sub_01560eb0(*(undefined4 *)(iVar1 + 0x1b4),*(undefined4 *)(iVar1 + 0x1c0),
               *(undefined4 *)(iVar1 + 0x1c4));
  return;
}

struct C_01669430 {
    undefined4 sub_01669430();
};

// @baa 0x01669430
undefined4 C_01669430::sub_01669430(void)
{
    int param_1 = (int)this;
  if (*(int *)(param_1 + 4) == 0) {
    sub_006311e0("m_pOwner != NULL",
                 "e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\bmgame\\inc\\RRopePhysicsBase.h"
                 ,0x92,&g_01e3f3dc);
  }
  if (*(float *)(*(int *)(param_1 + 4) + 0x1e8) == -1.0) {
    return 1;
  }
  return 0;
}

struct C_01669590 {
    int sub_01669590();
};

// @baa 0x01669590
int C_01669590::sub_01669590(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 4) == 0) {
    sub_006311e0("m_pOwner != NULL",
                 "e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\bmgame\\inc\\RRopePhysicsBase.h"
                 ,0x98,&g_01e3f3dc);
  }
  return *(int *)(param_1 + 4) + 400;
}

struct C_01669620 {
    uint sub_01669620();
};

// @baa 0x01669620
uint C_01669620::sub_01669620(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 4) == 0) {
    sub_006311e0("m_pOwner != NULL",
                 "e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\bmgame\\inc\\RRopePhysicsBase.h"
                 ,0x92,&g_01e3f3dc);
  }
  return *(uint *)(*(int *)(param_1 + 4) + 0x198) >> 0x15 & 1;
}
