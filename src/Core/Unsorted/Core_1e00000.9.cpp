// Core_1e00000.cpp (part 9 of 160): 2 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

class wxEventHashTable;
struct wxEventTable;
class wxEventHashTable {
    public:
    public: __declspec(dllimport) wxEventHashTable(wxEventTable const &);
    friend void sub_01e00950(void);
};

struct wxEventTable {
    public:
};

int sub_01a37872(...);
int sub_01e26180(void);
extern undefined4 g_021e6cd8;
extern undefined4 g_026d28e8;
// @baa 0x01e00950
void sub_01e00950(void)
{
  ((wxEventHashTable *)((wxEventHashTable *)&g_026d28e8))->wxEventHashTable::wxEventHashTable(*(const wxEventTable *)((wxEventTable *)&g_021e6cd8));
  sub_01a37872(&sub_01e26180);
  return;
}

class wxClassInfo;
class wxObject;
class wxClassInfo {
    public:
    public: __declspec(dllimport) wxClassInfo(wchar_t const *,wxClassInfo const *,wxClassInfo const *,int,wxObject * (__cdecl*)(void));
    friend void sub_01e01e60(void);
};

class wxObject {
    public:
};

int sub_01242be0(void);
int sub_01e26300(void);
extern undefined4 g_026d36d4;
extern undefined4 g_026d4ee0;
// @baa 0x01e01e60
void sub_01e01e60(void)
{
  ((wxClassInfo *)((wxClassInfo *)&g_026d36d4))->wxClassInfo::wxClassInfo(L"WxStaticMeshEditor", (wxClassInfo *)&g_026d4ee0, (wxClassInfo *)0x0, 0x3ac, (wxObject *(__cdecl *)(void))(sub_01242be0));
  sub_01a37872(&sub_01e26300);
  return;
}
