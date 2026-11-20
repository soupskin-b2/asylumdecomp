// UnConn.cpp: 43 functions
// Placed here by: class 12, neighbours 11, callers 6, file 3.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Script.h"
#include "ue3/Implement.h"

struct C_00567880 { int sub_00567880(void); };
// @baa 0x00567880
int C_00567880::sub_00567880(void) { return *(int*)((char*)this + 140); }

void sub_004025d0(void*);
struct D { void* p; ~D(){ if(0) sub_004025d0(p);} };

void sub_0053dfa0(void*);
struct C { void* Data; int Num; int Max; void sub_00c066b0(); };

// @baa 0x00c066b0
void C::sub_00c066b0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

// @baa 0x00c1a190
class UChildConnection* UNetConnection::GetUChildConnection() { return 0; }

// @baa 0x00c1a1a0
INT UNetConnection::GetAddrAsInt() { return 0; }

// @baa 0x00c1a1b0
INT UNetConnection::GetAddrPort() { return 0; }

struct A_00c1a1c0 { virtual void sub_00c1a270(); char pad[80]; };

struct B_00c1a1c0 { virtual void sub_00c1a270(); };

struct C_00c1a1c0 : A_00c1a1c0, B_00c1a1c0 { virtual void sub_00c1a270(); C_00c1a1c0(); };

C_00c1a1c0::C_00c1a1c0() {}

// @baa 0x00c1a1c0
void C_00c1a1c0::sub_00c1a270() {}

int sub_005c7a70(...);
int sub_00c19ff0(void);
struct C_00c1a270 { undefined4 sub_00c1a270(byte param_2); };
// @baa 0x00c1a270
undefined4 C_00c1a270::sub_00c1a270(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00c19ff0();
  if ((param_2 & 1) != 0) {
    sub_005c7a70(param_1,0x4fb8);
  }
  return param_1;
}

int sub_00e135b0(void);
extern undefined4 g_02031d60;
extern undefined4 g_02031d70;
extern undefined * g_02031d78;
struct C_00c1a2a0 { undefined4 * sub_00c1a2a0(void); };
// @baa 0x00c1a2a0
undefined4 * C_00c1a2a0::sub_00c1a2a0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_00e135b0();
  *param_1 = (undefined4)(&g_02031d78);
  param_1[0xc] = (undefined4)(&g_02031d70);
  param_1[0x15] = (undefined4)(&g_02031d60);
  param_1[0x30] = 0x200;
  param_1[0x32] = 1;
  return param_1;
}

// @baa 0x00df3e20
void __stdcall sub_00df3e20(int a0) {  }

