// TcpNetDriver.cpp: 21 functions
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

// @baa 0x00e2b9d0

// @baa 0x00e2bae0
int UTcpNetDriver::vf_000(void) { return 1; }

// @baa 0x00e2baf0
bool UTcpNetDriver::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

struct C_00e2bc90 { int sub_00e2bc90(void); };

// @baa 0x00e2bc90
int C_00e2bc90::sub_00e2bc90(void) { return *(int*)((char*)this + 284); }

struct C_00e2bca0 { int sub_00e2bca0(void); };

// @baa 0x00e2bca0
int C_00e2bca0::sub_00e2bca0(void) { return *(int*)((char*)this + 280); }

extern int __stdcall sub_018d354a(int First, int Second);
struct UTcpipConnection_ : public UTcpipConnection {
    bool sub_00e2be70(int Second);
};

// @baa 0x00e2be70
bool UTcpipConnection_::sub_00e2be70(int Second)
{
    int First = *(int*)((char*)this + 8);
    return sub_018d354a(First, Second) == 0;
}

// @baa 0x00e2c240
int __stdcall sub_00e2c240(int a0) { return 1; }

int sub_00e2b5a0(void);
int sub_00e40a80(...);
extern undefined4 g_026cacf8;
// @baa 0x00e40c90
int sub_00e40c90(void)
{
  if (g_026cacf8 == 0) {
    g_026cacf8 = sub_00e40a80(L"IpDrv");
    sub_00e2b5a0();
  }
  return g_026cacf8;
}

struct C_00e40d10 {
    void sub_00e40d10();
};

int __stdcall sub_018d3520(int);
// @baa 0x00e40d10
void C_00e40d10::sub_00e40d10(void)
{
    int param_1 = (int)this;
  sub_018d3520(*(undefined4 *)(param_1 + 0x4fbc));
  return;
}
