// UnController.cpp (part 1 of 2): 7 functions
// Placed here by: neighbours 5, callers 1, file 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x007a16c0
int AController::vf_390(int a0) { return 0; }

// @baa 0x007a16d0
int AController::vf_3c8(int a0, int a1) { return 0; }

extern "C" int g_026c47e0;
extern "C" int g_026c47e4;
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
    void sub_007a1d30();
};

// @baa 0x007a1d30
void UObjectThunk::sub_007a1d30()
{
    this->ProcessEvent(this->sub_005d7d10(g_026c47e0, g_026c47e4, 0), 0, 0);
}

// @baa 0x007a1d60
void __stdcall sub_007a1d60(int a0, int a1, int a2, int a3) {  }

// @baa 0x007a1e70
int APlayerController::vf_43c(int a0, int a1) { return 0; }

// @baa 0x007ab8f0
IMPLEMENT_CLASS_AT(UCheatManager, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnController.cpp", 20);

// @baa 0x007ac450
