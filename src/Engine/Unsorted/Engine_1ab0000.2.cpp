// Engine_1ab0000.cpp (part 2 of 5): 6 functions
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

	FRange *sub_01ab00d0(UINT Index, FArrayLike *Array);
};

extern "C" __declspec(dllimport) void _invalid_parameter_noinfo(void);
// @baa 0x01ab00d0
FRange *FRange::sub_01ab00d0(UINT Index, FArrayLike *Array)
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

struct FRange_01ab01c0
{
	void *Range;
	UINT Count;

	FRange_01ab01c0 *sub_01ab01c0(UINT Index, FArrayLike *Array);
};

// @baa 0x01ab01c0
FRange_01ab01c0 *FRange_01ab01c0::sub_01ab01c0(UINT Index, FArrayLike *Array)
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

struct C {
    short sub_01ab5e50();
};

extern C* g_027ca4e0;
extern "C" C* __cdecl sub_01ab8200(void);
// @baa 0x01ab82b0
short __cdecl sub_01ab82b0(void)
{
    if (g_027ca4e0 == 0)
        g_027ca4e0 = sub_01ab8200();
    return g_027ca4e0->sub_01ab5e50();
}

extern C* g_027ca4e8;
extern "C" C* __cdecl sub_01abc6a0(void);
// @baa 0x01abcf60
short __cdecl sub_01abcf60(void)
{
    if (g_027ca4e8 == 0)
        g_027ca4e8 = sub_01abc6a0();
    return g_027ca4e8->sub_01ab5e50();
}

extern C* g_027ca4f0;
extern "C" C* __cdecl sub_01abee40(void);
// @baa 0x01abef80
short __cdecl sub_01abef80(void)
{
    if (g_027ca4f0 == 0)
        g_027ca4f0 = sub_01abee40();
    return g_027ca4f0->sub_01ab5e50();
}

extern C* g_027ca4ec;
extern "C" C* __cdecl sub_01abf860(void);
// @baa 0x01abfbf0
short __cdecl sub_01abfbf0(void)
{
    if (g_027ca4ec == 0)
        g_027ca4ec = sub_01abf860();
    return g_027ca4ec->sub_01ab5e50();
}
