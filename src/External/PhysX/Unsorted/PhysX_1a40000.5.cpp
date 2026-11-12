// PhysX_1a40000.cpp: 3 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/PhysX.h"

// PhysX's NxSoftBody, as the game's build exposes it: slot 37 (0x94) takes an INT.
// The placeholder _slot_094() in PhysX.h is 0-arg, so the real signature is declared here.
#define S(n) virtual void _slot_##n() { }
class NxSoftBodyGame
{
	S(000) S(004) S(008) S(00c) S(010) S(014) S(018) S(01c) S(020) S(024) S(028) S(02c) S(030)
	S(034) S(038) S(03c) S(040) S(044) S(048) S(04c) S(050) S(054) S(058) S(05c) S(060) S(064)
	S(068) S(06c) S(070) S(074) S(078) S(07c) S(080) S(084) S(088) S(08c) S(090)
#undef S
public:
	virtual void PhysxSlot094(INT Value) { } // 0x94
};

// NxdSoftBody wrapper: the PhysX object lives at 0x08; slot 37 (0x94) of its vtable
// forwards one INT to the PhysX object and returns it.
#define T(n) virtual void _slot_##n() { }
struct NxdSoftBody_
{
	int            _flags;   // 0x04
	NxSoftBodyGame *SoftBody; // 0x08

	T(000) T(004) T(008) T(00c) T(010) T(014) T(018) T(01c) T(020) T(024) T(028) T(02c) T(030)
	T(034) T(038) T(03c) T(040) T(044) T(048) T(04c) T(050) T(054) T(058) T(05c) T(060) T(064)
	T(068) T(06c) T(070) T(074) T(078) T(07c) T(080) T(084) T(088) T(08c) T(090)
#undef T
	virtual INT sub_01a45240(INT Value); // 0x94
};

// @baa 0x01a45240
INT NxdSoftBody_::sub_01a45240(INT Value)
{
	SoftBody->PhysxSlot094(Value);
	return Value;
}

// The object held at +0x8 of the sim holder is polymorphic; its vtable entry at
// 0x8c (slot 35) applies a scalar to it. The 35 earlier slots are unknown here.
struct SClothSim_
{
#define P(n) virtual void _p_##n() = 0;
    P(0x00) P(0x04) P(0x08) P(0x0c) P(0x10) P(0x14) P(0x18) P(0x1c)
    P(0x20) P(0x24) P(0x28) P(0x2c) P(0x30) P(0x34) P(0x38) P(0x3c)
    P(0x40) P(0x44) P(0x48) P(0x4c) P(0x50) P(0x54) P(0x58) P(0x5c)
    P(0x60) P(0x64) P(0x68) P(0x6c) P(0x70) P(0x74) P(0x78) P(0x7c)
    P(0x80) P(0x84) P(0x88)
#undef P
    virtual void ApplyImpulse(INT Value) = 0;      // 0x8c
};

class NxClothSimHolder
{
	INT _Flags;
	INT _Pad;
	SClothSim_* _Sim;                               // offset 0x8
public:
	INT sub_01a45220(INT Value);
};

// @baa 0x01a45220
// 0x01a45220
INT __declspec(noinline) NxClothSimHolder::sub_01a45220(INT Value)
{
	_Sim->ApplyImpulse(Value);
	return Value;
}

int s01a5_call(NxClothSimHolder* H, int A)
{
	return H->sub_01a45220(A);
}

// The game's NxdCloth subclass keeps an embedded PhysX object at offset 0x8 whose vtable
// slot 42 (0xa8) this method forwards its argument to.
struct NxClothBase {
#define S(n) virtual void _slot_##n(int) = 0;
    S(000) S(004) S(008) S(00c) S(010) S(014) S(018) S(01c) S(020) S(024) S(028) S(02c)
    S(030) S(034) S(038) S(03c) S(040) S(044) S(048) S(04c) S(050) S(054) S(058) S(05c)
    S(060) S(064) S(068) S(06c) S(070) S(074) S(078) S(07c) S(080) S(084) S(088) S(08c)
    S(090) S(094) S(098) S(09c) S(0a0) S(0a4) S(0a8)
};

// NxdCloth's own layout, from the offsets this method provably reads.
struct NxdCloth_ {
    int Pad0;             // +0x0
    int Pad4;             // +0x4
    NxClothBase* NxData;  // +0x8
    int sub_01a491c0(int InValue); /* 0x01a491c0 */
};

// @baa 0x01a491c0
int NxdCloth_::sub_01a491c0(int InValue)
{
    NxData->_slot_0a8(InValue);
    return InValue;
}
