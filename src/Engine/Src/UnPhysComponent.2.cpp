// UnPhysComponent.cpp (part 2 of 2): 71 functions
// Placed here by: neighbours 50, callers 13, file 8.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x00a01c40
undefined4 UStaticMeshComponent::vf_17c(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 0x1b4) != 0) {
    return *(undefined4 *)(*(int *)(param_1 + 0x1b4) + 0x80);
  }
  return 0;
}

struct C_view {
    int sub_0097f060(int, int, int, int, int, int, int);
};

int sub_006311e0(...);
extern undefined4 g_01fb0570;
// @baa 0x00a01c60
void UStaticMeshComponent::vf_274(undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6, undefined4 param_7)
{
    int param_1 = (int)this;
  if (*(int *)(param_1 + 0x1b4) == 0) {
    sub_006311e0("StaticMesh",
                 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnPhysComponent.cpp"
                 ,0x12d5,&g_01fb0570);
  }
  ((C_view *)((*(char **)((char *)this + 0x1b4))))->sub_0097f060(param_2, param_3, *(undefined4 *)(param_1 + 0x40), param_4, param_5, param_6, param_7);
  return;
}

int sub_007654e0(void);
// @baa 0x00a01df0
void URB_Handle::vf_114(void)
{
    int param_1 = (int)this;

  sub_007654e0();
  *(undefined4 *)(param_1 + 0x60) = 0;
  return;
}

struct C {
    int sub_00a02f40();
};

