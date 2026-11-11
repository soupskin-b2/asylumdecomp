// Core_1dd0000.cpp (part 25 of 42): 2 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

class wxEventHashTable;
struct wxEventTable;
class wxEventHashTable {
    public:
    public: __declspec(dllimport) wxEventHashTable(wxEventTable const &);
    friend void sub_01dd6ed0(void);
};

struct wxEventTable {
    public:
};

int sub_01a37872(...);
int sub_01e22a20(void);
extern undefined4 g_025d4f34;
extern undefined4 g_02664c60;
// @baa 0x01dd6ed0
void sub_01dd6ed0(void)
{
  ((wxEventHashTable *)((wxEventHashTable *)&g_02664c60))->wxEventHashTable::wxEventHashTable(*(const wxEventTable *)((wxEventTable *)&g_025d4f34));
  sub_01a37872(&sub_01e22a20);
  return;
}

class wxClassInfo;
class wxWindow;
class wxClassInfo {
    public:
    public: __declspec(dllimport) static wxClassInfo * sm_first;
    protected: __declspec(dllimport) void Register();
    friend void sub_01dd9360(void);
};

class wxWindow {
    public:
    public: __declspec(dllimport) static wxClassInfo ms_classInfo;
    friend void sub_01dd9360(void);
};

int sub_005394f0(void);
int sub_01e22cf0(void);
extern undefined4 g_02666094;
extern undefined4 g_02666098;
extern undefined4 g_0266609c;
extern undefined4 g_026660a0;
extern undefined4 g_026660a4;
extern undefined4 g_026660a8;
// @baa 0x01dd9360
void sub_01dd9360(void)
{
  g_026660a0 = (undefined4)((&wxWindow::ms_classInfo));
  g_02666094 = (undefined4)(L"FxWorkspaceInstanceWidget");
  g_02666098 = 0x1e8;
  g_0266609c = (undefined4)(sub_005394f0);
  g_026660a4 = 0;
  g_026660a8 = *(undefined4 *)(&wxClassInfo::sm_first);
  *(undefined **)(&wxClassInfo::sm_first) = (undefined *)(&g_02666094);
  ((wxClassInfo *)((wxClassInfo *)&g_02666094))->wxClassInfo::Register();
  sub_01a37872(&sub_01e22cf0);
  return;
}
