// GlobalDestructors_1e20000.cpp (part 46 of 298): 2 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

class wxEventHashTable;
class wxEventHashTable {
    public:
    public: __declspec(dllimport) ~wxEventHashTable();
    friend void sub_01e228a0(void);
};

extern undefined4 g_02663e64;
// @baa 0x01e228a0
void sub_01e228a0(void)
{
                    
                    
  ((wxEventHashTable *)((wxEventHashTable *)&g_02663e64))->~wxEventHashTable();
  return;
}

class wxClassInfo;
class wxClassInfo {
    public:
    public: __declspec(dllimport) ~wxClassInfo();
    friend void sub_01e22cb0(void);
};

extern undefined4 g_02665ad8;
// @baa 0x01e22cb0
void sub_01e22cb0(void)
{
                    
                    
  ((wxClassInfo *)((wxClassInfo *)&g_02665ad8))->~wxClassInfo();
  return;
}
