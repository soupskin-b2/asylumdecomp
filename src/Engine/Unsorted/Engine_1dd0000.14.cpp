// Engine_1dd0000.cpp (part 14 of 28): 2 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

class wxEventHashTable;
struct wxEventTable;
class wxEventHashTable {
    public:
    public: __declspec(dllimport) wxEventHashTable(wxEventTable const &);
    friend void sub_01dd2150(void);
};

struct wxEventTable {
    public:
};

int sub_01a37872(...);
int sub_01e21fc0(void);
extern undefined4 g_025d4958;
extern undefined4 g_02617c68;
// @baa 0x01dd2150
void sub_01dd2150(void)
{
  ((wxEventHashTable *)((wxEventHashTable *)&g_02617c68))->wxEventHashTable::wxEventHashTable(*(const wxEventTable *)((wxEventTable *)&g_025d4958));
  sub_01a37872(&sub_01e21fc0);
  return;
}

class wxClassInfo;
class wxDialog;
class wxClassInfo {
    public:
    public: __declspec(dllimport) static wxClassInfo * sm_first;
    protected: __declspec(dllimport) void Register();
    friend void sub_01dd3360(void);
};

class wxDialog {
    public:
    public: __declspec(dllimport) static wxClassInfo ms_classInfo;
    friend void sub_01dd3360(void);
};

int sub_0043aeb0(void);
int sub_01e22150(void);
extern undefined4 g_02617a38;
extern undefined4 g_02617a3c;
extern undefined4 g_02617a40;
extern undefined4 g_02617a44;
extern undefined4 g_02617a48;
extern undefined4 g_02617a4c;
// @baa 0x01dd3360
void sub_01dd3360(void)
{
  g_02617a44 = (undefined4)((&wxDialog::ms_classInfo));
  g_02617a38 = (undefined4)(L"FxFaceGraphNodeGroupManagerDialog");
  g_02617a3c = 0x1cc;
  g_02617a40 = (undefined4)(sub_0043aeb0);
  g_02617a48 = 0;
  g_02617a4c = *(undefined4 *)(&wxClassInfo::sm_first);
  *(undefined **)(&wxClassInfo::sm_first) = (undefined *)(&g_02617a38);
  ((wxClassInfo *)((wxClassInfo *)&g_02617a38))->wxClassInfo::Register();
  sub_01a37872(&sub_01e22150);
  return;
}
