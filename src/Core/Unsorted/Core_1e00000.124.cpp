// Core_1e00000.cpp (part 124 of 160): 1 function
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

class wxEventHashTable;
struct wxEventTable;
class wxEventHashTable {
    public:
    public: __declspec(dllimport) wxEventHashTable(wxEventTable const &);
    friend void sub_01e0dcf0(void);
};

struct wxEventTable {
    public:
};

int sub_01a37872(...);
int sub_01e26dc0(void);
extern undefined4 g_025e910c;
extern undefined4 g_026db47c;
// @baa 0x01e0dcf0
void sub_01e0dcf0(void)
{
  ((wxEventHashTable *)((wxEventHashTable *)&g_026db47c))->wxEventHashTable::wxEventHashTable(*(const wxEventTable *)((wxEventTable *)&g_025e910c));
  sub_01a37872(&sub_01e26dc0);
  return;
}
