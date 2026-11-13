// DynamicLightEnvironmentComponent.cpp: 41 functions
// Placed here by: neighbours 29, class 8, callers 2, file 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

struct C {
    void * sub_006a87c0();
};

void * sub_01a37612(void *, int, size_t);
// @baa 0x006a87c0
void * C::sub_006a87c0(void)
{
    void * param_1 = (void *)this;

  sub_01a37612(param_1,0,0x30);
  sub_01a37612((void *)((int)param_1 + 0x30),0,0x30);
  sub_01a37612((void *)((int)param_1 + 0x60),0,0x30);
  return param_1;
}

struct C_006a8940 { void sub_00572b30(int); void sub_006a8940(); };

// @baa 0x006a8940
void C_006a8940::sub_006a8940() { sub_00572b30(0); }

// @baa 0x006a8950
undefined2 sub_006a8950(void)
{
  return 0x73;
}

// @baa 0x006aa970
int UDynamicLightEnvironmentComponent::vf_000(void) { return 1; }

struct C_006aa980 { void sub_006aa980(void); };

// @baa 0x006aa980
void C_006aa980::sub_006aa980(void) { *(int*)((char*)this + 1824) = 1; }

// @baa 0x006aa990
void UDynamicLightEnvironmentComponent::vf_14c(int a0) {  }

// @baa 0x006aa9a0
void UDynamicLightEnvironmentComponent::ResetEnvironment()
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 0x5c) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x5c) + 0x720) = 1;
  }
  return;
}

struct C_006b6940{
int sub_006b6940(undefined4*);
};

int sub_0053d240(...);
undefined4 sub_0053df70(...);
// @baa 0x006b6940
int C_006b6940::sub_006b6940(undefined4*param_2)
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

struct C_006b7ac0 {
    uint sub_006b7ac0();
};

// @baa 0x006b7ac0
uint C_006b7ac0::sub_006b7ac0(void)
{
    uint param_1 = (uint)this;

  return *(uint *)(param_1 + 0x40) | -(uint)(*(uint *)(param_1 + 0x40) == 0) & param_1;
}

int sub_006ace50(void);
int sub_006b4590(...);
extern undefined4 g_026b0dd8;
// @baa 0x006b7ce0
int sub_006b7ce0(void)
{
  if (g_026b0dd8 == 0) {
    g_026b0dd8 = sub_006b4590(L"Engine");
    sub_006ace50();
  }
  return g_026b0dd8;
}

struct C_006b7d10 {
    undefined4 * sub_006b7d10();
};

int sub_005c7a20(void);
extern undefined * g_01ebd268;
// @baa 0x006b7d10
undefined4 * C_006b7d10::sub_006b7d10(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01ebd268);
  param_1[0xc] = 0;
  return param_1;
}

struct C_006b7d30 {
    int sub_006b7d30();
};

// @baa 0x006b7d30
int C_006b7d30::sub_006b7d30(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 0x84) * 4 + 0xc0;
}

struct C_006b7d40 {
    int sub_006b7d40();
};

// @baa 0x006b7d40
int C_006b7d40::sub_006b7d40(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 0x84) * 4 + 0xb0;
}

struct C_006be250 {
    uint sub_006be250();
};

// @baa 0x006be250
uint C_006be250::sub_006be250(void)
{
    uint param_1 = (uint)this;

  return *(uint *)(param_1 + 0x40) | -(uint)(*(uint *)(param_1 + 0x40) == 0) & param_1;
}

struct C_006be270 {
    uint sub_006be270();
};

// @baa 0x006be270
uint C_006be270::sub_006be270(void)
{
    uint param_1 = (uint)this;

  return *(uint *)(param_1 + 0x40) | -(uint)(*(uint *)(param_1 + 0x40) == 0) & param_1;
}

struct C_006c6300 {
    undefined4 * sub_006c6300(undefined4 *);
    int sub_006c5780(int);
};

// @baa 0x006c6300
undefined4 * C_006c6300::sub_006c6300(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  ((C_006c6300 *)(((char *)this + 8)))->sub_006c5780((int)(param_2 + 2));
  return param_1;
}

struct C_006c6400 {
    int sub_006c6400(int);
};

// @baa 0x006c6400
int C_006c6400::sub_006c6400(int param_2)
{
    uint param_1 = (uint)this;

  return param_2 * 0x40 +
         (-(uint)(*(uint *)(param_1 + 0x40) == 0) & param_1 | *(uint *)(param_1 + 0x40));
}

// @baa 0x006c6420
void __stdcall sub_006c6420(int a0, int a1) {  }

// @baa 0x006c65f0
IMPLEMENT_CLASS_AT(ULightEnvironmentComponent, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\LightEnvironmentComponent.cpp", 8);

// @baa 0x006c6660
void ULightEnvironmentComponent::vf_14c(int a0) {  }

// @baa 0x006c6670
extern undefined * g_01ecf4e8;
// @baa 0x006c6690
undefined4 * UObject::sub_006c6690(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01ecf4e8);
  return param_1;
}

