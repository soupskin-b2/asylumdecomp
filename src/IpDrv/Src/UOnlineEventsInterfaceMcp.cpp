// UOnlineEventsInterfaceMcp.cpp: 24 functions
// Placed here by: neighbours 14, class 6, callers 1, file 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x00e2c7e0
int UOnlineEventsInterfaceMcp::vf_000(void) { return 1; }

struct C {
    undefined4 * sub_00e2e640(byte);
};

int sub_0053dfa0(...);
extern undefined * g_01e72a60;
// @baa 0x00e2e640
undefined4 * C::sub_00e2e640(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01e72a60);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

typedef uint size_t;

struct C_00e2e660 {
    void sub_00e2e660(void *, size_t);
    int sub_0040cf70(int);
};

void * sub_01a375f0(void *, void *, size_t);
// @baa 0x00e2e660
void C_00e2e660::sub_00e2e660(void * param_2, size_t param_3)
{
    int param_1 = (int)this;
  if ((param_2 != (void *)0x0) && (param_3 != 0)) {
    ((C_00e2e660 *)(((char *)this + 0xb4)))->sub_0040cf70(param_3);
    sub_01a375f0(*(void **)(param_1 + 0xb4),param_2,param_3);
  }
  return;
}

struct C_00e323e0 {
    int sub_00e323e0(undefined4);
    int sub_005685f0(int);
};

// @baa 0x00e323e0
int C_00e323e0::sub_00e323e0(undefined4 param_2)
{
    int param_1 = (int)this;
  ((C_00e323e0 *)(this))->sub_005685f0(param_2);
  *(undefined4 *)(param_1 + 0xc) = 0;
  return param_1;
}

// @baa 0x00e3a3e0
IMPLEMENT_CLASS_AT(UOnlineEventsInterfaceMcp, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\IpDrv\\Src\\UOnlineEventsInterfaceMcp.cpp", 9);

// @baa 0x00e3a4f0
bool UOnlineEventsInterfaceMcp::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00e3cf10
// @baa 0x00e3cfa0
int sub_00e34780(void);
extern undefined * g_020f52fc;
extern undefined * g_020f5318;
// @baa 0x00e3cfc0
undefined4 * UMCPBase::sub_00e3cfc0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_00e34780();
  *param_1 = (undefined4)(&g_020f5318);
  param_1[0xc] = (undefined4)(&g_020f52fc);
  return param_1;
}

struct A_00e3cfe0 { virtual void sub_00e3d070(); char pad[44]; };

struct B_00e3cfe0 { virtual void sub_00e3d070(); };

struct C_00e3cfe0 : A_00e3cfe0, B_00e3cfe0 { virtual void sub_00e3d070(); C_00e3cfe0(); };

C_00e3cfe0::C_00e3cfe0() {}

// @baa 0x00e3cfe0
void C_00e3cfe0::sub_00e3d070() {}

// @baa 0x00e3cff0
IMPLEMENT_CLASS_AT(UOnlineNewsInterfaceMcp, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\IpDrv\\Src\\UOnlineNewsInterfaceMcp.cpp", 10);

// @baa 0x00e3d070
extern undefined * g_020f5428;
extern undefined * g_020f5440;
// @baa 0x00e3d090
undefined4 * UMCPBase::sub_00e3d090(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_00e34780();
  *param_1 = (undefined4)(&g_020f5440);
  param_1[0xc] = (undefined4)(&g_020f5428);
  return param_1;
}

struct A_00e3d0b0 { virtual void sub_00e3d150(); char pad[44]; };

struct B_00e3d0b0 { virtual void sub_00e3d150(); };

struct C_00e3d0b0 : A_00e3d0b0, B_00e3d0b0 { virtual void sub_00e3d150(); C_00e3d0b0(); };

C_00e3d0b0::C_00e3d0b0() {}

// @baa 0x00e3d0b0
void C_00e3d0b0::sub_00e3d150() {}

// @baa 0x00e3d0c0
IMPLEMENT_CLASS_AT(UOnlineTitleFileDownloadMcp, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\IpDrv\\Src\\UOnlineTitleFileDownloadMcp.cpp", 9);

// @baa 0x00e3d150
struct M_00e3d170 { void sub_00e3b1e0(); };

struct C_00e3d170 { char pad[4]; M_00e3d170 m; void sub_00e3d170(); };

// @baa 0x00e3d170
void C_00e3d170::sub_00e3d170() { m.sub_00e3b1e0(); }

// @baa 0x00e3e470
// @baa 0x00e3e490
// @baa 0x00e3e4b0
struct C_00e3e4f0 {
    void sub_00e3e4f0(undefined4);
    int sub_00e3d480(int, int, int);
};

// @baa 0x00e3e4f0
void C_00e3e4f0::sub_00e3e4f0(undefined4 param_2)
{
    int param_1 = (int)this;
  ((C_00e3e4f0 *)(this))->sub_00e3d480(param_2, param_1 + 200, 0);
  return;
}

// @baa 0x00e3e510

struct UOnlineEventsInterfaceMcp_ : public UOnlineEventsInterfaceMcp {
    void sub_00e2c7f0(INT, INT);
};

// @baa 0x00e2c7f0
// @baa 0x00e2c7f0
void UOnlineEventsInterfaceMcp_::sub_00e2c7f0(INT A, INT B)
{
    vf_11c(0, A, B);
}

struct C_00e3d180 {
    void sub_00e3d180(INT, INT);
};

class UObject_00e3e4d0 : public UObject {
public:
    void sub_00e3e4d0(INT A, INT B, INT C, INT D);
};

// @baa 0x00e3e4d0
void UObject_00e3e4d0::sub_00e3e4d0(INT A, INT B, INT C, INT D)
{
    if (Class)
        ((C_00e3d180 *)Class)->sub_00e3d180(C, D);
}
