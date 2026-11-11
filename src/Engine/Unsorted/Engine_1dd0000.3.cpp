// Engine_1dd0000.cpp (part 3 of 28): 4 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

class wxEventHashTable;
struct wxEventTable;
class wxEventHashTable {
    public:
    public: __declspec(dllimport) wxEventHashTable(wxEventTable const &);
    friend void sub_01dd0920(void);
};

struct wxEventTable {
    public:
};

int sub_01a37872(...);
int sub_01e21cb0(void);
extern undefined4 g_025d4478;
extern undefined4 g_026170a4;
// @baa 0x01dd0920
void sub_01dd0920(void)
{
  ((wxEventHashTable *)((wxEventHashTable *)&g_026170a4))->wxEventHashTable::wxEventHashTable(*(const wxEventTable *)((wxEventTable *)&g_025d4478));
  sub_01a37872(&sub_01e21cb0);
  return;
}

class wxColour;
class wxColour {
    public:
    public: __declspec(dllimport) wxColour(unsigned char,unsigned char,unsigned char,unsigned char);
    friend void sub_01dd10f0(void);
};

int sub_01e21d00(void);
extern undefined4 g_026170d4;
// @baa 0x01dd10f0
void sub_01dd10f0(void)
{
  ((wxColour *)((wxColour *)&g_026170d4))->wxColour::wxColour('\0', 0xff, '\0', 0xff);
  sub_01a37872(&sub_01e21d00);
  return;
}

class wxString;
class wxString {
    public:
    public: __declspec(dllimport) wxString(wchar_t const *);
    friend void sub_01dd11d0(void);
};

int sub_01e21d50(...);
extern undefined4 g_02617038;
// @baa 0x01dd11d0
void sub_01dd11d0(void)
{
  ((wxString *)((wxString *)&g_02617038))->wxString::wxString(L"");
  sub_01a37872(&sub_01e21d50);
  return;
}

class wxClassInfo;
class wxDialog;
class wxClassInfo {
    public:
    public: __declspec(dllimport) static wxClassInfo * sm_first;
    protected: __declspec(dllimport) void Register();
    friend void sub_01dd1740(void);
};

class wxDialog {
    public:
    public: __declspec(dllimport) static wxClassInfo ms_classInfo;
    friend void sub_01dd1740(void);
};

int sub_00439c00(void);
int sub_01e21f10(void);
extern undefined4 g_02617d2c;
extern undefined4 g_02617d30;
extern undefined4 g_02617d34;
extern undefined4 g_02617d38;
extern undefined4 g_02617d3c;
extern undefined4 g_02617d40;
// @baa 0x01dd1740
void sub_01dd1740(void)
{
  g_02617d38 = (undefined4)((&wxDialog::ms_classInfo));
  g_02617d2c = (undefined4)(L"FxAnimManagerDialog");
  g_02617d30 = 0x1ec;
  g_02617d34 = (undefined4)(sub_00439c00);
  g_02617d3c = 0;
  g_02617d40 = *(undefined4 *)(&wxClassInfo::sm_first);
  *(undefined **)(&wxClassInfo::sm_first) = (undefined *)(&g_02617d2c);
  ((wxClassInfo *)((wxClassInfo *)&g_02617d2c))->wxClassInfo::Register();
  sub_01a37872(&sub_01e21f10);
  return;
}
