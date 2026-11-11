// Core_1e10000.cpp (part 9 of 24): 2 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

class wxClassInfo;
class wxObject;
class wxPanel;
class wxClassInfo {
    public:
    public: __declspec(dllimport) wxClassInfo(wchar_t const *,wxClassInfo const *,wxClassInfo const *,int,wxObject * (__cdecl*)(void));
    friend void sub_01e10f20(void);
};

class wxObject {
    public:
};

class wxPanel {
    public:
    public: __declspec(dllimport) static wxClassInfo ms_classInfo;
    friend void sub_01e10f20(void);
};

typedef void *_func_wxObject_ptr;

int sub_01a37872(...);
int sub_01e27370(void);
extern undefined4 g_026de73c;
// @baa 0x01e10f20
void sub_01e10f20(void)
{
  ((wxClassInfo *)((wxClassInfo *)&g_026de73c))->wxClassInfo::wxClassInfo(L"WxImagePreviewPanelBase", (wxClassInfo *)(&wxPanel::ms_classInfo), (wxClassInfo *)0x0, 0x1ac, (wxObject *(__cdecl *)(void))((_func_wxObject_ptr *)0x0));
  sub_01a37872(&sub_01e27370);
  return;
}

class wxEventHashTable;
struct wxEventTable;
class wxEventHashTable {
    public:
    public: __declspec(dllimport) wxEventHashTable(wxEventTable const &);
    friend void sub_01e11050(void);
};

struct wxEventTable {
    public:
};

int sub_01e273b0(void);
extern undefined4 g_022bb8ec;
extern undefined4 g_026de7ec;
// @baa 0x01e11050
void sub_01e11050(void)
{
  ((wxEventHashTable *)((wxEventHashTable *)&g_026de7ec))->wxEventHashTable::wxEventHashTable(*(const wxEventTable *)((wxEventTable *)&g_022bb8ec));
  sub_01a37872(&sub_01e273b0);
  return;
}
