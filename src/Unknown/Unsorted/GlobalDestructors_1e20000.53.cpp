// GlobalDestructors_1e20000.cpp (part 53 of 298): 2 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

class wxEventHashTable;
class wxEventHashTable {
    public:
    public: __declspec(dllimport) ~wxEventHashTable();
    friend void sub_01e22a20(void);
};

extern undefined4 g_02664c60;
// @baa 0x01e22a20
void sub_01e22a20(void)
{
                    
                    
  ((wxEventHashTable *)((wxEventHashTable *)&g_02664c60))->~wxEventHashTable();
  return;
}

class wxClassInfo;
class wxClassInfo {
    public:
    public: __declspec(dllimport) ~wxClassInfo();
    friend void sub_01e25df0(void);
};

extern undefined4 g_026cf38c;
// @baa 0x01e25df0
void sub_01e25df0(void)
{
                    
                    
  ((wxClassInfo *)((wxClassInfo *)&g_026cf38c))->~wxClassInfo();
  return;
}
