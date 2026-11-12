// GFx_18d0000.cpp: 8 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

typedef void* HANDLE;

typedef unsigned long DWORD;

#define INFINITE 0xffffffff
extern "C" __declspec(dllimport) DWORD __stdcall WaitForSingleObject(HANDLE hHandle, DWORD dwMilliseconds);
// A waitable with a counter of successful waits.
struct FWaitable_
{
	HANDLE Handle;
	INT Unknown;
	INT WaitCount;

	void sub_018d5b30();
};

// @baa 0x018d5b30
void FWaitable_::sub_018d5b30()
{
	if (WaitForSingleObject(Handle, INFINITE) == 0)
	{
		WaitCount++;
	}
}

extern "C" __declspec(dllimport) long __stdcall InterlockedExchangeAdd(long* Addend, long Increment);
struct C
{
	void* m_pResource;
	long m_RefCount;
	void sub_018da8a0();
};

// @baa 0x018da8a0
void C::sub_018da8a0()
{
	long* RefCount = &m_RefCount;
	m_pResource = 0;
	if (*RefCount > 0)
		InterlockedExchangeAdd(RefCount, -1);
}

struct GFxStage_
{
	virtual int f00();
	virtual int f04();
	virtual int f08();
	virtual int sub_018ddab0(int InParam);	// slot 3 (vtable offset 0xc)
};

struct GFxSharedState_
{
	virtual GFxStage_* sub_018da960();	// slot 0 (vtable offset 0)
	virtual int f04(int InParam);
	virtual int f08(int InParam);
	int sub_018dda60(int InParam);	// slot 3
};

// @baa 0x018dda60
int GFxSharedState_::sub_018dda60(int InParam)
{
	GFxStage_* Stage = sub_018da960();
	if (Stage)
		return Stage->sub_018ddab0(InParam);
	return 0;
}

struct C_018d3cc0
{
    INT Value_00;
    BYTE Flag_04;

    C_018d3cc0* sub_018d3cc0();
};

// @baa 0x018d3cc0
C_018d3cc0* C_018d3cc0::sub_018d3cc0()
{
    Value_00 = 1;
    Flag_04 = 1;
    return this;
}

struct Sub
{
    void sub_018d4370(INT A, INT B);
};

struct C_018d4520
{
    char pad_00[0x14];
    Sub Marker;

    void sub_018d4520();
};

// @baa 0x018d4520
void C_018d4520::sub_018d4520()
{
    ((Sub*)((char*)this - 0x14))->sub_018d4370(1, 0);
}

struct Sub_018d4e50
{
    void sub_018d4d90();
};

struct C_018d4e50
{
    char pad_00[0x10];
    Sub_018d4e50* Object;

    void sub_018d4e50();
};

// @baa 0x018d4e50
void C_018d4e50::sub_018d4e50()
{
    if (Object)
        Object->sub_018d4d90();
}

struct C_018d95a0
{
    WORD Value;
    BYTE pad_02;
    BYTE Sign;

    INT sub_018d95a0();
};

// @baa 0x018d95a0
INT C_018d95a0::sub_018d95a0()
{
    return (Sign & 0x80) ? Value : 0;
}

struct FHashBucket
{
	void* Table;

	// 0x018d6390
	void sub_018d6390(void* Object, INT Hash);

	// 0x018d6690
	void sub_018d6690(void* Object);
};

// @baa 0x018d6690
void FHashBucket::sub_018d6690(void* Object)
{
	sub_018d6390(Object, *(UINT*)Object >> 6 ^ *(UINT*)Object);
}
