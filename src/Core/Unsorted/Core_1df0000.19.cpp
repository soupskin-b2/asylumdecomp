// Core_1df0000.cpp (part 19 of 44): 1 function
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

class wxEventHashTable;
struct wxEventTable;
class wxEventHashTable {
    public:
    public: __declspec(dllimport) wxEventHashTable(wxEventTable const &);
    friend void sub_01dfb240(void);
};

struct wxEventTable {
    public:
};

int sub_01a37872(...);
int sub_01e25dd0(void);
extern undefined4 g_021b292c;
extern undefined4 g_026cf1cc;
// @baa 0x01dfb240
void sub_01dfb240(void)
{
  ((wxEventHashTable *)((wxEventHashTable *)&g_026cf1cc))->wxEventHashTable::wxEventHashTable(*(const wxEventTable *)((wxEventTable *)&g_021b292c));
  sub_01a37872(&sub_01e25dd0);
  return;
}
