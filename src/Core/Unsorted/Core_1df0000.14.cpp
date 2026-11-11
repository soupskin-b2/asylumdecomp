// Core_1df0000.cpp (part 14 of 44): 1 function
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

class wxEventHashTable;
struct wxEventTable;
class wxEventHashTable {
    public:
    public: __declspec(dllimport) wxEventHashTable(wxEventTable const &);
    friend void sub_01dfaa10(void);
};

struct wxEventTable {
    public:
};

int sub_01a37872(...);
int sub_01e25d70(void);
extern undefined4 g_025e85d8;
extern undefined4 g_026cecb4;
// @baa 0x01dfaa10
void sub_01dfaa10(void)
{
  ((wxEventHashTable *)((wxEventHashTable *)&g_026cecb4))->wxEventHashTable::wxEventHashTable(*(const wxEventTable *)((wxEventTable *)&g_025e85d8));
  sub_01a37872(&sub_01e25d70);
  return;
}
