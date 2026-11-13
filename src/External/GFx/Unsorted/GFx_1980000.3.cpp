// GFx_1980000.cpp: 7 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Core.h"

struct GFxStage_ {
    virtual void sub_0198f7f0();
    virtual void sub_0198f800();
    virtual int GetState();
    void* sub_0198f810();
};

// @baa 0x0198f810
void* GFxStage_::sub_0198f810()
{
    if (GetState() == 2)
        return (void*)((char*)this - 0x6c);
    return 0;
}

struct Object
{
    char pad_00[0x18];
    BYTE Flag;
};

struct C
{
    char pad_00[0x1c];
    Object* Target;

    void sub_01983e00(INT A, INT B, INT C, INT D);
};

// @baa 0x01983e00
void C::sub_01983e00(INT, INT, INT, INT)
{
    if (Target)
        Target->Flag = 1;
}

// sub_0198cac0: thiscall init of three words into this.
struct F0198cac0
{
	INT A;
	INT B;
	INT C;

	F0198cac0(INT InA, INT InB, INT InC)
	{
		A = InA;
		B = InB;
		C = InC;
	}
};

extern INT g_01990000;
// @baa 0x0198cac0
static F0198cac0 g_0198cac0_dummy = F0198cac0(g_01990000, 0, 0);

struct C_0198cb10 {
    char pad[0x50];
    unsigned char m_050;
    int sub_0198cb10(int BitIndex);
};

// @baa 0x0198cb10
int C_0198cb10::sub_0198cb10(int BitIndex)
{
    return (m_050 & (1 << BitIndex)) != 0;
}

// GFx: assigns a (value, ref-counted object) pair from a pair of pointers to them.
struct GFxRefObject
{
    int RefCount;

    void AddRef() { RefCount++; }
    void sub_018ec370();					/* Release */
};

struct GFxPairSource
{
    unsigned int*  pValue;
    GFxRefObject** ppObject;
};

struct GFxValueObjectPair
{
    unsigned int  Value;
    GFxRefObject* pObject;

    void sub_019859d0(const GFxPairSource& Src);
};

// @baa 0x019859d0
void GFxValueObjectPair::sub_019859d0(const GFxPairSource& Src)
{
    Value = *Src.pValue;
    GFxRefObject** ppObj = Src.ppObject;
    if (*ppObj)
        (*ppObj)->AddRef();
    if (pObject)
        pObject->sub_018ec370();
    pObject = *ppObj;
}

// GFx: makes sure the owner's lazily created text data exists, then asks its record list about Key.
void* __stdcall sub_018d7150(unsigned int Size);
			/* GMemory::Alloc */
/* A list of 40-byte keyed records (see 0x0192ebd0); 0x1c bytes. */
struct GFxKeyedRecordList
{
    void*         pData;
    unsigned int  Size;
    unsigned int  Policy;
    unsigned int  Serial;
    unsigned int  Extra10;
    unsigned int  Extra14;
    unsigned char bDirty0;
    unsigned char bDirty1;

    GFxKeyedRecordList();						/* 0x0192f8c0 */
    int sub_0192f6d0(unsigned int Key);
};

/* Only its out-of-line constructor is used here; 0x90 bytes. */
struct GFxDrawingContext
{
    GFxDrawingContext();						/* 0x019d1b90 */

    unsigned char Data[0x90];
};

struct GFxLazyTextData
{
    GFxKeyedRecordList Records;		// 0x00
    GFxDrawingContext  Drawing;		// 0x1c
    float              Width;		// 0xac
    float              Height;		// 0xb0
    unsigned short     Flags;		// 0xb4

    GFxLazyTextData() : Width(-1.f), Height(-1.f), Flags(0) {}

    /* GFx allocation (no matching delete, so a throwing constructor leaks rather than unwinds) */
    void* operator new(unsigned int Size, int /*StatId*/) { return sub_018d7150(Size); }
};

struct GFxLazyTextOwner
{
    unsigned char    Header[0x1c];
    GFxLazyTextData* pData;		// 0x1c

    __forceinline GFxLazyTextData* GetData()
    {
        if (!pData)
            pData = new(0) GFxLazyTextData;
        return pData;
    }

    int sub_01988150(unsigned int Key);
};

// @baa 0x01988150
int GFxLazyTextOwner::sub_01988150(unsigned int Key)
{
    GetData();
    return pData->Records.sub_0192f6d0(Key) != 0;
}

// Stores the low three bits of the flag byte at +0xc.
struct FFlagByte_
{
	BYTE Header[0xc];
	BYTE Flags; /* 0xc */

	FFlagByte_* Set(BYTE Mask);
};

// @baa 0x0198cf90
FFlagByte_* FFlagByte_::Set(BYTE Mask)
{
	Flags = (BYTE)(Mask & 7);
	return this;
}
