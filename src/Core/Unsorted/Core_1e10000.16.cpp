// Core_1e10000.cpp (part 16 of 24): 2 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

class wxClassInfo;
class wxObject;
class wxClassInfo {
    public:
    public: __declspec(dllimport) wxClassInfo(wchar_t const *,wxClassInfo const *,wxClassInfo const *,int,wxObject * (__cdecl*)(void));
    friend void sub_01e116b0(void);
};

class wxObject {
    public:
};

int sub_014f1c70(void);
int sub_01a37872(...);
int sub_01e27460(void);
extern undefined4 g_026deb14;
extern undefined4 g_026dec14;
// @baa 0x01e116b0
void sub_01e116b0(void)
{
  ((wxClassInfo *)((wxClassInfo *)&g_026dec14))->wxClassInfo::wxClassInfo(L"WxStyleTextPropertiesGroup", (wxClassInfo *)&g_026deb14, (wxClassInfo *)0x0, 0x1ac, (wxObject *(__cdecl *)(void))(sub_014f1c70));
  sub_01a37872(&sub_01e27460);
  return;
}

class wxEventHashTable;
struct wxEventTable;
class wxEventHashTable {
    public:
    public: __declspec(dllimport) wxEventHashTable(wxEventTable const &);
    friend void sub_01e11950(void);
};

struct wxEventTable {
    public:
};

int sub_01e27490(void);
extern undefined4 g_022c09a8;
extern undefined4 g_026dedb4;
// @baa 0x01e11950
void sub_01e11950(void)
{
  ((wxEventHashTable *)((wxEventHashTable *)&g_026dedb4))->wxEventHashTable::wxEventHashTable(*(const wxEventTable *)((wxEventTable *)&g_022c09a8));
  sub_01a37872(&sub_01e27490);
  return;
}
