// GFx_19f0000.cpp: 2 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
// GFx: true if two strings have the same characters.
#include <string.h>

struct GStringData
{
    char Header[0xc];		// refcount, size, hash
    char Data[1];
};

struct GString
{
    GStringData* pData;

    bool sub_019f1650(const GString& Other) const;
};

// @baa 0x019f1650
bool GString::sub_019f1650(const GString& Other) const
{
    return strcmp(pData->Data, Other.pData->Data) == 0;
}

int __stdcall sub_018e3f40(int pData, int Size, int Seed);
	/* GString_019f1c40::BernsteinHashFunction */
struct GStringData_019f1c40
{
    unsigned int Size;			// length; the top bit is a flag
    int          RefCount;
    unsigned int Hash;
    char         Data[1];
};

struct GString_019f1c40
{
    GStringData_019f1c40* pData;

    unsigned int GetSize() const { return pData->Size & 0x7fffffff; }
    const char* ToCStr() const { return pData->Data; }
    unsigned int GetHash() const { return (unsigned int)sub_018e3f40((int)ToCStr(), (int)GetSize(), 5381); }
};

struct GStringSetEntry
{
    int          NextInChain;		// -2 = empty slot, -1 = end of chain
    GString_019f1c40      Key;
    unsigned int Value[2];

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

    int sub_019f1c40(const GString_019f1c40& Key, unsigned int HashValue) const;
};

// @baa 0x019f1c40
int GStringSet::sub_019f1c40(const GString_019f1c40& Key, unsigned int HashValue) const
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
