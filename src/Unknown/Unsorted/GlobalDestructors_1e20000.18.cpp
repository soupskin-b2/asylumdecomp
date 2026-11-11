// GlobalDestructors_1e20000.cpp (part 18 of 298): 3 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

class wxEventHashTable;
class wxEventHashTable {
    public:
    public: __declspec(dllimport) ~wxEventHashTable();
    friend void sub_01e22000(void);
};

extern undefined4 g_02617fac;
// @baa 0x01e22000
void sub_01e22000(void)
{
                    
                    
  ((wxEventHashTable *)((wxEventHashTable *)&g_02617fac))->~wxEventHashTable();
  return;
}

class wxClassInfo;
class wxClassInfo {
    public:
    public: __declspec(dllimport) ~wxClassInfo();
    friend void sub_01e221d0(void);
};

extern undefined4 g_02617864;
// @baa 0x01e221d0
void sub_01e221d0(void)
{
                    
                    
  ((wxClassInfo *)((wxClassInfo *)&g_02617864))->~wxClassInfo();
  return;
}

class wxString;
class wxString {
    public:
    public: __declspec(dllimport) ~wxString();
    friend void sub_01e27060(void);
};

extern undefined4 g_026dd7ac;
// @baa 0x01e27060
void sub_01e27060(void)
{
                    
                    
  ((wxString *)((wxString *)&g_026dd7ac))->~wxString();
  return;
}
