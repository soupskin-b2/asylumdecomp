// FCollada_1820000.cpp (part 6 of 6): 2 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct FCDocument {
    virtual int vf_0(UBOOL b); // 0x00
    virtual void sub_01829c80(); // 0x04
    void sub_01854290();
};

// @baa 0x01829c80
void FCDocument::sub_01829c80()
{
    sub_01854290();
    if (this != NULL)
        vf_0(1);
}

// FUTracker - returns whether the passed tracker contains `this`.
// (slot 2 of FUTracker's vtable)
struct FUTracker
{
    unsigned char sub_01821810(FUTracker* Other);
    // sub_01854400: searches its own array of entries for Other, returns 1/0.
    unsigned char sub_01854400(FUTracker* Other);
};

// @baa 0x01821810
unsigned char FUTracker::sub_01821810(FUTracker* Other)
{
    if (Other)
        return Other->sub_01854400(this);
    return 0;
}
