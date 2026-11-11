// Core_1e00000.cpp (part 7 of 160): 2 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

class wxEventHashTable;
struct wxEventTable;
class wxEventHashTable {
    public:
    public: __declspec(dllimport) wxEventHashTable(wxEventTable const &);
    friend void sub_01e005e0(void);
};

struct wxEventTable {
    public:
};

int sub_01a37872(...);
int sub_01e26140(void);
extern undefined4 g_025e86e0;
extern undefined4 g_026d26f8;
// @baa 0x01e005e0
void sub_01e005e0(void)
{
  ((wxEventHashTable *)((wxEventHashTable *)&g_026d26f8))->wxEventHashTable::wxEventHashTable(*(const wxEventTable *)((wxEventTable *)&g_025e86e0));
  sub_01a37872(&sub_01e26140);
  return;
}

class wxBitmapButton;
class wxClassInfo;
class wxObject;
class wxBitmapButton {
    public:
    public: __declspec(dllimport) static wxClassInfo ms_classInfo;
    friend void sub_01e00b30(void);
};

class wxClassInfo {
    public:
    public: __declspec(dllimport) wxClassInfo(wchar_t const *,wxClassInfo const *,wxClassInfo const *,int,wxObject * (__cdecl*)(void));
    friend void sub_01e00b30(void);
};

class wxObject {
    public:
};

int sub_011f43c0(void);
int sub_01e261b0(void);
extern undefined4 g_026d2aa0;
// @baa 0x01e00b30
void sub_01e00b30(void)
{
  ((wxClassInfo *)((wxClassInfo *)&g_026d2aa0))->wxClassInfo::wxClassInfo(L"WxPropertyItemButton", (wxClassInfo *)(&wxBitmapButton::ms_classInfo), (wxClassInfo *)0x0, 0x188, (wxObject *(__cdecl *)(void))(sub_011f43c0));
  sub_01a37872(&sub_01e261b0);
  return;
}
