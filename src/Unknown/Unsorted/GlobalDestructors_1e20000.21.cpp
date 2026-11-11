// GlobalDestructors_1e20000.cpp (part 21 of 298): 2 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

class wxEventHashTable;
class wxEventHashTable {
    public:
    public: __declspec(dllimport) ~wxEventHashTable();
    friend void sub_01e22050(void);
};

extern undefined4 g_02617690;
// @baa 0x01e22050
void sub_01e22050(void)
{
                    
                    
  ((wxEventHashTable *)((wxEventHashTable *)&g_02617690))->~wxEventHashTable();
  return;
}

class wxClassInfo;
class wxClassInfo {
    public:
    public: __declspec(dllimport) ~wxClassInfo();
    friend void sub_01e222e0(void);
};

extern undefined4 g_0266396c;
// @baa 0x01e222e0
void sub_01e222e0(void)
{
                    
                    
  ((wxClassInfo *)((wxClassInfo *)&g_0266396c))->~wxClassInfo();
  return;
}
