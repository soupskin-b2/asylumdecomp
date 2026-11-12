// GFx_19f0000.cpp: 1 function
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
