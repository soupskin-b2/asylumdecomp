// Core_1e10000.cpp (part 24 of 24): 1 function
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

class wxEventHashTable;
struct wxEventTable;
class wxEventHashTable {
    public:
    public: __declspec(dllimport) wxEventHashTable(wxEventTable const &);
    friend void sub_01e1fc60(void);
};

struct wxEventTable {
    public:
};

int sub_01a37872(...);
int sub_01e279e0(void);
extern undefined4 g_023d0ab8;
extern undefined4 g_026e5cc0;
// @baa 0x01e1fc60
void sub_01e1fc60(void)
{
  ((wxEventHashTable *)((wxEventHashTable *)&g_026e5cc0))->wxEventHashTable::wxEventHashTable(*(const wxEventTable *)((wxEventTable *)&g_023d0ab8));
  sub_01a37872(&sub_01e279e0);
  return;
}
