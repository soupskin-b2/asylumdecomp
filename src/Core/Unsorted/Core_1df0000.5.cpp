// Core_1df0000.cpp (part 5 of 44): 2 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

class wxEventHashTable;
struct wxEventTable;
class wxEventHashTable {
    public:
    public: __declspec(dllimport) wxEventHashTable(wxEventTable const &);
    friend void sub_01dfa440(void);
};

struct wxEventTable {
    public:
};

int sub_01a37872(...);
int sub_01e25cc0(void);
extern undefined4 g_025e85a8;
extern undefined4 g_026ce918;
// @baa 0x01dfa440
void sub_01dfa440(void)
{
  ((wxEventHashTable *)((wxEventHashTable *)&g_026ce918))->wxEventHashTable::wxEventHashTable(*(const wxEventTable *)((wxEventTable *)&g_025e85a8));
  sub_01a37872(&sub_01e25cc0);
  return;
}

class wxAuiManager;
class wxClassInfo;
class wxObject;
class wxAuiManager {
    public:
    public: __declspec(dllimport) static wxClassInfo ms_classInfo;
    friend void sub_01dfb4a0(void);
};

class wxClassInfo {
    public:
    public: __declspec(dllimport) wxClassInfo(wchar_t const *,wxClassInfo const *,wxClassInfo const *,int,wxObject * (__cdecl*)(void));
    friend void sub_01dfb4a0(void);
};

class wxObject {
    public:
};

int sub_0111ba80(void);
int sub_01e25df0(void);
extern undefined4 g_026cf38c;
// @baa 0x01dfb4a0
void sub_01dfb4a0(void)
{
  ((wxClassInfo *)((wxClassInfo *)&g_026cf38c))->wxClassInfo::wxClassInfo(L"WxEventCatchingAuiManager", (wxClassInfo *)(&wxAuiManager::ms_classInfo), (wxClassInfo *)0x0, 0x114, (wxObject *(__cdecl *)(void))(sub_0111ba80));
  sub_01a37872(&sub_01e25df0);
  return;
}
