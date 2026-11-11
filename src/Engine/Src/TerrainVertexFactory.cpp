// TerrainVertexFactory.cpp: 31 functions
// Placed here by: neighbours 31.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

extern char g_01ee4e54[];
// @baa 0x00716e70
int sub_00716e70(void) { return (int)g_01ee4e54; }

extern char g_01ebb554[];
struct C { void sub_00716e80(void); };

// @baa 0x00716e80
void C::sub_00716e80(void) { *(int*)((char*)this + 0) = (int)g_01ebb554; }

struct C_00716e90 {
    undefined4 * sub_00716e90(byte);
};

int sub_0053dfa0(...);
// @baa 0x00716e90
undefined4 * C_00716e90::sub_00716e90(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ebb554);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

extern char g_01ecdfc8[];
struct C_00716eb0 { void sub_00716eb0(void); };

// @baa 0x00716eb0
void C_00716eb0::sub_00716eb0(void) { *(int*)((char*)this + 0) = (int)g_01ecdfc8; }

extern char g_01ee51b8[];
// @baa 0x00716f60
int sub_00716f60(void) { return (int)g_01ee51b8; }

struct C_00716f70 { void sub_00716f70(void); };

// @baa 0x00716f70
void C_00716f70::sub_00716f70(void) { *(int*)((char*)this + 0) = (int)g_01ebb554; }

struct C_00716f80 {
    undefined4 * sub_00716f80(byte);
};

// @baa 0x00716f80
undefined4 * C_00716f80::sub_00716f80(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ebb554);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

extern char g_01ee5444[];
// @baa 0x007170c0
int sub_007170c0(void) { return (int)g_01ee5444; }

struct C_007170d0 { void sub_007170d0(void); };

// @baa 0x007170d0
void C_007170d0::sub_007170d0(void) { *(int*)((char*)this + 0) = (int)g_01ebb554; }

struct C_007170e0 {
    undefined4 * sub_007170e0(byte);
};

// @baa 0x007170e0
undefined4 * C_007170e0::sub_007170e0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ebb554);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

extern char g_01ee57c8[];
// @baa 0x007171a0
int sub_007171a0(void) { return (int)g_01ee57c8; }

struct C_007171b0 { void sub_007171b0(void); };

// @baa 0x007171b0
void C_007171b0::sub_007171b0(void) { *(int*)((char*)this + 0) = (int)g_01ebb554; }

struct C_007171c0 {
    undefined4 * sub_007171c0(byte);
};

// @baa 0x007171c0
undefined4 * C_007171c0::sub_007171c0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ebb554);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_0071b810 { int sub_0071b810(void); };

// @baa 0x0071b810
int C_0071b810::sub_0071b810(void) { return *(int*)((char*)this + 32); }

struct C_0071b820 { int sub_0071b820(void); };

// @baa 0x0071b820
int C_0071b820::sub_0071b820(void) { return *(int*)((char*)this + 36); }

struct C_0071b830 { int sub_0071b830(void); };

// @baa 0x0071b830
int C_0071b830::sub_0071b830(void) { return *(int*)((char*)this + 40); }

struct C_0071b840 { int sub_0071b840(void); };

// @baa 0x0071b840
int C_0071b840::sub_0071b840(void) { return *(int*)((char*)this + 44); }

struct C_0071b850 { int sub_0071b850(void); };

// @baa 0x0071b850
int C_0071b850::sub_0071b850(void) { return *(int*)((char*)this + 48); }

struct C_0071b860 { int sub_0071b860(void); };

// @baa 0x0071b860
int C_0071b860::sub_0071b860(void) { return *(int*)((char*)this + 52); }

struct C_0071b870 { float sub_0071b870(void); };

// @baa 0x0071b870
float C_0071b870::sub_0071b870(void) { return *(float*)((char*)this + 68); }

struct C_0071b880 { float sub_0071b880(void); };

// @baa 0x0071b880
float C_0071b880::sub_0071b880(void) { return *(float*)((char*)this + 72); }

struct C_0071b890 { float sub_0071b890(void); };

// @baa 0x0071b890
float C_0071b890::sub_0071b890(void) { return *(float*)((char*)this + 108); }

struct C_0071b8a0 { float sub_0071b8a0(void); };

// @baa 0x0071b8a0
float C_0071b8a0::sub_0071b8a0(void) { return *(float*)((char*)this + 112); }

