// Core_1dd0000.cpp (part 20 of 42): 2 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

class wxEventHashTable;
struct wxEventTable;
class wxEventHashTable {
    public:
    public: __declspec(dllimport) wxEventHashTable(wxEventTable const &);
    friend void sub_01dd62d0(void);
};

struct wxEventTable {
    public:
};

int sub_01a37872(...);
int sub_01e229a0(void);
extern undefined4 g_025d4f54;
extern undefined4 g_02664cf8;
// @baa 0x01dd62d0
void sub_01dd62d0(void)
{
  ((wxEventHashTable *)((wxEventHashTable *)&g_02664cf8))->wxEventHashTable::wxEventHashTable(*(const wxEventTable *)((wxEventTable *)&g_025d4f54));
  sub_01a37872(&sub_01e229a0);
  return;
}

class wxClassInfo;
class wxWindow;
class wxClassInfo {
    public:
    public: __declspec(dllimport) static wxClassInfo * sm_first;
    protected: __declspec(dllimport) void Register();
    friend void sub_01dd7af0(void);
};

class wxWindow {
    public:
    public: __declspec(dllimport) static wxClassInfo ms_classInfo;
    friend void sub_01dd7af0(void);
};

int sub_0051c6a0(void);
int sub_01e22bb0(...);
extern undefined4 g_026660c4;
extern undefined4 g_026660c8;
extern undefined4 g_026660cc;
extern undefined4 g_026660d0;
extern undefined4 g_026660d4;
extern undefined4 g_026660d8;
// @baa 0x01dd7af0
void sub_01dd7af0(void)
{
  g_026660d0 = (undefined4)((&wxWindow::ms_classInfo));
  g_026660c4 = (undefined4)(L"FxTimeWindowCtrl");
  g_026660c8 = 0x160;
  g_026660cc = (undefined4)(sub_0051c6a0);
  g_026660d4 = 0;
  g_026660d8 = *(undefined4 *)(&wxClassInfo::sm_first);
  *(undefined **)(&wxClassInfo::sm_first) = (undefined *)(&g_026660c4);
  ((wxClassInfo *)((wxClassInfo *)&g_026660c4))->wxClassInfo::Register();
  sub_01a37872(&sub_01e22bb0);
  return;
}
