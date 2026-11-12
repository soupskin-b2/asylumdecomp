// GFx_1950000.cpp (part 3 of 3): 12 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

int __stdcall sub_018d7170(int);
// @baa 0x0195ccf0
void sub_0195ccf0(undefined4 param_1)
{
  sub_018d7170(param_1);
  return;
}

struct C
{
    INT pad_00;
    INT pad_04;
    INT pad_08;
    INT Value;

    INT* sub_0195b160(INT* Out);
};

// @baa 0x0195b160
INT* C::sub_0195b160(INT* Out)
{
    *Out = Value;
    return Out;
}

struct C_0195b000
{
    INT Value_00;
    INT Value_04;
    BYTE Flag_08;

    C_0195b000* sub_0195b000();
};

// @baa 0x0195b000
C_0195b000* C_0195b000::sub_0195b000()
{
    Value_00 = 0;
    Value_04 = 0;
    Flag_08 = 0;
    return this;
}

struct C_0195b060
{
    BYTE Value;

    C_0195b060* sub_0195b060(BYTE* Source);
};

// @baa 0x0195b060
C_0195b060* C_0195b060::sub_0195b060(BYTE* Source)
{
    Value = *Source;
    return this;
}

struct C_0195b600
{
    char pad_00[0x9b8];
    UINT Value;

    INT sub_0195b600();
};

// @baa 0x0195b600
INT C_0195b600::sub_0195b600()
{
    return Value > 0;
}

struct Sub
{
    void sub_0194ef20();
};

struct C_01951930
{
    INT Value_00;
    INT Value_04;
    char pad_08[4];
    Sub Marker;

    void sub_01951930();
};

// @baa 0x01951930
void C_01951930::sub_01951930()
{
    Value_04 = 4;
    ((Sub*)((char*)this + 0xc))->sub_0194ef20();
}

// @baa 0x0195a5e0
BYTE __cdecl sub_0195a5e0(BYTE A, BYTE B)
{
    return A < B ? A : B;
}

struct C_0195b010
{
    void* Pointer;

    BYTE sub_0195b010(INT Index);
};

// @baa 0x0195b010
BYTE C_0195b010::sub_0195b010(INT Index)
{
    return ((BYTE*)*(void**)Pointer)[Index];
}

struct Sub_0195b670
{
    char pad_00[0xc];
    INT RefCount;

    void sub_01971650();
};

struct C_0195b670
{
    Sub_0195b670* Object;

    void sub_0195b670();
};

// @baa 0x0195b670
void C_0195b670::sub_0195b670()
{
    Sub_0195b670* Object = this->Object;
    if (--Object->RefCount == 0)
        Object->sub_01971650();
}

// @baa 0x0195a620
BYTE sub_0195a620(BYTE A, BYTE B, BYTE C)
{
    if (A >= C)
    {
        A = C;
    }
    if (A < B)
    {
        A = B;
    }
    return A;
}

// @baa 0x0195eca0
INT sub_0195eca0(INT Value, INT MinBound, INT MaxBound)
{
	if (Value >= MaxBound)
		Value = MaxBound;
	if (Value < MinBound)
		Value = MinBound;
	return Value;
}

// GFx: GHashSet::findIndexCore for a set keyed by node pointers whose hash is cached in the node:
// walks the collision chain that starts at the hashed slot and returns the matching slot, or -1.
struct GFxHashedNode
{
    char         Header[0x10];
    unsigned int HashValue;
};

struct GFxNodeSetEntry
{
    int            NextInChain;		// -2 = empty slot, -1 = end of chain
    GFxHashedNode* Key;
    void*          Value;
};

struct GFxNodeSetTable
{
    unsigned int    EntryCount;
    unsigned int    SizeMask;
    GFxNodeSetEntry Entries[1];
};

struct GFxNodeSet
{
    GFxNodeSetTable* pTable;

    int sub_01950080(GFxHashedNode* const& Key, unsigned int HashValue) const;
};

// @baa 0x01950080
int GFxNodeSet::sub_01950080(GFxHashedNode* const& Key, unsigned int HashValue) const
{
    int Index = (int)HashValue;
    const GFxNodeSetEntry* e = &pTable->Entries[Index];

    if (e->NextInChain == -2 || (e->Key->HashValue & pTable->SizeMask) != (unsigned int)Index)
        return -1;

    for (;;)
    {
        if ((e->Key->HashValue & pTable->SizeMask) == HashValue && e->Key == Key)
            return Index;
        Index = e->NextInChain;
        if (Index == -1)
            break;
        e = &pTable->Entries[Index];
    }
    return -1;
}
