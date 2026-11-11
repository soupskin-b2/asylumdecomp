// Core_1dd0000.cpp (part 24 of 42): 2 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

class wxEventHashTable;
struct wxEventTable;
class wxEventHashTable {
    public:
    public: __declspec(dllimport) wxEventHashTable(wxEventTable const &);
    friend void sub_01dd6dc0(void);
};

struct wxEventTable {
    public:
};

int sub_01a37872(...);
int sub_01e22a00(void);
extern undefined4 g_025d4f2c;
extern undefined4 g_02664c48;
// @baa 0x01dd6dc0
void sub_01dd6dc0(void)
{
  ((wxEventHashTable *)((wxEventHashTable *)&g_02664c48))->wxEventHashTable::wxEventHashTable(*(const wxEventTable *)((wxEventTable *)&g_025d4f2c));
  sub_01a37872(&sub_01e22a00);
  return;
}

class wxClassInfo;
class wxWindow;
class wxClassInfo {
    public:
    public: __declspec(dllimport) static wxClassInfo * sm_first;
    protected: __declspec(dllimport) void Register();
    friend void sub_01dd8e20(void);
};

class wxWindow {
    public:
    public: __declspec(dllimport) static wxClassInfo ms_classInfo;
    friend void sub_01dd8e20(void);
};

int sub_0053cff0(void);
int sub_01e22cd0(void);
extern undefined4 g_02665c5c;
extern undefined4 g_02665c60;
extern undefined4 g_02665c64;
extern undefined4 g_02665c68;
extern undefined4 g_02665c6c;
extern undefined4 g_02665c70;
// @baa 0x01dd8e20
void sub_01dd8e20(void)
{
  g_02665c68 = (undefined4)((&wxWindow::ms_classInfo));
  g_02665c5c = (undefined4)(L"FxWorkspaceWidget");
  g_02665c60 = 0x298;
  g_02665c64 = (undefined4)(sub_0053cff0);
  g_02665c6c = 0;
  g_02665c70 = *(undefined4 *)(&wxClassInfo::sm_first);
  *(undefined **)(&wxClassInfo::sm_first) = (undefined *)(&g_02665c5c);
  ((wxClassInfo *)((wxClassInfo *)&g_02665c5c))->wxClassInfo::Register();
  sub_01a37872(&sub_01e22cd0);
  return;
}
