// UnAudioNodes.cpp (part 1 of 3): 231 functions
// Placed here by: neighbours 143, class 53, file 18, callers 7.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x00c92f00
int sub_00c92f00(int a0, int a1) { return a1; }

// @baa 0x00c92f10
int sub_00c92f10(int a0, int a1) { return a1; }

// @baa 0x00c92f20
int sub_00c92f20(int a0, int a1) { return a1; }

// @baa 0x00c92f70
IMPLEMENT_CLASS_AT(USoundNode, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnAudioNodes.cpp", 343);

// @baa 0x00c93080
int USoundNode::vf_000(void) { return 1; }

// @baa 0x00c93090
bool USoundNode::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

struct C { C* sub_00c930d0(void); };

// @baa 0x00c930d0
C* C::sub_00c930d0(void) { return this; }

// @baa 0x00c930e0
int USoundNodeMixer::vf_000(void) { return 1; }

// @baa 0x00c930f0
int USoundNodeDistanceCrossFade::vf_000(void) { return 1; }

// @baa 0x00c931a0
int __stdcall sub_00c931a0(int a0) { return 0; }

int sub_0053dfa0(...);
// @baa 0x00c931f0
void USoundNodeWave::sub_00c931f0(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 0x188) != 0) {
    sub_0053dfa0(*(int *)(param_1 + 0x188));
    *(undefined4 *)(param_1 + 0x184) = 0;
    *(undefined4 *)(param_1 + 0x188) = 0;
  }
  return;
}

struct S {
    void sub_00c93220();
    void sub_005db340();
    void sub_00c932b0();
};

// @baa 0x00c932b0
void S::sub_00c932b0() {
    sub_00c93220();
    sub_005db340();
}

// @baa 0x00c932c0
float USoundNodeWave::vf_114(void) { return *(float*)((char*)this + 116); }

// @baa 0x00c932d0
int USoundNodeWave::vf_000(void) { return 1; }

// @baa 0x00c932e0
int USoundNodeAttenuation::vf_000(void) { return 1; }

// @baa 0x00c932f0
uint USoundNodeLooping::vf_118(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 0x40) & 1;
}

// @baa 0x00c93300
int USoundNodeLooping::vf_000(void) { return 1; }

// @baa 0x00c93310
int USoundNodeOscillator::vf_000(void) { return 1; }

// @baa 0x00c93320
int USoundNodeModulator::vf_000(void) { return 1; }

// @baa 0x00c93330
int USoundNodeModulatorContinuous::vf_000(void) { return 1; }

// @baa 0x00c93360
int USoundNodeAmbient::vf_000(void) { return 1; }

// @baa 0x00c93370
int USoundNodeAmbientNonLoop::vf_000(void) { return 1; }

// @baa 0x00c93380
FLOAT USoundNodeWaveParam::vf_114() {
  return (float10)0;
}

// @baa 0x00c93390
int USoundNodeWaveParam::vf_000(void) { return 1; }

// @baa 0x00c933a0
int USoundNodeRandom::vf_000(void) { return 1; }

// @baa 0x00c933b0
int USoundNodeDelay::vf_000(void) { return 1; }

// @baa 0x00c933c0
int USoundNodeConcatenator::vf_000(void) { return 1; }

// @baa 0x00c933d0
void sub_00c933d0(void) {  }

// @baa 0x00c933e0
int __stdcall sub_00c933e0(int a0, int a1, int a2, int a3, int a4) { return 1; }

// @baa 0x00c933f0
int __stdcall sub_00c933f0(int a0) { return 1; }

