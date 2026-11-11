// GlobalDestructors_1e20000.cpp (part 29 of 298): 2 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

class wxEventHashTable;
class wxEventHashTable {
    public:
    public: __declspec(dllimport) ~wxEventHashTable();
    friend void sub_01e22190(void);
};

extern undefined4 g_02617a68;
// @baa 0x01e22190
void sub_01e22190(void)
{
                    
                    
  ((wxEventHashTable *)((wxEventHashTable *)&g_02617a68))->~wxEventHashTable();
  return;
}

class wxClassInfo;
class wxClassInfo {
    public:
    public: __declspec(dllimport) ~wxClassInfo();
    friend void sub_01e22870(void);
};

extern undefined4 g_02663e7c;
// @baa 0x01e22870
void sub_01e22870(void)
{
                    
                    
  ((wxClassInfo *)((wxClassInfo *)&g_02663e7c))->~wxClassInfo();
  return;
}
