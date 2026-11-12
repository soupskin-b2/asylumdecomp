// RFlagManager.cpp: 25 functions
// Placed here by: callers 5, file 5, neighbours 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x015424d0
IMPLEMENT_CLASS_AT(URSeqVar_GlobalFlag, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\CommonGame\\Src\\RFlagManager.cpp", 19);

// @baa 0x015424f0
IMPLEMENT_CLASS_AT(URSeqVar_LocalFlag, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\CommonGame\\Src\\RFlagManager.cpp", 18);

// @baa 0x01542510
// @baa 0x015425d0
// @baa 0x01549770
IMPLEMENT_CLASS_AT(URSeqAct_SwitchFlags, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\CommonGame\\Src\\RFlagManager.cpp", 17);

// @baa 0x01549790
IMPLEMENT_CLASS_AT(URSeqAct_SetBoolEx, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\CommonGame\\Src\\RFlagManager.cpp", 16);

// @baa 0x015497b0
// @baa 0x01549870
// @baa 0x0154a7a0
IMPLEMENT_CLASS_AT(URFlagManager, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\CommonGame\\Src\\RFlagManager.cpp", 20);

int sub_005c7a70(...);
int sub_0154a720(void);
// @baa 0x0154a7b0
undefined4 URFlagManager::sub_0154a7b0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0154a720();
  if ((param_2 & 1) != 0) {
    sub_005c7a70(param_1,0x78);
  }
  return param_1;
}

// @baa 0x0154a7d0

// @baa 0x0153d7a0
int URSeqVar_GlobalFlag::vf_000(void) { return 1; }

// @baa 0x0153d7b0
bool URSeqVar_GlobalFlag::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x0153d7f0

// @baa 0x0153d900
int URFlagManager::vf_000(void) { return 1; }

// @baa 0x0153d910
bool URFlagManager::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x0153d950
void URSeqVar_LocalFlag::vf_04c(UINT a0) {  }

int sub_005c7a20(void);
extern undefined * g_022e5c68;
// @baa 0x01540630
undefined4 * UObject::sub_01540630(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_022e5c68);
  return param_1;
}

extern undefined * g_022e8f10;
// @baa 0x015479f0
undefined4 * UObject::sub_015479f0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_022e8f10);
  return param_1;
}

void sub_01035b70();
struct RFlagManager {
    char pad[0x30];
    struct {
        void sub_01035b70(int arg);
    } flags;
    void sub_01547aa0();
};

// @baa 0x01547aa0
void RFlagManager::sub_01547aa0()
{
    flags.sub_01035b70(0);
}

struct C_view {
    int sub_01547ab0(int, int, int);
};

// @baa 0x01548850
UBOOL URFlagManager::GetGlobalFlag(FName FlagName)
{
    int param_1 = (int)this;
  undefined4 *puVar1;
  puVar1 = (undefined4 *)((C_view *)(this))->sub_01547ab0(param_1 + 0x6c, *(INT*)&FlagName, *((INT*)&FlagName + 1));
  return *puVar1;
}

// @baa 0x01548870
undefined4 URFlagManager::vf_11c(undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
    int param_1 = (int)this;
  undefined4 uVar1;
  undefined4 *puVar2;
  puVar2 = (undefined4 *)((C_view *)(this))->sub_01547ab0(param_1 + 0x6c, param_2, param_3);
  uVar1 = *puVar2;
  *puVar2 = param_4;
  return uVar1;
}

// @baa 0x01540790
/* USequenceVariable::GetValueStr (slot 0x194, a placeholder vf_194 in the kit): a local flag
 * variable shows the name of its flag. */
FString URSeqVar_LocalFlag::vf_194()
{
    return FlagName.ToString();
}

// @baa 0x015407c0
/* USequenceVariable::GetValueStr (slot 0x194, a placeholder vf_194 in the kit): a global flag
 * variable shows the name of its flag. */
FString URSeqVar_GlobalFlag::vf_194()
{
    return FlagName.ToString();
}

/* UE3's FStringNoInit::operator=(const FString&) (004899f0, out of line); the kit's FStringNoInit
 * doesn't declare it. */
class FStringNoInit_ : public FStringNoInit
{
public:
    FStringNoInit_& operator=(const FString& Other);
};

// @baa 0x01540870
/* UObject::PostEditChange(UProperty* PropertyThatChanged) (slot 0x4c, a placeholder vf_04c taking
 * UINT in the kit): the action's comment shows the comment of the selected mode. */
void URSeqAct_SwitchFlags::vf_04c(UINT PropertyThatChanged)
{
    (FStringNoInit_&)ObjComment = Comments(Mode);
}
