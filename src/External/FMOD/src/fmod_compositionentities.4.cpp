// fmod_compositionentities.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

extern char g_023e0944[];
class MusicStateCondition {
    int vtable_;   // 0x00
    int unused1_;  // 0x04
    int unused2_;  // 0x08
    int flag_;     // 0x0c
    int unused3_;  // 0x10
    int unused4_;  // 0x14
    int value1_;   // 0x18
    int value2_;   // 0x1c
public:
    MusicStateCondition * sub_017f89a0();
};

// @baa 0x017f89a0
MusicStateCondition * MusicStateCondition::sub_017f89a0()
{
    flag_ = 1;
    vtable_ = (int)g_023e0944;
    value1_ = 0;
    value2_ = 0;
    return this;
}
