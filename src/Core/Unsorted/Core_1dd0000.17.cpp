// Core_1dd0000.cpp (part 17 of 42): 2 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

class wxEventHashTable;
struct wxEventTable;
class wxEventHashTable {
    public:
    public: __declspec(dllimport) wxEventHashTable(wxEventTable const &);
    friend void sub_01dd5890(void);
};

struct wxEventTable {
    public:
};

int sub_01a37872(...);
int sub_01e22880(void);
extern undefined4 g_025d4ef4;
extern undefined4 g_02663e10;
// @baa 0x01dd5890
void sub_01dd5890(void)
{
  ((wxEventHashTable *)((wxEventHashTable *)&g_02663e10))->wxEventHashTable::wxEventHashTable(*(const wxEventTable *)((wxEventTable *)&g_025d4ef4));
  sub_01a37872(&sub_01e22880);
  return;
}

class wxClassInfo;
class wxGrid;
class wxClassInfo {
    public:
    public: __declspec(dllimport) static wxClassInfo * sm_first;
    protected: __declspec(dllimport) void Register();
    friend void sub_01dd6e60(void);
};

class wxGrid {
    public:
    public: __declspec(dllimport) static wxClassInfo ms_classInfo;
    friend void sub_01dd6e60(void);
};

int sub_004f6e50(...);
int sub_01e22a10(void);
extern undefined4 g_026653f4;
extern undefined4 g_026653f8;
extern undefined4 g_026653fc;
extern undefined4 g_02665400;
extern undefined4 g_02665404;
extern undefined4 g_02665408;
// @baa 0x01dd6e60
void sub_01dd6e60(void)
{
  g_02665400 = (undefined4)((&wxGrid::ms_classInfo));
  g_026653f4 = (undefined4)(L"FxMappingWidget");
  g_026653f8 = 0x3ac;
  g_026653fc = (undefined4)(&sub_004f6e50);
  g_02665404 = 0;
  g_02665408 = *(undefined4 *)(&wxClassInfo::sm_first);
  *(undefined **)(&wxClassInfo::sm_first) = (undefined *)(&g_026653f4);
  ((wxClassInfo *)((wxClassInfo *)&g_026653f4))->wxClassInfo::Register();
  sub_01a37872(&sub_01e22a10);
  return;
}
