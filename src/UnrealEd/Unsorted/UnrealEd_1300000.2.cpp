// UnrealEd_1300000.cpp (part 2 of 2): 3 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

class wxMenu
{
public:
    __declspec(dllimport) virtual ~wxMenu();
};

extern void* g_022492f8[];
struct C : public wxMenu
{
    void sub_0130d6b0();
};

// @baa 0x0130d6b0
void C::sub_0130d6b0()
{
    *(void**)this = g_022492f8;
    ((wxMenu*)this)->wxMenu::~wxMenu();
}

extern void* g_02249360[];
struct C_0130d6c0 : public wxMenu
{
    void sub_0130d6c0();
};

// @baa 0x0130d6c0
void C_0130d6c0::sub_0130d6c0()
{
    *(void**)this = g_02249360;
    ((wxMenu*)this)->wxMenu::~wxMenu();
}

class wxMenuBar
{
public:
    __declspec(dllimport) virtual ~wxMenuBar();
};

extern void* g_02249678[];
struct C_0130d880 : public wxMenuBar
{
    void sub_0130d880();
};

// @baa 0x0130d880
void C_0130d880::sub_0130d880()
{
    *(void**)this = g_02249678;
    ((wxMenuBar*)this)->wxMenuBar::~wxMenuBar();
}
