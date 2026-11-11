// Core_1e00000.cpp (part 35 of 160): 2 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

class wxEventHashTable;
struct wxEventTable;
class wxEventHashTable {
    public:
    public: __declspec(dllimport) wxEventHashTable(wxEventTable const &);
    friend void sub_01e04480(void);
};

struct wxEventTable {
    public:
};

int sub_01a37872(...);
int sub_01e263e0(void);
extern undefined4 g_025e8ccc;
extern undefined4 g_026d4fe0;
// @baa 0x01e04480
void sub_01e04480(void)
{
  ((wxEventHashTable *)((wxEventHashTable *)&g_026d4fe0))->wxEventHashTable::wxEventHashTable(*(const wxEventTable *)((wxEventTable *)&g_025e8ccc));
  sub_01a37872(&sub_01e263e0);
  return;
}

class wxClassInfo;
class wxObject;
class wxClassInfo {
    public:
    public: __declspec(dllimport) wxClassInfo(wchar_t const *,wxClassInfo const *,wxClassInfo const *,int,wxObject * (__cdecl*)(void));
    friend void sub_01e0cd60(void);
};

class wxObject {
    public:
};

int sub_01423810(void);
int sub_01e26c60(void);
extern undefined4 g_026d2978;
extern undefined4 g_026daad4;
// @baa 0x01e0cd60
void sub_01e0cd60(void)
{
  ((wxClassInfo *)((wxClassInfo *)&g_026daad4))->wxClassInfo::wxClassInfo(L"WxPropertyWindow_MaterialInstanceConstantParameters", (wxClassInfo *)&g_026d2978, (wxClassInfo *)0x0, 0x1e8, (wxObject *(__cdecl *)(void))(sub_01423810));
  sub_01a37872(&sub_01e26c60);
  return;
}
