// UnrealEd_1b90000.cpp (part 1 of 2): 11 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

extern int g_027d3448;
int sub_01b8f2c0();
// @baa 0x01b92d20
int sub_01b92d20() { if (!g_027d3448) g_027d3448 = sub_01b8f2c0(); return g_027d3448; }

extern int g_027d344c;
int sub_01b92c90();
// @baa 0x01b92d40
int sub_01b92d40() { if (!g_027d344c) g_027d344c = sub_01b92c90(); return g_027d344c; }

// @baa 0x01b92e90
float __stdcall sub_01b92e90(float f)
{
    (void)f;
    return 0.0f;
}

// @baa 0x01b93080
float __stdcall sub_01b93080(UINT)
{
    return 0.0f;
}

struct FFaceData {
    INT Unk00; // 0x00
    INT Unk04; // 0x04
    INT Unk08; // 0x08
    void sub_01b93310(volatile FFaceData *Other);
};

// @baa 0x01b93310
void FFaceData::sub_01b93310(volatile FFaceData *Other)
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

struct FFaceData_01b93340 {
    INT Unk00; // 0x00
    INT Unk04; // 0x04
    INT Unk08; // 0x08
    void sub_01b93340(volatile FFaceData_01b93340 *Other);
};

// @baa 0x01b93340
void FFaceData_01b93340::sub_01b93340(volatile FFaceData_01b93340 *Other)
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

struct C {
    C *sub_01b94640();
};

// @baa 0x01b94640
C *C::sub_01b94640()
{
    int *pp = (int *)this;
    *pp = *(int *)(*pp + 4);
    return this;
}

struct C_01b94650 {
    int *f;
    C_01b94650 *sub_01b94650();
};

// @baa 0x01b94650
C_01b94650 *C_01b94650::sub_01b94650()
{
    f = (int*)f[2];
    return this;
}

struct S {
    INT Unk00;
    INT Unk04;
    S *sub_01b94690();
};

// @baa 0x01b94690
S *S::sub_01b94690()
{
    Unk00 = 0;
    Unk04 = 0;
    return this;
}

struct C_01b946a0 { int a; C_01b946a0(int); };

// @baa 0x01b946a0
C_01b946a0::C_01b946a0(int x) : a(x) {}

struct C_01b94700 {
    int pad;
    int a;
    int b;
    C_01b94700 *sub_01b94700();
};

// @baa 0x01b94700
C_01b94700 *C_01b94700::sub_01b94700()
{
    a = 0;
    b = 0;
    return this;
}
