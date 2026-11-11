// GlobalDestructors_1e20000.cpp (part 178 of 298): 1 function
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

class wxEventHashTable;
class wxEventHashTable {
    public:
    public: __declspec(dllimport) ~wxEventHashTable();
    friend void sub_01e266f0(void);
};

extern undefined4 g_026d81d8;
// @baa 0x01e266f0
void sub_01e266f0(void)
{
                    
                    
  ((wxEventHashTable *)((wxEventHashTable *)&g_026d81d8))->~wxEventHashTable();
  return;
}
