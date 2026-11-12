// UOnlineProfileSettings.cpp: 30 functions
// Placed here by: neighbours 21, class 6, callers 1, file 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

extern char g_020b50d8[];
// @baa 0x00d67060
int sub_00d67060(void) { return (int)g_020b50d8; }

int sub_005c7a20(void);
extern undefined * g_020b50f0;
// @baa 0x00d67070
undefined4 * UObject::sub_00d67070(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_020b50f0);
  return param_1;
}

// @baa 0x00d67090
IMPLEMENT_CLASS_AT(UOnlinePlaylistManager, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UOnlinePlaylistManager.cpp", 10);

// @baa 0x00d670f0
struct C {
    int sub_00d67110(int arg1);
};

// @baa 0x00d67110
int C::sub_00d67110(int arg1)
{
    return (int)this;
}

// @baa 0x00d67160
int sub_00d67160(int a0, int a1) { return a1; }

extern char g_020b51fc[];
struct C_00d67170 { void sub_00d67170(void); };

// @baa 0x00d67170
void C_00d67170::sub_00d67170(void) { *(int*)((char*)this + 0) = (int)g_020b51fc; }

int sub_0053dfa0(...);
// @baa 0x00d67180
undefined4 * UOnlinePlaylistManager::sub_00d67180(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_020b51fc);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

extern undefined * g_01f4d260;
// @baa 0x00d671a0
undefined4 * UObject::sub_00d671a0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01f4d260);
  return param_1;
}

// @baa 0x00d671c0
int sub_00d671c0(int a0, int a1) { return a1; }

// @baa 0x00d671d0
int sub_00d671d0(int a0, int a1) { return a1; }

extern char g_020b5204[];
// @baa 0x00d671e0
int sub_00d671e0(void) { return (int)g_020b5204; }

// @baa 0x00d671f0
int sub_00d671f0(int a0, int a1) { return a1; }

// @baa 0x00d67200
int sub_00d67200(void) { return (int)g_020b5204; }

// @baa 0x00d67210
int sub_00d67210(int a0, int a1) { return a1; }

struct C_00d67220 { int sub_00d67220(void); };

// @baa 0x00d67220
int C_00d67220::sub_00d67220(void) { return *(int*)((char*)this + 28); }

// @baa 0x00d67270
int sub_00d67270(int a0, int a1) { return a1; }

extern char g_020b5210[];
// @baa 0x00d67280
int sub_00d67280(void) { return (int)g_020b5210; }

// @baa 0x00d67290
int sub_00d67290(int a0, int a1) { return a1; }

// @baa 0x00d672a0
int sub_00d672a0(void) { return (int)g_020b5204; }

// @baa 0x00d672b0
// @baa 0x00d673e0
bool UOnlinePlaylistManager::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00d67420
IMPLEMENT_CLASS_AT(UOnlineProfileSettings, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UOnlineProfileSettings.cpp", 7);

// @baa 0x00d67530
int UOnlineProfileSettings::vf_000(void) { return 1; }

// @baa 0x00d67540
bool UOnlineProfileSettings::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00d88ba0
// @baa 0x00d88c40
// @baa 0x00d8aba0
// @baa 0x00d8ac90

struct F00d67250Record
{
		INT	First;
		INT	Second;
		DOUBLE Value;
		INT	Flags;
};

struct C_00d67250Record : F00d67250Record
{
		F00d67250Record* sub_00d67250();
};

// @baa 0x00d67250
F00d67250Record* C_00d67250Record::sub_00d67250()
{
		Flags |= 1;
		Value = 0.0;
		First = 0;
		Second = 0;
		return this;
}

struct C_00d67250Driver
{
		C_00d67250Record Record;
		void Run();
};

void C_00d67250Driver::Run()
{
		Record.sub_00d67250();
}

static void Use_00d67250()
{
		C_00d67250Driver Driver;
		Driver.Run();
}
