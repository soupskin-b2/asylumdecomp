// Engine_1dd0000.cpp (part 23 of 28): 1 function
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

class wxEventHashTable;
struct wxEventTable;
class wxEventHashTable {
    public:
    public: __declspec(dllimport) wxEventHashTable(wxEventTable const &);
    friend void sub_01dd2c00(void);
};

struct wxEventTable {
    public:
};

int sub_01a37872(...);
int sub_01e22090(void);
extern undefined4 g_025d4970;
extern undefined4 g_026176e4;
// @baa 0x01dd2c00
void sub_01dd2c00(void)
{
  ((wxEventHashTable *)((wxEventHashTable *)&g_026176e4))->wxEventHashTable::wxEventHashTable(*(const wxEventTable *)((wxEventTable *)&g_025d4970));
  sub_01a37872(&sub_01e22090);
  return;
}
