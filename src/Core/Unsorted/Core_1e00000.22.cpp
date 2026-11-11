// Core_1e00000.cpp (part 22 of 160): 2 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

class wxEventHashTable;
struct wxEventTable;
class wxEventHashTable {
    public:
    public: __declspec(dllimport) wxEventHashTable(wxEventTable const &);
    friend void sub_01e01830(void);
};

struct wxEventTable {
    public:
};

int sub_01a37872(...);
int sub_01e26280(void);
extern undefined4 g_025e8754;
extern undefined4 g_026d32a8;
// @baa 0x01e01830
void sub_01e01830(void)
{
  ((wxEventHashTable *)((wxEventHashTable *)&g_026d32a8))->wxEventHashTable::wxEventHashTable(*(const wxEventTable *)((wxEventTable *)&g_025e8754));
  sub_01a37872(&sub_01e26280);
  return;
}

class wxClassInfo;
class wxObject;
class wxClassInfo {
    public:
    public: __declspec(dllimport) wxClassInfo(wchar_t const *,wxClassInfo const *,wxClassInfo const *,int,wxObject * (__cdecl*)(void));
    friend void sub_01e08e00(void);
};

class wxObject {
    public:
};

int sub_01369670(void);
int sub_01e267a0(void);
extern undefined4 g_026cf1b4;
extern undefined4 g_026d83a8;
// @baa 0x01e08e00
void sub_01e08e00(void)
{
  ((wxClassInfo *)((wxClassInfo *)&g_026d83a8))->wxClassInfo::wxClassInfo(L"WxLightBrowser", (wxClassInfo *)&g_026cf1b4, (wxClassInfo *)0x0, 0x200, (wxObject *(__cdecl *)(void))(sub_01369670));
  sub_01a37872(&sub_01e267a0);
  return;
}
