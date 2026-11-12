// InterpEditorTools.cpp (part 1 of 5): 157 functions
// Placed here by: neighbours 112, class 23, file 12, callers 5.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

int sub_00d07820(...);
int sub_00d0ac40(void);
extern undefined4 g_026c5670;
// @baa 0x00c9c240
int sub_00c9c240(void)
{
  if (g_026c5670 == 0) {
    g_026c5670 = sub_00d07820(L"Engine");
    sub_00d0ac40();
  }
  return g_026c5670;
}

int sub_00d02a30(void);
int sub_00d07e20(...);
extern undefined4 g_026c56b8;
// @baa 0x00c9c270
int sub_00c9c270(void)
{
  if (g_026c56b8 == 0) {
    g_026c56b8 = sub_00d07e20(L"Engine");
    sub_00d02a30();
  }
  return g_026c56b8;
}

int sub_00cedf50(...);
int sub_00cf1810(void);
extern undefined4 g_026c56bc;
// @baa 0x00c9c780
int sub_00c9c780(void)
{
  if (g_026c56bc == 0) {
    g_026c56bc = sub_00cedf50(L"Engine");
    sub_00cf1810();
  }
  return g_026c56bc;
}

struct C{
int sub_012c5da0(undefined4*);
};

int sub_0053d240(...);
int sub_0053df70(...);
// @baa 0x012c5da0
int C::sub_012c5da0(undefined4*param_2)
{
int*param_1=(int*)this;

int iVar1;
int iVar2;
undefined4*puVar3;

iVar1=param_1[1];
iVar2=iVar1+1;
param_1[1]=iVar2;
if(iVar2>param_1[2]){
iVar2=sub_0053d240(iVar2,param_1[2],0x10);
param_1[2]=iVar2;
if((*param_1!=0)||(iVar2!=0)){
iVar2=sub_0053df70(*param_1,iVar2<<4,8);
*param_1=iVar2;
}
}
puVar3=(undefined4*)(iVar1*0x10+*param_1);
if(puVar3!=(undefined4*)0x0){
*puVar3=*param_2;
puVar3[1]=param_2[1];
puVar3[2]=param_2[2];
puVar3[3]=param_2[3];
}
return iVar1;
}

// @baa 0x012df4b0
void __stdcall sub_012df4b0(int a0, int a1) {  }

struct C_012df4c0 {
    INT Unk00; // 0x0
    INT Size;  // 0x4

    UBOOL sub_012df4c0(INT Index);
};

// @baa 0x012df4c0
UBOOL C_012df4c0::sub_012df4c0(INT Index)
{
    if (Index >= 0 && Index < Size)
        return 1;
    return 0;
}

struct C_012df4e0 {
    INT Unk00; // 0x00
    INT Unk04; // 0x04
    C_012df4e0* sub_012df4e0(INT value);
};

// @baa 0x012df4e0
C_012df4e0* C_012df4e0::sub_012df4e0(INT value)
{
    Unk00 = value;
    Unk04 = 0;
    return this;
}

struct S {
    char pad[4];
    int x;
    S* sub_012df500();
};

// @baa 0x012df500
S* S::sub_012df500() {
    x += 1;
    return this;
}

struct C_012df540 {
    INT Unk00; // 0x00
    INT Unk04; // 0x04
    C_012df540* sub_012df540(INT value);
};

// @baa 0x012df540
C_012df540* C_012df540::sub_012df540(INT value)
{
    Unk00 = value;
    Unk04 = 0;
    return this;
}

struct C_012df560 {
    void* sub_012df560();
};

// @baa 0x012df560
void* C_012df560::sub_012df560()
{
    ((int*)this)[1]++;
    return this;
}

struct C_012df570 { int sub_012df570(void); };

// @baa 0x012df570
int C_012df570::sub_012df570(void) { return *(int*)((char*)this + 4); }

struct C_012df580 { int sub_012df580(void); };

// @baa 0x012df580
int C_012df580::sub_012df580(void) { return *(int*)((char*)this + 4); }

struct C_012df590 { int sub_012df590(void); };

// @baa 0x012df590
int C_012df590::sub_012df590(void) { return *(int*)((char*)this + 4); }

struct C_012df5a0 { int sub_012df5a0(void); };

// @baa 0x012df5a0
int C_012df5a0::sub_012df5a0(void) { return *(int*)((char*)this + 4); }

struct C_012df5b0 { int sub_012df5b0(void); };

