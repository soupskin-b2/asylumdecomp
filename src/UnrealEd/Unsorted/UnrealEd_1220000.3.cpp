// UnrealEd_1220000.cpp (part 3 of 5): 4 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

class wxUpdateUIEvent;
class wxUpdateUIEvent {
    public:
    public: __declspec(dllimport) void Check(bool);
    friend struct C;
};

struct C {
    void sub_012205a0(wxUpdateUIEvent *);
};

// @baa 0x012205a0
void C::sub_012205a0(wxUpdateUIEvent * param_2)
{
    int param_1 = (int)this;

  ((wxUpdateUIEvent *)(param_2))->wxUpdateUIEvent::Check(*(int *)(*(int *)(param_1 + 0x314) + 0x35c) == 1);
  return;
}

class wxMenu
{
public:
    __declspec(dllimport) virtual ~wxMenu();
};

extern void* g_02200cc0[];
struct C_01220260 : public wxMenu
{
    void sub_01220260();
};

// @baa 0x01220260
void C_01220260::sub_01220260()
{
    *(void**)this = g_02200cc0;
    ((wxMenu*)this)->wxMenu::~wxMenu();
}

extern void* g_02200d28[];
struct C_01220270 : public wxMenu
{
    void sub_01220270();
};

// @baa 0x01220270
void C_01220270::sub_01220270()
{
    *(void**)this = g_02200d28;
    ((wxMenu*)this)->wxMenu::~wxMenu();
}

extern void* g_02200d90[];
struct C_01220280 : public wxMenu
{
    void sub_01220280();
};

// @baa 0x01220280
void C_01220280::sub_01220280()
{
    *(void**)this = g_02200d90;
    ((wxMenu*)this)->wxMenu::~wxMenu();
}
