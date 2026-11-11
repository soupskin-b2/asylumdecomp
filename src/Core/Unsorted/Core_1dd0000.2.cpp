// Core_1dd0000.cpp (part 2 of 42): 2 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

class wxClassInfo;
class wxDialog;
class wxClassInfo {
    public:
    public: __declspec(dllimport) static wxClassInfo * sm_first;
    protected: __declspec(dllimport) void Register();
    friend void sub_01dd3920(void);
};

class wxDialog {
    public:
    public: __declspec(dllimport) static wxClassInfo ms_classInfo;
    friend void sub_01dd3920(void);
};

int sub_0043b0d0(void);
int sub_01a37872(...);
int sub_01e221a0(void);
extern undefined4 g_02618548;
extern undefined4 g_0261854c;
extern undefined4 g_02618550;
extern undefined4 g_02618554;
extern undefined4 g_02618558;
extern undefined4 g_0261855c;
// @baa 0x01dd3920
void sub_01dd3920(void)
{
  g_02618554 = (undefined4)((&wxDialog::ms_classInfo));
  g_02618548 = (undefined4)(L"FxLinkFnEditDlg");
  g_0261854c = 0x1e8;
  g_02618550 = (undefined4)(sub_0043b0d0);
  g_02618558 = 0;
  g_0261855c = *(undefined4 *)(&wxClassInfo::sm_first);
  *(undefined **)(&wxClassInfo::sm_first) = (undefined *)(&g_02618548);
  ((wxClassInfo *)((wxClassInfo *)&g_02618548))->wxClassInfo::Register();
  sub_01a37872(&sub_01e221a0);
  return;
}

class wxEventHashTable;
struct wxEventTable;
class wxEventHashTable {
    public:
    public: __declspec(dllimport) wxEventHashTable(wxEventTable const &);
    friend void sub_01dd3990(void);
};

struct wxEventTable {
    public:
};

int sub_01e221b0(void);
extern undefined4 g_025d4940;
extern undefined4 g_02618560;
// @baa 0x01dd3990
void sub_01dd3990(void)
{
  ((wxEventHashTable *)((wxEventHashTable *)&g_02618560))->wxEventHashTable::wxEventHashTable(*(const wxEventTable *)((wxEventTable *)&g_025d4940));
  sub_01a37872(&sub_01e221b0);
  return;
}
