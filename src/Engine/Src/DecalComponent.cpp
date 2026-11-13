// DecalComponent.cpp (part 1 of 3): 34 functions
// Placed here by: class 13, neighbours 11, callers 5, file 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x0064de30
IMPLEMENT_CLASS_AT(UDecalComponent, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\DecalComponent.cpp", 12);

// @baa 0x0064df40
int UDecalComponent::vf_000(void) { return 1; }

// @baa 0x0064df50
bool UDecalComponent::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

extern undefined4 g_025d74f0;
// @baa 0x0064e000
void UDecalComponent::sub_0064e000(void)
{
    int param_1 = (int)this;

  if ((*(byte *)(param_1 + 0x218) & 2) == 0) {
    g_025d74f0 = g_025d74f0 + 1;
    *(int *)(param_1 + 0x270) = g_025d74f0;
  }
  return;
}

extern int g_01ebc274;
// A small two-dword value struct used by DecalComponent.cpp.
struct FDecalValue
{
    FDecalValue* sub_0064e020(int* Src);
    int Value;  // 0x0
    int Unk04;  // 0x4
};

// @baa 0x0064e020
FDecalValue* FDecalValue::sub_0064e020(int* Src)
{
    Value = (int)&g_01ebc274;
    Unk04 = *Src;
    return this;
}

extern char g_01eb5094[];
// @baa 0x0064e040
int sub_0064e040(void) { return (int)g_01eb5094; }

extern char g_01ebb554[];
// @baa 0x0064e050
void UDecalComponent::sub_0064e050(void) { *(int*)((char*)this + 0) = (int)g_01ebb554; }

int sub_0053dfa0(...);
// @baa 0x0064e060
undefined4 * UDecalComponent::sub_0064e060(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ebb554);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_00765d00(void);
// @baa 0x0064e0c0
void UDecalComponent::sub_0064e0c0(undefined4 param_2)
{
    int param_1 = (int)this;

  *(undefined4 *)(param_1 + 0x1a4) = param_2;
  sub_00765d00();
  return;
}

// @baa 0x0064e0e0
int UDecalComponent::sub_0064e0e0(void) { return *(int*)((char*)this + 420); }

// @baa 0x0064e0f0
int UDecalComponent::vf_200(void) { return 1; }

struct C{
int sub_0065a140(undefined4*);
};

int sub_0053d240(...);
undefined4 sub_0053df70(...);
// @baa 0x0065a140
int C::sub_0065a140(undefined4*param_2)
{
int*param_1=(int*)this;

undefined4*puVar1;
int iVar2;
int iVar3;

iVar2=param_1[1];
iVar3=iVar2+1;
param_1[1]=iVar3;
if(iVar3>param_1[2]){
iVar3=sub_0053d240(iVar3,param_1[2],4);
param_1[2]=iVar3;
if((*param_1!=0)||(iVar3)){
iVar3=sub_0053df70(*param_1,iVar3*4,8);
*param_1=iVar3;
}
}
puVar1=(undefined4*)(*param_1+4*iVar2);
if((undefined4*)0x0!=puVar1){
*puVar1=*param_2;
}
return iVar2;
}

void sub_004025d0(void*);
struct D { void* p; ~D(){ if(0) sub_004025d0(p);} };

void sub_0053dfa0(void*);
struct C_00666890 { void* Data; int Num; int Max; void sub_00666890(); };

// @baa 0x00666890
void C_00666890::sub_00666890() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_00667050 { void* Data; int Num; int Max; void sub_00667050(); };

// @baa 0x00667050
void C_00667050::sub_00667050() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_006671d0 { void* Data; int Num; int Max; void sub_006671d0(); };

// @baa 0x006671d0
void C_006671d0::sub_006671d0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

int sub_00674b00(void);
// @baa 0x006858e0
undefined4 UDecalComponent::sub_006858e0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00674b00();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x00689eb0
// @baa 0x00689f70
// @baa 0x0068cea0
// @baa 0x0068cec0
struct C_00693f80 {
    undefined4 sub_00693f80();
};

int sub_0064de30(void);
int sub_0068cec0(...);
int sub_00693fcf(...);
extern undefined4 g_026aeeb0;
// @baa 0x00693f80
undefined4 C_00693f80::sub_00693f80(void)
{
    int param_1 = (int)this;

  int iVar1;
  
  if (*(int *)(param_1 + 0x2c) != 0) {
    if (g_026aeeb0 == 0) {
      g_026aeeb0 = sub_0068cec0(L"Engine");
      sub_0064de30();
      if (g_026aeeb0 == 0) {
sub_00693fcf:
        return *(undefined4 *)(param_1 + 0x2c);
      }
    }
    for (iVar1 = *(int *)(*(int *)(param_1 + 0x2c) + 0x28); iVar1 != 0;
        iVar1 = *(int *)(iVar1 + 0x30)) {
      if (iVar1 == g_026aeeb0) goto sub_00693fcf;
    }
  }
  return 0;
}

// @baa 0x0069b810
uint UMaterial::vf_15c(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 0x20c) >> 0x19 & 1;
}

