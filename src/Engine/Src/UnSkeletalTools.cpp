// UnSkeletalTools.cpp (part 1 of 3): 82 functions
// Placed here by: neighbours 64, callers 9, class 6.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

struct C {
    void sub_00849240(int);
};

int sub_0053df70(...);
// @baa 0x00849240
void C::sub_00849240(int param_2)
{
    int * param_1 = (int *)this;

  int iVar1;
  
  param_1[1] = 0;
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if ((*param_1 != 0) || (param_2 != 0)) {
      iVar1 = sub_0053df70(*param_1,param_2 * 4,8);
      *param_1 = iVar1;
    }
  }
  return;
}

// @baa 0x00943b60
int USkeletalMeshSocket::sub_00943b60(void) { return *(int*)((char*)this + 40); }

// @baa 0x00943b70
int USkeletalMeshSocket::sub_00943b70(void) { return *(int*)((char*)this + 44); }

// @baa 0x00943b80
int USkeletalMeshSocket::sub_00943b80(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 0x2c) + *(int *)(param_1 + 0x28);
}

// @baa 0x00943b90
int USkeletalMeshSocket::sub_00943b90(void) { return *(int*)((char*)this + 0); }

// @baa 0x00943ba0
int USkeletalMeshSocket::sub_00943ba0(void)
{
    int * param_1 = (int *)this;

  return param_1[10] + *param_1;
}

extern char g_01f86aa4[];
// @baa 0x00943bf0
void USkeletalMeshSocket::sub_00943bf0(void) { *(int*)((char*)this + 0) = (int)g_01f86aa4; }

int sub_0053dfa0(...);
// @baa 0x00943c00
undefined4 * USkeletalMeshSocket::sub_00943c00(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01f86aa4);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00943c20 {
    int sub_00943c20(int);
};

// @baa 0x00943c20
int C_00943c20::sub_00943c20(int param_2)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 0x2c) * param_2 + *(int *)(param_1 + 0x28);
}

struct C_00943c30 {
    int sub_00943c30(int);
};

// @baa 0x00943c30
int C_00943c30::sub_00943c30(int param_2)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 0x2c) * param_2 + *(int *)(param_1 + 0x28);
}

struct C_00943c40 { int sub_00943c40(void); };

// @baa 0x00943c40
int C_00943c40::sub_00943c40(void) { return *(int*)((char*)this + 28); }

struct C_00943c50 { void sub_00943c50(int a0); };

// @baa 0x00943c50
void C_00943c50::sub_00943c50(int a0) { *(int*)((char*)this + 28) = a0; }

struct C_00943c60 { int sub_00943c60(void); };

// @baa 0x00943c60
int C_00943c60::sub_00943c60(void) { return *(int*)((char*)this + 48); }

struct C_00943c70 { int sub_00943c70(void); };

// @baa 0x00943c70
int C_00943c70::sub_00943c70(void) { return *(int*)((char*)this + 44); }

int sub_0056bf90(void);
extern undefined * g_01f86ac0;
// @baa 0x00943cf0
undefined4 * UTexture2D::sub_00943cf0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_0056bf90();
  *param_1 = (undefined4)(&g_01f86ac0);
  return param_1;
}

void sub_00581450();
// @baa 0x00943d10
void sub_00943d10(void) { sub_00581450(); }

// @baa 0x00943d40
int sub_00943d40(int a0, int a1) { return a1; }

// @baa 0x00943d70
int __stdcall sub_00943d70(int a0) { return 0; }

// @baa 0x00943d80
int __stdcall sub_00943d80(int a0) { return 1; }

struct C_00943d90 { char* sub_00943d90(void); };

// @baa 0x00943d90
char* C_00943d90::sub_00943d90(void) { return (char*)this + 16; }

struct C_00943da0 { char* sub_00943da0(void); };

// @baa 0x00943da0
char* C_00943da0::sub_00943da0(void) { return (char*)this + 80; }

struct FMatrix44 {
    void sub_00649c70(FMatrix44* Out);
    float M[4][4];
};

struct FBone {
    float Unk00; // 0x00
    float Unk04; // 0x04
    float Unk08; // 0x08
    float Unk0C; // 0x0c
    FMatrix44 Matrix; // 0x10
    FMatrix44* sub_00943db0(FMatrix44* Out);
};

