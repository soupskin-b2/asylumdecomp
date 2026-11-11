// Core_1dd0000.cpp (part 21 of 42): 2 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

class wxEventHashTable;
struct wxEventTable;
class wxEventHashTable {
    public:
    public: __declspec(dllimport) wxEventHashTable(wxEventTable const &);
    friend void sub_01dd6830(void);
};

struct wxEventTable {
    public:
};

int sub_01a37872(...);
int sub_01e229c0(void);
extern undefined4 g_025d4f5c;
extern undefined4 g_02664f5c;
// @baa 0x01dd6830
void sub_01dd6830(void)
{
  ((wxEventHashTable *)((wxEventHashTable *)&g_02664f5c))->wxEventHashTable::wxEventHashTable(*(const wxEventTable *)((wxEventTable *)&g_025d4f5c));
  sub_01a37872(&sub_01e229c0);
  return;
}

class wxClassInfo;
class wxWindow;
class wxClassInfo {
    public:
    public: __declspec(dllimport) static wxClassInfo * sm_first;
    protected: __declspec(dllimport) void Register();
    friend void sub_01dd7f40(void);
};

class wxWindow {
    public:
    public: __declspec(dllimport) static wxClassInfo ms_classInfo;
    friend void sub_01dd7f40(void);
};

int sub_0052fe50(void);
int sub_01e22bf0(void);
extern undefined4 g_02665f20;
extern undefined4 g_02665f24;
extern undefined4 g_02665f28;
extern undefined4 g_02665f2c;
extern undefined4 g_02665f30;
extern undefined4 g_02665f34;
// @baa 0x01dd7f40
void sub_01dd7f40(void)
{
  g_02665f2c = (undefined4)((&wxWindow::ms_classInfo));
  g_02665f20 = (undefined4)(L"FxCurrentTimeCtrl");
  g_02665f24 = 0x164;
  g_02665f28 = (undefined4)(sub_0052fe50);
  g_02665f30 = 0;
  g_02665f34 = *(undefined4 *)(&wxClassInfo::sm_first);
  *(undefined **)(&wxClassInfo::sm_first) = (undefined *)(&g_02665f20);
  ((wxClassInfo *)((wxClassInfo *)&g_02665f20))->wxClassInfo::Register();
  sub_01a37872(&sub_01e22bf0);
  return;
}
