// UnrealEd_1390000.cpp: 2 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    undefined4 sub_0139af70(byte);
};

int sub_0053dfa0(...);
int sub_01395290(void);
// @baa 0x0139af70
undefined4 C::sub_0139af70(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01395290();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_0139e380 { void sub_0138d9d0(int); C_0139e380 *sub_0139e380(int); };

// @baa 0x0139e380
C_0139e380 *C_0139e380::sub_0139e380(int a) { sub_0138d9d0(a); return this; }
