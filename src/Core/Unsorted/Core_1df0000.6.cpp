// Core_1df0000.cpp (part 6 of 44): 2 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

class wxEventHashTable;
struct wxEventTable;
class wxEventHashTable {
    public:
    public: __declspec(dllimport) wxEventHashTable(wxEventTable const &);
    friend void sub_01dfa4b0(void);
};

struct wxEventTable {
    public:
};

int sub_01a37872(...);
int sub_01e25cd0(void);
extern undefined4 g_025e85b0;
extern undefined4 g_026ce958;
// @baa 0x01dfa4b0
void sub_01dfa4b0(void)
{
  ((wxEventHashTable *)((wxEventHashTable *)&g_026ce958))->wxEventHashTable::wxEventHashTable(*(const wxEventTable *)((wxEventTable *)&g_025e85b0));
  sub_01a37872(&sub_01e25cd0);
  return;
}

class wxClassInfo;
class wxEvtHandler;
class wxObject;
class wxClassInfo {
    public:
    public: __declspec(dllimport) wxClassInfo(wchar_t const *,wxClassInfo const *,wxClassInfo const *,int,wxObject * (__cdecl*)(void));
    friend void sub_01dfb540(void);
};

class wxEvtHandler {
    public:
    public: __declspec(dllimport) static wxClassInfo ms_classInfo;
    friend void sub_01dfb540(void);
};

class wxObject {
    public:
};

int sub_0111bb10(void);
int sub_01e25e10(void);
extern undefined4 g_026cf3e4;
// @baa 0x01dfb540
void sub_01dfb540(void)
{
  ((wxClassInfo *)((wxClassInfo *)&g_026cf3e4))->wxClassInfo::wxClassInfo(L"WxDockableWindowMenuHandler", (wxClassInfo *)(&wxEvtHandler::ms_classInfo), (wxClassInfo *)0x0, 0x30, (wxObject *(__cdecl *)(void))(sub_0111bb10));
  sub_01a37872(&sub_01e25e10);
  return;
}