// @baa 0x00c93400
IMPLEMENT_CLASS_AT(USoundCue, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnAudioNodes.cpp", 2585);

// @baa 0x00c93510
int USoundCue::vf_000(void) { return 1; }

// @baa 0x00c93520
bool USoundCue::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

typedef uint size_t;

struct C_00cb0f90{
void sub_00cb0f90(int,int);
};

int sub_0053d240(...);
void*sub_0053df30(void*,void*,size_t);
int sub_0053df70(...);
int sub_006311e0(...);
extern undefined2 g_01e3f3dc;
// @baa 0x00cb0f90
void C_00cb0f90::sub_00cb0f90(int param_2,int param_3)
{
int*param_1=(int*)this;
int iVar1;
int iVar2;
if(param_3<0){
sub_006311e0("Count>=0",
"e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\Array.h"
,0x31a,&g_01e3f3dc);
}
if(param_1[1]<0){
sub_006311e0("ArrayNum>=0",
"e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\Array.h"
,0x31b,&g_01e3f3dc);
}
if(param_1[2]<param_1[1]){
sub_006311e0("ArrayMax>=ArrayNum",
"e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\Array.h"
,0x31c,&g_01e3f3dc);
}
if(param_2<0){
sub_006311e0("Index>=0",
"e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\Array.h"
,0x31d,&g_01e3f3dc);
}
if(param_2>param_1[1]){
sub_006311e0("Index<=ArrayNum",
"e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\Array.h"
,0x31e,&g_01e3f3dc);
}
iVar1=param_1[1];
iVar2=iVar1+param_3;
param_1[1]=iVar2;
if(iVar2>param_1[2]){
iVar2=sub_0053d240(iVar2,param_1[2],4);
param_1[2]=iVar2;
if((*param_1!=0)||(iVar2!=0)){
iVar2=sub_0053df70(*param_1,iVar2*4,8);
*param_1=iVar2;
}
}
sub_0053df30((void*)(*param_1+(param_2+param_3)*4),(void*)(*param_1+param_2*4),
(iVar1-param_2)*4);
return;
}

// @baa 0x00cb9650
IMPLEMENT_CLASS_AT(UDistributionFloatSoundParameter, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnAudioNodes.cpp", 2604);

// @baa 0x00cbb710
void sub_004025d0(void*);
struct D { void* p; ~D(){ if(0) sub_004025d0(p);} };

void sub_0053dfa0(void*);
struct C_00cbee50 { void* Data; int Num; int Max; void sub_00cbee50(); };

// @baa 0x00cbee50
void C_00cbee50::sub_00cbee50() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_view {
    int sub_00cc11b0();
    int sub_00cbaf40();
};

// @baa 0x00cc1200
void USoundNodeRandom::vf_144(void)
{
    int param_1 = (int)this;
  undefined4 uVar1;
  if (*(int *)(param_1 + 100) == -1) {
    if ((*(byte *)(param_1 + 0x4c) & 1) != 0) {
      ((C_view *)(this))->sub_00cc11b0();
    }
    uVar1 = ((C_view *)(this))->sub_00cbaf40();
    *(undefined4 *)(param_1 + 100) = uVar1;
  }
  return;
}

extern undefined4*g_026b0d94;
// @baa 0x00cc3340
void USoundNodeRandom::sub_00cc3340(void)
{
int param_1=(int)this;

int iVar1;

iVar1=*(int*)(param_1+0x24);
*(undefined4*)(param_1+0x24)=0;
if(iVar1!=0){
(*(int(__stdcall**)(int))(*g_026b0d94+0x230))((int)(iVar1));
}
iVar1=*(int*)(param_1+-4);
*(undefined4*)(param_1+-4)=0;
if(iVar1!=0){
(*(int(__stdcall**)(int))(*g_026b0d94+0x230))((int)(iVar1));
}
return;
}

// @baa 0x00cc5b10
// @baa 0x00cc5b80
void __stdcall sub_00cc5b80(int a0) {  }

// @baa 0x00cc5b90
int USoundNode::vf_110(int a0) { return 1; }

// @baa 0x00cc5ba0
UINT USoundNode::vf_118() { return 0; }

// @baa 0x00cc5bb0
int USoundNode::vf_128(void) { return 1; }

// @baa 0x00cc5bc0
FString USoundNode::vf_134()
{
    return TEXT("UnrealEd.SoundNodeHelper");
}

// @baa 0x00cc5bf0
int sub_005c7a20(void);
extern undefined * g_020869a0;
// @baa 0x00cc5c10
undefined4 * UObject::sub_00cc5c10(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_020869a0);
  return param_1;
}

// @baa 0x00cc5c30
IMPLEMENT_CLASS_AT(USoundNodeAmbient, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnAudioNodes.cpp", 1734);

// @baa 0x00cc5cf0
int USoundNodeAmbient::vf_128(void) { return 0; }

// @baa 0x00cc5d00
int USoundNodeAmbient::vf_110(int a0) { return 0; }

// @baa 0x00cc5d10
float USoundNodeAmbient::vf_114() {
    return 10000.0f;
}

// @baa 0x00cc5d20
extern undefined * g_02086c60;
// @baa 0x00cc5d50
undefined4 * UObject::sub_00cc5d50(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_02086c60);
  return param_1;
}

// @baa 0x00cc5d70
INT USoundNodeConcatenator::vf_128() {
  return 0xffffffff;
}

// @baa 0x00cc5d80
IMPLEMENT_CLASS_AT(USoundNodeConcatenator, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnAudioNodes.cpp", 2415);

// @baa 0x00cc5df0
extern undefined * g_02086da8;
// @baa 0x00cc5e10
undefined4 * UObject::sub_00cc5e10(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_02086da8);
  return param_1;
}

// @baa 0x00cc5e30
IMPLEMENT_CLASS_AT(USoundNodeMature, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnAudioNodes.cpp", 2716);

// @baa 0x00cc5e90
extern undefined * g_02086ef0;
// @baa 0x00cc5eb0
undefined4 * UObject::sub_00cc5eb0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_02086ef0);
  return param_1;
}

