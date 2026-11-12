// PhysX_1a30000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/PhysX.h"

// NxdScene.cpp
// The PhysX kernel behind the game's NxdScene wrapper; only the slot used by
// sub_01a39380 is named, the rest are placeholders.
struct NxdKernel
{
#define NXD_SLOT(n) virtual void _slot_##n();
    NXD_SLOT(000) NXD_SLOT(004) NXD_SLOT(008) NXD_SLOT(00c) NXD_SLOT(010) NXD_SLOT(014) NXD_SLOT(018) NXD_SLOT(01c)
    NXD_SLOT(020) NXD_SLOT(024) NXD_SLOT(028) NXD_SLOT(02c) NXD_SLOT(030) NXD_SLOT(034) NXD_SLOT(038) NXD_SLOT(03c)
    NXD_SLOT(040) NXD_SLOT(044) NXD_SLOT(048) NXD_SLOT(04c) NXD_SLOT(050) NXD_SLOT(054) NXD_SLOT(058) NXD_SLOT(05c)
    NXD_SLOT(060) NXD_SLOT(064) NXD_SLOT(068) NXD_SLOT(06c) NXD_SLOT(070) NXD_SLOT(074) NXD_SLOT(078) NXD_SLOT(07c)
    NXD_SLOT(080) NXD_SLOT(084) NXD_SLOT(088) NXD_SLOT(08c) NXD_SLOT(090) NXD_SLOT(094) NXD_SLOT(098) NXD_SLOT(09c)
    NXD_SLOT(0a0) NXD_SLOT(0a4) NXD_SLOT(0a8) NXD_SLOT(0ac) NXD_SLOT(0b0) NXD_SLOT(0b4) NXD_SLOT(0b8) NXD_SLOT(0bc)
    NXD_SLOT(0c0) NXD_SLOT(0c4) NXD_SLOT(0c8) NXD_SLOT(0cc) NXD_SLOT(0d0) NXD_SLOT(0d4) NXD_SLOT(0d8) NXD_SLOT(0dc)
    NXD_SLOT(0e0) NXD_SLOT(0e4) NXD_SLOT(0e8) NXD_SLOT(0ec) NXD_SLOT(0f0) NXD_SLOT(0f4)
    virtual void _slot_0f8(void* arg);
};

#undef NXD_SLOT
// 02405e6c: NxdScene's vtable, where sub_01a39380 sits (slot 62).
struct NxdScene
{
    char _base[0x10];
    NxdKernel* _kernel;
    void* sub_01a39380(void* arg);
};

// @baa 0x01a39380
void* NxdScene::sub_01a39380(void* arg)
{
    _kernel->_slot_0f8(arg);
    return arg;
}
