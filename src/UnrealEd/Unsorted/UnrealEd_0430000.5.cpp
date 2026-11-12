// UnrealEd_0430000.cpp: 6 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Core.h"

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