// @baa 0x012df5b0
int C_012df5b0::sub_012df5b0(void) { return *(int*)((char*)this + 4); }

void sub_00572b30();
// @baa 0x012df600
void sub_012df600() { sub_00572b30(); }

// @baa 0x012df6e0
void sub_012df6e0(void) {  }

// @baa 0x012df6f0
float10 sub_012df6f0(double param_1)
{
  return (float10)param_1;
}

// @baa 0x012df700
void sub_012df700(void) {  }

// @baa 0x012df720
undefined2 sub_012df720(void)
{
  return 0x69;
}

// @baa 0x012df730
undefined2 sub_012df730(void)
{
  return 0x73;
}

// @baa 0x012df740
int sub_012df740(int a0, int a1) { return a1; }

// @baa 0x012df750
IMPLEMENT_CLASS_AT(UInterpTrackHelper, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\InterpEditorTools.cpp", 2797);

// @baa 0x012df7b0
int UInterpTrackHelper::vf_110(int a0, int a1, int a2, int a3) { return 1; }

// @baa 0x012df7c0
void UInterpTrackHelper::vf_114(int a0, int a1, int a2) {  }

// @baa 0x012df7d0
int UInterpTrackHelper::vf_118(int a0, int a1) { return 1; }

// @baa 0x012df7e0
void __stdcall sub_012df7e0(int a0, int a1) {  }

// @baa 0x012df7f0
int sub_005c7a20(void);
extern undefined * g_0223fbf0;
// @baa 0x012df810
undefined4 * UObject::sub_012df810(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_0223fbf0);
  return param_1;
}

// @baa 0x012df830
int sub_012df830(int a0, int a1) { return a1; }

extern undefined * g_0223fd10;
// @baa 0x012df840
undefined4 * UObject::sub_012df840(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_0223fd10);
  return param_1;
}

// @baa 0x012df860
IMPLEMENT_CLASS_AT(UInterpTrackAnimControlHelper, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\InterpEditorTools.cpp", 2983);

// @baa 0x012df8c0
// @baa 0x012df8e0
undefined4 sub_012df8e0(undefined4 param_1, undefined4 param_2)
{
  return param_2;
}

extern undefined * g_0223fe30;
// @baa 0x012df8f0
undefined4 * UObject::sub_012df8f0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_0223fe30);
  return param_1;
}

// @baa 0x012df910
IMPLEMENT_CLASS_AT(UInterpTrackDirectorHelper, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\InterpEditorTools.cpp", 3087);

// @baa 0x012df970
// @baa 0x012df990
undefined4 sub_012df990(undefined4 param_1, undefined4 param_2)
{
  return param_2;
}

extern undefined * g_0223ff50;
// @baa 0x012df9a0
undefined4 * UObject::sub_012df9a0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_0223ff50);
  return param_1;
}

// @baa 0x012df9c0
IMPLEMENT_CLASS_AT(UInterpTrackEventHelper, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\InterpEditorTools.cpp", 3142);

// @baa 0x012dfa20
// @baa 0x012dfa40
undefined4 sub_012dfa40(undefined4 param_1, undefined4 param_2)
{
  return param_2;
}

extern undefined * g_02240070;
// @baa 0x012dfa50
undefined4 * UObject::sub_012dfa50(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_02240070);
  return param_1;
}

// @baa 0x012dfa70
IMPLEMENT_CLASS_AT(UInterpTrackFaceFXHelper, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\InterpEditorTools.cpp", 3636);

// @baa 0x012dfad0
// @baa 0x012dfaf0
undefined4 sub_012dfaf0(undefined4 param_1, undefined4 param_2)
{
  return param_2;
}

extern undefined * g_02240190;
// @baa 0x012dfb00
undefined4 * UObject::sub_012dfb00(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_02240190);
  return param_1;
}

// @baa 0x012dfb20
IMPLEMENT_CLASS_AT(UInterpTrackFloatPropHelper, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\InterpEditorTools.cpp", 3283);

// @baa 0x012dfb80
// @baa 0x012dfba0
undefined4 sub_012dfba0(undefined4 param_1, undefined4 param_2)
{
  return param_2;
}

extern undefined * g_022402b0;
// @baa 0x012dfbb0
undefined4 * UObject::sub_012dfbb0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_022402b0);
  return param_1;
}

