// UnrealEd_1b50000.cpp (part 3 of 6): 10 functions
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

	FRange *sub_01b59840(UINT Index, FArrayLike *Array);
};

extern "C" __declspec(dllimport) void _invalid_parameter_noinfo(void);
// @baa 0x01b59840
FRange *FRange::sub_01b59840(UINT Index, FArrayLike *Array)
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

struct FRange_01b59ae0
{
	void *Range;
	UINT Count;

	FRange_01b59ae0 *sub_01b59ae0(UINT Index, FArrayLike *Array);
};

// @baa 0x01b59ae0
FRange_01b59ae0 *FRange_01b59ae0::sub_01b59ae0(UINT Index, FArrayLike *Array)
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

struct FRange_01b59b60
{
	void *Range;
	UINT Count;

	FRange_01b59b60 *sub_01b59b60(UINT Index, FArrayLike *Array);
};

// @baa 0x01b59b60
FRange_01b59b60 *FRange_01b59b60::sub_01b59b60(UINT Index, FArrayLike *Array)
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

struct FRange_01b59be0
{
	void *Range;
	UINT Count;

	FRange_01b59be0 *sub_01b59be0(UINT Index, FArrayLike *Array);
};

// @baa 0x01b59be0
FRange_01b59be0 *FRange_01b59be0::sub_01b59be0(UINT Index, FArrayLike *Array)
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

struct FRange_01b59c60
{
	void *Range;
	UINT Count;

	FRange_01b59c60 *sub_01b59c60(UINT Index, FArrayLike *Array);
};

// @baa 0x01b59c60
FRange_01b59c60 *FRange_01b59c60::sub_01b59c60(UINT Index, FArrayLike *Array)
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

struct FRange_01b5a6c0
{
	void *Range;
	UINT Count;

	FRange_01b5a6c0 *sub_01b5a6c0(UINT Index, FArrayLike *Array);
};

// @baa 0x01b5a6c0
FRange_01b5a6c0 *FRange_01b5a6c0::sub_01b5a6c0(UINT Index, FArrayLike *Array)
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

struct FRange_01b5a740
{
	void *Range;
	UINT Count;

	FRange_01b5a740 *sub_01b5a740(UINT Index, FArrayLike *Array);
};

// @baa 0x01b5a740
FRange_01b5a740 *FRange_01b5a740::sub_01b5a740(UINT Index, FArrayLike *Array)
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

struct FRange_01b5a7c0
{
	void *Range;
	UINT Count;

	FRange_01b5a7c0 *sub_01b5a7c0(UINT Index, FArrayLike *Array);
};

// @baa 0x01b5a7c0
FRange_01b5a7c0 *FRange_01b5a7c0::sub_01b5a7c0(UINT Index, FArrayLike *Array)
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

struct FRange_01b5a840
{
	void *Range;
	UINT Count;

	FRange_01b5a840 *sub_01b5a840(UINT Index, FArrayLike *Array);
};

// @baa 0x01b5a840
FRange_01b5a840 *FRange_01b5a840::sub_01b5a840(UINT Index, FArrayLike *Array)
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

struct FRange_01b5a8c0
{
	void *Range;
	UINT Count;

	FRange_01b5a8c0 *sub_01b5a8c0(UINT Index, FArrayLike *Array);
};

// @baa 0x01b5a8c0
FRange_01b5a8c0 *FRange_01b5a8c0::sub_01b5a8c0(UINT Index, FArrayLike *Array)
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
