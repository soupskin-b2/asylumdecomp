// NxdScene.cpp: 19 functions
// Placed here by: neighbours 15, file 4.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

int sub_01a420f0(...);
// @baa 0x01a399f0
int sub_01a399f0(int param_1)
{
  if (*(int *)(param_1 + 8) != 1) {
    sub_01a420f0("Attempt to get buffered scene from buffered scene or scene with no buffering",
                 "..\\..\\src\\NxdScene.cpp",0x620);
    return param_1;
  }
  return *(int *)(param_1 + 4);
}

// @baa 0x01a39a20
int sub_01a39a20(int param_1)
{
  if (*(int *)(param_1 + 8) != 1) {
    sub_01a420f0("Attempt to get buffered scene from buffered scene or scene with no buffering",
                 "..\\..\\src\\NxdScene.cpp",0x62b);
    return param_1;
  }
  return *(int *)(param_1 + 4);
}

// @baa 0x01a39a50
int sub_01a39a50(int param_1)
{
  if (*(int *)(param_1 + 8) != 2) {
    sub_01a420f0("Attempt to get unbuffered scene from unbuffered scene or scene with no buffering",
                 "..\\..\\src\\NxdScene.cpp",0x637);
    return param_1;
  }
  return *(int *)(param_1 + 0x10);
}

// @baa 0x01a39a80
int sub_01a39a80(int param_1)
{
  if (*(int *)(param_1 + 8) != 2) {
    sub_01a420f0("Attempt to get unbuffered scene from unbuffered scene or scene with no buffering",
                 "..\\..\\src\\NxdScene.cpp",0x643);
    return param_1;
  }
  return *(int *)(param_1 + 0x10);
}

struct C {
    int sub_01a39b00();
};

// @baa 0x01a39b00
int C::sub_01a39b00(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 0x94) + -1;
}

struct C_01a39b10 {
    undefined4 sub_01a39b10(ushort);
};

// @baa 0x01a39b10
undefined4 C_01a39b10::sub_01a39b10(ushort param_2)
{
    int param_1 = (int)this;

  return *(undefined4 *)(*(int *)(param_1 + 0x90) + (uint)param_2 * 4);
}

// @baa 0x01a39ba0
bool sub_01a39ba0(int param_1)
{
  return *(int *)(param_1 + 8) == 2;
}

struct C_01a3a3d0 { int sub_01a3a3d0(void); };

// @baa 0x01a3a3d0
int C_01a3a3d0::sub_01a3a3d0(void) { return *(int*)((char*)this + 32); }

struct C_01a3a3e0 { int sub_01a3a3e0(void); };

// @baa 0x01a3a3e0
int C_01a3a3e0::sub_01a3a3e0(void) { return *(int*)((char*)this + 28); }

struct C_01a3a3f0 { int sub_01a3a3f0(void); };

// @baa 0x01a3a3f0
int C_01a3a3f0::sub_01a3a3f0(void) { return *(int*)((char*)this + 68); }

struct C_01a3a400 {
    undefined4 sub_01a3a400();
};

// @baa 0x01a3a400
undefined4 C_01a3a400::sub_01a3a400(void)
{
    int param_1 = (int)this;

  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 100);
  if (uVar1 < *(uint *)(param_1 + 0x44)) {
    *(uint *)(param_1 + 100) = uVar1 + 1;
    return *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x40) + uVar1 * 4) + 8);
  }
  return 0;
}

struct C_01a3a420 { int sub_01a3a420(void); };

// @baa 0x01a3a420
int C_01a3a420::sub_01a3a420(void) { return *(int*)((char*)this + 108); }

struct C_01a3a430 {
    undefined4 sub_01a3a430();
};

// @baa 0x01a3a430
undefined4 C_01a3a430::sub_01a3a430(void)
{
    int param_1 = (int)this;

  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x80);
  if (uVar1 < *(uint *)(param_1 + 0x6c)) {
    *(uint *)(param_1 + 0x80) = uVar1 + 1;
    return *(undefined4 *)(*(int *)(param_1 + 0x68) + uVar1 * 4);
  }
  return 0;
}

struct C_01a3a730 { int sub_01a3a730(void); };

// @baa 0x01a3a730
int C_01a3a730::sub_01a3a730(void) { return *(int*)((char*)this + 2376); }

struct C_01a3a740 { int sub_01a3a740(void); };

// @baa 0x01a3a740
int C_01a3a740::sub_01a3a740(void) { return *(int*)((char*)this + 2372); }

struct C_01a3a850 { int sub_01a3a850(void); };

// @baa 0x01a3a850
int C_01a3a850::sub_01a3a850(void) { return *(int*)((char*)this + 2400); }

struct C_01a3a860 { int sub_01a3a860(void); };

// @baa 0x01a3a860
int C_01a3a860::sub_01a3a860(void) { return *(int*)((char*)this + 2396); }

struct C_01a3a990 { int sub_01a3a990(void); };

// @baa 0x01a3a990
int C_01a3a990::sub_01a3a990(void) { return *(int*)((char*)this + 2424); }

struct C_01a3a9a0 { int sub_01a3a9a0(void); };

// @baa 0x01a3a9a0
int C_01a3a9a0::sub_01a3a9a0(void) { return *(int*)((char*)this + 2420); }
