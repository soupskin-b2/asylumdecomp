// FMOD_1770000.cpp (part 1 of 2): 33 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    undefined4 sub_01771e6c(undefined4 *);
};

// @baa 0x01771e6c
undefined4 C::sub_01771e6c(undefined4 * param_2)
{
    int param_1 = (int)this;

  undefined4 uVar1;
  
  if (param_2 == (undefined4 *)0x0) {
    uVar1 = 0x25;
  }
  else {
    *param_2 = *(undefined4 *)(param_1 + 0x34);
    uVar1 = 0;
  }
  return uVar1;
}

struct C_01772e95 {
    undefined4 sub_01772e95(byte *);
};

// @baa 0x01772e95
undefined4 C_01772e95::sub_01772e95(byte * param_2)
{
    int param_1 = (int)this;

  undefined4 uVar1;
  
  if (param_2 == (byte *)0x0) {
    uVar1 = 0x25;
  }
  else {
    *param_2 = *(byte *)(param_1 + 0x80) >> 1 & 1;
    uVar1 = 0;
  }
  return uVar1;
}

struct C_01772eb4 {
    undefined4 sub_01772eb4(undefined4 *);
};

// @baa 0x01772eb4
undefined4 C_01772eb4::sub_01772eb4(undefined4 * param_2)
{
    int param_1 = (int)this;

  undefined4 uVar1;
  
  if (param_2 == (undefined4 *)0x0) {
    uVar1 = 0x25;
  }
  else {
    *param_2 = *(undefined4 *)(param_1 + 0x88);
    uVar1 = 0;
  }
  return uVar1;
}

struct C_017771f3 {
    void sub_017771f3();
};

int sub_01782a6b(...);
// @baa 0x017771f3
void C_017771f3::sub_017771f3(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_01782a6b(*param_1);
  *(undefined1 *)(param_1 + 1) = 1;
  return;
}

struct C_01777204 {
    void sub_01777204();
};

int sub_01782a83(...);
// @baa 0x01777204
void C_01777204::sub_01777204(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_01782a83(*param_1);
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}

struct FMOD_DSPI {
    UINT sub_01777295(int a1, int a2, int a3, int a4, int a5, int a6, int a7);
};

// @baa 0x01777295
UINT FMOD_DSPI::sub_01777295(int a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
    return 0x21;
}

struct Base {
    virtual int slot0(int a, void* b, int* c, unsigned* d, int e, int* g, int h, int i) = 0;
    virtual int f(int a, void* b, int* c, unsigned* d, int e, int* g, int h, int i) = 0;
};

struct C_0177729b : Base {
    virtual int sub_0177729b(int a, void* b, int* c, unsigned* d, int e, int* g, int h, int i);
};

// @baa 0x0177729b
int C_0177729b::sub_0177729b(int a, void* b, int* c, unsigned* d, int e, int* g, int h, int i) {
    return f(a,b,c,d,e,g,h,i);
}

// @baa 0x017772a4
undefined4 sub_017772a4(int param_1, int * param_2)
{
  if (param_2 == (int *)0x0) {
    return 0x25;
  }
  if (param_1 == 0) {
    return 0x24;
  }
  *param_2 = param_1;
  return 0;
}

struct C_01778c61 {
    undefined4 sub_01778c61(undefined4 *);
};

// @baa 0x01778c61
undefined4 C_01778c61::sub_01778c61(undefined4 * param_2)
{
    int param_1 = (int)this;

  undefined4 uVar1;
  
  if (param_2 == (undefined4 *)0x0) {
    uVar1 = 0x25;
  }
  else {
    *param_2 = *(undefined4 *)(param_1 + 0x14);
    uVar1 = 0;
  }
  return uVar1;
}

struct C_017797d9 {
    undefined4 sub_017797d9(undefined4, undefined4);
    int sub_01778dc4(int, int, int, int);
};

// @baa 0x017797d9
undefined4 C_017797d9::sub_017797d9(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  undefined4 uVar1;
  if (*(int *)(param_1 + 0x14) == 0) {
    uVar1 = 0x4e;
  }
  else {
    uVar1 = ((C_017797d9 *)(this))->sub_01778dc4(param_2, 1, 0, param_3);
  }
  return uVar1;
}

struct C_0177a062 {
    void sub_01779e60(int);
    void sub_0177a062();
};

// @baa 0x0177a062
void C_0177a062::sub_0177a062()
{
    this->sub_01779e60(1);
}

// @baa 0x0177a06a
undefined4 sub_0177a06a(int param_1, int * param_2)
{
  if (param_1 == 0) {
    return 0x24;
  }
  if (param_2 == (int *)0x0) {
    return 0x25;
  }
  *param_2 = param_1;
  return 0;
}

struct C_0177a087 {
    undefined4 sub_0177a087(undefined4 *);
};

