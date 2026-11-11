// Core_1dd0000.cpp (part 15 of 42): 2 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

class wxEventHashTable;
struct wxEventTable;
class wxEventHashTable {
    public:
    public: __declspec(dllimport) wxEventHashTable(wxEventTable const &);
    friend void sub_01dd5300(void);
};

struct wxEventTable {
    public:
};

int sub_01a37872(...);
int sub_01e22820(void);
extern undefined4 g_025d4f04;
extern undefined4 g_026644b0;
// @baa 0x01dd5300
void sub_01dd5300(void)
{
  ((wxEventHashTable *)((wxEventHashTable *)&g_026644b0))->wxEventHashTable::wxEventHashTable(*(const wxEventTable *)((wxEventTable *)&g_025d4f04));
  sub_01a37872(&sub_01e22820);
  return;
}

class wxClassInfo;
class wxWindow;
class wxClassInfo {
    public:
    public: __declspec(dllimport) static wxClassInfo * sm_first;
    protected: __declspec(dllimport) void Register();
    friend void sub_01dd6260(void);
};

class wxWindow {
    public:
    public: __declspec(dllimport) static wxClassInfo ms_classInfo;
    friend void sub_01dd6260(void);
};

int sub_0050e570(void);
int sub_01e22990(...);
extern undefined4 g_026656dc;
extern undefined4 g_026656e0;
extern undefined4 g_026656e4;
extern undefined4 g_026656e8;
extern undefined4 g_026656ec;
extern undefined4 g_026656f0;
// @baa 0x01dd6260
void sub_01dd6260(void)
{
  g_026656e8 = (undefined4)((&wxWindow::ms_classInfo));
  g_026656dc = (undefined4)(L"FxFaceGraphWidget");
  g_026656e0 = 0x334;
  g_026656e4 = (undefined4)(sub_0050e570);
  g_026656ec = 0;
  g_026656f0 = *(undefined4 *)(&wxClassInfo::sm_first);
  *(undefined **)(&wxClassInfo::sm_first) = (undefined *)(&g_026656dc);
  ((wxClassInfo *)((wxClassInfo *)&g_026656dc))->wxClassInfo::Register();
  sub_01a37872(&sub_01e22990);
  return;
}
