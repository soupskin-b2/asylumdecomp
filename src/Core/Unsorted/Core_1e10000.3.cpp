// Core_1e10000.cpp (part 3 of 24): 2 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

class wxClassInfo;
class wxObject;
class wxClassInfo {
    public:
    public: __declspec(dllimport) wxClassInfo(wchar_t const *,wxClassInfo const *,wxClassInfo const *,int,wxObject * (__cdecl*)(void));
    friend void sub_01e10060(void);
};

class wxObject {
    public:
};

int sub_014b2550(void);
int sub_01a37872(...);
int sub_01e27280(void);
extern undefined4 g_026ddd2c;
extern undefined4 g_026dddbc;
// @baa 0x01e10060
void sub_01e10060(void)
{
  ((wxClassInfo *)((wxClassInfo *)&g_026dddbc))->wxClassInfo::wxClassInfo(L"WxUIObjectOptionsContextMenu", (wxClassInfo *)&g_026ddd2c, (wxClassInfo *)0x0, 0xa4, (wxObject *(__cdecl *)(void))(sub_014b2550));
  sub_01a37872(&sub_01e27280);
  return;
}

class wxEventHashTable;
struct wxEventTable;
class wxEventHashTable {
    public:
    public: __declspec(dllimport) wxEventHashTable(wxEventTable const &);
    friend void sub_01e10230(void);
};

struct wxEventTable {
    public:
};

int sub_01e27320(void);
extern undefined4 g_025e9408;
extern undefined4 g_026ddf0c;
// @baa 0x01e10230
void sub_01e10230(void)
{
  ((wxEventHashTable *)((wxEventHashTable *)&g_026ddf0c))->wxEventHashTable::wxEventHashTable(*(const wxEventTable *)((wxEventTable *)&g_025e9408));
  sub_01a37872(&sub_01e27320);
  return;
}
