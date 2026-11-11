// Core_1e00000.cpp (part 45 of 160): 2 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

class wxEventHashTable;
struct wxEventTable;
class wxEventHashTable {
    public:
    public: __declspec(dllimport) wxEventHashTable(wxEventTable const &);
    friend void sub_01e04c00(void);
};

struct wxEventTable {
    public:
};

int sub_01a37872(...);
int sub_01e264b0(void);
extern undefined4 g_0221c96c;
extern undefined4 g_026d5838;
// @baa 0x01e04c00
void sub_01e04c00(void)
{
  ((wxEventHashTable *)((wxEventHashTable *)&g_026d5838))->wxEventHashTable::wxEventHashTable(*(const wxEventTable *)((wxEventTable *)&g_0221c96c));
  sub_01a37872(&sub_01e264b0);
  return;
}

class wxClassInfo;
class wxObject;
class wxClassInfo {
    public:
    public: __declspec(dllimport) wxClassInfo(wchar_t const *,wxClassInfo const *,wxClassInfo const *,int,wxObject * (__cdecl*)(void));
    friend void sub_01e0fd50(void);
};

class wxObject {
    public:
};

int sub_0149eb30(void);
int sub_01e271f0(void);
extern undefined4 g_026ddbd8;
extern undefined4 g_026ddc08;
// @baa 0x01e0fd50
void sub_01e0fd50(void)
{
  ((wxClassInfo *)((wxClassInfo *)&g_026ddc08))->wxClassInfo::wxClassInfo(L"WxUIEditorWidgetToolBar", (wxClassInfo *)&g_026ddbd8, (wxClassInfo *)0x0, 0x1a0, (wxObject *(__cdecl *)(void))(sub_0149eb30));
  sub_01a37872(&sub_01e271f0);
  return;
}
