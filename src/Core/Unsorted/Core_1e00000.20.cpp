// Core_1e00000.cpp (part 20 of 160): 2 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

class wxEventHashTable;
struct wxEventTable;
class wxEventHashTable {
    public:
    public: __declspec(dllimport) wxEventHashTable(wxEventTable const &);
    friend void sub_01e015d0(void);
};

struct wxEventTable {
    public:
};

int sub_01a37872(...);
int sub_01e26260(void);
extern undefined4 g_021f2ad4;
extern undefined4 g_026d3134;
// @baa 0x01e015d0
void sub_01e015d0(void)
{
  ((wxEventHashTable *)((wxEventHashTable *)&g_026d3134))->wxEventHashTable::wxEventHashTable(*(const wxEventTable *)((wxEventTable *)&g_021f2ad4));
  sub_01a37872(&sub_01e26260);
  return;
}

class wxClassInfo;
class wxObject;
class wxClassInfo {
    public:
    public: __declspec(dllimport) wxClassInfo(wchar_t const *,wxClassInfo const *,wxClassInfo const *,int,wxObject * (__cdecl*)(void));
    friend void sub_01e08da0(void);
};

class wxObject {
    public:
};

int sub_01369590(void);
int sub_01e26780(void);
extern undefined4 g_026cf1b4;
extern undefined4 g_026d8378;
// @baa 0x01e08da0
void sub_01e08da0(void)
{
  ((wxClassInfo *)((wxClassInfo *)&g_026d8378))->wxClassInfo::wxClassInfo(L"WxDynamicShadowStatsBrowser", (wxClassInfo *)&g_026cf1b4, (wxClassInfo *)0x0, 0x194, (wxObject *(__cdecl *)(void))(sub_01369590));
  sub_01a37872(&sub_01e26780);
  return;
}
