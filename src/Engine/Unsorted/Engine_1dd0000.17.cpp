// Engine_1dd0000.cpp (part 17 of 28): 1 function
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

class wxEventHashTable;
struct wxEventTable;
class wxEventHashTable {
    public:
    public: __declspec(dllimport) wxEventHashTable(wxEventTable const &);
    friend void sub_01dd23d0(void);
};

struct wxEventTable {
    public:
};

int sub_01a37872(...);
int sub_01e21ff0(void);
extern undefined4 g_025d4938;
extern undefined4 g_026185d0;
// @baa 0x01dd23d0
void sub_01dd23d0(void)
{
  ((wxEventHashTable *)((wxEventHashTable *)&g_026185d0))->wxEventHashTable::wxEventHashTable(*(const wxEventTable *)((wxEventTable *)&g_025d4938));
  sub_01a37872(&sub_01e21ff0);
  return;
}
