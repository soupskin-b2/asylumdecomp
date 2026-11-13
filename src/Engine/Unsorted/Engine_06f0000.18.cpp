// Engine_06f0000.cpp (part 18 of 18): 3 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    undefined4 sub_006f2590(byte);
};

int sub_0053dfa0(...);
int sub_007249d0(void);
// @baa 0x006f2590
undefined4 C::sub_006f2590(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_007249d0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// FInit_006f7ab0: a small record cleared on construction.
struct FInit_006f7ab0
{
	INT A; /* 0x0 */
	INT B; /* 0x4 */
	INT C; /* 0x8 */
	BYTE Flag; /* 0xc */

	FInit_006f7ab0* Init();
};

// @baa 0x006f7ab0
FInit_006f7ab0* FInit_006f7ab0::Init()
{
	A = 0;
	B = 0;
	C = 0;
	Flag = 0;
	return this;
}

// FInit_006f7ac0: a small record cleared on construction.
struct FInit_006f7ac0
{
	INT A; /* 0x0 */
	INT B; /* 0x4 */
	INT C; /* 0x8 */
	BYTE Flag; /* 0xc */

	FInit_006f7ac0* Init();
};

// @baa 0x006f7ac0
FInit_006f7ac0* FInit_006f7ac0::Init()
{
	A = 0;
	B = 0;
	C = 0;
	Flag = 0;
	return this;
}
