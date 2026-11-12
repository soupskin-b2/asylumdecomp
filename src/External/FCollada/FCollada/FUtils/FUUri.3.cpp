// FUUri.cpp: 2 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

INT sub_0182a710(INT* Value);
// @baa 0x01856e80
INT sub_01856e80(INT Value)
{
    return sub_0182a710(&Value);
}

// FUUri.cpp
// FUString helper: collapse a run of `Pattern` characters; returns the string
// so it can be chained in the caller's loop.
struct FUString_01857110
{
    // sub_00ed1850: internal FUString routine, thiscall with 3 stack args (ret 12)
    void sub_00ed1850(INT A, const wchar_t* Pattern, INT B);
};

// @baa 0x01857110
FUString_01857110* sub_01857110(FUString_01857110* S, const wchar_t* Pattern)
{
    S->sub_00ed1850(-1, Pattern, -1);
    return S;
}
