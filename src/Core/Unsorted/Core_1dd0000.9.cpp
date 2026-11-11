// Core_1dd0000.cpp (part 9 of 42): 2 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

class wxEventHashTable;
struct wxEventTable;
class wxEventHashTable {
    public:
    public: __declspec(dllimport) wxEventHashTable(wxEventTable const &);
    friend void sub_01dd47d0(void);
};

struct wxEventTable {
    public:
};

int sub_01a37872(...);
int sub_01e226f0(void);
extern undefined4 g_01e5a54c;
extern undefined4 g_02663e34;
// @baa 0x01dd47d0
void sub_01dd47d0(void)
{
  ((wxEventHashTable *)((wxEventHashTable *)&g_02663e34))->wxEventHashTable::wxEventHashTable(*(const wxEventTable *)((wxEventTable *)&g_01e5a54c));
  sub_01a37872(&sub_01e226f0);
  return;
}

class wxClassInfo;
class wxClassInfo {
    public:
    public: __declspec(dllimport) static wxClassInfo * sm_first;
    protected: __declspec(dllimport) void Register();
    friend void sub_01dd4d00(void);
};

int sub_004e0a00(void);
int sub_01e22750(void);
extern undefined4 g_02617a50;
extern undefined4 g_02664be4;
extern undefined4 g_02664be8;
extern undefined4 g_02664bec;
extern undefined4 g_02664bf0;
extern undefined4 g_02664bf4;
extern undefined4 g_02664bf8;
// @baa 0x01dd4d00
void sub_01dd4d00(void)
{
  g_02664be4 = (undefined4)(L"FxActorWidget");
  g_02664be8 = 0x1d0;
  g_02664bec = (undefined4)(sub_004e0a00);
  g_02664bf0 = (undefined4)(&g_02617a50);
  g_02664bf4 = 0;
  g_02664bf8 = *(undefined4 *)(&wxClassInfo::sm_first);
  *(undefined **)(&wxClassInfo::sm_first) = (undefined *)(&g_02664be4);
  ((wxClassInfo *)((wxClassInfo *)&g_02664be4))->wxClassInfo::Register();
  sub_01a37872(&sub_01e22750);
  return;
}
