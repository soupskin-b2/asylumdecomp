// Engine_1dd0000.cpp (part 13 of 28): 2 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

class wxEventHashTable;
struct wxEventTable;
class wxEventHashTable {
    public:
    public: __declspec(dllimport) wxEventHashTable(wxEventTable const &);
    friend void sub_01dd20c0(void);
};

struct wxEventTable {
    public:
};

int sub_01a37872(...);
int sub_01e21fb0(void);
extern undefined4 g_025d4918;
extern undefined4 g_02618578;
// @baa 0x01dd20c0
void sub_01dd20c0(void)
{
  ((wxEventHashTable *)((wxEventHashTable *)&g_02618578))->wxEventHashTable::wxEventHashTable(*(const wxEventTable *)((wxEventTable *)&g_025d4918));
  sub_01a37872(&sub_01e21fb0);
  return;
}

class wxClassInfo;
class wxScrolledWindow;
class wxClassInfo {
    public:
    public: __declspec(dllimport) static wxClassInfo * sm_first;
    protected: __declspec(dllimport) void Register();
    friend void sub_01dd3250(void);
};

class wxScrolledWindow {
    public:
    public: __declspec(dllimport) static wxClassInfo ms_classInfo;
    friend void sub_01dd3250(void);
};

int sub_00454e50(void);
int sub_01e22130(void);
extern undefined4 g_02617a50;
extern undefined4 g_02617a54;
extern undefined4 g_02617a58;
extern undefined4 g_02617a5c;
extern undefined4 g_02617a60;
extern undefined4 g_02617a64;
// @baa 0x01dd3250
void sub_01dd3250(void)
{
  g_02617a5c = (undefined4)((&wxScrolledWindow::ms_classInfo));
  g_02617a50 = (undefined4)(L"FxExpandableWindowContainer");
  g_02617a54 = 0x1c4;
  g_02617a58 = (undefined4)(sub_00454e50);
  g_02617a60 = 0;
  g_02617a64 = *(undefined4 *)(&wxClassInfo::sm_first);
  *(undefined **)(&wxClassInfo::sm_first) = (undefined *)(&g_02617a50);
  ((wxClassInfo *)((wxClassInfo *)&g_02617a50))->wxClassInfo::Register();
  sub_01a37872(&sub_01e22130);
  return;
}
