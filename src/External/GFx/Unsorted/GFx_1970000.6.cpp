// GFx_1970000.cpp: 6 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
// GFx: GArrayData<T> (8-byte elements) Reserve: reallocates the buffer to hold NewCapacity
// elements, honoring the policy's never-shrink and never-empty flags kept in the top capacity bits.
#include <string.h>

void* __stdcall sub_018d7150(unsigned int Size);
			/* GMemory::Alloc */
void* __stdcall sub_018d7160(void* Block, unsigned int Size);
	/* GMemory::Realloc */
void __stdcall sub_018d7170(void* Block);
			/* GMemory::Free */
struct GArrayElement8
{
    unsigned int Words[2];
};

struct GArrayData8
{
    enum
    {
        Capacity_Mask   = 0x3fffffff,
        Flag_NeverEmpty  = 0x40000000,
        Flag_NeverShrink = 0x80000000,
    };

    GArrayElement8* Data;
    unsigned int     Size;
    unsigned int     Policy;		// capacity in the low 30 bits, flags above

    void sub_01972bf0(unsigned int NewCapacity);
};

// @baa 0x01972bf0
void GArrayData8::sub_01972bf0(unsigned int NewCapacity)
{
    unsigned int Flags = Policy >> 30;
    bool bNeverShrink = ((Flags >> 1) & 1) != 0;
    if (Flags)
    {
        if (bNeverShrink)
        {
            if (NewCapacity < (Policy & Capacity_Mask))
                return;
        }
        if ((Flags & 1) && NewCapacity == 0)
            return;
    }
    Policy = (Policy & ~Capacity_Mask) | NewCapacity;
    GArrayElement8* OldData = Data;
    if (NewCapacity == 0)
    {
        if (OldData)
            sub_018d7170(OldData);
        Data = 0;
    }
    else if (OldData)
    {
        Data = (GArrayElement8*)sub_018d7160(OldData, NewCapacity * sizeof(GArrayElement8));
    }
    else
    {
        unsigned int Bytes = NewCapacity * sizeof(GArrayElement8);
        Data = (GArrayElement8*)sub_018d7150(Bytes);
        memset(Data, 0, Bytes);
    }
}

			/* GMemory::Free */
struct GArrayElement4
{
    unsigned int Words[1];
};

struct GArrayData4
{
    enum
    {
        Capacity_Mask   = 0x3fffffff,
        Flag_NeverEmpty  = 0x40000000,
        Flag_NeverShrink = 0x80000000,
    };

    GArrayElement4* Data;
    unsigned int     Size;
    unsigned int     Policy;		// capacity in the low 30 bits, flags above

    void sub_01979d30(unsigned int NewCapacity);
};

// @baa 0x01979d30
void GArrayData4::sub_01979d30(unsigned int NewCapacity)
{
    unsigned int Flags = Policy >> 30;
    bool bNeverShrink = ((Flags >> 1) & 1) != 0;
    if (Flags)
    {
        if (bNeverShrink)
        {
            if (NewCapacity < (Policy & Capacity_Mask))
                return;
        }
        if ((Flags & 1) && NewCapacity == 0)
            return;
    }
    Policy = (Policy & ~Capacity_Mask) | NewCapacity;
    GArrayElement4* OldData = Data;
    if (NewCapacity == 0)
    {
        if (OldData)
            sub_018d7170(OldData);
        Data = 0;
    }
    else if (OldData)
    {
        Data = (GArrayElement4*)sub_018d7160(OldData, NewCapacity * sizeof(GArrayElement4));
    }
    else
    {
        unsigned int Bytes = NewCapacity * sizeof(GArrayElement4);
        Data = (GArrayElement4*)sub_018d7150(Bytes);
        memset(Data, 0, Bytes);
    }
}

			/* GMemory::Free */
struct GArrayElement12
{
    unsigned int Words[3];
};

struct GArrayData12
{
    enum
    {
        Capacity_Mask   = 0x3fffffff,
        Flag_NeverEmpty  = 0x40000000,
        Flag_NeverShrink = 0x80000000,
    };

    GArrayElement12* Data;
    unsigned int     Size;
    unsigned int     Policy;		// capacity in the low 30 bits, flags above

    void sub_01979e00(unsigned int NewCapacity);
};

// @baa 0x01979e00
void GArrayData12::sub_01979e00(unsigned int NewCapacity)
{
    unsigned int Flags = Policy >> 30;
    bool bNeverShrink = ((Flags >> 1) & 1) != 0;
    if (Flags)
    {
        if (bNeverShrink)
        {
            if (NewCapacity < (Policy & Capacity_Mask))
                return;
        }
        if ((Flags & 1) && NewCapacity == 0)
            return;
    }
    Policy = (Policy & ~Capacity_Mask) | NewCapacity;
    if (NewCapacity == 0)
    {
        if (Data)
            sub_018d7170(Data);
        Data = 0;
    }
    else if (Data)
    {
        Data = (GArrayElement12*)sub_018d7160(Data, NewCapacity * sizeof(GArrayElement12));
    }
    else
    {
        unsigned int Bytes = NewCapacity * sizeof(GArrayElement12);
        Data = (GArrayElement12*)sub_018d7150(Bytes);
        memset(Data, 0, Bytes);
    }
}

struct GArrayUInt16
{
    unsigned short* Data;
    unsigned int    Size;

    void sub_01978290(unsigned int Index, unsigned int Count);
};

// @baa 0x01978290
void GArrayUInt16::sub_01978290(unsigned int Index, unsigned int Count)
{
    if (Index < Size)
    {
        if (Index + Count >= Size)
        {
            Size = Index;
        }
        else
        {
            memmove(Data + Index, Data + Index + Count, (Size - Index - Count) * sizeof(unsigned short));
            Size -= Count;
        }
    }
}

	/* GMemory::Realloc */
struct GFxWideBuffer
{
    char            Header[0x18];
    unsigned short* pData;
    unsigned int    Capacity;
    unsigned int    Length;

    void sub_01979320(const unsigned short* pChars, unsigned int Count);
};

// @baa 0x01979320
void GFxWideBuffer::sub_01979320(const unsigned short* pChars, unsigned int Count)
{
    if (Length + Count > Capacity)
    {
        Capacity += Count;
        pData = (unsigned short*)sub_018d7160(pData, Capacity * sizeof(unsigned short));
    }
    memcpy(pData + Length, pChars, Count * sizeof(unsigned short));
    Length += Count;
}

	/* GMemory::Realloc */
unsigned int sub_01978310(const unsigned short* pStr);
/* GMemory::Realloc for typed buffers */
template<class T> inline T* GReallocT(T* p, unsigned int Count)
{
    return (T*)sub_018d7160(p, Count * sizeof(T));
}

		/* wide strlen */
struct GFxWideArray
{
    unsigned short* pData;
    unsigned int    Size;
    unsigned int    Capacity;

    void sub_01979a60(void* pHeap, const unsigned short* pChars, unsigned int Length);
};

// @baa 0x01979a60
void GFxWideArray::sub_01979a60(void* pHeap, const unsigned short* pChars, unsigned int Length)
{
    if (Length == (unsigned int)-1)
        Length = sub_01978310(pChars);
    if (Capacity < Length)
    {
        pData = GReallocT(pData, Length);
        Capacity = Length;
    }
    if (Length > 0)
        memcpy(pData, pChars, Length * sizeof(unsigned short));
    Size = Length;
}
