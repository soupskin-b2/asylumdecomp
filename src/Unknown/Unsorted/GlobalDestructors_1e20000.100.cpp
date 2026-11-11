// GlobalDestructors_1e20000.cpp (part 100 of 298): 2 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

class wxEventHashTable;
class wxEventHashTable {
    public:
    public: __declspec(dllimport) ~wxEventHashTable();
    friend void sub_01e25f00(void);
};

extern undefined4 g_026d1238;
// @baa 0x01e25f00
void sub_01e25f00(void)
{
                    
                    
  ((wxEventHashTable *)((wxEventHashTable *)&g_026d1238))->~wxEventHashTable();
  return;
}

class wxClassInfo;
class wxClassInfo {
    public:
    public: __declspec(dllimport) ~wxClassInfo();
    friend void sub_01e271b0(void);
};

extern undefined4 g_026ddadc;
// @baa 0x01e271b0
void sub_01e271b0(void)
{
                    
                    
  ((wxClassInfo *)((wxClassInfo *)&g_026ddadc))->~wxClassInfo();
  return;
}
