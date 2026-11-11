// Core_1e00000.cpp (part 19 of 160): 2 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

class wxEventHashTable;
struct wxEventTable;
class wxEventHashTable {
    public:
    public: __declspec(dllimport) wxEventHashTable(wxEventTable const &);
    friend void sub_01e01590(void);
};

struct wxEventTable {
    public:
};

int sub_01a37872(...);
int sub_01e26250(void);
extern undefined4 g_025e8744;
extern undefined4 g_026d311c;
// @baa 0x01e01590
void sub_01e01590(void)
{
  ((wxEventHashTable *)((wxEventHashTable *)&g_026d311c))->wxEventHashTable::wxEventHashTable(*(const wxEventTable *)((wxEventTable *)&g_025e8744));
  sub_01a37872(&sub_01e26250);
  return;
}

class wxClassInfo;
class wxObject;
class wxClassInfo {
    public:
    public: __declspec(dllimport) wxClassInfo(wchar_t const *,wxClassInfo const *,wxClassInfo const *,int,wxObject * (__cdecl*)(void));
    friend void sub_01e08d70(void);
};

class wxObject {
    public:
};

int sub_01387360(void);
int sub_01e26770(void);
extern undefined4 g_026cf1b4;
extern undefined4 g_026d8360;
// @baa 0x01e08d70
void sub_01e08d70(void)
{
  ((wxClassInfo *)((wxClassInfo *)&g_026d8360))->wxClassInfo::wxClassInfo(L"WxPrimitiveStatsBrowser", (wxClassInfo *)&g_026cf1b4, (wxClassInfo *)0x0, 0x198, (wxObject *(__cdecl *)(void))(sub_01387360));
  sub_01a37872(&sub_01e26770);
  return;
}
