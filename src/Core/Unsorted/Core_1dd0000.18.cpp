// Core_1dd0000.cpp (part 18 of 42): 2 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

class wxEventHashTable;
struct wxEventTable;
class wxEventHashTable {
    public:
    public: __declspec(dllimport) wxEventHashTable(wxEventTable const &);
    friend void sub_01dd5ea0(void);
};

struct wxEventTable {
    public:
};

int sub_01a37872(...);
int sub_01e228a0(void);
extern undefined4 g_025d4efc;
extern undefined4 g_02663e64;
// @baa 0x01dd5ea0
void sub_01dd5ea0(void)
{
  ((wxEventHashTable *)((wxEventHashTable *)&g_02663e64))->wxEventHashTable::wxEventHashTable(*(const wxEventTable *)((wxEventTable *)&g_025d4efc));
  sub_01a37872(&sub_01e228a0);
  return;
}

class wxClassInfo;
class wxWindow;
class wxClassInfo {
    public:
    public: __declspec(dllimport) static wxClassInfo * sm_first;
    protected: __declspec(dllimport) void Register();
    friend void sub_01dd71c0(void);
};

class wxWindow {
    public:
    public: __declspec(dllimport) static wxClassInfo ms_classInfo;
    friend void sub_01dd71c0(void);
};

int sub_0050e8c0(void);
int sub_01e22a40(void);
extern undefined4 g_02665664;
extern undefined4 g_02665668;
extern undefined4 g_0266566c;
extern undefined4 g_02665670;
extern undefined4 g_02665674;
extern undefined4 g_02665678;
// @baa 0x01dd71c0
void sub_01dd71c0(void)
{
  g_02665670 = (undefined4)((&wxWindow::ms_classInfo));
  g_02665664 = (undefined4)(L"FxPhonemeWidget");
  g_02665668 = 0x1a8;
  g_0266566c = (undefined4)(sub_0050e8c0);
  g_02665674 = 0;
  g_02665678 = *(undefined4 *)(&wxClassInfo::sm_first);
  *(undefined **)(&wxClassInfo::sm_first) = (undefined *)(&g_02665664);
  ((wxClassInfo *)((wxClassInfo *)&g_02665664))->wxClassInfo::Register();
  sub_01a37872(&sub_01e22a40);
  return;
}
