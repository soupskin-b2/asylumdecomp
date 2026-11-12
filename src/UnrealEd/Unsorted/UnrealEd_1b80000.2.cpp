// UnrealEd_1b80000.cpp (part 2 of 3): 13 functions
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

void sub_00402660(INT Value);
// @baa 0x01b846a0
void __stdcall sub_01b846a0(INT A, INT B)
{
    sub_00402660(A);
}

struct C
{
    char pad_0[0x4];
    INT Value_4;
    INT Value_8;
    INT Value_c;

    C* sub_01b847f0();
};

// @baa 0x01b847f0
C* C::sub_01b847f0()
{
    Value_4 = 0;
    Value_8 = 0;
    Value_c = 0;
    return this;
}

struct C_01b84860
{
    char pad_0[0x3c];
    INT Value_3c;
    INT Value_40;
    INT Value_44;

    C_01b84860* sub_01b84860();
};

// @baa 0x01b84860
C_01b84860* C_01b84860::sub_01b84860()
{
    Value_3c = 0;
    Value_40 = 0;
    Value_44 = 0;
    return this;
}

// @baa 0x01b8bbf0
void __stdcall sub_01b8bbf0(INT A, INT B)
{
    sub_00402660(A);
}

struct C_01b8c390
{
    char pad_0[0x4];
    INT Value_4;
    INT Value_8;
    INT Value_c;

    C_01b8c390* sub_01b8c390();
};

// @baa 0x01b8c390
C_01b8c390* C_01b8c390::sub_01b8c390()
{
    Value_4 = 0;
    Value_8 = 0;
    Value_c = 0;
    return this;
}

// @baa 0x01b8c100
// Copies two dwords from source to destination, when destination is non-null.
// 01b8c100
void __stdcall sub_01b8c100(int* Destination, int* Source)
{
	if (Destination != 0)
	{
		Destination[0] = Source[0];
		Destination[1] = Source[1];
	}
}
