// UnrealEd_1110000.cpp: 6 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Core.h"

struct T_01115070 {
    virtual void v00() {}
    virtual void v01() {}
    virtual void v02() {}
    virtual void v03() {}
    virtual void v04() {}
    virtual void v05() {}
    virtual void v06() {}
    virtual void v07() {}
    virtual void v08() {}
    virtual void v09() {}
    virtual void v10() {}
    virtual void v11() {}
    virtual void v12() {}
    virtual void v13() {}
    virtual void v14() {}
    virtual void v15() {}
    virtual void v16() {}
    virtual void v17() {}
    virtual void v18() {}
    virtual void v19() {}
    virtual void v20() {}
    virtual void v21() {}
    virtual void v22() {}
    virtual void v23() {}
    virtual void v24() {}
    virtual void v25() {}
    virtual void v26() {}
    virtual void v27() {}
    virtual void v28() {}
    virtual void v29() {}
    virtual void v30() {}
    virtual void v31() {}
    virtual void v32() {}
    virtual void v33() {}
    virtual void v34() {}
    virtual void v35() {}
    virtual void v36() {}
    virtual void v37() {}
    virtual void sub_01115070(INT a) = 0;
};

T_01115070* g_026d4df8 = 0;
// @baa 0x01115070
void T_01115070::sub_01115070(INT a)
{
    g_026d4df8->sub_01115070(1);
}

class wxBitmapButton
{
public:
    __declspec(dllimport) virtual ~wxBitmapButton();
};

extern void* g_021bb970[];
struct C : public wxBitmapButton
{
    void sub_01115380();
};

// @baa 0x01115380
void C::sub_01115380()
{
    *(void**)this = g_021bb970;
    ((wxBitmapButton*)this)->wxBitmapButton::~wxBitmapButton();
}

struct C_011154c0 : public wxBitmapButton
{
    void sub_011154c0();
};

// @baa 0x011154c0
void C_011154c0::sub_011154c0()
{
    *(void**)this = g_021bb970;
    ((wxBitmapButton*)this)->wxBitmapButton::~wxBitmapButton();
}

class wxMenu
{
public:
    __declspec(dllimport) virtual ~wxMenu();
};

extern void* g_021bc9d8[];
struct C_01116600 : public wxMenu
{
    void sub_01116600();
};

// @baa 0x01116600
void C_01116600::sub_01116600()
{
    *(void**)this = g_021bc9d8;
    ((wxMenu*)this)->wxMenu::~wxMenu();
}

extern void* g_021bca40[];
struct C_01116610 : public wxMenu
{
    void sub_01116610();
};

// @baa 0x01116610
void C_01116610::sub_01116610()
{
    *(void**)this = g_021bca40;
    ((wxMenu*)this)->wxMenu::~wxMenu();
}

class wxAuiManager
{
public:
    __declspec(dllimport) virtual ~wxAuiManager();
};

extern void* g_021bd658[];
struct C_01119270 : public wxAuiManager
{
    void sub_01119270();
};

// @baa 0x01119270
void C_01119270::sub_01119270()
{
    *(void**)this = g_021bd658;
    ((wxAuiManager*)this)->wxAuiManager::~wxAuiManager();
}
