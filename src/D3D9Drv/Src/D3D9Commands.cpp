// D3D9Commands.cpp: 12 functions
// Placed here by: neighbours 12.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

// @baa 0x00e9bf90
void sub_00e9bf90(void) {  }

// @baa 0x00e9bfa0
void sub_00e9bfa0(void) {  }

// @baa 0x00e9bfb0
int sub_00e9bfb0(void) { return 0; }

// @baa 0x00e9bfc0
void sub_00e9bfc0(void) {  }

// @baa 0x00e9bfd0
void sub_00e9bfd0(void) {  }

extern undefined4 g_026c0830;
// @baa 0x00e9bfe0
undefined4 sub_00e9bfe0(void)
{
  return g_026c0830;
}

// @baa 0x00e9bff0
void sub_00e9bff0(void) {  }

// @baa 0x00e9c000
void sub_00e9c000(void) {  }

// @baa 0x00e9c010
void __stdcall sub_00e9c010(int a0) {  }

// @baa 0x00e9c020
void __stdcall sub_00e9c020(int a0, int a1, int a2) {  }

// @baa 0x00e9c030
void __stdcall sub_00e9c030(int a0, int a1) {  }

struct C{
void sub_00e9f130(uint);
};

// @baa 0x00e9f130
void C::sub_00e9f130(uint param_2)
{
int param_1=(int)this;

(*(int(__stdcall**)(int,int,int))(**(int**)(param_1+0x10)+0xe4))((int)(*(int**)(param_1+0x10)),(int)(0xa8),(int)(param_2&0xf));
return;
}
