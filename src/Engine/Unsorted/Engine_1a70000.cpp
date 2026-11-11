// Engine_1a70000.cpp (part 1 of 3): 15 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    int sub_01a704a0();
};

// @baa 0x01a704a0
int C::sub_01a704a0(void)
{
    int param_1 = (int)this;
  if (*(int *)(param_1 + 0x114) == 0) {
    return 0;
  }
  return *(int *)(param_1 + 0x118) - *(int *)(param_1 + 0x114) >> 6;
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

	FRange *sub_01a70980(UINT Index, FArrayLike *Array);
};

extern "C" __declspec(dllimport) void _invalid_parameter_noinfo(void);
// @baa 0x01a70980
FRange *FRange::sub_01a70980(UINT Index, FArrayLike *Array)
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

struct FRange_01a70a00
{
	void *Range;
	UINT Count;

	FRange_01a70a00 *sub_01a70a00(UINT Index, FArrayLike *Array);
};

// @baa 0x01a70a00
FRange_01a70a00 *FRange_01a70a00::sub_01a70a00(UINT Index, FArrayLike *Array)
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

struct FRange_01a70ab0
{
	void *Range;
	UINT Count;

	FRange_01a70ab0 *sub_01a70ab0(UINT Index, FArrayLike *Array);
};

// @baa 0x01a70ab0
FRange_01a70ab0 *FRange_01a70ab0::sub_01a70ab0(UINT Index, FArrayLike *Array)
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
// @baa 0x01a70b10
void* sub_01a70b10(void* First, void* Last, void* NewBase)
{
    int Count = ((int)((char*)Last - (char*)First)) >> 2;
    int Bytes = Count * 4;
    char* NewEnd = (char*)NewBase + Bytes;
    if (Count != 0)
        memmove_s(NewBase, (unsigned int)Bytes, First, (unsigned int)Bytes);
    return NewEnd;
}

// @baa 0x01a70b90
void* sub_01a70b90(void* First, void* Last, void* NewBase)
{
    int Count = ((int)((char*)Last - (char*)First)) >> 2;
    int Bytes = Count * 4;
    char* NewEnd = (char*)NewBase + Bytes;
    if (Count != 0)
        memmove_s(NewBase, (unsigned int)Bytes, First, (unsigned int)Bytes);
    return NewEnd;
}

// @baa 0x01a70c10
void* sub_01a70c10(void* First, void* Last, void* NewBase)
{
    int Count = ((int)((char*)Last - (char*)First)) >> 2;
    int Bytes = Count * 4;
    char* NewEnd = (char*)NewBase + Bytes;
    if (Count != 0)
        memmove_s(NewBase, (unsigned int)Bytes, First, (unsigned int)Bytes);
    return NewEnd;
}

// @baa 0x01a70c80
void* sub_01a70c80(void* First, void* Last, void* NewBase)
{
    int Count = ((int)((char*)Last - (char*)First)) >> 2;
    int Bytes = Count * 4;
    char* NewEnd = (char*)NewBase + Bytes;
    if (Count != 0)
        memmove_s(NewBase, (unsigned int)Bytes, First, (unsigned int)Bytes);
    return NewEnd;
}

struct Inner {
    char pad0[4];
    FLOAT x, y, z, w;
    void sub_01a70590(FLOAT *a, FLOAT *b, FLOAT *c, FLOAT *d);
};

struct Outer {
    Inner *field0;
    void sub_01a70ce0(FLOAT *a, FLOAT *b, FLOAT *c, FLOAT *d);
};

// @baa 0x01a70ce0
void Outer::sub_01a70ce0(FLOAT *a, FLOAT *b, FLOAT *c, FLOAT *d)
{
    field0->sub_01a70590(a, b, c, d);
}

struct Inner_01a70d80 {
    char pad0[4];
    FLOAT x, y, z, w;
    void sub_01a70530(FLOAT *a, FLOAT *b, FLOAT *c, FLOAT *d);
};

struct Outer_01a70d80 {
    Inner_01a70d80 *field0;
    void sub_01a70d80(FLOAT *a, FLOAT *b, FLOAT *c, FLOAT *d);
};

// @baa 0x01a70d80
void Outer_01a70d80::sub_01a70d80(FLOAT *a, FLOAT *b, FLOAT *c, FLOAT *d)
{
    field0->sub_01a70530(a, b, c, d);
}

struct Inner_01a72810 {
    char pad0[4];
    FLOAT x, y, z, w;
    void sub_01a72210(FLOAT *a, FLOAT *b, FLOAT *c, FLOAT *d);
};

struct Outer_01a72810 {
    Inner_01a72810 *field0;
    void sub_01a72810(FLOAT *a, FLOAT *b, FLOAT *c, FLOAT *d);
};

// @baa 0x01a72810
void Outer_01a72810::sub_01a72810(FLOAT *a, FLOAT *b, FLOAT *c, FLOAT *d)
{
    field0->sub_01a72210(a, b, c, d);
}

struct M_01a72850 { void sub_01a71530(); };

struct C_01a72850 { char pad[20]; M_01a72850 m; void sub_01a72850(); };

// @baa 0x01a72850
void C_01a72850::sub_01a72850() { m.sub_01a71530(); }

// @baa 0x01a79a70
undefined4 sub_01a79a70(int param_1)
{
  return *(undefined4 *)(param_1 + 4);
}

// @baa 0x01a79ce0
void* sub_01a79ce0(void* First, void* Last, void* NewBase)
{
    int Count = ((int)((char*)Last - (char*)First)) >> 2;
    int Bytes = Count * 4;
    char* NewEnd = (char*)NewBase + Bytes;
    if (Count != 0)
        memmove_s(NewBase, (unsigned int)Bytes, First, (unsigned int)Bytes);
    return NewEnd;
}

// @baa 0x01a7a460
void* sub_01a7a460(void* First, void* Last, void* NewBase)
{
    int Count = ((int)((char*)Last - (char*)First)) >> 2;
    int Bytes = Count * 4;
    char* NewEnd = (char*)NewBase + Bytes;
    if (Count != 0)
        memmove_s(NewBase, (unsigned int)Bytes, First, (unsigned int)Bytes);
    return NewEnd;
}
