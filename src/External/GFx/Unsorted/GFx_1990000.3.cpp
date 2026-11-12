// GFx_1990000.cpp (part 3 of 3): 23 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct GASObjectInterface { BYTE sub_01990460(INT a, INT b); };

// @baa 0x01990460
BYTE GASObjectInterface::sub_01990460(INT a, INT b)
{
    return 0;
}

// GFx: tests bit 7 of a 16-bit flags field.
struct GFxFlagsOwner
{
    char           Header[0x28];
    unsigned short Flags;

    bool sub_01994080() const;
};

// @baa 0x01994080
bool GFxFlagsOwner::sub_01994080() const
{
    return (Flags & 0x80) != 0;
}

// @baa 0x019906c0
INT __stdcall sub_019906c0(INT* Object)
{
    return *(INT*)(*Object + 0x10);
}

// @baa 0x019906e0
INT __stdcall sub_019906e0(INT* Object)
{
    return *(INT*)(*Object + 0x10);
}

// @baa 0x019906f0
INT __stdcall sub_019906f0(INT* Object)
{
    return *(INT*)(*Object + 0x10);
}

// @baa 0x019999f0
INT __stdcall sub_019999f0(INT* Object)
{
    return *(INT*)(*Object + 0x10);
}

// @baa 0x01999a00
INT __stdcall sub_01999a00(INT* Object)
{
    return *(INT*)(*Object + 0x10);
}

// @baa 0x01999c00
INT __stdcall sub_01999c00(INT* Object)
{
    return *(INT*)(*Object + 0x10);
}

// @baa 0x01999c20
INT __stdcall sub_01999c20(INT* Object)
{
    return *(INT*)(*Object + 0x10);
}

// @baa 0x01999c30
INT __stdcall sub_01999c30(INT* Object)
{
    return *(INT*)(*Object + 0x10);
}

struct sub_01996850_T {
    int sub_019756d0(int Param);
};

// @baa 0x01996850
int sub_01996850(sub_01996850_T* A, int* B)
{
    if (A)
        return A->sub_019756d0(*B);
    return 0;
}

struct GFx_01996
{
    int sub_019756d0(int Value);
};

// @baa 0x01996830
int sub_01996830(GFx_01996* Self, int* Value)
{
    if (Self != 0)
    {
        int V = *Value;
        return Self->sub_019756d0(V);
    }
    return 0;
}

struct Sub019965a0Object
{
    int X;
    int Y;
    int Z;

    Sub019965a0Object* sub_019965a0(const Sub019965a0Object* Other)
    {
        *this = *Other;
        return this;
    }
};

// @baa 0x019965a0
Sub019965a0Object* Sub019965a0CopyInto(Sub019965a0Object* Dest, const Sub019965a0Object* Other)
{
    return Dest->sub_019965a0(Other);
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
    unsigned int   Value[4];
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

    int sub_01990af0(GFxHashedNode* const& Key, unsigned int HashValue) const;
};

// @baa 0x01990af0
int GFxNodeSet::sub_01990af0(GFxHashedNode* const& Key, unsigned int HashValue) const
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

struct GFxNodeSet_0199b110
{
    GFxNodeSetTable* pTable;

    int sub_0199b110(GFxHashedNode* const& Key, unsigned int HashValue) const;
};

// @baa 0x0199b110
int GFxNodeSet_0199b110::sub_0199b110(GFxHashedNode* const& Key, unsigned int HashValue) const
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

// GFx: hash-table iterator equality: two iterators past the end are equal, otherwise they must
// point at the same slot of the same table.
struct GFxHashTableData
{
    unsigned int EntryCount;
    unsigned int SizeMask;
};

struct GFxHashIterator
{
    GFxHashTableData** ppTable;
    unsigned int       Index;

    bool IsEnd() const
    {
        return ppTable == 0 || *ppTable == 0 || Index > (*ppTable)->SizeMask;
    }

