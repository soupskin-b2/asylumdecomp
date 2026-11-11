// Engine_1dd0000.cpp (part 9 of 28): 2 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

class wxEventHashTable;
struct wxEventTable;
class wxEventHashTable {
    public:
    public: __declspec(dllimport) wxEventHashTable(wxEventTable const &);
    friend void sub_01dd1b40(void);
};

struct wxEventTable {
    public:
};

int sub_01a37872(...);
int sub_01e21f40(void);
extern undefined4 g_025d4928;
extern undefined4 g_02617bd0;
// @baa 0x01dd1b40
void sub_01dd1b40(void)
{
  ((wxEventHashTable *)((wxEventHashTable *)&g_02617bd0))->wxEventHashTable::wxEventHashTable(*(const wxEventTable *)((wxEventTable *)&g_025d4928));
  sub_01a37872(&sub_01e21f40);
  return;
}

class wxClassInfo;
class wxDialog;
class wxClassInfo {
    public:
    public: __declspec(dllimport) static wxClassInfo * sm_first;
    protected: __declspec(dllimport) void Register();
    friend void sub_01dd2780(void);
};

class wxDialog {
    public:
    public: __declspec(dllimport) static wxClassInfo ms_classInfo;
    friend void sub_01dd2780(void);
};

int sub_0043a520(void);
int sub_01e22040(void);
extern undefined4 g_02617c50;
extern undefined4 g_02617c54;
extern undefined4 g_02617c58;
extern undefined4 g_02617c5c;
extern undefined4 g_02617c60;
extern undefined4 g_02617c64;
// @baa 0x01dd2780
void sub_01dd2780(void)
{
  g_02617c5c = (undefined4)((&wxDialog::ms_classInfo));
  g_02617c50 = (undefined4)(L"FxCreateFaceGraphNodeDialog");
  g_02617c54 = 0x1bc;
  g_02617c58 = (undefined4)(sub_0043a520);
  g_02617c60 = 0;
  g_02617c64 = *(undefined4 *)(&wxClassInfo::sm_first);
  *(undefined **)(&wxClassInfo::sm_first) = (undefined *)(&g_02617c50);
  ((wxClassInfo *)((wxClassInfo *)&g_02617c50))->wxClassInfo::Register();
  sub_01a37872(&sub_01e22040);
  return;
}