// @baa 0x00cc5ed0
INT USoundNodeMixer::vf_128() {
  return 0xffffffff;
}

// @baa 0x00cc5ee0
IMPLEMENT_CLASS_AT(USoundNodeMixer, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnAudioNodes.cpp", 397);

// @baa 0x00cc5f50
extern undefined * g_02087038;
// @baa 0x00cc5f70
undefined4 * UObject::sub_00cc5f70(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_02087038);
  return param_1;
}

// @baa 0x00cc5f90
INT USoundNodeRandom::vf_128() {
  return 0xffffffff;
}

// @baa 0x00cc5fa0
IMPLEMENT_CLASS_AT(USoundNodeRandom, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnAudioNodes.cpp", 2198);

// @baa 0x00cc6020
extern undefined * g_02087180;
// @baa 0x00cc6040
undefined4 * UObject::sub_00cc6040(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_02087180);
  return param_1;
}

// @baa 0x00cc6060
int USoundNodeWaveParam::vf_128(void) { return 1; }

// @baa 0x00cc6070
IMPLEMENT_CLASS_AT(USoundNodeWaveParam, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnAudioNodes.cpp", 1984);

// @baa 0x00cc60d0
// @baa 0x00cc63c0
int sub_00cc63c0(void) { return 1; }

// @baa 0x00cc63d0
int sub_00cc63d0(void) { return 1; }

// @baa 0x00cc63e0
void __stdcall sub_00cc63e0(int a0) {  }

// @baa 0x00cc63f0
void __stdcall sub_00cc63f0(int a0) {  }

// @baa 0x00cc6400
void __stdcall sub_00cc6400(int a0) {  }

struct C_00cc6410 {
    uint sub_00cc6410();
};

// @baa 0x00cc6410
uint C_00cc6410::sub_00cc6410(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 0x54) & 1;
}

// @baa 0x00cc6420
int __stdcall sub_00cc6420(int a0) { return 0; }

// @baa 0x00cc6430
void __stdcall sub_00cc6430(int a0, int a1) {  }

// @baa 0x00cc6440
void __stdcall sub_00cc6440(int a0, int a1) {  }

// @baa 0x00cc6450
void __stdcall sub_00cc6450(int a0, int a1) {  }

// @baa 0x00cc6460
void __stdcall sub_00cc6460(int a0, int a1) {  }

// @baa 0x00cc6470
int __stdcall sub_00cc6470(int a0) { return 1; }

// @baa 0x00cc6480
int __stdcall sub_00cc6480(int a0) { return 1; }

struct C_00cc64e0 { int sub_00cc64e0(void); };

// @baa 0x00cc64e0
int C_00cc64e0::sub_00cc64e0(void) { return *(int*)((char*)this + 72); }

