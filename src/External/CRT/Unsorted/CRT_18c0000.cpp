// CRT_18c0000.cpp (part 1 of 3): 49 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    undefined4 * sub_018c8210(undefined4);
    int sub_0182f320(int);
};

// @baa 0x018c8210
undefined4 * C::sub_018c8210(undefined4 param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  ((C *)(this))->sub_0182f320(param_2);
  return param_1;
}

struct C_018c87d0 {
    undefined4 * sub_018c87d0(undefined4);
    int sub_018c8710(int);
};

extern undefined4 g_0240528c;
// @baa 0x018c87d0
undefined4 * C_018c87d0::sub_018c87d0(undefined4 param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_018c87d0 *)(this))->sub_018c8710(param_2);
  *param_1 = (undefined4)((&g_0240528c));
  return param_1;
}

struct E_018c9080 {};

// @baa 0x018c9080
E_018c9080 sub_018c9080() { E_018c9080 e; return e; }

struct E_018c90b0 {};

// @baa 0x018c90b0
E_018c90b0 sub_018c90b0() { E_018c90b0 e; return e; }

// @baa 0x018c9100
void sub_018c9100(undefined2 * param_1, undefined2 * param_2, undefined2 * param_3)
{
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    *param_1 = *param_3;
  }
  return;
}

struct E_018c9120 {};

// @baa 0x018c9120
E_018c9120 sub_018c9120() { E_018c9120 e; return e; }

struct E_018c9130 {};

// @baa 0x018c9130
E_018c9130 sub_018c9130() { E_018c9130 e; return e; }

struct E_018c9150 {};

// @baa 0x018c9150
E_018c9150 sub_018c9150() { E_018c9150 e; return e; }

struct S {
    int Unk00;
};

extern void __cdecl sub_018c8ee0(struct S const &Ref, int Value);
// @baa 0x018c92a0
void __stdcall sub_018c92a0(struct S const &Ref)
{
    sub_018c8ee0(Ref, 0);
}

extern void __cdecl sub_018c8f40(struct S const &Ref, int Value);
// @baa 0x018c92d0
void __stdcall sub_018c92d0(struct S const &Ref)
{
    sub_018c8f40(Ref, 0);
}

extern void __cdecl sub_018c8fa0(struct S const &Ref, int Value);
// @baa 0x018c92f0
void __stdcall sub_018c92f0(struct S const &Ref)
{
    sub_018c8fa0(Ref, 0);
}

extern void __cdecl sub_018c9000(struct S const &Ref, int Value);
// @baa 0x018c9330
void __stdcall sub_018c9330(struct S const &Ref)
{
    sub_018c9000(Ref, 0);
}

struct C_018c9350 {
    undefined4 * sub_018c9350(undefined4);
    int sub_018c8d90(int);
};

// @baa 0x018c9350
undefined4 * C_018c9350::sub_018c9350(undefined4 param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_018c9350 *)(this))->sub_018c8d90(param_2);
  *param_1 = (undefined4)((&g_0240528c));
  return param_1;
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

	FRange *sub_018c93e0(UINT Index, FArrayLike *Array);
};

extern "C" __declspec(dllimport) void _invalid_parameter_noinfo(void);
// @baa 0x018c93e0
FRange *FRange::sub_018c93e0(UINT Index, FArrayLike *Array)
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

struct FRange_018c96c0
{
	void *Range;
	UINT Count;

	FRange_018c96c0 *sub_018c96c0(UINT Index, FArrayLike *Array);
};

// @baa 0x018c96c0
FRange_018c96c0 *FRange_018c96c0::sub_018c96c0(UINT Index, FArrayLike *Array)
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

struct C_018ca880 {
    undefined4 * sub_018ca880(undefined4);
    int sub_018c8710(int);
};

extern undefined4 g_02405298;
// @baa 0x018ca880
undefined4 * C_018ca880::sub_018ca880(undefined4 param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_018ca880 *)(this))->sub_018c8710(param_2);
  *param_1 = (undefined4)((&g_02405298));
  return param_1;
}

struct C_018caa50 {
    bool sub_018caa50();
};

// @baa 0x018caa50
bool C_018caa50::sub_018caa50(void)
{
    return *(INT *)((char *)this + 0x20) >= 0;
}

struct E_018cb7a0 {};

// @baa 0x018cb7a0
E_018cb7a0 sub_018cb7a0() { E_018cb7a0 e; return e; }

struct E_018cb7c0 {};

// @baa 0x018cb7c0
E_018cb7c0 sub_018cb7c0() { E_018cb7c0 e; return e; }

struct E_018cb840 {};

// @baa 0x018cb840
E_018cb840 sub_018cb840() { E_018cb840 e; return e; }

struct E_018cb870 {};

// @baa 0x018cb870
E_018cb870 sub_018cb870() { E_018cb870 e; return e; }

struct E_018cb8b0 {};

// @baa 0x018cb8b0
E_018cb8b0 sub_018cb8b0() { E_018cb8b0 e; return e; }

extern "C" __declspec(dllimport) int memmove_s(...);
// @baa 0x018cb8e0
void * sub_018cb8e0(void * param_1, int param_2, int param_3)
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

// @baa 0x018cb910
undefined4 sub_018cb910(undefined4 * param_1)
{
  return *param_1;
}

