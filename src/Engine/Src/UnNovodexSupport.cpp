// UnNovodexSupport.cpp: 33 functions
// Placed here by: neighbours 16, class 10, file 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x009d7970
void __stdcall sub_009d7970(int a0) {  }

// @baa 0x009d7980
void __stdcall sub_009d7980(int a0) {  }

// @baa 0x009d7990
void __stdcall sub_009d7990(int a0) {  }

// @baa 0x009d79a0
void __stdcall sub_009d79a0(int a0) {  }

// @baa 0x009d7db0
undefined4 sub_009d7db0(int param_1)
{
  return *(undefined4 *)(param_1 + 4);
}

// @baa 0x009d7dc0
undefined4 sub_009d7dc0(int param_1)
{
  return *(undefined4 *)(param_1 + 4);
}

typedef uint size_t;

struct C_view{
int sub_0040cf70(int);
};

int sub_006311e0(...);
void*sub_01a375f0(void*,void*,size_t);
extern undefined2 g_01e3f3dc;
extern undefined4 g_01fa036c;
extern undefined4 g_01fa03cc;
// @baa 0x009e3cd0
int UPhysicalMaterial::sub_009e3cd0(void*param_2,size_t param_3)
{
int param_1=(int)this;
int iVar1;
int*piVar2;
int iVar3;
if(*(int*)(param_1+4)==0){
sub_006311e0(&g_01fa03cc,
"e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnNovodexSupport.cpp"
,0x2e6,&g_01fa036c);
}
iVar1=*(int*)(*(int*)(param_1+4)+4);
((C_view*)((*(char**)(4+(char*)this))))->sub_0040cf70(param_3);
piVar2=*(int**)(param_1+4);
if((iVar1<0)||((iVar3=piVar2[1],iVar1>=iVar3&&((iVar1||(iVar3!=0)))))){
sub_006311e0("i>=0 && (i<ArrayNum||(i==0 && ArrayNum==0))",
"e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\Array.h"
,0x230,&g_01e3f3dc);
}
sub_01a375f0((void*)(*piVar2+iVar1),param_2,param_3);
return param_1;
}

// @baa 0x009f7390
IMPLEMENT_CLASS_AT(UPhysicalMaterial, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnPhysAsset.cpp", 21);

// @baa 0x009f73f0
// @baa 0x009f7420
int sub_009f7420(int a0, int a1) { return a1; }

int sub_005c7a20(void);
extern undefined * g_01fb3628;
// @baa 0x009f7430
undefined4 * UObject::sub_009f7430(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_01fb3628);
  return param_1;
}

struct C { C* sub_009f7450(void); };

// @baa 0x009f7450
C* C::sub_009f7450(void) { return this; }

// @baa 0x009f7460
IMPLEMENT_CLASS_AT(UPhysicalMaterialPropertyBase, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnPhysAsset.cpp", 22);

// @baa 0x009f74c0
void __stdcall sub_009f74c0(int* p, int unused)
{
    *p = 0;
}

// @baa 0x009f8920
undefined1 sub_009f8920(void)
{
  return 1;
}

// @baa 0x009f93a0
// @baa 0x009f94b0
int UPhysicalMaterial::vf_000(void) { return 1; }

// @baa 0x009f94c0
bool UPhysicalMaterial::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00a03230
int sub_0053dfa0(...);
extern undefined4 g_01fb3844;
// @baa 0x00a03d30
undefined4 * UPhysicalMaterial::sub_00a03d30(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01fb3844);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00a03ef0 {
    undefined4 * sub_00a03ef0(byte);
};

// @baa 0x00a03ef0
undefined4 * C_00a03ef0::sub_00a03ef0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01fb3844);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

extern char g_02406e04[];
struct C_00a03fc0 { void sub_00a03fc0(void); };

// @baa 0x00a03fc0
void C_00a03fc0::sub_00a03fc0(void) { *(int*)((char*)this + 0) = (int)g_02406e04; }

struct C_00a04180 {
    undefined4 * sub_00a04180(byte);
};

// @baa 0x00a04180
undefined4 * C_00a04180::sub_00a04180(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_02406e04));
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00a043e0 {
    undefined4 * sub_00a043e0(byte);
};

// @baa 0x00a043e0
undefined4 * C_00a043e0::sub_00a043e0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_02406e04));
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

extern "C" double fabs(double);
// @baa 0x00a044f0
float sub_00a044f0(float param_1)
{
  return (float)fabs(param_1);
}

struct C_00a046c0 {
    undefined4 * sub_00a046c0(byte);
};

// @baa 0x00a046c0
undefined4 * C_00a046c0::sub_00a046c0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_02406e04));
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

