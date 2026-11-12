// UnrealEd_1b70000.cpp (part 2 of 3): 25 functions
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

struct C
{
    char pad_0[0x4];
    INT Value_4;
    INT Value_8;
    INT Value_c;

    C* sub_01b70000();
};

// @baa 0x01b70000
C* C::sub_01b70000()
{
    Value_4 = 0;
    Value_8 = 0;
    Value_c = 0;
    return this;
}

struct C_01b70010
{
    char pad_0[0x4];
    INT Value_4;
    INT Value_8;
    INT Value_c;

    C_01b70010* sub_01b70010();
};

// @baa 0x01b70010
C_01b70010* C_01b70010::sub_01b70010()
{
    Value_4 = 0;
    Value_8 = 0;
    Value_c = 0;
    return this;
}

struct C_01b70020
{
    char pad_0[0x4];
    INT Value_4;
    INT Value_8;
    INT Value_c;

    C_01b70020* sub_01b70020();
};

// @baa 0x01b70020
C_01b70020* C_01b70020::sub_01b70020()
{
    Value_4 = 0;
    Value_8 = 0;
    Value_c = 0;
    return this;
}

struct C_01b70030
{
    char pad_0[0x4];
    INT Value_4;
    INT Value_8;
    INT Value_c;

    C_01b70030* sub_01b70030();
};

// @baa 0x01b70030
C_01b70030* C_01b70030::sub_01b70030()
{
    Value_4 = 0;
    Value_8 = 0;
    Value_c = 0;
    return this;
}

struct C_01b70040
{
    char pad_0[0x4];
    INT Value_4;
    INT Value_8;
    INT Value_c;

    C_01b70040* sub_01b70040();
};

// @baa 0x01b70040
C_01b70040* C_01b70040::sub_01b70040()
{
    Value_4 = 0;
    Value_8 = 0;
    Value_c = 0;
    return this;
}

struct C_01b70050
{
    char pad_0[0x4];
    INT Value_4;
    INT Value_8;
    INT Value_c;

    C_01b70050* sub_01b70050();
};

// @baa 0x01b70050
C_01b70050* C_01b70050::sub_01b70050()
{
    Value_4 = 0;
    Value_8 = 0;
    Value_c = 0;
    return this;
}

struct C_01b726e0
{
    char pad_0[0x4];
    INT Value_4;
    INT Value_8;
    INT Value_c;

    C_01b726e0* sub_01b726e0();
};

// @baa 0x01b726e0
C_01b726e0* C_01b726e0::sub_01b726e0()
{
    Value_4 = 0;
    Value_8 = 0;
    Value_c = 0;
    return this;
}

void sub_00402660(INT Value);
// @baa 0x01b7c870
void __stdcall sub_01b7c870(INT A, INT B)
{
    sub_00402660(A);
}

// @baa 0x01b7c9a0
void __stdcall sub_01b7c9a0(INT A, INT B)
{
    sub_00402660(A);
}

// @baa 0x01b7ca20
void __stdcall sub_01b7ca20(INT A, INT B)
{
    sub_00402660(A);
}

// @baa 0x01b7caa0
void __stdcall sub_01b7caa0(INT A, INT B)
{
    sub_00402660(A);
}

struct C_01b7f7b0
{
    char pad_0[0x4];
    INT Value_4;
    INT Value_8;
    INT Value_c;

    C_01b7f7b0* sub_01b7f7b0();
};

// @baa 0x01b7f7b0
C_01b7f7b0* C_01b7f7b0::sub_01b7f7b0()
{
    Value_4 = 0;
    Value_8 = 0;
    Value_c = 0;
    return this;
}

struct C_01b7f7f0
{
    char pad_0[0x4];
    INT Value_4;
    INT Value_8;
    INT Value_c;

    C_01b7f7f0* sub_01b7f7f0();
};

// @baa 0x01b7f7f0
C_01b7f7f0* C_01b7f7f0::sub_01b7f7f0()
{
    Value_4 = 0;
    Value_8 = 0;
    Value_c = 0;
    return this;
}

struct C_01b7f860
{
    char pad_0[0x4];
    INT Value_4;
    INT Value_8;
    INT Value_c;

    C_01b7f860* sub_01b7f860();
};

// @baa 0x01b7f860
C_01b7f860* C_01b7f860::sub_01b7f860()
{
    Value_4 = 0;
    Value_8 = 0;
    Value_c = 0;
    return this;
}
