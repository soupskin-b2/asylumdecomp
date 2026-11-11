// SpeedTreeVertexFactory.cpp (part 2 of 2): 23 functions
// Placed here by: neighbours 20, callers 3.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Core.h"

struct Target {
    void sub_01a6ed70(FLOAT * a, FLOAT * b);
};

struct S {
    Target * target;
    void sub_01a6fff0(FLOAT * a, FLOAT * b);
};

// @baa 0x01a6fff0
void S::sub_01a6fff0(FLOAT * a, FLOAT * b) {
    target->sub_01a6ed70(a, b);
}

struct Inner {
    void sub_01a6ed90(float *a, float *b, float *c, float *d);
};

struct Outer {
    Inner *inner;
    void sub_01a70000(float *a, float *b, float *c, float *d);
};

// @baa 0x01a70000
void Outer::sub_01a70000(float *a, float *b, float *c, float *d) {
    inner->sub_01a6ed90(a, b, c, d);
}

struct D { float sub_01a6edd0(void); };

struct C {
    D* m_p;
    float sub_01a70010();
};

// @baa 0x01a70010
float C::sub_01a70010() { return m_p->sub_01a6edd0(); }

struct S_01a70020 {
    void sub_01a6ede0(float *a, float *b);
};

struct C_01a70020 {
    S_01a70020 *_s;
    void sub_01a70020(float *a, float *b);
};

// @baa 0x01a70020
void C_01a70020::sub_01a70020(float *a, float *b)
{
    _s->sub_01a6ede0(a, b);
}

struct S_01a70030 {
    S_01a70030 *m_p;
    void sub_01a70030(float *a, float *b, float *c, float *d, float *e);
};

struct T {
    void sub_01a6ee00(float *a, float *b, float *c, float *d, float *e);
};

// @baa 0x01a70030
void S_01a70030::sub_01a70030(float *a, float *b, float *c, float *d, float *e)
{
    ((T *)this->m_p)->sub_01a6ee00(a, b, c, d, e);
}

struct Inner_01a70040 {
    char pad0[4];
    FLOAT x, y, z, w;
    void sub_01a6ee40(FLOAT *a, FLOAT *b, FLOAT *c, FLOAT *d);
};

struct Outer_01a70040 {
    Inner_01a70040 *field0;
    void sub_01a70040(FLOAT *a, FLOAT *b, FLOAT *c, FLOAT *d);
};

// @baa 0x01a70040
void Outer_01a70040::sub_01a70040(FLOAT *a, FLOAT *b, FLOAT *c, FLOAT *d)
{
    field0->sub_01a6ee40(a, b, c, d);
}

struct Inner_01a70050 {
    void __thiscall sub_01a6ee70(float*, float*, float*, float*);
};

struct C_01a70050 {
    Inner_01a70050* p;
    void __thiscall sub_01a70050(float*, float*, float*, float*);
};

// @baa 0x01a70050
void C_01a70050::sub_01a70050(float* a, float* b, float* c, float* d) {
    p->sub_01a6ee70(a, b, c, d);
}

struct Inner_01a70060 {
    char pad0[4];
    FLOAT x, y, z, w;
    void sub_01a6eea0(FLOAT *a, FLOAT *b, FLOAT *c, FLOAT *d);
};

struct Outer_01a70060 {
    Inner_01a70060 *field0;
    void sub_01a70060(FLOAT *a, FLOAT *b, FLOAT *c, FLOAT *d);
};

// @baa 0x01a70060
void Outer_01a70060::sub_01a70060(FLOAT *a, FLOAT *b, FLOAT *c, FLOAT *d)
{
    field0->sub_01a6eea0(a, b, c, d);
}

struct Inner_01a70070 {
    char pad0[4];
    FLOAT x, y, z, w;
    void sub_01a6eed0(FLOAT *a, FLOAT *b, FLOAT *c, FLOAT *d);
};

struct Outer_01a70070 {
    Inner_01a70070 *field0;
    void sub_01a70070(FLOAT *a, FLOAT *b, FLOAT *c, FLOAT *d);
};

// @baa 0x01a70070
void Outer_01a70070::sub_01a70070(FLOAT *a, FLOAT *b, FLOAT *c, FLOAT *d)
{
    field0->sub_01a6eed0(a, b, c, d);
}

