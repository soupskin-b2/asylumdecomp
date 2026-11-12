// GFx_1960000.cpp: 2 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
// GFx: GHashSet::findIndexCore for a set of GStrings looked up by a key that refers to a GString:
// walks the collision chain that starts at the hashed slot and returns the matching slot, or -1.
#include <string.h>

int __stdcall sub_018e3f40(int pData, int Size, int Seed);
	/* GString::BernsteinHashFunction */
struct GStringData
{
    unsigned int Size;			// length; the top bit is a flag
    int          RefCount;
    unsigned int Hash;
    char         Data[1];
};

struct GString
{
    GStringData* pData;

    unsigned int GetSize() const { return pData->Size & 0x7fffffff; }
    const char* ToCStr() const { return pData->Data; }
    unsigned int GetHash() const { return (unsigned int)sub_018e3f40((int)ToCStr(), (int)GetSize(), 5381); }
};

struct GStringKey
{
    const GString* pStr;
};

struct GStringSetEntry
{
    int          NextInChain;		// -2 = empty slot, -1 = end of chain
    GString      Key;
    unsigned int Value;

    bool IsEmpty() const { return NextInChain == -2; }
    unsigned int GetCachedHash(unsigned int SizeMask) const { return Key.GetHash() & SizeMask; }
};

struct GStringSetTable
{
    unsigned int    EntryCount;
    unsigned int    SizeMask;
    GStringSetEntry Entries[1];
};

struct GStringSet
{
    GStringSetTable* pTable;

    int sub_01963660(const GStringKey& Key, unsigned int HashValue) const;
};

// @baa 0x01963660
int GStringSet::sub_01963660(const GStringKey& Key, unsigned int HashValue) const
{
    int Index = (int)HashValue;
    const GStringSetEntry* e = &pTable->Entries[Index];

    if (e->IsEmpty() || e->GetCachedHash(pTable->SizeMask) != (unsigned int)Index)
        return -1;

    for (;;)
    {
        if (e->GetCachedHash(pTable->SizeMask) == HashValue && strcmp(e->Key.pData->Data, Key.pStr->pData->Data) == 0)
            return Index;
        Index = e->NextInChain;
        if (Index == -1)
            break;
        e = &pTable->Entries[Index];
    }
    return -1;
}

struct GStringSet_019629e0
{
    GStringSetTable* pTable;

    int sub_019629e0(const GString& Key, unsigned int HashValue) const;
};

// @baa 0x019629e0
int GStringSet_019629e0::sub_019629e0(const GString& Key, unsigned int HashValue) const
{
    int Index = (int)HashValue;
    const GStringSetEntry* e = &pTable->Entries[Index];

    if (e->IsEmpty() || e->GetCachedHash(pTable->SizeMask) != (unsigned int)Index)
        return -1;

    for (;;)
    {
        if (e->GetCachedHash(pTable->SizeMask) == HashValue && strcmp(e->Key.pData->Data, Key.pData->Data) == 0)
            return Index;
        Index = e->NextInChain;
        if (Index == -1)
            break;
        e = &pTable->Entries[Index];
    }
    return -1;
}
