// Core_1e00000.cpp (part 13 of 160): 2 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

class wxEventHashTable;
struct wxEventTable;
class wxEventHashTable {
    public:
    public: __declspec(dllimport) wxEventHashTable(wxEventTable const &);
    friend void sub_01e00c70(void);
};

struct wxEventTable {
    public:
};

int sub_01a37872(...);
int sub_01e261f0(void);
extern undefined4 g_021edc18;
extern undefined4 g_026d2b50;
// @baa 0x01e00c70
void sub_01e00c70(void)
{
  ((wxEventHashTable *)((wxEventHashTable *)&g_026d2b50))->wxEventHashTable::wxEventHashTable(*(const wxEventTable *)((wxEventTable *)&g_021edc18));
  sub_01a37872(&sub_01e261f0);
  return;
}

class wxClassInfo;
class wxObject;
class wxClassInfo {
    public:
    public: __declspec(dllimport) wxClassInfo(wchar_t const *,wxClassInfo const *,wxClassInfo const *,int,wxObject * (__cdecl*)(void));
    friend void sub_01e08c50(void);
};

class wxObject {
    public:
};

int sub_013872f0(void);
int sub_01e26710(void);
extern undefined4 g_026cf1b4;
extern undefined4 g_026d82d0;
// @baa 0x01e08c50
void sub_01e08c50(void)
{
  ((wxClassInfo *)((wxClassInfo *)&g_026d82d0))->wxClassInfo::wxClassInfo(L"WxActorBrowser", (wxClassInfo *)&g_026cf1b4, (wxClassInfo *)0x0, 0x1b4, (wxObject *(__cdecl *)(void))(sub_013872f0));
  sub_01a37872(&sub_01e26710);
  return;
}
