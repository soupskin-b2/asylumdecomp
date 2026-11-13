// Engine_0540000.cpp: 32 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

// @baa 0x00540370
UINT UDistributionVector::vf_110() { return 1; }

// @baa 0x00540380
UINT UDistributionVector::vf_114(INT a0) { return 0; }

// @baa 0x00540390
int UDistributionVector::vf_118(void) { return 0; }

// @baa 0x005403a0
uint UDistributionVector::vf_128(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 0x40) & 1;
}

int sub_00540300(void);
int sub_005c7a70(...);
// @baa 0x005403b0
undefined4 UDistributionVector::sub_005403b0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;
  sub_00540300();
  if ((param_2 & 1) != 0) {
    sub_005c7a70(param_1,0x44);
  }
  return param_1;
}

int sub_0059ce40(void);
int sub_005a1350(...);
extern undefined4 g_0268d090;
// @baa 0x005403d0
int sub_005403d0(void)
{
  if (g_0268d090 == 0) {
    g_0268d090 = sub_005a1350(L"Core");
    sub_0059ce40();
  }
  return g_0268d090;
}

int sub_0059cce0(void);
int sub_005aa470(...);
extern undefined4 g_0268d08c;
// @baa 0x00540400
int sub_00540400(void)
{
  if (g_0268d08c == 0) {
    g_0268d08c = sub_005aa470(L"Core");
    sub_0059cce0();
  }
  return g_0268d08c;
}

struct C {
    INT* Unk00; // 0x00
    INT Value04; // 0x04
    C* sub_00541b20();
};

extern INT g_01e72f10;
// @baa 0x00541b20
C* C::sub_00541b20()
{
    Value04 = 0;
    Unk00 = &g_01e72f10;
    return this;
}

DWORD __stdcall sub_00541b30(DWORD);
// @baa 0x00541b30
DWORD __stdcall sub_00541b30(DWORD a1)
{
    return 0xFFFFFFFF;
}

// @baa 0x00541b40
DWORD __stdcall sub_00541b40(int a)
{
    return 0xFFFFFFFF;
}

// @baa 0x00541b50
int __stdcall sub_00541b50(int a0, int a1, int a2) { return 0; }

// @baa 0x00541b60
void __stdcall sub_00541b60(int a0) {  }

// @baa 0x00541b70
int __stdcall sub_00541b70(int a0) { return 0; }

// @baa 0x00541b80
int __stdcall sub_00541b80(int a0, int a1, int a2, int a3, int a4, int a5) { return 1; }

// @baa 0x00541b90
int __stdcall sub_00541b90(int a0, int a1, int a2, int a3, int a4) { return 0; }

// @baa 0x00541ba0
DWORD __stdcall sub_00541ba0(DWORD a, DWORD b, DWORD c, DWORD d)
{
  return 0xFFFFFFFF;
}

// @baa 0x00541bb0
int __stdcall sub_00541bb0(int a0, int a1) { return 0; }

// @baa 0x00541bc0
int __stdcall sub_00541bc0(int a0, int a1, int a2) { return 0; }

// @baa 0x00541bd0
void __stdcall sub_00541bd0(int a0, int a1, int a2, int a3) {  }

extern double g_01e729a8;
// @baa 0x00541be0
double __stdcall sub_00541be0(int dummy)
{
    return g_01e729a8;
}

// @baa 0x00541bf0
double __stdcall sub_00541bf0(int dummy)
{
    return g_01e729a8;
}

// @baa 0x00541c00
int sub_00541c00(void) { return 0; }

// @baa 0x00541c10
int __stdcall sub_00541c10(int a0, int a1) { return 0; }

// @baa 0x00541c20
int __stdcall sub_00541c20(int a0) { return 0; }

// @baa 0x00541c30
void __stdcall sub_00541c30(int a0, int a1) {  }

// @baa 0x00541c40
int __stdcall sub_00541c40(int a1, int a2, int a3, int a4)
{
    return -1;
}

// @baa 0x00541c50
DWORD __stdcall sub_00541c50(DWORD a1, DWORD a2) { return 0xFFFFFFFF; }

// @baa 0x00542300
int UDistributionVector::vf_000(void) { return 1; }

// @baa 0x00542310
bool UDistributionVector::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

int sub_0053ec70(void);
extern undefined * g_01e72a60;
extern undefined * g_01e734e8;
// @baa 0x00546c80
undefined4 * UTexture2D::sub_00546c80(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01e72a60);
  sub_0053ec70();
  *param_1 = (undefined4)(&g_01e734e8);
  param_1[5] = 1;
  return param_1;
}

struct UDistributionVector_ : public UDistributionVector
{
    void sub_005423f0(FVector& OutVector, FLOAT A, FLOAT B, FLOAT C);
};

// @baa 0x005423f0
void UDistributionVector_::sub_005423f0(FVector& OutVector, FLOAT A, FLOAT B, FLOAT C)
{
    OutVector.Z = OutVector.Y = OutVector.X = 0.f;
}

// @baa 0x00547740
/* TArray<UObject*>::ContainsItem, an out-of-line instance */
template UBOOL TArray<UObject*>::ContainsItem(UObject* const& Item) const;
