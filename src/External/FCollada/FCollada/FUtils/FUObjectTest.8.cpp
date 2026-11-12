// FUObjectTest.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Core.h"

class FUTrackable
{
};

class FUObjectContainer_FUTrackableBase
{
public:
	FUObjectContainer_FUTrackableBase();

	INT Count;            // +4
	INT Reserved;         // +8
	FUTrackable* Next;    // +0xc  embedded head node
	FUTrackable** Head;   // +0x10 points at the head node
};

FUObjectContainer_FUTrackableBase::FUObjectContainer_FUTrackableBase()
{
	Count = 0;
	Reserved = 0;
	Next = 0;
	Head = &Next;
}

class FUObjectContainer_FUTrackable : public FUObjectContainer_FUTrackableBase
{
public:
	FUObjectContainer_FUTrackable();
	virtual ~FUObjectContainer_FUTrackable() { }
};

// @baa 0x01866ef0
FUObjectContainer_FUTrackable::FUObjectContainer_FUTrackable()
{
}
