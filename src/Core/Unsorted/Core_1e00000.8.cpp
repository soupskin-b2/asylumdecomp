// Core_1e00000.cpp (part 8 of 160): 2 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

class wxEventHashTable;
struct wxEventTable;
class wxEventHashTable {
    public:
    public: __declspec(dllimport) wxEventHashTable(wxEventTable const &);
    friend void sub_01e008a0(void);
};

struct wxEventTable {
    public:
};

int sub_01a37872(...);
int sub_01e26160(void);
extern undefined4 g_021e6ae4;
extern undefined4 g_026d28b8;
// @baa 0x01e008a0
void sub_01e008a0(void)
{
  ((wxEventHashTable *)((wxEventHashTable *)&g_026d28b8))->wxEventHashTable::wxEventHashTable(*(const wxEventTable *)((wxEventTable *)&g_021e6ae4));
  sub_01a37872(&sub_01e26160);
  return;
}

class wxClassInfo;
class wxObject;
class wxTextCtrl;
class wxClassInfo {
    public:
    public: __declspec(dllimport) wxClassInfo(wchar_t const *,wxClassInfo const *,wxClassInfo const *,int,wxObject * (__cdecl*)(void));
    friend void sub_01e00c40(void);
};

class wxObject {
    public:
};

class wxTextCtrl {
    public:
    public: __declspec(dllimport) static wxClassInfo ms_classInfo;
    friend void sub_01e00c40(void);
};

int sub_011f8bb0(void);
int sub_01e261e0(void);
extern undefined4 g_026d2b38;
// @baa 0x01e00c40
void sub_01e00c40(void)
{
  ((wxClassInfo *)((wxClassInfo *)&g_026d2b38))->wxClassInfo::wxClassInfo(L"UPropertyInputText::WxPropertyItemTextCtrl", (wxClassInfo *)(&wxTextCtrl::ms_classInfo), (wxClassInfo *)0x0, 0x1c8, (wxObject *(__cdecl *)(void))(sub_011f8bb0));
  sub_01a37872(&sub_01e261e0);
  return;
}
