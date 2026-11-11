// Engine_1dd0000.cpp (part 18 of 28): 1 function
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

class wxEventHashTable;
struct wxEventTable;
class wxEventHashTable {
    public:
    public: __declspec(dllimport) wxEventHashTable(wxEventTable const &);
    friend void sub_01dd24a0(void);
};

struct wxEventTable {
    public:
};

int sub_01a37872(...);
int sub_01e22000(void);
extern undefined4 g_025d4900;
extern undefined4 g_02617fac;
// @baa 0x01dd24a0
void sub_01dd24a0(void)
{
  ((wxEventHashTable *)((wxEventHashTable *)&g_02617fac))->wxEventHashTable::wxEventHashTable(*(const wxEventTable *)((wxEventTable *)&g_025d4900));
  sub_01a37872(&sub_01e22000);
  return;
}
