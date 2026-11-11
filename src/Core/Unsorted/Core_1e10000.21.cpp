// Core_1e10000.cpp (part 21 of 24): 2 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

class wxEventHashTable;
struct wxEventTable;
class wxEventHashTable {
    public:
    public: __declspec(dllimport) wxEventHashTable(wxEventTable const &);
    friend void sub_01e1f6b0(void);
};

struct wxEventTable {
    public:
};

int sub_01a37872(...);
int sub_01e279b0(void);
extern undefined4 g_025f0764;
extern undefined4 g_026e59b0;
// @baa 0x01e1f6b0
void sub_01e1f6b0(void)
{
  ((wxEventHashTable *)((wxEventHashTable *)&g_026e59b0))->wxEventHashTable::wxEventHashTable(*(const wxEventTable *)((wxEventTable *)&g_025f0764));
  sub_01a37872(&sub_01e279b0);
  return;
}

class wxClassInfo;
class wxClassInfo {
    public:
    public: __declspec(dllimport) static wxClassInfo * sm_first;
    protected: __declspec(dllimport) void Register();
    friend void sub_01e1fde0(void);
};

int sub_01757870(void);
int sub_01e279f0(void);
extern undefined4 g_026d2978;
extern undefined4 g_026e5ca8;
extern undefined4 g_026e5cac;
extern undefined4 g_026e5cb0;
extern undefined4 g_026e5cb4;
extern undefined4 g_026e5cb8;
extern undefined4 g_026e5cbc;
// @baa 0x01e1fde0
void sub_01e1fde0(void)
{
  g_026e5ca8 = (undefined4)(L"WxCustomPropertyItem_OverrideName");
  g_026e5cac = 0x1f0;
  g_026e5cb0 = (undefined4)(sub_01757870);
  g_026e5cb4 = (undefined4)(&g_026d2978);
  g_026e5cb8 = 0;
  g_026e5cbc = *(undefined4 *)(&wxClassInfo::sm_first);
  *(undefined **)(&wxClassInfo::sm_first) = (undefined *)(&g_026e5ca8);
  ((wxClassInfo *)((wxClassInfo *)&g_026e5ca8))->wxClassInfo::Register();
  sub_01a37872(&sub_01e279f0);
  return;
}
