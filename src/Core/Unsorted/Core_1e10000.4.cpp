// Core_1e10000.cpp (part 4 of 24): 2 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

class wxClassInfo;
class wxObject;
class wxClassInfo {
    public:
    public: __declspec(dllimport) wxClassInfo(wchar_t const *,wxClassInfo const *,wxClassInfo const *,int,wxObject * (__cdecl*)(void));
    friend void sub_01e10090(void);
};

class wxObject {
    public:
};

int sub_014b25e0(void);
int sub_01a37872(...);
int sub_01e27290(void);
extern undefined4 g_026ddd2c;
extern undefined4 g_026dddd4;
// @baa 0x01e10090
void sub_01e10090(void)
{
  ((wxClassInfo *)((wxClassInfo *)&g_026dddd4))->wxClassInfo::wxClassInfo(L"WxUIHandleContextMenu", (wxClassInfo *)&g_026ddd2c, (wxClassInfo *)0x0, 0xa8, (wxObject *(__cdecl *)(void))(sub_014b25e0));
  sub_01a37872(&sub_01e27290);
  return;
}

class wxEventHashTable;
struct wxEventTable;
class wxEventHashTable {
    public:
    public: __declspec(dllimport) wxEventHashTable(wxEventTable const &);
    friend void sub_01e10d00(void);
};

struct wxEventTable {
    public:
};

int sub_01e27330(void);
extern undefined4 g_022b7f90;
extern undefined4 g_026de5cc;
// @baa 0x01e10d00
void sub_01e10d00(void)
{
  ((wxEventHashTable *)((wxEventHashTable *)&g_026de5cc))->wxEventHashTable::wxEventHashTable(*(const wxEventTable *)((wxEventTable *)&g_022b7f90));
  sub_01a37872(&sub_01e27330);
  return;
}
