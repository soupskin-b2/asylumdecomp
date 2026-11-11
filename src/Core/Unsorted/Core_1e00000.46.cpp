// Core_1e00000.cpp (part 46 of 160): 2 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

class wxEventHashTable;
struct wxEventTable;
class wxEventHashTable {
    public:
    public: __declspec(dllimport) wxEventHashTable(wxEventTable const &);
    friend void sub_01e04c40(void);
};

struct wxEventTable {
    public:
};

int sub_01a37872(...);
int sub_01e264c0(void);
extern undefined4 g_0221ce6c;
extern undefined4 g_026d5864;
// @baa 0x01e04c40
void sub_01e04c40(void)
{
  ((wxEventHashTable *)((wxEventHashTable *)&g_026d5864))->wxEventHashTable::wxEventHashTable(*(const wxEventTable *)((wxEventTable *)&g_0221ce6c));
  sub_01a37872(&sub_01e264c0);
  return;
}

class wxClassInfo;
class wxMenu;
class wxObject;
class wxClassInfo {
    public:
    public: __declspec(dllimport) wxClassInfo(wchar_t const *,wxClassInfo const *,wxClassInfo const *,int,wxObject * (__cdecl*)(void));
    friend void sub_01e0ff10(void);
};

class wxMenu {
    public:
    public: __declspec(dllimport) static wxClassInfo ms_classInfo;
    friend void sub_01e0ff10(void);
};

class wxObject {
    public:
};

int sub_014b0cf0(void);
int sub_01e27210(void);
extern undefined4 g_026ddd14;
// @baa 0x01e0ff10
void sub_01e0ff10(void)
{
  ((wxClassInfo *)((wxClassInfo *)&g_026ddd14))->wxClassInfo::wxClassInfo(L"WxUIMenu", (wxClassInfo *)(&wxMenu::ms_classInfo), (wxClassInfo *)0x0, 0xa0, (wxObject *(__cdecl *)(void))(sub_014b0cf0));
  sub_01a37872(&sub_01e27210);
  return;
}
