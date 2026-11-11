// GFx_19b0000.cpp (part 14 of 14): 3 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct X {
    void sub_019be330();
};

struct GFxIMEManager {
    char pad[0x14];
    X* m_0x14;
    void sub_019be500();
};

// @baa 0x019be500
void GFxIMEManager::sub_019be500()
{
    m_0x14->sub_019be330();
}

// GFx: forwards to a method of a member of the referenced object.
struct GFxNamedItem
{
    void sub_018e45b0(const char* Name);
};

struct GFxItemData
{
    char         Header[0xc];
    GFxNamedItem Item;
};

struct GFxItemRef
{
    char         Header[0x14];
    GFxItemData* pData;

    void sub_019bc910(const char* Name);
};

// @baa 0x019bc910
void GFxItemRef::sub_019bc910(const char* Name)
{
    pData->Item.sub_018e45b0(Name);
}

// @baa 0x019b6db0
INT __stdcall sub_019b6db0(INT* Object)
{
    return *(INT*)(*Object + 8);
}
