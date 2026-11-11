// Core_1e00000.cpp (part 37 of 160): 2 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

class wxEventHashTable;
struct wxEventTable;
class wxEventHashTable {
    public:
    public: __declspec(dllimport) wxEventHashTable(wxEventTable const &);
    friend void sub_01e04680(void);
};

struct wxEventTable {
    public:
};

int sub_01a37872(...);
int sub_01e26410(void);
extern undefined4 g_025e8cd4;
extern undefined4 g_026d50d4;
// @baa 0x01e04680
void sub_01e04680(void)
{
  ((wxEventHashTable *)((wxEventHashTable *)&g_026d50d4))->wxEventHashTable::wxEventHashTable(*(const wxEventTable *)((wxEventTable *)&g_025e8cd4));
  sub_01a37872(&sub_01e26410);
  return;
}

class wxClassInfo;
class wxObject;
class wxClassInfo {
    public:
    public: __declspec(dllimport) wxClassInfo(wchar_t const *,wxClassInfo const *,wxClassInfo const *,int,wxObject * (__cdecl*)(void));
    friend void sub_01e0cf00(void);
};

class wxObject {
    public:
};

int sub_014240d0(void);
int sub_01e26ca0(void);
extern undefined4 g_026d2978;
extern undefined4 g_026dabd8;
// @baa 0x01e0cf00
void sub_01e0cf00(void)
{
  ((wxClassInfo *)((wxClassInfo *)&g_026dabd8))->wxClassInfo::wxClassInfo(L"WxPropertyWindow_MaterialInstanceTimeVaryingParameters", (wxClassInfo *)&g_026d2978, (wxClassInfo *)0x0, 0x1e8, (wxObject *(__cdecl *)(void))(sub_014240d0));
  sub_01a37872(&sub_01e26ca0);
  return;
}
