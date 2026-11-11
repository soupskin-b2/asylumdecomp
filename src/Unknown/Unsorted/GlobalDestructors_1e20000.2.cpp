// GlobalDestructors_1e20000.cpp (part 2 of 298): 15 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

class wxEventHashTable;
class wxEventHashTable {
    public:
    public: __declspec(dllimport) ~wxEventHashTable();
    friend void sub_01e21ca0(void);
};

extern undefined4 g_026175c4;
// @baa 0x01e21ca0
void sub_01e21ca0(void)
{
                    
                    
  ((wxEventHashTable *)((wxEventHashTable *)&g_026175c4))->~wxEventHashTable();
  return;
}

class wxClassInfo;
class wxClassInfo {
    public:
    public: __declspec(dllimport) ~wxClassInfo();
    friend void sub_01e21d70(void);
};

extern undefined4 g_02616fac;
// @baa 0x01e21d70
void sub_01e21d70(void)
{
  ((wxClassInfo *)((wxClassInfo *)&g_02616fac))->~wxClassInfo();
  return;
}

class wxString;
class wxString {
    public:
    public: __declspec(dllimport) ~wxString();
    friend void sub_01e25e50(void);
};

extern undefined4 g_026cf46c;
// @baa 0x01e25e50
void sub_01e25e50(void)
{
                    
                    
  ((wxString *)((wxString *)&g_026cf46c))->~wxString();
  return;
}

struct D { void sub_01a71640(); };

extern D g_027bded4;
// @baa 0x01e282c0
void sub_01e282c0() { g_027bded4.sub_01a71640(); }

extern D g_027bdeb0;
// @baa 0x01e282d0
void sub_01e282d0() { g_027bdeb0.sub_01a71640(); }

struct D_01e282e0 { void sub_01a79ff0(); };

extern D_01e282e0 g_027bdee4;
// @baa 0x01e282e0
void sub_01e282e0() { g_027bdee4.sub_01a79ff0(); }

struct D_01e282f0 { void sub_01a7bd40(); };

extern D_01e282f0 g_027bdec0;
// @baa 0x01e282f0
void sub_01e282f0() { g_027bdec0.sub_01a7bd40(); }

int sub_01a67d00(...);
extern undefined2 g_027bdefc;
extern undefined4 g_027bdf00;
// @baa 0x01e28300
void sub_01e28300(void)
{
  if (g_027bdf00 != 0) {
    g_027bdefc = 0;
    sub_01a67d00(&g_027bdf00,"~CWindMatrices, m_pMatrices");
  }
  return;
}

struct D_01e283b0 { void sub_01a71530(); };

extern D_01e283b0 g_027be0f8;
// @baa 0x01e283b0
void sub_01e283b0() { g_027be0f8.sub_01a71530(); }

struct D_01e283c0 { void sub_01a9fc80(); };

extern D_01e283c0 g_027be0e8;
// @baa 0x01e283c0
void sub_01e283c0() { g_027be0e8.sub_01a9fc80(); }

struct D_01e283d0 { void sub_01a9fc80(); };

extern D_01e283d0 g_027be0d8;
// @baa 0x01e283d0
void sub_01e283d0() { g_027be0d8.sub_01a9fc80(); }

struct D_01e283e0 { void sub_01a9fc80(); };

extern D_01e283e0 g_027be108;
// @baa 0x01e283e0
void sub_01e283e0() { g_027be108.sub_01a9fc80(); }

struct D_01e283f0 { void sub_01a9fc80(); };

extern D_01e283f0 g_027be118;
// @baa 0x01e283f0
void sub_01e283f0() { g_027be118.sub_01a9fc80(); }

struct D_01e28470 { void sub_01ab58f0(); };

extern D_01e28470 g_027be4bc;
// @baa 0x01e28470
void sub_01e28470() { g_027be4bc.sub_01ab58f0(); }

int sub_01ab3290(...);
int sub_01bb3280(...);
extern undefined4 g_027d40f8;
extern undefined4 g_027d40fc;
extern undefined4 g_027d4100;
// @baa 0x01e285a0
void sub_01e285a0(void)
{
  sub_01bb3280(g_027d40f8,g_027d4100 * 0x10 + g_027d40f8);
  sub_01ab3290(g_027d40f8,g_027d40fc << 4);
  g_027d40f8 = 0;
  g_027d4100 = 0;
  g_027d40fc = 0;
  return;
}
