// UnrealEd_1b60000.cpp (part 2 of 3): 35 functions
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

	FRange *sub_01b610f0(UINT Index, FArrayLike *Array);
};

extern "C" __declspec(dllimport) void _invalid_parameter_noinfo(void);
// @baa 0x01b610f0
FRange *FRange::sub_01b610f0(UINT Index, FArrayLike *Array)
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

struct FRange_01b61180
{
	void *Range;
	UINT Count;

	FRange_01b61180 *sub_01b61180(UINT Index, FArrayLike *Array);
};

// @baa 0x01b61180
FRange_01b61180 *FRange_01b61180::sub_01b61180(UINT Index, FArrayLike *Array)
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

struct FRange_01b61200
{
	void *Range;
	UINT Count;

	FRange_01b61200 *sub_01b61200(UINT Index, FArrayLike *Array);
};

// @baa 0x01b61200
FRange_01b61200 *FRange_01b61200::sub_01b61200(UINT Index, FArrayLike *Array)
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

struct FRange_01b61910
{
	void *Range;
	UINT Count;

	FRange_01b61910 *sub_01b61910(UINT Index, FArrayLike *Array);
};

// @baa 0x01b61910
FRange_01b61910 *FRange_01b61910::sub_01b61910(UINT Index, FArrayLike *Array)
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

struct FRange_01b61990
{
	void *Range;
	UINT Count;

	FRange_01b61990 *sub_01b61990(UINT Index, FArrayLike *Array);
};

// @baa 0x01b61990
FRange_01b61990 *FRange_01b61990::sub_01b61990(UINT Index, FArrayLike *Array)
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

struct FRange_01b61a10
{
	void *Range;
	UINT Count;

	FRange_01b61a10 *sub_01b61a10(UINT Index, FArrayLike *Array);
};

// @baa 0x01b61a10
FRange_01b61a10 *FRange_01b61a10::sub_01b61a10(UINT Index, FArrayLike *Array)
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
// @baa 0x01b658b0
void* sub_01b658b0(void* First, void* Last, void* NewBase)
{
    int Count = ((int)((char*)Last - (char*)First)) >> 2;
    int Bytes = Count * 4;
    char* NewEnd = (char*)NewBase + Bytes;
    if (Count != 0)
        memmove_s(NewBase, (unsigned int)Bytes, First, (unsigned int)Bytes);
    return NewEnd;
}

// @baa 0x01b658e0
void* sub_01b658e0(void* First, void* Last, void* NewBase)
{
    int Count = ((int)((char*)Last - (char*)First)) >> 2;
    int Bytes = Count * 4;
    char* NewEnd = (char*)NewBase + Bytes;
    if (Count != 0)
        memmove_s(NewBase, (unsigned int)Bytes, First, (unsigned int)Bytes);
    return NewEnd;
}

struct FRange_01b66a90
{
	void *Range;
	UINT Count;

	FRange_01b66a90 *sub_01b66a90(UINT Index, FArrayLike *Array);
};

// @baa 0x01b66a90
FRange_01b66a90 *FRange_01b66a90::sub_01b66a90(UINT Index, FArrayLike *Array)
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

struct FRange_01b66b10
{
	void *Range;
	UINT Count;

	FRange_01b66b10 *sub_01b66b10(UINT Index, FArrayLike *Array);
};

// @baa 0x01b66b10
FRange_01b66b10 *FRange_01b66b10::sub_01b66b10(UINT Index, FArrayLike *Array)
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

struct FRange_01b66b90
{
	void *Range;
	UINT Count;

	FRange_01b66b90 *sub_01b66b90(UINT Index, FArrayLike *Array);
};

// @baa 0x01b66b90
FRange_01b66b90 *FRange_01b66b90::sub_01b66b90(UINT Index, FArrayLike *Array)
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

struct FRange_01b66c10
{
	void *Range;
	UINT Count;

	FRange_01b66c10 *sub_01b66c10(UINT Index, FArrayLike *Array);
};

// @baa 0x01b66c10
FRange_01b66c10 *FRange_01b66c10::sub_01b66c10(UINT Index, FArrayLike *Array)
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

