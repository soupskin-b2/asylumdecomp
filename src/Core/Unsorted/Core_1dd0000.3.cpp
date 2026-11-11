// Core_1dd0000.cpp (part 3 of 42): 2 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

class wxEventHashTable;
struct wxEventTable;
class wxEventHashTable {
    public:
    public: __declspec(dllimport) wxEventHashTable(wxEventTable const &);
    friend void sub_01dd3ab0(void);
};

struct wxEventTable {
    public:
};

int sub_01a37872(...);
int sub_01e221c0(void);
extern undefined4 g_025d4978;
extern undefined4 g_02617d44;
// @baa 0x01dd3ab0
void sub_01dd3ab0(void)
{
  ((wxEventHashTable *)((wxEventHashTable *)&g_02617d44))->wxEventHashTable::wxEventHashTable(*(const wxEventTable *)((wxEventTable *)&g_025d4978));
  sub_01a37872(&sub_01e221c0);
  return;
}

class wxClassInfo;
class wxDialog;
class wxClassInfo {
    public:
    public: __declspec(dllimport) static wxClassInfo * sm_first;
    protected: __declspec(dllimport) void Register();
    friend void sub_01dd3bb0(void);
};

class wxDialog {
    public:
    public: __declspec(dllimport) static wxClassInfo ms_classInfo;
    friend void sub_01dd3bb0(void);
};

int sub_0044d1d0(void);
int sub_01e221e0(void);
extern undefined4 g_026181d8;
extern undefined4 g_026181dc;
extern undefined4 g_026181e0;
extern undefined4 g_026181e4;
extern undefined4 g_026181e8;
extern undefined4 g_026181ec;
// @baa 0x01dd3bb0
void sub_01dd3bb0(void)
{
  g_026181e4 = (undefined4)((&wxDialog::ms_classInfo));
  g_026181d8 = (undefined4)(L"FxReanalyzeSelectionDialog");
  g_026181dc = 0x1f0;
  g_026181e0 = (undefined4)(sub_0044d1d0);
  g_026181e8 = 0;
  g_026181ec = *(undefined4 *)(&wxClassInfo::sm_first);
  *(undefined **)(&wxClassInfo::sm_first) = (undefined *)(&g_026181d8);
  ((wxClassInfo *)((wxClassInfo *)&g_026181d8))->wxClassInfo::Register();
  sub_01a37872(&sub_01e221e0);
  return;
}
