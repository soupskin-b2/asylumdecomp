// Core_1dd0000.cpp (part 14 of 42): 2 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

class wxEventHashTable;
struct wxEventTable;
class wxEventHashTable {
    public:
    public: __declspec(dllimport) wxEventHashTable(wxEventTable const &);
    friend void sub_01dd4f90(void);
};

struct wxEventTable {
    public:
};

int sub_01a37872(...);
int sub_01e22800(void);
extern undefined4 g_025d4f0c;
extern undefined4 g_026641ac;
// @baa 0x01dd4f90
void sub_01dd4f90(void)
{
  ((wxEventHashTable *)((wxEventHashTable *)&g_026641ac))->wxEventHashTable::wxEventHashTable(*(const wxEventTable *)((wxEventTable *)&g_025d4f0c));
  sub_01a37872(&sub_01e22800);
  return;
}

class wxClassInfo;
class wxGrid;
class wxClassInfo {
    public:
    public: __declspec(dllimport) static wxClassInfo * sm_first;
    protected: __declspec(dllimport) void Register();
    friend void sub_01dd5fa0(void);
};

class wxGrid {
    public:
    public: __declspec(dllimport) static wxClassInfo ms_classInfo;
    friend void sub_01dd5fa0(void);
};

int sub_004df270(void);
int sub_01e228b0(void);
extern undefined4 g_026641dc;
extern undefined4 g_026641e0;
extern undefined4 g_026641e4;
extern undefined4 g_026641e8;
extern undefined4 g_026641ec;
extern undefined4 g_026641f0;
// @baa 0x01dd5fa0
void sub_01dd5fa0(void)
{
  g_026641e8 = (undefined4)((&wxGrid::ms_classInfo));
  g_026641dc = (undefined4)(L"FxNodeLinkPropertiesWidget");
  g_026641e0 = 0x3b0;
  g_026641e4 = (undefined4)(sub_004df270);
  g_026641ec = 0;
  g_026641f0 = *(undefined4 *)(&wxClassInfo::sm_first);
  *(undefined **)(&wxClassInfo::sm_first) = (undefined *)(&g_026641dc);
  ((wxClassInfo *)((wxClassInfo *)&g_026641dc))->wxClassInfo::Register();
  sub_01a37872(&sub_01e228b0);
  return;
}
