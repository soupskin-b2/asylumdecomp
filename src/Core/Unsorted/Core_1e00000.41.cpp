// Core_1e00000.cpp (part 41 of 160): 2 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

class wxEventHashTable;
struct wxEventTable;
class wxEventHashTable {
    public:
    public: __declspec(dllimport) wxEventHashTable(wxEventTable const &);
    friend void sub_01e04a90(void);
};

struct wxEventTable {
    public:
};

int sub_01a37872(...);
int sub_01e26470(void);
extern undefined4 g_025e8d3c;
extern undefined4 g_026d5760;
// @baa 0x01e04a90
void sub_01e04a90(void)
{
  ((wxEventHashTable *)((wxEventHashTable *)&g_026d5760))->wxEventHashTable::wxEventHashTable(*(const wxEventTable *)((wxEventTable *)&g_025e8d3c));
  sub_01a37872(&sub_01e26470);
  return;
}

class wxClassInfo;
class wxObject;
class wxClassInfo {
    public:
    public: __declspec(dllimport) wxClassInfo(wchar_t const *,wxClassInfo const *,wxClassInfo const *,int,wxObject * (__cdecl*)(void));
    friend void sub_01e0fb20(void);
};

class wxObject {
    public:
};

int sub_014c39c0(void);
int sub_01e271a0(void);
extern undefined4 g_026cead8;
extern undefined4 g_026ddac4;
// @baa 0x01e0fb20
void sub_01e0fb20(void)
{
  ((wxClassInfo *)((wxClassInfo *)&g_026ddac4))->wxClassInfo::wxClassInfo(L"WxUIStyleTreeCtrl", (wxClassInfo *)&g_026cead8, (wxClassInfo *)0x0, 0x25c, (wxObject *(__cdecl *)(void))(sub_014c39c0));
  sub_01a37872(&sub_01e271a0);
  return;
}
