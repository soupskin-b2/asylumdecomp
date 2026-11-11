// FCDAnimated.cpp (part 1 of 3): 1 function
// Placed here by: neighbours 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct FCDocument {
    virtual int vf_0(UBOOL b); // 0x00
    virtual void sub_018316a0(); // 0x04
    void sub_01854290();
};

// @baa 0x018316a0
void FCDocument::sub_018316a0()
{
    sub_01854290();
    if (this != NULL)
        vf_0(1);
}
