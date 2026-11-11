// Core_1dd0000.cpp (part 5 of 42): 2 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

class wxEventHashTable;
struct wxEventTable;
class wxEventHashTable {
    public:
    public: __declspec(dllimport) wxEventHashTable(wxEventTable const &);
    friend void sub_01dd3ea0(void);
};

struct wxEventTable {
    public:
};

int sub_01a37872(...);
int sub_01e222a0(void);
extern undefined4 g_025d4e30;
extern undefined4 g_026638b0;
// @baa 0x01dd3ea0
void sub_01dd3ea0(void)
{
  ((wxEventHashTable *)((wxEventHashTable *)&g_026638b0))->wxEventHashTable::wxEventHashTable(*(const wxEventTable *)((wxEventTable *)&g_025d4e30));
  sub_01a37872(&sub_01e222a0);
  return;
}

class wxClassInfo;
class wxDialog;
class wxClassInfo {
    public:
    public: __declspec(dllimport) static wxClassInfo * sm_first;
    protected: __declspec(dllimport) void Register();
    friend void sub_01dd42a0(void);
};

class wxDialog {
    public:
    public: __declspec(dllimport) static wxClassInfo ms_classInfo;
    friend void sub_01dd42a0(void);
};

int sub_004874b0(void);
int sub_01e222e0(void);
extern undefined4 g_0266396c;
extern undefined4 g_02663970;
extern undefined4 g_02663974;
extern undefined4 g_02663978;
extern undefined4 g_0266397c;
extern undefined4 g_02663980;
// @baa 0x01dd42a0
void sub_01dd42a0(void)
{
  g_02663978 = (undefined4)((&wxDialog::ms_classInfo));
  g_0266396c = (undefined4)(L"FxCGConfigChooser");
  g_02663970 = 0x1b0;
  g_02663974 = (undefined4)(sub_004874b0);
  g_0266397c = 0;
  g_02663980 = *(undefined4 *)(&wxClassInfo::sm_first);
  *(undefined **)(&wxClassInfo::sm_first) = (undefined *)(&g_0266396c);
  ((wxClassInfo *)((wxClassInfo *)&g_0266396c))->wxClassInfo::Register();
  sub_01a37872(&sub_01e222e0);
  return;
}
