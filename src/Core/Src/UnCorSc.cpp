// UnCorSc.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

#define CPF_Config 0x0000000000004000
// Not declared in Classes.h: UClass::GetDefaultObject (00572b30) and UObject::SaveConfig (005df020).

// @baa 0x005999f0
void UObject::execStaticSaveConfig(FFrame& Stack, RESULT_DECL)
{
    P_FINISH;

    UObject* DefaultObject = ((UClass*)GetClass())->GetDefaultObject();
#line 5307 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Core\\Src\\UnCorSc.cpp"
    check(DefaultObject);
    DefaultObject->SaveConfig();
}

#line 31 "candidate.cpp"