struct C_00cc64f0 { int sub_00cc64f0(void); };

// @baa 0x00cc64f0
int C_00cc64f0::sub_00cc64f0(void) { return *(int*)((char*)this + 76); }

struct A_00cc6500 { virtual void sub_00cc65c0(); char pad[4]; };

struct B_00cc6500 { virtual void sub_00cc65c0(); };

struct C_00cc6500 : A_00cc6500, B_00cc6500 { virtual void sub_00cc65c0(); C_00cc6500(); };

C_00cc6500::C_00cc6500() {}

// @baa 0x00cc6500
void C_00cc6500::sub_00cc65c0() {}

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

struct TConstSetBitIterator_00cc7ff0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00cc7ff0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00cc7ff0& operator++();
};

TConstSetBitIterator_00cc7ff0::TConstSetBitIterator_00cc7ff0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00cc7ff0
TConstSetBitIterator_00cc7ff0& TConstSetBitIterator_00cc7ff0::operator++()
{
    It.Advance();
    return *this;
}

// @baa 0x00cca350
extern undefined * g_02087380;
// @baa 0x00cca370
undefined4 * UObject::sub_00cca370(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_02087380);
  return param_1;
}

// @baa 0x00cca390
IMPLEMENT_CLASS_AT(USoundNodeAttenuation, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnAudioNodes.cpp", 1383);

// @baa 0x00cca430
extern undefined * g_02086b18;
// @baa 0x00cca460
undefined4 * UObject::sub_00cca460(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_02086b18);
  return param_1;
}

extern undefined * g_020874c8;
// @baa 0x00cca480
undefined4 * UObject::sub_00cca480(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_020874c8);
  return param_1;
}

extern float g_01e52d38;
// @baa 0x00cca4a0
 // 10000.0f in .rdata
float USoundNodeAmbientNonLoop::vf_114(void) {
    return g_01e52d38;
}

// @baa 0x00cca4b0
IMPLEMENT_CLASS_AT(USoundNodeAmbientNonLoop, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnAudioNodes.cpp", 1932);

// @baa 0x00cca530
// @baa 0x00cca560
extern undefined * g_02087610;
// @baa 0x00cca580
undefined4 * UObject::sub_00cca580(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_02087610);
  return param_1;
}

// @baa 0x00cca5a0
IMPLEMENT_CLASS_AT(USoundNodeDelay, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnAudioNodes.cpp", 2267);

// @baa 0x00cca610
extern undefined * g_02087758;
// @baa 0x00cca630
undefined4 * UObject::sub_00cca630(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_02087758);
  return param_1;
}

// @baa 0x00cca650
IMPLEMENT_CLASS_AT(USoundNodeLooping, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnAudioNodes.cpp", 1540);

// @baa 0x00cca6c0
// @baa 0x00cca6e0
// @baa 0x00cca700
extern undefined * g_020878a0;
// @baa 0x00cca720
undefined4 * UObject::sub_00cca720(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_020878a0);
  return param_1;
}

// @baa 0x00cca740
IMPLEMENT_CLASS_AT(USoundNodeModulator, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnAudioNodes.cpp", 1604);

// @baa 0x00cca7c0
extern undefined * g_020879e8;
// @baa 0x00cca7e0
undefined4 * UObject::sub_00cca7e0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_020879e8);
  return param_1;
}

// @baa 0x00cca800
IMPLEMENT_CLASS_AT(USoundNodeModulatorContinuous, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnAudioNodes.cpp", 1625);

// @baa 0x00cca880
extern undefined * g_02087b30;
// @baa 0x00cca8a0
undefined4 * UObject::sub_00cca8a0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_02087b30);
  return param_1;
}