struct FRange_01b66c90
{
	void *Range;
	UINT Count;

	FRange_01b66c90 *sub_01b66c90(UINT Index, FArrayLike *Array);
};

// @baa 0x01b66c90
FRange_01b66c90 *FRange_01b66c90::sub_01b66c90(UINT Index, FArrayLike *Array)
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

// @baa 0x01b67080
void* sub_01b67080(void* First, void* Last, void* NewBase)
{
    int Count = ((int)((char*)Last - (char*)First)) >> 2;
    int Bytes = Count * 4;
    char* NewEnd = (char*)NewBase + Bytes;
    if (Count != 0)
        memmove_s(NewBase, (unsigned int)Bytes, First, (unsigned int)Bytes);
    return NewEnd;
}

// @baa 0x01b670b0
void* sub_01b670b0(void* First, void* Last, void* NewBase)
{
    int Count = ((int)((char*)Last - (char*)First)) >> 2;
    int Bytes = Count * 4;
    char* NewEnd = (char*)NewBase + Bytes;
    if (Count != 0)
        memmove_s(NewBase, (unsigned int)Bytes, First, (unsigned int)Bytes);
    return NewEnd;
}

struct FRange_01b671b0
{
	void *Range;
	UINT Count;

	FRange_01b671b0 *sub_01b671b0(UINT Index, FArrayLike *Array);
};

// @baa 0x01b671b0
FRange_01b671b0 *FRange_01b671b0::sub_01b671b0(UINT Index, FArrayLike *Array)
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

struct FRange_01b67230
{
	void *Range;
	UINT Count;

	FRange_01b67230 *sub_01b67230(UINT Index, FArrayLike *Array);
};

// @baa 0x01b67230
FRange_01b67230 *FRange_01b67230::sub_01b67230(UINT Index, FArrayLike *Array)
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

struct FRange_01b672b0
{
	void *Range;
	UINT Count;

	FRange_01b672b0 *sub_01b672b0(UINT Index, FArrayLike *Array);
};

// @baa 0x01b672b0
FRange_01b672b0 *FRange_01b672b0::sub_01b672b0(UINT Index, FArrayLike *Array)
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

struct FRange_01b67330
{
	void *Range;
	UINT Count;

	FRange_01b67330 *sub_01b67330(UINT Index, FArrayLike *Array);
};

// @baa 0x01b67330
FRange_01b67330 *FRange_01b67330::sub_01b67330(UINT Index, FArrayLike *Array)
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

struct FRange_01b673b0
{
	void *Range;
	UINT Count;

	FRange_01b673b0 *sub_01b673b0(UINT Index, FArrayLike *Array);
};

// @baa 0x01b673b0
FRange_01b673b0 *FRange_01b673b0::sub_01b673b0(UINT Index, FArrayLike *Array)
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

void sub_01b65460(unsigned int *param_1, unsigned int *param_2, unsigned int *param_3);
// @baa 0x01b675c0
void sub_01b675c0(unsigned int *param_1, unsigned int *param_2, unsigned int *param_3)
{
    sub_01b65460(param_1, param_2, param_3);
}

// @baa 0x01b67810
void* sub_01b67810(void* First, void* Last, void* NewBase)
{
    int Count = ((int)((char*)Last - (char*)First)) >> 2;
    int Bytes = Count * 4;
    char* NewEnd = (char*)NewBase + Bytes;
    if (Count != 0)
        memmove_s(NewBase, (unsigned int)Bytes, First, (unsigned int)Bytes);
    return NewEnd;
}

// @baa 0x01b67840
void* sub_01b67840(void* First, void* Last, void* NewBase)
{
    int Count = ((int)((char*)Last - (char*)First)) >> 2;
    int Bytes = Count * 4;
    char* NewEnd = (char*)NewBase + Bytes;
    if (Count != 0)
        memmove_s(NewBase, (unsigned int)Bytes, First, (unsigned int)Bytes);
    return NewEnd;
}

