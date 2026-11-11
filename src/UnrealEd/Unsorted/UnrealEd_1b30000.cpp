// UnrealEd_1b30000.cpp (part 1 of 4): 54 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

// @baa 0x01b303e0
void sub_01b303e0(uint param_1, float * param_2)
{
  *param_2 = (float)((byte)(param_1 >> 0xb) & 0x1f) / 31.0;
  param_2[1] = (float)((byte)(param_1 >> 5) & 0x3f) / 63.0;
  param_2[2] = (float)((byte)param_1 & 0x1f) / 31.0;
  param_2[3] = 1.0;
  return;
}

struct S {
    INT Unk00;
    INT Unk04;
    S *sub_01b341c0();
};

// @baa 0x01b341c0
S *S::sub_01b341c0()
{
    Unk00 = 0;
    Unk04 = 0;
    return this;
}

struct C {
    undefined4 * sub_01b342c0();
    int sub_01b3d140();
};

// @baa 0x01b342c0
undefined4 * C::sub_01b342c0(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C *)(((char *)this + 4)))->sub_01b3d140();
  *param_1 = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  return param_1;
}

struct C_01b34570 {
    undefined4 * sub_01b34570();
    int sub_01b31fb0();
};

// @baa 0x01b34570
undefined4 * C_01b34570::sub_01b34570(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_01b34570 *)(((char *)this + 4)))->sub_01b31fb0();
  *param_1 = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  return param_1;
}

struct E_01b35380 {};

// @baa 0x01b35380
E_01b35380 sub_01b35380() { E_01b35380 e; return e; }

struct E_01b35390 {};

// @baa 0x01b35390
E_01b35390 sub_01b35390() { E_01b35390 e; return e; }

struct E_01b353b0 {};

// @baa 0x01b353b0
E_01b353b0 sub_01b353b0() { E_01b353b0 e; return e; }

struct E_01b35410 {};

// @baa 0x01b35410
E_01b35410 sub_01b35410() { E_01b35410 e; return e; }

extern "C" __declspec(dllimport) int __cdecl memmove_s(void* Dst, unsigned int DstSize, const void* Src, unsigned int SrcSize);
// @baa 0x01b35450
void* sub_01b35450(void* First, void* Last, void* NewBase)
{
    int Count = ((int)((char*)Last - (char*)First)) >> 2;
    int Bytes = Count * 4;
    char* NewEnd = (char*)NewBase + Bytes;
    if (Count != 0)
        memmove_s(NewBase, (unsigned int)Bytes, First, (unsigned int)Bytes);
    return NewEnd;
}

struct E_01b354c0 {};

// @baa 0x01b354c0
E_01b354c0 sub_01b354c0() { E_01b354c0 e; return e; }

// @baa 0x01b354d0
void* sub_01b354d0(void* First, void* Last, void* NewBase)
{
    int Count = ((int)((char*)Last - (char*)First)) >> 2;
    int Bytes = Count * 4;
    char* NewEnd = (char*)NewBase + Bytes;
    if (Count != 0)
        memmove_s(NewBase, (unsigned int)Bytes, First, (unsigned int)Bytes);
    return NewEnd;
}

struct S_01b355e0 {
    int Unk00;
};

extern void __cdecl sub_01b35250(struct S_01b355e0 const &Ref, int Value);
// @baa 0x01b355e0
void __stdcall sub_01b355e0(struct S_01b355e0 const &Ref)
{
    sub_01b35250(Ref, 0);
}

struct S_01b35610 {
    int Unk00;
};

extern void __cdecl sub_01b352b0(struct S_01b35610 const &Ref, int Value);
// @baa 0x01b35610
void __stdcall sub_01b35610(struct S_01b35610 const &Ref)
{
    sub_01b352b0(Ref, 0);
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

	FRange *sub_01b356c0(UINT Index, FArrayLike *Array);
};

extern "C" __declspec(dllimport) void _invalid_parameter_noinfo(void);
// @baa 0x01b356c0
FRange *FRange::sub_01b356c0(UINT Index, FArrayLike *Array)
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

struct S_01b35710 {
    int Unk00;
};

extern void __cdecl sub_01b35310(struct S_01b35710 const &Ref, int Value);
// @baa 0x01b35710
void __stdcall sub_01b35710(struct S_01b35710 const &Ref)
{
    sub_01b35310(Ref, 0);
}

