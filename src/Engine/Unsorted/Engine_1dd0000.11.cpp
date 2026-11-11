// Engine_1dd0000.cpp (part 11 of 28): 2 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

class wxEventHashTable;
struct wxEventTable;
class wxEventHashTable {
    public:
    public: __declspec(dllimport) wxEventHashTable(wxEventTable const &);
    friend void sub_01dd1ee0(void);
};

struct wxEventTable {
    public:
};

int sub_01a37872(...);
int sub_01e21f80(void);
extern undefined4 g_025d4988;
extern undefined4 g_026183c0;
// @baa 0x01dd1ee0
void sub_01dd1ee0(void)
{
  ((wxEventHashTable *)((wxEventHashTable *)&g_026183c0))->wxEventHashTable::wxEventHashTable(*(const wxEventTable *)((wxEventTable *)&g_025d4988));
  sub_01a37872(&sub_01e21f80);
  return;
}

class wxClassInfo;
class wxDialog;
class wxClassInfo {
    public:
    public: __declspec(dllimport) static wxClassInfo * sm_first;
    protected: __declspec(dllimport) void Register();
    friend void sub_01dd2b90(void);
};

class wxDialog {
    public:
    public: __declspec(dllimport) static wxClassInfo ms_classInfo;
    friend void sub_01dd2b90(void);
};

int sub_0043a630(void);
int sub_01e22080(void);
extern undefined4 g_02617fc4;
extern undefined4 g_02617fc8;
extern undefined4 g_02617fcc;
extern undefined4 g_02617fd0;
extern undefined4 g_02617fd4;
extern undefined4 g_02617fd8;
// @baa 0x01dd2b90
void sub_01dd2b90(void)
{
  g_02617fd0 = (undefined4)((&wxDialog::ms_classInfo));
  g_02617fc4 = (undefined4)(L"FxCurvePropertiesDialog");
  g_02617fc8 = 0x1c4;
  g_02617fcc = (undefined4)(sub_0043a630);
  g_02617fd4 = 0;
  g_02617fd8 = *(undefined4 *)(&wxClassInfo::sm_first);
  *(undefined **)(&wxClassInfo::sm_first) = (undefined *)(&g_02617fc4);
  ((wxClassInfo *)((wxClassInfo *)&g_02617fc4))->wxClassInfo::Register();
  sub_01a37872(&sub_01e22080);
  return;
}
