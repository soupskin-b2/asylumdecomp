// Core_1e00000.cpp (part 159 of 160): 1 function
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

class wxEventHashTable;
struct wxEventTable;
class wxEventHashTable {
    public:
    public: __declspec(dllimport) wxEventHashTable(wxEventTable const &);
    friend void sub_01e0fb90(void);
};

struct wxEventTable {
    public:
};

int sub_01a37872(...);
int sub_01e271c0(void);
extern undefined4 g_025e93ec;
extern undefined4 g_026ddaf4;
// @baa 0x01e0fb90
void sub_01e0fb90(void)
{
  ((wxEventHashTable *)((wxEventHashTable *)&g_026ddaf4))->wxEventHashTable::wxEventHashTable(*(const wxEventTable *)((wxEventTable *)&g_025e93ec));
  sub_01a37872(&sub_01e271c0);
  return;
}