// @baa 0x00943db0
FMatrix44* FBone::sub_00943db0(FMatrix44* Out)
{
    Matrix.sub_00649c70(Out);
    return Out;
}

struct M_00943dd0 { void sub_00649b30(); };

struct C_00943dd0 { char pad[16]; M_00943dd0 m; void sub_00943dd0(); };

// @baa 0x00943dd0
void C_00943dd0::sub_00943dd0() { m.sub_00649b30(); }

struct C_00943de0 { int a, b; C_00943de0(int, int); };

// @baa 0x00943de0
C_00943de0::C_00943de0(int x, int y) : a(x), b(y) {}

extern char g_01f86ad4[];
struct C_00943e30 { void sub_00943e30(void); };

// @baa 0x00943e30
void C_00943e30::sub_00943e30(void) { *(int*)((char*)this + 0) = (int)g_01f86ad4; }

struct C_00943e40 {
    undefined4 * sub_00943e40(byte);
};

// @baa 0x00943e40
undefined4 * C_00943e40::sub_00943e40(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01f86ad4);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00943e60 {
    int sub_00943e60(int);
};

// @baa 0x00943e60
int C_00943e60::sub_00943e60(int param_2)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 0x24) * param_2 + *(int *)(param_1 + 0x20);
}

struct C_00943e70 {
    int sub_00943e70(int);
};

// @baa 0x00943e70
int C_00943e70::sub_00943e70(int param_2)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 0x24) * param_2 + *(int *)(param_1 + 0x20);
}

struct C_00943e80 {
    int sub_00943e80(int);
};

// @baa 0x00943e80
int C_00943e80::sub_00943e80(int param_2)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 0x24) * param_2 + 4 + *(int *)(param_1 + 0x20);
}

struct C_00943ea0 {
    int sub_00943ea0(int);
};

// @baa 0x00943ea0
int C_00943ea0::sub_00943ea0(int param_2)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 0x24) * param_2 + 4 + *(int *)(param_1 + 0x20);
}

struct C_00943ec0 {
    int sub_00943ec0(int);
};

// @baa 0x00943ec0
int C_00943ec0::sub_00943ec0(int param_2)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 0x24) * param_2 + 8 + *(int *)(param_1 + 0x20);
}

struct C_00943ee0 { int sub_00943ee0(void); };

// @baa 0x00943ee0
int C_00943ee0::sub_00943ee0(void) { return *(int*)((char*)this + 40); }

struct C_00943ef0 { int sub_00943ef0(void); };

// @baa 0x00943ef0
int C_00943ef0::sub_00943ef0(void) { return *(int*)((char*)this + 28); }

struct C_00943f00 {
    undefined4 sub_00943f00();
};

int sub_006311e0(...);
extern undefined2 g_01e3f3dc;
// @baa 0x00943f00
undefined4 C_00943f00::sub_00943f00(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 0x20) == 0) {
    sub_006311e0("Data != NULL",
                 "e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\engine\\inc\\UnStaticMesh.h"
                 ,0x1fc,&g_01e3f3dc);
  }
  return *(undefined4 *)(param_1 + 0x20);
}

struct C_00943f50 {
    int sub_00943f50(int);
};

// @baa 0x00943f50
int C_00943f50::sub_00943f50(int param_2)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 0x20) * param_2 + *(int *)(param_1 + 0x1c);
}

struct C_00943f60 { int sub_00943f60(void); };

// @baa 0x00943f60
int C_00943f60::sub_00943f60(void) { return *(int*)((char*)this + 32); }

// @baa 0x00943fa0
int sub_00943fa0(int a0, int a1) { return a1; }

// @baa 0x00943fb0
int sub_00943fb0(int a0, int a1) { return a1; }

// @baa 0x00943fc0
int sub_00943fc0(int a0, int a1) { return a1; }

// @baa 0x00943fd0
int sub_00943fd0(int a0, int a1) { return a1; }

int sub_00c6c5f0(...);
int sub_00c78520(void);
extern undefined4 g_026c2bc0;
// @baa 0x00943fe0
int sub_00943fe0(void)
{
  if (g_026c2bc0 == 0) {
    g_026c2bc0 = sub_00c6c5f0(L"Engine");
    sub_00c78520();
  }
  return g_026c2bc0;
}

