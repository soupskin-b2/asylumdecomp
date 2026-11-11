// SpeedTree.cpp (part 3 of 8): 94 functions
// Placed here by: neighbours 90, callers 4.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    void sub_01a5f720(float *, float);
};

// @baa 0x01a5f720
void C::sub_01a5f720(float * param_2, float param_3)
{
    float * param_1 = (float *)this;

  *param_2 = param_3 * *param_1;
  param_2[1] = param_1[1] * param_3;
  param_2[2] = param_3 * param_1[2];
  return;
}

struct C_01a5fb20 {
    void sub_01a5fb20(float);
};

// @baa 0x01a5fb20
void C_01a5fb20::sub_01a5fb20(float f)
{
    *(float *)(this + 0x14) = f;
}

extern unsigned short g_027bdefc;
// @baa 0x01a5fc60
unsigned int sub_01a5fc60(void)
{
    return g_027bdefc;
}

struct C_01a5fcb0 {
    char pad[0x3c];
    float f3c;
    void sub_01a5fcb0(float param_1);
};

// @baa 0x01a5fcb0
void C_01a5fcb0::sub_01a5fcb0(float param_1)
{
    this->f3c = param_1;
}

struct C_01a5fcd0 {
    void sub_01a5fcd0(float param1);
};

// @baa 0x01a5fcd0
void C_01a5fcd0::sub_01a5fcd0(float param1)
{
    *(float *)(this + 0x40) = param1;
}

struct C_01a5fda0 {
    void sub_01a5fda0(float f);
};

// @baa 0x01a5fda0
void C_01a5fda0::sub_01a5fda0(float f)
{
    *(float *)(this + 0x70) = f;
}

struct ObjB {
    int sub_01a83490();
};

struct ObjA {
    int f0;
    ObjB* p4;
    int sub_01a602d0();
};

// @baa 0x01a602d0
int ObjA::sub_01a602d0() { return p4->sub_01a83490(); }

struct S { int sub_01a814a0(); };

struct C_01a60440 { char _pad[0x18]; S* _ptr; int sub_01a60440(); };

// @baa 0x01a60440
int C_01a60440::sub_01a60440() { return _ptr->sub_01a814a0(); }

struct C_01a60450 {
    signed char sub_01a60450();
};

// @baa 0x01a60450
signed char C_01a60450::sub_01a60450() {
    signed char* p = *(signed char**)(this+0x18);
    return p[0x14];
}

struct ObjB_01a60560 {
    int sub_01a83560();
};

struct ObjA_01a60560 {
    int f0;
    ObjB_01a60560* p4;
    int sub_01a60560();
};

// @baa 0x01a60560
int ObjA_01a60560::sub_01a60560() { return p4->sub_01a83560(); }

extern float g_02604d50;
// @baa 0x01a610f0
float sub_01a610f0(void)
{
    return g_02604d50;
}

extern "C" __declspec(dllimport) int memmove_s(...);
// @baa 0x01a67fd0
void * sub_01a67fd0(void * param_1, int param_2, int param_3)
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

// @baa 0x01a68000
undefined4 sub_01a68000(undefined4 * param_1)
{
  return *param_1;
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

	FRange *sub_01a690f0(UINT Index, FArrayLike *Array);
};

extern "C" __declspec(dllimport) void _invalid_parameter_noinfo(void);
// @baa 0x01a690f0
FRange *FRange::sub_01a690f0(UINT Index, FArrayLike *Array)
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

struct FRange_01a69130
{
	void *Range;
	UINT Count;

	FRange_01a69130 *sub_01a69130(UINT Index, FArrayLike *Array);
};

// @baa 0x01a69130
FRange_01a69130 *FRange_01a69130::sub_01a69130(UINT Index, FArrayLike *Array)
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

struct FRange_01a69200
{
	void *Range;
	UINT Count;

	FRange_01a69200 *sub_01a69200(UINT Index, FArrayLike *Array);
};

// @baa 0x01a69200
FRange_01a69200 *FRange_01a69200::sub_01a69200(UINT Index, FArrayLike *Array)
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

struct FRange_01a69280
{
	void *Range;
	UINT Count;

	FRange_01a69280 *sub_01a69280(UINT Index, FArrayLike *Array);
};

// @baa 0x01a69280
FRange_01a69280 *FRange_01a69280::sub_01a69280(UINT Index, FArrayLike *Array)
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

