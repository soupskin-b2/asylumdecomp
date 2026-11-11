// Core_1e00000.cpp (part 117 of 160): 1 function
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

class wxEventHashTable;
struct wxEventTable;
class wxEventHashTable {
    public:
    public: __declspec(dllimport) wxEventHashTable(wxEventTable const &);
    friend void sub_01e0da20(void);
};

struct wxEventTable {
    public:
};

int sub_01a37872(...);
int sub_01e26d50(void);
extern undefined4 g_025e90d4;
extern undefined4 g_026db2f8;
// @baa 0x01e0da20
void sub_01e0da20(void)
{
  ((wxEventHashTable *)((wxEventHashTable *)&g_026db2f8))->wxEventHashTable::wxEventHashTable(*(const wxEventTable *)((wxEventTable *)&g_025e90d4));
  sub_01a37872(&sub_01e26d50);
  return;
}
