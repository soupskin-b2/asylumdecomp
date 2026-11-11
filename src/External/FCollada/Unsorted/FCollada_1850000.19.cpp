// FCollada_1850000.cpp (part 19 of 19): 1 function
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct FCDocument {
    virtual int vf_0(UBOOL b); // 0x00
    virtual void sub_0185c9a0(); // 0x04
    void sub_01876700();
};

// @baa 0x0185c9a0
void FCDocument::sub_0185c9a0()
{
    sub_01876700();
    if (this != NULL)
        vf_0(1);
}
