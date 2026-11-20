// UnSequence.cpp (part 9 of 10): 4 functions
// Placed here by: neighbours 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

#include "ue3/Script.h"

// @baa 0x008e7fa0
INT USeqCond_SwitchBase::GetSupportedValueCount() const
{
	PURE_VIRTUAL(USeqCond_SwitchBase::GetSupportedValueCount, return 0;);
}

// @baa 0x008b1840
INT USeqCond_SwitchObject::GetSupportedValueCount() const
{
	return SupportedValues.Num();
}

// @baa 0x008b1850
INT USeqCond_SwitchName::GetSupportedValueCount() const
{
	return SupportedValues.Num();
}

// @baa 0x008b1860
INT USeqCond_SwitchClass::GetSupportedValueCount() const
{
	return ClassArray.Num();
}
