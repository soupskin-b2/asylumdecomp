// Core_1e10000.cpp (part 8 of 24): 2 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

class wxClassInfo;
class wxObject;
class wxPanel;
class wxClassInfo {
    public:
    public: __declspec(dllimport) wxClassInfo(wchar_t const *,wxClassInfo const *,wxClassInfo const *,int,wxObject * (__cdecl*)(void));
    friend void sub_01e10e60(void);
};

class wxObject {
    public:
};

class wxPanel {
    public:
    public: __declspec(dllimport) static wxClassInfo ms_classInfo;
    friend void sub_01e10e60(void);
};

int sub_014e8990(void);
int sub_01a37872(...);
int sub_01e27350(void);
extern undefined4 g_026de6d0;
// @baa 0x01e10e60
void sub_01e10e60(void)
{
  ((wxClassInfo *)((wxClassInfo *)&g_026de6d0))->wxClassInfo::wxClassInfo(L"WxTextPreviewPanel", (wxClassInfo *)(&wxPanel::ms_classInfo), (wxClassInfo *)0x0, 400, (wxObject *(__cdecl *)(void))(sub_014e8990));
  sub_01a37872(&sub_01e27350);
  return;
}

class wxEventHashTable;
struct wxEventTable;
class wxEventHashTable {
    public:
    public: __declspec(dllimport) wxEventHashTable(wxEventTable const &);
    friend void sub_01e10fc0(void);
};

struct wxEventTable {
    public:
};

int sub_01e27390(void);
extern undefined4 g_022bb8a8;
extern undefined4 g_026de794;
// @baa 0x01e10fc0
void sub_01e10fc0(void)
{
  ((wxEventHashTable *)((wxEventHashTable *)&g_026de794))->wxEventHashTable::wxEventHashTable(*(const wxEventTable *)((wxEventTable *)&g_022bb8a8));
  sub_01a37872(&sub_01e27390);
  return;
}
