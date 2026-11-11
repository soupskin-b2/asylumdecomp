// Core_1e10000.cpp (part 20 of 24): 2 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

class wxClassInfo;
class wxDialog;
class wxObject;
class wxClassInfo {
    public:
    public: __declspec(dllimport) wxClassInfo(wchar_t const *,wxClassInfo const *,wxClassInfo const *,int,wxObject * (__cdecl*)(void));
    friend void sub_01e11c20(void);
};

class wxDialog {
    public:
    public: __declspec(dllimport) static wxClassInfo ms_classInfo;
    friend void sub_01e11c20(void);
};

class wxObject {
    public:
};

int sub_014dd860(void);
int sub_01a37872(...);
int sub_01e274e0(void);
extern undefined4 g_026def60;
// @baa 0x01e11c20
void sub_01e11c20(void)
{
  ((wxClassInfo *)((wxClassInfo *)&g_026def60))->wxClassInfo::wxClassInfo(L"WxDlgDiffStateProperties", (wxClassInfo *)(&wxDialog::ms_classInfo), (wxClassInfo *)0x0, 0x1bc, (wxObject *(__cdecl *)(void))(sub_014dd860));
  sub_01a37872(&sub_01e274e0);
  return;
}

class wxEventHashTable;
struct wxEventTable;
class wxEventHashTable {
    public:
    public: __declspec(dllimport) wxEventHashTable(wxEventTable const &);
    friend void sub_01e11dc0(void);
};

struct wxEventTable {
    public:
};

int sub_01e27500(void);
extern undefined4 g_025e98a8;
extern undefined4 g_026deff4;
// @baa 0x01e11dc0
void sub_01e11dc0(void)
{
  ((wxEventHashTable *)((wxEventHashTable *)&g_026deff4))->wxEventHashTable::wxEventHashTable(*(const wxEventTable *)((wxEventTable *)&g_025e98a8));
  sub_01a37872(&sub_01e27500);
  return;
}
