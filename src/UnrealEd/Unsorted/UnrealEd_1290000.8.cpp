// UnrealEd_1290000.cpp (part 8 of 8): 5 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

class wxCommandEvent;
class wxCommandEvent {
    public:
    public: __declspec(dllimport) bool IsChecked() const;
    friend struct C;
};

struct C {
    void sub_0129e530(wxCommandEvent *);
    int sub_005df020(int, int, int);
};

// @baa 0x0129e530
void C::sub_0129e530(wxCommandEvent * param_2)
{
    int param_1 = (int)this;
  uint *puVar1;
  bool bVar2;
  bVar2 = ((wxCommandEvent *)(param_2))->wxCommandEvent::IsChecked();
  *(uint *)(*(int *)(param_1 + 0x314) + 0x3a8) = (uint)bVar2;
  puVar1 = (uint *)(*(int *)(param_1 + 900) + 0x30);
  *puVar1 = *puVar1 ^ (*(int *)(*(int *)(param_1 + 0x314) + 0x3a8) << 8 ^
                      *(uint *)(*(int *)(param_1 + 900) + 0x30)) & 0x100;
  ((C *)((*(char **)((char *)this + 0x384))))->sub_005df020(0x4000, 0, 0);
  return;
}

class wxWizardPageSimple
{
public:
    __declspec(dllimport) virtual ~wxWizardPageSimple();
};

extern void* g_02223c48[];
struct C_0129dc40 : public wxWizardPageSimple
{
    void sub_0129dc40();
};

// @baa 0x0129dc40
void C_0129dc40::sub_0129dc40()
{
    *(void**)this = g_02223c48;
    ((wxWizardPageSimple*)this)->wxWizardPageSimple::~wxWizardPageSimple();
}

class wxWizard
{
public:
    __declspec(dllimport) virtual ~wxWizard();
};

extern void* g_02223f10[];
struct C_0129dc80 : public wxWizard
{
    void sub_0129dc80();
};

// @baa 0x0129dc80
void C_0129dc80::sub_0129dc80()
{
    *(void**)this = g_02223f10;
    ((wxWizard*)this)->wxWizard::~wxWizard();
}

struct C_0129dcb0 : public wxWizardPageSimple
{
    void sub_0129dcb0();
};

// @baa 0x0129dcb0
void C_0129dcb0::sub_0129dcb0()
{
    *(void**)this = g_02223c48;
    ((wxWizardPageSimple*)this)->wxWizardPageSimple::~wxWizardPageSimple();
}

struct C_0129dce0 : public wxWizardPageSimple
{
    void sub_0129dce0();
};

// @baa 0x0129dce0
void C_0129dce0::sub_0129dce0()
{
    *(void**)this = g_02223c48;
    ((wxWizardPageSimple*)this)->wxWizardPageSimple::~wxWizardPageSimple();
}
