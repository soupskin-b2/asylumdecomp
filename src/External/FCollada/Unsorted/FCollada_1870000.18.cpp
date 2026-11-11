// FCollada_1870000.cpp (part 18 of 24): 1 function
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct FCDocument {
    virtual int vf_0(UBOOL b); // 0x00
    virtual void sub_01876750(); // 0x04
    void sub_01876700();
};

// @baa 0x01876750
void FCDocument::sub_01876750()
{
    sub_01876700();
    if (this != NULL)
        vf_0(1);
}
