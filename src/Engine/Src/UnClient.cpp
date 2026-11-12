// UnClient.cpp: 48 functions
// Placed here by: neighbours 40, callers 1, file 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

extern char g_0205fc94[];
// @baa 0x00c96ad0
int sub_00c96ad0(void) { return (int)g_0205fc94; }

extern char g_01ebb554[];
struct C { void sub_00c96ae0(void); };

// @baa 0x00c96ae0
void C::sub_00c96ae0(void) { *(int*)((char*)this + 0) = (int)g_01ebb554; }

struct C_00c96af0 {
    undefined4 * sub_00c96af0(byte);
};

int sub_0053dfa0(...);
// @baa 0x00c96af0
undefined4 * C_00c96af0::sub_00c96af0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ebb554);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x00c96b10
void __stdcall sub_00c96b10(int a0) {  }

struct C_00c96b70 { char* sub_00c96b70(void); };

// @baa 0x00c96b70
char* C_00c96b70::sub_00c96b70(void) { return (char*)this + 4; }

extern char g_02085ed0[];
struct C_00c96b80 { C_00c96b80* sub_00c96b80(void); };

// @baa 0x00c96b80
C_00c96b80* C_00c96b80::sub_00c96b80(void) { *(int*)((char*)this + 0) = (int)g_02085ed0; return this; }

extern int g_02085ed4;
// A small two-dword value struct used by DecalComponent.cpp.
struct FDecalValue
{
    FDecalValue* sub_00c96b90(int* Src);
    int Value;  // 0x0
    int Unk04;  // 0x4
};

// @baa 0x00c96b90
FDecalValue* FDecalValue::sub_00c96b90(int* Src)
{
    Value = (int)&g_02085ed4;
    Unk04 = *Src;
    return this;
}

extern char g_020602a8[];
// @baa 0x00c96bc0
int sub_00c96bc0(void) { return (int)g_020602a8; }

extern int g_02085ee0;
// A small two-dword value struct used by DecalComponent.cpp.
struct FDecalValue_00c96bd0
{
    FDecalValue_00c96bd0* sub_00c96bd0(int* Src);
    int Value;  // 0x0
    int Unk04;  // 0x4
};

// @baa 0x00c96bd0
FDecalValue_00c96bd0* FDecalValue_00c96bd0::sub_00c96bd0(int* Src)
{
    Value = (int)&g_02085ee0;
    Unk04 = *Src;
    return this;
}

extern char g_020602d0[];
// @baa 0x00c96c10
int sub_00c96c10(void) { return (int)g_020602d0; }

struct C_00c96c20 { void sub_00c96c20(void); };

// @baa 0x00c96c20
void C_00c96c20::sub_00c96c20(void) { *(int*)((char*)this + 0) = (int)g_01ebb554; }

struct C_00c96c30 { void sub_00c96c30(void); };

// @baa 0x00c96c30
void C_00c96c30::sub_00c96c30(void) { *(int*)((char*)this + 0) = (int)g_01ebb554; }

struct C_00c96c40 {
    undefined4 * sub_00c96c40(byte);
};

// @baa 0x00c96c40
undefined4 * C_00c96c40::sub_00c96c40(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ebb554);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00c96c60 {
    undefined4 * sub_00c96c60(byte);
};

// @baa 0x00c96c60
undefined4 * C_00c96c60::sub_00c96c60(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ebb554);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

extern int g_02085eec;
// A small two-dword value struct used by DecalComponent.cpp.
struct FDecalValue_00c96cb0
{
    FDecalValue_00c96cb0* sub_00c96cb0(int* Src);
    int Value;  // 0x0
    int Unk04;  // 0x4
};

// @baa 0x00c96cb0
FDecalValue_00c96cb0* FDecalValue_00c96cb0::sub_00c96cb0(int* Src)
{
    Value = (int)&g_02085eec;
    Unk04 = *Src;
    return this;
}

extern char g_020608f4[];
// @baa 0x00c96ce0
int sub_00c96ce0(void) { return (int)g_020608f4; }

extern char g_0206091c[];
// @baa 0x00c96dd0
int sub_00c96dd0(void) { return (int)g_0206091c; }

struct C_00c96de0 { void sub_00c96de0(void); };

// @baa 0x00c96de0
void C_00c96de0::sub_00c96de0(void) { *(int*)((char*)this + 0) = (int)g_01ebb554; }

struct C_00c96df0 { void sub_00c96df0(void); };

// @baa 0x00c96df0
void C_00c96df0::sub_00c96df0(void) { *(int*)((char*)this + 0) = (int)g_01ebb554; }

struct C_00c96e00 {
    undefined4 * sub_00c96e00(byte);
};

// @baa 0x00c96e00
undefined4 * C_00c96e00::sub_00c96e00(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ebb554);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00c96e20 {
    undefined4 * sub_00c96e20(byte);
};

// @baa 0x00c96e20
undefined4 * C_00c96e20::sub_00c96e20(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ebb554);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

extern int g_02085f04;
// A small two-dword value struct used by DecalComponent.cpp.
struct FDecalValue_00c96e40
{
    FDecalValue_00c96e40* sub_00c96e40(int* Src);
    int Value;  // 0x0
    int Unk04;  // 0x4
};

