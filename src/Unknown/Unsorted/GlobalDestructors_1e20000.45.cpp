// GlobalDestructors_1e20000.cpp (part 45 of 298): 2 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

class wxEventHashTable;
class wxEventHashTable {
    public:
    public: __declspec(dllimport) ~wxEventHashTable();
    friend void sub_01e22880(void);
};

extern undefined4 g_02663e10;
// @baa 0x01e22880
void sub_01e22880(void)
{
                    
                    
  ((wxEventHashTable *)((wxEventHashTable *)&g_02663e10))->~wxEventHashTable();
  return;
}

class wxClassInfo;
class wxClassInfo {
    public:
    public: __declspec(dllimport) ~wxClassInfo();
    friend void sub_01e22c90(void);
};

extern undefined4 g_026660ac;
// @baa 0x01e22c90
void sub_01e22c90(void)
{
                    
                    
  ((wxClassInfo *)((wxClassInfo *)&g_026660ac))->~wxClassInfo();
  return;
}
