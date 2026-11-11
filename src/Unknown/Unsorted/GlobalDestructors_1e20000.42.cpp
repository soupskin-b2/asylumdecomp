// GlobalDestructors_1e20000.cpp (part 42 of 298): 2 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

class wxEventHashTable;
class wxEventHashTable {
    public:
    public: __declspec(dllimport) ~wxEventHashTable();
    friend void sub_01e22800(void);
};

extern undefined4 g_026641ac;
// @baa 0x01e22800
void sub_01e22800(void)
{
                    
                    
  ((wxEventHashTable *)((wxEventHashTable *)&g_026641ac))->~wxEventHashTable();
  return;
}

class wxClassInfo;
class wxClassInfo {
    public:
    public: __declspec(dllimport) ~wxClassInfo();
    friend void sub_01e22bf0(void);
};

extern undefined4 g_02665f20;
// @baa 0x01e22bf0
void sub_01e22bf0(void)
{
                    
                    
  ((wxClassInfo *)((wxClassInfo *)&g_02665f20))->~wxClassInfo();
  return;
}