// @baa 0x00df3e30
IMPLEMENT_CLASS_AT(UNetConnection, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnConn.cpp", 791);

// @baa 0x00df3f40
UBOOL UNetConnection::HasUniqueStaticConfigName() const { return 1; }

// @baa 0x00df3f50
UBOOL UNetConnection::HasParentClassChanged() const
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00df3f90
IMPLEMENT_CLASS_AT(UChildConnection, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnConn.cpp", 792);

// @baa 0x00df40a0
UBOOL UChildConnection::HasUniqueStaticConfigName() const { return 1; }

struct T_00dff3c0;
// @baa 0x00dff3c0
template INT TArray<T_00dff3c0*>::RemoveItem(T_00dff3c0* const&);

struct C_00e02b90 { int a, b, c; C_00e02b90(); };

// @baa 0x00e02b90
C_00e02b90::C_00e02b90() : a(0), b(0), c(0) {}

struct C_00e0c0f0 {
    int sub_00e0c0f0(int);
    int sub_00e04f50(int, int);
};

// @baa 0x00e0c0f0
int C_00e0c0f0::sub_00e0c0f0(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  ((C_00e0c0f0 *)(this))->sub_00e04f50((int)(&param_2), param_2);
  if ((param_2 != -1) && (iVar1 = *param_1 + param_2 * 0x14, iVar1 != 0)) {
    return iVar1 + 8;
  }
  return 0;
}

// @baa 0x00e14b60
IMPLEMENT_CLASS_AT(UGuidCache, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnConn.cpp", 148);

int sub_00e14ae0(void);
struct C_00e14b70 { undefined4 sub_00e14b70(byte param_2); };
// @baa 0x00e14b70
undefined4 C_00e14b70::sub_00e14b70(byte param_2)
{
    undefined4 param_1 = (undefined4)this;
  sub_00e14ae0();
  if ((param_2 & 1) != 0) {
    sub_005c7a70(param_1,0x78);
  }
  return param_1;
}

// @baa 0x00e14b90
extern undefined4 g_020e436c;
extern undefined4 g_020e437c;
extern undefined * g_020e4380;
struct C_00e14ba0 { undefined4 * sub_00e14ba0(void); };
// @baa 0x00e14ba0
undefined4 * C_00e14ba0::sub_00e14ba0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_00e135b0();
  *param_1 = (undefined4)(&g_020e4380);
  param_1[0xc] = (undefined4)(&g_020e437c);
  param_1[0x15] = (undefined4)(&g_020e436c);
  return param_1;
}

// @baa 0x00e14bc0
class UChildConnection* UChildConnection::GetUChildConnection() { return this; }

// @baa 0x00e14bd0
void UChildConnection::LowLevelSend(void* a0, INT a1) {  }

struct A_00e14c40 { virtual void sub_00e14d20(); char pad[80]; };

struct B_00e14c40 { virtual void sub_00e14d20(); };

struct C_00e14c40 : A_00e14c40, B_00e14c40 { virtual void sub_00e14d20(); C_00e14c40(); };

C_00e14c40::C_00e14c40() {}

// @baa 0x00e14c40
void C_00e14c40::sub_00e14d20() {}

// @baa 0x00e14cb0
// @baa 0x00e14d20
// @baa 0x00e14d50
int sub_00e08f00(void);
struct C_00e14e10 { int sub_00e14e10(void); };
// @baa 0x00e14e10
int C_00e14e10::sub_00e14e10(void)
{
    int param_1 = (int)this;

  sub_00e08f00();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x00e15df0
// @baa 0x00e15e20
// @baa 0x00e16780
int sub_005e1960(...);
int sub_00e15fa0(...);
int sub_00e16840(void);
extern undefined4 g_026667a8;
extern undefined4 g_026c5ed8;
// @baa 0x00e16b70
void sub_00e16b70(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6)
{
  if (g_026c5ed8 == 0) {
    g_026c5ed8 = sub_00e15fa0(L"Engine");
    sub_00e16840();
  }
  sub_005e1960(g_026c5ed8,param_2,param_3,param_4,param_5,param_6,0,g_026667a8,0,0,0);
  return;
}

// @baa 0x00c1a250
void UNetConnection::LowLevelSend(void* Data, INT Count) PURE_VIRTUAL(UNetConnection::LowLevelSend,)

// @baa 0x00e14c30
void UChildConnection::Tick()
{
    State = Parent->State;
}

// @baa 0x00df3930

// @baa 0x00df3a40
UBOOL UGuidCache::HasUniqueStaticConfigName() const { return 1; }

// @baa 0x00df3a50
UBOOL UGuidCache::HasParentClassChanged() const
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00e16fe0
UBOOL UChildConnection::HasParentClassChanged() const
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// UChildConnection: forwards net calls to the connection it was split from (Parent).

// @baa 0x00e14be0
void UChildConnection::InitOut()
{
	Parent->InitOut();
}

// @baa 0x00e14c10
void UChildConnection::FlushNet()
{
	Parent->FlushNet();
}

// @baa 0x00e14c20
INT UChildConnection::IsNetReady(UBOOL Saturate)
{
	return Parent->IsNetReady(Saturate);
}

// @baa 0x00e14c50
FString UChildConnection::LowLevelGetRemoteAddress()
{
	return Parent->LowLevelGetRemoteAddress();
}

// @baa 0x00e14c80
FString UChildConnection::LowLevelDescribe()
{
	return Parent->LowLevelDescribe();
}

// @baa 0x00e14bf0
void UChildConnection::AssertValid()
{
	Parent->AssertValid();
}

// @baa 0x00df3cd0
/* last in the file: the checks carry the engine's file and lines */
void UNetConnection::AssertValid()
{
#line 493 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnConn.cpp"
	check(ProtocolVersion>=MIN_PROTOCOL_VERSION);
	check(ProtocolVersion<=MAX_PROTOCOL_VERSION);
	check(State==USOCK_Closed || State==USOCK_Pending || State==USOCK_Open);
}
