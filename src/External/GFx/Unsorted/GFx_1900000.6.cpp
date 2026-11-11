// GFx_1900000.cpp (part 6 of 6): 4 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct GFxCharacter {
    virtual BYTE v00();
    virtual BYTE v01();
    virtual BYTE v02();
    virtual BYTE v03();
    virtual BYTE v04();
    virtual BYTE v05();
    virtual BYTE v06();
    virtual BYTE v07();
    virtual BYTE v08();
    virtual BYTE v09();
    virtual BYTE v10();
    virtual BYTE v11();
    virtual BYTE v12();
    virtual BYTE v13();
    virtual BYTE v14();
    virtual BYTE v15();
    virtual BYTE v16();
    virtual BYTE v17();
    virtual BYTE v18();
    virtual BYTE v19();
    virtual BYTE v20();
    virtual BYTE v21();
    virtual BYTE v22();
    virtual BYTE v23();
    virtual BYTE v24();
    virtual BYTE v25();
    virtual BYTE v26();
    virtual BYTE sub_01904670(DWORD arg);
    virtual BYTE v28();
    virtual BYTE v29();
    virtual BYTE v30();
    virtual BYTE v31();
    virtual BYTE v32();
    virtual BYTE sub_01904880(DWORD arg);
};

// @baa 0x01904880
BYTE GFxCharacter::sub_01904880(DWORD arg)
{
    return this->sub_01904670(arg);
}

struct GFxASCharacter {
    unsigned char sub_019049d0(int param1);
};

// @baa 0x019049d0
unsigned char GFxASCharacter::sub_019049d0(int param1) {
    return 0;
}

// GFx: tests bit 7 of a 16-bit flags field.
struct GFxFlagsOwner
{
    char           Header[0x50];
    unsigned short Flags;

    bool sub_019043d0() const;
};

// @baa 0x019043d0
bool GFxFlagsOwner::sub_019043d0() const
{
    return (Flags & 0x80) != 0;
}

// GFx: hash functor that returns the hash value stored in the key's node.
struct GFxKeyNode
{
    char         Header[0x10];
    unsigned int HashValue;
};

struct GFxKey
{
    GFxKeyNode* pNode;
};

struct GFxKeyHashFunctor
{
    unsigned int sub_01903740(const GFxKey& Key) const;
};

// @baa 0x01903740
unsigned int GFxKeyHashFunctor::sub_01903740(const GFxKey& Key) const
{
    return Key.pNode->HashValue;
}
