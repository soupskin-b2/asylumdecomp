// Core_1e00000.cpp (part 33 of 160): 2 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

class wxEventHashTable;
struct wxEventTable;
class wxEventHashTable {
    public:
    public: __declspec(dllimport) wxEventHashTable(wxEventTable const &);
    friend void sub_01e042f0(void);
};

struct wxEventTable {
    public:
};

int sub_01a37872(...);
int sub_01e263b0(void);
extern undefined4 g_025e8cbc;
extern undefined4 g_026d4ef8;
// @baa 0x01e042f0
void sub_01e042f0(void)
{
  ((wxEventHashTable *)((wxEventHashTable *)&g_026d4ef8))->wxEventHashTable::wxEventHashTable(*(const wxEventTable *)((wxEventTable *)&g_025e8cbc));
  sub_01a37872(&sub_01e263b0);
  return;
}

class wxClassInfo;
class wxDialog;
class wxObject;
class wxClassInfo {
    public:
    public: __declspec(dllimport) wxClassInfo(wchar_t const *,wxClassInfo const *,wxClassInfo const *,int,wxObject * (__cdecl*)(void));
    friend void sub_01e0c8e0(void);
};

class wxDialog {
    public:
    public: __declspec(dllimport) static wxClassInfo ms_classInfo;
    friend void sub_01e0c8e0(void);
};

class wxObject {
    public:
};

int sub_0140c9e0(void);
int sub_01e26bc0(void);
extern undefined4 g_026da8b8;
// @baa 0x01e0c8e0
void sub_01e0c8e0(void)
{
  ((wxClassInfo *)((wxClassInfo *)&g_026da8b8))->wxClassInfo::wxClassInfo(L"WxDlgAddCalloutButton", (wxClassInfo *)(&wxDialog::ms_classInfo), (wxClassInfo *)0x0, 0x1bc, (wxObject *(__cdecl *)(void))(sub_0140c9e0));
  sub_01a37872(&sub_01e26bc0);
  return;
}
