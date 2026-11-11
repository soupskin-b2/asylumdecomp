// GlobalDestructors_1e20000.cpp (part 281 of 298): 1 function
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

class wxEventHashTable;
class wxEventHashTable {
    public:
    public: __declspec(dllimport) ~wxEventHashTable();
    friend void sub_01e27380(void);
};

extern undefined4 g_026de754;
// @baa 0x01e27380
void sub_01e27380(void)
{
                    
                    
  ((wxEventHashTable *)((wxEventHashTable *)&g_026de754))->~wxEventHashTable();
  return;
}