// @baa 0x01b67d60
void* sub_01b67d60(void* First, void* Last, void* NewBase)
{
    int Count = ((int)((char*)Last - (char*)First)) >> 2;
    int Bytes = Count * 4;
    char* NewEnd = (char*)NewBase + Bytes;
    if (Count != 0)
        memmove_s(NewBase, (unsigned int)Bytes, First, (unsigned int)Bytes);
    return NewEnd;
}

// @baa 0x01b67d90
void* sub_01b67d90(void* First, void* Last, void* NewBase)
{
    int Count = ((int)((char*)Last - (char*)First)) >> 2;
    int Bytes = Count * 4;
    char* NewEnd = (char*)NewBase + Bytes;
    if (Count != 0)
        memmove_s(NewBase, (unsigned int)Bytes, First, (unsigned int)Bytes);
    return NewEnd;
}

struct FRange_01b6e900
{
	void *Range;
	UINT Count;

	FRange_01b6e900 *sub_01b6e900(UINT Index, FArrayLike *Array);
};

// @baa 0x01b6e900
FRange_01b6e900 *FRange_01b6e900::sub_01b6e900(UINT Index, FArrayLike *Array)
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

struct FRange_01b6e980
{
	void *Range;
	UINT Count;

	FRange_01b6e980 *sub_01b6e980(UINT Index, FArrayLike *Array);
};

// @baa 0x01b6e980
FRange_01b6e980 *FRange_01b6e980::sub_01b6e980(UINT Index, FArrayLike *Array)
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

struct FRange_01b6ea00
{
	void *Range;
	UINT Count;

	FRange_01b6ea00 *sub_01b6ea00(UINT Index, FArrayLike *Array);
};

// @baa 0x01b6ea00
FRange_01b6ea00 *FRange_01b6ea00::sub_01b6ea00(UINT Index, FArrayLike *Array)
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

struct FRange_01b6ea80
{
	void *Range;
	UINT Count;

	FRange_01b6ea80 *sub_01b6ea80(UINT Index, FArrayLike *Array);
};

// @baa 0x01b6ea80
FRange_01b6ea80 *FRange_01b6ea80::sub_01b6ea80(UINT Index, FArrayLike *Array)
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

struct FRange_01b6eb00
{
	void *Range;
	UINT Count;

	FRange_01b6eb00 *sub_01b6eb00(UINT Index, FArrayLike *Array);
};

// @baa 0x01b6eb00
FRange_01b6eb00 *FRange_01b6eb00::sub_01b6eb00(UINT Index, FArrayLike *Array)
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

struct FRange_01b6f8a0
{
	void *Range;
	UINT Count;

	FRange_01b6f8a0 *sub_01b6f8a0(UINT Index, FArrayLike *Array);
};

// @baa 0x01b6f8a0
FRange_01b6f8a0 *FRange_01b6f8a0::sub_01b6f8a0(UINT Index, FArrayLike *Array)
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

struct FRange_01b6f920
{
	void *Range;
	UINT Count;

	FRange_01b6f920 *sub_01b6f920(UINT Index, FArrayLike *Array);
};

// @baa 0x01b6f920
FRange_01b6f920 *FRange_01b6f920::sub_01b6f920(UINT Index, FArrayLike *Array)
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

struct FRange_01b6f9a0
{
	void *Range;
	UINT Count;

	FRange_01b6f9a0 *sub_01b6f9a0(UINT Index, FArrayLike *Array);
};

// @baa 0x01b6f9a0
FRange_01b6f9a0 *FRange_01b6f9a0::sub_01b6f9a0(UINT Index, FArrayLike *Array)
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

struct FRange_01b6fa20
{
	void *Range;
	UINT Count;

	FRange_01b6fa20 *sub_01b6fa20(UINT Index, FArrayLike *Array);
};

// @baa 0x01b6fa20
FRange_01b6fa20 *FRange_01b6fa20::sub_01b6fa20(UINT Index, FArrayLike *Array)
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

struct FRange_01b6faa0
{
	void *Range;
	UINT Count;

	FRange_01b6faa0 *sub_01b6faa0(UINT Index, FArrayLike *Array);
};

// @baa 0x01b6faa0
FRange_01b6faa0 *FRange_01b6faa0::sub_01b6faa0(UINT Index, FArrayLike *Array)
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
