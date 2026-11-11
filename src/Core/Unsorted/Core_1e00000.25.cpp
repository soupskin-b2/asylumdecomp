// Core_1e00000.cpp (part 25 of 160): 2 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

class wxEventHashTable;
struct wxEventTable;
class wxEventHashTable {
    public:
    public: __declspec(dllimport) wxEventHashTable(wxEventTable const &);
    friend void sub_01e01e20(void);
};

struct wxEventTable {
    public:
};

int sub_01a37872(...);
int sub_01e262f0(void);
extern undefined4 g_025e8bbc;
extern undefined4 g_026d36bc;
// @baa 0x01e01e20
void sub_01e01e20(void)
{
  ((wxEventHashTable *)((wxEventHashTable *)&g_026d36bc))->wxEventHashTable::wxEventHashTable(*(const wxEventTable *)((wxEventTable *)&g_025e8bbc));
  sub_01a37872(&sub_01e262f0);
  return;
}

class wxClassInfo;
class wxDialog;
class wxObject;
class wxClassInfo {
    public:
    public: __declspec(dllimport) wxClassInfo(wchar_t const *,wxClassInfo const *,wxClassInfo const *,int,wxObject * (__cdecl*)(void));
    friend void sub_01e0b580(void);
};

class wxDialog {
    public:
    public: __declspec(dllimport) static wxClassInfo ms_classInfo;
    friend void sub_01e0b580(void);
};

class wxObject {
    public:
};

int sub_01404640(void);
int sub_01e26a20(void);
extern undefined4 g_026d9cb0;
// @baa 0x01e0b580
void sub_01e0b580(void)
{
  ((wxClassInfo *)((wxClassInfo *)&g_026d9cb0))->wxClassInfo::wxClassInfo(L"WxDlgUISkinEditor", (wxClassInfo *)(&wxDialog::ms_classInfo), (wxClassInfo *)0x0, 0x240, (wxObject *(__cdecl *)(void))(sub_01404640));
  sub_01a37872(&sub_01e26a20);
  return;
}
