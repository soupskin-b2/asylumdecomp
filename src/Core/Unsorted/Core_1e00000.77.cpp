// Core_1e00000.cpp (part 77 of 160): 1 function
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

class wxEventHashTable;
struct wxEventTable;
class wxEventHashTable {
    public:
    public: __declspec(dllimport) wxEventHashTable(wxEventTable const &);
    friend void sub_01e0a800(void);
};

struct wxEventTable {
    public:
};

int sub_01a37872(...);
int sub_01e26910(void);
extern undefined4 g_02264e9c;
extern undefined4 g_026d93e0;
// @baa 0x01e0a800
void sub_01e0a800(void)
{
  ((wxEventHashTable *)((wxEventHashTable *)&g_026d93e0))->wxEventHashTable::wxEventHashTable(*(const wxEventTable *)((wxEventTable *)&g_02264e9c));
  sub_01a37872(&sub_01e26910);
  return;
}
