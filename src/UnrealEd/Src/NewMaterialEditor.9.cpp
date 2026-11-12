// NewMaterialEditor.cpp: 8 functions
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

// 0142b300: zeroes a 28-byte block on 'this' and returns this.
struct F28Block
{
	INT A;
	INT B;
	INT C;
	INT D;
	INT E;
	INT F;
	INT G;

	F28Block* sub_0142b300()
	{
		A = 0;
		B = 0;
		C = 0;
		D = 0;
		E = 0;
		F = 0;
		G = 0;
		return this;
	}
};

// @baa 0x0142b300
void UseF28Block(F28Block& B)
{
	B.sub_0142b300();
}

struct S_005c8020 {
    int sub_005c8020(int Other);
};

// @baa 0x01429220
// @baa 0x01429220
int sub_01429220(S_005c8020* A, int Other)
{
    return A->sub_005c8020(Other) ? 1 : -1;
}
