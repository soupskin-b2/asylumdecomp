// Core_1dd0000.cpp (part 4 of 42): 2 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

class wxEventHashTable;
struct wxEventTable;
class wxEventHashTable {
    public:
    public: __declspec(dllimport) wxEventHashTable(wxEventTable const &);
    friend void sub_01dd3c20(void);
};

struct wxEventTable {
    public:
};

int sub_01a37872(...);
int sub_01e221f0(void);
extern undefined4 g_025d4920;
extern undefined4 g_02617e50;
// @baa 0x01dd3c20
void sub_01dd3c20(void)
{
  ((wxEventHashTable *)((wxEventHashTable *)&g_02617e50))->wxEventHashTable::wxEventHashTable(*(const wxEventTable *)((wxEventTable *)&g_025d4920));
  sub_01a37872(&sub_01e221f0);
  return;
}

class wxClassInfo;
class wxWindow;
class wxClassInfo {
    public:
    public: __declspec(dllimport) static wxClassInfo * sm_first;
    protected: __declspec(dllimport) void Register();
    friend void sub_01dd3e30(void);
};

class wxWindow {
    public:
    public: __declspec(dllimport) static wxClassInfo ms_classInfo;
    friend void sub_01dd3e30(void);
};

int sub_00466320(void);
int sub_01e22290(...);
extern undefined4 g_026639f0;
extern undefined4 g_026639f4;
extern undefined4 g_026639f8;
extern undefined4 g_026639fc;
extern undefined4 g_02663a00;
extern undefined4 g_02663a04;
// @baa 0x01dd3e30
void sub_01dd3e30(void)
{
  g_026639fc = (undefined4)((&wxWindow::ms_classInfo));
  g_026639f0 = (undefined4)(L"FxSlider");
  g_026639f4 = 0x164;
  g_026639f8 = (undefined4)(sub_00466320);
  g_02663a00 = 0;
  g_02663a04 = *(undefined4 *)(&wxClassInfo::sm_first);
  *(undefined **)(&wxClassInfo::sm_first) = (undefined *)(&g_026639f0);
  ((wxClassInfo *)((wxClassInfo *)&g_026639f0))->wxClassInfo::Register();
  sub_01a37872(&sub_01e22290);
  return;
}
