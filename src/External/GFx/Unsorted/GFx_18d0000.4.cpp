// GFx_18d0000.cpp: 3 functions
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
