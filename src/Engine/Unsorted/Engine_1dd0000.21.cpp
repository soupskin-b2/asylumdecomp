// Engine_1dd0000.cpp (part 21 of 28): 1 function
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

class wxEventHashTable;
struct wxEventTable;
class wxEventHashTable {
    public:
    public: __declspec(dllimport) wxEventHashTable(wxEventTable const &);
    friend void sub_01dd27f0(void);
};

struct wxEventTable {
    public:
};

int sub_01a37872(...);
int sub_01e22050(void);
extern undefined4 g_025d4968;
extern undefined4 g_02617690;
// @baa 0x01dd27f0
void sub_01dd27f0(void)
{
  ((wxEventHashTable *)((wxEventHashTable *)&g_02617690))->wxEventHashTable::wxEventHashTable(*(const wxEventTable *)((wxEventTable *)&g_025d4968));
  sub_01a37872(&sub_01e22050);
  return;
}
