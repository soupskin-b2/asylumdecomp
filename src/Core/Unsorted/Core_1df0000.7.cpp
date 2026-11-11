// Core_1df0000.cpp (part 7 of 44): 2 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

class wxEventHashTable;
struct wxEventTable;
class wxEventHashTable {
    public:
    public: __declspec(dllimport) wxEventHashTable(wxEventTable const &);
    friend void sub_01dfa530(void);
};

struct wxEventTable {
    public:
};

int sub_01a37872(...);
int sub_01e25ce0(void);
extern undefined4 g_021afb50;
extern undefined4 g_026ce9ac;
// @baa 0x01dfa530
void sub_01dfa530(void)
{
  ((wxEventHashTable *)((wxEventHashTable *)&g_026ce9ac))->wxEventHashTable::wxEventHashTable(*(const wxEventTable *)((wxEventTable *)&g_021afb50));
  sub_01a37872(&sub_01e25ce0);
  return;
}

class wxClassInfo;
class wxFrame;
class wxObject;
class wxClassInfo {
    public:
    public: __declspec(dllimport) wxClassInfo(wchar_t const *,wxClassInfo const *,wxClassInfo const *,int,wxObject * (__cdecl*)(void));
    friend void sub_01dfe060(void);
};

class wxFrame {
    public:
    public: __declspec(dllimport) static wxClassInfo ms_classInfo;
    friend void sub_01dfe060(void);
};

class wxObject {
    public:
};

int sub_011411c0(void);
int sub_01e25ec0(void);
extern undefined4 g_026d0e28;
// @baa 0x01dfe060
void sub_01dfe060(void)
{
  ((wxClassInfo *)((wxClassInfo *)&g_026d0e28))->wxClassInfo::wxClassInfo(L"WxEditorFrame", (wxClassInfo *)(&wxFrame::ms_classInfo), (wxClassInfo *)0x0, 0x290, (wxObject *(__cdecl *)(void))(sub_011411c0));
  sub_01a37872(&sub_01e25ec0);
  return;
}
