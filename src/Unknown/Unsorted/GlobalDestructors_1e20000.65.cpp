// GlobalDestructors_1e20000.cpp (part 65 of 298): 2 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

class wxEventHashTable;
class wxEventHashTable {
    public:
    public: __declspec(dllimport) ~wxEventHashTable();
    friend void sub_01e22c70(void);
};

extern undefined4 g_02665a48;
// @baa 0x01e22c70
void sub_01e22c70(void)
{
                    
                    
  ((wxEventHashTable *)((wxEventHashTable *)&g_02665a48))->~wxEventHashTable();
  return;
}

class wxClassInfo;
class wxClassInfo {
    public:
    public: __declspec(dllimport) ~wxClassInfo();
    friend void sub_01e261b0(void);
};

extern undefined4 g_026d2aa0;
// @baa 0x01e261b0
void sub_01e261b0(void)
{
                    
                    
  ((wxClassInfo *)((wxClassInfo *)&g_026d2aa0))->~wxClassInfo();
  return;
}