// @baa 0x012dfbd0
IMPLEMENT_CLASS_AT(UInterpTrackParticleReplayHelper, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\InterpEditorTools.cpp", 3722);

// @baa 0x012dfc30
// @baa 0x012dfc50
undefined4 sub_012dfc50(undefined4 param_1, undefined4 param_2)
{
  return param_2;
}

extern undefined * g_022403d0;
// @baa 0x012dfc60
undefined4 * UObject::sub_012dfc60(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_022403d0);
  return param_1;
}

// @baa 0x012dfc80
IMPLEMENT_CLASS_AT(UInterpTrackSoundHelper, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\InterpEditorTools.cpp", 3179);

// @baa 0x012dfce0
// @baa 0x012dfd00
undefined4 sub_012dfd00(undefined4 param_1, undefined4 param_2)
{
  return param_2;
}

extern undefined * g_022404f0;
// @baa 0x012dfd10
undefined4 * UObject::sub_012dfd10(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_022404f0);
  return param_1;
}

// @baa 0x012dfd30
IMPLEMENT_CLASS_AT(UInterpTrackToggleHelper, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\InterpEditorTools.cpp", 3288);

// @baa 0x012dfd90
// @baa 0x012dfdb0
undefined4 sub_012dfdb0(undefined4 param_1, undefined4 param_2)
{
  return param_2;
}

// @baa 0x012dfdc0
IMPLEMENT_CLASS_AT(UInterpTrackVectorPropHelper, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\InterpEditorTools.cpp", 3357);

// @baa 0x012dfe20
extern undefined * g_02240610;
// @baa 0x012dfe40
undefined4 * UObject::sub_012dfe40(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_02240610);
  return param_1;
}

// @baa 0x012dfe60
int sub_012dfe60(int a0, int a1) { return a1; }

extern undefined * g_02240738;
// @baa 0x012dfe70
undefined4 * UObject::sub_012dfe70(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_02240738);
  return param_1;
}

