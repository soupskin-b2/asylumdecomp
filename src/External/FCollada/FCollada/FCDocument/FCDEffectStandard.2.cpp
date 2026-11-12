// FCDEffectStandard.cpp (part 2 of 2): 4 functions
// Placed here by: neighbours 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct FCDObjectVector {
    unsigned int reserved;
    unsigned int sized;
    void** heapBuffer;

    void** begin() { return heapBuffer; }
    void** end() { return heapBuffer + sized; }
    void** find(void* const& value)
    {
        void** it = begin();
        void** last = end();
        for (; it != last; ++it)
            if (*it == value) break;
        return it;
    }
    void sub_018158b0(void** it);
    bool sub_01870890(void* value);
};

// @baa 0x01870890
bool FCDObjectVector::sub_01870890(void* value)
{
    void** it = find(value);
    if (it != end())
    {
        sub_018158b0(it);
        return true;
    }
    return false;
}

struct C
{
    char pad_00[0x18];
    volatile DWORD Flags;
    char pad_1c[0xc];
    INT State;

    void sub_018705f0();
};

// @baa 0x018705f0
void C::sub_018705f0()
{
    State = 4;
    Flags |= 1;
}

struct C_018705e0
{
    INT Value_00;
    INT Value_04;

    C_018705e0* sub_018705e0(INT* Source);
};

// @baa 0x018705e0
C_018705e0* C_018705e0::sub_018705e0(INT* Source)
{
    Value_04 = *Source;
    return this;
}

struct C_018706f0
{
    INT Value_00;
    INT Value_04;

    C_018706f0* sub_018706f0(INT* Source);
};

// @baa 0x018706f0
C_018706f0* C_018706f0::sub_018706f0(INT* Source)
{
    Value_04 = *Source;
    return this;
}
