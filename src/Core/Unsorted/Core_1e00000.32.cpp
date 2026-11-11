// Core_1e00000.cpp (part 32 of 160): 2 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

class wxEventHashTable;
struct wxEventTable;
class wxEventHashTable {
    public:
    public: __declspec(dllimport) wxEventHashTable(wxEventTable const &);
    friend void sub_01e04210(void);
};

struct wxEventTable {
    public:
};

int sub_01a37872(...);
int sub_01e26390(void);
extern undefined4 g_025e8cb4;
extern undefined4 g_026d4e3c;
// @baa 0x01e04210
void sub_01e04210(void)
{
  ((wxEventHashTable *)((wxEventHashTable *)&g_026d4e3c))->wxEventHashTable::wxEventHashTable(*(const wxEventTable *)((wxEventTable *)&g_025e8cb4));
  sub_01a37872(&sub_01e26390);
  return;
}

class wxClassInfo;
class wxObject;
class wxPanel;
class wxClassInfo {
    public:
    public: __declspec(dllimport) wxClassInfo(wchar_t const *,wxClassInfo const *,wxClassInfo const *,int,wxObject * (__cdecl*)(void));
    friend void sub_01e0c5c0(void);
};

class wxObject {
    public:
};

class wxPanel {
    public:
    public: __declspec(dllimport) static wxClassInfo ms_classInfo;
    friend void sub_01e0c5c0(void);
};

int sub_013ddd80(void);
int sub_01e26b70(void);
extern undefined4 g_026da67c;
// @baa 0x01e0c5c0
void sub_01e0c5c0(void)
{
  ((wxClassInfo *)((wxClassInfo *)&g_026da67c))->wxClassInfo::wxClassInfo(L"WxUILayerBrowser", (wxClassInfo *)(&wxPanel::ms_classInfo), (wxClassInfo *)0x0, 0x158, (wxObject *(__cdecl *)(void))(sub_013ddd80));
  sub_01a37872(&sub_01e26b70);
  return;
}
