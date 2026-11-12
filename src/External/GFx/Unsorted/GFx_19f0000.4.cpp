// GFx_19f0000.cpp: 10 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Core.h"

extern void __stdcall sub_018d7150(int Count);
// @baa 0x019ff490
void sub_019ff490(int Param)
{
	sub_018d7150(Param * 28);
}

struct Object
{
    INT Value_00;
    INT Value_04;
    INT Value_08;
};

// @baa 0x019fe5f0
void __stdcall sub_019fe5f0(Object* Target, INT Value)
{
    Target->Value_04 = Value;
}

// @baa 0x019fe6c0
void __stdcall sub_019fe6c0(Object* Target, INT Value)
{
    Target->Value_04 = Value;
}

// @baa 0x019fe6e0
void __stdcall sub_019fe6e0(Object* Target, INT Value)
{
    Target->Value_08 = Value;
}

extern void __stdcall sub_018d7170(INT Value);
struct C
{
    char pad_00[8];
    INT Object;

    void sub_019fe790();
};

// @baa 0x019fe790
void C::sub_019fe790()
{
    if (Object)
        sub_018d7170(Object);
}

void __stdcall sub_018d7150(INT Value);
// @baa 0x019ff3d0
void sub_019ff3d0(INT Value)
{
    sub_018d7150(Value << 4);
}

// @baa 0x019ff400
void sub_019ff400(INT Value)
{
    sub_018d7150(Value << 4);
}

/* Case-insensitive string hash (seed 0x1505). 0x018e3f40, __stdcall (ret 0xc).
   The length is masked by 0x7fffffff at the call site. */
INT __stdcall sub_018e3f40(const char* String, INT Length, INT Seed);
struct FGFxDataStoreString {
    INT Length; /* 0x0 */
    INT Field_4;
    INT Field_8;
    char Buffer[1]; /* 0xc, inline name buffer */
};

struct UGFxDataStoreRecord {
    FGFxDataStoreString* String; /* 0x0 */

    /* 0x019f1610: hash the record's inline name */
    INT sub_019f1610();
};

// @baa 0x019f1610
INT UGFxDataStoreRecord::sub_019f1610()
{
    INT Length = String->Length & 0x7fffffff;
    char* Buffer = String->Buffer;
    return sub_018e3f40(Buffer, Length, 0x1505);
}

struct IndexTable_ {
    int Index;
    int Spare;
    int Spare2;
    int* HighTable;
    int Lookup() /* 019ff2b0 */;
};

// @baa 0x019ff2b0
int IndexTable_::Lookup()
{
    int Offset = Index - 1;
    int Page = ((unsigned int)Offset) >> 8;
    return HighTable[Page] + (Offset & 0xff) * 4;
}

static int s019f(IndexTable_* Table)
{
    return Table->Lookup();
}

struct S019ff220Entry
{
	DWORD x;
	DWORD y;
};

struct S019ff220
{
	DWORD m_Count;			// 0x0
	DWORD m_Reserved;		// 0x4
	DWORD m_Pad;			// 0x8
	S019ff220Entry** m_Pages;	// 0xc

	S019ff220Entry* sub_019ff220();
};

// @baa 0x019ff220
S019ff220Entry* S019ff220::sub_019ff220()
{
	DWORD Index = m_Count - 1;
	return m_Pages[Index >> 10] + (Index & 0x3ff);
}
