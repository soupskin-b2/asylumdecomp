// UnrealEd_1800000.cpp: 3 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

void sub_01a375f0();
// @baa 0x018072c0
void sub_018072c0(void) { sub_01a375f0(); }

// @baa 0x01807300
int sub_01807300(void) { return 85; }

extern "C" __declspec(dllimport) int free(...);
// @baa 0x01807350
void sub_01807350(undefined4 param_1, void * param_2)
{
  free(param_2);
  return;
}
