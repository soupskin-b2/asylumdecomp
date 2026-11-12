// FCDEffectTools.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct FcVector3 {
    FLOAT f0, f4, f8;
    FcVector3(const FcVector3& v);
};

// @baa 0x018411a0
FcVector3::FcVector3(const FcVector3& v)
{
    f0 = v.f0;
    f4 = v.f4;
    f8 = v.f8;
}
