// Engine_1dd0000.cpp (part 6 of 28): 3 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

class wxEventHashTable;
struct wxEventTable;
class wxEventHashTable {
    public:
    public: __declspec(dllimport) wxEventHashTable(wxEventTable const &);
    friend void sub_01dd1260(void);
};

struct wxEventTable {
    public:
};

int sub_01a37872(...);
int sub_01e21d80(void);
extern undefined4 g_025d4460;
extern undefined4 g_026170bc;
// @baa 0x01dd1260
void sub_01dd1260(void)
{
  ((wxEventHashTable *)((wxEventHashTable *)&g_026170bc))->wxEventHashTable::wxEventHashTable(*(const wxEventTable *)((wxEventTable *)&g_025d4460));
  sub_01a37872(&sub_01e21d80);
  return;
}

class wxColour;
class wxColour {
    public:
    public: __declspec(dllimport) wxColour(unsigned char,unsigned char,unsigned char,unsigned char);
    friend void sub_01dd1410(void);
};

int sub_01e21d90(void);
extern undefined4 g_02616f18;
// @baa 0x01dd1410
void sub_01dd1410(void)
{
  ((wxColour *)((wxColour *)&g_02616f18))->wxColour::wxColour(0xc0, 0xc0, 0xc0, 0xff);
  sub_01a37872(&sub_01e21d90);
  return;
}

class wxClassInfo;
class wxTextCtrl;
class wxClassInfo {
    public:
    public: __declspec(dllimport) static wxClassInfo * sm_first;
    protected: __declspec(dllimport) void Register();
    friend void sub_01dd1e70(void);
};

class wxTextCtrl {
    public:
    public: __declspec(dllimport) static wxClassInfo ms_classInfo;
    friend void sub_01dd1e70(void);
};

int sub_0043a310(void);
int sub_01e21f70(void);
extern undefined4 g_026183f0;
extern undefined4 g_026183f4;
extern undefined4 g_026183f8;
extern undefined4 g_026183fc;
extern undefined4 g_02618400;
extern undefined4 g_02618404;
// @baa 0x01dd1e70
void sub_01dd1e70(void)
{
  g_026183fc = (undefined4)((&wxTextCtrl::ms_classInfo));
  g_026183f0 = (undefined4)(L"FxCommandLine");
  g_026183f4 = 0x1b4;
  g_026183f8 = (undefined4)(sub_0043a310);
  g_02618400 = 0;
  g_02618404 = *(undefined4 *)(&wxClassInfo::sm_first);
  *(undefined **)(&wxClassInfo::sm_first) = (undefined *)(&g_026183f0);
  ((wxClassInfo *)((wxClassInfo *)&g_026183f0))->wxClassInfo::Register();
  sub_01a37872(&sub_01e21f70);
  return;
}
