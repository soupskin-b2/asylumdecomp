// Core_1e00000.cpp (part 12 of 160): 2 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

class wxEventHashTable;
struct wxEventTable;
class wxEventHashTable {
    public:
    public: __declspec(dllimport) wxEventHashTable(wxEventTable const &);
    friend void sub_01e00be0(void);
};

struct wxEventTable {
    public:
};

int sub_01a37872(...);
int sub_01e261d0(void);
extern undefined4 g_025e8714;
extern undefined4 g_026d2af8;
// @baa 0x01e00be0
void sub_01e00be0(void)
{
  ((wxEventHashTable *)((wxEventHashTable *)&g_026d2af8))->wxEventHashTable::wxEventHashTable(*(const wxEventTable *)((wxEventTable *)&g_025e8714));
  sub_01a37872(&sub_01e261d0);
  return;
}

class wxClassInfo;
class wxDialog;
class wxObject;
class wxClassInfo {
    public:
    public: __declspec(dllimport) wxClassInfo(wchar_t const *,wxClassInfo const *,wxClassInfo const *,int,wxObject * (__cdecl*)(void));
    friend void sub_01e04390(void);
};

class wxDialog {
    public:
    public: __declspec(dllimport) static wxClassInfo ms_classInfo;
    friend void sub_01e04390(void);
};

class wxObject {
    public:
};

int sub_01284f00(void);
int sub_01e263c0(void);
extern undefined4 g_026d4f60;
// @baa 0x01e04390
void sub_01e04390(void)
{
  ((wxClassInfo *)((wxClassInfo *)&g_026d4f60))->wxClassInfo::wxClassInfo(L"WxTrackableDialog", (wxClassInfo *)(&wxDialog::ms_classInfo), (wxClassInfo *)0x0, 0x1a4, (wxObject *(__cdecl *)(void))(sub_01284f00));
  sub_01a37872(&sub_01e263c0);
  return;
}
