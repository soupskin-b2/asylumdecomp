// Core_1dd0000.cpp (part 33 of 42): 1 function
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

class wxEventHashTable;
struct wxEventTable;
class wxEventHashTable {
    public:
    public: __declspec(dllimport) wxEventHashTable(wxEventTable const &);
    friend void sub_01dd8230(void);
};

struct wxEventTable {
    public:
};

int sub_01a37872(...);
int sub_01e22c20(...);
extern undefined4 g_025d4fb0;
extern undefined4 g_026658ec;
// @baa 0x01dd8230
void sub_01dd8230(void)
{
  ((wxEventHashTable *)((wxEventHashTable *)&g_026658ec))->wxEventHashTable::wxEventHashTable(*(const wxEventTable *)((wxEventTable *)&g_025d4fb0));
  sub_01a37872(&sub_01e22c20);
  return;
}
