// UnrealEd_0430000.cpp: 7 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

struct SSub_0043cef0 {
	void sub_0043cef0(float Value);
};

extern SSub_0043cef0 *g_02617628;
// @baa 0x0043d1c0
void sub_0043d1c0(float Value)
{
	if (g_02617628 != NULL) {
		g_02617628->sub_0043cef0(Value);
	}
}

typedef void (__thiscall* Fn)(void*);

struct C
{
    void sub_004310d0(INT Unused);
};

// @baa 0x004310d0
void C::sub_004310d0(INT)
{
    (*(Fn*)(*(char**)this + 0x1c8))(this);
}

class wxDialogBase
{
protected:
    __declspec(dllimport) void EndDialog(int Value);
};

struct C_00433c10 : public wxDialogBase
{
    void sub_00433c10(INT Unused);
};

// @baa 0x00433c10
void C_00433c10::sub_00433c10(INT)
{
    EndDialog(0x13ed);
}

struct C_00433ef0 : public wxDialogBase
{
    void sub_00433ef0(INT Unused);
};

// @baa 0x00433ef0
void C_00433ef0::sub_00433ef0(INT)
{
    EndDialog(0x13ec);
}

struct C_004389f0 : public wxDialogBase
{
    void sub_004389f0(INT Unused);
};

// @baa 0x004389f0
void C_004389f0::sub_004389f0(INT)
{
    EndDialog(0x13ed);
}

struct C_00438ff0 : public wxDialogBase
{
    void sub_00438ff0(INT Unused);
};

// @baa 0x00438ff0
void C_00438ff0::sub_00438ff0(INT)
{
    EndDialog(0x13ed);
}

// The sub-object reached through the 0x148 member: a pointer array (base at
// 0x1b0, count at 0x1b8) with a one-byte state flag at 0x1c0.
class Csub_0043aXXX {
    char _pad[0x1c0];
public:
    unsigned char Flag;   // 0x1c0
    void sub_0043ac50();
    void sub_0043acc0();
};

// Outer class: a pointer to that sub-object lives at offset 0x148.
class C_0043ccd0 {
    char _pad[0x148];
public:
    Csub_0043aXXX* Sub;   // 0x148
    void sub_0043ccd0();
};

// @baa 0x0043ccd0
void C_0043ccd0::sub_0043ccd0()
{
    Csub_0043aXXX* Sub = this->Sub;
    if (!Sub->Flag)
        Sub->sub_0043ac50();
    else
        Sub->sub_0043acc0();
}
