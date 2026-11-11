// ParticlePhysXMeshEmitterInstance.cpp (part 1 of 3): 15 functions
// Placed here by: neighbours 13, file 2.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    undefined4 sub_00b342f0();
};

int sub_006311e0(...);
extern undefined4 g_01feac44;
// @baa 0x00b342f0
undefined4 C::sub_00b342f0(void)
{
    int param_1 = (int)this;

  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x184) + 0x54);
  if ((iVar1 == 0) || (*(int *)(iVar1 + 0x84) == 0)) {
    sub_006311e0("PhysXTypeData.PhysXParSys && PhysXTypeData.PhysXParSys->PSys",
                 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\ParticlePhysXMeshEmitterInstance.cpp"
                 ,0x38,&g_01feac44);
  }
  return *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x184) + 0x54) + 0x84);
}

struct C_00b34590 { C_00b34590* sub_00b34590(void); };

// @baa 0x00b34590
C_00b34590* C_00b34590::sub_00b34590(void) { return this; }

struct C_00b345a0 {
    void sub_00b345a0();
};

// @baa 0x00b345a0
void C_00b345a0::sub_00b345a0(void)
{
    int param_1 = (int)this;

  *(undefined4 *)(param_1 + 0xcc) = 0;
  *(undefined4 *)(param_1 + 0x188) = 0;
  return;
}

// @baa 0x00b345b0
void sub_00b345b0(void) {  }

struct C_00b34600 { void sub_00b34600(int a0); };

// @baa 0x00b34600
void C_00b34600::sub_00b34600(int a0) { *(int*)((char*)this + 396) = a0; }

struct C_00b34610 {
    float10 sub_00b34610();
};

extern undefined4 g_01feb8c0;
// @baa 0x00b34610
float10 C_00b34610::sub_00b34610(void)
{
    int param_1 = (int)this;

  if (*(int *)(*(int *)(*(int *)(param_1 + 0x184) + 0x60) + 4) == 0) {
    sub_006311e0("PhysXTypeData.RenderInstance->PSet",
                 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\ParticlePhysXMeshEmitterInstance.cpp"
                 ,0x270,&g_01feb8c0);
  }
  return (float10)*(float *)(*(int *)(*(int *)(*(int *)(*(int *)(param_1 + 0x184) + 0x60) + 4) +
                                     0x38) + 4);
}

struct C_00b34680 {
    void sub_00b34680();
};

// @baa 0x00b34680
void C_00b34680::sub_00b34680(void)
{
    int param_1 = (int)this;

  uint *puVar1;
  int iVar2;
  
  iVar2 = *(int *)(*(int *)(param_1 + 0x10) + 0x3c);
  puVar1 = (uint *)(iVar2 + 0x50);
  *puVar1 = *puVar1 ^ (*(uint *)(param_1 + 0x1ac) ^ *(uint *)(iVar2 + 0x50)) & 1;
  return;
}

typedef uint size_t;

struct C_00b346a0{
void sub_00b346a0(int,int);
};

int sub_0053d240(...);
void*sub_0053df30(void*,void*,size_t);
int sub_0053df70(...);
extern undefined2 g_01e3f3dc;
// @baa 0x00b346a0
void C_00b346a0::sub_00b346a0(int param_2,int param_3)
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

struct C_00b347c0 {
    INT Unk00; // 0x0
    INT Size;  // 0x4

    UBOOL sub_00b347c0(INT Index);
};

// @baa 0x00b347c0
UBOOL C_00b347c0::sub_00b347c0(INT Index)
{
    if (Index >= 0 && Index < Size)
        return 1;
    return 0;
}

struct C_00b347e0 { int a, b, c; C_00b347e0(); };

// @baa 0x00b347e0
C_00b347e0::C_00b347e0() : a(0), b(0), c(0) {}

struct C_00b347f0 { int a, b, c; C_00b347f0(); };

// @baa 0x00b347f0
C_00b347f0::C_00b347f0() : a(0), b(0), c(0) {}

struct C_00b34800 { int sub_00b34800(void); };

// @baa 0x00b34800
int C_00b34800::sub_00b34800(void) { return *(int*)((char*)this + 4); }

struct C_00b34810 { int a, b, c; C_00b34810(); };

// @baa 0x00b34810
C_00b34810::C_00b34810() : a(0), b(0), c(0) {}

struct C_00b34820 { int sub_00b34820(void); };

// @baa 0x00b34820
int C_00b34820::sub_00b34820(void) { return *(int*)((char*)this + 4); }

void sub_004025d0(void*);
struct D { void* p; ~D(){ if(0) sub_004025d0(p);} };

void sub_0053dfa0(void*);
struct C_00b3f720 { void* Data; int Num; int Max; void sub_00b3f720(); };

// @baa 0x00b3f720
void C_00b3f720::sub_00b3f720() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}
