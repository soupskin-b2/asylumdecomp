// GFx_1900000.cpp: 7 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
// GFx: GArrayData<T> (16-byte elements) Reserve: reallocates the buffer to hold NewCapacity
// elements, honoring the policy's never-shrink and never-empty flags kept in the top capacity bits.
#include <string.h>

void* __stdcall sub_018d7150(unsigned int Size);
			/* GMemory::Alloc */
void* __stdcall sub_018d7160(void* Block, unsigned int Size);
	/* GMemory::Realloc */
void __stdcall sub_018d7170(void* Block);
			/* GMemory::Free */
struct GArrayElement16
{
    unsigned int Words[4];
};

struct GArrayData16
{
    enum
    {
        Capacity_Mask   = 0x3fffffff,
        Flag_NeverEmpty  = 0x40000000,
        Flag_NeverShrink = 0x80000000,
    };

    GArrayElement16* Data;
    unsigned int     Size;
    unsigned int     Policy;		// capacity in the low 30 bits, flags above

    void sub_019097c0(unsigned int NewCapacity);
};

// @baa 0x019097c0
void GArrayData16::sub_019097c0(unsigned int NewCapacity)
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
        Data = (GArrayElement16*)sub_018d7160(Data, NewCapacity * sizeof(GArrayElement16));
    }
    else
    {
        unsigned int Bytes = NewCapacity * sizeof(GArrayElement16);
        Data = (GArrayElement16*)sub_018d7150(Bytes);
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

    void sub_01909c40(unsigned int NewCapacity);
};

// @baa 0x01909c40
void GArrayData8::sub_01909c40(unsigned int NewCapacity)
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

struct GArrayData16_019098b0
{
    enum
    {
        Capacity_Mask   = 0x3fffffff,
        Flag_NeverEmpty  = 0x40000000,
        Flag_NeverShrink = 0x80000000,
    };

    GArrayElement16* Data;
    unsigned int     Size;
    unsigned int     Policy;		// capacity in the low 30 bits, flags above

    void sub_019098b0(unsigned int NewCapacity);
};

// @baa 0x019098b0
void GArrayData16_019098b0::sub_019098b0(unsigned int NewCapacity)
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
        Data = (GArrayElement16*)sub_018d7160(Data, NewCapacity * sizeof(GArrayElement16));
    }
    else
    {
        unsigned int Bytes = NewCapacity * sizeof(GArrayElement16);
        Data = (GArrayElement16*)sub_018d7150(Bytes);
        memset(Data, 0, Bytes);
    }
}

			/* GMemory::Free */
struct GArrayElement20
{
    unsigned int Words[5];
};

struct GArrayData20
{
    enum
    {
        Capacity_Mask   = 0x3fffffff,
        Flag_NeverEmpty  = 0x40000000,
        Flag_NeverShrink = 0x80000000,
    };

    GArrayElement20* Data;
    unsigned int     Size;
    unsigned int     Policy;		// capacity in the low 30 bits, flags above

    void sub_019099b0(unsigned int NewCapacity);
};

// @baa 0x019099b0
void GArrayData20::sub_019099b0(unsigned int NewCapacity)
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
        Data = (GArrayElement20*)sub_018d7160(Data, NewCapacity * sizeof(GArrayElement20));
    }
    else
    {
        unsigned int Bytes = NewCapacity * sizeof(GArrayElement20);
        Data = (GArrayElement20*)sub_018d7150(Bytes);
        memset(Data, 0, Bytes);
    }
}

			/* GMemory::Free */
struct GArrayElement48
{
    unsigned int Words[12];
};

struct GArrayData48
{
    enum
    {
        Capacity_Mask   = 0x3fffffff,
        Flag_NeverEmpty  = 0x40000000,
        Flag_NeverShrink = 0x80000000,
    };

    GArrayElement48* Data;
    unsigned int     Size;
    unsigned int     Policy;		// capacity in the low 30 bits, flags above

    void sub_01909b20(unsigned int NewCapacity);
};

// @baa 0x01909b20
void GArrayData48::sub_01909b20(unsigned int NewCapacity)
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
        Data = (GArrayElement48*)sub_018d7160(Data, NewCapacity * sizeof(GArrayElement48));
    }
    else
    {
        unsigned int Bytes = NewCapacity * sizeof(GArrayElement48);
        Data = (GArrayElement48*)sub_018d7150(Bytes);
        memset(Data, 0, Bytes);
    }
}

			/* GMemory::Free */
struct GArrayElement36
{
    unsigned int Words[9];
};

struct GArrayData36
{
    enum
    {
        Capacity_Mask   = 0x3fffffff,
        Flag_NeverEmpty  = 0x40000000,
        Flag_NeverShrink = 0x80000000,
    };

    GArrayElement36* Data;
    unsigned int     Size;
    unsigned int     Policy;		// capacity in the low 30 bits, flags above

    void sub_01909bb0(unsigned int NewCapacity);
};

// @baa 0x01909bb0
void GArrayData36::sub_01909bb0(unsigned int NewCapacity)
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
        Data = (GArrayElement36*)sub_018d7160(Data, NewCapacity * sizeof(GArrayElement36));
    }
    else
    {
        unsigned int Bytes = NewCapacity * sizeof(GArrayElement36);
        Data = (GArrayElement36*)sub_018d7150(Bytes);
        memset(Data, 0, Bytes);
    }
}

struct GStringData
{
    char Header[0xc];		// refcount, size, hash
    char Data[1];
};

struct GString
{
    GStringData* pData;

    bool sub_0190a230(const struct GStringKey& Key) const;
};

struct GStringKey
{
    const GString* pStr;
};

// @baa 0x0190a230
bool GString::sub_0190a230(const GStringKey& Key) const
{
    return strcmp(pData->Data, Key.pStr->pData->Data) == 0;
}
