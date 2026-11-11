// GlobalDestructors_1e20000.cpp (part 5 of 298): 3 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

class wxEventHashTable;
class wxEventHashTable {
    public:
    public: __declspec(dllimport) ~wxEventHashTable();
    friend void sub_01e21cd0(void);
};

extern undefined4 g_02616fd0;
// @baa 0x01e21cd0
void sub_01e21cd0(void)
{
                    
                    
  ((wxEventHashTable *)((wxEventHashTable *)&g_02616fd0))->~wxEventHashTable();
  return;
}

class wxClassInfo;
class wxClassInfo {
    public:
    public: __declspec(dllimport) ~wxClassInfo();
    friend void sub_01e21f50(void);
};

extern undefined4 g_02617cfc;
// @baa 0x01e21f50
void sub_01e21f50(void)
{
                    
                    
  ((wxClassInfo *)((wxClassInfo *)&g_02617cfc))->~wxClassInfo();
  return;
}

class wxString;
class wxString {
    public:
    public: __declspec(dllimport) ~wxString();
    friend void sub_01e25f10(void);
};

extern undefined4 g_026d11bc;
// @baa 0x01e25f10
void sub_01e25f10(void)
{
                    
                    
  ((wxString *)((wxString *)&g_026d11bc))->~wxString();
  return;
}
