// fmod_compositionentities.cpp (part 2 of 3): 19 functions
// Placed here by: neighbours 16.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    void sub_017e90a0(float);
};

// @baa 0x017e90a0
void C::sub_017e90a0(float f)
{
    *(float *)(this + 0x14) = f;
}

struct C_017e90b0 {
    void sub_017e90b0(float f);
};

// @baa 0x017e90b0
void C_017e90b0::sub_017e90b0(float f)
{
    *(float *)((char *)this + 0x18) = f;
}

struct C_017e91d0 {
    INT* Unk00; // 0x00
    INT Value04; // 0x04
    C_017e91d0* sub_017e91d0();
};

extern INT g_023e00a4;
// @baa 0x017e91d0
C_017e91d0* C_017e91d0::sub_017e91d0()
{
    Value04 = 0;
    Unk00 = &g_023e00a4;
    return this;
}

struct C_017e91e0 {
    char _pad[8];
    float f_08;
    void sub_017e91e0(float v);
};

// @baa 0x017e91e0
void C_017e91e0::sub_017e91e0(float v)
{
    f_08 = v;
}

struct C_017ea540 {
    int sub_017ea540(undefined4, int);
    int sub_017e7540(int);
};

// @baa 0x017ea540
int C_017ea540::sub_017ea540(undefined4 param_2, int param_3)
{
    int param_1 = (int)this;
  int iVar1;
  iVar1 = ((C_017ea540 *)(this))->sub_017e7540(param_2);
  if (iVar1 == 0) {
    if ((param_3 != 0) && (*(int *)(param_3 + 4) != 0)) {
      *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_3 + 8);
      iVar1 = *(int *)(param_3 + 4);
      *(int *)(param_1 + 0x40) = iVar1;
      *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(iVar1 + 0x20);
      *(undefined4 *)(param_1 + 0x4c) = 0;
      *(undefined1 *)(param_1 + 0x50) = 0;
      return 0;
    }
    *(undefined4 *)(param_1 + 0x40) = 0;
    iVar1 = 0;
  }
  return iVar1;
}

struct C_017ea7e0 {
    void sub_017ea7e0(undefined4, undefined4, undefined4);
    int sub_017e7b60(int);
};

// @baa 0x017ea7e0
void C_017ea7e0::sub_017ea7e0(undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
    int param_1 = (int)this;
  int iVar1;
  iVar1 = ((C_017ea7e0 *)(this))->sub_017e7b60(param_2);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x10) = param_3;
    *(undefined4 *)(param_1 + 0xc) = param_4;
  }
  return;
}

struct A_017ebc10 { virtual void sub_017ec360(); char pad[4]; };

struct B_017ebc10 { virtual void sub_017ec360(); };

struct C_017ebc10 : A_017ebc10, B_017ebc10 { virtual void sub_017ec360(); C_017ebc10(); };

C_017ebc10::C_017ebc10() {}

// @baa 0x017ebc10
void C_017ebc10::sub_017ec360() {}

struct A_017ebc20 { virtual void sub_017ebee0(); char pad[4]; };

struct B_017ebc20 { virtual void sub_017ebee0(); };

struct C_017ebc20 : A_017ebc20, B_017ebc20 { virtual void sub_017ebee0(); C_017ebc20(); };

C_017ebc20::C_017ebc20() {}

// @baa 0x017ebc20
void C_017ebc20::sub_017ebee0() {}

struct A_017ebc30 { virtual void sub_017ebe20(); char pad[4]; };

struct B_017ebc30 { virtual void sub_017ebe20(); };

struct C_017ebc30 : A_017ebc30, B_017ebc30 { virtual void sub_017ebe20(); C_017ebc30(); };

C_017ebc30::C_017ebc30() {}

// @baa 0x017ebc30
void C_017ebc30::sub_017ebe20() {}

struct A_017ebc40 { virtual void sub_017ebe50(); char pad[4]; };

struct B_017ebc40 { virtual void sub_017ebe50(); };

