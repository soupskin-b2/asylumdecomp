// Core_1df0000.cpp (part 9 of 44): 2 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

class wxEventHashTable;
struct wxEventTable;
class wxEventHashTable {
    public:
    public: __declspec(dllimport) wxEventHashTable(wxEventTable const &);
    friend void sub_01dfa5f0(void);
};

struct wxEventTable {
    public:
};

int sub_01a37872(...);
int sub_01e25d00(void);
extern undefined4 g_021afda0;
extern undefined4 g_026cea2c;
// @baa 0x01dfa5f0
void sub_01dfa5f0(void)
{
  ((wxEventHashTable *)((wxEventHashTable *)&g_026cea2c))->wxEventHashTable::wxEventHashTable(*(const wxEventTable *)((wxEventTable *)&g_021afda0));
  sub_01a37872(&sub_01e25d00);
  return;
}

class wxClassInfo;
class wxFrame;
class wxObject;
class wxClassInfo {
    public:
    public: __declspec(dllimport) wxClassInfo(wchar_t const *,wxClassInfo const *,wxClassInfo const *,int,wxObject * (__cdecl*)(void));
    friend void sub_01dffad0(void);
};

class wxFrame {
    public:
    public: __declspec(dllimport) static wxClassInfo ms_classInfo;
    friend void sub_01dffad0(void);
};

class wxObject {
    public:
};

int sub_011c3240(void);
int sub_01e26020(void);
extern undefined4 g_026d2008;
// @baa 0x01dffad0
void sub_01dffad0(void)
{
  ((wxClassInfo *)((wxClassInfo *)&g_026d2008))->wxClassInfo::wxClassInfo(L"WxLogWindowFrame", (wxClassInfo *)(&wxFrame::ms_classInfo), (wxClassInfo *)0x0, 0x1a0, (wxObject *(__cdecl *)(void))(sub_011c3240));
  sub_01a37872(&sub_01e26020);
  return;
}
