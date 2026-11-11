// Core_1dd0000.cpp (part 34 of 42): 1 function
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

class wxEventHashTable;
struct wxEventTable;
class wxEventHashTable {
    public:
    public: __declspec(dllimport) wxEventHashTable(wxEventTable const &);
    friend void sub_01dd8460(void);
};

struct wxEventTable {
    public:
};

int sub_01a37872(...);
int sub_01e22c40(void);
extern undefined4 g_025d4fb8;
extern undefined4 g_02666548;
// @baa 0x01dd8460
void sub_01dd8460(void)
{
  ((wxEventHashTable *)((wxEventHashTable *)&g_02666548))->wxEventHashTable::wxEventHashTable(*(const wxEventTable *)((wxEventTable *)&g_025d4fb8));
  sub_01a37872(&sub_01e22c40);
  return;
}
