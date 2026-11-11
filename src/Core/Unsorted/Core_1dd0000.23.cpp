// Core_1dd0000.cpp (part 23 of 42): 2 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

class wxEventHashTable;
struct wxEventTable;
class wxEventHashTable {
    public:
    public: __declspec(dllimport) wxEventHashTable(wxEventTable const &);
    friend void sub_01dd6c20(void);
};

struct wxEventTable {
    public:
};

int sub_01a37872(...);
int sub_01e229f0(void);
extern undefined4 g_025d4f3c;
extern undefined4 g_02664ce0;
// @baa 0x01dd6c20
void sub_01dd6c20(void)
{
  ((wxEventHashTable *)((wxEventHashTable *)&g_02664ce0))->wxEventHashTable::wxEventHashTable(*(const wxEventTable *)((wxEventTable *)&g_025d4f3c));
  sub_01a37872(&sub_01e229f0);
  return;
}

class wxClassInfo;
class wxWindow;
class wxClassInfo {
    public:
    public: __declspec(dllimport) static wxClassInfo * sm_first;
    protected: __declspec(dllimport) void Register();
    friend void sub_01dd88b0(void);
};

class wxWindow {
    public:
    public: __declspec(dllimport) static wxClassInfo ms_classInfo;
    friend void sub_01dd88b0(void);
};

int sub_00534490(void);
int sub_01e22c90(void);
extern undefined4 g_026660ac;
extern undefined4 g_026660b0;
extern undefined4 g_026660b4;
extern undefined4 g_026660b8;
extern undefined4 g_026660bc;
extern undefined4 g_026660c0;
// @baa 0x01dd88b0
void sub_01dd88b0(void)
{
  g_026660b8 = (undefined4)((&wxWindow::ms_classInfo));
  g_026660ac = (undefined4)(L"FxWorkspaceEditWidget");
  g_026660b0 = 0x31c;
  g_026660b4 = (undefined4)(sub_00534490);
  g_026660bc = 0;
  g_026660c0 = *(undefined4 *)(&wxClassInfo::sm_first);
  *(undefined **)(&wxClassInfo::sm_first) = (undefined *)(&g_026660ac);
  ((wxClassInfo *)((wxClassInfo *)&g_026660ac))->wxClassInfo::Register();
  sub_01a37872(&sub_01e22c90);
  return;
}