int sub_00859800(...);
int sub_0085a130(void);
extern undefined4 g_026b55d4;
// @baa 0x00944010
int sub_00944010(void)
{
  if (g_026b55d4 == 0) {
    g_026b55d4 = sub_00859800(L"Engine");
    sub_0085a130();
  }
  return g_026b55d4;
}

int sub_009f8f80(void);
int sub_00a2d070(...);
extern undefined4 g_026b660c;
// @baa 0x00944040
int sub_00944040(void)
{
  if (g_026b660c == 0) {
    g_026b660c = sub_00a2d070(L"Engine");
    sub_009f8f80();
  }
  return g_026b660c;
}

struct S {
    virtual void vf_00();
    virtual void vf_04();
    virtual void vf_08();
    virtual void vf_0c();
    virtual void vf_10();
    virtual void vf_14();
    virtual void vf_18(INT Value);
};

// @baa 0x00944070
void sub_00944070(S* p, INT Value)
{
    p->vf_18(Value);
}

extern char g_01ebb6c0[];
struct C_00944160 { void sub_00944160(void); };

// @baa 0x00944160
void C_00944160::sub_00944160(void) { *(int*)((char*)this + 0) = (int)g_01ebb6c0; }

struct C_00944170 {
    undefined4 * sub_00944170(byte);
};

