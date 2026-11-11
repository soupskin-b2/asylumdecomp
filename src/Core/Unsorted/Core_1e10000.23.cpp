// Core_1e10000.cpp (part 23 of 24): 1 function
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

class wxEventHashTable;
struct wxEventTable;
class wxEventHashTable {
    public:
    public: __declspec(dllimport) wxEventHashTable(wxEventTable const &);
    friend void sub_01e1fa40(void);
};

struct wxEventTable {
    public:
};

int sub_01a37872(...);
int sub_01e279d0(void);
extern undefined4 g_025f0754;
extern undefined4 g_026e5b98;
// @baa 0x01e1fa40
void sub_01e1fa40(void)
{
  ((wxEventHashTable *)((wxEventHashTable *)&g_026e5b98))->wxEventHashTable::wxEventHashTable(*(const wxEventTable *)((wxEventTable *)&g_025f0754));
  sub_01a37872(&sub_01e279d0);
  return;
}
