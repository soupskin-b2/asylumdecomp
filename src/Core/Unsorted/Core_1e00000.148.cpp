// Core_1e00000.cpp (part 148 of 160): 1 function
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

class wxEventHashTable;
struct wxEventTable;
class wxEventHashTable {
    public:
    public: __declspec(dllimport) wxEventHashTable(wxEventTable const &);
    friend void sub_01e0f250(void);
};

struct wxEventTable {
    public:
};

int sub_01a37872(...);
int sub_01e26f90(void);
extern undefined4 g_025e9388;
extern undefined4 g_026dc4e4;
// @baa 0x01e0f250
void sub_01e0f250(void)
{
  ((wxEventHashTable *)((wxEventHashTable *)&g_026dc4e4))->wxEventHashTable::wxEventHashTable(*(const wxEventTable *)((wxEventTable *)&g_025e9388));
  sub_01a37872(&sub_01e26f90);
  return;
}
