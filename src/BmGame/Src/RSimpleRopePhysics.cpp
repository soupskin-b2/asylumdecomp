// RSimpleRopePhysics.cpp (part 1 of 3): 4 functions
// Placed here by: file 3, neighbours 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Core.h"

// @baa 0x0166ac80
void sub_0166ac80(void) {  }

struct NxActor;
struct NxScene {
    virtual void vf_00(); virtual void vf_04(); virtual void vf_08(); virtual void vf_0c();
    virtual void vf_10(); virtual void vf_14(); virtual void vf_18(); virtual void vf_1c();
    virtual void vf_20(); virtual void vf_24();
    virtual void releaseActor(NxActor* Actor);
};

struct FRBPhysScene {
    virtual void vf_00();
    virtual NxScene* GetNovodexPrimaryScene();
};

struct FRSimpleRopePhysics {
    BYTE _pad[8];
    FRBPhysScene* Scene;
    NxActor* Actor;

    UBOOL GetIsInitialised() const { return Scene != NULL; }
    void sub_0166ac90();
};

// @baa 0x0166ac90
void FRSimpleRopePhysics::sub_0166ac90()
{
    if (!GetIsInitialised())
        appFailAssert("GetIsInitialised()", "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RSimpleRopePhysics.cpp", 794, TEXT(""));
    if (Actor)
    {
        Scene->GetNovodexPrimaryScene()->releaseActor(Actor);
        Actor = NULL;
    }
}

struct C {
    int sub_01683a40();
};

int sub_006311e0(...);
int sub_01683670(...);
extern undefined2 g_01e3f3dc;
extern undefined4 g_0236eaa4;
// @baa 0x01683a40
int C::sub_01683a40(void)
{
    int param_1 = (int)this;

  int iVar1;
  
  if (*(int *)(param_1 + 4) == 0) {
    sub_006311e0("m_pOwner != NULL",
                 "e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\bmgame\\inc\\RRopePhysicsBase.h"
                 ,0x92,&g_01e3f3dc);
  }
  iVar1 = sub_01683670(*(undefined4 *)(param_1 + 4));
  if (iVar1 == 0) {
    sub_006311e0("pOwner != NULL",
                 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RSimpleRopePhysics.cpp"
                 ,0x35,&g_0236eaa4);
  }
  return iVar1;
}

struct C_01683aa0 {
    int sub_01683aa0();
};

int sub_016836d0(...);
extern undefined4 g_0236eb84;
// @baa 0x01683aa0
int C_01683aa0::sub_01683aa0(void)
{
    int param_1 = (int)this;
  int iVar1;
  if (*(int *)(param_1 + 4) == 0) {
    sub_006311e0("m_pOwner != NULL",
                 "e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\bmgame\\inc\\RRopePhysicsBase.h"
                 ,0x98,&g_01e3f3dc);
  }
  iVar1 = sub_016836d0(*(undefined4 *)(param_1 + 4));
  if (iVar1 == 0) {
    sub_006311e0("pOwner != NULL",
                 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RSimpleRopePhysics.cpp"
                 ,0x3c,&g_0236eb84);
  }
  return iVar1;
}
