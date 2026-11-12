// UnSequence.cpp (part 9 of 10): 4 functions
// Placed here by: neighbours 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

int sub_00630f20(...);
extern undefined4 g_026667a8;
struct USeqCond_SwitchBase {
    undefined4 GetSupportedValueCount();
};

// @baa 0x008e7fa0
undefined4 USeqCond_SwitchBase::GetSupportedValueCount()
{
  sub_00630f20(g_026667a8,L"Pure virtual not implemented (%s)",
               L"USeqCond_SwitchBase::GetSupportedValueCount");
  return 0;
}

// Engine_08b0000.cpp (part 2 of 2): 4 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
struct USeqCond_SwitchObject { int GetSupportedValueCount(void); };

// @baa 0x008b1840
int USeqCond_SwitchObject::GetSupportedValueCount(void) { return *(int*)((char*)this + 192); }

struct USeqCond_SwitchName { int GetSupportedValueCount(void); };

// @baa 0x008b1850
int USeqCond_SwitchName::GetSupportedValueCount(void) { return *(int*)((char*)this + 192); }

struct USeqCond_SwitchClass { int GetSupportedValueCount(void); };

// @baa 0x008b1860
int USeqCond_SwitchClass::GetSupportedValueCount(void) { return *(int*)((char*)this + 192); }
