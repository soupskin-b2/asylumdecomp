// BmGame_1730000.cpp (part 21 of 22): 3 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

int sub_005c7a20(void);
extern undefined * g_023cecf8;
// @baa 0x017333e0
undefined4 * UObject::sub_017333e0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_023cecf8);
  return param_1;
}

struct ARDisruptableObjectDoor_ : public ARDisruptableObjectDoor
{
	void sub_007771e0(int Param);
	void sub_01732370();
	void sub_01732630(int Param);
};

// @baa 0x01732630
void ARDisruptableObjectDoor_::sub_01732630(int Param)
{
	sub_007771e0(Param);
	sub_01732370();
}

// Virtual slot 0x04c of ARDisruptableObjectDoor: forwards the parameter to
// sub_00783b70, then runs sub_01732370.
struct ARDisruptableObjectDoor__01732650 : public ARDisruptableObjectDoor {
	int sub_00783b70(int Param);
	void sub_01732370();
	void sub_01732650(UINT Param);
};

// @baa 0x01732650
void ARDisruptableObjectDoor__01732650::sub_01732650(UINT Param)
{
	sub_00783b70(Param);
	sub_01732370();
}
