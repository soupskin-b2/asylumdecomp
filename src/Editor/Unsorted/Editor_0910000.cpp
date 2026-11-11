// Editor_0910000.cpp: 6 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x009189e0
IMPLEMENT_CLASS_AT(UAnimNotify_Sound, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSkeletalAnim.cpp", 2258);

// @baa 0x00918af0
bool UAnimNotify_Sound::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00918b30
IMPLEMENT_CLASS_AT(UAnimNotify_Script, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSkeletalAnim.cpp", 2294);

// @baa 0x00918c40
bool UAnimNotify_Script::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00918c80
IMPLEMENT_CLASS_AT(UAnimNotify_Scripted, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSkeletalAnim.cpp", 2316);

// @baa 0x00918d90
bool UAnimNotify_Scripted::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}
