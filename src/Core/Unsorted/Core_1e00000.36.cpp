// Core_1e00000.cpp (part 36 of 160): 2 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

class wxEventHashTable;
struct wxEventTable;
class wxEventHashTable {
    public:
    public: __declspec(dllimport) wxEventHashTable(wxEventTable const &);
    friend void sub_01e04630(void);
};

struct wxEventTable {
    public:
};

int sub_01a37872(...);
int sub_01e26400(...);
extern undefined4 g_02212f1c;
extern undefined4 g_026d50a8;
// @baa 0x01e04630
void sub_01e04630(void)
{
  ((wxEventHashTable *)((wxEventHashTable *)&g_026d50a8))->wxEventHashTable::wxEventHashTable(*(const wxEventTable *)((wxEventTable *)&g_02212f1c));
  sub_01a37872(&sub_01e26400);
  return;
}

class wxClassInfo;
class wxObject;
class wxClassInfo {
    public:
    public: __declspec(dllimport) wxClassInfo(wchar_t const *,wxClassInfo const *,wxClassInfo const *,int,wxObject * (__cdecl*)(void));
    friend void sub_01e0ce70(void);
};

class wxObject {
    public:
};

int sub_01425210(void);
int sub_01e26c80(void);
extern undefined4 g_026dab80;
extern undefined4 g_026dde74;
// @baa 0x01e0ce70
void sub_01e0ce70(void)
{
  ((wxClassInfo *)((wxClassInfo *)&g_026dab80))->wxClassInfo::wxClassInfo(L"WxCustomPropertyItem_MaterialInstanceTimeVaryingParameter", (wxClassInfo *)&g_026dde74, (wxClassInfo *)0x0, 0x200, (wxObject *(__cdecl *)(void))(sub_01425210));
  sub_01a37872(&sub_01e26c80);
  return;
}