struct Inner_01a70080 {
    char pad0[4];
    FLOAT x, y, z, w;
    void sub_01a6ed60(FLOAT *a, FLOAT *b, FLOAT *c, FLOAT *d);
};

struct Outer_01a70080 {
    Inner_01a70080 *field0;
    void sub_01a70080(FLOAT *a, FLOAT *b, FLOAT *c, FLOAT *d);
};

// @baa 0x01a70080
void Outer_01a70080::sub_01a70080(FLOAT *a, FLOAT *b, FLOAT *c, FLOAT *d)
{
    field0->sub_01a6ed60(a, b, c, d);
}

struct Inner_01a700b0 {
    char pad0[4];
    FLOAT x, y, z, w;
    void sub_01a6f360(FLOAT *a, FLOAT *b, FLOAT *c, FLOAT *d);
};

struct Outer_01a700b0 {
    Inner_01a700b0 *field0;
    void sub_01a700b0(FLOAT *a, FLOAT *b, FLOAT *c, FLOAT *d);
};

// @baa 0x01a700b0
void Outer_01a700b0::sub_01a700b0(FLOAT *a, FLOAT *b, FLOAT *c, FLOAT *d)
{
    field0->sub_01a6f360(a, b, c, d);
}

struct Inner_01a70d20 {
    char pad0[4];
    FLOAT x, y, z, w;
    void sub_01a70750(FLOAT *a, FLOAT *b, FLOAT *c, FLOAT *d);
};

struct Outer_01a70d20 {
    Inner_01a70d20 *field0;
    void sub_01a70d20(FLOAT *a, FLOAT *b, FLOAT *c, FLOAT *d);
};

// @baa 0x01a70d20
void Outer_01a70d20::sub_01a70d20(FLOAT *a, FLOAT *b, FLOAT *c, FLOAT *d)
{
    field0->sub_01a70750(a, b, c, d);
}

struct Inner_01a70d30 {
    char pad0[4];
    FLOAT x, y, z, w;
    void sub_01a70430(FLOAT *a, FLOAT *b, FLOAT *c, FLOAT *d);
};

struct Outer_01a70d30 {
    Inner_01a70d30 *field0;
    void sub_01a70d30(FLOAT *a, FLOAT *b, FLOAT *c, FLOAT *d);
};

// @baa 0x01a70d30
void Outer_01a70d30::sub_01a70d30(FLOAT *a, FLOAT *b, FLOAT *c, FLOAT *d)
{
    field0->sub_01a70430(a, b, c, d);
}

struct Inner_01a70d40 {
    char pad0[4];
    FLOAT x, y, z, w;
    void sub_01a703b0(FLOAT *a, FLOAT *b, FLOAT *c, FLOAT *d);
};

struct Outer_01a70d40 {
    Inner_01a70d40 *field0;
    void sub_01a70d40(FLOAT *a, FLOAT *b, FLOAT *c, FLOAT *d);
};

// @baa 0x01a70d40
void Outer_01a70d40::sub_01a70d40(FLOAT *a, FLOAT *b, FLOAT *c, FLOAT *d)
{
    field0->sub_01a703b0(a, b, c, d);
}

struct Inner_01a70d50 {
    char pad0[4];
    FLOAT x, y, z, w;
    void sub_01a704a0(FLOAT *a, FLOAT *b, FLOAT *c, FLOAT *d);
};

struct Outer_01a70d50 {
    Inner_01a70d50 *field0;
    void sub_01a70d50(FLOAT *a, FLOAT *b, FLOAT *c, FLOAT *d);
};

// @baa 0x01a70d50
void Outer_01a70d50::sub_01a70d50(FLOAT *a, FLOAT *b, FLOAT *c, FLOAT *d)
{
    field0->sub_01a704a0(a, b, c, d);
}

struct Inner_01a70d60 {
    char pad0[4];
    FLOAT x, y, z, w;
    void sub_01a704c0(FLOAT *a, FLOAT *b, FLOAT *c, FLOAT *d);
};

struct Outer_01a70d60 {
    Inner_01a70d60 *field0;
    void sub_01a70d60(FLOAT *a, FLOAT *b, FLOAT *c, FLOAT *d);
};

