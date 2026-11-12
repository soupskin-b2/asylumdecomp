// GFx_1900000.cpp (part 6 of 6): 18 functions
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

// @baa 0x0190a570
INT __stdcall sub_0190a570(INT* Object)
{
    return *(INT*)(*Object + 0x10);
}

struct C
{
    INT pad_00;
    INT pad_04;
    INT pad_08;
    INT pad_0c;
    INT pad_10;
    INT Value;

    INT* sub_01903b00(INT* Out);
};

// @baa 0x01903b00
INT* C::sub_01903b00(INT* Out)
{
    *Out = Value;
    return Out;
}

struct C_01901680
{
    INT Value_00;
    INT Value_04;
    INT Value_08;
    INT Value_0c;

    C_01901680* sub_01901680();
};

// @baa 0x01901680
C_01901680* C_01901680::sub_01901680()
{
    Value_00 = 0;
    Value_04 = 0;
    Value_0c = 0;
    return this;
}

extern "C" __declspec(dllimport) long __stdcall InterlockedExchange(long volatile* Target, long Value);
struct C_019020a0
{
    long Counter;

    INT sub_019020a0(INT Value);
};

// @baa 0x019020a0
INT C_019020a0::sub_019020a0(INT Value)
{
    return InterlockedExchange(&Counter, Value);
}

struct C_019020b0
{
    long Counter;

    INT sub_019020b0(INT Value);
};

// @baa 0x019020b0
INT C_019020b0::sub_019020b0(INT Value)
{
    return InterlockedExchange(&Counter, Value);
}

struct C_019020c0
{
    long Counter;

    INT sub_019020c0(INT Value);
};

// @baa 0x019020c0
INT C_019020c0::sub_019020c0(INT Value)
{
    return InterlockedExchange(&Counter, Value);
}

struct Sub
{
    INT pad_00[3];
    INT Count;

    INT Value;
};

struct C_019035e0
{
    Sub* Object;

    C_019035e0* sub_019035e0(Sub* Value);
};

// @baa 0x019035e0
C_019035e0* C_019035e0::sub_019035e0(Sub* Value)
{
    Object = Value;
    Value->Count++;
    return this;
}

struct First
{
    INT Value_00;
    UINT Value_04;
};

struct C_01903ff0
{
    char pad_00[0x1c];
    First* Object;
    UINT Count;

    INT sub_01903ff0();
};

// @baa 0x01903ff0
INT C_01903ff0::sub_01903ff0()
{
    return Count >= Object->Value_04;
}

void __stdcall sub_01985b60(INT A, INT B);
// @baa 0x019040f0
void __stdcall sub_019040f0(INT Value)
{
    sub_01985b60(Value, 1);
}

struct C_01905750
{
    INT Value_00;
    BYTE Flag_04;

    C_01905750* sub_01905750(INT Value);
};

// @baa 0x01905750
C_01905750* C_01905750::sub_01905750(INT Value)
{
    Value_00 = Value;
    Flag_04 = 1;
    return this;
}

struct C_01905830
{
    void* Pointer;
    INT Count;
    char pad_08[8];

    C_01905830* sub_01905830();
};

// @baa 0x01905830
C_01905830* C_01905830::sub_01905830()
{
    Pointer = (void*)((char*)this + 8);
    Count = 0x200;
    return this;
}

struct Sub_01902b40
{
    void sub_018ffc00(void* A, INT B);
};

struct C_01902b40
{
    char pad_00[0x24];
    INT Value_24;
    Sub_01902b40* Object_28;

    void sub_01902b40();
};

// @baa 0x01902b40
void C_01902b40::sub_01902b40()
{
    Object_28->sub_018ffc00(this, Value_24);
}

struct Sub_01903610
{
    char pad_00[0xc];
    INT RefCount;

    void sub_01971650();
};

struct C_01903610
{
    Sub_01903610* Object;

    void sub_01903610();
};

// @baa 0x01903610
void C_01903610::sub_01903610()
{
    Sub_01903610* Object = this->Object;
    if (--Object->RefCount == 0)
        Object->sub_01971650();
}

struct Object
{
    char pad_00[0x4];
    INT Value;
};

// @baa 0x01904ed0
INT __stdcall sub_01904ed0(Object* Target, INT B)
{
    return Target->Value - B;
}
