// Core_1e00000.cpp (part 31 of 160): 2 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

class wxEventHashTable;
struct wxEventTable;
class wxEventHashTable {
    public:
    public: __declspec(dllimport) wxEventHashTable(wxEventTable const &);
    friend void sub_01e02de0(void);
};

struct wxEventTable {
    public:
};

int sub_01a37872(...);
int sub_01e26370(void);
extern undefined4 g_02206a5c;
extern undefined4 g_026d4138;
// @baa 0x01e02de0
void sub_01e02de0(void)
{
  ((wxEventHashTable *)((wxEventHashTable *)&g_026d4138))->wxEventHashTable::wxEventHashTable(*(const wxEventTable *)((wxEventTable *)&g_02206a5c));
  sub_01a37872(&sub_01e26370);
  return;
}

class wxClassInfo;
class wxObject;
class wxClassInfo {
    public:
    public: __declspec(dllimport) wxClassInfo(wchar_t const *,wxClassInfo const *,wxClassInfo const *,int,wxObject * (__cdecl*)(void));
    friend void sub_01e0c4d0(void);
};

class wxObject {
    public:
};

int sub_01404c10(void);
int sub_01e26b50(void);
extern undefined4 g_026cead8;
extern undefined4 g_026da5e4;
// @baa 0x01e0c4d0
void sub_01e0c4d0(void)
{
  ((wxClassInfo *)((wxClassInfo *)&g_026da5e4))->wxClassInfo::wxClassInfo(L"WxUILayerTreeCtrl", (wxClassInfo *)&g_026cead8, (wxClassInfo *)0x0, 0x324, (wxObject *(__cdecl *)(void))(sub_01404c10));
  sub_01a37872(&sub_01e26b50);
  return;
}
