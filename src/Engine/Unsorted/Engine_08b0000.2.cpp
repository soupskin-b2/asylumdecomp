// Engine_08b0000.cpp (part 2 of 2): 1 function
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct USeqCond_SwitchObject { int GetSupportedValueCount(void); };

struct USeqCond_SwitchName { int GetSupportedValueCount(void); };

struct USeqCond_SwitchClass { int GetSupportedValueCount(void); };

struct C {
    void sub_008b4520(int);
};

int sub_0053df70(...);
// @baa 0x008b4520
void C::sub_008b4520(int param_2)
{
    int * param_1 = (int *)this;

  int iVar1;
  
  param_1[1] = 0;
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if ((*param_1 != 0) || (param_2 != 0)) {
      iVar1 = sub_0053df70(*param_1,param_2 * 4,8);
      *param_1 = iVar1;
    }
  }
  return;
}
