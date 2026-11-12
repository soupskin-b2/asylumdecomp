// RAnimUtil.cpp (part 1 of 2): 20 functions
// Placed here by: neighbours 8, file 7, callers 2.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

struct C {
    float10 sub_015980e0(float);
};

int sub_006311e0(...);
extern undefined4 g_02313d34;
// @baa 0x015980e0
float10 C::sub_015980e0(float param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  if (*param_1 == 0) {
    sub_006311e0("IsOk()",
                 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RAnimUtil.cpp"
                 ,0x50,&g_02313d34);
  }
  iVar1 = *param_1;
  if ((float10)*(float *)(iVar1 + 0x50) < (float10)0.0001) {
    return (float10)0;
  }
  return ((float10)*(float *)(iVar1 + 0x104) - (float10)*(float *)(iVar1 + 0x100)) *
         ((float10)*(float *)(iVar1 + 0x44) / (float10)*(float *)(iVar1 + 0x50)) * (float10)param_2;
}

struct C_01598280 {
    float10 sub_01598280();
};

extern undefined4 g_023144b4;
// @baa 0x01598280
float10 C_01598280::sub_01598280(void)
{
    int * param_1 = (int *)this;
  int iVar1;
  if (*param_1 == 0) {
    sub_006311e0("IsOk()",
                 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RAnimUtil.cpp"
                 ,0xa6,&g_023144b4);
  }
  iVar1 = *param_1;
  if ((float10)*(float *)(iVar1 + 0x50) < (float10)0.0001) {
    return (float10)0;
  }
  return ((float10)*(float *)(iVar1 + 0x104) - (float10)*(float *)(iVar1 + 0x100)) *
         ((float10)*(float *)(iVar1 + 0x44) / (float10)*(float *)(iVar1 + 0x50));
}

struct C_015982d0 {
    float10 sub_015982d0(float);
};

extern undefined4 g_02314574;
// @baa 0x015982d0
float10 C_015982d0::sub_015982d0(float param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  if (*param_1 == 0) {
    sub_006311e0("IsOk()",
                 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RAnimUtil.cpp"
                 ,0xb7,&g_02314574);
  }
  iVar1 = *param_1;
  return ((float10)param_2 / (float10)*(float *)(iVar1 + 0x44) - (float10)*(float *)(iVar1 + 0x100))
         / ((float10)*(float *)(iVar1 + 0x104) - (float10)*(float *)(iVar1 + 0x100));
}

struct C_01598320 {
    float10 sub_01598320(float);
};

extern undefined4 g_02314634;
// @baa 0x01598320
float10 C_01598320::sub_01598320(float param_2)
{
    int * param_1 = (int *)this;

  int iVar1;
  
  if (*param_1 == 0) {
    sub_006311e0("IsOk()",
                 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RAnimUtil.cpp"
                 ,0xc1,&g_02314634);
  }
  iVar1 = *param_1;
  return ((float10)param_2 / (float10)*(float *)(iVar1 + 0x44)) /
         ((float10)*(float *)(iVar1 + 0x104) - (float10)*(float *)(iVar1 + 0x100));
}

// @baa 0x01598550
undefined4 sub_01598550(float param_1, float param_2)
{
  if (0.0 < param_1 * param_1 + param_2 * param_2) {
    return 1;
  }
  return 0;
}

// @baa 0x015985b0
undefined4 sub_015985b0(float param_1, float param_2)
{
  if (0.0 < param_1 * param_1 + param_2 * param_2) {
    return 1;
  }
  return 0;
}

// @baa 0x01598880
undefined4 sub_01598880(undefined4 param_1)
{
  switch(param_1) {
  case 0:
    return 1;
  case 1:
    return 4;
  case 2:
    return 0xc;
  case 3:
    return 2;
  default:
    return 8;
  }
}

// @baa 0x015988c0
undefined4 sub_015988c0(int param_1)
{
  if (((param_1 != 1) && (param_1 != 2)) && (param_1 != 3)) {
    return 0;
  }
  return 1;
}

// @baa 0x01598ae0
void sub_01598ae0(void) {  }

// @baa 0x01598df0
wchar_t * sub_01598df0(undefined4 param_1)
{
  switch(param_1) {
  case 0:
    return L"Walking";
  case 1:
    return L"Flying";
  case 2:
    return L"Floating";
  case 3:
    return L"Falling";
  default:
    return L"ERROR";
  }
}

extern undefined4 g_023154bc;
extern undefined4 g_023154c4;
// @baa 0x01598ff0
undefined * sub_01598ff0(int param_1)
{
  undefined *puVar1;
  
  puVar1 = (undefined *)(&g_023154bc);
  if (param_1 == 0) {
    puVar1 = (undefined *)(&g_023154c4);
  }
  return puVar1;
}

// @baa 0x01599010
float10 sub_01599010(int param_1)
{
  if (*(int *)(param_1 + 0x40) != 0) {
    return (float10)*(float *)(*(int *)(*(int *)(param_1 + 0x40) + 0xb0) + 0x2dc);
  }
  return (float10)0;
}

// @baa 0x0159bd90
IMPLEMENT_CLASS_AT(URAnimUtil, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RAnimUtil.cpp", 14);

// @baa 0x0159d960
struct C_0159dc60 {
    float10 sub_0159dc60();
};

extern undefined4 g_02314034;
extern undefined4 g_023141b4;
// @baa 0x0159dc60
float10 C_0159dc60::sub_0159dc60(void)
{
    int * param_1 = (int *)this;

  if (*param_1 == 0) {
    sub_006311e0("IsOk()",
                 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RAnimUtil.cpp"
                 ,0x76,&g_02314034);
    if (*param_1 == 0) {
      sub_006311e0("IsOk()",
                   "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RAnimUtil.cpp"
                   ,0x86,&g_023141b4);
    }
  }
  return (float10)1 - (float10)*(float *)(*param_1 + 0xfc);
}

// @baa 0x015b5fe0
IMPLEMENT_CLASS_AT(URSkelControlFootPlacement, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\BmGame\\Src\\RAnimUtil.cpp", 16);

// @baa 0x015b72e0

// @baa 0x01597f30

// @baa 0x01598040
int URSkelControlFootPlacement::vf_000(void) { return 1; }

// @baa 0x01598050
bool URSkelControlFootPlacement::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}