// @baa 0x01a694e0
void * sub_01a694e0(void * param_1, int param_2, int param_3)
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

void sub_01a68010(void *a, void *b, int c);
// @baa 0x01a69510
void sub_01a69510(void *a, void *b, int c)
{
    sub_01a68010(a, b, c);
}

struct Inner {
    char pad0[4];
    FLOAT x, y, z, w;
    void sub_01a70510(FLOAT *a, FLOAT *b, FLOAT *c, FLOAT *d);
};

struct Outer {
    Inner *field0;
    void sub_01a70d70(FLOAT *a, FLOAT *b, FLOAT *c, FLOAT *d);
};

// @baa 0x01a70d70
void Outer::sub_01a70d70(FLOAT *a, FLOAT *b, FLOAT *c, FLOAT *d)
{
    field0->sub_01a70510(a, b, c, d);
}

struct Inner_01a74370 {
    char pad0[4];
    FLOAT x, y, z, w;
    void sub_01a73c00(FLOAT *a, FLOAT *b, FLOAT *c, FLOAT *d);
};

struct Outer_01a74370 {
    Inner_01a74370 *field0;
    void sub_01a74370(FLOAT *a, FLOAT *b, FLOAT *c, FLOAT *d);
};

// @baa 0x01a74370
void Outer_01a74370::sub_01a74370(FLOAT *a, FLOAT *b, FLOAT *c, FLOAT *d)
{
    field0->sub_01a73c00(a, b, c, d);
}

struct Inner_01a74380 {
    char pad0[4];
    FLOAT x, y, z, w;
    void sub_01a742f0(FLOAT *a, FLOAT *b, FLOAT *c, FLOAT *d);
};

struct Outer_01a74380 {
    Inner_01a74380 *field0;
    void sub_01a74380(FLOAT *a, FLOAT *b, FLOAT *c, FLOAT *d);
};

// @baa 0x01a74380
void Outer_01a74380::sub_01a74380(FLOAT *a, FLOAT *b, FLOAT *c, FLOAT *d)
{
    field0->sub_01a742f0(a, b, c, d);
}

struct Inner_01a74860 {
    char pad0[4];
    FLOAT x, y, z, w;
    void sub_01a74640(FLOAT *a, FLOAT *b, FLOAT *c, FLOAT *d);
};

struct Outer_01a74860 {
    Inner_01a74860 *field0;
    void sub_01a74860(FLOAT *a, FLOAT *b, FLOAT *c, FLOAT *d);
};

// @baa 0x01a74860
void Outer_01a74860::sub_01a74860(FLOAT *a, FLOAT *b, FLOAT *c, FLOAT *d)
{
    field0->sub_01a74640(a, b, c, d);
}

struct E_01a748a0 {};

// @baa 0x01a748a0
E_01a748a0 sub_01a748a0() { E_01a748a0 e; return e; }

struct E_01a748b0 {};

// @baa 0x01a748b0
E_01a748b0 sub_01a748b0() { E_01a748b0 e; return e; }

struct E_01a748d0 {};

// @baa 0x01a748d0
E_01a748d0 sub_01a748d0() { E_01a748d0 e; return e; }

struct E_01a748e0 {};

// @baa 0x01a748e0
E_01a748e0 sub_01a748e0() { E_01a748e0 e; return e; }

struct C_01a74ce0 { void sub_01a748f0(int); C_01a74ce0 *sub_01a74ce0(int); };

// @baa 0x01a74ce0
C_01a74ce0 *C_01a74ce0::sub_01a74ce0(int a) { sub_01a748f0(a); return this; }

// @baa 0x01a76e20
BYTE __stdcall sub_01a76e20(int arg1)
{
	return 1;
}

// @baa 0x01a76e60
BYTE __stdcall sub_01a76e60(DWORD arg1)
{
    return 1;
}

// @baa 0x01a76f60
BYTE __stdcall sub_01a76f60(INT arg1)
{
	return 1;
}

// @baa 0x01a76fa0
BYTE __stdcall sub_01a76fa0(uchar dummy)
{
    return 1;
}

struct E_01a77920 {};

// @baa 0x01a77920
E_01a77920 sub_01a77920() { E_01a77920 e; return e; }

struct E_01a77940 {};

// @baa 0x01a77940
E_01a77940 sub_01a77940() { E_01a77940 e; return e; }

