// Core_1e00000.cpp (part 26 of 160): 2 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

class wxEventHashTable;
struct wxEventTable;
class wxEventHashTable {
    public:
    public: __declspec(dllimport) wxEventHashTable(wxEventTable const &);
    friend void sub_01e01e90(void);
};

struct wxEventTable {
    public:
};

int sub_01a37872(...);
int sub_01e26310(void);
extern undefined4 g_021fc054;
extern undefined4 g_026d36ec;
// @baa 0x01e01e90
void sub_01e01e90(void)
{
  ((wxEventHashTable *)((wxEventHashTable *)&g_026d36ec))->wxEventHashTable::wxEventHashTable(*(const wxEventTable *)((wxEventTable *)&g_021fc054));
  sub_01a37872(&sub_01e26310);
  return;
}

class wxClassInfo;
class wxDialog;
class wxObject;
class wxClassInfo {
    public:
    public: __declspec(dllimport) wxClassInfo(wchar_t const *,wxClassInfo const *,wxClassInfo const *,int,wxObject * (__cdecl*)(void));
    friend void sub_01e0b960(void);
};

class wxDialog {
    public:
    public: __declspec(dllimport) static wxClassInfo ms_classInfo;
    friend void sub_01e0b960(void);
};

class wxObject {
    public:
};

int sub_013df2d0(void);
int sub_01e26a50(void);
extern undefined4 g_026d9f14;
// @baa 0x01e0b960
void sub_01e0b960(void)
{
  ((wxClassInfo *)((wxClassInfo *)&g_026d9f14))->wxClassInfo::wxClassInfo(L"WxDlgEditSoundCue", (wxClassInfo *)(&wxDialog::ms_classInfo), (wxClassInfo *)0x0, 0x1d0, (wxObject *(__cdecl *)(void))(sub_013df2d0));
  sub_01a37872(&sub_01e26a50);
  return;
}
