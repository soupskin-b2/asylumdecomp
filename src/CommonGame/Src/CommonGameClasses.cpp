// CommonGameClasses.cpp (part 1 of 12): 113 functions
// Placed here by: neighbours 78, callers 18, file 17.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x01510970
IMPLEMENT_CLASS_AT(URObjectPool, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\CommonGame\\Src\\CommonGameClasses.cpp", 38);

// @baa 0x01510a40
// @baa 0x0152ea00
IMPLEMENT_CLASS_AT(URScriptConversationFactoryNew, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\CommonGame\\Src\\CommonGameClasses.cpp", 40);

extern char g_022de490[];
struct S_0152ea20 { void sub_0060b3d0(); };

// @baa 0x0152ea20
void sub_0152ea20(S_0152ea20 *p) { if (p) { p->sub_0060b3d0(); *(int *)p = (int)g_022de490; } }

void sub_0152d640();
// @baa 0x0152eb30
void sub_0152eb30(void) { sub_0152d640(); }

// @baa 0x0152eb40
IMPLEMENT_CLASS_AT(URScriptConversation, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\CommonGame\\Src\\CommonGameClasses.cpp", 34);

// @baa 0x0152eb60
struct C { C* sub_0152f6c0(void); };

// @baa 0x0152f6c0
C* C::sub_0152f6c0(void) { return this; }

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

struct TConstSetBitIterator_0152f6d0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0152f6d0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0152f6d0& operator++();
};

TConstSetBitIterator_0152f6d0::TConstSetBitIterator_0152f6d0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0152f6d0
TConstSetBitIterator_0152f6d0& TConstSetBitIterator_0152f6d0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0152f6f0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0152f6f0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0152f6f0& operator++();
};

TConstSetBitIterator_0152f6f0::TConstSetBitIterator_0152f6f0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0152f6f0
TConstSetBitIterator_0152f6f0& TConstSetBitIterator_0152f6f0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0152f710 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0152f710(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0152f710& operator++();
};

TConstSetBitIterator_0152f710::TConstSetBitIterator_0152f710(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0152f710
TConstSetBitIterator_0152f710& TConstSetBitIterator_0152f710::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0152f730 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0152f730(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0152f730& operator++();
};

TConstSetBitIterator_0152f730::TConstSetBitIterator_0152f730(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0152f730
TConstSetBitIterator_0152f730& TConstSetBitIterator_0152f730::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0152f750 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0152f750(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0152f750& operator++();
};

TConstSetBitIterator_0152f750::TConstSetBitIterator_0152f750(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0152f750
TConstSetBitIterator_0152f750& TConstSetBitIterator_0152f750::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0152f940 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0152f940(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0152f940& operator++();
};

TConstSetBitIterator_0152f940::TConstSetBitIterator_0152f940(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0152f940
TConstSetBitIterator_0152f940& TConstSetBitIterator_0152f940::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_0152f990 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0152f990(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0152f990& operator++();
};

TConstSetBitIterator_0152f990::TConstSetBitIterator_0152f990(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0152f990
TConstSetBitIterator_0152f990& TConstSetBitIterator_0152f990::operator++()
{
    It.Advance();
    return *this;
}

int sub_0053dfa0(...);
int sub_0152db60(void);
// @baa 0x0152fa90
undefined4 UObject::sub_0152fa90(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0152db60();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_0152ffd0 {
    int sub_0152ffd0();
};

int sub_0152c060(void);
// @baa 0x0152ffd0
int C_0152ffd0::sub_0152ffd0(void)
{
    int param_1 = (int)this;

  sub_0152c060();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_0152fff0 {
    int sub_0152fff0();
};

int sub_0152c0c0(void);
// @baa 0x0152fff0
int C_0152fff0::sub_0152fff0(void)
{
    int param_1 = (int)this;

  sub_0152c0c0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x01530040
UINT AREmitter::vf_178() { return 1; }

// @baa 0x01530050
IMPLEMENT_CLASS_AT(AREmitter, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\CommonGame\\Src\\CommonGameClasses.cpp", 27);

// @baa 0x015300b0
int sub_00773ad0(void);
extern undefined * g_022dea20;
// @baa 0x015300e0
undefined4 * AHUD::sub_015300e0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_00773ad0();
  *param_1 = (undefined4)(&g_022dea20);
  return param_1;
}

// @baa 0x01530100
IMPLEMENT_CLASS_AT(ARHUDBase, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\CommonGame\\Src\\CommonGameClasses.cpp", 22);

// @baa 0x01530160
// @baa 0x01530230
IMPLEMENT_CLASS_AT(ARGameInfoBase, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\CommonGame\\Src\\CommonGameClasses.cpp", 21);

// @baa 0x015302f0
IMPLEMENT_CLASS_AT(ARGameReplicationInfoBase, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\CommonGame\\Src\\CommonGameClasses.cpp", 28);

// @baa 0x01530350
IMPLEMENT_CLASS_AT(ARAutoJezNode, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\CommonGame\\Src\\CommonGameClasses.cpp", 29);

// @baa 0x015303b0
// @baa 0x015303e0
IMPLEMENT_CLASS_AT(ARDynamicMenu, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\CommonGame\\Src\\CommonGameClasses.cpp", 23);

// @baa 0x01530490
// @baa 0x015304f0
IMPLEMENT_CLASS_AT(ARDebugMenu, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\CommonGame\\Src\\CommonGameClasses.cpp", 24);

// @baa 0x01530570
// @baa 0x015305d0
IMPLEMENT_CLASS_AT(ARPointSource, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\CommonGame\\Src\\CommonGameClasses.cpp", 31);

// @baa 0x01530630
// @baa 0x01530690
IMPLEMENT_CLASS_AT(ARRandomTimedSoundEmitter, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\CommonGame\\Src\\CommonGameClasses.cpp", 32);

// @baa 0x015306f0
struct C_view {
    int sub_00fbc0a0(int, int);
};

// @baa 0x01531890
void UTexture2D::sub_01531890(void)
{
    int param_1 = (int)this;
  ((C_view *)(this))->sub_00fbc0a0(*(int *)(param_1 + 4) - *(int *)(param_1 + 0x2c), 1);
  return;
}

struct C_view_015318a0 {
    int sub_0152fab0(int, int);
};

// @baa 0x015318a0
undefined4 UTexture2D::sub_015318a0(undefined4 param_2, undefined4 param_3)
{
    undefined4 param_1 = (undefined4)this;
  ((C_view_015318a0 *)(this))->sub_0152fab0(param_2, param_3);
  return param_1;
}

struct C_view_015318c0 {
    int sub_0152fb10(int, int);
};

// @baa 0x015318c0
void UTexture2D::sub_015318c0(void)
{
    int param_1 = (int)this;
  ((C_view_015318c0 *)(this))->sub_0152fb10(*(int *)(param_1 + 4) - *(int *)(param_1 + 0x2c), 1);
  return;
}

struct C_view_015319c0 {
    int sub_0152fbd0(int, int);
};

// @baa 0x015319c0
undefined4 UTexture2D::sub_015319c0(undefined4 param_2, undefined4 param_3)
{
    undefined4 param_1 = (undefined4)this;
  ((C_view_015319c0 *)(this))->sub_0152fbd0(param_2, param_3);
  return param_1;
}

struct C_view_01531bf0 {
    int sub_0152fdb0(int, int);
};

// @baa 0x01531bf0
void UTexture2D::sub_01531bf0(void)
{
    int param_1 = (int)this;
  ((C_view_01531bf0 *)(this))->sub_0152fdb0(*(int *)(param_1 + 4) - *(int *)(param_1 + 0x2c), 1);
  return;
}

struct C_view_01531cf0 {
    int sub_0152fe70(int, int);
};

// @baa 0x01531cf0
undefined4 UTexture2D::sub_01531cf0(undefined4 param_2, undefined4 param_3)
{
    undefined4 param_1 = (undefined4)this;
  ((C_view_01531cf0 *)(this))->sub_0152fe70(param_2, param_3);
  return param_1;
}

struct C_view_01531d10 {
    int sub_0152fed0(int, int);
};

// @baa 0x01531d10
int UTexture2D::sub_01531d10(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_view_01531d10 *)(this))->sub_0152fed0(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct C_view_01531d30 {
    int sub_0152ff50(int, int);
};

// @baa 0x01531d30
int UTexture2D::sub_01531d30(undefined4 param_2, undefined4 param_3)
{
    int param_1 = (int)this;
  ((C_view_01531d30 *)(this))->sub_0152ff50(param_2, param_3);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}

struct C_01531d50 {
    int sub_01531d50();
};

// @baa 0x01531d50
int C_01531d50::sub_01531d50(void)
{
    int param_1 = (int)this;

  sub_0152c060();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_01531d70 {
    int sub_01531d70();
};

// @baa 0x01531d70
int C_01531d70::sub_01531d70(void)
{
    int param_1 = (int)this;

  sub_0152c0c0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x01531d90
// @baa 0x01531dc0
// @baa 0x01531de0
// @baa 0x01531e20
// @baa 0x01531e50
// @baa 0x01531e80
// @baa 0x01531eb0
// @baa 0x01531ee0
// @baa 0x01531f10
void sub_01531450();
// @baa 0x01531f40
void sub_01531f40(void) { sub_01531450(); }

// @baa 0x01531f50
// @baa 0x01532010
// @baa 0x015320d0
// @baa 0x01532190
// @baa 0x01532250
// @baa 0x01532310
// @baa 0x015323d0
// @baa 0x01532490
// @baa 0x01532550
// @baa 0x01532610
void sub_01531520();
// @baa 0x015326d0
void sub_015326d0(void) { sub_01531520(); }

void sub_01531770();
// @baa 0x015326e0
void sub_015326e0(void) { sub_01531770(); }

struct C_015331d0 { C_015331d0* sub_015331d0(void); };

// @baa 0x015331d0
C_015331d0* C_015331d0::sub_015331d0(void) { return this; }

struct C_view_015331e0 {
    int sub_0152fab0(int, int);
};

// @baa 0x015331e0
int UTexture2D::sub_015331e0(undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
    int param_1 = (int)this;
  ((C_view_015331e0 *)(this))->sub_0152fab0(param_2, param_4);
  *(undefined4 *)(param_1 + 0x20) = param_2;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = param_3;
  return param_1;
}

struct C_view_01533270 {
    int sub_0152fbd0(int, int);
};

// @baa 0x01533270
int UTexture2D::sub_01533270(undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
    int param_1 = (int)this;
  ((C_view_01533270 *)(this))->sub_0152fbd0(param_2, param_4);
  *(undefined4 *)(param_1 + 0x20) = param_2;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = param_3;
  return param_1;
}

int sub_0152b810(void);
// @baa 0x015332c0
int UTexture2D::sub_015332c0(void)
{
    int param_1 = (int)this;

  sub_0152b810();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

int sub_0152b870(void);
// @baa 0x01533350
int UTexture2D::sub_01533350(void)
{
    int param_1 = (int)this;

  sub_0152b870();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_view_015334a0 {
    int sub_0152fe70(int, int);
};

// @baa 0x015334a0
int UTexture2D::sub_015334a0(undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
    int param_1 = (int)this;
  ((C_view_015334a0 *)(this))->sub_0152fe70(param_2, param_4);
  *(undefined4 *)(param_1 + 0x20) = param_2;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = param_3;
  return param_1;
}

struct C_015334f0 {
    int sub_015334f0();
};

// @baa 0x015334f0
int C_015334f0::sub_015334f0(void)
{
    int param_1 = (int)this;

  sub_0152c060();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_01533510 {
    int sub_01533510();
};

// @baa 0x01533510
int C_01533510::sub_01533510(void)
{
    int param_1 = (int)this;

  sub_0152c0c0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

int sub_0150f010(void);
int sub_01532610(...);
extern undefined4 g_026e0b70;
// @baa 0x01533530
int sub_01533530(void)
{
  if (g_026e0b70 == 0) {
    g_026e0b70 = sub_01532610(L"CommonGame");
    sub_0150f010();
  }
  return g_026e0b70;
}

int sub_0077ccd0(void);
extern undefined * g_022e0590;
// @baa 0x01533560
undefined4 * APlayerController::sub_01533560(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_0077ccd0();
  *param_1 = (undefined4)(&g_022e0590);
  return param_1;
}

// @baa 0x01533580
IMPLEMENT_CLASS_AT(ARPlayerControllerBase, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\CommonGame\\Src\\CommonGameClasses.cpp", 26);

// @baa 0x015335e0
int sub_0150e250(void);
int sub_01532250(...);
extern undefined4 g_026e0b48;
// @baa 0x01533610
int sub_01533610(void)
{
  if (g_026e0b48 == 0) {
    g_026e0b48 = sub_01532250(L"CommonGame");
    sub_0150e250();
  }
  return g_026e0b48;
}

int sub_0150dcb0(void);
int sub_01532010(...);
extern undefined4 g_026e0b34;
// @baa 0x01533640
int sub_01533640(void)
{
  if (g_026e0b34 == 0) {
    g_026e0b34 = sub_01532010(L"CommonGame");
    sub_0150dcb0();
  }
  return g_026e0b34;
}

int sub_0150db50(void);
int sub_01531f50(...);
extern undefined4 g_026e0b30;
// @baa 0x01533670
int sub_01533670(void)
{
  if (g_026e0b30 == 0) {
    g_026e0b30 = sub_01531f50(L"CommonGame");
    sub_0150db50();
  }
  return g_026e0b30;
}

int sub_0150e3b0(void);
int sub_01532310(...);
extern undefined4 g_026e0b4c;
// @baa 0x015336a0
int sub_015336a0(void)
{
  if (g_026e0b4c == 0) {
    g_026e0b4c = sub_01532310(L"CommonGame");
    sub_0150e3b0();
  }
  return g_026e0b4c;
}

int sub_0150e510(void);
int sub_015323d0(...);
extern undefined4 g_026e0b50;
// @baa 0x015336d0
int sub_015336d0(void)
{
  if (g_026e0b50 == 0) {
    g_026e0b50 = sub_015323d0(L"CommonGame");
    sub_0150e510();
  }
  return g_026e0b50;
}

int sub_0150de10(void);
int sub_015320d0(...);
extern undefined4 g_026e0b38;
// @baa 0x01533700
int sub_01533700(void)
{
  if (g_026e0b38 == 0) {
    g_026e0b38 = sub_015320d0(L"CommonGame");
    sub_0150de10();
  }
  return g_026e0b38;
}

int sub_0150e930(void);
int sub_01532550(...);
extern undefined4 g_026e0b5c;
// @baa 0x01533730
int sub_01533730(void)
{
  if (g_026e0b5c == 0) {
    g_026e0b5c = sub_01532550(L"CommonGame");
    sub_0150e930();
  }
  return g_026e0b5c;
}

void sub_01533100();
// @baa 0x01533760
void sub_01533760(void) { sub_01533100(); }

// @baa 0x015337b0
IMPLEMENT_CLASS_AT(URBarkSet, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\CommonGame\\Src\\CommonGameClasses.cpp", 36);

// @baa 0x01533820
struct C_01533860 { C_01533860* sub_01533860(int a0); };

// @baa 0x01533860
C_01533860* C_01533860::sub_01533860(int a0) { return this; }

// @baa 0x01533970
IMPLEMENT_CLASS_AT(URSeqAct_ChangeRain_None, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\CommonGame\\Src\\CommonGameClasses.cpp", 30);

// @baa 0x015339d0
// @baa 0x01533a00
// @baa 0x01533b10
bool ARDebugMenu::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x01534390
void sub_01534390(void) { sub_01531520(); }

// @baa 0x01534b90
void sub_01534b90(void) { sub_01531770(); }

struct C_01534ba0 { C_01534ba0* sub_01534ba0(void); };

// @baa 0x01534ba0
C_01534ba0* C_01534ba0::sub_01534ba0(void) { return this; }

struct C_01534bb0 {
    int sub_01534bb0();
};

// @baa 0x01534bb0
int C_01534bb0::sub_01534bb0(void)
{
    int param_1 = (int)this;

  sub_0152c060();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_01534bd0 {
    int sub_01534bd0();
};

// @baa 0x01534bd0
int C_01534bd0::sub_01534bd0(void)
{
    int param_1 = (int)this;

  sub_0152c0c0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x01534c50
int sub_01532190(...);
int sub_01533a00(void);
extern undefined4 g_026e0b3c;
// @baa 0x01534c70
int sub_01534c70(void)
{
  if (g_026e0b3c == 0) {
    g_026e0b3c = sub_01532190(L"CommonGame");
    sub_01533a00();
  }
  return g_026e0b3c;
}

// @baa 0x01534cc0
IMPLEMENT_CLASS_AT(URBarkFlagBase, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\CommonGame\\Src\\CommonGameClasses.cpp", 35);

// @baa 0x01534d30
// @baa 0x01534d50
// @baa 0x01534d70
// @baa 0x01534d90
// @baa 0x01534e50
// @baa 0x01534f10
// @baa 0x01537e70
// @baa 0x01537f70
// @baa 0x0153a110
IMPLEMENT_CLASS_AT(URPlayerInputBase, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\CommonGame\\Src\\CommonGameClasses.cpp", 25);

// @baa 0x0153a130
