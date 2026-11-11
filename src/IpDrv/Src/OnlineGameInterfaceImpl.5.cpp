// OnlineGameInterfaceImpl.cpp (part 5 of 5): 9 functions
// Placed here by: class 8.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x00e38380
INT UOnlineGameInterfaceImpl::vf_15c() {
  return 0xffffffff;
}

// @baa 0x00e38390
INT UOnlineGameInterfaceImpl::vf_160() {
  return 0xffffffff;
}

// @baa 0x00e383a0
INT UOnlineGameInterfaceImpl::vf_164() {
  return 0xffffffff;
}

// @baa 0x00e383b0
void UOnlineGameInterfaceImpl::vf_168(int a0) {  }

// @baa 0x00e383c0
void UOnlineGameInterfaceImpl::vf_16c(void) {  }

// @baa 0x00e383d0
void UOnlineGameInterfaceImpl::vf_170(void) {  }

// @baa 0x00e383e0
void UOnlineGameInterfaceImpl::vf_174(void) {  }

// @baa 0x00e383f0
IMPLEMENT_CLASS_AT(UOnlineGameInterfaceImpl, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\IpDrv\\Src\\OnlineGameInterfaceImpl.cpp", 9);

struct Result { const char* Data; int Size; };

struct Reader { int Unknown[2]; char* Buffer; int Unknown2; int Offset; void sub_00e2a3b0(Result* Out); };

// @baa 0x00e2a3b0
void Reader::sub_00e2a3b0(Result* Out)
{
    Out->Size = *(int*)(Buffer + Offset);
    Out->Data = Buffer + Offset + 4;
}
