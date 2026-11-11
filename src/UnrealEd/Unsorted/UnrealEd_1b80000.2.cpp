// UnrealEd_1b80000.cpp (part 2 of 3): 7 functions
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

	FRange *sub_01b85830(UINT Index, FArrayLike *Array);
};

extern "C" __declspec(dllimport) void _invalid_parameter_noinfo(void);
// @baa 0x01b85830
FRange *FRange::sub_01b85830(UINT Index, FArrayLike *Array)
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

struct FRange_01b858e0
{
	void *Range;
	UINT Count;

	FRange_01b858e0 *sub_01b858e0(UINT Index, FArrayLike *Array);
};

// @baa 0x01b858e0
FRange_01b858e0 *FRange_01b858e0::sub_01b858e0(UINT Index, FArrayLike *Array)
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

struct FRange_01b87da0
{
	void *Range;
	UINT Count;

	FRange_01b87da0 *sub_01b87da0(UINT Index, FArrayLike *Array);
};

// @baa 0x01b87da0
FRange_01b87da0 *FRange_01b87da0::sub_01b87da0(UINT Index, FArrayLike *Array)
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

struct FRange_01b87e60
{
	void *Range;
	UINT Count;

	FRange_01b87e60 *sub_01b87e60(UINT Index, FArrayLike *Array);
};

// @baa 0x01b87e60
FRange_01b87e60 *FRange_01b87e60::sub_01b87e60(UINT Index, FArrayLike *Array)
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

void sub_01b850d0();
// @baa 0x01b87f60
void sub_01b87f60(void) { sub_01b850d0(); }

struct FRange_01b8c070
{
	void *Range;
	UINT Count;

	FRange_01b8c070 *sub_01b8c070(UINT Index, FArrayLike *Array);
};

// @baa 0x01b8c070
FRange_01b8c070 *FRange_01b8c070::sub_01b8c070(UINT Index, FArrayLike *Array)
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

struct FRange_01b8c1f0
{
	void *Range;
	UINT Count;

	FRange_01b8c1f0 *sub_01b8c1f0(UINT Index, FArrayLike *Array);
};

// @baa 0x01b8c1f0
FRange_01b8c1f0 *FRange_01b8c1f0::sub_01b8c1f0(UINT Index, FArrayLike *Array)
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
