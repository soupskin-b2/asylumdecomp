// Core_1e00000.cpp (part 18 of 160): 2 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

class wxEventHashTable;
struct wxEventTable;
class wxEventHashTable {
    public:
    public: __declspec(dllimport) wxEventHashTable(wxEventTable const &);
    friend void sub_01e01520(void);
};

struct wxEventTable {
    public:
};

int sub_01a37872(...);
int sub_01e26240(void);
extern undefined4 g_025e873c;
extern undefined4 g_026d30dc;
// @baa 0x01e01520
void sub_01e01520(void)
{
  ((wxEventHashTable *)((wxEventHashTable *)&g_026d30dc))->wxEventHashTable::wxEventHashTable(*(const wxEventTable *)((wxEventTable *)&g_025e873c));
  sub_01a37872(&sub_01e26240);
  return;
}

class wxClassInfo;
class wxObject;
class wxClassInfo {
    public:
    public: __declspec(dllimport) wxClassInfo(wchar_t const *,wxClassInfo const *,wxClassInfo const *,int,wxObject * (__cdecl*)(void));
    friend void sub_01e08d40(void);
};

class wxObject {
    public:
};

int sub_01369520(void);
int sub_01e26760(void);
extern undefined4 g_026cf1b4;
extern undefined4 g_026d8348;
// @baa 0x01e08d40
void sub_01e08d40(void)
{
  ((wxClassInfo *)((wxClassInfo *)&g_026d8348))->wxClassInfo::wxClassInfo(L"WxGroupBrowser", (wxClassInfo *)&g_026cf1b4, (wxClassInfo *)0x0, 0x1a8, (wxObject *(__cdecl *)(void))(sub_01369520));
  sub_01a37872(&sub_01e26760);
  return;
}
