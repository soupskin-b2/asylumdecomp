// Core_1e00000.cpp (part 15 of 160): 2 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

class wxEventHashTable;
struct wxEventTable;
class wxEventHashTable {
    public:
    public: __declspec(dllimport) wxEventHashTable(wxEventTable const &);
    friend void sub_01e00f30(void);
};

struct wxEventTable {
    public:
};

int sub_01a37872(...);
int sub_01e26210(void);
extern undefined4 g_025e8724;
extern undefined4 g_026d2d38;
// @baa 0x01e00f30
void sub_01e00f30(void)
{
  ((wxEventHashTable *)((wxEventHashTable *)&g_026d2d38))->wxEventHashTable::wxEventHashTable(*(const wxEventTable *)((wxEventTable *)&g_025e8724));
  sub_01a37872(&sub_01e26210);
  return;
}

class wxClassInfo;
class wxObject;
class wxClassInfo {
    public:
    public: __declspec(dllimport) wxClassInfo(wchar_t const *,wxClassInfo const *,wxClassInfo const *,int,wxObject * (__cdecl*)(void));
    friend void sub_01e08cb0(void);
};

class wxObject {
    public:
};

int sub_013693d0(void);
int sub_01e26730(void);
extern undefined4 g_026cf1b4;
extern undefined4 g_026d8300;
// @baa 0x01e08cb0
void sub_01e08cb0(void)
{
  ((wxClassInfo *)((wxClassInfo *)&g_026d8300))->wxClassInfo::wxClassInfo(L"WxReferencedAssetsBrowser", (wxClassInfo *)&g_026cf1b4, (wxClassInfo *)0x0, 0x28c, (wxObject *(__cdecl *)(void))(sub_013693d0));
  sub_01a37872(&sub_01e26730);
  return;
}
