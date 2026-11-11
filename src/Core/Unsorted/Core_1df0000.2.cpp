// Core_1df0000.cpp (part 2 of 44): 3 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

class wxEventHashTable;
struct wxEventTable;
class wxEventHashTable {
    public:
    public: __declspec(dllimport) wxEventHashTable(wxEventTable const &);
    friend void sub_01dfa080(void);
};

struct wxEventTable {
    public:
};

int sub_01a37872(...);
int sub_01e25c90(void);
extern undefined4 g_025e8590;
extern undefined4 g_026ce6c8;
// @baa 0x01dfa080
void sub_01dfa080(void)
{
  ((wxEventHashTable *)((wxEventHashTable *)&g_026ce6c8))->wxEventHashTable::wxEventHashTable(*(const wxEventTable *)((wxEventTable *)&g_025e8590));
  sub_01a37872(&sub_01e25c90);
  return;
}

class wxClassInfo;
class wxObject;
class wxTreeCtrl;
class wxClassInfo {
    public:
    public: __declspec(dllimport) wxClassInfo(wchar_t const *,wxClassInfo const *,wxClassInfo const *,int,wxObject * (__cdecl*)(void));
    friend void sub_01dfa710(void);
};

class wxObject {
    public:
};

class wxTreeCtrl {
    public:
    public: __declspec(dllimport) static wxClassInfo ms_classInfo;
    friend void sub_01dfa710(void);
};

int sub_01155930(void);
int sub_01e25d30(void);
extern undefined4 g_026cead8;
// @baa 0x01dfa710
void sub_01dfa710(void)
{
  ((wxClassInfo *)((wxClassInfo *)&g_026cead8))->wxClassInfo::wxClassInfo(L"WxTreeCtrl", (wxClassInfo *)(&wxTreeCtrl::ms_classInfo), (wxClassInfo *)0x0, 0x218, (wxObject *(__cdecl *)(void))(sub_01155930));
  sub_01a37872(&sub_01e25d30);
  return;
}

class wxString;
class wxString {
    public:
    public: __declspec(dllimport) wxString(wxString const &);
    friend void sub_01dfb720(void);
};

int sub_01e25e70(void);
extern undefined4 g_026cf470;
extern undefined4 g_026cf474;
// @baa 0x01dfb720
void sub_01dfb720(void)
{
  ((wxString *)((wxString *)&g_026cf474))->wxString::wxString(*(const wxString *)((wxString *)&g_026cf470));
  sub_01a37872(&sub_01e25e70);
  return;
}
