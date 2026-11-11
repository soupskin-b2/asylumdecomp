// Core_1dd0000.cpp (part 16 of 42): 2 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

class wxEventHashTable;
struct wxEventTable;
class wxEventHashTable {
    public:
    public: __declspec(dllimport) wxEventHashTable(wxEventTable const &);
    friend void sub_01dd5610(void);
};

struct wxEventTable {
    public:
};

int sub_01a37872(...);
int sub_01e22860(void);
extern undefined4 g_025d4ee4;
extern undefined4 g_026641f4;
// @baa 0x01dd5610
void sub_01dd5610(void)
{
  ((wxEventHashTable *)((wxEventHashTable *)&g_026641f4))->wxEventHashTable::wxEventHashTable(*(const wxEventTable *)((wxEventTable *)&g_025d4ee4));
  sub_01a37872(&sub_01e22860);
  return;
}

class wxClassInfo;
class wxWindow;
class wxClassInfo {
    public:
    public: __declspec(dllimport) static wxClassInfo * sm_first;
    protected: __declspec(dllimport) void Register();
    friend void sub_01dd6bb0(void);
};

class wxWindow {
    public:
    public: __declspec(dllimport) static wxClassInfo ms_classInfo;
    friend void sub_01dd6bb0(void);
};

int sub_005103c0(void);
int sub_01e229e0(void);
extern undefined4 g_026656f4;
extern undefined4 g_026656f8;
extern undefined4 g_026656fc;
extern undefined4 g_02665700;
extern undefined4 g_02665704;
extern undefined4 g_02665708;
// @baa 0x01dd6bb0
void sub_01dd6bb0(void)
{
  g_02665700 = (undefined4)((&wxWindow::ms_classInfo));
  g_026656f4 = (undefined4)(L"FxGestureWidget");
  g_026656f8 = 0x574;
  g_026656fc = (undefined4)(sub_005103c0);
  g_02665704 = 0;
  g_02665708 = *(undefined4 *)(&wxClassInfo::sm_first);
  *(undefined **)(&wxClassInfo::sm_first) = (undefined *)(&g_026656f4);
  ((wxClassInfo *)((wxClassInfo *)&g_026656f4))->wxClassInfo::Register();
  sub_01a37872(&sub_01e229e0);
  return;
}
