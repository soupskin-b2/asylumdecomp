// Engine_0760000.cpp (part 4 of 5): 5 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x00760fd0
int UTextureCube::GetMaterialType(void) { return 32; }

// @baa 0x00760fe0
IMPLEMENT_CLASS_AT(UTextureCube, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\TextureCube.cpp", 12);

int sub_0053dfa0(...);
int sub_0075b520(void);
// @baa 0x007615b0
undefined4 UTextureCube::sub_007615b0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0075b520();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

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
