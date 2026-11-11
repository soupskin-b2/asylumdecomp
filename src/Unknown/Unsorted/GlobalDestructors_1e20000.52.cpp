// GlobalDestructors_1e20000.cpp (part 52 of 298): 2 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

class wxEventHashTable;
class wxEventHashTable {
    public:
    public: __declspec(dllimport) ~wxEventHashTable();
    friend void sub_01e22a00(void);
};

extern undefined4 g_02664c48;
// @baa 0x01e22a00
void sub_01e22a00(void)
{
                    
                    
  ((wxEventHashTable *)((wxEventHashTable *)&g_02664c48))->~wxEventHashTable();
  return;
}

class wxClassInfo;
class wxClassInfo {
    public:
    public: __declspec(dllimport) ~wxClassInfo();
    friend void sub_01e25dc0(void);
};

extern undefined4 g_026cf1b4;
// @baa 0x01e25dc0
void sub_01e25dc0(void)
{
                    
                    
  ((wxClassInfo *)((wxClassInfo *)&g_026cf1b4))->~wxClassInfo();
  return;
}
