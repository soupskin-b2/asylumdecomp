// Core_1e00000.cpp (part 30 of 160): 2 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

class wxEventHashTable;
struct wxEventTable;
class wxEventHashTable {
    public:
    public: __declspec(dllimport) wxEventHashTable(wxEventTable const &);
    friend void sub_01e02b80(void);
};

struct wxEventTable {
    public:
};

int sub_01a37872(...);
int sub_01e26350(void);
extern undefined4 g_021ff5ac;
extern undefined4 g_026d3f0c;
// @baa 0x01e02b80
void sub_01e02b80(void)
{
  ((wxEventHashTable *)((wxEventHashTable *)&g_026d3f0c))->wxEventHashTable::wxEventHashTable(*(const wxEventTable *)((wxEventTable *)&g_021ff5ac));
  sub_01a37872(&sub_01e26350);
  return;
}

class wxClassInfo;
class wxObject;
class wxStatusBar;
class wxClassInfo {
    public:
    public: __declspec(dllimport) wxClassInfo(wchar_t const *,wxClassInfo const *,wxClassInfo const *,int,wxObject * (__cdecl*)(void));
    friend void sub_01e0c410(void);
};

class wxObject {
    public:
};

class wxStatusBar {
    public:
    public: __declspec(dllimport) static wxClassInfo ms_classInfo;
    friend void sub_01e0c410(void);
};

int sub_013ddba0(void);
int sub_01e26b30(void);
extern undefined4 g_026da578;
// @baa 0x01e0c410
void sub_01e0c410(void)
{
  ((wxClassInfo *)((wxClassInfo *)&g_026da578))->wxClassInfo::wxClassInfo(L"WxUIEditorStatusBar", (wxClassInfo *)(&wxStatusBar::ms_classInfo), (wxClassInfo *)0x0, 0x174, (wxObject *(__cdecl *)(void))(sub_013ddba0));
  sub_01a37872(&sub_01e26b30);
  return;
}
