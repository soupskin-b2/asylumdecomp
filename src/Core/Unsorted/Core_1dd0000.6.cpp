// Core_1dd0000.cpp (part 6 of 42): 2 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

class wxEventHashTable;
struct wxEventTable;
class wxEventHashTable {
    public:
    public: __declspec(dllimport) wxEventHashTable(wxEventTable const &);
    friend void sub_01dd40d0(void);
};

struct wxEventTable {
    public:
};

int sub_01a37872(...);
int sub_01e222b0(void);
extern undefined4 g_025d4e20;
extern undefined4 g_02663954;
// @baa 0x01dd40d0
void sub_01dd40d0(void)
{
  ((wxEventHashTable *)((wxEventHashTable *)&g_02663954))->wxEventHashTable::wxEventHashTable(*(const wxEventTable *)((wxEventTable *)&g_025d4e20));
  sub_01a37872(&sub_01e222b0);
  return;
}

class wxClassInfo;
class wxClassInfo {
    public:
    public: __declspec(dllimport) static wxClassInfo * sm_first;
    protected: __declspec(dllimport) void Register();
    friend void sub_01dd4770(void);
};

int sub_01e226e0(...);
extern undefined4 g_02618158;
extern undefined4 g_026647c8;
extern undefined4 g_026647cc;
extern undefined4 g_026647d0;
extern undefined4 g_026647d4;
extern undefined4 g_026647d8;
extern undefined4 g_026647dc;
// @baa 0x01dd4770
void sub_01dd4770(void)
{
  g_026647d0 = 0;
  g_026647d8 = 0;
  g_026647c8 = (undefined4)(L"FxActorBoneView");
  g_026647cc = 0x16c;
  g_026647d4 = (undefined4)(&g_02618158);
  g_026647dc = *(undefined4 *)(&wxClassInfo::sm_first);
  *(undefined **)(&wxClassInfo::sm_first) = (undefined *)(&g_026647c8);
  ((wxClassInfo *)((wxClassInfo *)&g_026647c8))->wxClassInfo::Register();
  sub_01a37872(&sub_01e226e0);
  return;
}
