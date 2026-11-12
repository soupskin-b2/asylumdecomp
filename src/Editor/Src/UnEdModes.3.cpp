// UnEdModes.cpp (part 3 of 3): 7 functions
// Placed here by: class 3.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

int sub_0053dfa0(...);
int sub_00f5bbb0(void);
// @baa 0x00f5f1b0
undefined4 UTerrainFactory::sub_00f5f1b0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00f5bbb0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

extern undefined * g_021591c0;
// @baa 0x00f5fee0
undefined4 * UTerrainFactory::sub_00f5fee0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_021591c0);
  sub_00f5bbb0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

extern undefined * g_022170c8;
// @baa 0x0127a180
undefined4 * UTerrainFactory::sub_0127a180(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_022170c8);
  sub_00f5bbb0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct Sub
{
    void sub_00fae2b0();
};

struct C
{
    char pad_00[0x1c];
    Sub* Object;

    void sub_00f4d560();
};

// @baa 0x00f4d560
void C::sub_00f4d560()
{
    if (Object)
        Object->sub_00fae2b0();
}

struct Sub_00f4d570
{
    void sub_00fa26a0();
};

struct C_00f4d570
{
    char pad_00[0x1c];
    Sub_00f4d570* Object;

    void sub_00f4d570();
};

// @baa 0x00f4d570
void C_00f4d570::sub_00f4d570()
{
    if (Object)
        Object->sub_00fa26a0();
}

struct Sub_00f5dc10
{
    void sub_00f5c640();
};

struct Object
{
    char pad_00[0x50];
    Sub_00f5dc10* Pointer;
};

extern Object* sub_00ec5970();
// @baa 0x00f5dc10
void sub_00f5dc10()
{
    sub_00ec5970()->Pointer->sub_00f5c640();
}

struct V_00f4d280_target {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void v21();
    virtual void v22();
    virtual void v23();
    virtual void v24();
    virtual void v25();
    virtual void v26();
    virtual void v27();
    virtual void v28();
    virtual void v29();
    virtual void v30();
    virtual void v31();
    virtual void v32();
    virtual void v33();
    virtual void v34();
    virtual void v35();
    virtual void v36();
    virtual void v37();
    virtual void v38(bool);
};

struct C_00f4d280 {
    char pad[0x48];
    V_00f4d280_target* m_48;
    void sub_00f4d280(int);
};

// @baa 0x00f4d280
void C_00f4d280::sub_00f4d280(int Value)
{
    m_48->v38(Value != 0);
}