struct FRange_01b35770
{
	void *Range;
	UINT Count;

	FRange_01b35770 *sub_01b35770(UINT Index, FArrayLike *Array);
};

// @baa 0x01b35770
FRange_01b35770 *FRange_01b35770::sub_01b35770(UINT Index, FArrayLike *Array)
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

struct FRange_01b357f0
{
	void *Range;
	UINT Count;

	FRange_01b357f0 *sub_01b357f0(UINT Index, FArrayLike *Array);
};

// @baa 0x01b357f0
FRange_01b357f0 *FRange_01b357f0::sub_01b357f0(UINT Index, FArrayLike *Array)
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

struct FRange_01b35880
{
	void *Range;
	UINT Count;

	FRange_01b35880 *sub_01b35880(UINT Index, FArrayLike *Array);
};

// @baa 0x01b35880
FRange_01b35880 *FRange_01b35880::sub_01b35880(UINT Index, FArrayLike *Array)
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

// @baa 0x01b35930
void* sub_01b35930(void* First, void* Last, void* NewBase)
{
    int Count = ((int)((char*)Last - (char*)First)) >> 2;
    int Bytes = Count * 4;
    char* NewEnd = (char*)NewBase + Bytes;
    if (Count != 0)
        memmove_s(NewBase, (unsigned int)Bytes, First, (unsigned int)Bytes);
    return NewEnd;
}

struct FRange_01b369e0
{
	void *Range;
	UINT Count;

	FRange_01b369e0 *sub_01b369e0(UINT Index, FArrayLike *Array);
};

// @baa 0x01b369e0
FRange_01b369e0 *FRange_01b369e0::sub_01b369e0(UINT Index, FArrayLike *Array)
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

struct FRange_01b36a60
{
	void *Range;
	UINT Count;

	FRange_01b36a60 *sub_01b36a60(UINT Index, FArrayLike *Array);
};

// @baa 0x01b36a60
FRange_01b36a60 *FRange_01b36a60::sub_01b36a60(UINT Index, FArrayLike *Array)
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

// @baa 0x01b36b50
void* sub_01b36b50(void* First, void* Last, void* NewBase)
{
    int Count = ((int)((char*)Last - (char*)First)) >> 2;
    int Bytes = Count * 4;
    char* NewEnd = (char*)NewBase + Bytes;
    if (Count != 0)
        memmove_s(NewBase, (unsigned int)Bytes, First, (unsigned int)Bytes);
    return NewEnd;
}

// @baa 0x01b36d10
void* sub_01b36d10(void* First, void* Last, void* NewBase)
{
    int Count = ((int)((char*)Last - (char*)First)) >> 2;
    int Bytes = Count * 4;
    char* NewEnd = (char*)NewBase + Bytes;
    if (Count != 0)
        memmove_s(NewBase, (unsigned int)Bytes, First, (unsigned int)Bytes);
    return NewEnd;
}

struct C_01b374b0 {
    undefined4 sub_01b374b0(undefined4, undefined4);
    int sub_01b371b0(int, int);
};

// @baa 0x01b374b0
undefined4 C_01b374b0::sub_01b374b0(undefined4 param_2, undefined4 param_3)
{
    undefined4 param_1 = (undefined4)this;
  ((C_01b374b0 *)(this))->sub_01b371b0(param_2, param_3);
  return param_1;
}

struct C_01b38090 {
    undefined4 sub_01b38090(undefined4, undefined4);
    int sub_01b37be0(int, int);
};

// @baa 0x01b38090
undefined4 C_01b38090::sub_01b38090(undefined4 param_2, undefined4 param_3)
{
    undefined4 param_1 = (undefined4)this;
  ((C_01b38090 *)(this))->sub_01b37be0(param_2, param_3);
  return param_1;
}

// @baa 0x01b3bcb0
int sub_01b3bcb0(int param_1, int param_2)
{
  return *(int *)(param_1 + 4) - *(int *)(param_2 + 4);
}

struct C_01b3db20 {
    void sub_01b3db20(int);
};

int sub_01b42390(...);
// @baa 0x01b3db20
void C_01b3db20::sub_01b3db20(int param_2)
{
    int param_1 = (int)this;
  sub_01b42390(param_1,param_1 + 0x18,param_2,param_2 + 0x18);
  return;
}

