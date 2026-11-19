// UnPostProcess.cpp: 17 functions
// Placed here by: class 7, neighbours 6, file 3, callers 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x0064b7f0
IMPLEMENT_CLASS_AT(UPostProcessEffect, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnPostProcess.cpp", 7);

// @baa 0x0064b850
class FPostProcessSceneProxy* UPostProcessEffect::CreateSceneProxy(const FPostProcessSettings* a0) { return 0; }

// @baa 0x0064b860
// @baa 0x00889cf0
// @baa 0x00889e00
UBOOL UPostProcessEffect::HasUniqueStaticConfigName() const { return 1; }

// @baa 0x00889e10
UBOOL UPostProcessEffect::HasParentClassChanged() const
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00889e50
IMPLEMENT_CLASS_AT(UPostProcessChain, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnPostProcess.cpp", 8);

// @baa 0x00889f60
UBOOL UPostProcessChain::HasUniqueStaticConfigName() const { return 1; }

// @baa 0x00889f70
UBOOL UPostProcessChain::HasParentClassChanged() const
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00889fb0
IMPLEMENT_CLASS_AT(APostProcessVolume, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnPostProcess.cpp", 9);

// @baa 0x0088a0c0
UBOOL APostProcessVolume::HasUniqueStaticConfigName() const { return 1; }

// @baa 0x0088a0d0
UBOOL APostProcessVolume::HasParentClassChanged() const
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x0088e5a0
// @baa 0x0088f630
// @baa 0x0089a300
// @baa 0x0089bac0
// @baa 0x0089f200
