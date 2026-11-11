// Core_1dd0000.cpp (part 7 of 42): 2 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

class wxEventHashTable;
struct wxEventTable;
class wxEventHashTable {
    public:
    public: __declspec(dllimport) wxEventHashTable(wxEventTable const &);
    friend void sub_01dd4310(void);
};

struct wxEventTable {
    public:
};

int sub_01a37872(...);
int sub_01e222f0(void);
extern undefined4 g_025d4e28;
extern undefined4 g_026639a4;
// @baa 0x01dd4310
void sub_01dd4310(void)
{
  ((wxEventHashTable *)((wxEventHashTable *)&g_026639a4))->wxEventHashTable::wxEventHashTable(*(const wxEventTable *)((wxEventTable *)&g_025d4e28));
  sub_01a37872(&sub_01e222f0);
  return;
}

class wxClassInfo;
class wxClassInfo {
    public:
    public: __declspec(dllimport) static wxClassInfo * sm_first;
    protected: __declspec(dllimport) void Register();
    friend void sub_01dd4850(void);
};

int sub_01e22700(void);
extern undefined4 g_02618158;
extern undefined4 g_0266420c;
extern undefined4 g_02664210;
extern undefined4 g_02664214;
extern undefined4 g_02664218;
extern undefined4 g_0266421c;
extern undefined4 g_02664220;
// @baa 0x01dd4850
void sub_01dd4850(void)
{
  g_02664214 = 0;
  g_0266421c = 0;
  g_0266420c = (undefined4)(L"FxActorFaceGraphView");
  g_02664210 = 0x188;
  g_02664218 = (undefined4)(&g_02618158);
  g_02664220 = *(undefined4 *)(&wxClassInfo::sm_first);
  *(undefined **)(&wxClassInfo::sm_first) = (undefined *)(&g_0266420c);
  ((wxClassInfo *)((wxClassInfo *)&g_0266420c))->wxClassInfo::Register();
  sub_01a37872(&sub_01e22700);
  return;
}
