// LensFlare.cpp: 7 functions
// Placed here by: file 4, callers 3.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x00bd14c0
IMPLEMENT_CLASS_AT(ULensFlareComponent, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\LensFlare.cpp", 11);

// @baa 0x00bd2190
// @baa 0x00bd4c40
IMPLEMENT_CLASS_AT(ALensFlareSource, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\LensFlare.cpp", 12);

// @baa 0x00bd6df0
// @baa 0x00bd84c0
IMPLEMENT_CLASS_AT(ULensFlare, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\LensFlare.cpp", 10);

// @baa 0x00bd8be0
extern UBOOL g_026c0b80;
extern INT g_026c0b3c;
struct FLensFlareSceneProxy {
    FLensFlareSceneProxy(ULensFlareComponent* Component); /* 0x00bdad00 */
    BYTE _data[0x180];
};

struct ULensFlareComponent_ : public ULensFlareComponent {
    FLensFlareSceneProxy* sub_00bdb270();
};

// @baa 0x00bdb270
FLensFlareSceneProxy* ULensFlareComponent_::sub_00bdb270()
{
    if (Template)
    {
        DepthPriorityGroup = Template->ReflectionsDPG;
        OuterCone = Template->OuterCone;
        InnerCone = Template->InnerCone;
        ConeFudgeFactor = Template->ConeFudgeFactor;
        Radius = Template->Radius;
        if (bAutoActivate)
        {
            bIsActive = 1;
        }
    }

    if (g_026c0b80 && DetailMode <= g_026c0b3c)
    {
        FLensFlareSceneProxy* LFSceneProxy = new FLensFlareSceneProxy(this);
        if (!LFSceneProxy)
            appFailAssert("LFSceneProxy", "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\LensFlare.cpp", 953, TEXT(""));
        return LFSceneProxy;
    }
    return NULL;
}
