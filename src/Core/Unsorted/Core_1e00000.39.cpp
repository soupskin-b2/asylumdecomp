// Core_1e00000.cpp (part 39 of 160): 2 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

class wxEventHashTable;
struct wxEventTable;
class wxEventHashTable {
    public:
    public: __declspec(dllimport) wxEventHashTable(wxEventTable const &);
    friend void sub_01e048c0(void);
};

struct wxEventTable {
    public:
};

int sub_01a37872(...);
int sub_01e26450(void);
extern undefined4 g_025e8d34;
extern undefined4 g_026d5640;
// @baa 0x01e048c0
void sub_01e048c0(void)
{
  ((wxEventHashTable *)((wxEventHashTable *)&g_026d5640))->wxEventHashTable::wxEventHashTable(*(const wxEventTable *)((wxEventTable *)&g_025e8d34));
  sub_01a37872(&sub_01e26450);
  return;
}

class wxClassInfo;
class wxObject;
class wxClassInfo {
    public:
    public: __declspec(dllimport) wxClassInfo(wchar_t const *,wxClassInfo const *,wxClassInfo const *,int,wxObject * (__cdecl*)(void));
    friend void sub_01e0f8c0(void);
};

class wxObject {
    public:
};

int sub_0149e870(void);
int sub_01e27160(void);
extern undefined4 g_026d1934;
extern undefined4 g_026dd948;
// @baa 0x01e0f8c0
void sub_01e0f8c0(void)
{
  ((wxClassInfo *)((wxClassInfo *)&g_026dd948))->wxClassInfo::wxClassInfo(L"WxUIKismetTreeControl", (wxClassInfo *)&g_026d1934, (wxClassInfo *)0x0, 0x260, (wxObject *(__cdecl *)(void))(sub_0149e870));
  sub_01a37872(&sub_01e27160);
  return;
}
