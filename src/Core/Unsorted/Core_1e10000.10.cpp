// Core_1e10000.cpp (part 10 of 24): 2 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

class wxClassInfo;
class wxObject;
class wxClassInfo {
    public:
    public: __declspec(dllimport) wxClassInfo(wchar_t const *,wxClassInfo const *,wxClassInfo const *,int,wxObject * (__cdecl*)(void));
    friend void sub_01e11020(void);
};

class wxObject {
    public:
};

int sub_014f0b80(void);
int sub_01a37872(...);
int sub_01e273a0(void);
extern undefined4 g_026de73c;
extern undefined4 g_026de7d4;
// @baa 0x01e11020
void sub_01e11020(void)
{
  ((wxClassInfo *)((wxClassInfo *)&g_026de7d4))->wxClassInfo::wxClassInfo(L"WxDefaultImagePreviewPanel", (wxClassInfo *)&g_026de73c, (wxClassInfo *)0x0, 0x1b0, (wxObject *(__cdecl *)(void))(sub_014f0b80));
  sub_01a37872(&sub_01e273a0);
  return;
}

class wxEventHashTable;
struct wxEventTable;
class wxEventHashTable {
    public:
    public: __declspec(dllimport) wxEventHashTable(wxEventTable const &);
    friend void sub_01e110e0(void);
};

struct wxEventTable {
    public:
};

int sub_01e273d0(void);
extern undefined4 g_022bb984;
extern undefined4 g_026de844;
// @baa 0x01e110e0
void sub_01e110e0(void)
{
  ((wxEventHashTable *)((wxEventHashTable *)&g_026de844))->wxEventHashTable::wxEventHashTable(*(const wxEventTable *)((wxEventTable *)&g_022bb984));
  sub_01a37872(&sub_01e273d0);
  return;
}
