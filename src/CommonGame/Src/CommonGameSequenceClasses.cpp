// CommonGameSequenceClasses.cpp: 24 functions
// Placed here by: callers 8, file 8.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x01542290
IMPLEMENT_CLASS_AT(URSeqVar_AnalogControlFloat, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\CommonGame\\Src\\CommonGameSequenceClasses.cpp", 11);

// @baa 0x015422b0
IMPLEMENT_CLASS_AT(URSeqVar_RandomVector, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\CommonGame\\Src\\CommonGameSequenceClasses.cpp", 10);

// @baa 0x01542340
// @baa 0x01542400
// @baa 0x01548bf0
IMPLEMENT_CLASS_AT(URSeqAct_BoolCounter, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\CommonGame\\Src\\CommonGameSequenceClasses.cpp", 12);

// @baa 0x01548c10
IMPLEMENT_CLASS_AT(URSeqAct_SetFarCullDistance, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\CommonGame\\Src\\CommonGameSequenceClasses.cpp", 5);

// @baa 0x01548c30
IMPLEMENT_CLASS_AT(URSeqAct_EventSequence, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\CommonGame\\Src\\CommonGameSequenceClasses.cpp", 6);

// @baa 0x01548c50
IMPLEMENT_CLASS_AT(URSeqAct_WaitForAllInputs, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\CommonGame\\Src\\CommonGameSequenceClasses.cpp", 7);

// @baa 0x01548c70
IMPLEMENT_CLASS_AT(URSeqAct_WaitForBool, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\CommonGame\\Src\\CommonGameSequenceClasses.cpp", 8);

// @baa 0x01548c90
IMPLEMENT_CLASS_AT(URSeqCond_VisibleLastFrame, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\CommonGame\\Src\\CommonGameSequenceClasses.cpp", 9);

// @baa 0x01548cb0
// @baa 0x01548d70
// @baa 0x01548e30
// @baa 0x01548ef0
// @baa 0x01548fb0
// @baa 0x01549070

int sub_005c7a20(void);
extern undefined * g_022e5908;
// @baa 0x01540000
undefined4 * UObject::sub_01540000(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_022e5908);
  return param_1;
}

extern undefined * g_022e8538;
// @baa 0x01546f30
undefined4 * UObject::sub_01546f30(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_022e8538);
  return param_1;
}

struct C { void* Data; int Num; int Max; void sub_01541690(); };

void sub_01541690();
extern "C" int g_026e0f34;
extern "C" int g_026e0f38;
struct UObjectThunk {
    virtual void V00();
    virtual void V04();
    virtual void V08();
    virtual void V0c();
    virtual void V10();
    virtual void V14();
    virtual void V18();
    virtual void V1c();
    virtual void V20();
    virtual void V24();
    virtual void V28();
    virtual void V2c();
    virtual void V30();
    virtual void V34();
    virtual void V38();
    virtual void V3c();
    virtual void V40();
    virtual void V44();
    virtual void V48();
    virtual void V4c();
    virtual void V50();
    virtual void V54();
    virtual void V58();
    virtual void V5c();
    virtual void V60();
    virtual void V64();
    virtual void V68();
    virtual void V6c();
    virtual void V70();
    virtual void V74();
    virtual void V78();
    virtual void V7c();
    virtual void V80();
    virtual void V84();
    virtual void V88();
    virtual void V8c();
    virtual void V90();
    virtual void V94();
    virtual void V98();
    virtual void V9c();
    virtual void VA0();
    virtual void VA4();
    virtual void VA8();
    virtual void VAc();
    virtual void VB0();
    virtual void VB4();
    virtual void VB8();
    virtual void VBc();
    virtual void VC0();
    virtual void VC4();
    virtual void VC8();
    virtual void VCc();
    virtual void VD0();
    virtual void VD4();
    virtual void VD8();
    virtual void VDc();
    virtual void VE0();
    virtual void VE4();
    virtual void VE8();
    virtual void ProcessEvent(int, int, int);
    int __thiscall sub_005d7d10(int, int, int);
    void sub_01546f50();
};

// @baa 0x01546f50
void UObjectThunk::sub_01546f50()
{
    this->ProcessEvent(this->sub_005d7d10(g_026e0f34, g_026e0f38, 0), 0, 0);
}

struct UObjectThunk_01546f80 {
    virtual void V00();
    virtual void V04();
    virtual void V08();
    virtual void V0c();
    virtual void V10();
    virtual void V14();
    virtual void V18();
    virtual void V1c();
    virtual void V20();
    virtual void V24();
    virtual void V28();
    virtual void V2c();
    virtual void V30();
    virtual void V34();
    virtual void V38();
    virtual void V3c();
    virtual void V40();
    virtual void V44();
    virtual void V48();
    virtual void V4c();
    virtual void V50();
    virtual void V54();
    virtual void V58();
    virtual void V5c();
    virtual void V60();
    virtual void V64();
    virtual void V68();
    virtual void V6c();
    virtual void V70();
    virtual void V74();
    virtual void V78();
    virtual void V7c();
    virtual void V80();
    virtual void V84();
    virtual void V88();
    virtual void V8c();
    virtual void V90();
    virtual void V94();
    virtual void V98();
    virtual void V9c();
    virtual void VA0();
    virtual void VA4();
    virtual void VA8();
    virtual void VAc();
    virtual void VB0();
    virtual void VB4();
    virtual void VB8();
    virtual void VBc();
    virtual void VC0();
    virtual void VC4();
    virtual void VC8();
    virtual void VCc();
    virtual void VD0();
    virtual void VD4();
    virtual void VD8();
    virtual void VDc();
    virtual void VE0();
    virtual void VE4();
    virtual void VE8();
    virtual void ProcessEvent(int, int, int);
    int __thiscall sub_005d7d10(int, int, int);
    void sub_01546f80();
};

// @baa 0x01546f80
void UObjectThunk_01546f80::sub_01546f80()
{
    this->ProcessEvent(this->sub_005d7d10(g_026e0f34, g_026e0f38, 0), 0, 0);
}

extern undefined * g_022e86d8;
// @baa 0x01547040
undefined4 * UObject::sub_01547040(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_022e86d8);
  return param_1;
}

extern undefined * g_022e8878;
// @baa 0x01547100
undefined4 * UObject::sub_01547100(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_022e8878);
  return param_1;
}

extern undefined * g_022e8a28;
// @baa 0x015475b0
undefined4 * UObject::sub_015475b0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_022e8a28);
  return param_1;
}

extern undefined * g_022e8bd8;
// @baa 0x01547870
undefined4 * UObject::sub_01547870(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_022e8bd8);
  return param_1;
}
