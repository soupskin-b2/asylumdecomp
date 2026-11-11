// Core_1e00000.cpp (part 10 of 160): 2 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

class wxEventHashTable;
struct wxEventTable;
class wxEventHashTable {
    public:
    public: __declspec(dllimport) wxEventHashTable(wxEventTable const &);
    friend void sub_01e00a50(void);
};

struct wxEventTable {
    public:
};

int sub_01a37872(...);
int sub_01e261a0(void);
extern undefined4 g_021e6d60;
extern undefined4 g_026d2990;
// @baa 0x01e00a50
void sub_01e00a50(void)
{
  ((wxEventHashTable *)((wxEventHashTable *)&g_026d2990))->wxEventHashTable::wxEventHashTable(*(const wxEventTable *)((wxEventTable *)&g_021e6d60));
  sub_01a37872(&sub_01e261a0);
  return;
}

class wxClassInfo;
class wxObject;
class wxWindow;
class wxClassInfo {
    public:
    public: __declspec(dllimport) wxClassInfo(wchar_t const *,wxClassInfo const *,wxClassInfo const *,int,wxObject * (__cdecl*)(void));
    friend void sub_01e041d0(void);
};

class wxObject {
    public:
};

class wxWindow {
    public:
    public: __declspec(dllimport) static wxClassInfo ms_classInfo;
    friend void sub_01e041d0(void);
};

int sub_01284bd0(void);
int sub_01e26380(void);
extern undefined4 g_026d4e24;
// @baa 0x01e041d0
void sub_01e041d0(void)
{
  ((wxClassInfo *)((wxClassInfo *)&g_026d4e24))->wxClassInfo::wxClassInfo(L"WxTrackableWindow", (wxClassInfo *)(&wxWindow::ms_classInfo), (wxClassInfo *)0x0, 0x148, (wxObject *(__cdecl *)(void))(sub_01284bd0));
  sub_01a37872(&sub_01e26380);
  return;
}
