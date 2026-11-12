// Engine_1aa0000.cpp (part 3 of 3): 6 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

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

	FRange *sub_01aafd60(UINT Index, FArrayLike *Array);
};

extern "C" __declspec(dllimport) void _invalid_parameter_noinfo(void);
// @baa 0x01aafd60
FRange *FRange::sub_01aafd60(UINT Index, FArrayLike *Array)
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

struct FRange_01aafef0
{
	void *Range;
	UINT Count;

	FRange_01aafef0 *sub_01aafef0(UINT Index, FArrayLike *Array);
};

// @baa 0x01aafef0
FRange_01aafef0 *FRange_01aafef0::sub_01aafef0(UINT Index, FArrayLike *Array)
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

struct C
{
    INT pad_00[2];
    INT Shift;

    DWORD sub_01aaf6f0();
};

// @baa 0x01aaf6f0
DWORD C::sub_01aaf6f0()
{
    return 1 << Shift;
}

struct Sub
{
    void sub_01aa1870();
};

// @baa 0x01aa5590
void __stdcall sub_01aa5590(Sub* Object)
{
    Object->sub_01aa1870();
}

struct C_01aa9020
{
    char pad_0[0x4];
    INT Value_4;
    INT Value_8;
    INT Value_c;

    C_01aa9020* sub_01aa9020();
};

// @baa 0x01aa9020
C_01aa9020* C_01aa9020::sub_01aa9020()
{
    Value_4 = 0;
    Value_8 = 0;
    Value_c = 0;
    return this;
}

struct C_01aab080
{
    char pad_0[0x4];
    INT Value_4;
    INT Value_8;
    INT Value_c;

    C_01aab080* sub_01aab080();
};

// @baa 0x01aab080
C_01aab080* C_01aab080::sub_01aab080()
{
    Value_4 = 0;
    Value_8 = 0;
    Value_c = 0;
    return this;
}
