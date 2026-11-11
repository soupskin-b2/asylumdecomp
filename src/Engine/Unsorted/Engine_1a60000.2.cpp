// Engine_1a60000.cpp (part 2 of 5): 25 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    int sub_01a61ae0();
};

// @baa 0x01a61ae0
int C::sub_01a61ae0(void)
{
    int param_1 = (int)this;
  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return *(int *)(param_1 + 8) - *(int *)(param_1 + 4);
}

struct C_01a61d80 {
    int sub_01a61d80();
};

// @baa 0x01a61d80
int C_01a61d80::sub_01a61d80(void)
{
    int param_1 = (int)this;
  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return *(int *)(param_1 + 0xc) - *(int *)(param_1 + 4);
}

struct C_01a61d90 {
    undefined4 sub_01a61d90();
};

// @baa 0x01a61d90
undefined4 C_01a61d90::sub_01a61d90(void)
{
    undefined4 param_1 = (undefined4)this;
  return param_1;
}

struct E_01a62e30 {};

// @baa 0x01a62e30
E_01a62e30 sub_01a62e30() { E_01a62e30 e; return e; }

struct E_01a62e80 {};

// @baa 0x01a62e80
E_01a62e80 sub_01a62e80() { E_01a62e80 e; return e; }

struct E_01a62ea0 {};

// @baa 0x01a62ea0
E_01a62ea0 sub_01a62ea0() { E_01a62ea0 e; return e; }

struct E_01a62eb0 {};

// @baa 0x01a62eb0
E_01a62eb0 sub_01a62eb0() { E_01a62eb0 e; return e; }

struct E_01a62f30 {};

// @baa 0x01a62f30
E_01a62f30 sub_01a62f30() { E_01a62f30 e; return e; }

struct E_01a62f60 {};

// @baa 0x01a62f60
E_01a62f60 sub_01a62f60() { E_01a62f60 e; return e; }

struct E_01a62f80 {};

// @baa 0x01a62f80
E_01a62f80 sub_01a62f80() { E_01a62f80 e; return e; }

struct E_01a62fd0 {};

// @baa 0x01a62fd0
E_01a62fd0 sub_01a62fd0() { E_01a62fd0 e; return e; }

struct C_01a63010 {
    void sub_01a63010(undefined4);
};

// @baa 0x01a63010
void C_01a63010::sub_01a63010(undefined4 param_2)
{
    int param_1 = (int)this;
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

extern "C" __declspec(dllimport) int memmove_s(...);
// @baa 0x01a63070
void * sub_01a63070(void * param_1, int param_2, int param_3)
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

// @baa 0x01a630a0
undefined4 sub_01a630a0(undefined4 * param_1)
{
  return *param_1;
}

struct C_01a63b40 {
    void sub_01a63b40();
    int sub_01a8e870();
};

int sub_01a60730(...);
int sub_01aaa1a0(void);
// @baa 0x01a63b40
void C_01a63b40::sub_01a63b40(void)
{
    int param_1 = (int)this;
  if (*(char *)(*(int *)(param_1 + 4) + 0x21) != '\0') {
    ((C_01a63b40 *)((*(char **)((char *)this + 4))))->sub_01a8e870();
    sub_01aaa1a0();
    return;
  }
  sub_01a60730("DeleteTransientData() called with no intact transient data");
  sub_01aaa1a0();
  return;
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

	FRange *sub_01a67a20(UINT Index, FArrayLike *Array);
};

extern "C" __declspec(dllimport) void _invalid_parameter_noinfo(void);
// @baa 0x01a67a20
FRange *FRange::sub_01a67a20(UINT Index, FArrayLike *Array)
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

struct FRange_01a67a90
{
	void *Range;
	UINT Count;

	FRange_01a67a90 *sub_01a67a90(UINT Index, FArrayLike *Array);
};

// @baa 0x01a67a90
FRange_01a67a90 *FRange_01a67a90::sub_01a67a90(UINT Index, FArrayLike *Array)
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

struct FRange_01a67c10
{
	void *Range;
	UINT Count;

	FRange_01a67c10 *sub_01a67c10(UINT Index, FArrayLike *Array);
};

// @baa 0x01a67c10
FRange_01a67c10 *FRange_01a67c10::sub_01a67c10(UINT Index, FArrayLike *Array)
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

struct FRange_01a67cc0
{
	void *Range;
	UINT Count;

	FRange_01a67cc0 *sub_01a67cc0(UINT Index, FArrayLike *Array);
};

// @baa 0x01a67cc0
FRange_01a67cc0 *FRange_01a67cc0::sub_01a67cc0(UINT Index, FArrayLike *Array)
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

struct C_01a6e920 {
    char pad[0x10];
    float f_0x10;
    void sub_01a6e920();
};

// @baa 0x01a6e920
void C_01a6e920::sub_01a6e920(void)
{
    this->f_0x10 = 0.0f;
}

struct E_01a6fbf0 {};

// @baa 0x01a6fbf0
E_01a6fbf0 sub_01a6fbf0() { E_01a6fbf0 e; return e; }

struct E_01a6fc50 {};

// @baa 0x01a6fc50
E_01a6fc50 sub_01a6fc50() { E_01a6fc50 e; return e; }

struct E_01a6fce0 {};

// @baa 0x01a6fce0
E_01a6fce0 sub_01a6fce0() { E_01a6fce0 e; return e; }

struct E_01a6fd20 {};

// @baa 0x01a6fd20
E_01a6fd20 sub_01a6fd20() { E_01a6fd20 e; return e; }

// @baa 0x01a6fdd0
void * sub_01a6fdd0(void * param_1, int param_2, int param_3)
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
