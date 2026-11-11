// Core_1df0000.cpp (part 10 of 44): 2 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

class wxEventHashTable;
struct wxEventTable;
class wxEventHashTable {
    public:
    public: __declspec(dllimport) wxEventHashTable(wxEventTable const &);
    friend void sub_01dfa640(void);
};

struct wxEventTable {
    public:
};

int sub_01a37872(...);
int sub_01e25d10(void);
extern undefined4 g_025e85b8;
extern undefined4 g_026cea58;
// @baa 0x01dfa640
void sub_01dfa640(void)
{
  ((wxEventHashTable *)((wxEventHashTable *)&g_026cea58))->wxEventHashTable::wxEventHashTable(*(const wxEventTable *)((wxEventTable *)&g_025e85b8));
  sub_01a37872(&sub_01e25d10);
  return;
}

class wxClassInfo;
class wxObject;
class wxPanel;
class wxClassInfo {
    public:
    public: __declspec(dllimport) wxClassInfo(wchar_t const *,wxClassInfo const *,wxClassInfo const *,int,wxObject * (__cdecl*)(void));
    friend void sub_01dffb70(void);
};

class wxObject {
    public:
};

class wxPanel {
    public:
    public: __declspec(dllimport) static wxClassInfo ms_classInfo;
    friend void sub_01dffb70(void);
};

int sub_011c32b0(void);
int sub_01e26040(void);
extern undefined4 g_026d2060;
// @baa 0x01dffb70
void sub_01dffb70(void)
{
  ((wxClassInfo *)((wxClassInfo *)&g_026d2060))->wxClassInfo::wxClassInfo(L"WxLogWindow", (wxClassInfo *)(&wxPanel::ms_classInfo), (wxClassInfo *)0x0, 0x16c, (wxObject *(__cdecl *)(void))(sub_011c32b0));
  sub_01a37872(&sub_01e26040);
  return;
}
