// UnrealEd_12d0000.cpp (part 3 of 3): 10 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

class wxUpdateUIEvent;
class wxUpdateUIEvent {
    public:
    public: __declspec(dllimport) void Enable(bool);
    public: __declspec(dllimport) void Check(bool);
    friend struct C;
};

struct C {
    void sub_012deeb0(wxUpdateUIEvent *);
};

// @baa 0x012deeb0
void C::sub_012deeb0(wxUpdateUIEvent * param_2)
{
    int param_1 = (int)this;

  ((wxUpdateUIEvent *)(param_2))->wxUpdateUIEvent::Enable(true);
  ((wxUpdateUIEvent *)(param_2))->wxUpdateUIEvent::Check(*(int *)(param_1 + 900) != 0);
  return;
}

class wxMenuBar
{
public:
    __declspec(dllimport) virtual ~wxMenuBar();
};

extern void* g_0223f638[];
struct C_012def40 : public wxMenuBar
{
    void sub_012def40();
};

// @baa 0x012def40
void C_012def40::sub_012def40()
{
    *(void**)this = g_0223f638;
    ((wxMenuBar*)this)->wxMenuBar::~wxMenuBar();
}

class wxMenu
{
public:
    __declspec(dllimport) virtual ~wxMenu();
};

extern void* g_0223f918[];
struct C_012def50 : public wxMenu
{
    void sub_012def50();
};

// @baa 0x012def50
void C_012def50::sub_012def50()
{
    *(void**)this = g_0223f918;
    ((wxMenu*)this)->wxMenu::~wxMenu();
}

extern void* g_0223f980[];
struct C_012def60 : public wxMenu
{
    void sub_012def60();
};

// @baa 0x012def60
void C_012def60::sub_012def60()
{
    *(void**)this = g_0223f980;
    ((wxMenu*)this)->wxMenu::~wxMenu();
}

extern void* g_0223f9e8[];
struct C_012def70 : public wxMenu
{
    void sub_012def70();
};

// @baa 0x012def70
void C_012def70::sub_012def70()
{
    *(void**)this = g_0223f9e8;
    ((wxMenu*)this)->wxMenu::~wxMenu();
}

extern void* g_0223fa50[];
struct C_012def80 : public wxMenu
{
    void sub_012def80();
};

// @baa 0x012def80
void C_012def80::sub_012def80()
{
    *(void**)this = g_0223fa50;
    ((wxMenu*)this)->wxMenu::~wxMenu();
}

extern void* g_0223fab8[];
struct C_012def90 : public wxMenu
{
    void sub_012def90();
};

// @baa 0x012def90
void C_012def90::sub_012def90()
{
    *(void**)this = g_0223fab8;
    ((wxMenu*)this)->wxMenu::~wxMenu();
}

extern void* g_0223fb20[];
struct C_012defa0 : public wxMenu
{
    void sub_012defa0();
};

// @baa 0x012defa0
void C_012defa0::sub_012defa0()
{
    *(void**)this = g_0223fb20;
    ((wxMenu*)this)->wxMenu::~wxMenu();
}

extern void* g_0223fb88[];
struct C_012defb0 : public wxMenu
{
    void sub_012defb0();
};

// @baa 0x012defb0
void C_012defb0::sub_012defb0()
{
    *(void**)this = g_0223fb88;
    ((wxMenu*)this)->wxMenu::~wxMenu();
}

// @baa 0x012de9a0
// 012de9a0: store the product of two floats into a destination float and
// return the destination pointer.
FLOAT* sub_012de9a0(FLOAT* Destination, const FLOAT* First, const FLOAT* Second)
{
	*Destination = *First * *Second;
	return Destination;
}
