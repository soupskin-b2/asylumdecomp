// Core_1e10000.cpp (part 22 of 24): 2 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

class wxEventHashTable;
struct wxEventTable;
class wxEventHashTable {
    public:
    public: __declspec(dllimport) wxEventHashTable(wxEventTable const &);
    friend void sub_01e1f8d0(void);
};

struct wxEventTable {
    public:
};

int sub_01a37872(...);
int sub_01e279c0(void);
extern undefined4 g_025f075c;
extern undefined4 g_026e5cfc;
// @baa 0x01e1f8d0
void sub_01e1f8d0(void)
{
  ((wxEventHashTable *)((wxEventHashTable *)&g_026e5cfc))->wxEventHashTable::wxEventHashTable(*(const wxEventTable *)((wxEventTable *)&g_025f075c));
  sub_01a37872(&sub_01e279c0);
  return;
}

class wxClassInfo;
class wxClassInfo {
    public:
    public: __declspec(dllimport) static wxClassInfo * sm_first;
    protected: __declspec(dllimport) void Register();
    friend void sub_01e1fe40(void);
};

int sub_01757620(void);
int sub_01e27a00(void);
extern undefined4 g_026d2978;
extern undefined4 g_026e5c90;
extern undefined4 g_026e5c94;
extern undefined4 g_026e5c98;
extern undefined4 g_026e5c9c;
extern undefined4 g_026e5ca0;
extern undefined4 g_026e5ca4;
// @baa 0x01e1fe40
void sub_01e1fe40(void)
{
  g_026e5c90 = (undefined4)(L"WxPropertyWindow_LevelList");
  g_026e5c94 = 0x1f0;
  g_026e5c98 = (undefined4)(sub_01757620);
  g_026e5c9c = (undefined4)(&g_026d2978);
  g_026e5ca0 = 0;
  g_026e5ca4 = *(undefined4 *)(&wxClassInfo::sm_first);
  *(undefined **)(&wxClassInfo::sm_first) = (undefined *)(&g_026e5c90);
  ((wxClassInfo *)((wxClassInfo *)&g_026e5c90))->wxClassInfo::Register();
  sub_01a37872(&sub_01e27a00);
  return;
}
