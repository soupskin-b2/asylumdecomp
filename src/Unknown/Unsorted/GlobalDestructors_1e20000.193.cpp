// GlobalDestructors_1e20000.cpp (part 193 of 298): 1 function
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

class wxEventHashTable;
class wxEventHashTable {
    public:
    public: __declspec(dllimport) ~wxEventHashTable();
    friend void sub_01e26930(void);
};

extern undefined4 g_026d9744;
// @baa 0x01e26930
void sub_01e26930(void)
{
                    
                    
  ((wxEventHashTable *)((wxEventHashTable *)&g_026d9744))->~wxEventHashTable();
  return;
}
