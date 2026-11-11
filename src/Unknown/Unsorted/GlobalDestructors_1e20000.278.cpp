// GlobalDestructors_1e20000.cpp (part 278 of 298): 1 function
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

class wxEventHashTable;
class wxEventHashTable {
    public:
    public: __declspec(dllimport) ~wxEventHashTable();
    friend void sub_01e27330(void);
};

extern undefined4 g_026de5cc;
// @baa 0x01e27330
void sub_01e27330(void)
{
                    
                    
  ((wxEventHashTable *)((wxEventHashTable *)&g_026de5cc))->~wxEventHashTable();
  return;
}
