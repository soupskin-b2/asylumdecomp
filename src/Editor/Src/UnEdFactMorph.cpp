// UnEdFactMorph.cpp: 4 functions
// Placed here by: callers 3, neighbours 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

// @baa 0x00834cd0
int sub_00834cd0(int param_1, int param_2)
{
  return (uint)*(ushort *)(param_1 + 0x10) - (uint)*(ushort *)(param_2 + 0x10);
}

struct C { C* sub_00834cf0(void); };

// @baa 0x00834cf0
C* C::sub_00834cf0(void) { *(int*)((char*)this + 12) = 0; return this; }

// @baa 0x00834d00
int __stdcall sub_00834d00(int a0) { return 1; }

// A 20-byte (five INT) element used throughout this array.
struct FElement20
{
    INT Unk00; // 0x00
    INT Unk04; // 0x04
    INT Unk08; // 0x08
    INT Unk0C; // 0x0c
    INT Unk10; // 0x10
};

// Growable array of FElement20 (the engine's 12-byte TArray layout:
// data pointer, count, capacity).
struct FTwentyByteArray
{
    FElement20* Data;     // 0x00
    INT ArrayNum;         // 0x04
    INT ArrayMax;         // 0x08

    // Appends a copy of Item, growing capacity as needed; returns the new element's index.
    INT Add(const FElement20* Item);
};

// Grows a buffer for NewNum elements of ElementSize given an old capacity of OldMax.
extern "C" INT sub_0053d240(INT NewNum, INT OldMax, INT ElementSize);
// Reallocates Buffer to Size bytes with the given alignment.
extern "C" FElement20* sub_0053df70(FElement20* Buffer, INT Size, INT Alignment);
// @baa 0x0083ca10
INT FTwentyByteArray::Add(const FElement20* Item)
{
    INT Index = ArrayNum;
    INT NewNum = Index + 1;
    ArrayNum = NewNum;
    if (NewNum > ArrayMax)
    {
        INT NewCapacity = sub_0053d240(NewNum, ArrayMax, (INT)sizeof(FElement20));
        ArrayMax = NewCapacity;
        if (Data != 0 || NewCapacity != 0)
        {
            Data = sub_0053df70(Data, NewCapacity * (INT)sizeof(FElement20), 8);
        }
    }

    FElement20* Slot = Data + Index;
    if (Slot != 0)
    {
        *Slot = *Item;
    }

    return Index;
}
