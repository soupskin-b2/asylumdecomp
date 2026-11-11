// Engine_1a90000.cpp (part 2 of 4): 43 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

// @baa 0x01a9b020
undefined1 __stdcall sub_01a9b020(undefined4 param1)
{
  return 1;
}

struct C { BYTE sub_01a9b270(INT); };

// @baa 0x01a9b270
BYTE C::sub_01a9b270(INT)
{
    return 1;
}

// @baa 0x01a9b3a0
BYTE __stdcall sub_01a9b3a0(DWORD arg1) { return 1; }

struct E_01a9bdd0 {};

// @baa 0x01a9bdd0
E_01a9bdd0 sub_01a9bdd0() { E_01a9bdd0 e; return e; }

struct E_01a9bdf0 {};

// @baa 0x01a9bdf0
E_01a9bdf0 sub_01a9bdf0() { E_01a9bdf0 e; return e; }

struct E_01a9be10 {};

// @baa 0x01a9be10
E_01a9be10 sub_01a9be10() { E_01a9be10 e; return e; }

struct E_01a9be30 {};

// @baa 0x01a9be30
E_01a9be30 sub_01a9be30() { E_01a9be30 e; return e; }

struct E_01a9be50 {};

// @baa 0x01a9be50
E_01a9be50 sub_01a9be50() { E_01a9be50 e; return e; }

struct E_01a9be70 {};

// @baa 0x01a9be70
E_01a9be70 sub_01a9be70() { E_01a9be70 e; return e; }

struct E_01a9bed0 {};

// @baa 0x01a9bed0
E_01a9bed0 sub_01a9bed0() { E_01a9bed0 e; return e; }

struct E_01a9bf10 {};

// @baa 0x01a9bf10
E_01a9bf10 sub_01a9bf10() { E_01a9bf10 e; return e; }

struct E_01a9bf50 {};

// @baa 0x01a9bf50
E_01a9bf50 sub_01a9bf50() { E_01a9bf50 e; return e; }

struct E_01a9bf60 {};

// @baa 0x01a9bf60
E_01a9bf60 sub_01a9bf60() { E_01a9bf60 e; return e; }

struct E_01a9bf70 {};

// @baa 0x01a9bf70
E_01a9bf70 sub_01a9bf70() { E_01a9bf70 e; return e; }

struct E_01a9bf80 {};

// @baa 0x01a9bf80
E_01a9bf80 sub_01a9bf80() { E_01a9bf80 e; return e; }

struct E_01a9bf90 {};

// @baa 0x01a9bf90
E_01a9bf90 sub_01a9bf90() { E_01a9bf90 e; return e; }

struct E_01a9bfd0 {};

// @baa 0x01a9bfd0
E_01a9bfd0 sub_01a9bfd0() { E_01a9bfd0 e; return e; }

struct E_01a9c0f0 {};

// @baa 0x01a9c0f0
E_01a9c0f0 sub_01a9c0f0() { E_01a9c0f0 e; return e; }

extern "C" __declspec(dllimport) int __cdecl memmove_s(void* Dst, unsigned int DstSize, const void* Src, unsigned int SrcSize);
// @baa 0x01a9c100
void* sub_01a9c100(void* First, void* Last, void* NewBase)
{
    int Count = ((int)((char*)Last - (char*)First)) >> 2;
    int Bytes = Count * 4;
    char* NewEnd = (char*)NewBase + Bytes;
    if (Count != 0)
        memmove_s(NewBase, (unsigned int)Bytes, First, (unsigned int)Bytes);
    return NewEnd;
}

struct E_01a9c130 {};

// @baa 0x01a9c130
E_01a9c130 sub_01a9c130() { E_01a9c130 e; return e; }

struct E_01a9c140 {};

// @baa 0x01a9c140
E_01a9c140 sub_01a9c140() { E_01a9c140 e; return e; }

struct E_01a9c1c0 {};

// @baa 0x01a9c1c0
E_01a9c1c0 sub_01a9c1c0() { E_01a9c1c0 e; return e; }

// @baa 0x01a9c1d0
void* sub_01a9c1d0(void* First, void* Last, void* NewBase)
{
    int Count = ((int)((char*)Last - (char*)First)) >> 2;
    int Bytes = Count * 4;
    char* NewEnd = (char*)NewBase + Bytes;
    if (Count != 0)
        memmove_s(NewBase, (unsigned int)Bytes, First, (unsigned int)Bytes);
    return NewEnd;
}

// @baa 0x01a9c470
BYTE __stdcall sub_01a9c470(INT arg1)
{
    return 1;
}

// @baa 0x01a9c4a0
void* sub_01a9c4a0(void* First, void* Last, void* NewBase)
{
    int Count = ((int)((char*)Last - (char*)First)) >> 2;
    int Bytes = Count * 4;
    char* NewEnd = (char*)NewBase + Bytes;
    if (Count != 0)
        memmove_s(NewBase, (unsigned int)Bytes, First, (unsigned int)Bytes);
    return NewEnd;
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

	FRange *sub_01a9cd90(UINT Index, FArrayLike *Array);
};

extern "C" __declspec(dllimport) void _invalid_parameter_noinfo(void);
// @baa 0x01a9cd90
FRange *FRange::sub_01a9cd90(UINT Index, FArrayLike *Array)
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

struct FRange_01a9cec0
{
	void *Range;
	UINT Count;

	FRange_01a9cec0 *sub_01a9cec0(UINT Index, FArrayLike *Array);
};

// @baa 0x01a9cec0
FRange_01a9cec0 *FRange_01a9cec0::sub_01a9cec0(UINT Index, FArrayLike *Array)
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

