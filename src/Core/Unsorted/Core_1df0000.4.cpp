// Core_1df0000.cpp (part 4 of 44): 3 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

class wxEventHashTable;
struct wxEventTable;
class wxEventHashTable {
    public:
    public: __declspec(dllimport) wxEventHashTable(wxEventTable const &);
    friend void sub_01dfa160(void);
};

struct wxEventTable {
    public:
};

int sub_01a37872(...);
int sub_01e25cb0(void);
extern undefined4 g_025e85a0;
extern undefined4 g_026ce748;
// @baa 0x01dfa160
void sub_01dfa160(void)
{
  ((wxEventHashTable *)((wxEventHashTable *)&g_026ce748))->wxEventHashTable::wxEventHashTable(*(const wxEventTable *)((wxEventTable *)&g_025e85a0));
  sub_01a37872(&sub_01e25cb0);
  return;
}

class wxClassInfo;
class wxObject;
class wxClassInfo {
    public:
    public: __declspec(dllimport) wxClassInfo(wchar_t const *,wxClassInfo const *,wxClassInfo const *,int,wxObject * (__cdecl*)(void));
    friend void sub_01dfb210(void);
};

class wxObject {
    public:
};

int sub_01136290(void);
int sub_01e25dc0(void);
extern undefined4 g_026cf1b4;
extern undefined4 g_026d4e24;
// @baa 0x01dfb210
void sub_01dfb210(void)
{
  ((wxClassInfo *)((wxClassInfo *)&g_026cf1b4))->wxClassInfo::wxClassInfo(L"WxBrowser", (wxClassInfo *)&g_026d4e24, (wxClassInfo *)0x0, 0x184, (wxObject *(__cdecl *)(void))(sub_01136290));
  sub_01a37872(&sub_01e25dc0);
  return;
}

class wxString;
class wxString {
    public:
    public: __declspec(dllimport) wxString(wxString const &);
    friend void sub_01dfe530(void);
};

int sub_01e25f40(void);
extern undefined4 g_026d127c;
extern undefined4 g_026d1280;
// @baa 0x01dfe530
void sub_01dfe530(void)
{
  ((wxString *)((wxString *)&g_026d1280))->wxString::wxString(*(const wxString *)((wxString *)&g_026d127c));
  sub_01a37872(&sub_01e25f40);
  return;
}
