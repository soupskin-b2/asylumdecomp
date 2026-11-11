// GlobalDestructors_1e20000.cpp (part 7 of 298): 3 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

class wxEventHashTable;
class wxEventHashTable {
    public:
    public: __declspec(dllimport) ~wxEventHashTable();
    friend void sub_01e21f00(void);
};

extern undefined4 g_02618714;
// @baa 0x01e21f00
void sub_01e21f00(void)
{
  ((wxEventHashTable *)((wxEventHashTable *)&g_02618714))->~wxEventHashTable();
  return;
}

class wxClassInfo;
class wxClassInfo {
    public:
    public: __declspec(dllimport) ~wxClassInfo();
    friend void sub_01e21f90(void);
};

extern undefined4 g_02617a80;
// @baa 0x01e21f90
void sub_01e21f90(void)
{
                    
                    
  ((wxClassInfo *)((wxClassInfo *)&g_02617a80))->~wxClassInfo();
  return;
}

class wxString;
class wxString {
    public:
    public: __declspec(dllimport) ~wxString();
    friend void sub_01e25f30(void);
};

extern undefined4 g_026d127c;
// @baa 0x01e25f30
void sub_01e25f30(void)
{
                    
                    
  ((wxString *)((wxString *)&g_026d127c))->~wxString();
  return;
}
