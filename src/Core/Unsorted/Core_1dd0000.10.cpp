// Core_1dd0000.cpp (part 10 of 42): 2 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

class wxEventHashTable;
struct wxEventTable;
class wxEventHashTable {
    public:
    public: __declspec(dllimport) wxEventHashTable(wxEventTable const &);
    friend void sub_01dd48b0(void);
};

struct wxEventTable {
    public:
};

int sub_01a37872(...);
int sub_01e22710(void);
extern undefined4 g_01e5a61c;
extern undefined4 g_02664a04;
// @baa 0x01dd48b0
void sub_01dd48b0(void)
{
  ((wxEventHashTable *)((wxEventHashTable *)&g_02664a04))->wxEventHashTable::wxEventHashTable(*(const wxEventTable *)((wxEventTable *)&g_01e5a61c));
  sub_01a37872(&sub_01e22710);
  return;
}

class wxClassInfo;
class wxWindow;
class wxClassInfo {
    public:
    public: __declspec(dllimport) static wxClassInfo * sm_first;
    protected: __declspec(dllimport) void Register();
    friend void sub_01dd4f20(void);
};

class wxWindow {
    public:
    public: __declspec(dllimport) static wxClassInfo ms_classInfo;
    friend void sub_01dd4f20(void);
};

int sub_004e73f0(void);
int sub_01e227f0(void);
extern undefined4 g_02663e4c;
extern undefined4 g_02663e50;
extern undefined4 g_02663e54;
extern undefined4 g_02663e58;
extern undefined4 g_02663e5c;
extern undefined4 g_02663e60;
// @baa 0x01dd4f20
void sub_01dd4f20(void)
{
  g_02663e58 = (undefined4)((&wxWindow::ms_classInfo));
  g_02663e4c = (undefined4)(L"FxAudioWidget");
  g_02663e50 = 0xac0;
  g_02663e54 = (undefined4)(sub_004e73f0);
  g_02663e5c = 0;
  g_02663e60 = *(undefined4 *)(&wxClassInfo::sm_first);
  *(undefined **)(&wxClassInfo::sm_first) = (undefined *)(&g_02663e4c);
  ((wxClassInfo *)((wxClassInfo *)&g_02663e4c))->wxClassInfo::Register();
  sub_01a37872(&sub_01e227f0);
  return;
}
