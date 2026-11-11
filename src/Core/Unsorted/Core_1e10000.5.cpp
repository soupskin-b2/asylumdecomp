// Core_1e10000.cpp (part 5 of 24): 2 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

class wxClassInfo;
class wxObject;
class wxClassInfo {
    public:
    public: __declspec(dllimport) wxClassInfo(wchar_t const *,wxClassInfo const *,wxClassInfo const *,int,wxObject * (__cdecl*)(void));
    friend void sub_01e100c0(void);
};

class wxObject {
    public:
};

int sub_014b2670(void);
int sub_01a37872(...);
int sub_01e272a0(void);
extern undefined4 g_026ddd2c;
extern undefined4 g_026dddec;
// @baa 0x01e100c0
void sub_01e100c0(void)
{
  ((wxClassInfo *)((wxClassInfo *)&g_026dddec))->wxClassInfo::wxClassInfo(L"WxUIDockTargetContextMenu", (wxClassInfo *)&g_026ddd2c, (wxClassInfo *)0x0, 0xa8, (wxObject *(__cdecl *)(void))(sub_014b2670));
  sub_01a37872(&sub_01e272a0);
  return;
}

class wxEventHashTable;
struct wxEventTable;
class wxEventHashTable {
    public:
    public: __declspec(dllimport) wxEventHashTable(wxEventTable const &);
    friend void sub_01e10d60(void);
};

struct wxEventTable {
    public:
};

int sub_01e27340(void);
extern undefined4 g_022b7f98;
extern undefined4 g_026de60c;
// @baa 0x01e10d60
void sub_01e10d60(void)
{
  ((wxEventHashTable *)((wxEventHashTable *)&g_026de60c))->wxEventHashTable::wxEventHashTable(*(const wxEventTable *)((wxEventTable *)&g_022b7f98));
  sub_01a37872(&sub_01e27340);
  return;
}
