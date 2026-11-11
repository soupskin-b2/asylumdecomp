// GFx_19b0000.cpp (part 13 of 14): 1 function
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct X {
    void sub_019be200();
};

struct GFxIMEManager {
    char pad[0x14];
    X* m_0x14;
    void sub_019be4f0();
};

// @baa 0x019be4f0
void GFxIMEManager::sub_019be4f0()
{
    m_0x14->sub_019be200();
}
