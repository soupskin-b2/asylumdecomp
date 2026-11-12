// UnrealEd_0620000.cpp: 25 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

struct C {
    int sub_00621690(int);
    int sub_0061ee60(int);
};

// @baa 0x00621690
int C::sub_00621690(int param_2)
{
    int param_1 = (int)this;
  ((C *)(this))->sub_0061ee60(param_2);
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_2 + 0x3c);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_2 + 0x44);
  return param_1;
}

struct C_006216c0 {
    int sub_006216c0();
};

int sub_006214b0(void);
// @baa 0x006216c0
int C_006216c0::sub_006216c0(void)
{
    int param_1 = (int)this;

  sub_006214b0();
  *(undefined4 *)(param_1 + 0x54) = 0xffffffff;
  return param_1;
}

struct C_view {
    int sub_00621520(int);
};

// @baa 0x006218e0
void UObject::sub_006218e0(void)
{
    int param_1 = (int)this;
  ((C_view *)((*(char **)((char *)this + 0x10))))->sub_00621520(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

struct C_00621ab0 {
    int sub_00621ab0(undefined4);
    int sub_00621900(int);
};

// @baa 0x00621ab0
int C_00621ab0::sub_00621ab0(undefined4 param_2)
{
    int param_1 = (int)this;
  ((C_00621ab0 *)(this))->sub_00621900(param_2);
  *(undefined4 *)(param_1 + 0x54) = 0xffffffff;
  return param_1;
}

int sub_0060de60(void);
// @baa 0x00621ad0
int UPackageMap::sub_00621ad0(void)
{
    int param_1 = (int)this;

  sub_0060de60();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

void sub_00621770();
// @baa 0x00621b50
void sub_00621b50(void) { sub_00621770(); }

void sub_006217d0();
// @baa 0x00621b60
void sub_00621b60(void) { sub_006217d0(); }

// @baa 0x00621d60
int UPackageMap::sub_00621d60(void)
{
    int param_1 = (int)this;

  sub_0060de60();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

void sub_00621b70();
// @baa 0x00621e10
void sub_00621e10(void) { sub_00621b70(); }

void __stdcall sub_00621e20(int a, int b);
// @baa 0x00622010
void sub_00622010(void)
{
	sub_00621e20(1, 0);
}

void sub_00621cf0();
// @baa 0x00622060
void sub_00622060(void) { sub_00621cf0(); }

// @baa 0x00622070
int UPackageMap::sub_00622070(void)
{
    int param_1 = (int)this;

  sub_0060de60();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

struct C_00622090 { void sub_00621d80(int); C_00622090 *sub_00622090(int); };

// @baa 0x00622090
C_00622090 *C_00622090::sub_00622090(int a) { sub_00621d80(a); return this; }

// @baa 0x00622110
void sub_00622110(void) { sub_00621b70(); }

// @baa 0x0062c080
int sub_0062c080(int a0, int a1) { return a1; }

extern char g_01eaef94[];
struct C_0062c090 { C_0062c090* sub_0062c090(void); };

// @baa 0x0062c090
C_0062c090* C_0062c090::sub_0062c090(void) { *(int*)((char*)this + 0) = (int)g_01eaef94; return this; }

struct C_0062c0a0 { void sub_0062c0a0(void); };

// @baa 0x0062c0a0
void C_0062c0a0::sub_0062c0a0(void) { *(int*)((char*)this + 0) = (int)g_01eaef94; }

// @baa 0x0062c0b0
void __stdcall sub_0062c0b0(int a0) {  }

// @baa 0x0062c0c0
void __stdcall sub_0062c0c0(int a0, int a1) {  }

// @baa 0x0062c0d0
void __stdcall sub_0062c0d0(int a0, int a1) {  }

// @baa 0x0062c0e0
void __stdcall sub_0062c0e0(int a0, int a1) {  }

// @baa 0x0062c0f0
void __stdcall sub_0062c0f0(int a0, int a1) {  }

// @baa 0x0062c110
void __stdcall sub_0062c110(int a0, int a1, int a2) {  }

extern "C" INT sub_00623a10(INT A, INT B, const wchar_t* Str);
// @baa 0x00624ac0
void sub_00624ac0(INT A, INT B, const wchar_t* Str)
{
	Str = Str ? L"True" : L"False";
	sub_00623a10(A, B, Str);
}

struct UPackageMap_ : public UPackageMap
{
	void* sub_00622120(void* Obj, INT B); /* 00622120 */
	void* sub_00623550(void* Obj);        /* 00623550 */
};

// @baa 0x00623550
void* UPackageMap_::sub_00623550(void* Obj)
{
	void* R = sub_00622120(Obj, 1);
	if (R)
		*(INT*)((char*)R + 0x40) = 1;
	return R;
}
