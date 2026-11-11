// Core_1e00000.cpp (part 42 of 160): 2 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

class wxEventHashTable;
struct wxEventTable;
class wxEventHashTable {
    public:
    public: __declspec(dllimport) wxEventHashTable(wxEventTable const &);
    friend void sub_01e04b00(void);
};

struct wxEventTable {
    public:
};

int sub_01a37872(...);
int sub_01e26480(void);
extern undefined4 g_025e8d44;
extern undefined4 g_026d57a0;
// @baa 0x01e04b00
void sub_01e04b00(void)
{
  ((wxEventHashTable *)((wxEventHashTable *)&g_026d57a0))->wxEventHashTable::wxEventHashTable(*(const wxEventTable *)((wxEventTable *)&g_025e8d44));
  sub_01a37872(&sub_01e26480);
  return;
}

class wxClassInfo;
class wxObject;
class wxPanel;
class wxClassInfo {
    public:
    public: __declspec(dllimport) wxClassInfo(wchar_t const *,wxClassInfo const *,wxClassInfo const *,int,wxObject * (__cdecl*)(void));
    friend void sub_01e0fb50(void);
};

class wxObject {
    public:
};

class wxPanel {
    public:
    public: __declspec(dllimport) static wxClassInfo ms_classInfo;
    friend void sub_01e0fb50(void);
};

int sub_0149e960(void);
int sub_01e271b0(void);
extern undefined4 g_026ddadc;
// @baa 0x01e0fb50
void sub_01e0fb50(void)
{
  ((wxClassInfo *)((wxClassInfo *)&g_026ddadc))->wxClassInfo::wxClassInfo(L"WxStyleBrowser", (wxClassInfo *)(&wxPanel::ms_classInfo), (wxClassInfo *)0x0, 0x160, (wxObject *(__cdecl *)(void))(sub_0149e960));
  sub_01a37872(&sub_01e271b0);
  return;
}
