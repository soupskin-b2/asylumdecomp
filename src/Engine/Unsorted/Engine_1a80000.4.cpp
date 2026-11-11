// Engine_1a80000.cpp (part 4 of 5): 17 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

extern "C" __declspec(dllimport) int memmove_s(...);
// @baa 0x01a84d80
void * sub_01a84d80(void * param_1, int param_2, int param_3)
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

// @baa 0x01a84db0
void * sub_01a84db0(void * param_1, int param_2, int param_3)
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

// @baa 0x01a84de0
void * sub_01a84de0(void * param_1, int param_2, int param_3)
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

	FRange *sub_01a87610(UINT Index, FArrayLike *Array);
};

extern "C" __declspec(dllimport) void _invalid_parameter_noinfo(void);
// @baa 0x01a87610
FRange *FRange::sub_01a87610(UINT Index, FArrayLike *Array)
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

struct FRange_01a876d0
{
	void *Range;
	UINT Count;

	FRange_01a876d0 *sub_01a876d0(UINT Index, FArrayLike *Array);
};

// @baa 0x01a876d0
FRange_01a876d0 *FRange_01a876d0::sub_01a876d0(UINT Index, FArrayLike *Array)
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

struct FRange_01a87750
{
	void *Range;
	UINT Count;

	FRange_01a87750 *sub_01a87750(UINT Index, FArrayLike *Array);
};

// @baa 0x01a87750
FRange_01a87750 *FRange_01a87750::sub_01a87750(UINT Index, FArrayLike *Array)
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

struct FRange_01a87820
{
	void *Range;
	UINT Count;

	FRange_01a87820 *sub_01a87820(UINT Index, FArrayLike *Array);
};

// @baa 0x01a87820
FRange_01a87820 *FRange_01a87820::sub_01a87820(UINT Index, FArrayLike *Array)
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

struct FRange_01a87860
{
	void *Range;
	UINT Count;

	FRange_01a87860 *sub_01a87860(UINT Index, FArrayLike *Array);
};

// @baa 0x01a87860
FRange_01a87860 *FRange_01a87860::sub_01a87860(UINT Index, FArrayLike *Array)
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

// @baa 0x01a87a10
void * sub_01a87a10(void * param_1, int param_2, int param_3)
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

// @baa 0x01a87a40
void * sub_01a87a40(void * param_1, int param_2, int param_3)
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

// @baa 0x01a87a70
void * sub_01a87a70(void * param_1, int param_2, int param_3)
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

struct FRange_01a88090
{
	void *Range;
	UINT Count;

	FRange_01a88090 *sub_01a88090(UINT Index, FArrayLike *Array);
};

// @baa 0x01a88090
FRange_01a88090 *FRange_01a88090::sub_01a88090(UINT Index, FArrayLike *Array)
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

struct FRange_01a88150
{
	void *Range;
	UINT Count;

	FRange_01a88150 *sub_01a88150(UINT Index, FArrayLike *Array);
};

// @baa 0x01a88150
FRange_01a88150 *FRange_01a88150::sub_01a88150(UINT Index, FArrayLike *Array)
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

struct FRange_01a881d0
{
	void *Range;
	UINT Count;

	FRange_01a881d0 *sub_01a881d0(UINT Index, FArrayLike *Array);
};

// @baa 0x01a881d0
FRange_01a881d0 *FRange_01a881d0::sub_01a881d0(UINT Index, FArrayLike *Array)
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

struct FRange_01a88250
{
	void *Range;
	UINT Count;

	FRange_01a88250 *sub_01a88250(UINT Index, FArrayLike *Array);
};

// @baa 0x01a88250
FRange_01a88250 *FRange_01a88250::sub_01a88250(UINT Index, FArrayLike *Array)
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

struct FRange_01a88290
{
	void *Range;
	UINT Count;

	FRange_01a88290 *sub_01a88290(UINT Index, FArrayLike *Array);
};

// @baa 0x01a88290
FRange_01a88290 *FRange_01a88290::sub_01a88290(UINT Index, FArrayLike *Array)
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

struct Sub
{
    void sub_01a826e0();
};

// @baa 0x01a887e0
void __stdcall sub_01a887e0(Sub* Object)
{
    Object->sub_01a826e0();
}