struct FRange_01b3e0b0
{
	void *Range;
	UINT Count;

	FRange_01b3e0b0 *sub_01b3e0b0(UINT Index, FArrayLike *Array);
};

// @baa 0x01b3e0b0
FRange_01b3e0b0 *FRange_01b3e0b0::sub_01b3e0b0(UINT Index, FArrayLike *Array)
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

struct E_01b3e460 {};

// @baa 0x01b3e460
E_01b3e460 sub_01b3e460() { E_01b3e460 e; return e; }

struct E_01b3e4c0 {};

// @baa 0x01b3e4c0
E_01b3e4c0 sub_01b3e4c0() { E_01b3e4c0 e; return e; }

struct E_01b3e4f0 {};

// @baa 0x01b3e4f0
E_01b3e4f0 sub_01b3e4f0() { E_01b3e4f0 e; return e; }

// @baa 0x01b3e520
void* sub_01b3e520(void* First, void* Last, void* NewBase)
{
    int Count = ((int)((char*)Last - (char*)First)) >> 2;
    int Bytes = Count * 4;
    char* NewEnd = (char*)NewBase + Bytes;
    if (Count != 0)
        memmove_s(NewBase, (unsigned int)Bytes, First, (unsigned int)Bytes);
    return NewEnd;
}

// @baa 0x01b3e580
void sub_01b3e580(void)
{
  return;
}

// @baa 0x01b3e640
void* sub_01b3e640(void* First, void* Last, void* NewBase)
{
    int Count = ((int)((char*)Last - (char*)First)) >> 2;
    int Bytes = Count * 4;
    char* NewEnd = (char*)NewBase + Bytes;
    if (Count != 0)
        memmove_s(NewBase, (unsigned int)Bytes, First, (unsigned int)Bytes);
    return NewEnd;
}

struct FRange_01b3ed10
{
	void *Range;
	UINT Count;

	FRange_01b3ed10 *sub_01b3ed10(UINT Index, FArrayLike *Array);
};

// @baa 0x01b3ed10
FRange_01b3ed10 *FRange_01b3ed10::sub_01b3ed10(UINT Index, FArrayLike *Array)
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

struct S_01b3ed50 {
    INT Unk00;
    INT Unk04;
    S_01b3ed50 *sub_01b3ed50();
};

// @baa 0x01b3ed50
S_01b3ed50 *S_01b3ed50::sub_01b3ed50()
{
    Unk00 = 0;
    Unk04 = 0;
    return this;
}

struct C_01b3ed60 {
    C_01b3ed60* sub_01b3ed60(int);
};

// @baa 0x01b3ed60
C_01b3ed60* C_01b3ed60::sub_01b3ed60(int param_1) { return this; }

struct S_01b3ed90 {
    int Unk00;
};

extern void __cdecl sub_01b3e330(struct S_01b3ed90 const &Ref, int Value);
// @baa 0x01b3ed90
void __stdcall sub_01b3ed90(struct S_01b3ed90 const &Ref)
{
    sub_01b3e330(Ref, 0);
}

struct S_01b3edf0 {
    int Unk00;
};

extern void __cdecl sub_01b3e390(struct S_01b3edf0 const &Ref, int Value);
// @baa 0x01b3edf0
void __stdcall sub_01b3edf0(struct S_01b3edf0 const &Ref)
{
    sub_01b3e390(Ref, 0);
}

struct S_01b3ee20 {
    int Unk00;
};

extern void __cdecl sub_01b3e3f0(struct S_01b3ee20 const &Ref, int Value);
// @baa 0x01b3ee20
void __stdcall sub_01b3ee20(struct S_01b3ee20 const &Ref)
{
    sub_01b3e3f0(Ref, 0);
}

struct FRange_01b3ef20
{
	void *Range;
	UINT Count;

	FRange_01b3ef20 *sub_01b3ef20(UINT Index, FArrayLike *Array);
};

// @baa 0x01b3ef20
FRange_01b3ef20 *FRange_01b3ef20::sub_01b3ef20(UINT Index, FArrayLike *Array)
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

// @baa 0x01b3ef90
void* sub_01b3ef90(void* First, void* Last, void* NewBase)
{
    int Count = ((int)((char*)Last - (char*)First)) >> 2;
    int Bytes = Count * 4;
    char* NewEnd = (char*)NewBase + Bytes;
    if (Count != 0)
        memmove_s(NewBase, (unsigned int)Bytes, First, (unsigned int)Bytes);
    return NewEnd;
}

