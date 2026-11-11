// GlobalDestructors_1e20000.cpp (part 40 of 298): 2 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

class wxEventHashTable;
class wxEventHashTable {
    public:
    public: __declspec(dllimport) ~wxEventHashTable();
    friend void sub_01e22740(void);
};

extern undefined4 g_026648c8;
// @baa 0x01e22740
void sub_01e22740(void)
{
                    
                    
  ((wxEventHashTable *)((wxEventHashTable *)&g_026648c8))->~wxEventHashTable();
  return;
}

class wxClassInfo;
class wxClassInfo {
    public:
    public: __declspec(dllimport) ~wxClassInfo();
    friend void sub_01e22bb0(void);
};

extern undefined4 g_026660c4;
// @baa 0x01e22bb0
void sub_01e22bb0(void)
{
  ((wxClassInfo *)((wxClassInfo *)&g_026660c4))->~wxClassInfo();
  return;
}
