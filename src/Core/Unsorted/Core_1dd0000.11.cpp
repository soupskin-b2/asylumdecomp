// Core_1dd0000.cpp (part 11 of 42): 2 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

class wxEventHashTable;
struct wxEventTable;
class wxEventHashTable {
    public:
    public: __declspec(dllimport) wxEventHashTable(wxEventTable const &);
    friend void sub_01dd4ad0(void);
};

struct wxEventTable {
    public:
};

int sub_01a37872(...);
int sub_01e22720(void);
extern undefined4 g_025d4edc;
extern undefined4 g_02664898;
// @baa 0x01dd4ad0
void sub_01dd4ad0(void)
{
  ((wxEventHashTable *)((wxEventHashTable *)&g_02664898))->wxEventHashTable::wxEventHashTable(*(const wxEventTable *)((wxEventTable *)&g_025d4edc));
  sub_01a37872(&sub_01e22720);
  return;
}

class wxClassInfo;
class wxWindow;
class wxClassInfo {
    public:
    public: __declspec(dllimport) static wxClassInfo * sm_first;
    protected: __declspec(dllimport) void Register();
    friend void sub_01dd55a0(void);
};

class wxWindow {
    public:
    public: __declspec(dllimport) static wxClassInfo ms_classInfo;
    friend void sub_01dd55a0(void);
};

int sub_004e5380(void);
int sub_01e22850(void);
extern undefined4 g_02664bcc;
extern undefined4 g_02664bd0;
extern undefined4 g_02664bd4;
extern undefined4 g_02664bd8;
extern undefined4 g_02664bdc;
extern undefined4 g_02664be0;
// @baa 0x01dd55a0
void sub_01dd55a0(void)
{
  g_02664bd8 = (undefined4)((&wxWindow::ms_classInfo));
  g_02664bcc = (undefined4)(L"FxCoarticulationWidget");
  g_02664bd0 = 0x1d4;
  g_02664bd4 = (undefined4)(sub_004e5380);
  g_02664bdc = 0;
  g_02664be0 = *(undefined4 *)(&wxClassInfo::sm_first);
  *(undefined **)(&wxClassInfo::sm_first) = (undefined *)(&g_02664bcc);
  ((wxClassInfo *)((wxClassInfo *)&g_02664bcc))->wxClassInfo::Register();
  sub_01a37872(&sub_01e22850);
  return;
}
