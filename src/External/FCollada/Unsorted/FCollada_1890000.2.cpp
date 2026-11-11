// FCollada_1890000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

// sub_0189c600: two thiscall forwarders on the same object.
struct C_0189c600 {
    // @baa 0x01826370: void __thiscall (void)
    void sub_01826370();

    // @baa 0x01829750: void __thiscall (int)
    void sub_01829750(int Value);

    // @baa 0x0189c600
    void sub_0189c600(int Value);
};

// @baa 0x0189c600
void C_0189c600::sub_0189c600(int Value)
{
    sub_01826370();
    sub_01829750(Value);
}
