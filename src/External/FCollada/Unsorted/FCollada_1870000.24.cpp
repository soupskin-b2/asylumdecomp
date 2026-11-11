// FCollada_1870000.cpp (part 24 of 24): 3 functions
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
