// UnrealEd_1b50000.cpp (part 1 of 6): 16 functions
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

	FRange *sub_01b50030(UINT Index, FArrayLike *Array);
};

extern "C" __declspec(dllimport) void _invalid_parameter_noinfo(void);
// @baa 0x01b50030
FRange *FRange::sub_01b50030(UINT Index, FArrayLike *Array)
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

struct E_01b50480 {};

// @baa 0x01b50480
E_01b50480 sub_01b50480() { E_01b50480 e; return e; }

struct E_01b50490 {};

// @baa 0x01b50490
E_01b50490 sub_01b50490() { E_01b50490 e; return e; }

struct E_01b504b0 {};

// @baa 0x01b504b0
E_01b504b0 sub_01b504b0() { E_01b504b0 e; return e; }

struct E_01b504c0 {};

// @baa 0x01b504c0
E_01b504c0 sub_01b504c0() { E_01b504c0 e; return e; }

struct C {
    undefined4 sub_01b505e0();
};

// @baa 0x01b505e0
undefined4 C::sub_01b505e0(void)
{
    undefined4 param_1 = (undefined4)this;
  return param_1;
}

struct S {
    INT Unk00;
    INT Unk04;
    S *sub_01b50ba0();
};

// @baa 0x01b50ba0
S *S::sub_01b50ba0()
{
    Unk00 = 0;
    Unk04 = 0;
    return this;
}

struct S_01b50be0 {
    INT Unk00;
    INT Unk04;
    S_01b50be0 *sub_01b50be0();
};

// @baa 0x01b50be0
S_01b50be0 *S_01b50be0::sub_01b50be0()
{
    Unk00 = 0;
    Unk04 = 0;
    return this;
}

struct C_01b50bf0 {
    INT sub_01b50bf0(INT param);
};

// @baa 0x01b50bf0
INT C_01b50bf0::sub_01b50bf0(INT param) { return (INT)this; }

struct S_01b50c20 {
    int Unk00;
};

extern void __cdecl sub_01b503b0(struct S_01b50c20 const &Ref, int Value);
// @baa 0x01b50c20
void __stdcall sub_01b50c20(struct S_01b50c20 const &Ref)
{
    sub_01b503b0(Ref, 0);
}

struct S_01b50c50 {
    int Unk00;
};

extern void __cdecl sub_01b50410(struct S_01b50c50 const &Ref, int Value);
// @baa 0x01b50c50
void __stdcall sub_01b50c50(struct S_01b50c50 const &Ref)
{
    sub_01b50410(Ref, 0);
}

struct FRange_01b50d60
{
	void *Range;
	UINT Count;

	FRange_01b50d60 *sub_01b50d60(UINT Index, FArrayLike *Array);
};

// @baa 0x01b50d60
FRange_01b50d60 *FRange_01b50d60::sub_01b50d60(UINT Index, FArrayLike *Array)
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

struct FRange_01b514c0
{
	void *Range;
	UINT Count;

	FRange_01b514c0 *sub_01b514c0(UINT Index, FArrayLike *Array);
};

// @baa 0x01b514c0
FRange_01b514c0 *FRange_01b514c0::sub_01b514c0(UINT Index, FArrayLike *Array)
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

// @baa 0x01b516c0
void sub_01b516c0(void)
{
  return;
}

// @baa 0x01b533b0
float10 sub_01b533b0(double param_1)
{
  float10 fVar1;
  
  fVar1 = (float10)param_1;
  return (float10)4.188790446185777 * fVar1 * fVar1 * fVar1;
}

// @baa 0x01b533d0
float10 sub_01b533d0(double param_1, double param_2)
{
  return (float10)3.1415927410125732 * (float10)param_1 * (float10)param_1 * (float10)param_2;
}
