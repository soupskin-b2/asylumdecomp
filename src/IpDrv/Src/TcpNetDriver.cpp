// TcpNetDriver.cpp: 12 functions
// Placed here by: neighbours 8, callers 2, file 2.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x00e2b700
IMPLEMENT_CLASS_AT(UTcpipConnection, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\IpDrv\\Src\\TcpNetDriver.cpp", 143);

// @baa 0x00e2b810
int UTcpipConnection::vf_000(void) { return 1; }

// @baa 0x00e2b820
bool UTcpipConnection::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00e2b890
int UTcpNetDriver::sub_00e2b890(void) { return *(int*)((char*)this + 68); }

// @baa 0x00e40f70
// @baa 0x00e40fc0
int sub_00e2b700(void);
int sub_00e40fc0(...);
extern undefined4 g_026cacfc;
// @baa 0x00e41080
int sub_00e41080(void)
{
  if (g_026cacfc == 0) {
    g_026cacfc = sub_00e40fc0(L"IpDrv");
    sub_00e2b700();
  }
  return g_026cacfc;
}

struct A_00e41100 { virtual void sub_00e41180(); char pad[48]; };

struct B_00e41100 { virtual void sub_00e41180(); };

struct C_00e41100 : A_00e41100, B_00e41100 { virtual void sub_00e41180(); C_00e41100(); };

C_00e41100::C_00e41100() {}

// @baa 0x00e41100
void C_00e41100::sub_00e41180() {}

// @baa 0x00e41110
IMPLEMENT_CLASS_AT(UTcpNetDriver, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\IpDrv\\Src\\TcpNetDriver.cpp", 423);

// @baa 0x00e41180
// @baa 0x00e41250
// @baa 0x00e415b0