// @baa 0x01a70d60
void Outer_01a70d60::sub_01a70d60(FLOAT *a, FLOAT *b, FLOAT *c, FLOAT *d)
{
    field0->sub_01a704c0(a, b, c, d);
}

struct Inner_01a70d90 {
    char pad0[4];
    FLOAT x, y, z, w;
    void sub_01a707a0(FLOAT *a, FLOAT *b, FLOAT *c, FLOAT *d);
};

struct Outer_01a70d90 {
    Inner_01a70d90 *field0;
    void sub_01a70d90(FLOAT *a, FLOAT *b, FLOAT *c, FLOAT *d);
};

// @baa 0x01a70d90
void Outer_01a70d90::sub_01a70d90(FLOAT *a, FLOAT *b, FLOAT *c, FLOAT *d)
{
    field0->sub_01a707a0(a, b, c, d);
}

struct Inner_01a70da0 {
    char pad0[4];
    FLOAT x, y, z, w;
    void sub_01a70800(FLOAT *a, FLOAT *b, FLOAT *c, FLOAT *d);
};

struct Outer_01a70da0 {
    Inner_01a70da0 *field0;
    void sub_01a70da0(FLOAT *a, FLOAT *b, FLOAT *c, FLOAT *d);
};

// @baa 0x01a70da0
void Outer_01a70da0::sub_01a70da0(FLOAT *a, FLOAT *b, FLOAT *c, FLOAT *d)
{
    field0->sub_01a70800(a, b, c, d);
}

struct FArrayLike
{
	void *Data;
	UINT ArrayNum;
	UINT ArrayMax;
};

struct FRange
{
	void *Range;
	UINT Count;

	FRange *sub_01a716a0(UINT Index, FArrayLike *Array);
};

extern "C" __declspec(dllimport) void _invalid_parameter_noinfo(void);
// @baa 0x01a716a0
FRange *FRange::sub_01a716a0(UINT Index, FArrayLike *Array)
{
	Range = 0;
	if (!Array || Array->ArrayNum > Index || Index > Array->ArrayMax)
	{
		_invalid_parameter_noinfo();
	}
	Range = Array;
	Count = Index;
	return this;
}

struct FRange_01a71720
{
	void *Range;
	UINT Count;

	FRange_01a71720 *sub_01a71720(UINT Index, FArrayLike *Array);
};

// @baa 0x01a71720
FRange_01a71720 *FRange_01a71720::sub_01a71720(UINT Index, FArrayLike *Array)
{
	Range = 0;
	if (!Array || Array->ArrayNum > Index || Index > Array->ArrayMax)
	{
		_invalid_parameter_noinfo();
	}
	Range = Array;
	Count = Index;
	return this;
}

struct FRange_01a717e0
{
	void *Range;
	UINT Count;

	FRange_01a717e0 *sub_01a717e0(UINT Index, FArrayLike *Array);
};

// @baa 0x01a717e0
FRange_01a717e0 *FRange_01a717e0::sub_01a717e0(UINT Index, FArrayLike *Array)
{
	Range = 0;
	if (!Array || Array->ArrayNum > Index || Index > Array->ArrayMax)
	{
		_invalid_parameter_noinfo();
	}
	Range = Array;
	Count = Index;
	return this;
}

extern "C" __declspec(dllimport) int __cdecl memmove_s(void* Dst, unsigned int DstSize, const void* Src, unsigned int SrcSize);
// @baa 0x01a719e0
void* sub_01a719e0(void* First, void* Last, void* NewBase)
{
    int Count = ((int)((char*)Last - (char*)First)) >> 2;
    int Bytes = Count * 4;
    char* NewEnd = (char*)NewBase + Bytes;
    if (Count != 0)
        memmove_s(NewBase, (unsigned int)Bytes, First, (unsigned int)Bytes);
    return NewEnd;
}

// @baa 0x01a71a50
void* sub_01a71a50(void* First, void* Last, void* NewBase)
{
    int Count = ((int)((char*)Last - (char*)First)) >> 2;
    int Bytes = Count * 4;
    char* NewEnd = (char*)NewBase + Bytes;
    if (Count != 0)
        memmove_s(NewBase, (unsigned int)Bytes, First, (unsigned int)Bytes);
    return NewEnd;
}
