// Core_0540000.cpp (part 2 of 2): 2 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

extern char g_01e72a60[];
struct C { void sub_00547050(void); };

// @baa 0x00547050
void C::sub_00547050(void) { *(int*)((char*)this + 0) = (int)g_01e72a60; }

typedef unsigned long DWORD;

extern "C" __declspec(dllimport) void* __stdcall TlsGetValue(DWORD Index);
extern DWORD g_02686250;
// @baa 0x00542c60
void sub_00542c60()
{
    TlsGetValue(g_02686250);
}
