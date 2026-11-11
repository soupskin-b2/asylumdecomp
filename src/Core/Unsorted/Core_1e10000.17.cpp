// Core_1e10000.cpp (part 17 of 24): 2 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

class wxClassInfo;
class wxObject;
class wxClassInfo {
    public:
    public: __declspec(dllimport) wxClassInfo(wchar_t const *,wxClassInfo const *,wxClassInfo const *,int,wxObject * (__cdecl*)(void));
    friend void sub_01e11920(void);
};

class wxObject {
    public:
};

int sub_014f1f70(void);
int sub_01a37872(...);
int sub_01e27480(void);
extern undefined4 g_026deb14;
extern undefined4 g_026ded9c;
// @baa 0x01e11920
void sub_01e11920(void)
{
  ((wxClassInfo *)((wxClassInfo *)&g_026ded9c))->wxClassInfo::wxClassInfo(L"WxStyleImagePropertiesGroup", (wxClassInfo *)&g_026deb14, (wxClassInfo *)0x0, 0x180, (wxObject *(__cdecl *)(void))(sub_014f1f70));
  sub_01a37872(&sub_01e27480);
  return;
}

class wxEventHashTable;
struct wxEventTable;
class wxEventHashTable {
    public:
    public: __declspec(dllimport) wxEventHashTable(wxEventTable const &);
    friend void sub_01e119c0(void);
};

struct wxEventTable {
    public:
};

int sub_01e274b0(void);
extern undefined4 g_022c0ce8;
extern undefined4 g_026dede4;
// @baa 0x01e119c0
void sub_01e119c0(void)
{
  ((wxEventHashTable *)((wxEventHashTable *)&g_026dede4))->wxEventHashTable::wxEventHashTable(*(const wxEventTable *)((wxEventTable *)&g_022c0ce8));
  sub_01a37872(&sub_01e274b0);
  return;
}
