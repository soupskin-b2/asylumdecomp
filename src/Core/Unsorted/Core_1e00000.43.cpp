// Core_1e00000.cpp (part 43 of 160): 2 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

class wxEventHashTable;
struct wxEventTable;
class wxEventHashTable {
    public:
    public: __declspec(dllimport) wxEventHashTable(wxEventTable const &);
    friend void sub_01e04b70(void);
};

struct wxEventTable {
    public:
};

int sub_01a37872(...);
int sub_01e26490(void);
extern undefined4 g_025e8d4c;
extern undefined4 g_026d57e0;
// @baa 0x01e04b70
void sub_01e04b70(void)
{
  ((wxEventHashTable *)((wxEventHashTable *)&g_026d57e0))->wxEventHashTable::wxEventHashTable(*(const wxEventTable *)((wxEventTable *)&g_025e8d4c));
  sub_01a37872(&sub_01e26490);
  return;
}

class wxClassInfo;
class wxObject;
class wxToolBar;
class wxClassInfo {
    public:
    public: __declspec(dllimport) wxClassInfo(wchar_t const *,wxClassInfo const *,wxClassInfo const *,int,wxObject * (__cdecl*)(void));
    friend void sub_01e0fcf0(void);
};

class wxObject {
    public:
};

class wxToolBar {
    public:
    public: __declspec(dllimport) static wxClassInfo ms_classInfo;
    friend void sub_01e0fcf0(void);
};

int sub_0149eaa0(void);
int sub_01e271d0(void);
extern undefined4 g_026ddbd8;
// @baa 0x01e0fcf0
void sub_01e0fcf0(void)
{
  ((wxClassInfo *)((wxClassInfo *)&g_026ddbd8))->wxClassInfo::wxClassInfo(L"WxUIEditorToolBar", (wxClassInfo *)(&wxToolBar::ms_classInfo), (wxClassInfo *)0x0, 0x1a0, (wxObject *(__cdecl *)(void))(sub_0149eaa0));
  sub_01a37872(&sub_01e271d0);
  return;
}
