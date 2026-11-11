// GlobalDestructors_1e20000.cpp (part 31 of 298): 2 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

class wxEventHashTable;
class wxEventHashTable {
    public:
    public: __declspec(dllimport) ~wxEventHashTable();
    friend void sub_01e221c0(void);
};

extern undefined4 g_02617d44;
// @baa 0x01e221c0
void sub_01e221c0(void)
{
                    
                    
  ((wxEventHashTable *)((wxEventHashTable *)&g_02617d44))->~wxEventHashTable();
  return;
}

class wxClassInfo;
class wxClassInfo {
    public:
    public: __declspec(dllimport) ~wxClassInfo();
    friend void sub_01e228b0(void);
};

extern undefined4 g_026641dc;
// @baa 0x01e228b0
void sub_01e228b0(void)
{
                    
                    
  ((wxClassInfo *)((wxClassInfo *)&g_026641dc))->~wxClassInfo();
  return;
}
