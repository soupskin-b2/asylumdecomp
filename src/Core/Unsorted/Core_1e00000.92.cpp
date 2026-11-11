// Core_1e00000.cpp (part 92 of 160): 1 function
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

class wxEventHashTable;
struct wxEventTable;
class wxEventHashTable {
    public:
    public: __declspec(dllimport) wxEventHashTable(wxEventTable const &);
    friend void sub_01e0bb60(void);
};

struct wxEventTable {
    public:
};

int sub_01a37872(...);
int sub_01e26a80(void);
extern undefined4 g_025e9018;
extern undefined4 g_026da038;
// @baa 0x01e0bb60
void sub_01e0bb60(void)
{
  ((wxEventHashTable *)((wxEventHashTable *)&g_026da038))->wxEventHashTable::wxEventHashTable(*(const wxEventTable *)((wxEventTable *)&g_025e9018));
  sub_01a37872(&sub_01e26a80);
  return;
}
