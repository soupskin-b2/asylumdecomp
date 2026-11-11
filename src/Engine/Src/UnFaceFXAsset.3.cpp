// UnFaceFXAsset.cpp (part 3 of 3): 16 functions
// Placed here by: neighbours 15, callers 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct FxArchive;
struct FxArchiveStoreMemory {
    int f00;
    int f04;
    int f08;
    int f0c;
    int f10;
    int sub_01acb600(void);
    int sub_01acb5f0(void);
};

struct FxObject {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3(FxArchive* ar);
};

void* sub_01acb810(void);
struct FxArchive {
    int  f00;
    int  f04;
    int  f08;
    char f0c;
    int  f10;
    int  f14;
    int  f18;
    int  f1c;
    int  f20;
    int  f24;
    int  f28;
    int  f2c;
    int  f30;
    int  f34;
    int  f38;
    float f3c;
    int  f40;
    int  f44;
    int  f48;
    int  f4c;

    void sub_01ab8360(void*, int, int);
    void sub_01abbdf0(void);
    void sub_01abc3b0(void);
    int  sub_01ab83f0(void);
    void sub_01abc220(int);
    void sub_01ab83b0(int, float);

    FxArchive() { sub_01ab8360(sub_01acb810(), 2, 0); }
    FxArchive(void* a, int b, int c) { sub_01ab8360(a, b, c); }
    ~FxArchive() { sub_01abc3b0(); }
};

int  sub_01ab3960(int size);
FxArchiveStoreMemory* sub_01acb730(int, int);
void* sub_01a375f0(void* dst, const void* src, unsigned int n);
// @baa 0x01ac3470
bool sub_01ac3470(FxObject* arg1, void** arg2, int* arg3, int arg4, int arg5, float arg6)
{
    if (*arg2 == 0) {
        FxArchive ar1;
        ar1.sub_01abbdf0();
        arg1->v3(&ar1);
        FxArchiveStoreMemory* st = sub_01acb730(0, 0);
        FxArchive ar2(st, 4, arg4);
        ar2.sub_01abbdf0();
        if (ar2.f0c) {
            ar2.sub_01abc220(ar1.sub_01ab83f0());
            ar2.sub_01ab83b0(arg5, arg6);
            arg1->v3(&ar2);
            *arg3 = st->sub_01acb600();
            *arg2 = (void*)sub_01ab3960(*arg3);
            int n = *arg3;
            void* src = (void*)st->sub_01acb5f0();
            void* dst = *arg2;
            sub_01a375f0(dst, src, n);
            return true;
        }
    }
    return false;
}

struct C {
    undefined4 sub_01ac3600();
};

// @baa 0x01ac3600
undefined4 C::sub_01ac3600(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  return *param_1;
}

struct C_01ac3630 { int a; C_01ac3630(int); };

// @baa 0x01ac3630
C_01ac3630::C_01ac3630(int x) : a(x) {}

struct C_01ac3640 {
    C_01ac3640 *sub_01ac3640();
};

// @baa 0x01ac3640
C_01ac3640 *C_01ac3640::sub_01ac3640()
{
    int *pp = (int *)this;
    *pp = *(int *)(*pp + 4);
    return this;
}

struct C_01ac3680 {
    C_01ac3680 *sub_01ac3680();
};

// @baa 0x01ac3680
C_01ac3680 *C_01ac3680::sub_01ac3680()
{
    int *pp = (int *)this;
    *pp = *(int *)(*pp + 4);
    return this;
}

struct S {
    INT Unk00;
    INT Unk04;
    S *sub_01ac36c0();
};

// @baa 0x01ac36c0
S *S::sub_01ac36c0()
{
    Unk00 = 0;
    Unk04 = 0;
    return this;
}

struct S_01ac36d0 {
    INT Unk00;
    INT Unk04;
    S_01ac36d0 *sub_01ac36d0();
};

// @baa 0x01ac36d0
S_01ac36d0 *S_01ac36d0::sub_01ac36d0()
{
    Unk00 = 0;
    Unk04 = 0;
    return this;
}

struct C_01ac3720 { int a; C_01ac3720(int); };

// @baa 0x01ac3720
C_01ac3720::C_01ac3720(int x) : a(x) {}

struct S_01ac37a0 {
    INT Unk00;
    INT Unk04;
    S_01ac37a0 *sub_01ac37a0();
};

// @baa 0x01ac37a0
S_01ac37a0 *S_01ac37a0::sub_01ac37a0()
{
    Unk00 = 0;
    Unk04 = 0;
    return this;
}

struct C_01ac3860 {
    int sub_01ac3860(undefined4, undefined4, undefined4);
    int sub_01abf8f0(int);
};

// @baa 0x01ac3860
int C_01ac3860::sub_01ac3860(undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
    int param_1 = (int)this;
  ((C_01ac3860 *)(this))->sub_01abf8f0(param_2);
  *(undefined4 *)(param_1 + 0x14) = param_3;
  *(undefined4 *)(param_1 + 0x18) = param_4;
  return param_1;
}

struct C_01ac3890 {
    int pad;
    int a;
    int b;
    C_01ac3890 *sub_01ac3890();
};

// @baa 0x01ac3890
C_01ac3890 *C_01ac3890::sub_01ac3890()
{
    a = 0;
    b = 0;
    return this;
}

struct C_01ac38c0 {
    int pad;
    int a;
    int b;
    C_01ac38c0 *sub_01ac38c0();
};

// @baa 0x01ac38c0
C_01ac38c0 *C_01ac38c0::sub_01ac38c0()
{
    a = 0;
    b = 0;
    return this;
}

struct C_01ac39a0 {
    int sub_01ac39a0(int);
    int sub_01abf8f0(int);
};

// @baa 0x01ac39a0
int C_01ac39a0::sub_01ac39a0(int param_2)
{
    int param_1 = (int)this;
  ((C_01ac39a0 *)(this))->sub_01abf8f0(param_2);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  return param_1;
}

struct FFaceData {
    INT Unk00; // 0x00
    INT Unk04; // 0x04
    INT Unk08; // 0x08
    void sub_01ac3ac0(volatile FFaceData *Other);
};

// @baa 0x01ac3ac0
void FFaceData::sub_01ac3ac0(volatile FFaceData *Other)
{
    INT tmp;

    tmp = this->Unk00;
    this->Unk00 = Other->Unk00;
    Other->Unk00 = tmp;

    tmp = this->Unk04;
    this->Unk04 = Other->Unk04;
    Other->Unk04 = tmp;

    tmp = this->Unk08;
    this->Unk08 = Other->Unk08;
    Other->Unk08 = tmp;
}

struct S_01ac3d00 { void sub_01abe830(); };

// @baa 0x01ac3d00
void sub_01ac3d00(S_01ac3d00 *p) { if (p) p->sub_01abe830(); }

struct C_01ac51f0 {
    void sub_01ac51f0(int);
};

int sub_01ab3290(...);
// @baa 0x01ac51f0
void C_01ac51f0::sub_01ac51f0(int param_2)
{
    int * param_1 = (int *)this;
  if (param_2 != *param_1) {
    *(undefined4 *)(*(int *)(param_2 + 8) + 4) = *(undefined4 *)(param_2 + 4);
    *(undefined4 *)(*(int *)(param_2 + 4) + 8) = *(undefined4 *)(param_2 + 8);
    sub_01ab3290(param_2,0xc);
    param_1[1] = param_1[1] + -1;
  }
  return;
}
