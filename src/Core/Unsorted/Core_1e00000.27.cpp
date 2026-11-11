// Core_1e00000.cpp (part 27 of 160): 2 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

class wxEventHashTable;
struct wxEventTable;
class wxEventHashTable {
    public:
    public: __declspec(dllimport) wxEventHashTable(wxEventTable const &);
    friend void sub_01e024b0(void);
};

struct wxEventTable {
    public:
};

int sub_01a37872(...);
int sub_01e26320(void);
extern undefined4 g_025e8bc4;
extern undefined4 g_026d3b00;
// @baa 0x01e024b0
void sub_01e024b0(void)
{
  ((wxEventHashTable *)((wxEventHashTable *)&g_026d3b00))->wxEventHashTable::wxEventHashTable(*(const wxEventTable *)((wxEventTable *)&g_025e8bc4));
  sub_01a37872(&sub_01e26320);
  return;
}

class wxClassInfo;
class wxDialog;
class wxObject;
class wxClassInfo {
    public:
    public: __declspec(dllimport) wxClassInfo(wchar_t const *,wxClassInfo const *,wxClassInfo const *,int,wxObject * (__cdecl*)(void));
    friend void sub_01e0c260(void);
};

class wxDialog {
    public:
    public: __declspec(dllimport) static wxClassInfo ms_classInfo;
    friend void sub_01e0c260(void);
};

class wxObject {
    public:
};

int sub_013f9860(void);
int sub_01e26ae0(void);
extern undefined4 g_026da4c4;
// @baa 0x01e0c260
void sub_01e0c260(void)
{
  ((wxClassInfo *)((wxClassInfo *)&g_026da4c4))->wxClassInfo::wxClassInfo(L"WxDlgCreateUIStyle", (wxClassInfo *)(&wxDialog::ms_classInfo), (wxClassInfo *)0x0, 0x1c4, (wxObject *(__cdecl *)(void))(sub_013f9860));
  sub_01a37872(&sub_01e26ae0);
  return;
}
