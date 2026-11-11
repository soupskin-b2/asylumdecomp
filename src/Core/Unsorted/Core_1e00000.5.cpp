// Core_1e00000.cpp (part 5 of 160): 3 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

class wxEventHashTable;
struct wxEventTable;
class wxEventHashTable {
    public:
    public: __declspec(dllimport) wxEventHashTable(wxEventTable const &);
    friend void sub_01e00260(void);
};

struct wxEventTable {
    public:
};

int sub_01a37872(...);
int sub_01e26100(void);
extern undefined4 g_025e86d0;
extern undefined4 g_026d24c8;
// @baa 0x01e00260
void sub_01e00260(void)
{
  ((wxEventHashTable *)((wxEventHashTable *)&g_026d24c8))->wxEventHashTable::wxEventHashTable(*(const wxEventTable *)((wxEventTable *)&g_025e86d0));
  sub_01a37872(&sub_01e26100);
  return;
}

class wxClassInfo;
class wxObject;
class wxClassInfo {
    public:
    public: __declspec(dllimport) wxClassInfo(wchar_t const *,wxClassInfo const *,wxClassInfo const *,int,wxObject * (__cdecl*)(void));
    friend void sub_01e00920(void);
};

class wxObject {
    public:
};

int sub_011efa00(void);
int sub_01e26170(void);
extern undefined4 g_026d26e0;
extern undefined4 g_026d28d0;
// @baa 0x01e00920
void sub_01e00920(void)
{
  ((wxClassInfo *)((wxClassInfo *)&g_026d28d0))->wxClassInfo::wxClassInfo(L"WxPropertyWindow_Category", (wxClassInfo *)&g_026d26e0, (wxClassInfo *)0x0, 0x1f0, (wxObject *(__cdecl *)(void))(sub_011efa00));
  sub_01a37872(&sub_01e26170);
  return;
}

class wxString;
class wxString {
    public:
    public: __declspec(dllimport) wxString(wxString const &);
    friend void sub_01e0f6c0(void);
};

int sub_01e27070(void);
extern undefined4 g_026dd72c;
extern undefined4 g_026dd800;
// @baa 0x01e0f6c0
void sub_01e0f6c0(void)
{
  ((wxString *)((wxString *)&g_026dd800))->wxString::wxString(*(const wxString *)((wxString *)&g_026dd72c));
  sub_01a37872(&sub_01e27070);
  return;
}