struct C_017ebc40 : A_017ebc40, B_017ebc40 { virtual void sub_017ebe50(); C_017ebc40(); };

C_017ebc40::C_017ebc40() {}

// @baa 0x017ebc40
void C_017ebc40::sub_017ebe50() {}

struct A_017ebc50 { virtual void sub_017ebe80(); char pad[4]; };

struct B_017ebc50 { virtual void sub_017ebe80(); };

struct C_017ebc50 : A_017ebc50, B_017ebc50 { virtual void sub_017ebe80(); C_017ebc50(); };

C_017ebc50::C_017ebc50() {}

// @baa 0x017ebc50
void C_017ebc50::sub_017ebe80() {}

struct A_017ebc60 { virtual void sub_017ebeb0(); char pad[4]; };

struct B_017ebc60 { virtual void sub_017ebeb0(); };

struct C_017ebc60 : A_017ebc60, B_017ebc60 { virtual void sub_017ebeb0(); C_017ebc60(); };

C_017ebc60::C_017ebc60() {}

// @baa 0x017ebc60
void C_017ebc60::sub_017ebeb0() {}

struct A_017ebde0 { virtual void sub_017ebdf0(); char pad[4]; };

struct B_017ebde0 { virtual void sub_017ebdf0(); };

struct C_017ebde0 : A_017ebde0, B_017ebde0 { virtual void sub_017ebdf0(); C_017ebde0(); };

C_017ebde0::C_017ebde0() {}

// @baa 0x017ebde0
void C_017ebde0::sub_017ebdf0() {}

struct C_base {
    INT sub_017ea880(INT arg1);
};

struct C_this {
    char pad[0x24];
    C_base* ptr;
    INT sub_017ec090(INT arg1);
};

// @baa 0x017ec090
INT C_this::sub_017ec090(INT arg1) {
    return ptr->sub_017ea880(arg1);
}

int __fastcall sub_017ea8d0(int *obj);
struct S_017ea8d0_obj {
    char pad[0x24];
    int *field24;
    int sub_017ec0a0();
};

// @baa 0x017ec0a0
int S_017ea8d0_obj::sub_017ec0a0()
{
    return sub_017ea8d0(this->field24);
}

struct D {
    int sub_017ea900();
};

struct C_017ec0b0 {
    char pad[0x24];
    D* d;
    int sub_017ec0b0();
};

// @baa 0x017ec0b0
int C_017ec0b0::sub_017ec0b0() { return d->sub_017ea900(); }

// FMOD composition-entity constructor: a CoreLink that also holds a Condition
// subobject, so it carries two vtable pointers.
extern const void* g_023e0094[];
 // FMOD::CoreLink::vftable
extern const void* g_023e0078[];
 // FMOD::Condition::vftable
struct C_017e9130 {
  void* sub_017e9130(void);
};

// @baa 0x017e9130
void* C_017e9130::sub_017e9130(void) {
  DWORD* p = (DWORD*)this;
  DWORD z = 0;
  p[1] = z; // +0x4
  p[0] = (DWORD)g_023e0094;
  p[3] = (DWORD)g_023e0078; // +0xc
  p[5] = z; // +0x14
  return this;
}

extern const void* g_023e0134[];
struct C_017e9440 {
    void* sub_017e9440();
};

// @baa 0x017e9440
void* C_017e9440::sub_017e9440()
{
    DWORD* P = (DWORD*)this;
    DWORD z = 0;
    P[1] = 1;
    P[0] = (DWORD)g_023e0134;
    P[3] = z;
    P[4] = z;
    return this;
}

struct sub_0179bceb_host {
    void sub_0179bceb(int tag, int value);
};

struct BucketHash_ {
    int sub_017e9980(sub_0179bceb_host* Target);
};

// @baa 0x017e9980
// @baa 0x017e9980
int BucketHash_::sub_017e9980(sub_0179bceb_host* Target)
{
    Target->sub_0179bceb(0x16, (*(int*)((char*)this + 0xc)) * 4);
    return 0;
}