int sub_005c7a70(...);
int sub_0069b750(void);
// @baa 0x0069b820
undefined4 UMaterial::sub_0069b820(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0069b750();
  if ((param_2 & 1) != 0) {
    sub_005c7a70(param_1,0x2a4);
  }
  return param_1;
}

int sub_006d6440(void);
extern undefined * g_01ec10c0;
// @baa 0x0069b9d0
undefined4 * UMaterial::sub_0069b9d0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_006d6440();
  *param_1 = (undefined4)(&g_01ec10c0);
  return param_1;
}

// @baa 0x0069b9f0
IMPLEMENT_CLASS_AT(UDecalMaterial, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\DecalRenderData.cpp", 11);

// @baa 0x0069ba50
// @baa 0x006a6bd0
int sub_006a6bd0(void) { return 1689; }

// @baa 0x006a6be0
int ULensFlare::sub_006a6be0(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 0x84) * 4;
}

// @baa 0x006a6bf0
int ULensFlare::sub_006a6bf0(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 0x84) * 4 + 0x270;
}

int sub_006a6c00(void);
// @baa 0x006a6c60
undefined4 ULensFlare::sub_006a6c60(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_006a6c00();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x0064e080
UBOOL UDecalComponent::IsReadyForFinishDestroy()
{
	if (ReleaseResourcesFence)
	{
		return ReleaseResourcesFence->GetNumPendingFences() == 0 && Super::IsReadyForFinishDestroy();
	}
	return Super::IsReadyForFinishDestroy();
}

// @baa 0x0069a3d0
/* DecalComponent.cpp */
void UDecalComponent::BeginDestroy()
{
	Super::BeginDestroy();
	this->ReleaseResources(FALSE, NULL);
	this->FreeStaticReceivers();
}

/* GSystemSettings.DetailMode (FSystemSettings isn't in the kit). */
extern INT g_026c0b3c;
#define GSystemSettings_DetailMode g_026c0b3c

// @baa 0x006a78b0
/* DecalComponent.cpp: static decals attach once their transform is known (computing receivers the first time). */
void UDecalComponent::UpdateTransform()
{
	Super::UpdateTransform();

	if (bStaticDecal && DetailMode <= GSystemSettings_DetailMode)
	{
		if (StaticReceivers.Num() == 0)
		{
			this->ComputeReceivers();
		}
		else
		{
			this->AttachToStaticReceivers();
		}
		bHasBeenAttached = TRUE;
	}
}

struct UPrimitiveComponent_ : public UPrimitiveComponent
{
	void DetachDecal(UDecalComponent* Decal); /* 0x006eff50 */
};

struct UDecalComponent_ : public UDecalComponent
{
	void ReleaseResources(UBOOL bBlockOnRelease, UPrimitiveComponent* Receiver); /* 0x0069a270 */
};

// @baa 0x0069ba80
/* DecalComponent.cpp: DetachFromReceivers. Detaches the decal from every receiver, then frees the receiver render data. */
void UDecalComponent::sub_0069ba80()
{
	for (INT ReceiverIndex = 0; ReceiverIndex < DecalReceivers.Num(); ReceiverIndex++)
	{
		FDecalReceiver& Receiver = DecalReceivers(ReceiverIndex);
		if (Receiver.Component)
		{
			((UPrimitiveComponent_*)Receiver.Component)->DetachDecal(this);
			Receiver.Component = NULL;
		}
	}
	((UDecalComponent_*)this)->ReleaseResources(FALSE, NULL);
}