// @baa 0x0177a087
undefined4 C_0177a087::sub_0177a087(undefined4 * param_2)
{
    int param_1 = (int)this;

  undefined4 uVar1;
  
  if (param_2 == (undefined4 *)0x0) {
    uVar1 = 0x25;
  }
  else {
    *param_2 = *(undefined4 *)(param_1 + 0x14);
    uVar1 = 0;
  }
  return uVar1;
}

struct C_0177a344 {
    undefined4 sub_0177a344(undefined1 *);
};

// @baa 0x0177a344
undefined4 C_0177a344::sub_0177a344(undefined1 * param_2)
{
    int param_1 = (int)this;

  undefined4 uVar1;
  
  if (param_2 == (undefined1 *)0x0) {
    uVar1 = 0x25;
  }
  else {
    *param_2 = *(undefined1 *)(param_1 + 0x61);
    uVar1 = 0;
  }
  return uVar1;
}

struct C_0177a3cd {
    undefined4 sub_0177a3cd(undefined1 *);
};

// @baa 0x0177a3cd
undefined4 C_0177a3cd::sub_0177a3cd(undefined1 * param_2)
{
    int param_1 = (int)this;

  undefined4 uVar1;
  
  if (param_2 == (undefined1 *)0x0) {
    uVar1 = 0x25;
  }
  else {
    *param_2 = *(undefined1 *)(param_1 + 0x60);
    uVar1 = 0;
  }
  return uVar1;
}

struct C_0177a821 {
    undefined4 sub_0177a821(undefined4 *);
};

// @baa 0x0177a821
undefined4 C_0177a821::sub_0177a821(undefined4 * param_2)
{
    int param_1 = (int)this;

  undefined4 uVar1;
  
  if (param_2 == (undefined4 *)0x0) {
    uVar1 = 0x25;
  }
  else {
    *param_2 = *(undefined4 *)(param_1 + 0x24);
    uVar1 = 0;
  }
  return uVar1;
}

struct C_0177a995 {
    undefined4 sub_0177a995(undefined4 *);
};

// @baa 0x0177a995
undefined4 C_0177a995::sub_0177a995(undefined4 * param_2)
{
    int param_1 = (int)this;

  undefined4 uVar1;
  
  if (param_2 == (undefined4 *)0x0) {
    uVar1 = 0x25;
  }
  else {
    *param_2 = *(undefined4 *)(param_1 + 0x38);
    uVar1 = 0;
  }
  return uVar1;
}

struct C_0177a9ac {
    undefined4 sub_0177a9ac(int, undefined4 *);
};

// @baa 0x0177a9ac
undefined4 C_0177a9ac::sub_0177a9ac(int param_2, undefined4 * param_3)
{
    int param_1 = (int)this;

  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = 0;
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = 0;
    for (puVar1 = *(undefined4 **)(param_1 + 0x2c); puVar1 != (undefined4 *)(param_1 + 0x2c);
        puVar1 = (undefined4 *)*puVar1) {
      if (iVar2 == param_2) {
        *param_3 = *(undefined4 *)(puVar1[2] + 0x7c);
        return 0;
      }
      iVar2 = iVar2 + 1;
    }
  }
  return 0x25;
}

struct C_0177ad18 {
    void sub_0177ad18(float);
};

int sub_0177a15c(void);
// @baa 0x0177ad18
void C_0177ad18::sub_0177ad18(float param_2)
{
    int param_1 = (int)this;

  if (param_2 < 0.0) {
    param_2 = 0.0;
  }
  *(float *)(param_1 + 0x58) = param_2;
  sub_0177a15c();
  return;
}

struct C_0177b091 {
    undefined4 sub_0177b091(byte *);
};

// @baa 0x0177b091
undefined4 C_0177b091::sub_0177b091(byte * param_2)
{
    int param_1 = (int)this;

  undefined4 uVar1;
  
  if (param_2 == (byte *)0x0) {
    uVar1 = 0x25;
  }
  else {
    *param_2 = (byte)(*(uint *)(param_1 + 0x188) >> 5) & 1;
    uVar1 = 0;
  }
  return uVar1;
}

// @baa 0x0177b0e8
undefined4 sub_0177b0e8(int param_1, int * param_2)
{
  if (param_2 == (int *)0x0) {
    return 0x25;
  }
  if (param_1 == 0) {
    return 0x24;
  }
  *param_2 = param_1;
  return 0;
}

struct C_0177b161 {
    undefined4 sub_0177b161(undefined4 *);
};

// @baa 0x0177b161
undefined4 C_0177b161::sub_0177b161(undefined4 * param_2)
{
    int param_1 = (int)this;

  undefined4 uVar1;
  
  if (param_2 == (undefined4 *)0x0) {
    uVar1 = 0x25;
  }
  else {
    *param_2 = *(undefined4 *)(param_1 + 0xf0);
    uVar1 = 0;
  }
  return uVar1;
}

