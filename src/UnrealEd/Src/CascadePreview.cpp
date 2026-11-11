// CascadePreview.cpp: 2 functions
// Placed here by: neighbours 2.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C { int sub_012d50e0(void); };

// @baa 0x012d50e0
int C::sub_012d50e0(void) { return *(int*)((char*)this + 836); }

struct C_012d5190 {
    undefined4 sub_012d5190(byte);
};

int sub_0053dfa0(...);
int sub_012d5120(void);
// @baa 0x012d5190
undefined4 C_012d5190::sub_012d5190(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_012d5120();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}