// @baa 0x018cb920
void * sub_018cb920(void * param_1, int param_2, int param_3)
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

// @baa 0x018cb950
void * sub_018cb950(void * param_1, int param_2, int param_3)
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

// @baa 0x018cb980
void * sub_018cb980(void * param_1, int param_2, int param_3)
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

// @baa 0x018cb9b0
undefined4 sub_018cb9b0(undefined4 param_1)
{
  return param_1;
}

extern void __cdecl sub_018cb5a0(struct S const &Ref, int Value);
// @baa 0x018cc990
void __stdcall sub_018cc990(struct S const &Ref)
{
    sub_018cb5a0(Ref, 0);
}

extern void __cdecl sub_018cb640(struct S const &Ref, int Value);
// @baa 0x018ccc20
void __stdcall sub_018ccc20(struct S const &Ref)
{
    sub_018cb640(Ref, 0);
}

struct FRange_018ccd10
{
	void *Range;
	UINT Count;

	FRange_018ccd10 *sub_018ccd10(UINT Index, FArrayLike *Array);
};

// @baa 0x018ccd10
FRange_018ccd10 *FRange_018ccd10::sub_018ccd10(UINT Index, FArrayLike *Array)
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

struct FRange_018ccd90
{
	void *Range;
	UINT Count;

	FRange_018ccd90 *sub_018ccd90(UINT Index, FArrayLike *Array);
};

// @baa 0x018ccd90
FRange_018ccd90 *FRange_018ccd90::sub_018ccd90(UINT Index, FArrayLike *Array)
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

struct FRange_018cce10
{
	void *Range;
	UINT Count;

	FRange_018cce10 *sub_018cce10(UINT Index, FArrayLike *Array);
};

// @baa 0x018cce10
FRange_018cce10 *FRange_018cce10::sub_018cce10(UINT Index, FArrayLike *Array)
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

struct FRange_018ccf00
{
	void *Range;
	UINT Count;

	FRange_018ccf00 *sub_018ccf00(UINT Index, FArrayLike *Array);
};

// @baa 0x018ccf00
FRange_018ccf00 *FRange_018ccf00::sub_018ccf00(UINT Index, FArrayLike *Array)
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

// @baa 0x018ccf80
void * sub_018ccf80(void * param_1, int param_2, int param_3)
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

// @baa 0x018ccfb0
undefined4 sub_018ccfb0(undefined4 * param_1)
{
  return *param_1;
}

// @baa 0x018ccfc0
void * sub_018ccfc0(void * param_1, int param_2, int param_3)
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

// @baa 0x018ccff0
void * sub_018ccff0(void * param_1, int param_2, int param_3)
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

// @baa 0x018cd020
void * sub_018cd020(void * param_1, int param_2, int param_3)
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

// @baa 0x018cd050
undefined4 sub_018cd050(int param_1)
{
  return *(undefined4 *)(param_1 + 4);
}

struct FRange_018cd320
{
	void *Range;
	UINT Count;

	FRange_018cd320 *sub_018cd320(UINT Index, FArrayLike *Array);
};

// @baa 0x018cd320
FRange_018cd320 *FRange_018cd320::sub_018cd320(UINT Index, FArrayLike *Array)
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

struct FRange_018cd3a0
{
	void *Range;
	UINT Count;

	FRange_018cd3a0 *sub_018cd3a0(UINT Index, FArrayLike *Array);
};

// @baa 0x018cd3a0
FRange_018cd3a0 *FRange_018cd3a0::sub_018cd3a0(UINT Index, FArrayLike *Array)
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

struct FRange_018cd420
{
	void *Range;
	UINT Count;

	FRange_018cd420 *sub_018cd420(UINT Index, FArrayLike *Array);
};

// @baa 0x018cd420
FRange_018cd420 *FRange_018cd420::sub_018cd420(UINT Index, FArrayLike *Array)
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

struct FRange_018cd530
{
	void *Range;
	UINT Count;

	FRange_018cd530 *sub_018cd530(UINT Index, FArrayLike *Array);
};

// @baa 0x018cd530
FRange_018cd530 *FRange_018cd530::sub_018cd530(UINT Index, FArrayLike *Array)
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

// @baa 0x018cd690
void * sub_018cd690(void * param_1, int param_2, int param_3)
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

// @baa 0x018cd7c0
void * sub_018cd7c0(void * param_1, int param_2, int param_3)
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

// @baa 0x018cd7f0
undefined4 sub_018cd7f0(int param_1)
{
  return *(undefined4 *)(param_1 + 4);
}

struct C_018ce200 {
    undefined4 * sub_018ce200(undefined4);
    int sub_018c8d90(int);
};

// @baa 0x018ce200
undefined4 * C_018ce200::sub_018ce200(undefined4 param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_018ce200 *)(this))->sub_018c8d90(param_2);
  *param_1 = (undefined4)((&g_02405298));
  return param_1;
}

struct C_018ce220 {
    void sub_018ce220();
    int sub_018cd570(int);
};

// @baa 0x018ce220
void C_018ce220::sub_018ce220(void)
{
    int param_1 = (int)this;
  ((C_018ce220 *)(this))->sub_018cd570(*(undefined4 *)(*(int *)(param_1 + 4) + 4));
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  return;
}
