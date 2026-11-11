// Core_1e00000.cpp (part 16 of 160): 2 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

class wxEventHashTable;
struct wxEventTable;
class wxEventHashTable {
    public:
    public: __declspec(dllimport) wxEventHashTable(wxEventTable const &);
    friend void sub_01e01060(void);
};

struct wxEventTable {
    public:
};

int sub_01a37872(...);
int sub_01e26220(void);
extern undefined4 g_025e872c;
extern undefined4 g_026d2df0;
// @baa 0x01e01060
void sub_01e01060(void)
{
  ((wxEventHashTable *)((wxEventHashTable *)&g_026d2df0))->wxEventHashTable::wxEventHashTable(*(const wxEventTable *)((wxEventTable *)&g_025e872c));
  sub_01a37872(&sub_01e26220);
  return;
}

class wxClassInfo;
class wxObject;
class wxClassInfo {
    public:
    public: __declspec(dllimport) wxClassInfo(wchar_t const *,wxClassInfo const *,wxClassInfo const *,int,wxObject * (__cdecl*)(void));
    friend void sub_01e08ce0(void);
};

class wxObject {
    public:
};

int sub_01369440(void);
int sub_01e26740(void);
extern undefined4 g_026cf1b4;
extern undefined4 g_026d8318;
// @baa 0x01e08ce0
void sub_01e08ce0(void)
{
  ((wxClassInfo *)((wxClassInfo *)&g_026d8318))->wxClassInfo::wxClassInfo(L"WxLogBrowser", (wxClassInfo *)&g_026cf1b4, (wxClassInfo *)0x0, 0x188, (wxObject *(__cdecl *)(void))(sub_01369440));
  sub_01a37872(&sub_01e26740);
  return;
}
