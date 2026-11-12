// UnAudio.cpp: 11 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

/* UAudioComponent's play/stop side of the ambient sound (00791770 has no name in the headers). */
struct UAudioComponent_ : public UAudioComponent {
	void sub_00791770();
};

/* AActor's vtable slot 0x314 (the headers guess `virtual FLOAT vf_314(INT)`; this override
 * returns nothing, so it is declared here as void under its address). */
struct AAmbientSound_ : public AAmbientSound {
	void sub_0076cd90(INT Param);
	void sub_00791ad0(INT Param);
};

// @baa 0x00791ad0
void AAmbientSound_::sub_00791ad0(INT Param)
{
	sub_0076cd90(Param);
	if (bAutoPlay && AudioComponent && !AudioComponent->bWasPlaying)
	{
		((UAudioComponent_*)AudioComponent)->sub_00791770();
		bIsPlaying = TRUE;
	}
}

// Object whose virtual slot 6 is activated by sub_00785e80.
struct S_00785e80 {
    virtual void sub_00785e80_v00();
    virtual void sub_00785e80_v01();
    virtual void sub_00785e80_v02();
    virtual void sub_00785e80_v03();
    virtual void sub_00785e80_v04();
    virtual void sub_00785e80_v05();
    virtual void Activate(void* Actor, int Flags);
};

struct C_00785e80 {
    char _pad[0x100];
    S_00785e80* ActivateTarget;
    void sub_00785e80(void* Actor, int Flags);
};

// @baa 0x00785e80
void C_00785e80::sub_00785e80(void* Actor, int Flags)
{
    if (ActivateTarget)
        ActivateTarget->Activate(Actor, Flags);
}

struct UAudioDevice_ : public UAudioDevice {
    void sub_00785f10(INT A, INT B);
};

// @baa 0x00785f10
void UAudioDevice_::sub_00785f10(INT A, INT B)
{
    if (Effects.Dummy) {
        ((UObject*)Effects.Dummy)->vf_028(A, B);
    }
}

class C_00785ef0 {
public:
    virtual void vf_00();
    virtual void vf_04();
    virtual void vf_08();
    virtual void vf_0c();
    virtual void vf_10();
    virtual void vf_14();
    virtual void vf_18();
    virtual void vf_1c();
    virtual void vf_20();
    virtual void vf_24(void* A, void* B);
    virtual void vf_28();
};

struct S_00785ef0 {
    char pad[0x100];
    C_00785ef0* Node;
    void sub_00785ef0(void* A, void* B);
};

// @baa 0x00785ef0
void S_00785ef0::sub_00785ef0(void* A, void* B)
{
    if (Node)
        Node->vf_24(A, B);
}

// @baa 0x00764c60
bool UAudioComponent::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x007879b0
int AAnimatedCamera::vf_000(void) { return 1; }

struct C_00789e10 {
    int sub_00789e10();
};

// @baa 0x00789e10
int C_00789e10::sub_00789e10(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 0x84) * 4;
}

struct FAdj
{
    BYTE  SoundClassName;
    BYTE  pad[3];
    FName SoundName;
    DWORD Tail[2];
};

struct FEnumObject
{
    char pad[0x38];
    TArray<FName> Names;
};

struct CVtObj
{
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8(int);
};

struct CUSoundMode
{
    char pad0[0x58];
    TArray<FAdj> Adjusters;

    void sub_0078d860(int);
};

extern void* g_0268d07c;
extern CVtObj* g_026667c4;
int sub_005b3970(...);
int sub_0059c600(void);
int sub_005d88c0(...);
// @baa 0x0078d860
void CUSoundMode::sub_0078d860(int)
{
    if (g_0268d07c == 0)
    {
        g_0268d07c = (void*)sub_005b3970(L"Core");
        sub_0059c600();
    }
    const FEnumObject* Enum = (const FEnumObject*)sub_005d88c0((int)g_0268d07c, 0, L"Engine.AudioDevice.ESoundClassName", 0);
    if (Enum != 0)
    {
        for (INT i = 0; i < Adjusters.Num(); i++)
        {
            FAdj& Adj = Adjusters(i);
            BYTE Index = Adj.SoundClassName;
            Adj.SoundName = Enum->Names(Index);
        }
    }
    g_026667c4->v8(0x11);
}

// @baa 0x0078d960
FString UAudioComponent::GetDetailedInfoInternal()
{
	FString Result;
	if (SoundCue)
	{
		Result = SoundCue->GetPathName();
	}
	else
	{
		Result = TEXT("No_SoundCue");
	}
	return Result;
}

int sub_007654e0(void);
struct UAudioComponent__00793c40 : public UAudioComponent
{
    void sub_00793c40(void);
    void sub_00791770(void);
};

// @baa 0x00793c40
void UAudioComponent__00793c40::sub_00793c40(void)
{
    sub_007654e0();
    if (bAutoPlay)
        sub_00791770();
}

// @baa 0x0079b340
bool AAnimatedCamera::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}
