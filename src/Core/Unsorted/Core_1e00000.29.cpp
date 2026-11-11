// Core_1e00000.cpp (part 29 of 160): 2 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

class wxEventHashTable;
struct wxEventTable;
class wxEventHashTable {
    public:
    public: __declspec(dllimport) wxEventHashTable(wxEventTable const &);
    friend void sub_01e029c0(void);
};

struct wxEventTable {
    public:
};

int sub_01a37872(...);
int sub_01e26340(void);
extern undefined4 g_025e8bd4;
extern undefined4 g_026d3dec;
// @baa 0x01e029c0
void sub_01e029c0(void)
{
  ((wxEventHashTable *)((wxEventHashTable *)&g_026d3dec))->wxEventHashTable::wxEventHashTable(*(const wxEventTable *)((wxEventTable *)&g_025e8bd4));
  sub_01a37872(&sub_01e26340);
  return;
}

class wxClassInfo;
class wxDialog;
class wxObject;
class wxClassInfo {
    public:
    public: __declspec(dllimport) wxClassInfo(wchar_t const *,wxClassInfo const *,wxClassInfo const *,int,wxObject * (__cdecl*)(void));
    friend void sub_01e0c3e0(void);
};

class wxDialog {
    public:
    public: __declspec(dllimport) static wxClassInfo ms_classInfo;
    friend void sub_01e0c3e0(void);
};

class wxObject {
    public:
};

int sub_013ddb30(void);
int sub_01e26b20(void);
extern undefined4 g_026da560;
// @baa 0x01e0c3e0
void sub_01e0c3e0(void)
{
  ((wxClassInfo *)((wxClassInfo *)&g_026da560))->wxClassInfo::wxClassInfo(L"WxDlgDockingEditor", (wxClassInfo *)(&wxDialog::ms_classInfo), (wxClassInfo *)0x0, 0x1a8, (wxObject *(__cdecl *)(void))(sub_013ddb30));
  sub_01a37872(&sub_01e26b20);
  return;
}
