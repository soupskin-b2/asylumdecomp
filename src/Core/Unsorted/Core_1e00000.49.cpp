// Core_1e00000.cpp (part 49 of 160): 2 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

class wxEventHashTable;
struct wxEventTable;
class wxEventHashTable {
    public:
    public: __declspec(dllimport) wxEventHashTable(wxEventTable const &);
    friend void sub_01e057f0(void);
};

struct wxEventTable {
    public:
};

int sub_01a37872(...);
int sub_01e26560(void);
extern undefined4 g_025e8df8;
extern undefined4 g_026d5ff0;
// @baa 0x01e057f0
void sub_01e057f0(void)
{
  ((wxEventHashTable *)((wxEventHashTable *)&g_026d5ff0))->wxEventHashTable::wxEventHashTable(*(const wxEventTable *)((wxEventTable *)&g_025e8df8));
  sub_01a37872(&sub_01e26560);
  return;
}

class wxClassInfo;
class wxObject;
class wxClassInfo {
    public:
    public: __declspec(dllimport) wxClassInfo(wchar_t const *,wxClassInfo const *,wxClassInfo const *,int,wxObject * (__cdecl*)(void));
    friend void sub_01e0ffa0(void);
};

class wxObject {
    public:
};

int sub_014b9320(void);
int sub_01e27240(void);
extern undefined4 g_026ddd2c;
extern undefined4 g_026ddd5c;
// @baa 0x01e0ffa0
void sub_01e0ffa0(void)
{
  ((wxClassInfo *)((wxClassInfo *)&g_026ddd5c))->wxClassInfo::wxClassInfo(L"WxUILayerTreeContextMenu", (wxClassInfo *)&g_026ddd2c, (wxClassInfo *)0x0, 0xa4, (wxObject *(__cdecl *)(void))(sub_014b9320));
  sub_01a37872(&sub_01e27240);
  return;
}
