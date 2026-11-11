// Engine_1dd0000.cpp (part 10 of 28): 2 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

class wxEventHashTable;
struct wxEventTable;
class wxEventHashTable {
    public:
    public: __declspec(dllimport) wxEventHashTable(wxEventTable const &);
    friend void sub_01dd1c50(void);
};

struct wxEventTable {
    public:
};

int sub_01a37872(...);
int sub_01e21f60(void);
extern undefined4 g_025d48f8;
extern undefined4 g_02617ab0;
// @baa 0x01dd1c50
void sub_01dd1c50(void)
{
  ((wxEventHashTable *)((wxEventHashTable *)&g_02617ab0))->wxEventHashTable::wxEventHashTable(*(const wxEventTable *)((wxEventTable *)&g_025d48f8));
  sub_01a37872(&sub_01e21f60);
  return;
}

class wxClassInfo;
class wxDialog;
class wxClassInfo {
    public:
    public: __declspec(dllimport) static wxClassInfo * sm_first;
    protected: __declspec(dllimport) void Register();
    friend void sub_01dd28b0(void);
};

class wxDialog {
    public:
    public: __declspec(dllimport) static wxClassInfo ms_classInfo;
    friend void sub_01dd28b0(void);
};

int sub_0043a5b0(void);
int sub_01e22060(void);
extern undefined4 g_026186a8;
extern undefined4 g_026186ac;
extern undefined4 g_026186b0;
extern undefined4 g_026186b4;
extern undefined4 g_026186b8;
extern undefined4 g_026186bc;
// @baa 0x01dd28b0
void sub_01dd28b0(void)
{
  g_026186b4 = (undefined4)((&wxDialog::ms_classInfo));
  g_026186a8 = (undefined4)(L"FxCurveManagerDialog");
  g_026186ac = 0x1d8;
  g_026186b0 = (undefined4)(sub_0043a5b0);
  g_026186b8 = 0;
  g_026186bc = *(undefined4 *)(&wxClassInfo::sm_first);
  *(undefined **)(&wxClassInfo::sm_first) = (undefined *)(&g_026186a8);
  ((wxClassInfo *)((wxClassInfo *)&g_026186a8))->wxClassInfo::Register();
  sub_01a37872(&sub_01e22060);
  return;
}
