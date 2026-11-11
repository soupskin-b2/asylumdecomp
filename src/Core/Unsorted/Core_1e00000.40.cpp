// Core_1e00000.cpp (part 40 of 160): 2 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

class wxEventHashTable;
struct wxEventTable;
class wxEventHashTable {
    public:
    public: __declspec(dllimport) wxEventHashTable(wxEventTable const &);
    friend void sub_01e04a00(void);
};

struct wxEventTable {
    public:
};

int sub_01a37872(...);
int sub_01e26460(void);
extern undefined4 g_0221c6c8;
extern undefined4 g_026d570c;
// @baa 0x01e04a00
void sub_01e04a00(void)
{
  ((wxEventHashTable *)((wxEventHashTable *)&g_026d570c))->wxEventHashTable::wxEventHashTable(*(const wxEventTable *)((wxEventTable *)&g_0221c6c8));
  sub_01a37872(&sub_01e26460);
  return;
}

class wxClassInfo;
class wxObject;
class wxClassInfo {
    public:
    public: __declspec(dllimport) wxClassInfo(wchar_t const *,wxClassInfo const *,wxClassInfo const *,int,wxObject * (__cdecl*)(void));
    friend void sub_01e0f9b0(void);
};

class wxObject {
    public:
};

int sub_014c3950(void);
int sub_01e27180(void);
extern undefined4 g_026cead8;
extern undefined4 g_026dd9dc;
// @baa 0x01e0f9b0
void sub_01e0f9b0(void)
{
  ((wxClassInfo *)((wxClassInfo *)&g_026dd9dc))->wxClassInfo::wxClassInfo(L"WxSceneTreeCtrl", (wxClassInfo *)&g_026cead8, (wxClassInfo *)0x0, 0x2b0, (wxObject *(__cdecl *)(void))(sub_014c3950));
  sub_01a37872(&sub_01e27180);
  return;
}
