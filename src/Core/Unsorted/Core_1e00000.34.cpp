// Core_1e00000.cpp (part 34 of 160): 2 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

class wxEventHashTable;
struct wxEventTable;
class wxEventHashTable {
    public:
    public: __declspec(dllimport) wxEventHashTable(wxEventTable const &);
    friend void sub_01e043d0(void);
};

struct wxEventTable {
    public:
};

int sub_01a37872(...);
int sub_01e263d0(void);
extern undefined4 g_025e8cc4;
extern undefined4 g_026d4f78;
// @baa 0x01e043d0
void sub_01e043d0(void)
{
  ((wxEventHashTable *)((wxEventHashTable *)&g_026d4f78))->wxEventHashTable::wxEventHashTable(*(const wxEventTable *)((wxEventTable *)&g_025e8cc4));
  sub_01a37872(&sub_01e263d0);
  return;
}

class wxClassInfo;
class wxObject;
class wxClassInfo {
    public:
    public: __declspec(dllimport) wxClassInfo(wchar_t const *,wxClassInfo const *,wxClassInfo const *,int,wxObject * (__cdecl*)(void));
    friend void sub_01e0ccd0(void);
};

class wxObject {
    public:
};

int sub_01426360(void);
int sub_01e26c40(void);
extern undefined4 g_026daa7c;
extern undefined4 g_026dde74;
// @baa 0x01e0ccd0
void sub_01e0ccd0(void)
{
  ((wxClassInfo *)((wxClassInfo *)&g_026daa7c))->wxClassInfo::wxClassInfo(L"WxCustomPropertyItem_MaterialInstanceConstantParameter", (wxClassInfo *)&g_026dde74, (wxClassInfo *)0x0, 0x200, (wxObject *(__cdecl *)(void))(sub_01426360));
  sub_01a37872(&sub_01e26c40);
  return;
}
