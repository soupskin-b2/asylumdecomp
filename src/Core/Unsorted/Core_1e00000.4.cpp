// Core_1e00000.cpp (part 4 of 160): 3 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

class wxEventHashTable;
struct wxEventTable;
class wxEventHashTable {
    public:
    public: __declspec(dllimport) wxEventHashTable(wxEventTable const &);
    friend void sub_01e00140(void);
};

struct wxEventTable {
    public:
};

int sub_01a37872(...);
int sub_01e260e0(void);
extern undefined4 g_025e86c8;
extern undefined4 g_026d23e4;
// @baa 0x01e00140
void sub_01e00140(void)
{
  ((wxEventHashTable *)((wxEventHashTable *)&g_026d23e4))->wxEventHashTable::wxEventHashTable(*(const wxEventTable *)((wxEventTable *)&g_025e86c8));
  sub_01a37872(&sub_01e260e0);
  return;
}

class wxClassInfo;
class wxObject;
class wxClassInfo {
    public:
    public: __declspec(dllimport) wxClassInfo(wchar_t const *,wxClassInfo const *,wxClassInfo const *,int,wxObject * (__cdecl*)(void));
    friend void sub_01e00870(void);
};

class wxObject {
    public:
};

int sub_011f0650(void);
int sub_01e26150(void);
extern undefined4 g_026d26e0;
extern undefined4 g_026d28a0;
// @baa 0x01e00870
void sub_01e00870(void)
{
  ((wxClassInfo *)((wxClassInfo *)&g_026d28a0))->wxClassInfo::wxClassInfo(L"WxPropertyWindow_Objects", (wxClassInfo *)&g_026d26e0, (wxClassInfo *)0x0, 0x1fc, (wxObject *(__cdecl *)(void))(sub_011f0650));
  sub_01a37872(&sub_01e26150);
  return;
}

class wxString;
class wxString {
    public:
    public: __declspec(dllimport) wxString(wxString const &);
    friend void sub_01e0ca40(void);
};

int sub_01e26c10(void);
extern undefined4 g_026da8ec;
extern undefined4 g_026da8f0;
// @baa 0x01e0ca40
void sub_01e0ca40(void)
{
  ((wxString *)((wxString *)&g_026da8f0))->wxString::wxString(*(const wxString *)((wxString *)&g_026da8ec));
  sub_01a37872(&sub_01e26c10);
  return;
}
