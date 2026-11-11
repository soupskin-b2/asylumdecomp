// GlobalDestructors_1e20000.cpp (part 38 of 298): 2 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

class wxEventHashTable;
class wxEventHashTable {
    public:
    public: __declspec(dllimport) ~wxEventHashTable();
    friend void sub_01e22710(void);
};

extern undefined4 g_02664a04;
// @baa 0x01e22710
void sub_01e22710(void)
{
                    
                    
  ((wxEventHashTable *)((wxEventHashTable *)&g_02664a04))->~wxEventHashTable();
  return;
}

class wxClassInfo;
class wxClassInfo {
    public:
    public: __declspec(dllimport) ~wxClassInfo();
    friend void sub_01e22a80(void);
};

extern undefined4 g_02664c78;
// @baa 0x01e22a80
void sub_01e22a80(void)
{
                    
                    
  ((wxClassInfo *)((wxClassInfo *)&g_02664c78))->~wxClassInfo();
  return;
}
