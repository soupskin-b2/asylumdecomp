// Core_1e00000.cpp (part 2 of 160): 4 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

class wxEventHashTable;
struct wxEventTable;
class wxEventHashTable {
    public:
    public: __declspec(dllimport) wxEventHashTable(wxEventTable const &);
    friend void sub_01e00070(void);
};

struct wxEventTable {
    public:
};

int sub_01a37872(...);
int sub_01e260c0(void);
extern undefined4 g_021e49e8;
extern undefined4 g_026d2364;
// @baa 0x01e00070
void sub_01e00070(void)
{
  ((wxEventHashTable *)((wxEventHashTable *)&g_026d2364))->wxEventHashTable::wxEventHashTable(*(const wxEventTable *)((wxEventTable *)&g_021e49e8));
  sub_01a37872(&sub_01e260c0);
  return;
}

class wxClassInfo;
class wxObject;
class wxWindow;
class wxClassInfo {
    public:
    public: __declspec(dllimport) wxClassInfo(wchar_t const *,wxClassInfo const *,wxClassInfo const *,int,wxObject * (__cdecl*)(void));
    friend void sub_01e003a0(void);
};

class wxObject {
    public:
};

class wxWindow {
    public:
    public: __declspec(dllimport) static wxClassInfo ms_classInfo;
    friend void sub_01e003a0(void);
};

int sub_011ef7a0(void);
int sub_01e26110(void);
extern undefined4 g_026d2594;
// @baa 0x01e003a0
void sub_01e003a0(void)
{
  ((wxClassInfo *)((wxClassInfo *)&g_026d2594))->wxClassInfo::wxClassInfo(L"WxPropertyWindow", (wxClassInfo *)(&wxWindow::ms_classInfo), (wxClassInfo *)0x0, 0x1d0, (wxObject *(__cdecl *)(void))(sub_011ef7a0));
  sub_01a37872(&sub_01e26110);
  return;
}

class wxString;
class wxString {
    public:
    public: __declspec(dllimport) wxString(wxString const &);
    friend void sub_01e08f30(void);
};

int sub_01e26800(void);
extern undefined4 g_026d83f8;
extern undefined4 g_026d83fc;
// @baa 0x01e08f30
void sub_01e08f30(void)
{
  ((wxString *)((wxString *)&g_026d83fc))->wxString::wxString(*(const wxString *)((wxString *)&g_026d83f8));
  sub_01a37872(&sub_01e26800);
  return;
}

class wxColour;
class wxColour {
    public:
    public: __declspec(dllimport) wxColour(unsigned char,unsigned char,unsigned char,unsigned char);
    friend void sub_01e0d730(void);
};

int sub_01e26d00(void);
extern undefined4 g_026db134;
// @baa 0x01e0d730
void sub_01e0d730(void)
{
  ((wxColour *)((wxColour *)&g_026db134))->wxColour::wxColour(0xe3, 0xe3, 0xef, 0xff);
  sub_01a37872(&sub_01e26d00);
  return;
}
