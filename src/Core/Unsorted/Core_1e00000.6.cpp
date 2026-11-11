// Core_1e00000.cpp (part 6 of 160): 3 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

class wxEventHashTable;
struct wxEventTable;
class wxEventHashTable {
    public:
    public: __declspec(dllimport) wxEventHashTable(wxEventTable const &);
    friend void sub_01e003e0(void);
};

struct wxEventTable {
    public:
};

int sub_01a37872(...);
int sub_01e26120(void);
extern undefined4 g_025e86d8;
extern undefined4 g_026d25ac;
// @baa 0x01e003e0
void sub_01e003e0(void)
{
  ((wxEventHashTable *)((wxEventHashTable *)&g_026d25ac))->wxEventHashTable::wxEventHashTable(*(const wxEventTable *)((wxEventTable *)&g_025e86d8));
  sub_01a37872(&sub_01e26120);
  return;
}

class wxClassInfo;
class wxObject;
class wxClassInfo {
    public:
    public: __declspec(dllimport) wxClassInfo(wchar_t const *,wxClassInfo const *,wxClassInfo const *,int,wxObject * (__cdecl*)(void));
    friend void sub_01e00a20(void);
};

class wxObject {
    public:
};

int sub_011efa70(void);
int sub_01e26190(void);
extern undefined4 g_026d26e0;
extern undefined4 g_026d2978;
// @baa 0x01e00a20
void sub_01e00a20(void)
{
  ((wxClassInfo *)((wxClassInfo *)&g_026d2978))->wxClassInfo::wxClassInfo(L"WxPropertyWindow_Item", (wxClassInfo *)&g_026d26e0, (wxClassInfo *)0x0, 0x1e8, (wxObject *(__cdecl *)(void))(sub_011efa70));
  sub_01a37872(&sub_01e26190);
  return;
}

class wxString;
class wxString {
    public:
    public: __declspec(dllimport) wxString(wxString const &);
    friend void sub_01e0f6e0(void);
};

int sub_01e27080(void);
extern undefined4 g_026dd800;
extern undefined4 g_026dd804;
// @baa 0x01e0f6e0
void sub_01e0f6e0(void)
{
  ((wxString *)((wxString *)&g_026dd804))->wxString::wxString(*(const wxString *)((wxString *)&g_026dd800));
  sub_01a37872(&sub_01e27080);
  return;
}
