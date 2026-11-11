// Core_1df0000.cpp (part 37 of 44): 1 function
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

class wxEventHashTable;
struct wxEventTable;
class wxEventHashTable {
    public:
    public: __declspec(dllimport) wxEventHashTable(wxEventTable const &);
    friend void sub_01dffa70(void);
};

struct wxEventTable {
    public:
};

int sub_01a37872(...);
int sub_01e26010(void);
extern undefined4 g_025e8698;
extern undefined4 g_026d1fc8;
// @baa 0x01dffa70
void sub_01dffa70(void)
{
  ((wxEventHashTable *)((wxEventHashTable *)&g_026d1fc8))->wxEventHashTable::wxEventHashTable(*(const wxEventTable *)((wxEventTable *)&g_025e8698));
  sub_01a37872(&sub_01e26010);
  return;
}
