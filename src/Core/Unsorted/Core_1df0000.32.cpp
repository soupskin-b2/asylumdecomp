// Core_1df0000.cpp (part 32 of 44): 1 function
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

class wxEventHashTable;
struct wxEventTable;
class wxEventHashTable {
    public:
    public: __declspec(dllimport) wxEventHashTable(wxEventTable const &);
    friend void sub_01dfe5d0(void);
};

struct wxEventTable {
    public:
};

int sub_01a37872(...);
int sub_01e25f90(void);
extern undefined4 g_021d5f98;
extern undefined4 g_026d12e0;
// @baa 0x01dfe5d0
void sub_01dfe5d0(void)
{
  ((wxEventHashTable *)((wxEventHashTable *)&g_026d12e0))->wxEventHashTable::wxEventHashTable(*(const wxEventTable *)((wxEventTable *)&g_021d5f98));
  sub_01a37872(&sub_01e25f90);
  return;
}
