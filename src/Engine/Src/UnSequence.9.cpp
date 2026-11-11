// UnSequence.cpp (part 9 of 10): 1 function
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
