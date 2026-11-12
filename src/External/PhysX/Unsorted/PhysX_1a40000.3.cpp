// PhysX_1a40000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Core.h"

// Interface object that NxdSoftBody delegates to; sub_01a44f20 sits at vtable slot 31 (offset 0x7c).
struct INxdSoftBody_
{
    virtual int pad00();
    virtual int pad01();
    virtual int pad02();
    virtual int pad03();
    virtual int pad04();
    virtual int pad05();
    virtual int pad06();
    virtual int pad07();
    virtual int pad08();
    virtual int pad09();
    virtual int pad10();
    virtual int pad11();
    virtual int pad12();
    virtual int pad13();
    virtual int pad14();
    virtual int pad15();
    virtual int pad16();
    virtual int pad17();
    virtual int pad18();
    virtual int pad19();
    virtual int pad20();
    virtual int pad21();
    virtual int pad22();
    virtual int pad23();
    virtual int pad24();
    virtual int pad25();
    virtual int pad26();
    virtual int pad27();
    virtual int pad28();
    virtual int pad29();
    virtual int pad30();
    virtual WORD sub_01a44f20();
};

// NxdSoftBody: this virtual method (slot 31 of its vtable) returns a cached value when the
// state flag is set, otherwise delegates to the implementation object at 0x8.
struct NxdSoftBody_
{
    void* vtable;                   /* 0x0 */
    DWORD unknown04;                /* 0x4 */
    INxdSoftBody_* impl;            /* 0x8 */
    char pad12[0xc];               /* 0xC */
    DWORD state;                    /* 0x18 */
    char pad1c[0x28];               /* 0x1C */
    WORD material_index;            /* 0x44 */
    WORD sub_01a44f20();
};

// @baa 0x01a44f20
WORD NxdSoftBody_::sub_01a44f20()
{
    if (state & 0x200)
        return material_index;
    return impl->sub_01a44f20();
}
