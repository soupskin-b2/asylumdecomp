// Launch_0e40000.cpp: 2 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

int sub_00e2b9d0(void);
int sub_00e415b0(...);
extern undefined4 g_026cad00;
// @baa 0x00e41670
int sub_00e41670(void)
{
  if (g_026cad00 == 0) {
    g_026cad00 = sub_00e415b0(L"IpDrv");
    sub_00e2b9d0();
  }
  return g_026cad00;
}

struct C { C* sub_00e418c0(void); };

// @baa 0x00e418c0
C* C::sub_00e418c0(void) { return this; }
