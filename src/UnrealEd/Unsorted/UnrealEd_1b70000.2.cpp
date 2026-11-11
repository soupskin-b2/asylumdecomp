// UnrealEd_1b70000.cpp (part 2 of 3): 11 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

extern "C" __declspec(dllimport) int memmove_s(...);
// @baa 0x01b7d210
void * sub_01b7d210(void * param_1, int param_2, int param_3)
{
  int iVar1;
  void *_Dst;
  iVar1 = param_2 - (int)param_1 >> 2;
  _Dst = (void *)(param_3 + iVar1 * -4);
  if (0 < iVar1) {
    memmove_s(_Dst,iVar1 * 4,param_1,iVar1 * 4);
  }
  return _Dst;
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

	FRange *sub_01b7df70(UINT Index, FArrayLike *Array);
};

extern "C" __declspec(dllimport) void _invalid_parameter_noinfo(void);
// @baa 0x01b7df70
FRange *FRange::sub_01b7df70(UINT Index, FArrayLike *Array)
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

struct FRange_01b7e050
{
	void *Range;
	UINT Count;

	FRange_01b7e050 *sub_01b7e050(UINT Index, FArrayLike *Array);
};

// @baa 0x01b7e050
FRange_01b7e050 *FRange_01b7e050::sub_01b7e050(UINT Index, FArrayLike *Array)
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

struct FRange_01b7e250
{
	void *Range;
	UINT Count;

	FRange_01b7e250 *sub_01b7e250(UINT Index, FArrayLike *Array);
};

// @baa 0x01b7e250
FRange_01b7e250 *FRange_01b7e250::sub_01b7e250(UINT Index, FArrayLike *Array)
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

struct FRange_01b7e2d0
{
	void *Range;
	UINT Count;

	FRange_01b7e2d0 *sub_01b7e2d0(UINT Index, FArrayLike *Array);
};

// @baa 0x01b7e2d0
FRange_01b7e2d0 *FRange_01b7e2d0::sub_01b7e2d0(UINT Index, FArrayLike *Array)
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

// @baa 0x01b7e420
void * sub_01b7e420(void * param_1, int param_2, int param_3)
{
  int iVar1;
  void *_Dst;
  iVar1 = param_2 - (int)param_1 >> 2;
  _Dst = (void *)(param_3 + iVar1 * -4);
  if (0 < iVar1) {
    memmove_s(_Dst,iVar1 * 4,param_1,iVar1 * 4);
  }
  return _Dst;
}

struct FRange_01b7ecd0
{
	void *Range;
	UINT Count;

	FRange_01b7ecd0 *sub_01b7ecd0(UINT Index, FArrayLike *Array);
};

// @baa 0x01b7ecd0
FRange_01b7ecd0 *FRange_01b7ecd0::sub_01b7ecd0(UINT Index, FArrayLike *Array)
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

struct FRange_01b7ed60
{
	void *Range;
	UINT Count;

	FRange_01b7ed60 *sub_01b7ed60(UINT Index, FArrayLike *Array);
};

// @baa 0x01b7ed60
FRange_01b7ed60 *FRange_01b7ed60::sub_01b7ed60(UINT Index, FArrayLike *Array)
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

struct FRange_01b7ee20
{
	void *Range;
	UINT Count;

	FRange_01b7ee20 *sub_01b7ee20(UINT Index, FArrayLike *Array);
};

// @baa 0x01b7ee20
FRange_01b7ee20 *FRange_01b7ee20::sub_01b7ee20(UINT Index, FArrayLike *Array)
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

struct FRange_01b7eea0
{
	void *Range;
	UINT Count;

	FRange_01b7eea0 *sub_01b7eea0(UINT Index, FArrayLike *Array);
};

// @baa 0x01b7eea0
FRange_01b7eea0 *FRange_01b7eea0::sub_01b7eea0(UINT Index, FArrayLike *Array)
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

// @baa 0x01b7f020
void * sub_01b7f020(void * param_1, int param_2, int param_3)
{
  int iVar1;
  void *_Dst;
  
  iVar1 = param_2 - (int)param_1 >> 2;
  _Dst = (void *)(param_3 + iVar1 * -4);
  if (0 < iVar1) {
    memmove_s(_Dst,iVar1 * 4,param_1,iVar1 * 4);
  }
  return _Dst;
}
