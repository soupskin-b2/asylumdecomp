// UnUserInterface.cpp (part 15 of 15): 4 functions
// Placed here by: class 3.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x00de1650
bool UUISceneClient::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00de3fc0
IMPLEMENT_CLASS_AT(UGameUISceneClient, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnUserInterface.cpp", 25);

// @baa 0x00de40d0
bool UGameUISceneClient::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

extern int g_026667a8;
int sub_00630f20(int Log, const wchar_t* Message, const wchar_t* Func);
// @baa 0x00de1450
// Pure virtual thunk: the base class provides the message, the derived class must override.
void UUISceneClient::RenderScenes(INT)
{
    sub_00630f20(g_026667a8, L"Pure virtual not implemented (%s)", L"UUISceneClient::RenderScenes");
}
