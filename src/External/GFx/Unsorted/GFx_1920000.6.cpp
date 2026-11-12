// GFx_1920000.cpp: 11 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

struct S {
    INT a;
    INT b;
    INT c;
    INT d;
    S* sub_01921b00();
};

// @baa 0x01921b00
S* S::sub_01921b00()
{
    a = 0x7fffffff;
    b = 0x80000000;
    c = 0;
    d = 0;
    return this;
}

extern "C" __declspec(dllimport) long __stdcall InterlockedExchangeAdd(long volatile* Addend, long Value);
struct C
{
    char pad_00[0x18];
    long Counter;

    void sub_019237a0();
};

// @baa 0x019237a0
void C::sub_019237a0()
{
    InterlockedExchangeAdd(&Counter, 1);
}

struct C_019202d0
{
    BYTE* Table;
    INT pad_04;
    INT Position;

    BYTE sub_019202d0();
};

// @baa 0x019202d0
BYTE C_019202d0::sub_019202d0()
{
    BYTE Value = Table[Position];
    Position++;
    return Value;
}

void __stdcall sub_01920120(INT A, INT B);
// @baa 0x019224d0
void __stdcall sub_019224d0(INT Value)
{
    sub_01920120(Value, Value);
}

extern void __stdcall sub_018d7170(INT Value);
struct C_019232c0
{
    char pad_00[8];
    INT Object;

    void sub_019232c0();
};

// @baa 0x019232c0
void C_019232c0::sub_019232c0()
{
    if (Object)
        sub_018d7170(Object);
}

struct Object
{
    char pad_00[0x14];
    INT Value;
};

// @baa 0x0192ea90
INT __stdcall sub_0192ea90(Object* Target, INT B)
{
    return Target->Value - B;
}

// @baa 0x01921f40
void sub_01921f40(float* a, float* b)
{
	const float t = *a;
	*a = *b;
	*b = t;
}

struct FSmallValue_
{
	int f0;
	int f4;
	short f8;
	short fA;

	__declspec(noinline) FSmallValue_* sub_019200e0(short InValue);
};

// @baa 0x019200e0
__declspec(noinline) FSmallValue_* FSmallValue_::sub_019200e0(short InValue)
{
	f0 = 0;
	f4 = 0;
	f8 = 0;
	fA = InValue;
	return this;
}

FSmallValue_ g_019200e0_Value;
int sub_0192_call(FSmallValue_* p, short InValue)
{
	return p->sub_019200e0(InValue) ? 1 : 0;
}

struct C_0192aa80
{
	float X;
	float Y;
	float Z;
	C_0192aa80 * sub_0192aa80(float V);
};

// @baa 0x0192aa80
C_0192aa80 * C_0192aa80::sub_0192aa80(float V)
{
	X += V;
	Z += V;
	return this;
}

/* A 40-byte GFx record whose key (an id or pointer) sits at +0x14; only the key is named. */
struct FGFxKeyedRecord
{
	BYTE _pad_0[0x14];
	DWORD Key;		/* 0x14 */
	BYTE _pad_18[0x10];
};

/* GFx's GArray<FGFxKeyedRecord> (data pointer, then count). */
struct FGFxKeyedRecordArray
{
	FGFxKeyedRecord* Data;
	UINT Size;

	FGFxKeyedRecord* sub_0192ebd0(DWORD Key);
};

// @baa 0x0192ebd0
/* Linear search: the first record with this key, or NULL. */
FGFxKeyedRecord* FGFxKeyedRecordArray::sub_0192ebd0(DWORD Key)
{
	for (UINT i = 0; i < Size; i++)
	{
		if (Data[i].Key == Key)
		{
			return &Data[i];
		}
	}
	return NULL;
}

// GFx: lazily works out (and caches) whether any 40-byte entry has a nonzero 3-bit mode.
struct GFxModeEntry
{
    char          Header[0x24];
    unsigned char Mode : 3;
    unsigned char Other : 5;
    char          Pad[3];
};

struct GFxModeEntryList
{
    GFxModeEntry* Data;
    unsigned int  Size;
    char          Pad[0x11];
    signed char   HasModeCache;		// 0 = not computed yet, 1 = yes, -1 = no

    bool sub_0192ed00();
};

// @baa 0x0192ed00
bool GFxModeEntryList::sub_0192ed00()
{
    if (HasModeCache == 0)
    {
        HasModeCache = -1;
        unsigned int Count = Size;
        for (unsigned int i = 0; i < Count; i++)
        {
            if (Data[i].Mode)
            {
                HasModeCache = 1;
                break;
            }
        }
    }
    return HasModeCache == 1;
}
