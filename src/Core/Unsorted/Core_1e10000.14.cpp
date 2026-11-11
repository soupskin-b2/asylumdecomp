// Core_1e10000.cpp (part 14 of 24): 2 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

class wxClassInfo;
class wxObject;
class wxPanel;
class wxClassInfo {
    public:
    public: __declspec(dllimport) wxClassInfo(wchar_t const *,wxClassInfo const *,wxClassInfo const *,int,wxObject * (__cdecl*)(void));
    friend void sub_01e11540(void);
};

class wxObject {
    public:
};

class wxPanel {
    public:
    public: __declspec(dllimport) static wxClassInfo ms_classInfo;
    friend void sub_01e11540(void);
};

typedef void *_func_wxObject_ptr;

int sub_01a37872(...);
int sub_01e27420(void);
extern undefined4 g_026deb14;
// @baa 0x01e11540
void sub_01e11540(void)
{
  ((wxClassInfo *)((wxClassInfo *)&g_026deb14))->wxClassInfo::wxClassInfo(L"WxStylePropertiesGroup", (wxClassInfo *)(&wxPanel::ms_classInfo), (wxClassInfo *)0x0, 0x160, (wxObject *(__cdecl *)(void))((_func_wxObject_ptr *)0x0));
  sub_01a37872(&sub_01e27420);
  return;
}

class wxEventHashTable;
struct wxEventTable;
class wxEventHashTable {
    public:
    public: __declspec(dllimport) wxEventHashTable(wxEventTable const &);
    friend void sub_01e115f0(void);
};

struct wxEventTable {
    public:
};

int sub_01e27450(void);
extern undefined4 g_022bda60;
extern undefined4 g_026deb5c;
// @baa 0x01e115f0
void sub_01e115f0(void)
{
  ((wxEventHashTable *)((wxEventHashTable *)&g_026deb5c))->wxEventHashTable::wxEventHashTable(*(const wxEventTable *)((wxEventTable *)&g_022bda60));
  sub_01a37872(&sub_01e27450);
  return;
}
