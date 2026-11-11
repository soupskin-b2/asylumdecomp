// UExporter.cpp (part 1 of 2): 12 functions
// Placed here by: neighbours 9, callers 2, file 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

struct C {
    void sub_005fda10(undefined4, undefined4);
};

// @baa 0x005fda10
void C::sub_005fda10(undefined4 param_2, undefined4 param_3)
{
    int * param_1 = (int *)this;

  (**(code **)(*param_1 + 0x10))(param_1,param_2,param_3);
  return;
}

// @baa 0x0060ec80
UExporter::UExporter()
{
    *(DWORD*)((BYTE*)this + 0x54) &= 0xfffffffd;
}

IMPLEMENT_CLASS_AT(UExporter, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Core\\Src\\UExporter.cpp", 36);
// @baa 0x0060f7d0
void sub_00616010();
// @baa 0x0061b570
void sub_0061b570(void) { sub_00616010(); }

void sub_00615d00();
// @baa 0x0061b580
void sub_0061b580(void) { sub_00615d00(); }

struct C_view {
    int sub_005dfd20(int);
};

int sub_0061a8d0(...);
// @baa 0x0061bae0
void UPackageMap::Serialize(FArchive& Ar)
{
    undefined4 param_2 = (undefined4)&Ar;
    int param_1 = (int)this;
  ((C_view *)(this))->sub_005dfd20(param_2);
  sub_0061a8d0(param_2,param_1 + 0x30);
  return;
}

struct C_0061bb00 { void sub_006171a0(int); C_0061bb00 *sub_0061bb00(int); };

// @baa 0x0061bb00
C_0061bb00 *C_0061bb00::sub_0061bb00(int a) { sub_006171a0(a); return this; }

void sub_0061bb20();
// @baa 0x0061bb80
void sub_0061bb80(void) { sub_0061bb20(); }

struct C_0061bb90 { void sub_00617d10(int); C_0061bb90 *sub_0061bb90(int); };

// @baa 0x0061bb90
C_0061bb90 *C_0061bb90::sub_0061bb90(int a) { sub_00617d10(a); return this; }

void sub_00617350();
// @baa 0x0061bbd0
void sub_0061bbd0(void) { sub_00617350(); }

int sub_0060dda0(void);
extern undefined2 g_025d6ac8;
extern undefined2 g_026a4b20;
// @baa 0x0061bc70
int UPackageMap::sub_0061bc70(void)
{
    int param_1 = (int)this;

  sub_0060dda0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined2 *)(param_1 + 0x3c) = g_026a4b20;
  *(undefined2 *)(param_1 + 0x3e) = g_025d6ac8;
  return param_1;
}

int sub_0053dfa0(...);
int sub_0061b180(void);
// @baa 0x0061bd50
undefined4 UHelpCommandlet::sub_0061bd50(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0061b180();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}
