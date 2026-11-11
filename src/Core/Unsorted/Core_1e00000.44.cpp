// Core_1e00000.cpp (part 44 of 160): 2 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

class wxEventHashTable;
struct wxEventTable;
class wxEventHashTable {
    public:
    public: __declspec(dllimport) wxEventHashTable(wxEventTable const &);
    friend void sub_01e04bc0(void);
};

struct wxEventTable {
    public:
};

int sub_01a37872(...);
int sub_01e264a0(void);
extern undefined4 g_025e8d54;
extern undefined4 g_026d580c;
// @baa 0x01e04bc0
void sub_01e04bc0(void)
{
  ((wxEventHashTable *)((wxEventHashTable *)&g_026d580c))->wxEventHashTable::wxEventHashTable(*(const wxEventTable *)((wxEventTable *)&g_025e8d54));
  sub_01a37872(&sub_01e264a0);
  return;
}

class wxClassInfo;
class wxObject;
class wxClassInfo {
    public:
    public: __declspec(dllimport) wxClassInfo(wchar_t const *,wxClassInfo const *,wxClassInfo const *,int,wxObject * (__cdecl*)(void));
    friend void sub_01e0fd20(void);
};

class wxObject {
    public:
};

int sub_014a84f0(void);
int sub_01e271e0(void);
extern undefined4 g_026ddbd8;
extern undefined4 g_026ddbf0;
// @baa 0x01e0fd20
void sub_01e0fd20(void)
{
  ((wxClassInfo *)((wxClassInfo *)&g_026ddbf0))->wxClassInfo::wxClassInfo(L"WxUIEditorMainToolBar", (wxClassInfo *)&g_026ddbd8, (wxClassInfo *)0x0, 0x1f0, (wxObject *(__cdecl *)(void))(sub_014a84f0));
  sub_01a37872(&sub_01e271e0);
  return;
}
