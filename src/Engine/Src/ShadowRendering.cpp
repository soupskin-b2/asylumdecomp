// ShadowRendering.cpp: 6 functions
// Placed here by: neighbours 6.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

// @baa 0x00b27b70
int sub_00b27b70(void) { return 0; }

struct C {
    uint sub_00b27b80();
};

// @baa 0x00b27b80
uint C::sub_00b27b80(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 0x18c) >> 2 & 1;
}

// @baa 0x00b27b90
int __stdcall sub_00b27b90(int a0) { return 0; }

// @baa 0x00b27ba0
void __stdcall sub_00b27ba0(int a0, int a1, int a2, int a3, int a4, int a5) {  }

// @baa 0x00b27bb0
void __stdcall sub_00b27bb0(int a0, int a1, int a2, int a3) {  }

// @baa 0x00b27bc0
void __stdcall sub_00b27bc0(int a0, int a1, int a2, int a3) {  }
