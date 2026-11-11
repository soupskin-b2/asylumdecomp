// Core_1dd0000.cpp (part 13 of 42): 2 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

class wxEventHashTable;
struct wxEventTable;
class wxEventHashTable {
    public:
    public: __declspec(dllimport) wxEventHashTable(wxEventTable const &);
    friend void sub_01dd4d60(void);
};

struct wxEventTable {
    public:
};

int sub_01a37872(...);
int sub_01e22760(void);
extern undefined4 g_01e5aba4;
extern undefined4 g_026647e0;
// @baa 0x01dd4d60
void sub_01dd4d60(void)
{
  ((wxEventHashTable *)((wxEventHashTable *)&g_026647e0))->wxEventHashTable::wxEventHashTable(*(const wxEventTable *)((wxEventTable *)&g_01e5aba4));
  sub_01a37872(&sub_01e22760);
  return;
}

class wxClassInfo;
class wxGrid;
class wxClassInfo {
    public:
    public: __declspec(dllimport) static wxClassInfo * sm_first;
    protected: __declspec(dllimport) void Register();
    friend void sub_01dd5e30(void);
};

class wxGrid {
    public:
    public: __declspec(dllimport) static wxClassInfo ms_classInfo;
    friend void sub_01dd5e30(void);
};

int sub_004df120(void);
int sub_01e22890(void);
extern undefined4 g_026648e0;
extern undefined4 g_026648e4;
extern undefined4 g_026648e8;
extern undefined4 g_026648ec;
extern undefined4 g_026648f0;
extern undefined4 g_026648f4;
// @baa 0x01dd5e30
void sub_01dd5e30(void)
{
  g_026648ec = (undefined4)((&wxGrid::ms_classInfo));
  g_026648e0 = (undefined4)(L"FxNodePropertiesWidget");
  g_026648e4 = 0x3a8;
  g_026648e8 = (undefined4)(sub_004df120);
  g_026648f0 = 0;
  g_026648f4 = *(undefined4 *)(&wxClassInfo::sm_first);
  *(undefined **)(&wxClassInfo::sm_first) = (undefined *)(&g_026648e0);
  ((wxClassInfo *)((wxClassInfo *)&g_026648e0))->wxClassInfo::Register();
  sub_01a37872(&sub_01e22890);
  return;
}
