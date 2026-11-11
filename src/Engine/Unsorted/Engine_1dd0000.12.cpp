// Engine_1dd0000.cpp (part 12 of 28): 2 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

class wxEventHashTable;
struct wxEventTable;
class wxEventHashTable {
    public:
    public: __declspec(dllimport) wxEventHashTable(wxEventTable const &);
    friend void sub_01dd1fc0(void);
};

struct wxEventTable {
    public:
};

int sub_01a37872(...);
int sub_01e21fa0(void);
extern undefined4 g_025d4948;
extern undefined4 g_02617e68;
// @baa 0x01dd1fc0
void sub_01dd1fc0(void)
{
  ((wxEventHashTable *)((wxEventHashTable *)&g_02617e68))->wxEventHashTable::wxEventHashTable(*(const wxEventTable *)((wxEventTable *)&g_025d4948));
  sub_01a37872(&sub_01e21fa0);
  return;
}

class wxClassInfo;
class wxWindow;
class wxClassInfo {
    public:
    public: __declspec(dllimport) static wxClassInfo * sm_first;
    protected: __declspec(dllimport) void Register();
    friend void sub_01dd2cb0(void);
};

class wxWindow {
    public:
    public: __declspec(dllimport) static wxClassInfo ms_classInfo;
    friend void sub_01dd2cb0(void);
};

int sub_0043a7d0(void);
int sub_01e220a0(void);
extern undefined4 g_026181f0;
extern undefined4 g_026181f4;
extern undefined4 g_026181f8;
extern undefined4 g_026181fc;
extern undefined4 g_02618200;
extern undefined4 g_02618204;
// @baa 0x01dd2cb0
void sub_01dd2cb0(void)
{
  g_026181fc = (undefined4)((&wxWindow::ms_classInfo));
  g_026181f0 = (undefined4)(L"FxDropButton");
  g_026181f4 = 0x1a0;
  g_026181f8 = (undefined4)(sub_0043a7d0);
  g_02618200 = 0;
  g_02618204 = *(undefined4 *)(&wxClassInfo::sm_first);
  *(undefined **)(&wxClassInfo::sm_first) = (undefined *)(&g_026181f0);
  ((wxClassInfo *)((wxClassInfo *)&g_026181f0))->wxClassInfo::Register();
  sub_01a37872(&sub_01e220a0);
  return;
}
