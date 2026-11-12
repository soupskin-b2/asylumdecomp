// Core_1df0000.cpp (part 43 of 44): 2 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

class wxEventHashTable;
struct wxEventTable;
class wxEventHashTable {
    public:
    public: __declspec(dllimport) wxEventHashTable(wxEventTable const &);
    friend void sub_01dfffb0(void);
};

struct wxEventTable {
    public:
};

int sub_01a37872(...);
int sub_01e26090(void);
extern undefined4 g_025e86c0;
extern undefined4 g_026d2308;
// @baa 0x01dfffb0
void sub_01dfffb0(void)
{
  ((wxEventHashTable *)((wxEventHashTable *)&g_026d2308))->wxEventHashTable::wxEventHashTable(*(const wxEventTable *)((wxEventTable *)&g_025e86c0));
  sub_01a37872(&sub_01e26090);
  return;
}

extern "C" unsigned char __cdecl sub_0059f5f0(int, int*);
extern unsigned char g_026caf83;
extern int g_025e4cec;
// @baa 0x01df7af0
void sub_01df7af0(void)
{
	g_026caf83 = sub_0059f5f0(0x901, &g_025e4cec);
}
