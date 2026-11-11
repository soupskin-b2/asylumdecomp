// Core_1e00000.cpp (part 155 of 160): 1 function
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

class wxEventHashTable;
struct wxEventTable;
class wxEventHashTable {
    public:
    public: __declspec(dllimport) wxEventHashTable(wxEventTable const &);
    friend void sub_01e0f7f0(void);
};

struct wxEventTable {
    public:
};

int sub_01a37872(...);
int sub_01e270a0(void);
extern undefined4 g_025e93dc;
extern undefined4 g_026dd89c;
// @baa 0x01e0f7f0
void sub_01e0f7f0(void)
{
  ((wxEventHashTable *)((wxEventHashTable *)&g_026dd89c))->wxEventHashTable::wxEventHashTable(*(const wxEventTable *)((wxEventTable *)&g_025e93dc));
  sub_01a37872(&sub_01e270a0);
  return;
}
