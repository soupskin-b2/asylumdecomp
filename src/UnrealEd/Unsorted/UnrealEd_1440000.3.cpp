// UnrealEd_1440000.cpp (part 3 of 3): 4 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

class wxCommandEvent;
class wxCommandEvent {
    public:
    public: __declspec(dllimport) bool IsChecked() const;
    friend struct C;
};

struct C {
    void sub_0144e400(wxCommandEvent *);
};

// @baa 0x0144e400
void C::sub_0144e400(wxCommandEvent * param_2)
{
    int param_1 = (int)this;

  bool bVar1;
  
  bVar1 = ((wxCommandEvent *)(param_2))->wxCommandEvent::IsChecked();
  *(uint *)(*(int *)(param_1 + 0x310) + 0x390) = (uint)bVar1;
  return;
}

class wxMenuBar
{
public:
    __declspec(dllimport) virtual ~wxMenuBar();
};

extern void* g_0229c0a0[];
struct C_0144eaa0 : public wxMenuBar
{
    void sub_0144eaa0();
};

// @baa 0x0144eaa0
void C_0144eaa0::sub_0144eaa0()
{
    *(void**)this = g_0229c0a0;
    ((wxMenuBar*)this)->wxMenuBar::~wxMenuBar();
}

class wxMenu
{
public:
    __declspec(dllimport) virtual ~wxMenu();
};

extern void* g_0229c380[];
struct C_0144eab0 : public wxMenu
{
    void sub_0144eab0();
};

// @baa 0x0144eab0
void C_0144eab0::sub_0144eab0()
{
    *(void**)this = g_0229c380;
    ((wxMenu*)this)->wxMenu::~wxMenu();
}

class wxWindow
{
public:
    __declspec(dllimport) virtual ~wxWindow();
};

extern void* g_0229c3e8[];
struct C_0144ec00 : public wxWindow
{
    void sub_0144ec00();
};

// @baa 0x0144ec00
void C_0144ec00::sub_0144ec00()
{
    *(void**)this = g_0229c3e8;
    ((wxWindow*)this)->wxWindow::~wxWindow();
}
