// Core_1dd0000.cpp (part 8 of 42): 2 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

class wxEventHashTable;
struct wxEventTable;
class wxEventHashTable {
    public:
    public: __declspec(dllimport) wxEventHashTable(wxEventTable const &);
    friend void sub_01dd4400(void);
};

struct wxEventTable {
    public:
};

int sub_01a37872(...);
int sub_01e22320(void);
extern undefined4 g_025d4e38;
extern undefined4 g_02663924;
// @baa 0x01dd4400
void sub_01dd4400(void)
{
  ((wxEventHashTable *)((wxEventHashTable *)&g_02663924))->wxEventHashTable::wxEventHashTable(*(const wxEventTable *)((wxEventTable *)&g_025d4e38));
  sub_01a37872(&sub_01e22320);
  return;
}

class wxClassInfo;
class wxClassInfo {
    public:
    public: __declspec(dllimport) static wxClassInfo * sm_first;
    protected: __declspec(dllimport) void Register();
    friend void sub_01dd4b40(void);
};

int sub_01e22730(void);
extern undefined4 g_02618158;
extern undefined4 g_026644c8;
extern undefined4 g_026644cc;
extern undefined4 g_026644d0;
extern undefined4 g_026644d4;
extern undefined4 g_026644d8;
extern undefined4 g_026644dc;
// @baa 0x01dd4b40
void sub_01dd4b40(void)
{
  g_026644d0 = 0;
  g_026644d8 = 0;
  g_026644c8 = (undefined4)(L"FxActorAnimationsView");
  g_026644cc = 0x1a0;
  g_026644d4 = (undefined4)(&g_02618158);
  g_026644dc = *(undefined4 *)(&wxClassInfo::sm_first);
  *(undefined **)(&wxClassInfo::sm_first) = (undefined *)(&g_026644c8);
  ((wxClassInfo *)((wxClassInfo *)&g_026644c8))->wxClassInfo::Register();
  sub_01a37872(&sub_01e22730);
  return;
}
