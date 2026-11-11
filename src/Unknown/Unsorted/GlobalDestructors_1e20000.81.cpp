// GlobalDestructors_1e20000.cpp (part 81 of 298): 2 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

class wxEventHashTable;
class wxEventHashTable {
    public:
    public: __declspec(dllimport) ~wxEventHashTable();
    friend void sub_01e25d20(void);
};

extern undefined4 g_026cea98;
// @baa 0x01e25d20
void sub_01e25d20(void)
{
                    
                    
  ((wxEventHashTable *)((wxEventHashTable *)&g_026cea98))->~wxEventHashTable();
  return;
}

class wxClassInfo;
class wxClassInfo {
    public:
    public: __declspec(dllimport) ~wxClassInfo();
    friend void sub_01e267b0(void);
};

extern undefined4 g_026d83c0;
// @baa 0x01e267b0
void sub_01e267b0(void)
{
                    
                    
  ((wxClassInfo *)((wxClassInfo *)&g_026d83c0))->~wxClassInfo();
  return;
}