struct C_0071b8b0 { int sub_0071b8b0(void); };

// @baa 0x0071b8b0
int C_0071b8b0::sub_0071b8b0(void) { return *(int*)((char*)this + 76); }

struct C_0071b8c0 {
    int sub_0071b8c0();
};

int sub_006311e0(...);
extern undefined2 g_01e3f3dc;
// @baa 0x0071b8c0
int C_0071b8c0::sub_0071b8c0(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 0x14) == 0) {
    sub_006311e0("TerrainComponent",
                 "e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\engine\\src\\UnTerrainRender.h"
                 ,0x1a1,&g_01e3f3dc);
  }
  return *(int *)(param_1 + 0x14) + 0x50;
}

struct Ar { int sub_0053ea70(void*, int); };

struct C_0071b8f0 { void sub_0071b8f0(Ar* a); };

#define G(o) { unsigned short* w = (unsigned short*)((char*)this + o); a->sub_0053ea70(w + 1, 2); a->sub_0053ea70(w + 2, 2); a->sub_0053ea70(w, 2); }
// @baa 0x0071b8f0
void C_0071b8f0::sub_0071b8f0(Ar* a)
{
    G(8) G(0xe) G(0x14) G(0x1a) G(0x20) G(0x26) G(0x2c) G(0x32) G(0x38) G(0x3e)
}

struct C_0071c040 {
    undefined4 * sub_0071c040(byte);
};

// @baa 0x0071c040
undefined4 * C_0071c040::sub_0071c040(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ecdfc8);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_0071c190 { void sub_0071c190(void); };

// @baa 0x0071c190
void C_0071c190::sub_0071c190(void) { *(int*)((char*)this + 0) = (int)g_01ecdfc8; }

struct C_0071c300 {
    undefined4 * sub_0071c300(byte);
};

// @baa 0x0071c300
undefined4 * C_0071c300::sub_0071c300(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ecdfc8);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_0053df40(...);
extern undefined * g_01eee488;
// @baa 0x0071c7d0
undefined4 * sub_0071c7d0(void)
{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)sub_0053df40(0x44,8);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = (undefined4)(&g_01eee488);
    *(undefined2 *)(puVar1 + 3) = 0;
    *(undefined2 *)((int)puVar1 + 0x12) = 0;
    *(undefined2 *)(puVar1 + 6) = 0;
    *(undefined2 *)((int)puVar1 + 0x1e) = 0;
    *(undefined2 *)(puVar1 + 9) = 0;
    *(undefined2 *)((int)puVar1 + 0x2a) = 0;
    *(undefined2 *)(puVar1 + 0xc) = 0;
    *(undefined2 *)((int)puVar1 + 0x36) = 0;
    *(undefined2 *)(puVar1 + 0xf) = 0;
    *(undefined2 *)((int)puVar1 + 0x42) = 0;
    return puVar1;
  }
  return (undefined4 *)0x0;
}

extern undefined * g_01eee558;
// @baa 0x0071c820
undefined4 * sub_0071c820(void)
{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)sub_0053df40(100,8);
  if (puVar1 != (undefined4 *)0x0) {
    *(undefined2 *)(puVar1 + 3) = 0;
    *(undefined2 *)((int)puVar1 + 0x12) = 0;
    *(undefined2 *)(puVar1 + 6) = 0;
    *(undefined2 *)((int)puVar1 + 0x1e) = 0;
    *(undefined2 *)(puVar1 + 9) = 0;
    *(undefined2 *)((int)puVar1 + 0x2a) = 0;
    *(undefined2 *)(puVar1 + 0xc) = 0;
    *(undefined2 *)((int)puVar1 + 0x36) = 0;
    *(undefined2 *)(puVar1 + 0xf) = 0;
    *(undefined2 *)((int)puVar1 + 0x42) = 0;
    *puVar1 = (undefined4)(&g_01eee558);
    *(undefined2 *)(puVar1 + 0x12) = 0;
    *(undefined2 *)((int)puVar1 + 0x4e) = 0;
    *(undefined2 *)(puVar1 + 0x15) = 0;
    *(undefined2 *)((int)puVar1 + 0x5a) = 0;
    *(undefined2 *)(puVar1 + 0x18) = 0;
    return puVar1;
  }
  return (undefined4 *)0x0;
}
