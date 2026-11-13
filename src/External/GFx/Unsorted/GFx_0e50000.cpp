// GFx_0e50000.cpp: 4 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

int sub_00e43100(void);
int sub_00e48f10(...);
extern undefined4 g_026caed0;
// @baa 0x00e51ff0
int sub_00e51ff0(void)
{
  if (g_026caed0 == 0) {
    g_026caed0 = sub_00e48f10(L"GFxUI");
    sub_00e43100();
  }
  return g_026caed0;
}

struct C {
    undefined4 * sub_00e52110();
    int sub_00e48990(int);
};

extern undefined4 g_02106ea4;
extern undefined4 g_027b897c;
// @baa 0x00e52110
undefined4 * C::sub_00e52110(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C *)(this))->sub_00e48990(10);
  g_027b897c = 0;
  *param_1 = (undefined4)(&g_02106ea4);
  return param_1;
}

extern "C" __declspec(dllimport) long __stdcall InterlockedExchangeAdd(long volatile* Addend, long Value);
struct C_00e521a0
{
    char pad_00[0x4];
    long Counter;

    void sub_00e521a0();
};

// @baa 0x00e521a0
void C_00e521a0::sub_00e521a0()
{
    InterlockedExchangeAdd(&Counter, 1);
}

// FVtObject_00e52190: its class's vtable is installed and the trailing word set.
extern const unsigned char g_02106218;
struct FVtObject_00e52190
{
	const void* ClassVTable; /* 0x0 */
	void* Owner; /* 0x4 */

	FVtObject_00e52190* Init();
};

// @baa 0x00e52190
FVtObject_00e52190* FVtObject_00e52190::Init()
{
	ClassVTable = &g_02106218;
	Owner = (void*)1;
	return this;
}
