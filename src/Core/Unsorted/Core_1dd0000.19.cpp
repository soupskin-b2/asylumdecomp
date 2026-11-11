// Core_1dd0000.cpp (part 19 of 42): 2 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

class wxEventHashTable;
struct wxEventTable;
class wxEventHashTable {
    public:
    public: __declspec(dllimport) wxEventHashTable(wxEventTable const &);
    friend void sub_01dd6010(void);
};

struct wxEventTable {
    public:
};

int sub_01a37872(...);
int sub_01e228c0(void);
extern undefined4 g_025d4eec;
extern undefined4 g_02664c14;
// @baa 0x01dd6010
void sub_01dd6010(void)
{
  ((wxEventHashTable *)((wxEventHashTable *)&g_02664c14))->wxEventHashTable::wxEventHashTable(*(const wxEventTable *)((wxEventTable *)&g_025d4eec));
  sub_01a37872(&sub_01e228c0);
  return;
}

class wxClassInfo;
class wxDialog;
class wxClassInfo {
    public:
    public: __declspec(dllimport) static wxClassInfo * sm_first;
    protected: __declspec(dllimport) void Register();
    friend void sub_01dd7830(void);
};

class wxDialog {
    public:
    public: __declspec(dllimport) static wxClassInfo ms_classInfo;
    friend void sub_01dd7830(void);
};

int sub_004f68c0(void);
int sub_01e22a80(void);
extern undefined4 g_02664c78;
extern undefined4 g_02664c7c;
extern undefined4 g_02664c80;
extern undefined4 g_02664c84;
extern undefined4 g_02664c88;
extern undefined4 g_02664c8c;
// @baa 0x01dd7830
void sub_01dd7830(void)
{
  g_02664c84 = (undefined4)((&wxDialog::ms_classInfo));
  g_02664c78 = (undefined4)(L"FxChangePhonemeDialog");
  g_02664c7c = 0x1ac;
  g_02664c80 = (undefined4)(sub_004f68c0);
  g_02664c88 = 0;
  g_02664c8c = *(undefined4 *)(&wxClassInfo::sm_first);
  *(undefined **)(&wxClassInfo::sm_first) = (undefined *)(&g_02664c78);
  ((wxClassInfo *)((wxClassInfo *)&g_02664c78))->wxClassInfo::Register();
  sub_01a37872(&sub_01e22a80);
  return;
}
