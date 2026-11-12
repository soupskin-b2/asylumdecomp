// Engine_1a50000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct sub_01a5f670 {
    float A;
    float B;
    float C;
    sub_01a5f670* Init(float X, float Y, float Z);
    /* 0x01a5f670 */
};

// @baa 0x01a5f670
sub_01a5f670* sub_01a5f670::Init(float X, float Y, float Z)
{
    A = X;
    B = Y;
    C = Z;
    return this;
}
