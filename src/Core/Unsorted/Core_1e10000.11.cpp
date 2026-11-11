// Core_1e10000.cpp (part 11 of 24): 2 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

class wxClassInfo;
class wxObject;
class wxClassInfo {
    public:
    public: __declspec(dllimport) wxClassInfo(wchar_t const *,wxClassInfo const *,wxClassInfo const *,int,wxObject * (__cdecl*)(void));
    friend void sub_01e110b0(void);
};

class wxObject {
    public:
};

int sub_014f0c00(void);
int sub_01a37872(...);
int sub_01e273c0(void);
extern undefined4 g_026de73c;
extern undefined4 g_026de82c;
// @baa 0x01e110b0
void sub_01e110b0(void)
{
  ((wxClassInfo *)((wxClassInfo *)&g_026de82c))->wxClassInfo::wxClassInfo(L"WxImagePreviewPanel", (wxClassInfo *)&g_026de73c, (wxClassInfo *)0x0, 0x1ac, (wxObject *(__cdecl *)(void))(sub_014f0c00));
  sub_01a37872(&sub_01e273c0);
  return;
}

class wxEventHashTable;
struct wxEventTable;
class wxEventHashTable {
    public:
    public: __declspec(dllimport) wxEventHashTable(wxEventTable const &);
    friend void sub_01e11180(void);
};

struct wxEventTable {
    public:
};

int sub_01e273f0(void);
extern undefined4 g_025e9420;
extern undefined4 g_026de89c;
// @baa 0x01e11180
void sub_01e11180(void)
{
  ((wxEventHashTable *)((wxEventHashTable *)&g_026de89c))->wxEventHashTable::wxEventHashTable(*(const wxEventTable *)((wxEventTable *)&g_025e9420));
  sub_01a37872(&sub_01e273f0);
  return;
}
