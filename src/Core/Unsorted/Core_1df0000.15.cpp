// Core_1df0000.cpp (part 15 of 44): 1 function
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

class wxEventHashTable;
struct wxEventTable;
class wxEventHashTable {
    public:
    public: __declspec(dllimport) wxEventHashTable(wxEventTable const &);
    friend void sub_01dfab00(void);
};

struct wxEventTable {
    public:
};

int sub_01a37872(...);
int sub_01e25d80(void);
extern undefined4 g_025e85e0;
extern undefined4 g_026ced58;
// @baa 0x01dfab00
void sub_01dfab00(void)
{
  ((wxEventHashTable *)((wxEventHashTable *)&g_026ced58))->wxEventHashTable::wxEventHashTable(*(const wxEventTable *)((wxEventTable *)&g_025e85e0));
  sub_01a37872(&sub_01e25d80);
  return;
}