// @baa 0x00c96e40
FDecalValue_00c96e40* FDecalValue_00c96e40::sub_00c96e40(int* Src)
{
    Value = (int)&g_02085f04;
    Unk04 = *Src;
    return this;
}

extern char g_02060fa4[];
// @baa 0x00c96e60
int sub_00c96e60(void) { return (int)g_02060fa4; }

extern int g_02085f10;
// A small two-dword value struct used by DecalComponent.cpp.
struct FDecalValue_00c96e70
{
    FDecalValue_00c96e70* sub_00c96e70(int* Src);
    int Value;  // 0x0
    int Unk04;  // 0x4
};

// @baa 0x00c96e70
FDecalValue_00c96e70* FDecalValue_00c96e70::sub_00c96e70(int* Src)
{
    Value = (int)&g_02085f10;
    Unk04 = *Src;
    return this;
}

extern char g_02060fcc[];
// @baa 0x00c96eb0
int sub_00c96eb0(void) { return (int)g_02060fcc; }

extern char g_02060ff0[];
// @baa 0x00c96f00
int sub_00c96f00(void) { return (int)g_02060ff0; }

struct C_00c96f10 { void sub_00c96f10(void); };

// @baa 0x00c96f10
void C_00c96f10::sub_00c96f10(void) { *(int*)((char*)this + 0) = (int)g_01ebb554; }

struct C_00c96f20 { void sub_00c96f20(void); };

// @baa 0x00c96f20
void C_00c96f20::sub_00c96f20(void) { *(int*)((char*)this + 0) = (int)g_01ebb554; }

struct C_00c96f30 { void sub_00c96f30(void); };

// @baa 0x00c96f30
void C_00c96f30::sub_00c96f30(void) { *(int*)((char*)this + 0) = (int)g_01ebb554; }

struct C_00c96f40 {
    undefined4 * sub_00c96f40(byte);
};

// @baa 0x00c96f40
undefined4 * C_00c96f40::sub_00c96f40(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ebb554);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00c96f60 {
    undefined4 * sub_00c96f60(byte);
};

// @baa 0x00c96f60
undefined4 * C_00c96f60::sub_00c96f60(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ebb554);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00c96f80 {
    undefined4 * sub_00c96f80(byte);
};

// @baa 0x00c96f80
undefined4 * C_00c96f80::sub_00c96f80(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ebb554);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00c970f0 { void sub_00c970f0(int a0); };

// @baa 0x00c970f0
void C_00c970f0::sub_00c970f0(int a0) { *(int*)((char*)this + 32) = a0; }

extern undefined4 g_025df37c;
extern undefined4 g_026c3cac;
// @baa 0x00c971f0
void sub_00c971f0(undefined4 param_1, undefined4 param_2)
{
  g_025df37c = param_1;
  g_026c3cac = param_2;
  return;
}

// @baa 0x00c97210
void sub_00c97210(void) {  }

// @baa 0x00c97220
int sub_00c97220(void) { return 0; }

// @baa 0x00cb2130
IMPLEMENT_CLASS_AT(UClient, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnClient.cpp", 10);

// @baa 0x00cb2930
struct C_00cc22c0 { int sub_00cc22c0(void); };

// @baa 0x00cc22c0
int C_00cc22c0::sub_00cc22c0(void) { return *(int*)((char*)this + 8); }

struct C_00cc22d0 { int sub_00cc22d0(void); };

// @baa 0x00cc22d0
int C_00cc22d0::sub_00cc22d0(void) { return *(int*)((char*)this + 12); }

struct A_00cc22e0 { virtual void sub_00cc22f0(); };

struct B_00cc22e0 { virtual void sub_00cc22f0(); };

struct C_00cc22e0 : A_00cc22e0, B_00cc22e0 { virtual void sub_00cc22f0(); C_00cc22e0(); };

C_00cc22e0::C_00cc22e0() {}

// @baa 0x00cc22e0
void C_00cc22e0::sub_00cc22f0() {}

struct C_00cc22f0 {
    undefined4 sub_00cc22f0(byte);
};

int sub_00cbf910(void);
// @baa 0x00cc22f0
undefined4 C_00cc22f0::sub_00cc22f0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00cbf910();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x00c96790

// @baa 0x00c968a0
int UClient::vf_000(void) { return 1; }

// @baa 0x00c968b0
bool UClient::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

extern int g_026667a8;
int __cdecl sub_00630f20(int Value, const wchar_t* Format, const wchar_t* Name);
struct UClient_ : public UClient
{
    INT sub_00cb5a80(INT A);
};

// @baa 0x00cb5a80
INT UClient_::sub_00cb5a80(INT A)
{
    return sub_00630f20(g_026667a8, L"Pure virtual not implemented (%s)", L"UClient::Tick");
}

int sub_00630f20(...);

// @baa 0x00cb5ac0
INT UClient::CreateViewport(INT X, INT Y, INT Width, INT Height, INT Style)
{
    sub_00630f20(g_026667a8, L"Pure virtual not implemented (%s)", L"UClient::CreateViewport");
    return 0;
}

extern void sub_00630f20(void* p, const wchar_t* fmt, const wchar_t* name);
// @baa 0x00cb5aa0
void UClient::AllowMessageProcessing(INT)
{
	sub_00630f20(g_026667a8, L"Pure virtual not implemented (%s)", L"UClient::AllowMessageProcessing");
}
