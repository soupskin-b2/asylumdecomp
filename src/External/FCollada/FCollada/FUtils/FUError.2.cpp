// FUError.cpp (part 2 of 2): 2 functions
// Placed here by: callers 2.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct _RTL_CRITICAL_SECTION;
typedef _RTL_CRITICAL_SECTION * LPCRITICAL_SECTION;

extern "C" __declspec(dllimport) void __stdcall EnterCriticalSection(LPCRITICAL_SECTION lpCriticalSection);
struct C {
    void sub_01874f80();
};

// @baa 0x01874f80
void C::sub_01874f80()
{
    EnterCriticalSection((LPCRITICAL_SECTION)this);
}

typedef _RTL_CRITICAL_SECTION *LPCRITICAL_SECTION_01874f90;

extern "C" __declspec(dllimport) void __stdcall LeaveCriticalSection(LPCRITICAL_SECTION_01874f90);
struct C_01874f90 {
    void sub_01874f90();
};

// @baa 0x01874f90
void C_01874f90::sub_01874f90()
{
    LeaveCriticalSection((_RTL_CRITICAL_SECTION *)this);
}
