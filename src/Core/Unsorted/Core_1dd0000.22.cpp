// Core_1dd0000.cpp (part 22 of 42): 2 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

class wxEventHashTable;
struct wxEventTable;
class wxEventHashTable {
    public:
    public: __declspec(dllimport) wxEventHashTable(wxEventTable const &);
    friend void sub_01dd69c0(void);
};

struct wxEventTable {
    public:
};

int sub_01a37872(...);
int sub_01e229d0(void);
extern undefined4 g_025d4f1c;
extern undefined4 g_0266567c;
// @baa 0x01dd69c0
void sub_01dd69c0(void)
{
  ((wxEventHashTable *)((wxEventHashTable *)&g_0266567c))->wxEventHashTable::wxEventHashTable(*(const wxEventTable *)((wxEventTable *)&g_025d4f1c));
  sub_01a37872(&sub_01e229d0);
  return;
}

class wxClassInfo;
class wxWindow;
class wxClassInfo {
    public:
    public: __declspec(dllimport) static wxClassInfo * sm_first;
    protected: __declspec(dllimport) void Register();
    friend void sub_01dd83f0(void);
};

class wxWindow {
    public:
    public: __declspec(dllimport) static wxClassInfo ms_classInfo;
    friend void sub_01dd83f0(void);
};

int sub_00531bb0(void);
int sub_01e22c30(void);
extern undefined4 g_02666560;
extern undefined4 g_02666564;
extern undefined4 g_02666568;
extern undefined4 g_0266656c;
extern undefined4 g_02666570;
extern undefined4 g_02666574;
// @baa 0x01dd83f0
void sub_01dd83f0(void)
{
  g_0266656c = (undefined4)((&wxWindow::ms_classInfo));
  g_02666560 = (undefined4)(L"FxTimelineWidget");
  g_02666564 = 0x180;
  g_02666568 = (undefined4)(sub_00531bb0);
  g_02666570 = 0;
  g_02666574 = *(undefined4 *)(&wxClassInfo::sm_first);
  *(undefined **)(&wxClassInfo::sm_first) = (undefined *)(&g_02666560);
  ((wxClassInfo *)((wxClassInfo *)&g_02666560))->wxClassInfo::Register();
  sub_01a37872(&sub_01e22c30);
  return;
}