// @baa 0x012dfe90
IMPLEMENT_CLASS_AT(UInterpTrackColorPropHelper, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\InterpEditorTools.cpp", 3478);

// @baa 0x012dfef0
// @baa 0x012dff10
undefined4 sub_012dff10(undefined4 param_1, undefined4 param_2)
{
  return param_2;
}

extern undefined * g_02240860;
// @baa 0x012dff20
undefined4 * UObject::sub_012dff20(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_005c7a20();
  *param_1 = (undefined4)(&g_02240860);
  return param_1;
}

// @baa 0x012dff40
IMPLEMENT_CLASS_AT(UInterpTrackVisibilityHelper, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\InterpEditorTools.cpp", 3643);

// @baa 0x012dffa0
// @baa 0x012e1a20
// @baa 0x012e1b30
int UInterpTrackHelper::vf_000(void) { return 1; }

// @baa 0x012e1b40
bool UInterpTrackHelper::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x012e1bf0
int UInterpTrackAnimControlHelper::vf_000(void) { return 1; }

// @baa 0x012e1c00
int UInterpTrackDirectorHelper::vf_000(void) { return 1; }

// @baa 0x012e1c10
int UInterpTrackEventHelper::vf_000(void) { return 1; }

// @baa 0x012e1c20
int UInterpTrackSoundHelper::vf_000(void) { return 1; }

// @baa 0x012e1c30
int UInterpTrackFloatPropHelper::vf_000(void) { return 1; }

// @baa 0x012e1c40
int UInterpTrackToggleHelper::vf_000(void) { return 1; }

// @baa 0x012e1c50
int UInterpTrackVectorPropHelper::vf_000(void) { return 1; }

// @baa 0x012e1c60
int UInterpTrackColorPropHelper::vf_000(void) { return 1; }

// @baa 0x012e1c70
int UInterpTrackFaceFXHelper::vf_000(void) { return 1; }

// @baa 0x012e1c80
int UInterpTrackVisibilityHelper::vf_000(void) { return 1; }

// @baa 0x012e1c90
int UInterpTrackParticleReplayHelper::vf_000(void) { return 1; }

struct C_012e1ca0 { int a, b, c; C_012e1ca0(); };

// @baa 0x012e1ca0
C_012e1ca0::C_012e1ca0() : a(0), b(0), c(0) {}

struct C_012e1d00 { int a, b, c; C_012e1d00(); };

// @baa 0x012e1d00
C_012e1d00::C_012e1d00() : a(0), b(0), c(0) {}

struct C_012e1d10 { int a, b, c; C_012e1d10(); };

// @baa 0x012e1d10
C_012e1d10::C_012e1d10() : a(0), b(0), c(0) {}

struct C_012e1d90 { int a, b, c; C_012e1d90(); };

// @baa 0x012e1d90
C_012e1d90::C_012e1d90() : a(0), b(0), c(0) {}

struct C_012e1da0 { int a, b, c; C_012e1da0(); };

// @baa 0x012e1da0
C_012e1da0::C_012e1da0() : a(0), b(0), c(0) {}

typedef uint size_t;

struct C_012e1db0{
void sub_012e1db0(int,int);
};

void*sub_0053df30(void*,void*,size_t);
int sub_006311e0(...);
extern undefined2 g_01e3f3dc;
// @baa 0x012e1db0
void C_012e1db0::sub_012e1db0(int param_2,int param_3)
{
int*param_1=(int*)this;
int iVar1;
int iVar2;
if(param_3<0){
sub_006311e0("Count>=0",
"e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\Array.h"
,0x31a,&g_01e3f3dc);
}
if(param_1[1]<0){
sub_006311e0("ArrayNum>=0",
"e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\Array.h"
,0x31b,&g_01e3f3dc);
}
if(param_1[2]<param_1[1]){
sub_006311e0("ArrayMax>=ArrayNum",
"e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\Array.h"
,0x31c,&g_01e3f3dc);
}
if(param_2<0){
sub_006311e0("Index>=0",
"e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\Array.h"
,0x31d,&g_01e3f3dc);
}
if(param_2>param_1[1]){
sub_006311e0("Index<=ArrayNum",
"e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\Array.h"
,0x31e,&g_01e3f3dc);
}
iVar1=param_1[1];
iVar2=iVar1+param_3;
param_1[1]=iVar2;
if(iVar2>param_1[2]){
iVar2=sub_0053d240(iVar2,param_1[2],4);
param_1[2]=iVar2;
if((*param_1!=0)||(iVar2!=0)){
iVar2=sub_0053df70(*param_1,iVar2*4,8);
*param_1=iVar2;
}
}
sub_0053df30((void*)(*param_1+(param_2+param_3)*4),(void*)(*param_1+param_2*4),
(iVar1-param_2)*4);
return;
}

struct C_012e2030 { int sub_012e2030(void); };

// @baa 0x012e2030
int C_012e2030::sub_012e2030(void) { return *(int*)((char*)this + 0); }

struct C_012e20b0 { int sub_012e20b0(void); };

// @baa 0x012e20b0
int C_012e20b0::sub_012e20b0(void) { return *(int*)((char*)this + 0); }

struct C_012e20c0 { int sub_012e20c0(void); };

// @baa 0x012e20c0
int C_012e20c0::sub_012e20c0(void) { return *(int*)((char*)this + 0); }

struct C_012e20d0 { C_012e20d0* sub_012e20d0(int a0); };

// @baa 0x012e20d0
C_012e20d0* C_012e20d0::sub_012e20d0(int a0) { return this; }

struct C_012e20e0 { int sub_012e20e0(void); };

// @baa 0x012e20e0
int C_012e20e0::sub_012e20e0(void) { return *(int*)((char*)this + 0); }

struct C_012e20f0 { int sub_012e20f0(void); };

// @baa 0x012e20f0
int C_012e20f0::sub_012e20f0(void) { return *(int*)((char*)this + 0); }

struct C_012e2220 { int sub_012e2220(void); };

// @baa 0x012e2220
int C_012e2220::sub_012e2220(void) { return *(int*)((char*)this + 0); }

struct C_012e2230 { int sub_012e2230(void); };

// @baa 0x012e2230
int C_012e2230::sub_012e2230(void) { return *(int*)((char*)this + 0); }

struct C_012e2240 { int sub_012e2240(void); };

// @baa 0x012e2240
int C_012e2240::sub_012e2240(void) { return *(int*)((char*)this + 0); }

struct C_012e2250 { int sub_012e2250(void); };

// @baa 0x012e2250
int C_012e2250::sub_012e2250(void) { return *(int*)((char*)this + 0); }

struct E { BYTE Bytes[20]; };

struct S_012e2260 {
    TArray<E> Items; // 0x00
    const E* sub_012e2260(INT Index) const;
};

// @baa 0x012e2260
const E* S_012e2260::sub_012e2260(INT Index) const
{
    return &Items(Index);
}

struct T_012e2860 { BYTE b[16]; };

// @baa 0x012e2860
template T_012e2860& TArray<T_012e2860>::Last(INT);

// @baa 0x012e29d0
// @baa 0x012e29f0
// @baa 0x012e2a10
// @baa 0x012e2a30
// @baa 0x012e2a50
// @baa 0x012e2a70
// @baa 0x012e2a90
// @baa 0x012e2ab0
// @baa 0x012e2ad0
// @baa 0x012e2af0
// @baa 0x012e2b10
// @baa 0x012e2b30
struct T;
struct Other {
    char pad_000[0x1a4];
    UINT field_1a4;
};

struct T {
    char pad_000[0x28];
    T* field_28;
    char pad_02c[4];
    T* field_30;
    T* field_34;
    char pad_038[0x48 - 0x38];
    UINT field_48;
    char pad_04c[0x254 - 0x4c];
    Other* field_254;
};

struct World {
    char pad_000[0x180];
    TArray<T*> Arr;
    T* sub_00d14410();
};

struct CSelf {
    char pad_000[0x328];
    World* W;
    void sub_012e48a0();
};

extern void* g_026b43b8;
extern UINT g_025e8e7c;
void* sub_007990f0(const wchar_t*);
int sub_00787840(void);
// @baa 0x012e48a0
void CSelf::sub_012e48a0()
{
    T* saved = W->sub_00d14410();
    for (INT i = 0; i < W->Arr.Num(); i++)
    {
        T* e = W->Arr(i);
        T* b = e->field_34;
        if (b)
        {
            if (g_026b43b8 == 0)
            {
                g_026b43b8 = sub_007990f0(L"Engine");
                sub_00787840();
                if (g_026b43b8 == 0)
                    goto Body;
            }
            {
                T* o = b->field_28;
                while (o)
                {
                    if (o == (T*)g_026b43b8)
                        goto Body;
                    o = o->field_30;
                }
                goto Next;
            }
Body:
            if (b->field_254)
            {
                if (W->Arr(i)->field_34 == saved)
                    b->field_254->field_1a4 = g_025e8e7c;
                else
                    b->field_254->field_1a4 = W->Arr(i)->field_30->field_48;
            }
        }
Next:;
    }
}

// @baa 0x012e4a40
// @baa 0x012e4b00
// @baa 0x012e4bc0
// @baa 0x012e4c80
// @baa 0x012e4d40
// @baa 0x012e4e00
// @baa 0x012e4ec0
// @baa 0x012e4f80
// @baa 0x012e5040
// @baa 0x012e5100
// @baa 0x012e51c0
// @baa 0x012e5280
// @baa 0x012f0990
// @baa 0x012f0aa0
bool UInterpTrackEventHelper::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x012f0ae0
// @baa 0x012f0bf0
bool UInterpTrackSoundHelper::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x012f0c30
// @baa 0x012f0d40
bool UInterpTrackFloatPropHelper::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x012f0d80
// @baa 0x012f0e90
bool UInterpTrackToggleHelper::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x012f0ed0
// @baa 0x012f0fe0
bool UInterpTrackVectorPropHelper::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x012f1020
// @baa 0x012f1130
bool UInterpTrackFaceFXHelper::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x012f1170
// @baa 0x012f1280
bool UInterpTrackVisibilityHelper::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x012f12c0
// @baa 0x012f13d0
bool UInterpTrackParticleReplayHelper::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

struct T_012f1530;
// @baa 0x012f1530
template INT TArray<T_012f1530*>::RemoveItem(T_012f1530* const&);

void sub_004025d0(void*);
struct D { void* p; ~D(){ if(0) sub_004025d0(p);} };

void sub_0053dfa0(void*);
struct C_012f1970 { void* Data; int Num; int Max; void sub_012f1970(); };

// @baa 0x012f1970
void C_012f1970::sub_012f1970() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_013006c0 {
  void sub_012ffcc0(int);
  void sub_013006c0(void);
};

// @baa 0x013006c0
void C_013006c0::sub_013006c0(void)
{
  sub_012ffcc0(-1);
}

struct C_013006d0 {
    void sub_012ffcc0(int);
    void sub_013006d0();
};

// @baa 0x013006d0
void C_013006d0::sub_013006d0()
{
    this->sub_012ffcc0(1);
}

// @baa 0x01300ce0
// @baa 0x01300df0
bool UInterpTrackColorPropHelper::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x012df4a0
int UInterpTrackParticleReplayHelper::vf_118(int a0, int a1) { return 1; }

// @baa 0x012f0540

// @baa 0x012f0650
bool UInterpTrackAnimControlHelper::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x012f0690

// @baa 0x012f07a0
bool UInterpTrackDirectorHelper::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}