// @baa 0x00a02f40
int C::sub_00a02f40(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_00a02f50 { int a, b; C_00a02f50(int, int); };

// @baa 0x00a02f50
C_00a02f50::C_00a02f50(int x, int y) : a(x), b(y) {}

// @baa 0x00a02f70
void sub_00a02f70(void) {  }

struct C_00a02f80 { int sub_00a02f80(void); };

// @baa 0x00a02f80
int C_00a02f80::sub_00a02f80(void) { return *(int*)((char*)this + 0); }

struct C_00a02f90 { int sub_00a02f90(void); };

// @baa 0x00a02f90
int C_00a02f90::sub_00a02f90(void) { return *(int*)((char*)this + 0); }

// @baa 0x00a02fa0
int sub_00a02fa0(int a0) { return *(int*)a0; }

// @baa 0x00a02fb0
undefined4 sub_00a02fb0(int * param_1, int * param_2)
{
  if ((*param_1 == *param_2) && (param_1[1] == param_2[1])) {
    return 1;
  }
  return 0;
}

struct C_00a03000 {
    void sub_00a03000(int *);
};

// @baa 0x00a03000
void C_00a03000::sub_00a03000(int * param_2)
{
    int param_1 = (int)this;

  *param_2 = param_1;
  param_2[1] = *(int *)(param_1 + 8);
  return;
}

struct C_00a03010 { int sub_00a03010(void); };

// @baa 0x00a03010
int C_00a03010::sub_00a03010(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_00a03050 { int sub_00a03050(void); };

// @baa 0x00a03050
int C_00a03050::sub_00a03050(void) { return *(int*)((char*)this + 0); }

struct C_00a03060 { int sub_00a03060(void); };

// @baa 0x00a03060
int C_00a03060::sub_00a03060(void) { return *(int*)((char*)this + 0); }

struct C_00a03070 { int sub_00a03070(void); };

// @baa 0x00a03070
int C_00a03070::sub_00a03070(void) { return *(int*)((char*)this + 0); }

struct C_00a03080 { int sub_00a03080(void); };

// @baa 0x00a03080
int C_00a03080::sub_00a03080(void) { return *(int*)((char*)this + 0); }

struct C_00a03090 { int sub_00a03090(void); };

// @baa 0x00a03090
int C_00a03090::sub_00a03090(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_00a030a0 { C_00a030a0* sub_00a030a0(void); };

// @baa 0x00a030a0
C_00a030a0* C_00a030a0::sub_00a030a0(void) { return this; }

struct C_00a030f0 { int sub_00a030f0(void); };

// @baa 0x00a030f0
int C_00a030f0::sub_00a030f0(void) { return *(int*)((char*)this + 20); }

struct C_00a03100 { int sub_00a03100(void); };

// @baa 0x00a03100
int C_00a03100::sub_00a03100(void) { return *(int*)((char*)this + 20); }

extern "C" void sub_009f7100();
struct CNode {
    // 0x00
    void* Unk00;
    // 0x04
    void* Unk04;
    void sub_00a031c0();
};

// @baa 0x00a031c0
void CNode::sub_00a031c0()
{
    Unk04 = *(void**)((char*)Unk04 + 0x34);
    sub_009f7100();
}

struct C_00a031d0 {
    int sub_00a031d0();
};

// @baa 0x00a031d0
int C_00a031d0::sub_00a031d0(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 0x28) + *(int *)(param_1 + 0x1c) + *(int *)(param_1 + 0x10) +
         *(int *)(param_1 + 4);
}

// @baa 0x00a03210
IMPLEMENT_CLASS_AT(URB_Handle, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnPhysComponent.cpp", 27);

// @baa 0x00a05c50
// @baa 0x00a06000
int UPrimitiveComponent::vf_1d8(void)
{
    int param_1 = (int)this;

  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x154);
  if ((iVar1 == 0) || (*(int *)(iVar1 + 0x58) == 0)) {
    iVar1 = 0;
  }
  return iVar1;
}

typedef uint size_t;

struct C_00a07130 {
    int sub_00a07130(int);
    int sub_009b1900(int);
};

void * sub_01a37612(void *, int, size_t);
// @baa 0x00a07130
int C_00a07130::sub_00a07130(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  iVar1 = ((C_00a07130 *)(this))->sub_009b1900(param_2);
  sub_01a37612((void *)(*param_1 + iVar1 * 4),0,param_2 * 4);
  return iVar1;
}

struct C_00a07510{
int sub_00a07510(undefined4*);
};

int sub_0053d240(...);
undefined4 sub_0053df70(...);
// @baa 0x00a07510
int C_00a07510::sub_00a07510(undefined4*param_2)
{
int*param_1=(int*)this;

undefined4*puVar1;
int iVar2;
int iVar3;

iVar2=param_1[1];
iVar3=iVar2+1;
param_1[1]=iVar3;
if(iVar3>param_1[2]){
iVar3=sub_0053d240(iVar3,param_1[2],4);
param_1[2]=iVar3;
if((*param_1!=0)||(iVar3)){
iVar3=sub_0053df70(*param_1,iVar3*4,8);
*param_1=iVar3;
}
}
puVar1=(undefined4*)(*param_1+4*iVar2);
if((undefined4*)0x0!=puVar1){
*puVar1=*param_2;
}
return iVar2;
}

struct C_00a077e0 {
    int sub_00a077e0(int);
    int sub_00a02ed0(int);
};

// @baa 0x00a077e0
int C_00a077e0::sub_00a077e0(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  iVar1 = ((C_00a077e0 *)(this))->sub_00a02ed0(param_2);
  sub_01a37612((void *)(*param_1 + iVar1 * 4),0,param_2 * 4);
  return iVar1;
}

struct C_00a07820 {
    int sub_00a07820(int);
};

// @baa 0x00a07820
int C_00a07820::sub_00a07820(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

// @baa 0x00a07830
void __stdcall sub_00a07830(int a0, int a1) {  }

struct C_00a07840 {
    int sub_00a07840(int);
};

// @baa 0x00a07840
int C_00a07840::sub_00a07840(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

// @baa 0x00a07850
void __stdcall sub_00a07850(int a0, int a1) {  }

struct C_00a07860 {
    int sub_00a07860(int);
};

// @baa 0x00a07860
int C_00a07860::sub_00a07860(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x50 + *param_1;
}

// @baa 0x00a07870
void __stdcall sub_00a07870(int a0, int a1) {  }

struct C_00a07880 {
    int sub_00a07880(int);
};

// @baa 0x00a07880
int C_00a07880::sub_00a07880(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 8;
}

// @baa 0x00a07890
void __stdcall sub_00a07890(int a0, int a1) {  }

struct C_00a078a0 {
    int sub_00a078a0(int);
};

// @baa 0x00a078a0
int C_00a078a0::sub_00a078a0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0xc;
}

// @baa 0x00a078b0
void __stdcall sub_00a078b0(int a0, int a1) {  }

struct C_00a078c0 {
    int sub_00a078c0(int);
};

// @baa 0x00a078c0
int C_00a078c0::sub_00a078c0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

// @baa 0x00a078d0
void __stdcall sub_00a078d0(int a0, int a1) {  }

struct C_00a078e0 {
    undefined4 sub_00a078e0(byte);
};

int sub_0053dfa0(...);
// @baa 0x00a078e0
undefined4 C_00a078e0::sub_00a078e0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

void sub_004025d0(void*);
struct D { void* p; ~D(){ if(0) sub_004025d0(p);} };

void sub_0053dfa0(void*);
struct C_00a157a0 { void* Data; int Num; int Max; void sub_00a157a0(); };

// @baa 0x00a157a0
void C_00a157a0::sub_00a157a0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00a15800 { void* Data; int Num; int Max; void sub_00a15800(); };

// @baa 0x00a15800
void C_00a15800::sub_00a15800() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

int sub_00a07900(void);
// @baa 0x00a158b0
undefined4 UPrimitiveComponent::sub_00a158b0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00a07900();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00a21f50 { void sub_0095a7c0(int); C_00a21f50 *sub_00a21f50(int); };

// @baa 0x00a21f50
C_00a21f50 *C_00a21f50::sub_00a21f50(int a) { sub_0095a7c0(a); return this; }

struct C_00a22040 { void sub_00a1f7a0(int); C_00a22040 *sub_00a22040(int); };

// @baa 0x00a22040
C_00a22040 *C_00a22040::sub_00a22040(int a) { sub_00a1f7a0(a); return this; }

struct C_00a22060 { void sub_00a1f890(int); C_00a22060 *sub_00a22060(int); };

// @baa 0x00a22060
C_00a22060 *C_00a22060::sub_00a22060(int a) { sub_00a1f890(a); return this; }

struct C_00a22080 { void sub_00a1f980(int); C_00a22080 *sub_00a22080(int); };

// @baa 0x00a22080
C_00a22080 *C_00a22080::sub_00a22080(int a) { sub_00a1f980(a); return this; }

struct C_00a220a0 {
    int sub_00a220a0(int);
    int sub_00a1f500(int, int);
};

// @baa 0x00a220a0
int C_00a220a0::sub_00a220a0(int param_2)
{
    int * param_1 = (int *)this;
  ((C_00a220a0 *)(this))->sub_00a1f500((int)(&param_2), param_2);
  if (param_2 != -1) {
    return *param_1 + param_2 * 0x14;
  }
  return 0;
}

struct TBitArray {
    int* AllocatorData;
    int NumBits;
    int MaxBits;
    int InlineData[4];
};

struct FBitIterator {
    int WordIndex;
    int Mask;
    const int* WordData;
    int UnvisitedMask;
    int CurrentIndex;
    int BaseIndex;

    FBitIterator(const TBitArray& Array, int StartIndex)
        : WordIndex(StartIndex >> 5)
        , Mask(1 << (StartIndex & 31))
        , WordData(Array.InlineData)
        , UnvisitedMask(~0 << (StartIndex & 31))
        , CurrentIndex(StartIndex)
        , BaseIndex(StartIndex & ~31)
    {
    }
    void FindFirstSetBit();
    void Advance()
    {
        UnvisitedMask &= ~Mask;
        FindFirstSetBit();
    }
};

struct TConstSetBitIterator_00a221a0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00a221a0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00a221a0& operator++();
};

TConstSetBitIterator_00a221a0::TConstSetBitIterator_00a221a0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00a221a0
TConstSetBitIterator_00a221a0& TConstSetBitIterator_00a221a0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00a22fa0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00a22fa0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00a22fa0& operator++();
};

TConstSetBitIterator_00a22fa0::TConstSetBitIterator_00a22fa0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00a22fa0
TConstSetBitIterator_00a22fa0& TConstSetBitIterator_00a22fa0::operator++()
{
    It.Advance();
    return *this;
}

// @baa 0x00a23110
IMPLEMENT_CLASS_AT(URB_RadialImpulseComponent, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnPhysComponent.cpp", 26);

// @baa 0x00a23130
IMPLEMENT_CLASS_AT(URB_Spring, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnPhysComponent.cpp", 28);

// @baa 0x00a23150
IMPLEMENT_CLASS_AT(URB_ForceComponent, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnPhysComponent.cpp", 31);

// @baa 0x00a23170
IMPLEMENT_CLASS_AT(URB_ForceComponentCylindrical, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnPhysComponent.cpp", 32);

// @baa 0x00a23190
IMPLEMENT_CLASS_AT(URB_ForceComponentRadial, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnPhysComponent.cpp", 33);

// @baa 0x00a25da0
// @baa 0x00a25e60
// @baa 0x00a25f20
// @baa 0x00a25fe0
// @baa 0x00a260a0
struct C_00a26360 {
    undefined4 sub_00a26360(byte);
};

int sub_00797df0(void);
// @baa 0x00a26360
undefined4 C_00a26360::sub_00a26360(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00797df0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

void sub_00a22b30();
// @baa 0x00a264d0
void sub_00a264d0(void) { sub_00a22b30(); }

struct C_00a264e0 { void sub_00a22ff0(int); C_00a264e0 *sub_00a264e0(int); };

// @baa 0x00a264e0
C_00a264e0 *C_00a264e0::sub_00a264e0(int a) { sub_00a22ff0(a); return this; }

struct C_00a266e0 {
    int sub_00a266e0();
};

int sub_00a221f0(void);
// @baa 0x00a266e0
int C_00a266e0::sub_00a266e0(void)
{
    int param_1 = (int)this;

  sub_00a221f0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

extern UWorld* g_026b62b8;
   /* GWorld */
extern DOUBLE g_026b6800;
    /* time spent in InstanceRBBody */
extern DOUBLE g_026b67e8;
    /* time spent in InitBody */
DOUBLE sub_0053e320();
       /* appSeconds */
struct UWorld_ : public UWorld {
    URB_BodyInstance* sub_00a49820(UPrimitiveComponent* Owner); /* InstanceRBBody */
};

struct URB_BodyInstance_ {
    void sub_00a27b80(URB_BodySetup* Setup, const FMatrix& Transform, const FVector& Scale3D, UBOOL bFixed, UPrimitiveComponent* PrimComp, void* InRBScene); /* InitBody */
};

struct UPrimitiveComponent_ : public UPrimitiveComponent {
    void sub_006db370(FMatrix& OutTransform, FVector& OutScale); /* GetTransformAndScale */
    void sub_00a29ac0(UBOOL bFixed);
};

// @baa 0x00a29ac0
void UPrimitiveComponent_::sub_00a29ac0(UBOOL bFixed)
{
    void* RBPhysScene = *(void**)((BYTE*)g_026b62b8 + 0x15c);
    if (!RBPhysScene || bDisableAllRigidBody || BodyInstance)
    {
        return;
    }
    URB_BodySetup* BodySetup = (URB_BodySetup*)vf_17c();
    if (!BodySetup)
    {
        return;
    }
    FMatrix PrimTM;
    FVector Scale3D;
    sub_006db370(PrimTM, Scale3D);

    DOUBLE Start = sub_0053e320();
    BodyInstance = ((UWorld_*)g_026b62b8)->sub_00a49820(NULL);
    if (!(BodyInstance)) appFailAssert("BodyInstance", "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnPhysComponent.cpp", 1151, TEXT(""));
    DOUBLE Mid = sub_0053e320();
    ((URB_BodyInstance_*)BodyInstance)->sub_00a27b80(BodySetup, PrimTM, Scale3D, bFixed, this, *(void**)((BYTE*)g_026b62b8 + 0x15c));
    g_026b6800 += Mid - Start;
    g_026b67e8 += sub_0053e320() - Mid;
}

struct C_view_00a2aa30 {
    int sub_00797df0();
};

int sub_00a4e800(...);
// @baa 0x00a2aa30
void UBrushComponent::sub_00a2aa30(void)
{
    int param_1 = (int)this;
  if (*(int *)(param_1 + 0x40) != 0) {
    ((C_view_00a2aa30 *)(((char *)this + 0x1a8)))->sub_00797df0();
    sub_01a37612((void *)(param_1 + 0x1a8),0,0x38);
    sub_00a4e800((void *)(param_1 + 0x1a8),*(undefined4 *)(param_1 + 0x1a4),1);
  }
  return;
}

struct C_00a2b2c0 { void sub_00a22ff0(int); C_00a2b2c0 *sub_00a2b2c0(int); };

// @baa 0x00a2b2c0
C_00a2b2c0 *C_00a2b2c0::sub_00a2b2c0(int a) { sub_00a22ff0(a); return this; }

struct C_00a2b490 {
    int sub_00a2b490(undefined4, undefined4);
    int sub_00a26670(int, int);
};

// @baa 0x00a2b490
int C_00a2b490::sub_00a2b490(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_00a2b490 *)(this))->sub_00a26670(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct C_00a2b4b0 {
    int sub_00a2b4b0();
};

// @baa 0x00a2b4b0
int C_00a2b4b0::sub_00a2b4b0(void)
{
    int param_1 = (int)this;

  sub_00a221f0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

void sub_00a2b2e0();
// @baa 0x00a2b560
void sub_00a2b560(void) { sub_00a2b2e0(); }
