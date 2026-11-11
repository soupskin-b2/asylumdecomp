// Engine_1a80000.cpp (part 2 of 5): 36 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    undefined4 sub_01a831e0(float *);
};

// @baa 0x01a831e0
undefined4 C::sub_01a831e0(float * param_2)
{
    float * param_1 = (float *)this;

  if (*param_1 <= *param_2) {
    return 1;
  }
  return 0;
}

struct C_01a83340 {
    char pad[0x2c];
    float f2c;
    void sub_01a83340(float f);
};

// @baa 0x01a83340
void C_01a83340::sub_01a83340(float f)
{
    f2c = f;
}

struct S0051d120 {
    double sub_01aaf1f0();
};

struct S0051d690 {
    char _pad[0x130];
    S0051d120 *p;
    double sub_01a83af0();
};

// @baa 0x01a83af0
double S0051d690::sub_01a83af0() {
    return p->sub_01aaf1f0();
}

struct S0051d120_01a83b00 {
    double sub_01aaf0e0();
};

struct S0051d690_01a83b00 {
    char _pad[0x130];
    S0051d120_01a83b00 *p;
    double sub_01a83b00();
};

// @baa 0x01a83b00
double S0051d690_01a83b00::sub_01a83b00() {
    return p->sub_01aaf0e0();
}

// @baa 0x01a84240
BYTE __stdcall sub_01a84240(undefined4 param_1)
{
    return 1;
}

// @baa 0x01a842e0
BYTE __stdcall sub_01a842e0(int a)
{
    return 1;
}

struct C_01a84420 {
    C_01a84420* sub_01a84420(INT a);
};

// @baa 0x01a84420
C_01a84420* C_01a84420::sub_01a84420(INT a)
{
    (void)a;
    return this;
}

struct E_01a849c0 {};

// @baa 0x01a849c0
E_01a849c0 sub_01a849c0() { E_01a849c0 e; return e; }

struct E_01a849e0 {};

// @baa 0x01a849e0
E_01a849e0 sub_01a849e0() { E_01a849e0 e; return e; }

struct E_01a84a30 {};

// @baa 0x01a84a30
E_01a84a30 sub_01a84a30() { E_01a84a30 e; return e; }

struct E_01a84a50 {};

// @baa 0x01a84a50
E_01a84a50 sub_01a84a50() { E_01a84a50 e; return e; }

struct E_01a84ab0 {};

// @baa 0x01a84ab0
E_01a84ab0 sub_01a84ab0() { E_01a84ab0 e; return e; }

struct E_01a84b50 {};

// @baa 0x01a84b50
E_01a84b50 sub_01a84b50() { E_01a84b50 e; return e; }

struct E_01a84b80 {};

// @baa 0x01a84b80
E_01a84b80 sub_01a84b80() { E_01a84b80 e; return e; }

struct E_01a84bc0 {};

// @baa 0x01a84bc0
E_01a84bc0 sub_01a84bc0() { E_01a84bc0 e; return e; }

struct E_01a84bf0 {};

// @baa 0x01a84bf0
E_01a84bf0 sub_01a84bf0() { E_01a84bf0 e; return e; }

struct E_01a84c00 {};

// @baa 0x01a84c00
E_01a84c00 sub_01a84c00() { E_01a84c00 e; return e; }

struct E_01a84c70 {};

// @baa 0x01a84c70
E_01a84c70 sub_01a84c70() { E_01a84c70 e; return e; }

extern "C" __declspec(dllimport) int __cdecl memmove_s(void* Dst, unsigned int DstSize, const void* Src, unsigned int SrcSize);
// @baa 0x01a84c80
void* sub_01a84c80(void* First, void* Last, void* NewBase)
{
    int Count = ((int)((char*)Last - (char*)First)) >> 2;
    int Bytes = Count * 4;
    char* NewEnd = (char*)NewBase + Bytes;
    if (Count != 0)
        memmove_s(NewBase, (unsigned int)Bytes, First, (unsigned int)Bytes);
    return NewEnd;
}

// @baa 0x01a84cc0
void* sub_01a84cc0(void* First, void* Last, void* NewBase)
{
    int Count = ((int)((char*)Last - (char*)First)) >> 2;
    int Bytes = Count * 4;
    char* NewEnd = (char*)NewBase + Bytes;
    if (Count != 0)
        memmove_s(NewBase, (unsigned int)Bytes, First, (unsigned int)Bytes);
    return NewEnd;
}

struct E_01a84cf0 {};

// @baa 0x01a84cf0
E_01a84cf0 sub_01a84cf0() { E_01a84cf0 e; return e; }

// @baa 0x01a84d00
void* sub_01a84d00(void* First, void* Last, void* NewBase)
{
    int Count = ((int)((char*)Last - (char*)First)) >> 2;
    int Bytes = Count * 4;
    char* NewEnd = (char*)NewBase + Bytes;
    if (Count != 0)
        memmove_s(NewBase, (unsigned int)Bytes, First, (unsigned int)Bytes);
    return NewEnd;
}

