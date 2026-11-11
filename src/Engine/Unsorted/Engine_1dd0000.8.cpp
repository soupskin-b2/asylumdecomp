// Engine_1dd0000.cpp (part 8 of 28): 3 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

class wxColour;
class wxColour {
    public:
    public: __declspec(dllimport) wxColour(unsigned char,unsigned char,unsigned char,unsigned char);
    friend void sub_01dd1470(void);
};

int sub_01a37872(...);
int sub_01e21db0(void);
extern undefined4 g_02616f7c;
// @baa 0x01dd1470
void sub_01dd1470(void)
{
  ((wxColour *)((wxColour *)&g_02616f7c))->wxColour::wxColour(0xff, 0x80, 0x80, 0xff);
  sub_01a37872(&sub_01e21db0);
  return;
}

class wxEventHashTable;
struct wxEventTable;
class wxEventHashTable {
    public:
    public: __declspec(dllimport) wxEventHashTable(wxEventTable const &);
    friend void sub_01dd17b0(void);
};

struct wxEventTable {
    public:
};

int sub_01e21f20(void);
extern undefined4 g_025d48e8;
extern undefined4 g_026186fc;
// @baa 0x01dd17b0
void sub_01dd17b0(void)
{
  ((wxEventHashTable *)((wxEventHashTable *)&g_026186fc))->wxEventHashTable::wxEventHashTable(*(const wxEventTable *)((wxEventTable *)&g_025d48e8));
  sub_01a37872(&sub_01e21f20);
  return;
}

class wxClassInfo;
class wxDialog;
class wxClassInfo {
    public:
    public: __declspec(dllimport) static wxClassInfo * sm_first;
    protected: __declspec(dllimport) void Register();
    friend void sub_01dd2620(void);
};

class wxDialog {
    public:
    public: __declspec(dllimport) static wxClassInfo ms_classInfo;
    friend void sub_01dd2620(void);
};

int sub_0043a490(void);
int sub_01e22020(void);
extern undefined4 g_02617d98;
extern undefined4 g_02617d9c;
extern undefined4 g_02617da0;
extern undefined4 g_02617da4;
extern undefined4 g_02617da8;
extern undefined4 g_02617dac;
// @baa 0x01dd2620
void sub_01dd2620(void)
{
  g_02617da4 = (undefined4)((&wxDialog::ms_classInfo));
  g_02617d98 = (undefined4)(L"FxCreateCameraDialog");
  g_02617d9c = 0x1cc;
  g_02617da0 = (undefined4)(sub_0043a490);
  g_02617da8 = 0;
  g_02617dac = *(undefined4 *)(&wxClassInfo::sm_first);
  *(undefined **)(&wxClassInfo::sm_first) = (undefined *)(&g_02617d98);
  ((wxClassInfo *)((wxClassInfo *)&g_02617d98))->wxClassInfo::Register();
  sub_01a37872(&sub_01e22020);
  return;
}
