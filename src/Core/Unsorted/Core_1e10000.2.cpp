// Core_1e10000.cpp (part 2 of 24): 2 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

class wxClassInfo;
class wxObject;
class wxClassInfo {
    public:
    public: __declspec(dllimport) wxClassInfo(wchar_t const *,wxClassInfo const *,wxClassInfo const *,int,wxObject * (__cdecl*)(void));
    friend void sub_01e10030(void);
};

class wxObject {
    public:
};

int sub_014b24c0(void);
int sub_01a37872(...);
int sub_01e27270(void);
extern undefined4 g_026ddd2c;
extern undefined4 g_026ddda4;
// @baa 0x01e10030
void sub_01e10030(void)
{
  ((wxClassInfo *)((wxClassInfo *)&g_026ddda4))->wxClassInfo::wxClassInfo(L"WxUIObjectNewContextMenu", (wxClassInfo *)&g_026ddd2c, (wxClassInfo *)0x0, 0xa4, (wxObject *(__cdecl *)(void))(sub_014b24c0));
  sub_01a37872(&sub_01e27270);
  return;
}

class wxEventHashTable;
struct wxEventTable;
class wxEventHashTable {
    public:
    public: __declspec(dllimport) wxEventHashTable(wxEventTable const &);
    friend void sub_01e101c0(void);
};

struct wxEventTable {
    public:
};

int sub_01e27310(void);
extern undefined4 g_022b5294;
extern undefined4 g_026ddecc;
// @baa 0x01e101c0
void sub_01e101c0(void)
{
  ((wxEventHashTable *)((wxEventHashTable *)&g_026ddecc))->wxEventHashTable::wxEventHashTable(*(const wxEventTable *)((wxEventTable *)&g_022b5294));
  sub_01a37872(&sub_01e27310);
  return;
}
