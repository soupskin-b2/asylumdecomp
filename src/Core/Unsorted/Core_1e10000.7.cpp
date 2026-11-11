// Core_1e10000.cpp (part 7 of 24): 2 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

class wxClassInfo;
class wxObject;
class wxClassInfo {
    public:
    public: __declspec(dllimport) wxClassInfo(wchar_t const *,wxClassInfo const *,wxClassInfo const *,int,wxObject * (__cdecl*)(void));
    friend void sub_01e10120(void);
};

class wxObject {
    public:
};

int sub_014daef0(void);
int sub_01a37872(...);
int sub_01e272f0(void);
extern undefined4 g_026d2978;
extern undefined4 g_026dde74;
// @baa 0x01e10120
void sub_01e10120(void)
{
  ((wxClassInfo *)((wxClassInfo *)&g_026dde74))->wxClassInfo::wxClassInfo(L"WxCustomPropertyItem_ConditionalItem", (wxClassInfo *)&g_026d2978, (wxClassInfo *)0x0, 0x1e8, (wxObject *(__cdecl *)(void))(sub_014daef0));
  sub_01a37872(&sub_01e272f0);
  return;
}

class wxEventHashTable;
struct wxEventTable;
class wxEventHashTable {
    public:
    public: __declspec(dllimport) wxEventHashTable(wxEventTable const &);
    friend void sub_01e10f60(void);
};

struct wxEventTable {
    public:
};

int sub_01e27380(void);
extern undefined4 g_025e9418;
extern undefined4 g_026de754;
// @baa 0x01e10f60
void sub_01e10f60(void)
{
  ((wxEventHashTable *)((wxEventHashTable *)&g_026de754))->wxEventHashTable::wxEventHashTable(*(const wxEventTable *)((wxEventTable *)&g_025e9418));
  sub_01a37872(&sub_01e27380);
  return;
}