extern undefined * g_01fa3e7c;
// @baa 0x00a046e0
undefined4 * UPhysicalMaterial::sub_00a046e0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01fa3e7c);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x009d7b70
FVector sub_009d7b70(FLOAT* Src)
{
	FVector V;
	V.X = Src[0];
	V.Y = Src[1];
	V.Z = Src[2];
	return V;
}

// Shared virtual (URB_BodyInstance vtable slot 79): forwards to the object's own
// virtual slot at offset 0x30 with a parameter address and a fixed flag, returning this.
struct C009d7e10 {
    virtual void f_000();
    virtual void f_004();
    virtual void f_008();
    virtual void f_00c();
    virtual void f_010();
    virtual void f_014();
    virtual void f_018();
    virtual void f_01c();
    virtual void f_020();
    virtual void f_024();
    virtual void f_028();
    virtual void f_02c();
    virtual void f_030(int*, int);

    C009d7e10* sub_009d7e10(int Param);
};

// @baa 0x009d7e10
C009d7e10* C009d7e10::sub_009d7e10(int Param) {
    f_030(&Param, 4);
    return this;
}

// This body is linker-merged across several unrelated vtables (UPhysicalMaterial,
// UPhysicalMaterialPropertyBase, URB_BodyInstance); it only touches the object's
// vtable pointer, so it lives on a small standalone class.  It forwards the
// caller's value argument (by reference) plus a constant to its own virtual at
// vtable offset 0x30, and returns this.
struct sub_009d7e30_ {
    virtual void v00();
    virtual void v04();
    virtual void v08();
    virtual void v0c();
    virtual void v10();
    virtual void v14();
    virtual void v18();
    virtual void v1c();
    virtual void v20();
    virtual void v24();
    virtual void v28();
    virtual void v2c();
    virtual void v30(INT*, INT); /* slot 12, vtable offset 0x30 */

    sub_009d7e30_* sub_009d7e30(INT Value);
};

// @baa 0x009d7e30
sub_009d7e30_* sub_009d7e30_::sub_009d7e30(INT Value)
{
    v30(&Value, 4);
    return this;
}

struct S009d7e50
{
    virtual void vf_000();
    virtual void vf_004();
    virtual void vf_008();
    virtual void vf_00c();
    virtual void vf_010();
    virtual void vf_014();
    virtual void vf_018();
    virtual void vf_01c();
    virtual void vf_020();
    virtual void vf_024();
    virtual void vf_028();
    virtual void vf_02c();
    virtual void vf_030(int* P, int V);
    S009d7e50* sub_009d7e50(int R, int Unused);
};

// @baa 0x009d7e50
S009d7e50* S009d7e50::sub_009d7e50(int R, int Unused)
{
    vf_030(&R, 8);
    return this;
}

struct D009d7e50 : public S009d7e50
{
    void vf_030(int* P, int V); // keeps the vtable lookup out of line
};

// `this` starts with a vtable pointer; the call goes to virtual slot 12
// (vtable offset 0x30), a thiscall taking an int by reference and an int.
// The method returns `this`.
struct C_009d7dd0
{
    virtual void f00();
    virtual void f04();
    virtual void f08();
    virtual void f0c();
    virtual void f10();
    virtual void f14();
    virtual void f18();
    virtual void f1c();
    virtual void f20();
    virtual void f24();
    virtual void f28();
    virtual void f2c();
    virtual void target_0x30(int&, int);
    C_009d7dd0* sub_009d7dd0(int Arg);
};

// @baa 0x009d7dd0
C_009d7dd0* C_009d7dd0::sub_009d7dd0(int Arg)
{
    target_0x30(Arg, 1);
    return this;
}

// Merged virtual (slot 78 / 0x138 of URB_BodyInstance's vtable; address-bound as sub_009d7df0)
// shared by UPhysicalMaterial, UPhysicalMaterialPropertyBase and URB_BodyInstance.
// It asks its own vtable (slot 0x030) to run against the value P it is given, by reference, with
// mode 2, then returns this. The base carries one leading virtual so the target method lands at
// vtable offset 0x030.
struct sub_009d7df0_Base
{
    virtual ~sub_009d7df0_Base() {}
    virtual INT vf_004() = 0;
    virtual void vf_008() = 0;
    virtual void vf_00c() = 0;
    virtual void vf_010() = 0;
    virtual void vf_014() = 0;
    virtual void vf_018() = 0;
    virtual void vf_01c() = 0;
    virtual void vf_020() = 0;
    virtual void vf_024() = 0;
    virtual void vf_028() = 0;
    virtual void vf_02c() = 0;
    virtual void vf_030(int* P, INT Mode) = 0;

    sub_009d7df0_Base* sub_009d7df0(int P);
};

// @baa 0x009d7df0
sub_009d7df0_Base* sub_009d7df0_Base::sub_009d7df0(int P)
{
    this->vf_030(&P, 2);
    return this;
}
