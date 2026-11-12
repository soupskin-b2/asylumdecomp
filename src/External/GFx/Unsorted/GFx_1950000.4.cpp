// GFx_1950000.cpp: 4 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
// GFx: GArrayData<T> (4-byte elements) Reserve: reallocates the buffer to hold NewCapacity
// elements, honoring the policy's never-shrink and never-empty flags kept in the top capacity bits.
#include <string.h>

void* __stdcall sub_018d7150(unsigned int Size);
			/* GMemory::Alloc */
void* __stdcall sub_018d7160(void* Block, unsigned int Size);
	/* GMemory::Realloc */
void __stdcall sub_018d7170(void* Block);
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

    void sub_0195e790(unsigned int NewCapacity);
};

// @baa 0x0195e790
void GArrayData4::sub_0195e790(unsigned int NewCapacity)
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

    void sub_0195e940(unsigned int NewCapacity);
};

// @baa 0x0195e940
void GArrayData8::sub_0195e940(unsigned int NewCapacity)
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

struct GArrayData4_0195e9d0
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

    void sub_0195e9d0(unsigned int NewCapacity);
};

// @baa 0x0195e9d0
void GArrayData4_0195e9d0::sub_0195e9d0(unsigned int NewCapacity)
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

    void sub_0195ea60(unsigned int NewCapacity);
};

// @baa 0x0195ea60
void GArrayData12::sub_0195ea60(unsigned int NewCapacity)
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
