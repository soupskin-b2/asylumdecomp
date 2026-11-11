// Core_1e00000.cpp (part 23 of 160): 2 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

class wxEventHashTable;
struct wxEventTable;
class wxEventHashTable {
    public:
    public: __declspec(dllimport) wxEventHashTable(wxEventTable const &);
    friend void sub_01e01bc0(void);
};

struct wxEventTable {
    public:
};

int sub_01a37872(...);
int sub_01e262d0(void);
extern undefined4 g_021f9f4c;
extern undefined4 g_026d352c;
// @baa 0x01e01bc0
void sub_01e01bc0(void)
{
  ((wxEventHashTable *)((wxEventHashTable *)&g_026d352c))->wxEventHashTable::wxEventHashTable(*(const wxEventTable *)((wxEventTable *)&g_021f9f4c));
  sub_01a37872(&sub_01e262d0);
  return;
}

class wxClassInfo;
class wxObject;
class wxClassInfo {
    public:
    public: __declspec(dllimport) wxClassInfo(wchar_t const *,wxClassInfo const *,wxClassInfo const *,int,wxObject * (__cdecl*)(void));
    friend void sub_01e08e30(void);
};

class wxObject {
    public:
};

int sub_013696e0(void);
int sub_01e267b0(void);
extern undefined4 g_026cf1b4;
extern undefined4 g_026d83c0;
// @baa 0x01e08e30
void sub_01e08e30(void)
{
  ((wxClassInfo *)((wxClassInfo *)&g_026d83c0))->wxClassInfo::wxClassInfo(L"WxTagBrowser", (wxClassInfo *)&g_026cf1b4, (wxClassInfo *)0x0, 0x1ec, (wxObject *(__cdecl *)(void))(sub_013696e0));
  sub_01a37872(&sub_01e267b0);
  return;
}
