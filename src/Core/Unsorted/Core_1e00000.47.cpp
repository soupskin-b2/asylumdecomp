// Core_1e00000.cpp (part 47 of 160): 2 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

class wxEventHashTable;
struct wxEventTable;
class wxEventHashTable {
    public:
    public: __declspec(dllimport) wxEventHashTable(wxEventTable const &);
    friend void sub_01e04ca0(void);
};

struct wxEventTable {
    public:
};

int sub_01a37872(...);
int sub_01e264d0(void);
extern undefined4 g_0221da90;
extern undefined4 g_026d58a8;
// @baa 0x01e04ca0
void sub_01e04ca0(void)
{
  ((wxEventHashTable *)((wxEventHashTable *)&g_026d58a8))->wxEventHashTable::wxEventHashTable(*(const wxEventTable *)((wxEventTable *)&g_0221da90));
  sub_01a37872(&sub_01e264d0);
  return;
}

class wxClassInfo;
class wxObject;
class wxClassInfo {
    public:
    public: __declspec(dllimport) wxClassInfo(wchar_t const *,wxClassInfo const *,wxClassInfo const *,int,wxObject * (__cdecl*)(void));
    friend void sub_01e0ff40(void);
};

class wxObject {
    public:
};

int sub_014b1a30(void);
int sub_01e27220(void);
extern undefined4 g_026ddd14;
extern undefined4 g_026ddd2c;
// @baa 0x01e0ff40
void sub_01e0ff40(void)
{
  ((wxClassInfo *)((wxClassInfo *)&g_026ddd2c))->wxClassInfo::wxClassInfo(L"WxUIContextMenu", (wxClassInfo *)&g_026ddd14, (wxClassInfo *)0x0, 0xa4, (wxObject *(__cdecl *)(void))(sub_014b1a30));
  sub_01a37872(&sub_01e27220);
  return;
}
