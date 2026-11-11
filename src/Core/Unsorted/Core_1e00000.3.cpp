// Core_1e00000.cpp (part 3 of 160): 4 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

class wxEventHashTable;
struct wxEventTable;
class wxEventHashTable {
    public:
    public: __declspec(dllimport) wxEventHashTable(wxEventTable const &);
    friend void sub_01e000b0(void);
};

struct wxEventTable {
    public:
};

int sub_01a37872(...);
int sub_01e260d0(void);
extern undefined4 g_021e4a20;
extern undefined4 g_026d2390;
// @baa 0x01e000b0
void sub_01e000b0(void)
{
  ((wxEventHashTable *)((wxEventHashTable *)&g_026d2390))->wxEventHashTable::wxEventHashTable(*(const wxEventTable *)((wxEventTable *)&g_021e4a20));
  sub_01a37872(&sub_01e260d0);
  return;
}

class wxClassInfo;
class wxObject;
class wxWindow;
class wxClassInfo {
    public:
    public: __declspec(dllimport) wxClassInfo(wchar_t const *,wxClassInfo const *,wxClassInfo const *,int,wxObject * (__cdecl*)(void));
    friend void sub_01e005a0(void);
};

class wxObject {
    public:
};

class wxWindow {
    public:
    public: __declspec(dllimport) static wxClassInfo ms_classInfo;
    friend void sub_01e005a0(void);
};

int sub_011ef8d0(void);
int sub_01e26130(void);
extern undefined4 g_026d26e0;
// @baa 0x01e005a0
void sub_01e005a0(void)
{
  ((wxClassInfo *)((wxClassInfo *)&g_026d26e0))->wxClassInfo::wxClassInfo(L"WxPropertyWindow_Base", (wxClassInfo *)(&wxWindow::ms_classInfo), (wxClassInfo *)0x0, 0x1e8, (wxObject *(__cdecl *)(void))(sub_011ef8d0));
  sub_01a37872(&sub_01e26130);
  return;
}

class wxString;
class wxString {
    public:
    public: __declspec(dllimport) wxString(wxString const &);
    friend void sub_01e0ca20(void);
};

int sub_01e26c00(void);
extern undefined4 g_026da83c;
extern undefined4 g_026da8ec;
// @baa 0x01e0ca20
void sub_01e0ca20(void)
{
  ((wxString *)((wxString *)&g_026da8ec))->wxString::wxString(*(const wxString *)((wxString *)&g_026da83c));
  sub_01a37872(&sub_01e26c00);
  return;
}

class wxColour;
class wxColour {
    public:
    public: __declspec(dllimport) wxColour(unsigned char,unsigned char,unsigned char,unsigned char);
    friend void sub_01e0d760(void);
};

int sub_01e26d10(void);
extern undefined4 g_026db148;
// @baa 0x01e0d760
void sub_01e0d760(void)
{
  ((wxColour *)((wxColour *)&g_026db148))->wxColour::wxColour(200, 200, 0xd4, 0xff);
  sub_01a37872(&sub_01e26d10);
  return;
}
