// Core_1dd0000.cpp (part 39 of 42): 1 function
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

class wxEventHashTable;
struct wxEventTable;
class wxEventHashTable {
    public:
    public: __declspec(dllimport) wxEventHashTable(wxEventTable const &);
    friend void sub_01dd8920(void);
};

struct wxEventTable {
    public:
};

int sub_01a37872(...);
int sub_01e22ca0(void);
extern undefined4 g_025d4fd0;
extern undefined4 g_026658bc;
// @baa 0x01dd8920
void sub_01dd8920(void)
{
  ((wxEventHashTable *)((wxEventHashTable *)&g_026658bc))->wxEventHashTable::wxEventHashTable(*(const wxEventTable *)((wxEventTable *)&g_025d4fd0));
  sub_01a37872(&sub_01e22ca0);
  return;
}
