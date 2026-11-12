// NewMaterialEditor.cpp: 6 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

struct FMaterialEditorObject {
    void sub_007374f0(int Arg);
    void sub_00737390(int Arg);
};

extern FMaterialEditorObject g_026b2554;
extern FMaterialEditorObject g_026b22ac;
// @baa 0x00739720
void sub_00739720()
{
    g_026b2554.sub_007374f0(0);
    g_026b22ac.sub_00737390(0);
}

// @baa 0x014276f0
IMPLEMENT_CLASS_AT(UMaterialEditorOptions, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\NewMaterialEditor.cpp", 19);

// @baa 0x01427820
bool UMaterialEditorOptions::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x01427880
IMPLEMENT_CLASS_AT(UPreviewMaterial, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\NewMaterialEditor.cpp", 341);

// @baa 0x01427990
int UPreviewMaterial::vf_000(void) { return 1; }

// @baa 0x014279a0
bool UPreviewMaterial::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}