// @baa 0x00944170
undefined4 * C_00944170::sub_00944170(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ebb6c0);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x009441d0
IMPLEMENT_CLASS_AT(USkeletalMesh, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSkeletalMesh.cpp", 27);

// @baa 0x009442e0
int USkeletalMesh::vf_000(void) { return 1; }

// @baa 0x009442f0
bool USkeletalMesh::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00944330
IMPLEMENT_CLASS_AT(USkeletalMeshSocket, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSkeletalMesh.cpp", 28);

// @baa 0x00944440
int USkeletalMeshSocket::vf_000(void) { return 1; }

// @baa 0x00944450
bool USkeletalMeshSocket::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00944490
IMPLEMENT_CLASS_AT(ASkeletalMeshActor, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSkeletalMesh.cpp", 29);

// @baa 0x009445a0
int ASkeletalMeshActor::vf_000(void) { return 1; }

// @baa 0x009445b0
bool ASkeletalMeshActor::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x009445f0
int ASkeletalMeshActorMAT::vf_000(void) { return 1; }

// @baa 0x00944600
int ASkeletalMeshActorBasedOnExtremeContent::vf_000(void) { return 1; }

struct C_00944650 { void sub_00944650(int a0); };

// @baa 0x00944650
void C_00944650::sub_00944650(int a0) { *(int*)((char*)this + 32) = a0; }

struct C_00944980 {
    void sub_00944980();
};

int sub_0071a040(...);
// @baa 0x00944980
void C_00944980::sub_00944980(void)
{
    int param_1 = (int)this;

  sub_0071a040(param_1 + 0x30);
  sub_0071a040(param_1 + 0x90);
  return;
}

struct S_0094bd70 {
    void sub_005d7270();
    void sub_0094bca0();
    void sub_0094bd70();
};

// @baa 0x0094bd70
void S_0094bd70::sub_0094bd70() {
    sub_005d7270();
    sub_0094bca0();
}

typedef uint size_t;

struct C_0094da80 {
    int sub_0094da80(int);
    int sub_009481d0(int);
};

void * sub_01a37612(void *, int, size_t);
// @baa 0x0094da80
int C_0094da80::sub_0094da80(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  iVar1 = ((C_0094da80 *)(this))->sub_009481d0(param_2);
  sub_01a37612((void *)(*param_1 + iVar1 * 0x1c),0,param_2 * 0x1c);
  return iVar1;
}

void sub_004025d0(void*);
struct D { void* p; ~D(){ if(0) sub_004025d0(p);} };

void sub_0053dfa0(void*);
struct C_00957b70 { void* Data; int Num; int Max; void sub_00957b70(); };

// @baa 0x00957b70
void C_00957b70::sub_00957b70() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00957bd0 { void* Data; int Num; int Max; void sub_00957bd0(); };

// @baa 0x00957bd0
void C_00957bd0::sub_00957bd0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct S_00957c30 {
  int sub_0094ea10(undefined4 *p);
  int sub_00957c30(undefined4 *p);
};

// @baa 0x00957c30
int S_00957c30::sub_00957c30(undefined4 *p) { return sub_0094ea10(p); }

struct C_00957c40 {
    void sub_00957c40(int);
};

// @baa 0x00957c40
void C_00957c40::sub_00957c40(int param_2)
{
    int * param_1 = (int *)this;

  int iVar1;
  
  param_1[1] = 0;
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if ((*param_1 != 0) || (param_2 != 0)) {
      iVar1 = sub_0053df70(*param_1,param_2 * 0x1c,8);
      *param_1 = iVar1;
    }
  }
  return;
}

struct C_00963a00 { void sub_0095a7c0(int); C_00963a00 *sub_00963a00(int); };

// @baa 0x00963a00
C_00963a00 *C_00963a00::sub_00963a00(int a) { sub_0095a7c0(a); return this; }

struct C_00963fc0 { int a, b, c; C_00963fc0(); };

// @baa 0x00963fc0
C_00963fc0::C_00963fc0() : a(0), b(0), c(0) {}

struct C_00963fd0 { void* Data; int Num; int Max; void sub_00963fd0(); };

// @baa 0x00963fd0
void C_00963fd0::sub_00963fd0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00964130 { void* Data; int Num; int Max; void sub_00964130(); };

// @baa 0x00964130
void C_00964130::sub_00964130() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

// @baa 0x0097f790
IMPLEMENT_CLASS_AT(UStaticMesh, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnStaticMesh.cpp", 14);

// @baa 0x0097fe30
int sub_005c7a70(...);
int sub_0097fba0(void);
// @baa 0x0097fe40
undefined4 USkeletalMesh::sub_0097fe40(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0097fba0();
  if ((param_2 & 1) != 0) {
    sub_005c7a70(param_1,0x34c);
  }
  return param_1;
}

struct C_00d481d0{
int sub_00d481d0(undefined4*);
};

int sub_0053d240(...);
// @baa 0x00d481d0
int C_00d481d0::sub_00d481d0(undefined4*param_2)
{
int*param_1=(int*)this;

int iVar2;
undefined4*puVar1;
int iVar3;

iVar2=param_1[1];
iVar3=iVar2+1;
param_1[1]=iVar3;
if(iVar3>param_1[2]){
iVar3=sub_0053d240(iVar3,param_1[2],8);
param_1[2]=iVar3;
if((*param_1!=0)||(iVar3!=0)){
iVar3=sub_0053df70(*param_1,iVar3*8,8);
*param_1=iVar3;
}
}
puVar1=(undefined4*)(*param_1+iVar2*8);
if(puVar1!=(undefined4*)0x0){
*puVar1=*param_2;
puVar1[1]=param_2[1];
}
return iVar2;
}

struct C_00d4b930 { void* Data; int Num; int Max; void sub_00d4b930(); };

// @baa 0x00d4b930
void C_00d4b930::sub_00d4b930() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00d5e680 {
    int sub_00d5e680();
};

int sub_00d53f70(void);
// @baa 0x00d5e680
int C_00d5e680::sub_00d5e680(void)
{
    int param_1 = (int)this;

  sub_00d53f70();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_00d5e6a0 {
    undefined4 * sub_00d5e6a0(byte);
    int sub_00d58240();
};

extern undefined * g_020afb9c;
// @baa 0x00d5e6a0
undefined4 * C_00d5e6a0::sub_00d5e6a0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(&g_020afb9c);
  ((C_00d5e6a0 *)(((char *)this + 0x10)))->sub_00d58240();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00d5e6d0 {
    undefined4 * sub_00d5e6d0(byte);
    int sub_00d58240();
};

extern undefined * g_020afba4;
// @baa 0x00d5e6d0
undefined4 * C_00d5e6d0::sub_00d5e6d0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(&g_020afba4);
  ((C_00d5e6d0 *)(((char *)this + 0x10)))->sub_00d58240();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00d5e700 {
    undefined4 * sub_00d5e700(undefined4, undefined4, undefined4);
    int sub_00d5e2a0(int, int, int);
};

extern undefined4 g_020afbac;
// @baa 0x00d5e700
undefined4 * C_00d5e700::sub_00d5e700(undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_00d5e700 *)(this))->sub_00d5e2a0(param_2, param_3, param_4);
  *param_1 = (undefined4)(&g_020afbac);
  return param_1;
}

struct C_00d5e810 {
    undefined4 * sub_00d5e810(undefined4, undefined4, undefined4);
    int sub_00d5e490(int, int, int);
};

extern undefined4 g_020afbb4;
// @baa 0x00d5e810
undefined4 * C_00d5e810::sub_00d5e810(undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_00d5e810 *)(this))->sub_00d5e490(param_2, param_3, param_4);
  *param_1 = (undefined4)(&g_020afbb4);
  return param_1;
}

