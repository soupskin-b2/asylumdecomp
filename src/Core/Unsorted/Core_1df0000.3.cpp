// Core_1df0000.cpp (part 3 of 44): 3 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

class wxEventHashTable;
struct wxEventTable;
class wxEventHashTable {
    public:
    public: __declspec(dllimport) wxEventHashTable(wxEventTable const &);
    friend void sub_01dfa110(void);
};

struct wxEventTable {
    public:
};

int sub_01a37872(...);
int sub_01e25ca0(void);
extern undefined4 g_025e8598;
extern undefined4 g_026ce71c;
// @baa 0x01dfa110
void sub_01dfa110(void)
{
  ((wxEventHashTable *)((wxEventHashTable *)&g_026ce71c))->wxEventHashTable::wxEventHashTable(*(const wxEventTable *)((wxEventTable *)&g_025e8598));
  sub_01a37872(&sub_01e25ca0);
  return;
}

class wxClassInfo;
class wxComboBox;
class wxObject;
class wxClassInfo {
    public:
    public: __declspec(dllimport) wxClassInfo(wchar_t const *,wxClassInfo const *,wxClassInfo const *,int,wxObject * (__cdecl*)(void));
    friend void sub_01dfa7b0(void);
};

class wxComboBox {
    public:
    public: __declspec(dllimport) static wxClassInfo ms_classInfo;
    friend void sub_01dfa7b0(void);
};

class wxObject {
    public:
};

int sub_0111a320(void);
int sub_01e25d50(void);
extern undefined4 g_026ceb30;
// @baa 0x01dfa7b0
void sub_01dfa7b0(void)
{
  ((wxClassInfo *)((wxClassInfo *)&g_026ceb30))->wxClassInfo::wxClassInfo(L"WxComboBox", (wxClassInfo *)(&wxComboBox::ms_classInfo), (wxClassInfo *)0x0, 0x15c, (wxObject *(__cdecl *)(void))(sub_0111a320));
  sub_01a37872(&sub_01e25d50);
  return;
}

class wxString;
class wxString {
    public:
    public: __declspec(dllimport) wxString(wxString const &);
    friend void sub_01dfe510(void);
};

int sub_01e25f30(void);
extern undefined4 g_026d11bc;
extern undefined4 g_026d127c;
// @baa 0x01dfe510
void sub_01dfe510(void)
{
  ((wxString *)((wxString *)&g_026d127c))->wxString::wxString(*(const wxString *)((wxString *)&g_026d11bc));
  sub_01a37872(&sub_01e25f30);
  return;
}