struct E_01a77960 {};

// @baa 0x01a77960
E_01a77960 sub_01a77960() { E_01a77960 e; return e; }

struct E_01a779c0 {};

// @baa 0x01a779c0
E_01a779c0 sub_01a779c0() { E_01a779c0 e; return e; }

struct E_01a779d0 {};

// @baa 0x01a779d0
E_01a779d0 sub_01a779d0() { E_01a779d0 e; return e; }

struct E_01a77a10 {};

// @baa 0x01a77a10
E_01a77a10 sub_01a77a10() { E_01a77a10 e; return e; }

struct E_01a77a60 {};

// @baa 0x01a77a60
E_01a77a60 sub_01a77a60() { E_01a77a60 e; return e; }

struct E_01a77ab0 {};

// @baa 0x01a77ab0
E_01a77ab0 sub_01a77ab0() { E_01a77ab0 e; return e; }

struct E_01a77af0 {};

// @baa 0x01a77af0
E_01a77af0 sub_01a77af0() { E_01a77af0 e; return e; }

struct E_01a77ba0 {};

// @baa 0x01a77ba0
E_01a77ba0 sub_01a77ba0() { E_01a77ba0 e; return e; }

struct E_01a77be0 {};

// @baa 0x01a77be0
E_01a77be0 sub_01a77be0() { E_01a77be0 e; return e; }

struct E_01a77bf0 {};

// @baa 0x01a77bf0
E_01a77bf0 sub_01a77bf0() { E_01a77bf0 e; return e; }

struct E_01a77c70 {};

// @baa 0x01a77c70
E_01a77c70 sub_01a77c70() { E_01a77c70 e; return e; }

// @baa 0x01a77ce0
void * sub_01a77ce0(void * param_1, int param_2, int param_3)
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

// @baa 0x01a77d10
void sub_01a77d10(undefined4 * param_1, undefined4 * param_2)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
  }
  return;
}

struct C_01a77d80 {
    int sub_01a77d80(byte);
};

