// Core_1e00000.cpp (part 28 of 160): 2 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

class wxEventHashTable;
struct wxEventTable;
class wxEventHashTable {
    public:
    public: __declspec(dllimport) wxEventHashTable(wxEventTable const &);
    friend void sub_01e02930(void);
};

struct wxEventTable {
    public:
};

int sub_01a37872(...);
int sub_01e26330(void);
extern undefined4 g_025e8bcc;
extern undefined4 g_026d3dd4;
// @baa 0x01e02930
void sub_01e02930(void)
{
  ((wxEventHashTable *)((wxEventHashTable *)&g_026d3dd4))->wxEventHashTable::wxEventHashTable(*(const wxEventTable *)((wxEventTable *)&g_025e8bcc));
  sub_01a37872(&sub_01e26330);
  return;
}

class wxClassInfo;
class wxDialog;
class wxObject;
class wxClassInfo {
    public:
    public: __declspec(dllimport) wxClassInfo(wchar_t const *,wxClassInfo const *,wxClassInfo const *,int,wxObject * (__cdecl*)(void));
    friend void sub_01e0c320(void);
};

class wxDialog {
    public:
    public: __declspec(dllimport) static wxClassInfo ms_classInfo;
    friend void sub_01e0c320(void);
};

class wxObject {
    public:
};

int sub_013ddac0(void);
int sub_01e26b00(void);
extern undefined4 g_026da4f4;
// @baa 0x01e0c320
void sub_01e0c320(void)
{
  ((wxClassInfo *)((wxClassInfo *)&g_026da4f4))->wxClassInfo::wxClassInfo(L"WxDlgCreateUISkin", (wxClassInfo *)(&wxDialog::ms_classInfo), (wxClassInfo *)0x0, 0x1b8, (wxObject *(__cdecl *)(void))(sub_013ddac0));
  sub_01a37872(&sub_01e26b00);
  return;
}
