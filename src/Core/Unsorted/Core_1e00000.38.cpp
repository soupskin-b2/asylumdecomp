// Core_1e00000.cpp (part 38 of 160): 2 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

class wxEventHashTable;
struct wxEventTable;
class wxEventHashTable {
    public:
    public: __declspec(dllimport) wxEventHashTable(wxEventTable const &);
    friend void sub_01e046e0(void);
};

struct wxEventTable {
    public:
};

int sub_01a37872(...);
int sub_01e26420(void);
extern undefined4 g_0221414c;
extern undefined4 g_026d5114;
// @baa 0x01e046e0
void sub_01e046e0(void)
{
  ((wxEventHashTable *)((wxEventHashTable *)&g_026d5114))->wxEventHashTable::wxEventHashTable(*(const wxEventTable *)((wxEventTable *)&g_0221414c));
  sub_01a37872(&sub_01e26420);
  return;
}

class wxClassInfo;
class wxFrame;
class wxObject;
class wxClassInfo {
    public:
    public: __declspec(dllimport) wxClassInfo(wchar_t const *,wxClassInfo const *,wxClassInfo const *,int,wxObject * (__cdecl*)(void));
    friend void sub_01e0d640(void);
};

class wxFrame {
    public:
    public: __declspec(dllimport) static wxClassInfo ms_classInfo;
    friend void sub_01e0d640(void);
};

class wxObject {
    public:
};

int sub_01436ea0(void);
int sub_01e26cd0(void);
extern undefined4 g_026db0b4;
// @baa 0x01e0d640
void sub_01e0d640(void)
{
  ((wxClassInfo *)((wxClassInfo *)&g_026db0b4))->wxClassInfo::wxClassInfo(L"WxSpeedTreeEditor", (wxClassInfo *)(&wxFrame::ms_classInfo), (wxClassInfo *)0x0, 0x1b4, (wxObject *(__cdecl *)(void))(sub_01436ea0));
  sub_01a37872(&sub_01e26cd0);
  return;
}
