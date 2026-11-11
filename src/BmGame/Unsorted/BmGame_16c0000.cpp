// BmGame_16c0000.cpp (part 1 of 21): 150 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

struct C {
    int sub_016c5f70(int);
};

// @baa 0x016c5f70
int C::sub_016c5f70(int param_2)
{
    int * param_1 = (int *)this;
  return *param_1 + param_2 * 0x18;
}

struct C_016c5f80 {
    int sub_016c5f80();
};

// @baa 0x016c5f80
int C_016c5f80::sub_016c5f80(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

struct C_016c5fa0 {
    int sub_016c5fa0();
};

// @baa 0x016c5fa0
int C_016c5fa0::sub_016c5fa0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x18;
}

void sub_00765d90();
// @baa 0x016c5fb0
void sub_016c5fb0(void) { sub_00765d90(); }

void sub_00549160();
// @baa 0x016c5fc0
void sub_016c5fc0(void) { sub_00549160(); }

struct C_016c6040 {
    int sub_016c6040(int);
};

// @baa 0x016c6040
int C_016c6040::sub_016c6040(int param_2)
{
    int * param_1 = (int *)this;
  return *param_1 + param_2 * 0x18;
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

struct TConstSetBitIterator_016c6170 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_016c6170(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_016c6170& operator++();
};

TConstSetBitIterator_016c6170::TConstSetBitIterator_016c6170(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x016c6170
TConstSetBitIterator_016c6170& TConstSetBitIterator_016c6170::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_016c6190 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_016c6190(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_016c6190& operator++();
};

TConstSetBitIterator_016c6190::TConstSetBitIterator_016c6190(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x016c6190
TConstSetBitIterator_016c6190& TConstSetBitIterator_016c6190::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_016c61e0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_016c61e0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_016c61e0& operator++();
};

TConstSetBitIterator_016c61e0::TConstSetBitIterator_016c61e0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x016c61e0
TConstSetBitIterator_016c61e0& TConstSetBitIterator_016c61e0::operator++()
{
    It.Advance();
    return *this;
}

struct M_016c6230 { void sub_0095a7c0(); };

struct C_016c6230 { char pad[604]; M_016c6230 m; void sub_016c6230(); };

// @baa 0x016c6230
void C_016c6230::sub_016c6230() { m.sub_0095a7c0(); }

void sub_016c5c00();
// @baa 0x016c62d0
void sub_016c62d0(void) { sub_016c5c00(); }

void sub_016c5c60();
// @baa 0x016c62e0
void sub_016c62e0(void) { sub_016c5c60(); }

void sub_016c5cc0();
// @baa 0x016c62f0
void sub_016c62f0(void) { sub_016c5cc0(); }

void sub_016c5d20();
// @baa 0x016c6300
void sub_016c6300(void) { sub_016c5d20(); }

void sub_016c5d80();
// @baa 0x016c6310
void sub_016c6310(void) { sub_016c5d80(); }

void sub_016c5de0();
// @baa 0x016c6320
void sub_016c6320(void) { sub_016c5de0(); }

int sub_005c7a20(void);
extern undefined * g_023922f8;
// @baa 0x016c6330
undefined4 * UObject::sub_016c6330(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_023922f8);
  return param_1;
}

// @baa 0x016c6350
IMPLEMENT_CLASS_AT(URGuardRemovalController, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BMBossCrocClass.cpp", 19);

// @baa 0x016c63e0
void sub_016c5e40();
// @baa 0x016c6400
void sub_016c6400(void) { sub_016c5e40(); }

void sub_016c5eb0();
// @baa 0x016c6410
void sub_016c6410(void) { sub_016c5eb0(); }

void sub_016c5f10();
// @baa 0x016c6420
void sub_016c6420(void) { sub_016c5f10(); }

struct C_016c67f0 { C_016c67f0* sub_016c67f0(void); };

// @baa 0x016c67f0
C_016c67f0* C_016c67f0::sub_016c67f0(void) { return this; }

struct C_016c6800 { C_016c6800* sub_016c6800(void); };

// @baa 0x016c6800
C_016c6800* C_016c6800::sub_016c6800(void) { return this; }

struct C_016c6810 { C_016c6810* sub_016c6810(void); };

// @baa 0x016c6810
C_016c6810* C_016c6810::sub_016c6810(void) { return this; }

struct C_016c6820 { C_016c6820* sub_016c6820(void); };

// @baa 0x016c6820
C_016c6820* C_016c6820::sub_016c6820(void) { return this; }

struct C_016c6830 { C_016c6830* sub_016c6830(void); };

// @baa 0x016c6830
C_016c6830* C_016c6830::sub_016c6830(void) { return this; }

struct C_016c6840 { C_016c6840* sub_016c6840(void); };

// @baa 0x016c6840
C_016c6840* C_016c6840::sub_016c6840(void) { return this; }

struct C_016c6850 { C_016c6850* sub_016c6850(void); };

// @baa 0x016c6850
C_016c6850* C_016c6850::sub_016c6850(void) { return this; }

struct C_016c6860 { C_016c6860* sub_016c6860(void); };

// @baa 0x016c6860
C_016c6860* C_016c6860::sub_016c6860(void) { return this; }

struct C_016c6870 { C_016c6870* sub_016c6870(void); };

// @baa 0x016c6870
C_016c6870* C_016c6870::sub_016c6870(void) { return this; }

struct C_016c6880 {
    int sub_016c6880(int);
    int sub_016c5fd0(int, int);
};

// @baa 0x016c6880
int C_016c6880::sub_016c6880(int param_2)
{
    int * param_1 = (int *)this;
  ((C_016c6880 *)(this))->sub_016c5fd0((int)(&param_2), param_2);
  if (param_2 != -1) {
    return *param_1 + param_2 * 0x18;
  }
  return 0;
}

struct C_016c68b0 {
    int sub_016c68b0(int);
    int sub_016c5fd0(int, int);
};

// @baa 0x016c68b0
int C_016c68b0::sub_016c68b0(int param_2)
{
    int * param_1 = (int *)this;
  ((C_016c68b0 *)(this))->sub_016c5fd0((int)(&param_2), param_2);
  if (param_2 != -1) {
    return *param_1 + param_2 * 0x18;
  }
  return 0;
}

struct C_016c6960 {
    undefined4 sub_016c6960(byte);
};

int sub_0053dfa0(...);
int sub_016c66c0(void);
// @baa 0x016c6960
undefined4 C_016c6960::sub_016c6960(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_016c66c0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

void sub_007b9350();
// @baa 0x016c6980
void sub_016c6980(void) { sub_007b9350(); }

// @baa 0x016c6d40
IMPLEMENT_CLASS_AT(URCapeConfigFactoryNew, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RCapeComponent.cpp", 22);

extern undefined * g_02392658;
// @baa 0x016c6e40
undefined4 * UObject::sub_016c6e40(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_02392658);
  return param_1;
}

// @baa 0x016c6e60
IMPLEMENT_CLASS_AT(URCapeStateConfig, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RCapeComponent.cpp", 21);

// @baa 0x016c6ed0
struct TConstSetBitIterator_016c77d0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_016c77d0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_016c77d0& operator++();
};

TConstSetBitIterator_016c77d0::TConstSetBitIterator_016c77d0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x016c77d0
TConstSetBitIterator_016c77d0& TConstSetBitIterator_016c77d0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_016c8c30 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_016c8c30(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_016c8c30& operator++();
};

TConstSetBitIterator_016c8c30::TConstSetBitIterator_016c8c30(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x016c8c30
TConstSetBitIterator_016c8c30& TConstSetBitIterator_016c8c30::operator++()
{
    It.Advance();
    return *this;
}

struct C_016c8dc0 {
    int sub_016c8dc0();
};

int sub_016c6bc0(void);
// @baa 0x016c8dc0
int C_016c8dc0::sub_016c8dc0(void)
{
    int param_1 = (int)this;

  sub_016c6bc0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x016c8e10
IMPLEMENT_CLASS_AT(ARPontoonEdgeBlockerBase, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BMBossCrocClass.cpp", 16);

// @baa 0x016c8e80
// @baa 0x016c8ee0
IMPLEMENT_CLASS_AT(ARBatarangCamera, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RBatarangCamera.cpp", 11);

// @baa 0x016c8f40
// @baa 0x016c8fa0
IMPLEMENT_CLASS_AT(ARControllableChatteringTeethCamera, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RControllableChatteringTeethCamera.cpp", 13);

// @baa 0x016c9000
// @baa 0x016c91f0
IMPLEMENT_CLASS_AT(ARLineLauncherDirectorCamera, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RLineLauncherDirectorCamera.cpp", 6);

// @baa 0x016c9250
// @baa 0x016c92b0
IMPLEMENT_CLASS_AT(ARMultiTargetCamera, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RMultiTargetCamera.cpp", 10);

// @baa 0x016c9320
// @baa 0x016c9380
IMPLEMENT_CLASS_AT(ARSilentPredatorCamera, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RSilentPredatorCamera.cpp", 6);

// @baa 0x016c93e0
// @baa 0x016c9440
IMPLEMENT_CLASS_AT(ARCinematicCameraActor, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RCinematicCameraActor.cpp", 6);

// @baa 0x016c94b0
// @baa 0x016c9510
IMPLEMENT_CLASS_AT(ARCrocLineLauncherBlockingVolume, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BMBossCrocClass.cpp", 24);

// @baa 0x016c9570
// @baa 0x016c9630
IMPLEMENT_CLASS_AT(ARFracturablePontoonPropBase, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BMBossCrocClass.cpp", 21);

// @baa 0x016c9690
// @baa 0x016c96f0
IMPLEMENT_CLASS_AT(ARPawnBossCrocBase, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BMBossCrocClass.cpp", 15);

// @baa 0x016c97e0
// @baa 0x016c9840
IMPLEMENT_CLASS_AT(ARPawnBossScarecrowBase, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RBmBossScarecrowClass.cpp", 21);

// @baa 0x016c98f0
// @baa 0x016c9950
IMPLEMENT_CLASS_AT(ARBatarangTarget, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BMBossCrocClass.cpp", 23);

// @baa 0x016c99c0
// @baa 0x016c9a20
IMPLEMENT_CLASS_AT(ARBMBossManager, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RBmBossScarecrowClass.cpp", 19);

// @baa 0x016c9a80
// @baa 0x016c9ae0
IMPLEMENT_CLASS_AT(ARPlantPod, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RBmBossIvyClass.cpp", 18);

// @baa 0x016c9b50
// @baa 0x016c9bf0
IMPLEMENT_CLASS_AT(ARPontoonGateBase, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BMBossCrocClass.cpp", 22);

// @baa 0x016c9c50
// @baa 0x016c9cb0
IMPLEMENT_CLASS_AT(ARSoftBodyProjectile, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RBmBossIvyClass.cpp", 17);

// @baa 0x016c9d10
// @baa 0x016c9d90
ARSpecialMoveInstance_HoleGrab::ARSpecialMoveInstance_HoleGrab()
{
    StartLocation.Type = 0;
    StartLocation.AnimDir = 0;
    StartLocation.ActorInstance = 0;
}

int sub_005c7a70(...);
int sub_016c9d90(void);
// @baa 0x016c9df0
undefined4 ARSpecialMoveInstance_HoleGrab::sub_016c9df0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_016c9d90();
  if ((param_2 & 1) != 0) {
    sub_005c7a70(param_1,0x238);
  }
  return param_1;
}

// @baa 0x016c9e50
IMPLEMENT_CLASS_AT(ARRagdollWakeupVolume, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RRagdollWakeupVolume.cpp", 8);

// @baa 0x016c9eb0
int sub_016ae030(void);
int sub_016c7a30(...);
extern undefined4 g_026e212c;
// @baa 0x016c9ee0
int sub_016c9ee0(void)
{
  if (g_026e212c == 0) {
    g_026e212c = sub_016c7a30(L"BmGame");
    sub_016ae030();
  }
  return g_026e212c;
}

void sub_016c87d0();
// @baa 0x016c9f10
void sub_016c9f10(void) { sub_016c87d0(); }

void sub_016c88a0();
// @baa 0x016c9f20
void sub_016c9f20(void) { sub_016c88a0(); }

struct C_016ca350 {
    int sub_016ca350(undefined4, undefined4);
    int sub_016c8d40(int, int);
};

// @baa 0x016ca350
int C_016ca350::sub_016ca350(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_016ca350 *)(this))->sub_016c8d40(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct C_016ca370 {
    int sub_016ca370();
};

// @baa 0x016ca370
int C_016ca370::sub_016ca370(void)
{
    int param_1 = (int)this;

  sub_016c6bc0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

void sub_016ca190();
// @baa 0x016cc030
void sub_016cc030(void) { sub_016ca190(); }

struct C_016cc040 { C_016cc040* sub_016cc040(void); };

// @baa 0x016cc040
C_016cc040* C_016cc040::sub_016cc040(void) { return this; }

void sub_016ca200();
// @baa 0x016cc050
void sub_016cc050(void) { sub_016ca200(); }

struct C_016cc0a0 {
    int sub_016cc0a0();
};

// @baa 0x016cc0a0
int C_016cc0a0::sub_016cc0a0(void)
{
    int param_1 = (int)this;

  sub_016c6bc0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

extern undefined * g_023970c8;
// @baa 0x016cc0c0
undefined4 * UObject::sub_016cc0c0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_023970c8);
  return param_1;
}

// @baa 0x016cc210
IMPLEMENT_CLASS_AT(URSeqAct_CrocRelativeAnimCamera, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BMBossCrocClass.cpp", 20);

// @baa 0x016cc270
extern undefined * g_02397268;
// @baa 0x016cc2a0
undefined4 * UObject::sub_016cc2a0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_02397268);
  return param_1;
}

// @baa 0x016cc2c0
IMPLEMENT_CLASS_AT(URSeqAct_CrocTeleportFinalAttackRefPoints, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\BMBossCrocClass.cpp", 18);

// @baa 0x016cc320
extern undefined * g_02397408;
// @baa 0x016cc350
undefined4 * UObject::sub_016cc350(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_02397408);
  return param_1;
}

// @baa 0x016cc370
IMPLEMENT_CLASS_AT(URSeqAct_SetScarecrowCamera, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RBmBossScarecrowClass.cpp", 22);

// @baa 0x016cc3f0
extern undefined * g_023975b0;
// @baa 0x016cc420
undefined4 * UObject::sub_016cc420(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_023975b0);
  return param_1;
}

// @baa 0x016cc440
IMPLEMENT_CLASS_AT(URSeqAct_SetScarecrowPositionOnPath, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RBmBossScarecrowClass.cpp", 23);

// @baa 0x016cc4b0
extern undefined * g_02397750;
// @baa 0x016cc4e0
undefined4 * UObject::sub_016cc4e0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_02397750);
  return param_1;
}

struct C_016cc900 {
    int sub_016cc900();
};

// @baa 0x016cc900
int C_016cc900::sub_016cc900(void)
{
    int param_1 = (int)this;

  sub_016c6bc0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x016ccd80
void sub_016ccd80(void) { sub_016ca190(); }

// @baa 0x016cd8b0
void sub_016cd8b0(void) {  }

// @baa 0x016cd8c0
void sub_016cd8c0(void) {  }

// @baa 0x016cd920
int sub_016cd920(int a0, int a1) { return a1; }

// @baa 0x016cd930
int sub_016cd930(int a0, int a1) { return a1; }

// @baa 0x016cd940
int sub_016cd940(int a0, int a1) { return a1; }

// @baa 0x016cd950
int sub_016cd950(int a0, int a1) { return a1; }

struct C_016cd960 { C_016cd960* sub_016cd960(int a0); };

// @baa 0x016cd960
C_016cd960* C_016cd960::sub_016cd960(int a0) { return this; }

// @baa 0x016cda10
int sub_016cda10(int a0, int a1) { return a1; }

// @baa 0x016cda20
int sub_016cda20(int a0, int a1) { return a1; }

// @baa 0x016cda30
int sub_016cda30(int a0, int a1) { return a1; }

// @baa 0x016cda40
int sub_016cda40(int a0, int a1) { return a1; }

// @baa 0x016cda50
int sub_016cda50(int a0, int a1) { return a1; }

// @baa 0x016cda60
int sub_016cda60(int a0, int a1) { return a1; }

int sub_0157b010(...);
int sub_015847d0(void);
extern undefined4 g_026e113c;
// @baa 0x016cda70
int sub_016cda70(void)
{
  if (g_026e113c == 0) {
    g_026e113c = sub_0157b010(L"BmGame");
    sub_015847d0();
  }
  return g_026e113c;
}

// @baa 0x016cdaa0
int sub_016cdaa0(int a0, int a1) { return a1; }

// @baa 0x016cdab0
int sub_016cdab0(int a0, int a1) { return a1; }

// @baa 0x016cdaf0
int sub_016cdaf0(int a0, int a1) { return a1; }

// @baa 0x016cdb00
int sub_016cdb00(int a0, int a1) { return a1; }

struct C_016cdb10 { C_016cdb10* sub_016cdb10(void); };

// @baa 0x016cdb10
C_016cdb10* C_016cdb10::sub_016cdb10(void) { return this; }

// @baa 0x016cdb20
int sub_016cdb20(int a0, int a1) { return a1; }

// @baa 0x016cdb30
int sub_016cdb30(int a0, int a1) { return a1; }

extern char g_01ebc268[];
// @baa 0x016cdb40
int sub_016cdb40(void) { return (int)g_01ebc268; }

extern undefined * g_023a26c8;
// @baa 0x016cdb50
undefined4 * UObject::sub_016cdb50(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_023a26c8);
  return param_1;
}

// @baa 0x016cdb70
IMPLEMENT_CLASS_AT(URCapeRenderingComponent, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RCapeRenderingComponent.cpp", 11);

// @baa 0x016cdbd0
// @baa 0x016cdbf0
undefined4 sub_016cdbf0(undefined4 param_1, undefined4 param_2)
{
  return param_2;
}

// @baa 0x016cdc00
int sub_016cdc00(int a0, int a1) { return a1; }

extern undefined * g_023a2818;
// @baa 0x016cdc10
undefined4 * UObject::sub_016cdc10(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_023a2818);
  return param_1;
}

// @baa 0x016cdc30
IMPLEMENT_CLASS_AT(URB_ActualDistanceConstraintSetup, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RConstrainingComponent.cpp", 10);

// @baa 0x016cdc90
// @baa 0x016cdcc0
int sub_016cdcc0(int a0, int a1) { return a1; }

// @baa 0x016cdcd0
int sub_016cdcd0(int a0, int a1) { return a1; }

int sub_01719100(void);
int sub_0171b220(...);
extern undefined4 g_026e253c;
// @baa 0x016cdce0
int sub_016cdce0(void)
{
  if (g_026e253c == 0) {
    g_026e253c = sub_0171b220(L"BmGame");
    sub_01719100();
  }
  return g_026e253c;
}

int sub_005e1960(...);
extern undefined4 g_026667a8;
// @baa 0x016cdd10
void sub_016cdd10(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6)
{
  if (g_026e253c == 0) {
    g_026e253c = sub_0171b220(L"BmGame");
    sub_01719100();
  }
  sub_005e1960(g_026e253c,param_2,param_3,param_4,param_5,param_6,0,g_026667a8,0,0,0);
  return;
}

extern undefined * g_023a2928;
// @baa 0x016cdd70
undefined4 * UObject::sub_016cdd70(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_023a2928);
  return param_1;
}

// @baa 0x016cde10
// @baa 0x016cdf40
bool URCapeRenderingComponent::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x016cdfc0
IMPLEMENT_CLASS_AT(URCapeSkeletalMeshComponent, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RCapeSkeletalMeshComponent.cpp", 12);

// @baa 0x016ce0d0
int URCapeSkeletalMeshComponent::vf_000(void) { return 1; }

// @baa 0x016ce0e0
bool URCapeSkeletalMeshComponent::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

struct C_016cee80 {
    undefined4 sub_016cee80();
};

// @baa 0x016cee80
undefined4 C_016cee80::sub_016cee80(void)
{
    int param_1 = (int)this;
  undefined4 uVar1;
  uVar1 = 1;
  if ((*(char *)(param_1 + 0x3c) == '\0') && (*(float *)(param_1 + 0x7c) <= 0.0)) {
    uVar1 = 0;
  }
  return uVar1;
}

int sub_0160ecb0(void);
int sub_0162da50(...);
extern undefined4 g_026e199c;
// @baa 0x016ceea0
int sub_016ceea0(void)
{
  if (g_026e199c == 0) {
    g_026e199c = sub_0162da50(L"BmGame");
    sub_0160ecb0();
  }
  return g_026e199c;
}

struct C_016ceed0 { C_016ceed0* sub_016ceed0(void); };

// @baa 0x016ceed0
C_016ceed0* C_016ceed0::sub_016ceed0(void) { return this; }

struct C_016ceee0 { C_016ceee0* sub_016ceee0(int a0); };

// @baa 0x016ceee0
C_016ceee0* C_016ceee0::sub_016ceee0(int a0) { return this; }

struct C_016ceef0 { C_016ceef0* sub_016ceef0(int a0); };

// @baa 0x016ceef0
C_016ceef0* C_016ceef0::sub_016ceef0(int a0) { return this; }

struct C_016cef00 { C_016cef00* sub_016cef00(int a0); };

// @baa 0x016cef00
C_016cef00* C_016cef00::sub_016cef00(int a0) { return this; }

struct C_016cef10 { C_016cef10* sub_016cef10(int a0); };

// @baa 0x016cef10
C_016cef10* C_016cef10::sub_016cef10(int a0) { return this; }

struct C_016cef20 { C_016cef20* sub_016cef20(int a0); };

// @baa 0x016cef20
C_016cef20* C_016cef20::sub_016cef20(int a0) { return this; }
