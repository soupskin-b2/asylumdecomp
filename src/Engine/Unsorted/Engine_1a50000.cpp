// Engine_1a50000.cpp: 4 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

// @baa 0x01a5f620
void sub_01a5f620(void) {  }

struct C { C* sub_01a5f630(void); };

// @baa 0x01a5f630
C* C::sub_01a5f630(void) { return this; }

struct C_01a5f640 { C_01a5f640* sub_01a5f640(void); };

// @baa 0x01a5f640
C_01a5f640* C_01a5f640::sub_01a5f640(void) { return this; }

struct C_01a5f650 {
    int sub_01a5f650(int);
};

// @baa 0x01a5f650
int C_01a5f650::sub_01a5f650(int param_2)
{
    int param_1 = (int)this;

  return param_1 + param_2 * 4;
}
