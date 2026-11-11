// Engine_1dd0000.cpp (part 2 of 28): 4 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

class wxEventHashTable;
struct wxEventTable;
class wxEventHashTable {
    public:
    public: __declspec(dllimport) wxEventHashTable(wxEventTable const &);
    friend void sub_01dd0870(void);
};

struct wxEventTable {
    public:
};

int sub_01a37872(...);
int sub_01e21ca0(void);
extern undefined4 g_025d4468;
extern undefined4 g_026175c4;
// @baa 0x01dd0870
void sub_01dd0870(void)
{
  ((wxEventHashTable *)((wxEventHashTable *)&g_026175c4))->wxEventHashTable::wxEventHashTable(*(const wxEventTable *)((wxEventTable *)&g_025d4468));
  sub_01a37872(&sub_01e21ca0);
  return;
}

class wxColour;
class wxColour {
    public:
    public: __declspec(dllimport) wxColour(unsigned char,unsigned char,unsigned char,unsigned char);
    friend void sub_01dd10c0(void);
};

int sub_01e21cf0(void);
extern undefined4 g_026175dc;
// @baa 0x01dd10c0
void sub_01dd10c0(void)
{
  ((wxColour *)((wxColour *)&g_026175dc))->wxColour::wxColour(0xff, 0xff, 0xff, 0xff);
  sub_01a37872(&sub_01e21cf0);
  return;
}

class wxString;
class wxString {
    public:
    public: __declspec(dllimport) wxString(wchar_t const *);
    friend void sub_01dd1180(void);
};

int sub_01e21d30(void);
extern undefined4 g_026175c0;
// @baa 0x01dd1180
void sub_01dd1180(void)
{
  ((wxString *)((wxString *)&g_026175c0))->wxString::wxString(L"Arial Unicode MS");
  sub_01a37872(&sub_01e21d30);
  return;
}

class wxClassInfo;
class wxDialog;
class wxClassInfo {
    public:
    public: __declspec(dllimport) static wxClassInfo * sm_first;
    protected: __declspec(dllimport) void Register();
    friend void sub_01dd11f0(void);
};

class wxDialog {
    public:
    public: __declspec(dllimport) static wxClassInfo ms_classInfo;
    friend void sub_01dd11f0(void);
};

int sub_0040f9c0(void);
int sub_01e21d70(...);
extern undefined4 g_02616fac;
extern undefined4 g_02616fb0;
extern undefined4 g_02616fb4;
extern undefined4 g_02616fb8;
extern undefined4 g_02616fbc;
extern undefined4 g_02616fc0;
// @baa 0x01dd11f0
void sub_01dd11f0(void)
{
  g_02616fb8 = (undefined4)((&wxDialog::ms_classInfo));
  g_02616fac = (undefined4)(L"FxStudioOptionsDialog");
  g_02616fb0 = 0x1d0;
  g_02616fb4 = (undefined4)(sub_0040f9c0);
  g_02616fbc = 0;
  g_02616fc0 = *(undefined4 *)(&wxClassInfo::sm_first);
  *(undefined **)(&wxClassInfo::sm_first) = (undefined *)(&g_02616fac);
  ((wxClassInfo *)((wxClassInfo *)&g_02616fac))->wxClassInfo::Register();
  sub_01a37872(&sub_01e21d70);
  return;
}