// @baa 0x01a84d40
void* sub_01a84d40(void* First, void* Last, void* NewBase)
{
    int Count = ((int)((char*)Last - (char*)First)) >> 2;
    int Bytes = Count * 4;
    char* NewEnd = (char*)NewBase + Bytes;
    if (Count != 0)
        memmove_s(NewBase, (unsigned int)Bytes, First, (unsigned int)Bytes);
    return NewEnd;
}

struct C_01a87530 {
    int sub_01a87530(int *);
};

extern "C" __declspec(dllimport) int _invalid_parameter_noinfo(...);
// @baa 0x01a87530
int C_01a87530::sub_01a87530(int * param_2)
{
    int * param_1 = (int *)this;
  if ((*param_1 == 0) || (*param_1 != *param_2)) {
    _invalid_parameter_noinfo();
  }
  return param_1[1] - param_2[1] >> 2;
}

// @baa 0x01a87990
void* sub_01a87990(void* First, void* Last, void* NewBase)
{
    int Count = ((int)((char*)Last - (char*)First)) >> 2;
    int Bytes = Count * 4;
    char* NewEnd = (char*)NewBase + Bytes;
    if (Count != 0)
        memmove_s(NewBase, (unsigned int)Bytes, First, (unsigned int)Bytes);
    return NewEnd;
}

// @baa 0x01a879d0
void* sub_01a879d0(void* First, void* Last, void* NewBase)
{
    int Count = ((int)((char*)Last - (char*)First)) >> 2;
    int Bytes = Count * 4;
    char* NewEnd = (char*)NewBase + Bytes;
    if (Count != 0)
        memmove_s(NewBase, (unsigned int)Bytes, First, (unsigned int)Bytes);
    return NewEnd;
}

// @baa 0x01a87b00
void* sub_01a87b00(void* First, void* Last, void* NewBase)
{
    int Count = ((int)((char*)Last - (char*)First)) >> 2;
    int Bytes = Count * 4;
    char* NewEnd = (char*)NewBase + Bytes;
    if (Count != 0)
        memmove_s(NewBase, (unsigned int)Bytes, First, (unsigned int)Bytes);
    return NewEnd;
}

// @baa 0x01a87b90
void* sub_01a87b90(void* First, void* Last, void* NewBase)
{
    int Count = ((int)((char*)Last - (char*)First)) >> 2;
    int Bytes = Count * 4;
    char* NewEnd = (char*)NewBase + Bytes;
    if (Count != 0)
        memmove_s(NewBase, (unsigned int)Bytes, First, (unsigned int)Bytes);
    return NewEnd;
}

struct C_01a87bc0 { void sub_01a826e0(void); };

// @baa 0x01a87bc0
void sub_01a87bc0(C_01a87bc0 *param_1)
{
  param_1->sub_01a826e0();
}

// @baa 0x01a88780
void* sub_01a88780(void* First, void* Last, void* NewBase)
{
    int Count = ((int)((char*)Last - (char*)First)) >> 2;
    int Bytes = Count * 4;
    char* NewEnd = (char*)NewBase + Bytes;
    if (Count != 0)
        memmove_s(NewBase, (unsigned int)Bytes, First, (unsigned int)Bytes);
    return NewEnd;
}

// @baa 0x01a887b0
void* sub_01a887b0(void* First, void* Last, void* NewBase)
{
    int Count = ((int)((char*)Last - (char*)First)) >> 2;
    int Bytes = Count * 4;
    char* NewEnd = (char*)NewBase + Bytes;
    if (Count != 0)
        memmove_s(NewBase, (unsigned int)Bytes, First, (unsigned int)Bytes);
    return NewEnd;
}

// @baa 0x01a88960
void* sub_01a88960(void* First, void* Last, void* NewBase)
{
    int Count = ((int)((char*)Last - (char*)First)) >> 2;
    int Bytes = Count * 4;
    char* NewEnd = (char*)NewBase + Bytes;
    if (Count != 0)
        memmove_s(NewBase, (unsigned int)Bytes, First, (unsigned int)Bytes);
    return NewEnd;
}

// @baa 0x01a89030
void* sub_01a89030(void* First, void* Last, void* NewBase)
{
    int Count = ((int)((char*)Last - (char*)First)) >> 2;
    int Bytes = Count * 4;
    char* NewEnd = (char*)NewBase + Bytes;
    if (Count != 0)
        memmove_s(NewBase, (unsigned int)Bytes, First, (unsigned int)Bytes);
    return NewEnd;
}

struct M_01a8b480 { void sub_01a8ada0(); };

struct C_01a8b480 { char pad[144]; M_01a8b480 m; void sub_01a8b480(); };

// @baa 0x01a8b480
void C_01a8b480::sub_01a8b480() { m.sub_01a8ada0(); }

struct C_01a8fe10 {
    INT sub_01a8fe10();
};

// @baa 0x01a8fe10
INT C_01a8fe10::sub_01a8fe10(void)
{
    return ((BYTE *)this)[0];
}

struct C_01a8fe40 {
    UINT sub_01a8fe40();
};

// @baa 0x01a8fe40
UINT C_01a8fe40::sub_01a8fe40(void)
{
    return *(BYTE *)((char *)this + 0xb0);
}