// @baa 0x01b3eff0
void __stdcall sub_01b3eff0(int a)
{
  if (a) {}
}

// @baa 0x01b3f010
void* sub_01b3f010(void* First, void* Last, void* NewBase)
{
    int Count = ((int)((char*)Last - (char*)First)) >> 2;
    int Bytes = Count * 4;
    char* NewEnd = (char*)NewBase + Bytes;
    if (Count != 0)
        memmove_s(NewBase, (unsigned int)Bytes, First, (unsigned int)Bytes);
    return NewEnd;
}

// @baa 0x01b3f090
void* sub_01b3f090(void* First, void* Last, void* NewBase)
{
    int Count = ((int)((char*)Last - (char*)First)) >> 2;
    int Bytes = Count * 4;
    char* NewEnd = (char*)NewBase + Bytes;
    if (Count != 0)
        memmove_s(NewBase, (unsigned int)Bytes, First, (unsigned int)Bytes);
    return NewEnd;
}

struct S_01b3f240 {
    INT Unk00;
    INT Unk04;
    S_01b3f240 *sub_01b3f240();
};

// @baa 0x01b3f240
S_01b3f240 *S_01b3f240::sub_01b3f240()
{
    Unk00 = 0;
    Unk04 = 0;
    return this;
}

struct FRange_01b3f3d0
{
	void *Range;
	UINT Count;

	FRange_01b3f3d0 *sub_01b3f3d0(UINT Index, FArrayLike *Array);
};

// @baa 0x01b3f3d0
FRange_01b3f3d0 *FRange_01b3f3d0::sub_01b3f3d0(UINT Index, FArrayLike *Array)
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

// @baa 0x01b3f520
undefined4 sub_01b3f520(int param_1)
{
  return *(undefined4 *)(param_1 + 4);
}

// @baa 0x01b3f530
void* sub_01b3f530(void* First, void* Last, void* NewBase)
{
    int Count = ((int)((char*)Last - (char*)First)) >> 2;
    int Bytes = Count * 4;
    char* NewEnd = (char*)NewBase + Bytes;
    if (Count != 0)
        memmove_s(NewBase, (unsigned int)Bytes, First, (unsigned int)Bytes);
    return NewEnd;
}

// @baa 0x01b3f5a0
void* sub_01b3f5a0(void* First, void* Last, void* NewBase)
{
    int Count = ((int)((char*)Last - (char*)First)) >> 2;
    int Bytes = Count * 4;
    char* NewEnd = (char*)NewBase + Bytes;
    if (Count != 0)
        memmove_s(NewBase, (unsigned int)Bytes, First, (unsigned int)Bytes);
    return NewEnd;
}

// @baa 0x01b3f980
void* sub_01b3f980(void* First, void* Last, void* NewBase)
{
    int Count = ((int)((char*)Last - (char*)First)) >> 2;
    int Bytes = Count * 4;
    char* NewEnd = (char*)NewBase + Bytes;
    if (Count != 0)
        memmove_s(NewBase, (unsigned int)Bytes, First, (unsigned int)Bytes);
    return NewEnd;
}

struct S_01b3fe30 {
    virtual void f0(int a, int b, int c, int d);
};

struct C_01b3fe30 {
    char pad[0x14];
    S_01b3fe30* p;
    void sub_01b3fe30(int a, int b, int c, int d);
};

// @baa 0x01b3fe30
void C_01b3fe30::sub_01b3fe30(int a, int b, int c, int d) {
    p->f0(a, b, c, d);
}

struct V_01b3fe40 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void g(int a0);
};

struct O_01b3fe40 { char pad[20]; V_01b3fe40* p; void sub_01b3fe40(int a0); };

// @baa 0x01b3fe40
void O_01b3fe40::sub_01b3fe40(int a0) { p->g(a0); }

struct V_01b3fe80 {
    virtual void v0();
    virtual void v1();
    virtual void g(int a0);
};

struct O_01b3fe80 { char pad[20]; V_01b3fe80* p; void sub_01b3fe80(int a0); };

// @baa 0x01b3fe80
void O_01b3fe80::sub_01b3fe80(int a0) { p->g(a0); }
