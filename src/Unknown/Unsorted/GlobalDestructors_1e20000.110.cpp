// GlobalDestructors_1e20000.cpp (part 110 of 298): 2 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

class wxEventHashTable;
class wxEventHashTable {
    public:
    public: __declspec(dllimport) ~wxEventHashTable();
    friend void sub_01e26060(void);
};

extern undefined4 g_026d20cc;
// @baa 0x01e26060
void sub_01e26060(void)
{
                    
                    
  ((wxEventHashTable *)((wxEventHashTable *)&g_026d20cc))->~wxEventHashTable();
  return;
}

class wxClassInfo;
class wxClassInfo {
    public:
    public: __declspec(dllimport) ~wxClassInfo();
    friend void sub_01e27270(void);
};

extern undefined4 g_026ddda4;
// @baa 0x01e27270
void sub_01e27270(void)
{
                    
                    
  ((wxClassInfo *)((wxClassInfo *)&g_026ddda4))->~wxClassInfo();
  return;
}