struct FRange_01a9cf70
{
	void *Range;
	UINT Count;

	FRange_01a9cf70 *sub_01a9cf70(UINT Index, FArrayLike *Array);
};

// @baa 0x01a9cf70
FRange_01a9cf70 *FRange_01a9cf70::sub_01a9cf70(UINT Index, FArrayLike *Array)
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

struct FRange_01a9d020
{
	void *Range;
	UINT Count;

	FRange_01a9d020 *sub_01a9d020(UINT Index, FArrayLike *Array);
};

// @baa 0x01a9d020
FRange_01a9d020 *FRange_01a9d020::sub_01a9d020(UINT Index, FArrayLike *Array)
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

struct FRange_01a9d240
{
	void *Range;
	UINT Count;

	FRange_01a9d240 *sub_01a9d240(UINT Index, FArrayLike *Array);
};

// @baa 0x01a9d240
FRange_01a9d240 *FRange_01a9d240::sub_01a9d240(UINT Index, FArrayLike *Array)
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

struct FRange_01a9d280
{
	void *Range;
	UINT Count;

	FRange_01a9d280 *sub_01a9d280(UINT Index, FArrayLike *Array);
};

// @baa 0x01a9d280
FRange_01a9d280 *FRange_01a9d280::sub_01a9d280(UINT Index, FArrayLike *Array)
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

struct FRange_01a9d2c0
{
	void *Range;
	UINT Count;

	FRange_01a9d2c0 *sub_01a9d2c0(UINT Index, FArrayLike *Array);
};

// @baa 0x01a9d2c0
FRange_01a9d2c0 *FRange_01a9d2c0::sub_01a9d2c0(UINT Index, FArrayLike *Array)
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

// @baa 0x01a9d750
void* sub_01a9d750(void* First, void* Last, void* NewBase)
{
    int Count = ((int)((char*)Last - (char*)First)) >> 2;
    int Bytes = Count * 4;
    char* NewEnd = (char*)NewBase + Bytes;
    if (Count != 0)
        memmove_s(NewBase, (unsigned int)Bytes, First, (unsigned int)Bytes);
    return NewEnd;
}

struct FRange_01a9db60
{
	void *Range;
	UINT Count;

	FRange_01a9db60 *sub_01a9db60(UINT Index, FArrayLike *Array);
};

// @baa 0x01a9db60
FRange_01a9db60 *FRange_01a9db60::sub_01a9db60(UINT Index, FArrayLike *Array)
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

struct FRange_01a9dcc0
{
	void *Range;
	UINT Count;

	FRange_01a9dcc0 *sub_01a9dcc0(UINT Index, FArrayLike *Array);
};

// @baa 0x01a9dcc0
FRange_01a9dcc0 *FRange_01a9dcc0::sub_01a9dcc0(UINT Index, FArrayLike *Array)
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

struct FRange_01a9dd80
{
	void *Range;
	UINT Count;

	FRange_01a9dd80 *sub_01a9dd80(UINT Index, FArrayLike *Array);
};

// @baa 0x01a9dd80
FRange_01a9dd80 *FRange_01a9dd80::sub_01a9dd80(UINT Index, FArrayLike *Array)
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

struct FRange_01a9de00
{
	void *Range;
	UINT Count;

	FRange_01a9de00 *sub_01a9de00(UINT Index, FArrayLike *Array);
};

// @baa 0x01a9de00
FRange_01a9de00 *FRange_01a9de00::sub_01a9de00(UINT Index, FArrayLike *Array)
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

struct FRange_01a9df40
{
	void *Range;
	UINT Count;

	FRange_01a9df40 *sub_01a9df40(UINT Index, FArrayLike *Array);
};

// @baa 0x01a9df40
FRange_01a9df40 *FRange_01a9df40::sub_01a9df40(UINT Index, FArrayLike *Array)
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

struct FRange_01a9df80
{
	void *Range;
	UINT Count;

	FRange_01a9df80 *sub_01a9df80(UINT Index, FArrayLike *Array);
};

// @baa 0x01a9df80
FRange_01a9df80 *FRange_01a9df80::sub_01a9df80(UINT Index, FArrayLike *Array)
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

struct FRange_01a9dfc0
{
	void *Range;
	UINT Count;

	FRange_01a9dfc0 *sub_01a9dfc0(UINT Index, FArrayLike *Array);
};

// @baa 0x01a9dfc0
FRange_01a9dfc0 *FRange_01a9dfc0::sub_01a9dfc0(UINT Index, FArrayLike *Array)
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

// @baa 0x01a9e2c0
undefined4 sub_01a9e2c0(int param_1)
{
  return *(undefined4 *)(param_1 + 4);
}

// @baa 0x01a9e4b0
void* sub_01a9e4b0(void* First, void* Last, void* NewBase)
{
    int Count = ((int)((char*)Last - (char*)First)) >> 2;
    int Bytes = Count * 4;
    char* NewEnd = (char*)NewBase + Bytes;
    if (Count != 0)
        memmove_s(NewBase, (unsigned int)Bytes, First, (unsigned int)Bytes);
    return NewEnd;
}

// @baa 0x01a9ed30
void* sub_01a9ed30(void* First, void* Last, void* NewBase)
{
    int Count = ((int)((char*)Last - (char*)First)) >> 2;
    int Bytes = Count * 4;
    char* NewEnd = (char*)NewBase + Bytes;
    if (Count != 0)
        memmove_s(NewBase, (unsigned int)Bytes, First, (unsigned int)Bytes);
    return NewEnd;
}
