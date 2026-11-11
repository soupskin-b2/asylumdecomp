// UnrealEd_1b80000.cpp (part 3 of 3): 4 functions
// Functions whose original source file is not known yet, grouped by address.
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
// @baa 0x01b8e330
bool sub_01b8e330(FxObject* arg1, void** arg2, int* arg3, int arg4, int arg5, float arg6)
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
    undefined4 sub_01b8e4c0();
};

// @baa 0x01b8e4c0
undefined4 C::sub_01b8e4c0(void)
{
    int param_1 = (int)this;
  return *(undefined4 *)(param_1 + 8);
}

// @baa 0x01b8fa20
bool sub_01b8fa20(FxObject* arg1, void** arg2, int* arg3, int arg4, int arg5, float arg6)
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

struct C_01b8fbb0 {
    undefined4 sub_01b8fbb0();
};

// @baa 0x01b8fbb0
undefined4 C_01b8fbb0::sub_01b8fbb0(void)
{
    int param_1 = (int)this;
  return *(undefined4 *)(param_1 + 8);
}