/* UE3's FArchive operators for plain values (UnArc.h): byte-order serialization of the value. */
inline FArchive& operator<<(FArchive& Ar, FLOAT& F) { Ar.ByteOrderSerialize(&F, sizeof(F)); return Ar; }

inline FArchive& operator<<(FArchive& Ar, INT& I) { Ar.ByteOrderSerialize(&I, sizeof(I)); return Ar; }

inline FArchive& operator<<(FArchive& Ar, DWORD& D) { Ar.ByteOrderSerialize(&D, sizeof(D)); return Ar; }

inline FArchive& operator<<(FArchive& Ar, FVector& V) { return Ar << V.X << V.Y << V.Z; }

inline FArchive& operator<<(FArchive& Ar, FQuat& F) { return Ar << F.X << F.Y << F.Z << F.W; }

/* FColor(R, G, B, A) (UnMath.h); the kit's FColor has no constructor. */
struct FColor_ : public FColor
{
    FColor_(BYTE InR, BYTE InG, BYTE InB, BYTE InA) { B = InB; G = InG; R = InR; A = InA; }
};

/* VJointPos (UnSkeletalMesh.h): a bone's reference pose. Not in the kit (its FMeshBone has it flattened). */
struct VJointPos
{
    FQuat Orientation;
    FVector Position;
    FLOAT Length;
    FLOAT XSize;
    FLOAT YSize;
    FLOAT ZSize;
};

FArchive& operator<<(FArchive& Ar, VJointPos& V);
 /* 0x00943a60 */
inline FArchive& operator<<(FArchive& Ar, FColor& Color) { Ar.ByteOrderSerialize(&Color, sizeof(Color)); return Ar; }

#define VER_ADDED_BONE_COLOR 0x203 /* name guessed: the package version that added FMeshBone::BoneColor */
/* FMeshBone as this build has it (UnSkeletalMesh.h, 0x48 bytes). The kit's FMeshBone flattens BonePos
 * without Length/XSize/YSize/ZSize, so its NumChildren and ParentIndex sit at the wrong offsets. */
struct FMeshBone_
{
    FName Name;           /* 0x00 */
    DWORD Flags;          /* 0x08 */
    VJointPos BonePos;    /* 0x0c */
    INT ParentIndex;      /* 0x38 */
    INT NumChildren;      /* 0x3c */
    INT Depth;            /* 0x40 */
    FColor BoneColor;     /* 0x44 */
};

// @baa 0x00943ad0
FArchive& operator<<(FArchive& Ar, FMeshBone_& F)
{
    Ar << F.Name << F.Flags << F.BonePos << F.NumChildren << F.ParentIndex;
    if (Ar.IsLoading() && Ar.Ver() < VER_ADDED_BONE_COLOR)
    {
        F.BoneColor = FColor_(255, 255, 255, 255);
    }
    else
    {
        Ar << F.BoneColor;
    }
    return Ar;
}

/* GetTypeHash(FName) (UnName.h); takes the name by value, which sets the load order */
inline DWORD GetTypeHash(const FName N) { return N.Index + N.Number * 23; }

typedef INT PTRINT;

 /* UnTypes.h: a pointer-sized signed int (Win32); not in the kit */
/* IfAThenAElseB (UnTemplate.h): A if it's non-NULL, else B, without a branch */
template<typename ReferencedType>
FORCEINLINE ReferencedType* IfAThenAElseB(ReferencedType* A, ReferencedType* B)
{
    const PTRINT IntA = reinterpret_cast<PTRINT>(A);
    const PTRINT IntB = reinterpret_cast<PTRINT>(B);
    const PTRINT MaskB = -(!IntA);
    return reinterpret_cast<ReferencedType*>(IntA | (MaskB & IntB));
}

