// Core_1e10000.cpp (part 6 of 24): 2 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

class wxClassInfo;
class wxMenuBar;
class wxObject;
class wxClassInfo {
    public:
    public: __declspec(dllimport) wxClassInfo(wchar_t const *,wxClassInfo const *,wxClassInfo const *,int,wxObject * (__cdecl*)(void));
    friend void sub_01e100f0(void);
};

class wxMenuBar {
    public:
    public: __declspec(dllimport) static wxClassInfo ms_classInfo;
    friend void sub_01e100f0(void);
};

class wxObject {
    public:
};

int sub_0149ec30(void);
int sub_01a37872(...);
int sub_01e272b0(void);
extern undefined4 g_026dde04;
// @baa 0x01e100f0
void sub_01e100f0(void)
{
  ((wxClassInfo *)((wxClassInfo *)&g_026dde04))->wxClassInfo::wxClassInfo(L"WxUIEditorMenuBar", (wxClassInfo *)(&wxMenuBar::ms_classInfo), (wxClassInfo *)0x0, 0x1ac, (wxObject *(__cdecl *)(void))(sub_0149ec30));
  sub_01a37872(&sub_01e272b0);
  return;
}

class wxEventHashTable;
struct wxEventTable;
class wxEventHashTable {
    public:
    public: __declspec(dllimport) wxEventHashTable(wxEventTable const &);
    friend void sub_01e10ea0(void);
};

struct wxEventTable {
    public:
};

int sub_01e27360(void);
extern undefined4 g_025e9410;
extern undefined4 g_026de6e8;
// @baa 0x01e10ea0
void sub_01e10ea0(void)
{
  ((wxEventHashTable *)((wxEventHashTable *)&g_026de6e8))->wxEventHashTable::wxEventHashTable(*(const wxEventTable *)((wxEventTable *)&g_025e9410));
  sub_01a37872(&sub_01e27360);
  return;
}
