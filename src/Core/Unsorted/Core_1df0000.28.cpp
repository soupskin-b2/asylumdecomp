// Core_1df0000.cpp (part 28 of 44): 1 function
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

class wxEventHashTable;
struct wxEventTable;
class wxEventHashTable {
    public:
    public: __declspec(dllimport) wxEventHashTable(wxEventTable const &);
    friend void sub_01dfe0e0(void);
};

struct wxEventTable {
    public:
};

int sub_01a37872(...);
int sub_01e25ee0(void);
extern undefined4 g_021c4194;
extern undefined4 g_026d1004;
// @baa 0x01dfe0e0
void sub_01dfe0e0(void)
{
  ((wxEventHashTable *)((wxEventHashTable *)&g_026d1004))->wxEventHashTable::wxEventHashTable(*(const wxEventTable *)((wxEventTable *)&g_021c4194));
  sub_01a37872(&sub_01e25ee0);
  return;
}
