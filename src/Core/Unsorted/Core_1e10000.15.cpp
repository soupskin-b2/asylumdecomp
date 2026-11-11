// Core_1e10000.cpp (part 15 of 24): 2 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

class wxClassInfo;
class wxObject;
class wxClassInfo {
    public:
    public: __declspec(dllimport) wxClassInfo(wchar_t const *,wxClassInfo const *,wxClassInfo const *,int,wxObject * (__cdecl*)(void));
    friend void sub_01e115c0(void);
};

class wxObject {
    public:
};

int sub_014f0c80(void);
int sub_01a37872(...);
int sub_01e27440(void);
extern undefined4 g_026deb14;
extern undefined4 g_026deb44;
// @baa 0x01e115c0
void sub_01e115c0(void)
{
  ((wxClassInfo *)((wxClassInfo *)&g_026deb44))->wxClassInfo::wxClassInfo(L"WxStyleCommonPropertiesGroup", (wxClassInfo *)&g_026deb14, (wxClassInfo *)0x0, 0x184, (wxObject *(__cdecl *)(void))(sub_014f0c80));
  sub_01a37872(&sub_01e27440);
  return;
}

class wxEventHashTable;
struct wxEventTable;
class wxEventHashTable {
    public:
    public: __declspec(dllimport) wxEventHashTable(wxEventTable const &);
    friend void sub_01e116e0(void);
};

struct wxEventTable {
    public:
};

int sub_01e27470(void);
extern undefined4 g_022bec20;
extern undefined4 g_026dec2c;
// @baa 0x01e116e0
void sub_01e116e0(void)
{
  ((wxEventHashTable *)((wxEventHashTable *)&g_026dec2c))->wxEventHashTable::wxEventHashTable(*(const wxEventTable *)((wxEventTable *)&g_022bec20));
  sub_01a37872(&sub_01e27470);
  return;
}
