// FMOD_17b0000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

// FMOD::ChannelReal is not in the shared headers; its vtable slot names are
// unknown, so the earlier slots stay placeholders. sub_017bca13 is vtable slot 19
// and, while the channel's system object is live, forwards the current gain to
// the virtual slot 20.
// The channel's system object; the gain lives at offset 0xd4.
struct FmodChannelSystem
{
    char Data[0xd4];
    float m_Gain;   // 0xd4
};

struct FmodChannelReal
{
    virtual void sub_v00();
    virtual void sub_v01();
    virtual void sub_v02();
    virtual void sub_v03();
    virtual void sub_v04();
    virtual void sub_v05();
    virtual void sub_v06();
    virtual void sub_v07();
    virtual void sub_v08();
    virtual void sub_v09();
    virtual void sub_v10();
    virtual void sub_v11();
    virtual void sub_v12();
    virtual void sub_v13();
    virtual void sub_v14();
    virtual void sub_v15();
    virtual void sub_v16();
    virtual void sub_v17();
    virtual void sub_v18();
    virtual void sub_017bca13(int, int, int);      // slot 19 (this function)
    virtual void sub_v20(float x);                 // slot 20, offset 0x50
    char Data04[12];                                // 0x04-0x0c
    FmodChannelSystem* m_System;                    // 0x10
};

// @baa 0x017bca13
void FmodChannelReal::sub_017bca13(int a, int b, int c)
{
    if (m_System)
        sub_v20(m_System->m_Gain);
}