/* FSetElementId (UnSet.h): index of an element in a TSet, INDEX_NONE if none. */
class FSetElementId
{
public:
    FSetElementId() : Index(INDEX_NONE) {}
    explicit FSetElementId(INT InIndex) : Index(InIndex) {}
    operator INT() const { return Index; }
private:
    INT Index;
};

/* TSet<TMap<FName,INT>::FPair> (UnSet.h) as this build lays it out; no TSet/TMap in the kit. Elements is a
 * TSparseArray (data, then its allocation bit array and free list); Hash is a TInlineAllocator<1> of
 * FSetElementIds, HashSize a power of two. The value type is assumed to be INT (the caller copies a
 * 12-byte pair). */
struct FNameIntPairSet
{
    struct FPair
    {
        FName Key;
        INT Value;
    };
    struct FElement
    {
        FPair Value;
        mutable FSetElementId HashNextId;
        mutable INT HashIndex;

        FElement(const FPair& InValue) : Value(InValue) {}
    };

    /* TInlineAllocator<1>::ForElementType<FSetElementId> (ContainerAllocationPolicies.h) */
    struct FHashAllocation
    {
        FSetElementId InlineData[1];
        FSetElementId* SecondaryData; /* FHeapAllocator's Data, NULL while the inline element is used */

        FSetElementId* GetInlineElements() const { return (FSetElementId*)InlineData; }
        FSetElementId* GetAllocation() const { return IfAThenAElseB<FSetElementId>(SecondaryData, GetInlineElements()); }
    };

    /* TSparseArray<FElement> (UnSparseArray.h): its element array, the allocation bit array and the free list */
    FElement* ElementData;
    INT ElementArrayNum;
    INT ElementArrayMax;
    BYTE AllocationFlags[0x1c]; /* TBitArray with its inline allocation; not used here */
    INT FirstFreeIndex;
    INT NumFreeIndices;

    INT NumElements() const { return ElementArrayNum - NumFreeIndices; }
    FHashAllocation Hash;
    INT HashSize;

    FSetElementId& GetTypedHash(INT HashIndex) const
    {
        return ((FSetElementId*)Hash.GetAllocation())[HashIndex & (HashSize - 1)];
    }

    /* TSparseArray::Add's result (UnSparseArray.h) */
    struct FSparseArrayAllocationInfo
    {
        INT Index;
        void* Pointer;
    };

    void HashElement(FSetElementId ElementId, const FElement& Element) const; /* 0x00d4c2d0 */
    FSetElementId FindId(const FName Key) const;                              /* 0x009591d0 */
    FSparseArrayAllocationInfo AddElement();                                  /* TSparseArray::Add, 0x00d53c30 */
    UBOOL ConditionalRehash(INT NumHashedElements, UBOOL bAllowShrinking = FALSE) const; /* 0x00d56870 */
    void EmptyElements(INT ExpectedNumElements);                              /* TSparseArray::Empty, 0x009760a0 */
    void Empty(INT ExpectedNumElements = 0);
    FSetElementId Add(const FPair& InElement, UBOOL* bIsAlreadyInSetPtr = NULL);
};

inline void* operator new(size_t Size, const FNameIntPairSet::FSparseArrayAllocationInfo& Allocation) { return Allocation.Pointer; }

// @baa 0x00d58060
/* remove all elements, sizing the hash for the expected count */
void FNameIntPairSet::Empty(INT ExpectedNumElements)
{
    EmptyElements(ExpectedNumElements);

    // resize the hash for the expected number of elements, or else just clear it
    if (!ConditionalRehash(ExpectedNumElements, TRUE))
    {
        if (HashSize)
        {
            for (INT HashIndex = 0; HashIndex < HashSize; HashIndex++)
            {
                GetTypedHash(HashIndex) = FSetElementId();
            }
        }
    }
}

/* Kit gap (Array.h, issue #39): this build inlines TArray::operator() where the kit's plain-inline one is
 * called out of line; same body, forced inline. */
template<class T> struct TArrayAt_ : public TArray<T>
{
    __forceinline T& At(INT i)
    {
#line 560 BAA_ARRAY_FILE
        check(i>=0 && (i<this->ArrayNum||(i==0 && this->ArrayNum==0)));
        return this->GetTypedData()[i];
    }
    __forceinline const T& At(INT i) const
    {
#line 566 BAA_ARRAY_FILE
        check(i>=0 && (i<this->ArrayNum||(i==0 && this->ArrayNum==0)));
        return this->GetTypedData()[i];
    }
};