extern undefined * g_01ecf638;
// @baa 0x006c66b0
undefined4 * UObject::sub_006c66b0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01ecf638);
  return param_1;
}

// @baa 0x006c66d0
IMPLEMENT_CLASS_AT(UDynamicLightEnvironmentComponent, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\DynamicLightEnvironmentComponent.cpp", 8);

// @baa 0x006c6730
void sub_006c4cf0();
// @baa 0x006c6760
void sub_006c6760(void) { sub_006c4cf0(); }

struct C_006c7630 {
    undefined4 sub_006c7630(byte);
};

int sub_0053dfa0(...);
int sub_006c0b40(void);
// @baa 0x006c7630
undefined4 C_006c7630::sub_006c7630(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_006c0b40();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x006c9bd0
// @baa 0x006c9bf0
void sub_006c9bf0(void) { sub_006c4cf0(); }

// @baa 0x006ca060
// @baa 0x006cc830
// @baa 0x006cc940
bool UDynamicLightEnvironmentComponent::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

int sub_006c7a90(...);
int sub_006ca590(void);
extern undefined4 g_026b0dc0;
// @baa 0x006cc980
int sub_006cc980(void)
{
  if (g_026b0dc0 == 0) {
    g_026b0dc0 = sub_006c7a90(L"Engine");
    sub_006ca590();
  }
  return g_026b0dc0;
}

struct C_006cc9b0 {
    undefined4 sub_006cc9b0(byte);
};

int sub_006ca6e0(void);
// @baa 0x006cc9b0
undefined4 C_006cc9b0::sub_006cc9b0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_006ca6e0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_006cc9d0 {
    undefined4 sub_006cc9d0();
    int sub_006ca830(int);
};

// @baa 0x006cc9d0
undefined4 C_006cc9d0::sub_006cc9d0(void)
{
    int param_1 = (int)this;
  ((C_006cc9d0 *)((*(char **)((char *)this + 4))))->sub_006ca830(*(undefined4 *)(param_1 + 8));
  return 0xc;
}

// @baa 0x006cc9f0
int sub_006cc9f0(void) { return 12; }

struct C_006ccbe0 {
    undefined4 sub_006ccbe0(int);
    int sub_006cb300(int);
};

int sub_006311e0(...);
extern undefined4 g_01ec6974;
extern undefined4 g_01ec69e4;
extern undefined4 g_026b0e7c;
// @baa 0x006ccbe0
undefined4 C_006ccbe0::sub_006ccbe0(int param_2)
{
    int param_1 = (int)this;
  if (param_2 == 0) {
    sub_006311e0(&g_01ec69e4,
                 "e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\engine\\src\\../Bink/Src/FullScreenMovieBink.inl"
                 ,0xbb3,&g_01ec6974);
  }
  if (*(int *)(param_1 + 4) == 0) {
    if (g_026b0e7c == 0) {
      g_026b0e7c = 1;
    }
    ((C_006ccbe0 *)(((char *)this + 0x14)))->sub_006cb300(param_2);
    *(undefined4 *)(param_1 + 4) = 1;
  }
  return 1;
}

struct M_006ccd10 { void sub_006cbc40(); };

struct C_006ccd10 { char pad[64]; M_006ccd10 m; void sub_006ccd10(); };

// @baa 0x006ccd10
void C_006ccd10::sub_006ccd10() { m.sub_006cbc40(); }

void sub_006cbcb0();
// @baa 0x006ccf30
void sub_006ccf30(void) { sub_006cbcb0(); }

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

struct TConstSetBitIterator_006ccf40 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_006ccf40(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_006ccf40& operator++();
};

TConstSetBitIterator_006ccf40::TConstSetBitIterator_006ccf40(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x006ccf40
TConstSetBitIterator_006ccf40& TConstSetBitIterator_006ccf40::operator++()
{
    It.Advance();
    return *this;
}

struct FDynamicLightEnvironmentState_ {
    void sub_006ce960(FLOAT DeltaTime);     // FDynamicLightEnvironmentState::Tick
};

/* vf_124 is declared `INT vf_124(FLOAT)`, but this override returns nothing (void Tick(FLOAT)). */
struct UDynamicLightEnvironmentComponent_ : public UDynamicLightEnvironmentComponent {
    void sub_006cee60(FLOAT DeltaTime);
};

// @baa 0x006cee60
void UDynamicLightEnvironmentComponent_::sub_006cee60(FLOAT DeltaTime)
{
    this->sub_007595c0(DeltaTime);
    if (bEnabled) {
        if (bRequiresNonLatentUpdates && TickGroup != 4) {
            this->sub_007596b0(4);
        }
#line 1025 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\DynamicLightEnvironmentComponent.cpp"
        if (!*(void**)&State) appFailAssert("State", __FILE__, __LINE__, TEXT(""));
        (*(FDynamicLightEnvironmentState_**)&State)->sub_006ce960(DeltaTime);
    }
}

#line 443 "candidate.cpp"