    bool sub_01999640(const GFxHashIterator& Other) const;
};

// @baa 0x01999640
bool GFxHashIterator::sub_01999640(const GFxHashIterator& Other) const
{
    if (IsEnd() && Other.IsEnd())
        return true;
    return ppTable == Other.ppTable && Index == Other.Index;
}

struct GFxNodeSetEntry_01990b60
{
    int            NextInChain;		// -2 = empty slot, -1 = end of chain
    GFxHashedNode* Key;
    unsigned int   Value[7];
};

struct GFxNodeSetTable_01990b60
{
    unsigned int    EntryCount;
    unsigned int    SizeMask;
    GFxNodeSetEntry_01990b60 Entries[1];
};

struct GFxNodeSet_01990b60
{
    GFxNodeSetTable_01990b60* pTable;

    int sub_01990b60(GFxHashedNode* const& Key, unsigned int HashValue) const;
};

// @baa 0x01990b60
int GFxNodeSet_01990b60::sub_01990b60(GFxHashedNode* const& Key, unsigned int HashValue) const
{
    int Index = (int)HashValue;
    const GFxNodeSetEntry_01990b60* e = &pTable->Entries[Index];

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

// GFx: GHashSet::findIndexCore for a set of integer keys that hash to themselves, looked up through a
// pointer to the key:
// walks the collision chain that starts at the hashed slot and returns the matching slot, or -1.
struct GFxNodeSetEntry_0199bbc0
{
    int            NextInChain;		// -2 = empty slot, -1 = end of chain
    unsigned int   Key;
    unsigned int   Value[2];
};

struct GFxNodeSetTable_0199bbc0
{
    unsigned int    EntryCount;
    unsigned int    SizeMask;
    GFxNodeSetEntry_0199bbc0 Entries[1];
};

struct GFxNodeSet_0199bbc0
{
    GFxNodeSetTable_0199bbc0* pTable;

    int sub_0199bbc0(const unsigned int* const& pKey, unsigned int HashValue) const;
};

// @baa 0x0199bbc0
int GFxNodeSet_0199bbc0::sub_0199bbc0(const unsigned int* const& pKey, unsigned int HashValue) const
{
    int Index = (int)HashValue;
    const GFxNodeSetEntry_0199bbc0* e = &pTable->Entries[Index];

    if (e->NextInChain == -2 || (e->Key & pTable->SizeMask) != (unsigned int)Index)
        return -1;

    for (;;)
    {
        if ((e->Key & pTable->SizeMask) == HashValue && e->Key == *pKey)
            return Index;
        Index = e->NextInChain;
        if (Index == -1)
            break;
        e = &pTable->Entries[Index];
    }
    return -1;
}

// GFx: GHashSet::Clear for a map of ref-counted keys: destroys every occupied slot's value, releases its key,
// marks it empty, then frees the table.
void __stdcall sub_018d7170(void* Block);
			/* GMemory::Free */
struct GFxRefCountedValue
{
    char         Header[0xc];
    int          RefCount;

    void sub_01971650();					/* destroys the value */

    void Release()
    {
        if (--RefCount == 0)
            sub_01971650();
    }
};

struct GFxMapValue
{
    unsigned int Data[3];

    void sub_019722d0();					/* destructor */
};

struct GFxValueSetEntry
{
    int                 NextInChain;	// -2 = empty slot
    GFxRefCountedValue* Value;
    GFxMapValue         MapValue;
};

struct GFxValueSetTable
{
    unsigned int     EntryCount;
    unsigned int     SizeMask;
    GFxValueSetEntry Entries[1];
};

struct GFxValueSet
{
    GFxValueSetTable* pTable;

    void sub_0199b9f0();
};

// @baa 0x0199b9f0
void GFxValueSet::sub_0199b9f0()
{
    if (pTable)
    {
        unsigned int SizeMask = pTable->SizeMask;
        for (unsigned int i = 0; i <= SizeMask; i++)
        {
            GFxValueSetEntry* e = &pTable->Entries[i];
            if (e->NextInChain != -2)
            {
                e->MapValue.sub_019722d0();
                e->Value->Release();
                e->NextInChain = -2;
            }
        }
        sub_018d7170(pTable);
        pTable = 0;
    }
}

struct GFxNodeSetEntry_0199b180
{
    int            NextInChain;		// -2 = empty slot, -1 = end of chain
    GFxHashedNode* Key;
    unsigned int   Value[3];
};

struct GFxNodeSetTable_0199b180
{
    unsigned int    EntryCount;
    unsigned int    SizeMask;
    GFxNodeSetEntry_0199b180 Entries[1];
};

struct GFxNodeSet_0199b180
{
    GFxNodeSetTable_0199b180* pTable;

    int sub_0199b180(GFxHashedNode* const& Key, unsigned int HashValue) const;
};

// @baa 0x0199b180
int GFxNodeSet_0199b180::sub_0199b180(GFxHashedNode* const& Key, unsigned int HashValue) const
{
    int Index = (int)HashValue;
    const GFxNodeSetEntry_0199b180* e = &pTable->Entries[Index];

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

struct GFxNodeMapEntry
{
    int            NextInChain;		// -2 = empty slot, -1 = end of chain
    GFxHashedNode* Key;
    unsigned int   Value[4];

    bool IsEmpty() const { return NextInChain == -2; }
    bool IsEndOfChain() const { return NextInChain == -1; }
    unsigned int GetCachedHash(unsigned int SizeMask) const { return Key->HashValue & SizeMask; }

    void sub_0190bcf0();					/* Clear */
    GFxNodeMapEntry* sub_01990630(const GFxNodeMapEntry& Other);	/* copy-construct in place */
};

struct GFxNodeMapTable
{
    unsigned int    EntryCount;
    unsigned int    SizeMask;
    GFxNodeMapEntry Entries[1];
};

struct GFxNodeMap
{
    GFxNodeMapTable* pTable;

    GFxNodeMapEntry& E(int Index) { return pTable->Entries[Index]; }

    void sub_01990d50(GFxHashedNode* const& Key);
};

// @baa 0x01990d50
void GFxNodeMap::sub_01990d50(GFxHashedNode* const& Key)
{
    if (pTable == 0)
        return;

    int Index = (int)(Key->HashValue & pTable->SizeMask);
    GFxNodeMapEntry* e = &E(Index);

    if (e->IsEmpty() || e->GetCachedHash(pTable->SizeMask) != (unsigned int)Index)
        return;

    int NaturalIndex = Index;
    int PrevIndex = -1;

    while (e->GetCachedHash(pTable->SizeMask) != (unsigned int)NaturalIndex || e->Key != Key)
    {
        PrevIndex = Index;
        Index = e->NextInChain;
        if (Index == -1)
            return;
        e = &E(Index);
    }

    if (NaturalIndex == Index)
    {
        if (!e->IsEndOfChain())
        {
            GFxNodeMapEntry* pNext = &E(e->NextInChain);
            e->sub_0190bcf0();
            e->sub_01990630(*pNext);
            e = pNext;
        }
    }
    else
    {
        E(PrevIndex).NextInChain = e->NextInChain;
    }

    e->sub_0190bcf0();
    pTable->EntryCount--;
}

struct GFxNodeMap36Entry
{
    int            NextInChain;		// -2 = empty slot, -1 = end of chain
    GFxHashedNode* Key;
    unsigned int   Value[7];

    bool IsEmpty() const { return NextInChain == -2; }
    bool IsEndOfChain() const { return NextInChain == -1; }
    unsigned int GetCachedHash(unsigned int SizeMask) const { return Key->HashValue & SizeMask; }

    void sub_0190ceb0();					/* Clear */
    GFxNodeMap36Entry* sub_01990940(const GFxNodeMap36Entry& Other);	/* copy-construct in place */
};

struct GFxNodeMap36Table
{
    unsigned int    EntryCount;
    unsigned int    SizeMask;
    GFxNodeMap36Entry Entries[1];
};

struct GFxNodeMap36
{
    GFxNodeMap36Table* pTable;

    GFxNodeMap36Entry& E(int Index) { return pTable->Entries[Index]; }

    void sub_01990e20(GFxHashedNode* const& Key);
};

// @baa 0x01990e20
void GFxNodeMap36::sub_01990e20(GFxHashedNode* const& Key)
{
    if (pTable == 0)
        return;

    int Index = (int)(Key->HashValue & pTable->SizeMask);
    GFxNodeMap36Entry* e = &E(Index);

    if (e->IsEmpty() || e->GetCachedHash(pTable->SizeMask) != (unsigned int)Index)
        return;

    int NaturalIndex = Index;
    int PrevIndex = -1;

    while (e->GetCachedHash(pTable->SizeMask) != (unsigned int)NaturalIndex || e->Key != Key)
    {
        PrevIndex = Index;
        Index = e->NextInChain;
        if (Index == -1)
            return;
        e = &E(Index);
    }

    if (NaturalIndex == Index)
    {
        if (!e->IsEndOfChain())
        {
            GFxNodeMap36Entry* pNext = &E(e->NextInChain);
            e->sub_0190ceb0();
            e->sub_01990940(*pNext);
            e = pNext;
        }
    }
    else
    {
        E(PrevIndex).NextInChain = e->NextInChain;
    }

    e->sub_0190ceb0();
    pTable->EntryCount--;
}

// GFx: GHashSet::RemoveAlt for a set of integer keys that hash to themselves:
// finds the key's entry in its collision chain and removes it, pulling the next entry of the chain
// into the natural slot when the removed entry was the chain's head.
struct GFxIntMapEntry
{
    int            NextInChain;		// -2 = empty slot, -1 = end of chain
    unsigned int   Key;
    unsigned int   Value[2];

    bool IsEmpty() const { return NextInChain == -2; }
    bool IsEndOfChain() const { return NextInChain == -1; }
    unsigned int GetCachedHash(unsigned int SizeMask) const { return Key & SizeMask; }

    void Clear() { NextInChain = -2; }
    GFxIntMapEntry* sub_01999980(const GFxIntMapEntry& Other);	/* copy-construct in place */
};

struct GFxIntMapTable
{
    unsigned int    EntryCount;
    unsigned int    SizeMask;
    GFxIntMapEntry Entries[1];
};

struct GFxIntMap
{
    GFxIntMapTable* pTable;

    GFxIntMapEntry& E(int Index) { return pTable->Entries[Index]; }

    void sub_0199caf0(const unsigned int& Key);
};

// @baa 0x0199caf0
void GFxIntMap::sub_0199caf0(const unsigned int& Key)
{
    if (pTable == 0)
        return;

    int Index = (int)(Key & pTable->SizeMask);
    GFxIntMapEntry* e = &E(Index);

    if (e->IsEmpty() || e->GetCachedHash(pTable->SizeMask) != (unsigned int)Index)
        return;

    int NaturalIndex = Index;
    int PrevIndex = -1;

    while (e->GetCachedHash(pTable->SizeMask) != (unsigned int)NaturalIndex || e->Key != Key)
    {
        PrevIndex = Index;
        Index = e->NextInChain;
        if (Index == -1)
            return;
        e = &E(Index);
    }

    if (NaturalIndex == Index)
    {
        if (!e->IsEndOfChain())
        {
            GFxIntMapEntry* pNext = &E(e->NextInChain);
            e->Clear();
            e->sub_01999980(*pNext);
            e = pNext;
        }
    }
    else
    {
        E(PrevIndex).NextInChain = e->NextInChain;
    }

    e->Clear();
    pTable->EntryCount--;
}
