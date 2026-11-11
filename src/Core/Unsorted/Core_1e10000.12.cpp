// Core_1e10000.cpp (part 12 of 24): 2 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

class wxClassInfo;
class wxObject;
class wxPanel;
class wxClassInfo {
    public:
    public: __declspec(dllimport) wxClassInfo(wchar_t const *,wxClassInfo const *,wxClassInfo const *,int,wxObject * (__cdecl*)(void));
    friend void sub_01e11140(void);
};

class wxObject {
    public:
};

class wxPanel {
    public:
    public: __declspec(dllimport) static wxClassInfo ms_classInfo;
    friend void sub_01e11140(void);
};

int sub_014e8e60(void);
int sub_01a37872(...);
int sub_01e273e0(void);
extern undefined4 g_026de884;
// @baa 0x01e11140
void sub_01e11140(void)
{
  ((wxClassInfo *)((wxClassInfo *)&g_026de884))->wxClassInfo::wxClassInfo(L"WxColorAdjustmentPanel", (wxClassInfo *)(&wxPanel::ms_classInfo), (wxClassInfo *)0x0, 0x170, (wxObject *(__cdecl *)(void))(sub_014e8e60));
  sub_01a37872(&sub_01e273e0);
  return;
}

class wxEventHashTable;
struct wxEventTable;
class wxEventHashTable {
    public:
    public: __declspec(dllimport) wxEventHashTable(wxEventTable const &);
    friend void sub_01e11340(void);
};

struct wxEventTable {
    public:
};

int sub_01e27410(void);
extern undefined4 g_025e9428;
extern undefined4 g_026de9bc;
// @baa 0x01e11340
void sub_01e11340(void)
{
  ((wxEventHashTable *)((wxEventHashTable *)&g_026de9bc))->wxEventHashTable::wxEventHashTable(*(const wxEventTable *)((wxEventTable *)&g_025e9428));
  sub_01a37872(&sub_01e27410);
  return;
}
