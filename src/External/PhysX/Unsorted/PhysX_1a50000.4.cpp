// PhysX_1a50000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

// NxdFluidEmitter.cpp
// 02409234: NxdFluidEmitter's vtable; sub_01a582c0 sits in slot 32 (offset 0x80) there.
// If bit 0x400 of the flags is set the method returns 0;
// otherwise it forwards to virtual slot 0x80 of the object held in _base.
struct NxdFluidEmitter_Base
{
#define NXD_SLOT(n) virtual void _slot_##n();
    NXD_SLOT(000) NXD_SLOT(004) NXD_SLOT(008) NXD_SLOT(00c) NXD_SLOT(010) NXD_SLOT(014) NXD_SLOT(018) NXD_SLOT(01c)
    NXD_SLOT(020) NXD_SLOT(024) NXD_SLOT(028) NXD_SLOT(02c) NXD_SLOT(030) NXD_SLOT(034) NXD_SLOT(038) NXD_SLOT(03c)
    NXD_SLOT(040) NXD_SLOT(044) NXD_SLOT(048) NXD_SLOT(04c) NXD_SLOT(050) NXD_SLOT(054) NXD_SLOT(058) NXD_SLOT(05c)
    NXD_SLOT(060) NXD_SLOT(064) NXD_SLOT(068) NXD_SLOT(06c) NXD_SLOT(070) NXD_SLOT(074) NXD_SLOT(078) NXD_SLOT(07c)
    virtual int _slot_080();
};

#undef NXD_SLOT
struct NxdFluidEmitter
{
    unsigned              _f_00;        // 0x00
    unsigned              _f_04;        // 0x04
    NxdFluidEmitter_Base* _base;        // 0x08
    unsigned              _f_0c;        // 0x0c
    unsigned              _f_10;        // 0x10
    unsigned              _flags;       // 0x14
    int sub_01a582c0();
};

// @baa 0x01a582c0
int NxdFluidEmitter::sub_01a582c0()
{
    if (_flags & 0x400)
        return 0;
    return _base->_slot_080();
}