/* FPackedNormal (UnMath.h): a unit vector packed into 4 bytes. */
struct FPackedNormal
{
    union
    {
        struct { BYTE X, Y, Z, W; } Vector;
        DWORD Packed;
    };
};

/* FRigidSkinVertex (UnSkeletalMesh.h): a vertex bound to a single bone (0x24 bytes). Not in the kit. */
struct FRigidSkinVertex
{
    FVector Position;
    FPackedNormal TangentX, TangentY, TangentZ;
    FLOAT U, V;
    BYTE Bone;
};

/* FSoftSkinVertex (UnSkeletalMesh.h): a vertex skinned to up to 4 bones (0x28 bytes). Not in the kit. */
struct FSoftSkinVertex
{
    FVector Position;
    FPackedNormal TangentX, TangentY, TangentZ;
    FLOAT U, V;
    BYTE InfluenceBones[4];
    BYTE InfluenceWeights[4];
};

/* FSkelMeshSection (UnSkeletalMesh.h). Not in the kit. */
struct FSkelMeshSection
{
    WORD MaterialIndex;
    WORD ChunkIndex;
    DWORD BaseIndex;
    WORD NumTriangles;
};

/* FSkelMeshChunk (UnSkeletalMesh.h): vertices of one LOD skinned with one bone map. Not in the kit. */
struct FSkelMeshChunk
{
    DWORD BaseVertexIndex;
    TArray<FRigidSkinVertex> RigidVertices;
    TArray<FSoftSkinVertex> SoftVertices;
    TArray<WORD> BoneMap;
    INT NumRigidVertices;
    INT NumSoftVertices;
    INT MaxBoneInfluences;

    INT GetNumVertices() const { return NumRigidVertices + NumSoftVertices; }
};

/* FRenderResource (RenderResource.h); the kit has no render resources. Only its address is used here. */
class FRenderResource
{
public:
    virtual ~FRenderResource();
};

/* starts releasing a resource on the rendering thread (RenderResource.cpp, 0x0071a040) */
void BeginReleaseResource(FRenderResource* Resource);
/* FRawStaticIndexBuffer (RawIndexBuffer.h): 0x60 bytes; its contents aren't used here. */
class FRawStaticIndexBuffer : public FRenderResource
{
    BYTE Opaque[0x5c];
};

/* FSkeletalMeshVertexBuffer (UnSkeletalMesh.h): only its address is used here. */
class FSkeletalMeshVertexBuffer : public FRenderResource
{
};

/* FStaticLODModel (UnSkeletalMesh.h), up to the GPU-skin vertex buffer. */
struct FStaticLODModel
{
    TArray<FSkelMeshSection> Sections;
    TArrayAt_<FSkelMeshChunk> Chunks;
    TArray<WORD> ActiveBoneIndices;
    DWORD Size;
    DWORD NumVertices;
    DWORD NumTexCoords;
    FRawStaticIndexBuffer IndexBuffer;               /* 0x30 */
    FSkeletalMeshVertexBuffer VertexBufferGPUSkin;   /* 0x90 */

    void ReleaseResources();
};

/* FRenderCommandFence::BeginFence (RenderingThread.cpp, 0x00719c60); the kit has USkeletalMesh::ReleaseResourcesFence as a bare INT */

/* USkeletalMesh::ReleaseResources isn't declared in Classes.h */
struct USkeletalMesh_ : public USkeletalMesh
{
    void ReleaseResources();
};

// @baa 0x0094bca0
/* the LOD's index and GPU-skin vertex buffers */
inline void FStaticLODModel::ReleaseResources()
{
    BeginReleaseResource(&IndexBuffer);
    BeginReleaseResource(&VertexBufferGPUSkin);
}

/* start releasing the render resources of every LOD, with a fence to tell when that is done */
void USkeletalMesh_::ReleaseResources()
{
    for (INT LODIndex = 0; LODIndex < ((TIndirectArray<FStaticLODModel>&)LODModels).Num(); LODIndex++)
    {
        ((TIndirectArray<FStaticLODModel>&)LODModels)(LODIndex).ReleaseResources();
    }

    ((FRenderCommandFence&)ReleaseResourcesFence).BeginFence();
}

#line 1048 "candidate.cpp"