int sub_00402660(...);
// @baa 0x01a77d80
int C_01a77d80::sub_01a77d80(byte param_2)
{
    int param_1 = (int)this;
  *(undefined4 *)(param_1 + 8) = 0;
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_01a77da0 {
    undefined4 sub_01a77da0(byte);
};

// @baa 0x01a77da0
undefined4 C_01a77da0::sub_01a77da0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct FRange_01a789a0
{
	void *Range;
	UINT Count;

	FRange_01a789a0 *sub_01a789a0(UINT Index, FArrayLike *Array);
};

// @baa 0x01a789a0
FRange_01a789a0 *FRange_01a789a0::sub_01a789a0(UINT Index, FArrayLike *Array)
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

struct FRange_01a78b50
{
	void *Range;
	UINT Count;

	FRange_01a78b50 *sub_01a78b50(UINT Index, FArrayLike *Array);
};

// @baa 0x01a78b50
FRange_01a78b50 *FRange_01a78b50::sub_01a78b50(UINT Index, FArrayLike *Array)
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

struct FRange_01a78bc0
{
	void *Range;
	UINT Count;

	FRange_01a78bc0 *sub_01a78bc0(UINT Index, FArrayLike *Array);
};

// @baa 0x01a78bc0
FRange_01a78bc0 *FRange_01a78bc0::sub_01a78bc0(UINT Index, FArrayLike *Array)
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

struct FRange_01a78c40
{
	void *Range;
	UINT Count;

	FRange_01a78c40 *sub_01a78c40(UINT Index, FArrayLike *Array);
};

// @baa 0x01a78c40
FRange_01a78c40 *FRange_01a78c40::sub_01a78c40(UINT Index, FArrayLike *Array)
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

struct FRange_01a78d20
{
	void *Range;
	UINT Count;

	FRange_01a78d20 *sub_01a78d20(UINT Index, FArrayLike *Array);
};

// @baa 0x01a78d20
FRange_01a78d20 *FRange_01a78d20::sub_01a78d20(UINT Index, FArrayLike *Array)
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

// @baa 0x01a78f40
undefined4 sub_01a78f40(undefined4 * param_1)
{
  return *param_1;
}

// @baa 0x01a78f50
void * sub_01a78f50(void * param_1, int param_2, int param_3)
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

struct C_01a79150 { void sub_01a76240(void); };

// @baa 0x01a79150
void sub_01a79150(C_01a79150 *param_1)
{
  param_1->sub_01a76240();
}

struct FRange_01a79490
{
	void *Range;
	UINT Count;

	FRange_01a79490 *sub_01a79490(UINT Index, FArrayLike *Array);
};

// @baa 0x01a79490
FRange_01a79490 *FRange_01a79490::sub_01a79490(UINT Index, FArrayLike *Array)
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

struct FRange_01a796a0
{
	void *Range;
	UINT Count;

	FRange_01a796a0 *sub_01a796a0(UINT Index, FArrayLike *Array);
};

// @baa 0x01a796a0
FRange_01a796a0 *FRange_01a796a0::sub_01a796a0(UINT Index, FArrayLike *Array)
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

struct FRange_01a79720
{
	void *Range;
	UINT Count;

	FRange_01a79720 *sub_01a79720(UINT Index, FArrayLike *Array);
};

// @baa 0x01a79720
FRange_01a79720 *FRange_01a79720::sub_01a79720(UINT Index, FArrayLike *Array)
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

struct FRange_01a79760
{
	void *Range;
	UINT Count;

	FRange_01a79760 *sub_01a79760(UINT Index, FArrayLike *Array);
};

// @baa 0x01a79760
FRange_01a79760 *FRange_01a79760::sub_01a79760(UINT Index, FArrayLike *Array)
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

struct FRange_01a79830
{
	void *Range;
	UINT Count;

	FRange_01a79830 *sub_01a79830(UINT Index, FArrayLike *Array);
};

// @baa 0x01a79830
FRange_01a79830 *FRange_01a79830::sub_01a79830(UINT Index, FArrayLike *Array)
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

struct E_01a90a70 {};

// @baa 0x01a90a70
E_01a90a70 sub_01a90a70() { E_01a90a70 e; return e; }

struct E_01a90ab0 {};

// @baa 0x01a90ab0
E_01a90ab0 sub_01a90ab0() { E_01a90ab0 e; return e; }

struct FRange_01a916d0
{
	void *Range;
	UINT Count;

	FRange_01a916d0 *sub_01a916d0(UINT Index, FArrayLike *Array);
};

// @baa 0x01a916d0
FRange_01a916d0 *FRange_01a916d0::sub_01a916d0(UINT Index, FArrayLike *Array)
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

struct C_01a918a0 { void sub_01a60080(void); };

// @baa 0x01a918a0
void sub_01a918a0(C_01a918a0 *param_1)
{
  param_1->sub_01a60080();
}

struct FRange_01a919d0
{
	void *Range;
	UINT Count;

	FRange_01a919d0 *sub_01a919d0(UINT Index, FArrayLike *Array);
};

// @baa 0x01a919d0
FRange_01a919d0 *FRange_01a919d0::sub_01a919d0(UINT Index, FArrayLike *Array)
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

struct C_01a94270 {
    char pad[0x30];
    BYTE b;
    C_01a94270* sub_01a94270();
};

// @baa 0x01a94270
C_01a94270* C_01a94270::sub_01a94270()
{
    b = 0;
    return this;
}

extern undefined4 g_027be014;
extern undefined4 g_027be044;
extern undefined4 g_027be0a4;
// @baa 0x01a946d0
void sub_01a946d0(int param_1)
{
  *(undefined4 **)(param_1 + 0x1c) = &g_027be014;
  *(undefined4 **)(param_1 + 0x20) = &g_027be0a4;
  *(undefined4 **)(param_1 + 0x24) = &g_027be044;
  return;
}

struct C_01a94cc0 {
    undefined4 sub_01a94cc0();
};

// @baa 0x01a94cc0
undefined4 C_01a94cc0::sub_01a94cc0(void)
{
    int param_1 = (int)this;
  return *(undefined4 *)(param_1 + 0x14);
}

// @baa 0x01a957e0
BYTE __stdcall sub_01a957e0(DWORD) {
    return 1;
}

struct E_01a95ea0 {};

// @baa 0x01a95ea0
E_01a95ea0 sub_01a95ea0() { E_01a95ea0 e; return e; }

struct E_01a95eb0 {};

// @baa 0x01a95eb0
E_01a95eb0 sub_01a95eb0() { E_01a95eb0 e; return e; }

struct E_01a95ed0 {};

// @baa 0x01a95ed0
E_01a95ed0 sub_01a95ed0() { E_01a95ed0 e; return e; }

struct E_01a95f10 {};

// @baa 0x01a95f10
E_01a95f10 sub_01a95f10() { E_01a95f10 e; return e; }

struct E_01a95f20 {};

// @baa 0x01a95f20
E_01a95f20 sub_01a95f20() { E_01a95f20 e; return e; }

// @baa 0x01a95f50
void * sub_01a95f50(void * param_1, int param_2, int param_3)
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

// @baa 0x01a95f80
undefined4 sub_01a95f80(undefined4 param_1)
{
  return param_1;
}

struct FRange_01a96e00
{
	void *Range;
	UINT Count;

	FRange_01a96e00 *sub_01a96e00(UINT Index, FArrayLike *Array);
};

// @baa 0x01a96e00
FRange_01a96e00 *FRange_01a96e00::sub_01a96e00(UINT Index, FArrayLike *Array)
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

struct FRange_01a96e40
{
	void *Range;
	UINT Count;

	FRange_01a96e40 *sub_01a96e40(UINT Index, FArrayLike *Array);
};

// @baa 0x01a96e40
FRange_01a96e40 *FRange_01a96e40::sub_01a96e40(UINT Index, FArrayLike *Array)
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

struct FRange_01a96eb0
{
	void *Range;
	UINT Count;

	FRange_01a96eb0 *sub_01a96eb0(UINT Index, FArrayLike *Array);
};

// @baa 0x01a96eb0
FRange_01a96eb0 *FRange_01a96eb0::sub_01a96eb0(UINT Index, FArrayLike *Array)
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

// @baa 0x01a96f60
void * sub_01a96f60(void * param_1, int param_2, int param_3)
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

// @baa 0x01a96f90
undefined4 sub_01a96f90(int param_1)
{
  return *(undefined4 *)(param_1 + 4);
}

struct FRange_01a973e0
{
	void *Range;
	UINT Count;

	FRange_01a973e0 *sub_01a973e0(UINT Index, FArrayLike *Array);
};

// @baa 0x01a973e0
FRange_01a973e0 *FRange_01a973e0::sub_01a973e0(UINT Index, FArrayLike *Array)
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

// @baa 0x01a974c0
void * sub_01a974c0(void * param_1, int param_2, int param_3)
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

// @baa 0x01a974f0
undefined4 sub_01a974f0(int param_1)
{
  return *(undefined4 *)(param_1 + 4);
}

struct C_01a978a0 { void sub_01a71640(void); };

// @baa 0x01a978a0
void sub_01a978a0(C_01a978a0 *param_1)
{
  param_1->sub_01a71640();
}

struct C_01a9f910 { void sub_01a9db00(void); };

// @baa 0x01a9f910
void sub_01a9f910(C_01a9f910 *param_1)
{
  param_1->sub_01a9db00();
}

struct C_01a9f920 { void sub_01a71530(void); };

// @baa 0x01a9f920
void sub_01a9f920(C_01a9f920 *param_1)
{
  param_1->sub_01a71530();
}

struct C_01aa34d0 { void sub_01aa1870(void); };

// @baa 0x01aa34d0
void sub_01aa34d0(C_01aa34d0 *param_1)
{
  param_1->sub_01aa1870();
}

// @baa 0x01aaa230
undefined4 sub_01aaa230(char param_1)
{
  if ((((param_1 != ' ') && (param_1 != '\t')) && (param_1 != '\n')) && (param_1 != '\r')) {
    return 0;
  }
  return 1;
}

struct E_01aaaa60 {};

// @baa 0x01aaaa60
E_01aaaa60 sub_01aaaa60() { E_01aaaa60 e; return e; }

struct C_01aacf60 {
    undefined4 sub_01aacf60();
    int sub_01aace70(int);
};

extern undefined1 g_027be13c;
// @baa 0x01aacf60
undefined4 C_01aacf60::sub_01aacf60(void)
{
    undefined4 param_1 = (undefined4)this;
  if (g_027be13c == '\0') {
    ((C_01aacf60 *)(this))->sub_01aace70(0xffffffff);
  }
  return param_1;
}

struct Random {
    float sub_01ab21a0(float f);
};

// @baa 0x01ab21a0
float Random::sub_01ab21a0(float f) { return 0.0f; }
