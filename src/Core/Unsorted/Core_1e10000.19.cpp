// Core_1e10000.cpp (part 19 of 24): 2 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

class wxClassInfo;
class wxDialog;
class wxObject;
class wxClassInfo {
    public:
    public: __declspec(dllimport) wxClassInfo(wchar_t const *,wxClassInfo const *,wxClassInfo const *,int,wxObject * (__cdecl*)(void));
    friend void sub_01e11b00(void);
};

class wxDialog {
    public:
    public: __declspec(dllimport) static wxClassInfo ms_classInfo;
    friend void sub_01e11b00(void);
};

class wxObject {
    public:
};

int sub_014de750(void);
int sub_01a37872(...);
int sub_01e274c0(void);
extern undefined4 g_026deeb4;
// @baa 0x01e11b00
void sub_01e11b00(void)
{
  ((wxClassInfo *)((wxClassInfo *)&g_026deeb4))->wxClassInfo::wxClassInfo(L"WxDlgEditUIStyle", (wxClassInfo *)(&wxDialog::ms_classInfo), (wxClassInfo *)0x0, 0x4b8, (wxObject *(__cdecl *)(void))(sub_014de750));
  sub_01a37872(&sub_01e274c0);
  return;
}

class wxEventHashTable;
struct wxEventTable;
class wxEventHashTable {
    public:
    public: __declspec(dllimport) wxEventHashTable(wxEventTable const &);
    friend void sub_01e11c60(void);
};

struct wxEventTable {
    public:
};

int sub_01e274f0(void);
extern undefined4 g_025e9440;
extern undefined4 g_026def78;
// @baa 0x01e11c60
void sub_01e11c60(void)
{
  ((wxEventHashTable *)((wxEventHashTable *)&g_026def78))->wxEventHashTable::wxEventHashTable(*(const wxEventTable *)((wxEventTable *)&g_025e9440));
  sub_01a37872(&sub_01e274f0);
  return;
}
