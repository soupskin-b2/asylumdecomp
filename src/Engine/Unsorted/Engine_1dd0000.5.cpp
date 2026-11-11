// Engine_1dd0000.cpp (part 5 of 28): 3 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

class wxEventHashTable;
struct wxEventTable;
class wxEventHashTable {
    public:
    public: __declspec(dllimport) wxEventHashTable(wxEventTable const &);
    friend void sub_01dd0a70(void);
};

struct wxEventTable {
    public:
};

int sub_01a37872(...);
int sub_01e21cd0(void);
extern undefined4 g_025d4480;
extern undefined4 g_02616fd0;
// @baa 0x01dd0a70
void sub_01dd0a70(void)
{
  ((wxEventHashTable *)((wxEventHashTable *)&g_02616fd0))->wxEventHashTable::wxEventHashTable(*(const wxEventTable *)((wxEventTable *)&g_025d4480));
  sub_01a37872(&sub_01e21cd0);
  return;
}

class wxColour;
class wxColour {
    public:
    public: __declspec(dllimport) wxColour(unsigned char,unsigned char,unsigned char,unsigned char);
    friend void sub_01dd1150(void);
};

int sub_01e21d20(void);
extern undefined4 g_02617430;
// @baa 0x01dd1150
void sub_01dd1150(void)
{
  ((wxColour *)((wxColour *)&g_02617430))->wxColour::wxColour(0xff, '\0', '\0', 0xff);
  sub_01a37872(&sub_01e21d20);
  return;
}

class wxClassInfo;
class wxWindow;
class wxClassInfo {
    public:
    public: __declspec(dllimport) static wxClassInfo * sm_first;
    protected: __declspec(dllimport) void Register();
    friend void sub_01dd1be0(void);
};

class wxWindow {
    public:
    public: __declspec(dllimport) static wxClassInfo ms_classInfo;
    friend void sub_01dd1be0(void);
};

int sub_0043a150(void);
int sub_01e21f50(void);
extern undefined4 g_02617cfc;
extern undefined4 g_02617d00;
extern undefined4 g_02617d04;
extern undefined4 g_02617d08;
extern undefined4 g_02617d0c;
extern undefined4 g_02617d10;
// @baa 0x01dd1be0
void sub_01dd1be0(void)
{
  g_02617d08 = (undefined4)((&wxWindow::ms_classInfo));
  g_02617cfc = (undefined4)(L"FxButton");
  g_02617d00 = 0x1a0;
  g_02617d04 = (undefined4)(sub_0043a150);
  g_02617d0c = 0;
  g_02617d10 = *(undefined4 *)(&wxClassInfo::sm_first);
  *(undefined **)(&wxClassInfo::sm_first) = (undefined *)(&g_02617cfc);
  ((wxClassInfo *)((wxClassInfo *)&g_02617cfc))->wxClassInfo::Register();
  sub_01a37872(&sub_01e21f50);
  return;
}
