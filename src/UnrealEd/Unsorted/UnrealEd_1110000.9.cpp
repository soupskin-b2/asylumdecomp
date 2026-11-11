// UnrealEd_1110000.cpp: 14 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

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

class wxUpdateUIEvent {
public:
    __declspec(dllimport) void Check(bool checkEnabled);
};

extern int g_025d5748;
// @baa 0x01117df0
void __stdcall sub_01117df0(wxUpdateUIEvent *event)
{
    event->Check(g_025d5748 == 0);
}

struct Object_012b56b0 {
    void sub_012b56b0(int Index);
};

struct Object_025e8cfc {
    Object_012b56b0* sub_012a44e0(int Index);
};

extern Object_025e8cfc g_025e8cfc;
// @baa 0x01118150
void __stdcall sub_01118150(int Index)
{
    (void)Index;
    g_025e8cfc.sub_012a44e0(100)->sub_012b56b0(100);
}

// @baa 0x01118190
void __stdcall sub_01118190(int Index)
{
    (void)Index;
    g_025e8cfc.sub_012a44e0(102)->sub_012b56b0(102);
}

// @baa 0x011181b0
void __stdcall sub_011181b0(int Index)
{
    (void)Index;
    g_025e8cfc.sub_012a44e0(1)->sub_012b56b0(1);
}

// @baa 0x011181d0
void __stdcall sub_011181d0(int Index)
{
    (void)Index;
    g_025e8cfc.sub_012a44e0(0)->sub_012b56b0(0);
}

struct FSubA
{
	INT sub_012a44e0(INT Arg);
};

struct FSubB
{
	INT sub_012b56b0(INT Arg);
};

// @baa 0x01118170
INT __stdcall sub_01118170(INT Param)
{
	(void)Param;
	return ((FSubB*)((FSubA*)&g_025e8cfc)->sub_012a44e0(0x65))->sub_012b56b0(0x65);
}

// @baa 0x011181f0
void __stdcall sub_011181f0(int Index)
{
    (void)Index;
    g_025e8cfc.sub_012a44e0(3)->sub_012b56b0(3);
}

extern double g_01e5f588;
struct V
{
    float x;
    float y;

    float sub_0111b010();
};

// @baa 0x0111b010
float V::sub_0111b010()
{
    if (g_01e5f588 <= x)
        return y / x;
    return y / (float)g_01e5f588;
}
