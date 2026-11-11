// Engine_1dd0000.cpp (part 7 of 28): 3 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

class wxColour;
class wxColour {
    public:
    public: __declspec(dllimport) wxColour(unsigned char,unsigned char,unsigned char,unsigned char);
    friend void sub_01dd1440(void);
};

int sub_01a37872(...);
int sub_01e21da0(void);
extern undefined4 g_02616f2c;
// @baa 0x01dd1440
void sub_01dd1440(void)
{
  ((wxColour *)((wxColour *)&g_02616f2c))->wxColour::wxColour(0xff, 0xff, 0x80, 0xff);
  sub_01a37872(&sub_01e21da0);
  return;
}

class wxEventHashTable;
struct wxEventTable;
class wxEventHashTable {
    public:
    public: __declspec(dllimport) wxEventHashTable(wxEventTable const &);
    friend void sub_01dd16a0(void);
};

struct wxEventTable {
    public:
};

int sub_01e21f00(...);
extern undefined4 g_025d4908;
extern undefined4 g_02618714;
// @baa 0x01dd16a0
void sub_01dd16a0(void)
{
  ((wxEventHashTable *)((wxEventHashTable *)&g_02618714))->wxEventHashTable::wxEventHashTable(*(const wxEventTable *)((wxEventTable *)&g_025d4908));
  sub_01a37872(&sub_01e21f00);
  return;
}

class wxClassInfo;
class wxWindow;
class wxClassInfo {
    public:
    public: __declspec(dllimport) static wxClassInfo * sm_first;
    protected: __declspec(dllimport) void Register();
    friend void sub_01dd1f50(void);
};

class wxWindow {
    public:
    public: __declspec(dllimport) static wxClassInfo ms_classInfo;
    friend void sub_01dd1f50(void);
};

int sub_00459550(void);
int sub_01e21f90(void);
extern undefined4 g_02617a80;
extern undefined4 g_02617a84;
extern undefined4 g_02617a88;
extern undefined4 g_02617a8c;
extern undefined4 g_02617a90;
extern undefined4 g_02617a94;
// @baa 0x01dd1f50
void sub_01dd1f50(void)
{
  g_02617a8c = (undefined4)((&wxWindow::ms_classInfo));
  g_02617a80 = (undefined4)(L"FxCommandPanel");
  g_02617a84 = 0x164;
  g_02617a88 = (undefined4)(sub_00459550);
  g_02617a90 = 0;
  g_02617a94 = *(undefined4 *)(&wxClassInfo::sm_first);
  *(undefined **)(&wxClassInfo::sm_first) = (undefined *)(&g_02617a80);
  ((wxClassInfo *)((wxClassInfo *)&g_02617a80))->wxClassInfo::Register();
  sub_01a37872(&sub_01e21f90);
  return;
}
