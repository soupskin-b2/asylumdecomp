// FCollada_1850000.cpp (part 3 of 19): 1 function
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct FCDocument {
    virtual int vf_0(UBOOL b); // 0x00
    virtual void sub_01851860(); // 0x04
    void sub_01854290();
};

// @baa 0x01851860
void FCDocument::sub_01851860()
{
    sub_01854290();
    if (this != NULL)
        vf_0(1);
}
