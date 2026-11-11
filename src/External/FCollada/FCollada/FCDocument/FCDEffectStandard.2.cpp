// FCDEffectStandard.cpp (part 2 of 2): 1 function
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
