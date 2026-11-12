// EditorFrame.cpp: 3 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Core.h"

struct FEditorFrameObject
{
    char _Pad[0x58];
    void* Field_0058;
};

extern FEditorFrameObject* g_026d4e00;
extern void sub_011bf200(int A, int B, void* C);
// @baa 0x01117770
void __stdcall sub_01117770(void* Unused)
{
    sub_011bf200(0, 0, g_026d4e00->Field_0058);
}

class wxWindowBase
{
public:
    __declspec(dllimport) bool Close(bool Force);
};

struct C : public wxWindowBase
{
    void sub_01117400(INT Unused);
};

// @baa 0x01117400
void C::sub_01117400(INT)
{
    Close(false);
}

extern INT g_026b62b8;
extern void sub_0118d8c0(INT Value);
// @baa 0x01117380
void __stdcall sub_01117380(INT Unused)
{
    sub_0118d8c0(g_026b62b8);
}
