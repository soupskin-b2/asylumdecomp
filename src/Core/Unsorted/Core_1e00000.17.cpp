// Core_1e00000.cpp (part 17 of 160): 2 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

class wxEventHashTable;
struct wxEventTable;
class wxEventHashTable {
    public:
    public: __declspec(dllimport) wxEventHashTable(wxEventTable const &);
    friend void sub_01e01150(void);
};

struct wxEventTable {
    public:
};

int sub_01a37872(...);
int sub_01e26230(void);
extern undefined4 g_025e8734;
extern undefined4 g_026d2e80;
// @baa 0x01e01150
void sub_01e01150(void)
{
  ((wxEventHashTable *)((wxEventHashTable *)&g_026d2e80))->wxEventHashTable::wxEventHashTable(*(const wxEventTable *)((wxEventTable *)&g_025e8734));
  sub_01a37872(&sub_01e26230);
  return;
}

class wxClassInfo;
class wxObject;
class wxClassInfo {
    public:
    public: __declspec(dllimport) wxClassInfo(wchar_t const *,wxClassInfo const *,wxClassInfo const *,int,wxObject * (__cdecl*)(void));
    friend void sub_01e08d10(void);
};

class wxObject {
    public:
};

int sub_013694b0(void);
int sub_01e26750(void);
extern undefined4 g_026cf1b4;
extern undefined4 g_026d8330;
// @baa 0x01e08d10
void sub_01e08d10(void)
{
  ((wxClassInfo *)((wxClassInfo *)&g_026d8330))->wxClassInfo::wxClassInfo(L"WxLevelBrowser", (wxClassInfo *)&g_026cf1b4, (wxClassInfo *)0x0, 0x1b0, (wxObject *(__cdecl *)(void))(sub_013694b0));
  sub_01a37872(&sub_01e26750);
  return;
}
