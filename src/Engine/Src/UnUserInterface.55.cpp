// UnUserInterface.cpp: 6 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

struct C {
    undefined4 sub_00dd9de0();
};

extern "C" int g_026c5078;
extern "C" int g_026c507c;
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
    void sub_00ddd040();
};

// @baa 0x00ddd040
void UObjectThunk::sub_00ddd040()
{
    this->ProcessEvent(this->sub_005d7d10(g_026c5078, g_026c507c, 0), 0, 0);
}

/* FVector2D's component constructor (UnMath.h), which the kit's plain struct lacks */
struct FVector2D_ : public FVector2D
{
	FVector2D_(FLOAT InX, FLOAT InY) { X = InX; Y = InY; }
};

// @baa 0x00ddd0f0
/* The base client has no viewport: reports a zero size and fails. */
INT UUISceneClient::vf_124(INT ViewportIndex, INT out_ViewportSize)
{
	*(FVector2D*)out_ViewportSize = FVector2D_(0.f, 0.f);
	return 0;
}

// @baa 0x00ddd130
/* The base client reports a zero offset. */
UINT UUISceneClient::vf_12c(UINT ViewportIndex, FLOAT* out_ViewportOffset)
{
	*(FVector2D*)out_ViewportOffset = FVector2D_(0.f, 0.f);
	return 1;
}

// @baa 0x00dde070
/* Whether the UI post-process pass should run: enabled, and a scene that wants it is active. */
INT UUISceneClient::vf_188()
{
	return bEnablePostProcess && IsUIActive(0x10);
}

extern UBOOL g_0266e840;
// @baa 0x00dde0c0
/* Switches to NewActiveSkin (unless g_0266e840 is set) and lets the scenes know. */
INT UGameUISceneClient::ChangeActiveSkin(UUISkin* NewActiveSkin)
{
	if (NewActiveSkin != NULL && !g_0266e840)
	{
		ActiveSkin = NewActiveSkin;
		OnActiveSkinChanged();
	}
	return FALSE;
}

/* Kit gap: UGameUISceneClient::GetSceneAtIndex isn't declared. */
struct UGameUISceneClient_ : public UGameUISceneClient
{
	class UUIScene* GetSceneAtIndex(INT SceneIndex) const;
};

// @baa 0x00de2670
/* The active scene at this index of the scene stack, or NULL when the index is out of range. */
UUIScene* UGameUISceneClient_::GetSceneAtIndex(INT SceneIndex) const
{
	UUIScene* Result = NULL;
	if (SceneIndex >= 0 && SceneIndex < ActiveScenes.Num())
	{
		Result = ActiveScenes(SceneIndex);
	}
	return Result;
}
