// FCollada_1820000.cpp (part 4 of 6): 1 function
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct FCDocument {
    virtual int vf_0(UBOOL b); // 0x00
    virtual void sub_01825ba0(); // 0x04
    void sub_01854290();
};

// @baa 0x01825ba0
void FCDocument::sub_01825ba0()
{
    sub_01854290();
    if (this != NULL)
        vf_0(1);
}
