// UnNetDrv.cpp (part 3 of 3): 10 functions
// Placed here by: class 5.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

int sub_005c7a70(...);
int sub_00c1a4a0(void);
// @baa 0x00c1a5d0
undefined4 UNetDriver::sub_00c1a5d0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00c1a4a0();
  if ((param_2 & 1) != 0) {
    sub_005c7a70(param_1,0x150);
  }
  return param_1;
}

// @baa 0x00df4e30
void UNetDriver::vf_11c(void) {  }

// @baa 0x00df4e80
IMPLEMENT_CLASS_AT(UNetDriver, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnNetDrv.cpp", 807);

// @baa 0x00df4f90
int UNetDriver::vf_000(void) { return 1; }

// @baa 0x00df4fa0
bool UNetDriver::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

int sub_0061bbe0(void);
extern undefined * g_020e4070;
// @baa 0x00e14920
undefined4 * UPackageMap::sub_00e14920(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_0061bbe0();
  *param_1 = (undefined4)(&g_020e4070);
  return param_1;
}

struct C_00e14940 {
    undefined4 * sub_00e14940(undefined4);
};

// @baa 0x00e14940
undefined4 * C_00e14940::sub_00e14940(undefined4 param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_0061bbe0();
  param_1[0x2d] = param_2;
  *param_1 = (undefined4)(&g_020e4070);
  return param_1;
}

extern undefined * g_020e41b0;
// @baa 0x00e14990
undefined4 * UPackageMap::sub_00e14990(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_0061bbe0();
  *param_1 = (undefined4)(&g_020e41b0);
  return param_1;
}

// sub_005a9030 = int __thiscall TArray<T_005a9030 *>::RemoveItem(T_005a9030 * const &)
struct T_005a9030 {
    char *Ptr;
};

struct TArrayPtr_005a9030 : public T_005a9030 {
    int __thiscall RemoveItem(T_005a9030 * const &Item); /* 0x005a9030 */
};

extern volatile TArrayPtr_005a9030 *const g_0268d110;
extern char g_01e8bd3c[];
struct S_005aa290 : public T_005a9030 {
    void sub_005aa290();
};

// @baa 0x005aa290
void S_005aa290::sub_005aa290()
{
    Ptr = g_01e8bd3c;
    (*(TArrayPtr_005a9030 *)&g_0268d110).RemoveItem(this);
}

// The out-of-line TArray<INT>::AddItem the engine calls (sub_00dfad80).
struct FIntArray_00dfdca0 : public TArray<INT>
{
	INT AddItem(const INT& Item);
};

// Appends a value to the integer list at +0x4.
struct FLoader_00dfdca0
{
	BYTE Header[0x4];
	TArray<INT> List; /* 0x4 */

	INT Add(INT Value);
};

// @baa 0x00dfdca0
INT FLoader_00dfdca0::Add(INT Value)
{
	return ((FIntArray_00dfdca0*)&List)->AddItem(Value);
}