// @baa 0x0177b17b
int __stdcall sub_0177b17b(int a1, int a2, int a3, int a4, int a5, int a6)
{
    return 2;
}

struct SoundI {
    int sub_0177b181(int a, int b, int c, int d);
};

// @baa 0x0177b181
int SoundI::sub_0177b181(int a, int b, int c, int d)
{
    return 2;
}

struct S {
    INT sub_0177b7c7(INT a, INT b);
};

// @baa 0x0177b7c7
INT S::sub_0177b7c7(INT a, INT b) {
    return 0x4f;
}

struct C_0177b809 {
    undefined4 sub_0177b809(undefined4 *);
};

// @baa 0x0177b809
undefined4 C_0177b809::sub_0177b809(undefined4 * param_2)
{
    int param_1 = (int)this;

  undefined4 uVar1;
  
  if (param_2 == (undefined4 *)0x0) {
    uVar1 = 0x25;
  }
  else {
    *param_2 = *(undefined4 *)(param_1 + 0x8c);
    uVar1 = 0;
  }
  return uVar1;
}

struct C_0177ba90 {
    undefined4 sub_0177ba90(undefined4 *);
};

// @baa 0x0177ba90
undefined4 C_0177ba90::sub_0177ba90(undefined4 * param_2)
{
    int param_1 = (int)this;

  undefined4 uVar1;
  
  if (param_2 == (undefined4 *)0x0) {
    uVar1 = 0x25;
  }
  else {
    *param_2 = *(undefined4 *)(param_1 + 0x10c);
    uVar1 = 0;
  }
  return uVar1;
}

struct C_0177bca2 {
    undefined4 sub_0177bca2(undefined4 *);
};

// @baa 0x0177bca2
undefined4 C_0177bca2::sub_0177bca2(undefined4 * param_2)
{
    int param_1 = (int)this;

  undefined4 uVar1;
  
  if (param_2 == (undefined4 *)0x0) {
    uVar1 = 0x25;
  }
  else {
    *param_2 = *(undefined4 *)(param_1 + 0x1c);
    uVar1 = 0;
  }
  return uVar1;
}

struct C_0177bcdf {
    undefined4 sub_0177bcdf(undefined4 *);
};

// @baa 0x0177bcdf
undefined4 C_0177bcdf::sub_0177bcdf(undefined4 * param_2)
{
    int param_1 = (int)this;

  undefined4 uVar1;
  
  if (param_2 == (undefined4 *)0x0) {
    uVar1 = 0x25;
  }
  else {
    *param_2 = *(undefined4 *)(param_1 + 0x38);
    uVar1 = 0;
  }
  return uVar1;
}

struct C_0177bd02 {
    undefined4 sub_0177bd02(undefined4 *);
};

// @baa 0x0177bd02
undefined4 C_0177bd02::sub_0177bd02(undefined4 * param_2)
{
    int param_1 = (int)this;

  undefined4 uVar1;
  
  if (param_2 == (undefined4 *)0x0) {
    uVar1 = 0x25;
  }
  else {
    *param_2 = *(undefined4 *)(param_1 + 0x24);
    uVar1 = 0;
  }
  return uVar1;
}

struct C_0177bd9d {
    undefined4 sub_0177bd9d(undefined4 *);
};

// @baa 0x0177bd9d
undefined4 C_0177bd9d::sub_0177bd9d(undefined4 * param_2)
{
    int param_1 = (int)this;

  undefined4 uVar1;
  
  if (param_2 == (undefined4 *)0x0) {
    uVar1 = 0x25;
  }
  else {
    *param_2 = *(undefined4 *)(param_1 + 0xe8);
    uVar1 = 0;
  }
  return uVar1;
}

struct C_0177e293 {
    void sub_0177e293(int);
};

// @baa 0x0177e293
void C_0177e293::sub_0177e293(int param_2)
{
    int param_1 = (int)this;

  int iVar1;
  int *piVar2;
  
  iVar1 = 1;
  piVar2 = (int *)(param_1 + 0xa4);
  do {
    if (param_2 == *piVar2) {
      *(undefined4 *)(param_1 + 0x1c + iVar1 * 4) = 0;
      *(undefined4 *)(param_1 + 0xa0 + iVar1 * 4) = 0;
      return;
    }
    iVar1 = iVar1 + 1;
    piVar2 = piVar2 + 1;
  } while (iVar1 < 0x20);
  return;
}

extern void sub_0178293e(INT Value);
// @baa 0x0177e550
INT __stdcall sub_0177e550(INT Value)
{
    sub_0178293e(Value);
    return 0;
}