// @baa 0x00cca8c0
IMPLEMENT_CLASS_AT(USoundNodeOscillator, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnAudioNodes.cpp", 1578);

// @baa 0x00cca960
// @baa 0x00cca990
// @baa 0x00cca9b0
// @baa 0x00cca9d0
// @baa 0x00ccaa90
// @baa 0x00ccab50
// @baa 0x00ccac10
// @baa 0x00ccacd0
// @baa 0x00ccad90
// @baa 0x00ccd7f0
// @baa 0x00ccd810
// @baa 0x00ccd830
// @baa 0x00ccd850
// @baa 0x00ccd870
// @baa 0x00ccd890
// @baa 0x00ccd8b0
// @baa 0x00ccd8d0
void sub_00ccbf20();
// @baa 0x00ccd8f0
void sub_00ccd8f0(void) { sub_00ccbf20(); }

// @baa 0x00ccd900
// @baa 0x00ccda10
bool USoundNodeMixer::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00ccda50
IMPLEMENT_CLASS_AT(USoundNodeDistanceCrossFade, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnAudioNodes.cpp", 533);

// @baa 0x00ccdb60
bool USoundNodeDistanceCrossFade::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00ccdba0
IMPLEMENT_CLASS_AT(USoundNodeWave, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnAudioNodes.cpp", 1249);

// @baa 0x00ccdcb0
bool USoundNodeWave::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00ccdcf0
// @baa 0x00ccddb0
// @baa 0x00ccdec0
bool USoundNodeAttenuation::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00ccdf00
// @baa 0x00ccdfc0
// @baa 0x00cce0d0
bool USoundNodeLooping::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00cce110
// @baa 0x00cce1d0
// @baa 0x00cce2e0
bool USoundNodeOscillator::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00cce320
// @baa 0x00cce3e0
// @baa 0x00cce4f0
bool USoundNodeModulator::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00cce530
// @baa 0x00cce5f0
// @baa 0x00cce700
bool USoundNodeModulatorContinuous::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00cce740
// @baa 0x00cce800
// @baa 0x00cce910
bool USoundNodeAmbient::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00cce950
// @baa 0x00ccea10
// @baa 0x00cceb20
bool USoundNodeWaveParam::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00cceb60
// @baa 0x00ccec70
bool USoundNodeRandom::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00ccecb0
// @baa 0x00cced70
// @baa 0x00ccee80
bool USoundNodeDelay::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00cceec0
// @baa 0x00ccefd0
bool USoundNodeConcatenator::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00ccf010
// @baa 0x00ccf120
bool USoundNodeMature::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

struct M_00ccf160 { void sub_00ccc0c0(); };

struct C_00ccf160 { char pad[64]; M_00ccf160 m; void sub_00ccf160(); };

// @baa 0x00ccf160
void C_00ccf160::sub_00ccf160() { m.sub_00ccc0c0(); }

void sub_00ccc130();
// @baa 0x00ccf170
void sub_00ccf170(void) { sub_00ccc130(); }

struct C_00ccf180 { C_00ccf180* sub_00ccf180(void); };

// @baa 0x00ccf180
C_00ccf180* C_00ccf180::sub_00ccf180(void) { return this; }

struct C_00ccf190 { C_00ccf190* sub_00ccf190(void); };

// @baa 0x00ccf190
C_00ccf190* C_00ccf190::sub_00ccf190(void) { return this; }

struct TConstSetBitIterator_00ccf1a0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00ccf1a0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00ccf1a0& operator++();
};

TConstSetBitIterator_00ccf1a0::TConstSetBitIterator_00ccf1a0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00ccf1a0
TConstSetBitIterator_00ccf1a0& TConstSetBitIterator_00ccf1a0::operator++()
{
    It.Advance();
    return *this;
}

struct S_00ccf1c0 { int sub_00ccca10(); };

struct C_00ccf1c0 { int a; C_00ccf1c0(S_00ccf1c0 *); };

// @baa 0x00ccf1c0
C_00ccf1c0::C_00ccf1c0(S_00ccf1c0 *s) : a(s->sub_00ccca10()) {}

struct S_00ccf1e0 { int sub_00ccca70(); };

struct C_00ccf1e0 { int a; C_00ccf1e0(S_00ccf1e0 *); };

// @baa 0x00ccf1e0
C_00ccf1e0::C_00ccf1e0(S_00ccf1e0 *s) : a(s->sub_00ccca70()) {}

struct S_00ccf200 { int sub_00cccad0(); };

struct C_00ccf200 { int a; C_00ccf200(S_00ccf200 *); };

// @baa 0x00ccf200
C_00ccf200::C_00ccf200(S_00ccf200 *s) : a(s->sub_00cccad0()) {}

struct TConstSetBitIterator_00ccf220 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00ccf220(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00ccf220& operator++();
};

TConstSetBitIterator_00ccf220::TConstSetBitIterator_00ccf220(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00ccf220
TConstSetBitIterator_00ccf220& TConstSetBitIterator_00ccf220::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00ccf240 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00ccf240(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00ccf240& operator++();
};

TConstSetBitIterator_00ccf240::TConstSetBitIterator_00ccf240(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00ccf240
TConstSetBitIterator_00ccf240& TConstSetBitIterator_00ccf240::operator++()
{
    It.Advance();
    return *this;
}

struct C_view_00cd1b60 {
    int sub_00ccf690(int, int);
};

// @baa 0x00cd1b60
void UBrushComponent::sub_00cd1b60(void)
{
    int param_1 = (int)this;
  ((C_view_00cd1b60 *)(this))->sub_00ccf690(*(int *)(param_1 + 4) - *(int *)(param_1 + 0x2c), 1);
  return;
}

void sub_00cd1b00();
// @baa 0x00cd25b0
void sub_00cd25b0(void) { sub_00cd1b00(); }

void sub_00cd1b70();
// @baa 0x00cd25c0
void sub_00cd25c0(void) { sub_00cd1b70(); }

struct C_00cd26a0 { C_00cd26a0* sub_00cd26a0(void); };

// @baa 0x00cd26a0
C_00cd26a0* C_00cd26a0::sub_00cd26a0(void) { return this; }

struct C_00cd26b0 { C_00cd26b0* sub_00cd26b0(void); };

// @baa 0x00cd26b0
C_00cd26b0* C_00cd26b0::sub_00cd26b0(void) { return this; }

struct C_view_00cd26c0 {
    int sub_00ccf750(int, int);
};

// @baa 0x00cd26c0
int UBrushComponent::sub_00cd26c0(undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
    int param_1 = (int)this;
  ((C_view_00cd26c0 *)(this))->sub_00ccf750(param_2, param_4);
  *(undefined4 *)(param_1 + 0x20) = param_2;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = param_3;
  return param_1;
}

struct Block {
    int Unk00;   // 0x00
    int Unk04;   // 0x04
    int Unk08;   // 0x08
    int Unk0C;   // 0x0c
    int Unk10;   // 0x10
    int Unk14;   // 0x14
    int Unk18;   // 0x18
    int Unk1C;   // 0x1c
    int Unk20;   // 0x20
    int Unk24;   // 0x24
    int Unk28;   // 0x28
    int Unk2C;   // 0x2c
    void sub_00ccf690(int, int);
};

struct C_00cd26f0 {
    int Unk00;   // 0x00
    int Unk04;   // 0x04
    int Unk08;   // 0x08
    int Unk0C;   // 0x0c
    int Unk10;   // 0x10
    int Unk14;   // 0x14
    int Unk18;   // 0x18
    int Unk1C;   // 0x1c
    Block* Unk20;  // 0x20
    int Unk24;     // 0x24
    int Unk28;     // 0x28
    int Unk2C;     // 0x2c
    void sub_00cd26f0(void);
};

// @baa 0x00cd26f0
void C_00cd26f0::sub_00cd26f0(void)
{
    if (Unk24 != 0 && Unk28 != 0)
    {
        Unk20->sub_00ccf690(Unk20->Unk04 - Unk20->Unk2C, 1);
    }
}

struct TConstSetBitIterator_00cd2710 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00cd2710(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00cd2710& operator++();
};

TConstSetBitIterator_00cd2710::TConstSetBitIterator_00cd2710(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00cd2710
TConstSetBitIterator_00cd2710& TConstSetBitIterator_00cd2710::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_00cd2760 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_00cd2760(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_00cd2760& operator++();
};

TConstSetBitIterator_00cd2760::TConstSetBitIterator_00cd2760(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x00cd2760
TConstSetBitIterator_00cd2760& TConstSetBitIterator_00cd2760::operator++()
{
    It.Advance();
    return *this;
}

struct C_00cd27b0 { C_00cd27b0* sub_00cd27b0(void); };

// @baa 0x00cd27b0
C_00cd27b0* C_00cd27b0::sub_00cd27b0(void) { return this; }

int sub_00cc8150(void);
// @baa 0x00cd2830
int UBrushComponent::sub_00cd2830(void)
{
    int param_1 = (int)this;

  sub_00cc8150();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_view_00cd28b0 {
    int sub_00cd1df0(int, int);
};

// @baa 0x00cd28b0
undefined4 UBrushComponent::sub_00cd28b0(undefined4 param_2, undefined4 param_3)
{
    undefined4 param_1 = (undefined4)this;
  ((C_view_00cd28b0 *)(this))->sub_00cd1df0(param_2, param_3);
  return param_1;
}

struct C_view_00cd28d0 {
    int sub_00cd1e70(int, int);
};

// @baa 0x00cd28d0
int UBrushComponent::sub_00cd28d0(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_view_00cd28d0 *)(this))->sub_00cd1e70(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

int sub_00c99ce0(void);
int sub_00cd2210(...);
extern undefined4 g_026c3cd4;
// @baa 0x00cd28f0
int sub_00cd28f0(void)
{
  if (g_026c3cd4 == 0) {
    g_026c3cd4 = sub_00cd2210(L"Engine");
    sub_00c99ce0();
  }
  return g_026c3cd4;
}

void sub_00cd25d0();
// @baa 0x00cd2920
void sub_00cd2920(void) { sub_00cd25d0(); }

void sub_00cd1590();
// @baa 0x00cd2930
void sub_00cd2930(void) { sub_00cd1590(); }

int sub_00c998c0(void);
int sub_00cd2090(...);
extern undefined4 g_026c3cc8;
// @baa 0x00cd2940
int sub_00cd2940(void)
{
  if (g_026c3cc8 == 0) {
    g_026c3cc8 = sub_00cd2090(L"Engine");
    sub_00c998c0();
  }
  return g_026c3cc8;
}

int sub_00c99a20(void);
int sub_00cd2150(...);
extern undefined4 g_026c3ccc;
// @baa 0x00cd2970
int sub_00cd2970(void)
{
  if (g_026c3ccc == 0) {
    g_026c3ccc = sub_00cd2150(L"Engine");
    sub_00c99a20();
  }
  return g_026c3ccc;
}

extern undefined * g_020888b8;
// @baa 0x00cd29a0
undefined4 * UObject::sub_00cd29a0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_020888b8);
  return param_1;
}

// @baa 0x00cd29c0
INT USoundNodeDistanceCrossFade::vf_128() {
  return 0xffffffff;
}

// @baa 0x00cd29d0
// @baa 0x00cd2a40
// @baa 0x00cd9940
int UBrushComponent::sub_00cd9940(void)
{
    int param_1 = (int)this;

  sub_00cc8150();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_00cd9960 { C_00cd9960* sub_00cd9960(void); };

// @baa 0x00cd9960
C_00cd9960* C_00cd9960::sub_00cd9960(void) { return this; }

// @baa 0x00cd9b90
void sub_00cd9b90(void) { sub_00cd1590(); }

// @baa 0x00cd9c50
IMPLEMENT_CLASS_AT(UEngine, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnEngine.cpp", 235);

// @baa 0x00cd9c60
void sub_00cd9970();
// @baa 0x00cd9c80
void sub_00cd9c80(void) { sub_00cd9970(); }

// @baa 0x00cd9d80
// @baa 0x00cdbad0
int sub_005c7a70(...);
int sub_00cdba20(void);
// @baa 0x00cdbae0
undefined4 USoundCue::sub_00cdbae0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00cdba20();
  if ((param_2 & 1) != 0) {
    sub_005c7a70(param_1,0xd8);
  }
  return param_1;
}

int sub_00ccda50(void);
int sub_00cd9d80(...);
extern undefined4 g_026c3c68;
// @baa 0x00cdbb10
int sub_00cdbb10(void)
{
  if (g_026c3c68 == 0) {
    g_026c3c68 = sub_00cd9d80(L"Engine");
    sub_00ccda50();
  }
  return g_026c3c68;
}

// @baa 0x00cdbbf0
int USoundNodeWave::vf_128(void) { return 0; }

// @baa 0x00cdbc00
FString USoundNodeWave::vf_134()
{
    return TEXT("UnrealEd.SoundNodeWaveHelper");
}

int sub_00cdbc30(void);
// @baa 0x00cdbd90
undefined4 USoundCue::sub_00cdbd90(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00cdbc30();
  if ((param_2 & 1) != 0) {
    sub_005c7a70(param_1,0x1f8);
  }
  return param_1;
}

// @baa 0x00cdbdc0
int sub_00c99b80(void);
int sub_00cda2c0(...);
extern undefined4 g_026c3cd0;
// @baa 0x00cdbe80
int sub_00cdbe80(void)
{
  if (g_026c3cd0 == 0) {
    g_026c3cd0 = sub_00cda2c0(L"Engine");
    sub_00c99b80();
  }
  return g_026c3cd0;
}

// @baa 0x00cdbef0
IMPLEMENT_CLASS_AT(UGameEngine, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnEngine.cpp", 236);

// @baa 0x00cdc000
bool UGameEngine::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00cdc040
// @baa 0x00cdc050

// @baa 0x00f208e0
void USoundCueFactoryNew::InitializeIntrinsicPropertyValues()
{
    SupportedClass = USoundCue::StaticClass();
    Description = TEXT("SoundCue");
    *(DWORD*)((BYTE*)this + 0x50) |= 3;                            /* bCreateNew, bEditAfterNew */
}

int sub_00ece430(...);
int sub_00f56370(...);
// @baa 0x00f56490
void USoundNodeWave::sub_00f56490(void)
{
    int param_1 = (int)this;

  undefined4 uVar1;
  
  uVar1 = sub_00ece430(param_1 + 0xe4,0x31);
  sub_00f56370(param_1,uVar1);
  return;
}

// EditorData is TMap<USoundNode*,FSoundNodeEditorData> in UE3; the header only has its script mirror.
struct FSoundNodeEditorDataMap : public FMap_Mirror_00cd1590
{
    void Empty(INT ExpectedNumElements = 0);
    friend FArchive& operator<<(FArchive& Ar, FSoundNodeEditorDataMap& Map);
};

// @baa 0x00cd2a60
void USoundCue::Serialize(FArchive& Ar)
{
    Super::Serialize(Ar);

    FSoundNodeEditorDataMap& EditorDataMap = (FSoundNodeEditorDataMap&)EditorData;
    Ar << EditorDataMap;

    // Empty when loading and we don't care about saving it again (GIsEditor is FALSE in this build).
    if (Ar.IsLoading())
    {
        EditorDataMap.Empty();
    }
}

// @baa 0x00c93560

// @baa 0x00c93670
int UDistributionFloatSoundParameter::vf_000(void) { return 1; }

// @baa 0x00c93680
bool UDistributionFloatSoundParameter::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00c936c0
INT USoundNodeMature::vf_128() {
  return 0xffffffff;
}

// @baa 0x00c936d0
int USoundNodeMature::vf_000(void) { return 1; }

// @baa 0x00cd06a0

// @baa 0x00cd07b0
bool USoundNodeAmbientNonLoop::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

/* Kit gap: UObject::MarkPackageDirty (0x005d9570) is only declared on UAnimSequence. */
struct UObject_ : public UObject
{
    void MarkPackageDirty(UBOOL InDirty = TRUE) const; /* 0x005d9570 */
};

// @baa 0x00c92f30
/* Editing a property marks the package dirty. */
void USoundCue::PostEditChange(UProperty* PropertyThatChanged)
{
    Super::PostEditChange(PropertyThatChanged);
    ((UObject_*)this)->MarkPackageDirty();
}

// @baa 0x00c92f50
/* Editing a property marks the package dirty. */
void USoundNode::PostEditChange(UProperty* PropertyThatChanged)
{
    Super::PostEditChange(PropertyThatChanged);
    ((UObject_*)this)->MarkPackageDirty();
}
