// UnNavigationPoint.cpp (part 1 of 4): 50 functions
// Placed here by: neighbours 21, class 18, callers 7, file 4.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x00835e80
int sub_00835e80(int param_1, int param_2)
{
  return *(int *)(param_2 + 0x34) - *(int *)(param_1 + 0x34);
}

// @baa 0x00835e90
IMPLEMENT_CLASS_AT(ACoverLink, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnNavigationPoint.cpp", 1635);

// @baa 0x00835fa0
int ACoverLink::vf_000(void) { return 1; }

// @baa 0x00835fb0
bool ACoverLink::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00835ff0
IMPLEMENT_CLASS_AT(ACoverGroup, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnNavigationPoint.cpp", 1636);

// @baa 0x00836100
int ACoverGroup::vf_000(void) { return 1; }

// @baa 0x00836110
bool ACoverGroup::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00836150
IMPLEMENT_CLASS_AT(ACoverSlotMarker, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnNavigationPoint.cpp", 1637);

// @baa 0x00836260
int ACoverSlotMarker::vf_000(void) { return 1; }

// @baa 0x00836270
bool ACoverSlotMarker::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x008362b0
IMPLEMENT_CLASS_AT(AMantleMarker, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnNavigationPoint.cpp", 1638);

// @baa 0x008363c0
int AMantleMarker::vf_000(void) { return 1; }

// @baa 0x008363d0
bool AMantleMarker::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

struct C{
int sub_0083c480(undefined4*);
};

int sub_0053d240(...);
undefined4 sub_0053df70(...);
// @baa 0x0083c480
int C::sub_0083c480(undefined4*param_2)
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

typedef uint size_t;

struct C_0083c4e0 {
    int sub_0083c4e0(int);
    int sub_00838b40(int);
};

void * sub_01a37612(void *, int, size_t);
// @baa 0x0083c4e0
int C_0083c4e0::sub_0083c4e0(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  iVar1 = ((C_0083c4e0 *)(this))->sub_00838b40(param_2);
  sub_01a37612((void *)(*param_1 + iVar1 * 4),0,param_2 * 4);
  return iVar1;
}

struct C_0083c520 {
    int sub_0083c520(int);
    int sub_00838bb0(int);
};

// @baa 0x0083c520
int C_0083c520::sub_0083c520(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  iVar1 = ((C_0083c520 *)(this))->sub_00838bb0(param_2);
  sub_01a37612((void *)(iVar1 * 0x30 + *param_1),0,param_2 * 0x30);
  return iVar1;
}

struct C_0083c560 {
    int sub_0083c560(int);
    int sub_00838c20(int);
};

// @baa 0x0083c560
int C_0083c560::sub_0083c560(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  iVar1 = ((C_0083c560 *)(this))->sub_00838c20(param_2);
  sub_01a37612((void *)(*param_1 + iVar1 * 0xc),0,param_2 * 0xc);
  return iVar1;
}

struct C_0083c5a0 {
    int sub_0083c5a0(int);
    int sub_00838c90(int);
};

// @baa 0x0083c5a0
int C_0083c5a0::sub_0083c5a0(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  iVar1 = ((C_0083c5a0 *)(this))->sub_00838c90(param_2);
  sub_01a37612((void *)(*param_1 + iVar1 * 0xc),0,param_2 * 0xc);
  return iVar1;
}

int sub_008421f0(...);
int sub_008428a0(...);
int sub_00842a51(...);
// @baa 0x008429b0
int sub_008429b0(int param_1,int param_2,undefined4 param_3,int param_4,int param_5,undefined4 param_6)
{
int*piVar1;
int iVar2;
int iVar4;
int local_4;
float local_8;
int iVar3;
local_4=-1;
iVar4=0;
local_8=3.4e+38;
iVar2=-1;
if(0<*(int*)(param_1+0x284)){
do{
if(iVar4!=param_2){
iVar2=sub_008428a0(param_1,param_2,iVar4,param_3,param_6);
if((float)iVar2<local_8){
for(piVar1=*(int**)(param_4+4);piVar1!=(int*)0x0;piVar1=(int*)piVar1[1]){
if(*piVar1==iVar4)goto sub_00842a51;
}
if((!(param_5))||(iVar3=sub_008421f0(param_1,param_2,iVar4),iVar3==0)){
local_8=(float)iVar2;
local_4=iVar4;
}
}
}
sub_00842a51:
iVar4=iVar4+1;
iVar2=local_4;
}while(iVar4<*(int*)(0x284+param_1));
}
return iVar2;
}

int sub_00854780(void);
// @baa 0x00857510
int ACoverLink::sub_00857510(void)
{
    int param_1 = (int)this;

  sub_00854780();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

int sub_008547e0(void);
// @baa 0x00857530
int ACoverLink::sub_00857530(void)
{
    int param_1 = (int)this;

  sub_008547e0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x00858f70
int ACoverLink::sub_00858f70(void)
{
    int param_1 = (int)this;

  sub_00854780();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x00858f90
int ACoverLink::sub_00858f90(void)
{
    int param_1 = (int)this;

  sub_008547e0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x00858fb0
// @baa 0x00858ff0
// @baa 0x00859030
// @baa 0x00859270
// @baa 0x00859330
// @baa 0x008593f0
struct C_008594b0 {
    undefined4 sub_008594b0(undefined4);
    int sub_00858ae0(int);
};

// @baa 0x008594b0
undefined4 C_008594b0::sub_008594b0(undefined4 param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_008594b0 *)(this))->sub_00858ae0(param_2);
  return param_1;
}

void sub_00858b50();
// @baa 0x008594d0
void sub_008594d0(void) { sub_00858b50(); }

void sub_00858bc0();
// @baa 0x008594e0
void sub_008594e0(void) { sub_00858bc0(); }

struct C_00859570 {
    int sub_00859570(undefined4, undefined4, undefined4);
    int sub_00857350(int, int);
};

// @baa 0x00859570
int C_00859570::sub_00859570(undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
    int param_1 = (int)this;
  ((C_00859570 *)(this))->sub_00857350(param_2, param_4);
  *(undefined4 *)(param_1 + 0x20) = param_2;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = param_3;
  return param_1;
}

struct Block {
    int Unk00;   // 0x00
    int Unk04;   // 0x04
    int Unk08;   // 0x08
    int Unk0C;   // 0x0c
    int Unk10;   // 0x10
    int Unk14;   // 0x14
    int Unk18;   // 0x18
    int Unk1C;   // 0x1c
    int Unk20;   // 0x20
    int Unk24;   // 0x24
    int Unk28;   // 0x28
    int Unk2C;   // 0x2c
    void sub_00857290(int, int);
};

struct C_008595a0 {
    int Unk00;   // 0x00
    int Unk04;   // 0x04
    int Unk08;   // 0x08
    int Unk0C;   // 0x0c
    int Unk10;   // 0x10
    int Unk14;   // 0x14
    int Unk18;   // 0x18
    int Unk1C;   // 0x1c
    Block* Unk20;  // 0x20
    int Unk24;     // 0x24
    int Unk28;     // 0x28
    int Unk2C;     // 0x2c
    void sub_008595a0(void);
};

// @baa 0x008595a0
void C_008595a0::sub_008595a0(void)
{
    if (Unk24 != 0 && Unk28 != 0)
    {
        Unk20->sub_00857290(Unk20->Unk04 - Unk20->Unk2C, 1);
    }
}

struct C_008595c0 {
    int sub_008595c0(undefined4, undefined4, undefined4);
    int sub_008573b0(int, int);
};

// @baa 0x008595c0
int C_008595c0::sub_008595c0(undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
    int param_1 = (int)this;
  ((C_008595c0 *)(this))->sub_008573b0(param_2, param_4);
  *(undefined4 *)(param_1 + 0x20) = param_2;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = param_3;
  return param_1;
}

struct Block_008595f0 {
    int Unk00;   // 0x00
    int Unk04;   // 0x04
    int Unk08;   // 0x08
    int Unk0C;   // 0x0c
    int Unk10;   // 0x10
    int Unk14;   // 0x14
    int Unk18;   // 0x18
    int Unk1C;   // 0x1c
    int Unk20;   // 0x20
    int Unk24;   // 0x24
    int Unk28;   // 0x28
    int Unk2C;   // 0x2c
    void sub_008571d0(int, int);
};

struct C_008595f0 {
    int Unk00;   // 0x00
    int Unk04;   // 0x04
    int Unk08;   // 0x08
    int Unk0C;   // 0x0c
    int Unk10;   // 0x10
    int Unk14;   // 0x14
    int Unk18;   // 0x18
    int Unk1C;   // 0x1c
    Block_008595f0* Unk20;  // 0x20
    int Unk24;     // 0x24
    int Unk28;     // 0x28
    int Unk2C;     // 0x2c
    void sub_008595f0(void);
};

// @baa 0x008595f0
void C_008595f0::sub_008595f0(void)
{
    if (Unk24 != 0 && Unk28 != 0)
    {
        Unk20->sub_008571d0(Unk20->Unk04 - Unk20->Unk2C, 1);
    }
}

// @baa 0x00859670
int ACoverLink::sub_00859670(void)
{
    int param_1 = (int)this;

  sub_00854780();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x00859690
int ACoverLink::sub_00859690(void)
{
    int param_1 = (int)this;

  sub_008547e0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x00859f60
int ACoverLink::sub_00859f60(void)
{
    int param_1 = (int)this;

  sub_00854780();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x00859f80
int ACoverLink::sub_00859f80(void)
{
    int param_1 = (int)this;

  sub_008547e0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

// @baa 0x0085bcb0
void sub_0085bcb0(void) { sub_00858b50(); }

// @baa 0x0085bcc0
void sub_0085bcc0(void) { sub_00858bc0(); }

struct C_0085bcd0 { C_0085bcd0* sub_0085bcd0(void); };

// @baa 0x0085bcd0
C_0085bcd0* C_0085bcd0::sub_0085bcd0(void) { return this; }

struct C_0085bce0 { void sub_0085a000(int); C_0085bce0 *sub_0085bce0(int); };

// @baa 0x0085bce0
C_0085bce0 *C_0085bce0::sub_0085bce0(int a) { sub_0085a000(a); return this; }

// @baa 0x0085bd40
// @baa 0x0085bdc0
struct C_0085cfe0 { void sub_0085a000(int); C_0085cfe0 *sub_0085cfe0(int); };

// @baa 0x0085cfe0
C_0085cfe0 *C_0085cfe0::sub_0085cfe0(int a) { sub_0085a000(a); return this; }

// @baa 0x0085d000
// @baa 0x0085d040
int sub_00835e90(void);
int sub_0085d040(...);
int sub_0085d46f(...);
extern undefined4 g_026b55e8;
// @baa 0x0085d420
undefined4 ACoverLink::sub_0085d420(void)
{
    int param_1 = (int)this;

  int iVar1;
  
  if (*(int *)(param_1 + 0x2c) != 0) {
    if (g_026b55e8 == 0) {
      g_026b55e8 = sub_0085d040(L"Engine");
      sub_00835e90();
      if (g_026b55e8 == 0) {
sub_0085d46f:
        return *(undefined4 *)(param_1 + 0x2c);
      }
    }
    for (iVar1 = *(int *)(*(int *)(param_1 + 0x2c) + 0x28); iVar1 != 0;
        iVar1 = *(int *)(iVar1 + 0x30)) {
      if (iVar1 == g_026b55e8) goto sub_0085d46f;
    }
  }
  return 0;
}
