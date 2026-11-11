// Core_1dd0000.cpp (part 12 of 42): 2 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

class wxEventHashTable;
struct wxEventTable;
class wxEventHashTable {
    public:
    public: __declspec(dllimport) wxEventHashTable(wxEventTable const &);
    friend void sub_01dd4ba0(void);
};

struct wxEventTable {
    public:
};

int sub_01a37872(...);
int sub_01e22740(void);
extern undefined4 g_01e5a790;
extern undefined4 g_026648c8;
// @baa 0x01dd4ba0
void sub_01dd4ba0(void)
{
  ((wxEventHashTable *)((wxEventHashTable *)&g_026648c8))->wxEventHashTable::wxEventHashTable(*(const wxEventTable *)((wxEventTable *)&g_01e5a790));
  sub_01a37872(&sub_01e22740);
  return;
}

class wxClassInfo;
class wxWindow;
class wxClassInfo {
    public:
    public: __declspec(dllimport) static wxClassInfo * sm_first;
    protected: __declspec(dllimport) void Register();
    friend void sub_01dd5820(void);
};

class wxWindow {
    public:
    public: __declspec(dllimport) static wxClassInfo ms_classInfo;
    friend void sub_01dd5820(void);
};

int sub_004e0b20(void);
int sub_01e22870(void);
extern undefined4 g_02663e7c;
extern undefined4 g_02663e80;
extern undefined4 g_02663e84;
extern undefined4 g_02663e88;
extern undefined4 g_02663e8c;
extern undefined4 g_02663e90;
// @baa 0x01dd5820
void sub_01dd5820(void)
{
  g_02663e88 = (undefined4)((&wxWindow::ms_classInfo));
  g_02663e7c = (undefined4)(L"FxCurveWidget");
  g_02663e80 = 0x27c;
  g_02663e84 = (undefined4)(sub_004e0b20);
  g_02663e8c = 0;
  g_02663e90 = *(undefined4 *)(&wxClassInfo::sm_first);
  *(undefined **)(&wxClassInfo::sm_first) = (undefined *)(&g_02663e7c);
  ((wxClassInfo *)((wxClassInfo *)&g_02663e7c))->wxClassInfo::Register();
  sub_01a37872(&sub_01e22870);
  return;
}
