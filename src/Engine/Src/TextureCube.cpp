// TextureCube.cpp: 15 functions
// Placed here by: neighbours 2, callers 1, file 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

struct C {
    undefined4 sub_0075bb50();
};

// @baa 0x0075bb50
undefined4 C::sub_0075bb50(void)
{
    int param_1 = (int)this;

  return *(undefined4 *)(*(int *)(param_1 + 0x17c) + 0xb0);
}

struct C_0075bb60 {
    undefined4 sub_0075bb60();
};

// @baa 0x0075bb60
undefined4 C_0075bb60::sub_0075bb60(void)
{
    int param_1 = (int)this;

  return *(undefined4 *)(*(int *)(param_1 + 0x17c) + 0xb4);
}

// @baa 0x007670f0
IMPLEMENT_CLASS_AT(UTextureCube, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\TextureCube.cpp", 12);

// @baa 0x00767250

// @baa 0x00754f50

// @baa 0x00755060
int UTextureCube::vf_000(void) { return 1; }

// @baa 0x00755070
bool UTextureCube::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

int sub_0053dfa0(...);
int sub_0075bb70(void);
// @baa 0x0075bd80
undefined4 UTextureCube::sub_0075bd80(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0075bb70();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x00760fd0
int UTextureCube::GetMaterialType(void) { return 32; }

// @baa 0x00760fe0

extern undefined4*g_026b0d94;
// @baa 0x00761790
void UTextureCube::sub_00761790(void)
{
int param_1=(int)this;

DWORD iVar1;

iVar1=*(int*)(param_1+0x14);
*(undefined4*)(param_1+0x14)=0;
if(iVar1!=0){
(*(int(__stdcall**)(uint))(*g_026b0d94+0x22c))((int)(iVar1));
}
iVar1=*(DWORD*)(param_1+0x18);
*(undefined4*)(param_1+0x18)=0;
if(iVar1!=0){
(*(int(__stdcall**)(int))(*g_026b0d94+0x25c))((int)(iVar1));
}
iVar1=*(int*)(param_1+0x48);
*(undefined4*)(param_1+0x48)=0;
if(0!=iVar1){
(*(int(__stdcall**)(int))(*g_026b0d94+0x228))((int)(iVar1));
}
return;
}

struct UTextureCube_ : public UTextureCube
{
	void sub_0075b630();
	int sub_00720bc0(int);

	void sub_00761800(int InArg)
	{
		sub_0075b630();
		sub_00720bc0(InArg);
	}
};

// @baa 0x00761800
void use_it(UTextureCube_ *T, int A)
{
	T->sub_00761800(A);
}

// @baa 0x00760fb0
DOUBLE UTextureCube::vf_10c() {
    int param_1 = (int)this;

  return (float10)*(int *)(param_1 + 0xb0);
}

// @baa 0x00761040

struct S_00761820 {
    void sub_0075b630();
    void sub_00720ef0();
    void sub_00761820();
};

// @baa 0x00761820
void S_00761820::sub_00761820() {
    sub_0075b630();
    sub_00720ef0();
}
