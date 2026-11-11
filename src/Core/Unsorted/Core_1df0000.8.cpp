// Core_1df0000.cpp (part 8 of 44): 2 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

class wxEventHashTable;
struct wxEventTable;
class wxEventHashTable {
    public:
    public: __declspec(dllimport) wxEventHashTable(wxEventTable const &);
    friend void sub_01dfa590(void);
};

struct wxEventTable {
    public:
};

int sub_01a37872(...);
int sub_01e25cf0(void);
extern undefined4 g_021afc18;
extern undefined4 g_026ce9ec;
// @baa 0x01dfa590
void sub_01dfa590(void)
{
  ((wxEventHashTable *)((wxEventHashTable *)&g_026ce9ec))->wxEventHashTable::wxEventHashTable(*(const wxEventTable *)((wxEventTable *)&g_021afc18));
  sub_01a37872(&sub_01e25cf0);
  return;
}

class wxClassInfo;
class wxObject;
class wxClassInfo {
    public:
    public: __declspec(dllimport) wxClassInfo(wchar_t const *,wxClassInfo const *,wxClassInfo const *,int,wxObject * (__cdecl*)(void));
    friend void sub_01dff000(void);
};

class wxObject {
    public:
};

int sub_011c0030(void);
int sub_01e25fd0(void);
extern undefined4 g_026cead8;
extern undefined4 g_026d1934;
// @baa 0x01dff000
void sub_01dff000(void)
{
  ((wxClassInfo *)((wxClassInfo *)&g_026d1934))->wxClassInfo::wxClassInfo(L"WxSequenceTreeCtrl", (wxClassInfo *)&g_026cead8, (wxClassInfo *)0x0, 0x25c, (wxObject *(__cdecl *)(void))(sub_011c0030));
  sub_01a37872(&sub_01e25fd0);
  return;
}
