// Engine_1dd0000.cpp (part 20 of 28): 1 function
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

class wxEventHashTable;
struct wxEventTable;
class wxEventHashTable {
    public:
    public: __declspec(dllimport) wxEventHashTable(wxEventTable const &);
    friend void sub_01dd2690(void);
};

struct wxEventTable {
    public:
};

int sub_01a37872(...);
int sub_01e22030(void);
extern undefined4 g_025d49a0;
extern undefined4 g_0261867c;
// @baa 0x01dd2690
void sub_01dd2690(void)
{
  ((wxEventHashTable *)((wxEventHashTable *)&g_0261867c))->wxEventHashTable::wxEventHashTable(*(const wxEventTable *)((wxEventTable *)&g_025d49a0));
  sub_01a37872(&sub_01e22030);
  return;
}
