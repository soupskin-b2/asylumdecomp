// FCollada_1870000.cpp (part 24 of 24): 20 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct FCDocument {
    virtual int vf_0(UBOOL b); // 0x00
    virtual void sub_0187ffc0(); // 0x04
    void sub_01854290();
};

// @baa 0x0187ffc0
void FCDocument::sub_0187ffc0()
{
    sub_01854290();
    if (this != NULL)
        vf_0(1);
}

// @baa 0x01875000
// A Collada FArchiveXML member: forward a stack value into the subobject
// stored at offset 0x30, then raise the flag bit at offset 0x18.
struct C_01875000 {
    int head[6];      // 0x00 .. 0x18
    int Flags_0x18;   // 0x18
    int pad_0x1c[5];  // 0x1c .. 0x2c
    // Subobject at offset 0x30.
    struct C_01818e80 {
        int sub_01818ec0(int* Value);
    } Sub_0x30;

    void sub_01875000(int Value);
};

// @baa 0x01875000
void C_01875000::sub_01875000(int Value)
{
    Sub_0x30.sub_01818ec0(&Value);
    Flags_0x18 |= 1;
}

// FCollada string-like object: capacity at +0x4, length at +0x8.
struct FColladaStringLike_
{
	int Capacity;
	int Length;
};

struct FColladaStringLike_2 : FColladaStringLike_
{
	// Zeroes the length (resets the string).
	void sub_01826370();
	// Appends a null-terminated string.
	int sub_01827850(const char* Str);
	// Resets, then appends: assigns the string.
	void sub_0187a180(const char* Str);
};

// @baa 0x0187a180
void FColladaStringLike_2::sub_0187a180(const char* Str)
{
	sub_01826370();
	sub_01827850(Str);
}

struct C
{
    INT Value_00;
    INT Value_04;

    C* sub_01871770(INT* Source);
};

// @baa 0x01871770
C* C::sub_01871770(INT* Source)
{
    Value_04 = *Source;
    return this;
}

struct C_018717b0
{
    INT Value_00;
    INT Value_04;

    C_018717b0* sub_018717b0(INT* Source);
};

// @baa 0x018717b0
C_018717b0* C_018717b0::sub_018717b0(INT* Source)
{
    Value_04 = *Source;
    return this;
}

struct C_01873230
{
    INT Value_00;
    INT Value_04;

    C_01873230* sub_01873230(INT* Source);
};

// @baa 0x01873230
C_01873230* C_01873230::sub_01873230(INT* Source)
{
    Value_04 = *Source;
    return this;
}

extern "C" __declspec(dllimport) void __stdcall InitializeCriticalSection(void* Section);
struct C_01874f60
{
    C_01874f60* sub_01874f60();
};

// @baa 0x01874f60
C_01874f60* C_01874f60::sub_01874f60()
{
    InitializeCriticalSection(this);
    return this;
}

class FUTestSuiteFUUniqueStringMap
{
public:
    FUTestSuiteFUUniqueStringMap();

    virtual void vf_0();
};

extern FUTestSuiteFUUniqueStringMap* g_027b81e8;
// @baa 0x0187a110
FUTestSuiteFUUniqueStringMap::FUTestSuiteFUUniqueStringMap()
{
    g_027b81e8 = this;
}

class FUTestSuiteFUStringConversion
{
public:
    FUTestSuiteFUStringConversion();

    virtual void vf_0();
};

extern FUTestSuiteFUStringConversion* g_027b81ec;
// @baa 0x0187c280
FUTestSuiteFUStringConversion::FUTestSuiteFUStringConversion()
{
    g_027b81ec = this;
}

INT sub_0182b410(INT* Value);
// @baa 0x0187c2b0
INT sub_0187c2b0(INT Value)
{
    return sub_0182b410(&Value);
}

class FUTestSuiteFUStringBuilder
{
public:
    FUTestSuiteFUStringBuilder();

    virtual void vf_0();
};

extern FUTestSuiteFUStringBuilder* g_027b81f0;
// @baa 0x0187cfa0
FUTestSuiteFUStringBuilder::FUTestSuiteFUStringBuilder()
{
    g_027b81f0 = this;
}

struct C_0187cfe0
{
    INT pad_00;
    INT pad_04;
    UINT Count;

    void sub_0187cfe0();
};

// @baa 0x0187cfe0
void C_0187cfe0::sub_0187cfe0()
{
    if (Count > 0)
        Count--;
}

struct C_0187f360
{
    INT Value_00;
    INT Value_04;
    INT Value_08;
    INT Value_0c;
    INT Value_10;
    INT Value_14;

    C_0187f360* sub_0187f360();
};

// @baa 0x0187f360
C_0187f360* C_0187f360::sub_0187f360()
{
    Value_0c = 0;
    Value_10 = 0;
    Value_14 = 0;
    return this;
}

struct Object
{
    INT Value_00;
    INT Value_04;
};

struct C_018732c0
{
    INT Value_00;
    INT Value_04;

    C_018732c0* sub_018732c0(Object* Source);
};

// @baa 0x018732c0
C_018732c0* C_018732c0::sub_018732c0(Object* Source)
{
    Value_04 = Source->Value_04;
    return this;
}

struct Object_01877c50
{
    INT Value_00;
    float Value_04;
};

struct C_01877c50
{
    float Value_00;
    float Value_04;

    C_01877c50* sub_01877c50(Object_01877c50* Source);
};

// @baa 0x01877c50
C_01877c50* C_01877c50::sub_01877c50(Object_01877c50* Source)
{
    Value_04 = Source->Value_04;
    return this;
}

struct Object_01877c60
{
    INT Value_00;
    float Value_04;
};

struct C_01877c60
{
    float Value_00;
    float Value_04;

    C_01877c60* sub_01877c60(Object_01877c60* Source);
};

// @baa 0x01877c60
C_01877c60* C_01877c60::sub_01877c60(Object_01877c60* Source)
{
    Value_04 = Source->Value_04;
    return this;
}

struct Object_01877c70
{
    INT Value_00;
    float Value_04;
};

struct C_01877c70
{
    float Value_00;
    float Value_04;

    C_01877c70* sub_01877c70(Object_01877c70* Source);
};

// @baa 0x01877c70
C_01877c70* C_01877c70::sub_01877c70(Object_01877c70* Source)
{
    Value_04 = Source->Value_04;
    return this;
}

struct Object_01877c80
{
    INT Value_00;
    float Value_04;
};

struct C_01877c80
{
    float Value_00;
    float Value_04;

    C_01877c80* sub_01877c80(Object_01877c80* Source);
};

// @baa 0x01877c80
C_01877c80* C_01877c80::sub_01877c80(Object_01877c80* Source)
{
    Value_04 = Source->Value_04;
    return this;
}

struct Object_01877c90
{
    INT Value_00;
    float Value_04;
};

struct C_01877c90
{
    float Value_00;
    float Value_04;

    C_01877c90* sub_01877c90(Object_01877c90* Source);
};

// @baa 0x01877c90
C_01877c90* C_01877c90::sub_01877c90(Object_01877c90* Source)
{
    Value_04 = Source->Value_04;
    return this;
}

struct Object_01877ca0
{
    INT Value_00;
    float Value_04;
};

struct C_01877ca0
{
    float Value_00;
    float Value_04;

    C_01877ca0* sub_01877ca0(Object_01877ca0* Source);
};

// @baa 0x01877ca0
C_01877ca0* C_01877ca0::sub_01877ca0(Object_01877ca0* Source)
{
    Value_04 = Source->Value_04;
    return this;
}
