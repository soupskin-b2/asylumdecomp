// UnAudio.cpp: 4 functions
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
