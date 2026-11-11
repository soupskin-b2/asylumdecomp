// Core_1e10000.cpp (part 13 of 24): 2 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

class wxClassInfo;
class wxObject;
class wxPanel;
class wxClassInfo {
    public:
    public: __declspec(dllimport) wxClassInfo(wchar_t const *,wxClassInfo const *,wxClassInfo const *,int,wxObject * (__cdecl*)(void));
    friend void sub_01e11300(void);
};

class wxObject {
    public:
};

class wxPanel {
    public:
    public: __declspec(dllimport) static wxClassInfo ms_classInfo;
    friend void sub_01e11300(void);
};

int sub_014e8f60(void);
int sub_01a37872(...);
int sub_01e27400(void);
extern undefined4 g_026de9a4;
// @baa 0x01e11300
void sub_01e11300(void)
{
  ((wxClassInfo *)((wxClassInfo *)&g_026de9a4))->wxClassInfo::wxClassInfo(L"WxImageAdjustmentPanel", (wxClassInfo *)(&wxPanel::ms_classInfo), (wxClassInfo *)0x0, 0x1a4, (wxObject *(__cdecl *)(void))(sub_014e8f60));
  sub_01a37872(&sub_01e27400);
  return;
}

class wxEventHashTable;
struct wxEventTable;
class wxEventHashTable {
    public:
    public: __declspec(dllimport) wxEventHashTable(wxEventTable const &);
    friend void sub_01e11580(void);
};

struct wxEventTable {
    public:
};

int sub_01e27430(void);
extern undefined4 g_025e9430;
extern undefined4 g_026deb2c;
// @baa 0x01e11580
void sub_01e11580(void)
{
  ((wxEventHashTable *)((wxEventHashTable *)&g_026deb2c))->wxEventHashTable::wxEventHashTable(*(const wxEventTable *)((wxEventTable *)&g_025e9430));
  sub_01a37872(&sub_01e27430);
  return;
}
