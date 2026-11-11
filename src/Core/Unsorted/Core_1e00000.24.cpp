// Core_1e00000.cpp (part 24 of 160): 2 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

class wxEventHashTable;
struct wxEventTable;
class wxEventHashTable {
    public:
    public: __declspec(dllimport) wxEventHashTable(wxEventTable const &);
    friend void sub_01e01c90(void);
};

struct wxEventTable {
    public:
};

int sub_01a37872(...);
int sub_01e262e0(void);
extern undefined4 g_025e8bb4;
extern undefined4 g_026d35b4;
// @baa 0x01e01c90
void sub_01e01c90(void)
{
  ((wxEventHashTable *)((wxEventHashTable *)&g_026d35b4))->wxEventHashTable::wxEventHashTable(*(const wxEventTable *)((wxEventTable *)&g_025e8bb4));
  sub_01a37872(&sub_01e262e0);
  return;
}

class wxClassInfo;
class wxObject;
class wxClassInfo {
    public:
    public: __declspec(dllimport) wxClassInfo(wchar_t const *,wxClassInfo const *,wxClassInfo const *,int,wxObject * (__cdecl*)(void));
    friend void sub_01e08e60(void);
};

class wxObject {
    public:
};

int sub_01369750(void);
int sub_01e267c0(void);
extern undefined4 g_026cf1b4;
extern undefined4 g_026d83d8;
// @baa 0x01e08e60
void sub_01e08e60(void)
{
  ((wxClassInfo *)((wxClassInfo *)&g_026d83d8))->wxClassInfo::wxClassInfo(L"WxTaskBrowser", (wxClassInfo *)&g_026cf1b4, (wxClassInfo *)0x0, 0x1bc, (wxObject *(__cdecl *)(void))(sub_01369750));
  sub_01a37872(&sub_01e267c0);
  return;
}
