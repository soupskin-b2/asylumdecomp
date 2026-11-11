// Engine_1dd0000.cpp (part 4 of 28): 3 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

class wxEventHashTable;
struct wxEventTable;
class wxEventHashTable {
    public:
    public: __declspec(dllimport) wxEventHashTable(wxEventTable const &);
    friend void sub_01dd09a0(void);
};

struct wxEventTable {
    public:
};

int sub_01a37872(...);
int sub_01e21cc0(void);
extern undefined4 g_025d4488;
extern undefined4 g_026174c4;
// @baa 0x01dd09a0
void sub_01dd09a0(void)
{
  ((wxEventHashTable *)((wxEventHashTable *)&g_026174c4))->wxEventHashTable::wxEventHashTable(*(const wxEventTable *)((wxEventTable *)&g_025d4488));
  sub_01a37872(&sub_01e21cc0);
  return;
}

class wxColour;
class wxColour {
    public:
    public: __declspec(dllimport) wxColour(unsigned char,unsigned char,unsigned char,unsigned char);
    friend void sub_01dd1120(void);
};

int sub_01e21d10(void);
extern undefined4 g_026174e4;
// @baa 0x01dd1120
void sub_01dd1120(void)
{
  ((wxColour *)((wxColour *)&g_026174e4))->wxColour::wxColour('\0', '\0', '\0', 0xff);
  sub_01a37872(&sub_01e21d10);
  return;
}

class wxClassInfo;
class wxDialog;
class wxClassInfo {
    public:
    public: __declspec(dllimport) static wxClassInfo * sm_first;
    protected: __declspec(dllimport) void Register();
    friend void sub_01dd1ad0(void);
};

class wxDialog {
    public:
    public: __declspec(dllimport) static wxClassInfo ms_classInfo;
    friend void sub_01dd1ad0(void);
};

int sub_00439d90(void);
int sub_01e21f30(void);
extern undefined4 g_02618638;
extern undefined4 g_0261863c;
extern undefined4 g_02618640;
extern undefined4 g_02618644;
extern undefined4 g_02618648;
extern undefined4 g_0261864c;
// @baa 0x01dd1ad0
void sub_01dd1ad0(void)
{
  g_02618644 = (undefined4)((&wxDialog::ms_classInfo));
  g_02618638 = (undefined4)(L"FxBoneWeightDialog");
  g_0261863c = 0x1a4;
  g_02618640 = (undefined4)(sub_00439d90);
  g_02618648 = 0;
  g_0261864c = *(undefined4 *)(&wxClassInfo::sm_first);
  *(undefined **)(&wxClassInfo::sm_first) = (undefined *)(&g_02618638);
  ((wxClassInfo *)((wxClassInfo *)&g_02618638))->wxClassInfo::Register();
  sub_01a37872(&sub_01e21f30);
  return;
}
