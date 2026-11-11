// UnrealEd_1400000.cpp (part 1 of 4): 86 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Array.h"

void sub_013fbf20();
// @baa 0x01400d70
void sub_01400d70(void) { sub_013fbf20(); }

void sub_013fbf90();
// @baa 0x01400d80
void sub_01400d80(void) { sub_013fbf90(); }

struct A_01400e50 { virtual void sub_01403720(); char pad[532]; };

struct B_01400e50 { virtual void sub_01403720(); };

struct C_01400e50 : A_01400e50, B_01400e50 { virtual void sub_01403720(); C_01400e50(); };

C_01400e50::C_01400e50() {}

// @baa 0x01400e50
void C_01400e50::sub_01403720() {}

struct C {
    undefined4 sub_01400f80(byte);
};

int sub_0053dfa0(...);
int sub_013ff800(void);
// @baa 0x01400f80
undefined4 C::sub_01400f80(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_013ff800();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_014017b0 {
    undefined4 sub_014017b0(byte);
};

int sub_01401720(void);
// @baa 0x014017b0
undefined4 C_014017b0::sub_014017b0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01401720();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_01401d10 {
    undefined4 sub_01401d10(byte);
};

int sub_01401ca0(void);
// @baa 0x01401d10
undefined4 C_01401d10::sub_01401d10(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01401ca0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_01406020 {
    int sub_01406020();
};

// @baa 0x01406020
int C_01406020::sub_01406020(void)
{
    int param_1 = (int)this;
  return param_1 + 0xc;
}

struct C_01406030 { int sub_01406030(void); };

// @baa 0x01406030
int C_01406030::sub_01406030(void) { return *(int*)((char*)this + 20); }

struct C_01406040 { int sub_01406040(void); };

// @baa 0x01406040
int C_01406040::sub_01406040(void) { return *(int*)((char*)this + 24); }

struct C_01406050 {
    UINT f0;
    C_01406050* sub_01406050();
};

// @baa 0x01406050
C_01406050* C_01406050::sub_01406050()
{
    f0 &= 0xFFFFFFC0;
    return this;
}

struct C_01406060 { void sub_01406060(void); };

// @baa 0x01406060
void C_01406060::sub_01406060(void) { *(int*)((char*)this + 80) = 0; }

struct C_01406070 { float sub_01406070(void); };

// @baa 0x01406070
float C_01406070::sub_01406070(void) { return *(float*)((char*)this + 92); }

void sub_00c38ac0();
// @baa 0x014060b0
void sub_014060b0(void) { sub_00c38ac0(); }

struct C_01406110 { char* sub_01406110(void); };

// @baa 0x01406110
char* C_01406110::sub_01406110(void) { return (char*)this + 44; }

struct C_01406120 { void sub_01406120(int a0); };

// @baa 0x01406120
void C_01406120::sub_01406120(int a0) { *(int*)((char*)this + 8) = a0; }

extern char g_0227e858[];
struct C_01406150 { void sub_01406150(void); };

// @baa 0x01406150
void C_01406150::sub_01406150(void) { *(int*)((char*)this + 0) = (int)g_0227e858; }

// @baa 0x01406160
void sub_01406160(void) {  }

// @baa 0x01406170
void sub_01406170(void) {  }

void sub_011ee210();
// @baa 0x0140acd0
void sub_0140acd0(void) { sub_011ee210(); }

struct C_0140afc0 { int a, b, c; C_0140afc0(); };

// @baa 0x0140afc0
C_0140afc0::C_0140afc0() : a(0), b(0), c(0) {}

struct C_0140afd0 { int a, b, c; C_0140afd0(); };

// @baa 0x0140afd0
C_0140afd0::C_0140afd0() : a(0), b(0), c(0) {}

typedef uint size_t;

struct C_0140afe0{
void sub_0140afe0(int,int);
};

int sub_0053d240(...);
void*sub_0053df30(void*,void*,size_t);
int sub_0053df70(...);
int sub_006311e0(...);
extern undefined2 g_01e3f3dc;
// @baa 0x0140afe0
void C_0140afe0::sub_0140afe0(int param_2,int param_3)
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

struct C_0140b6a0 { int sub_0140b6a0(void); };

// @baa 0x0140b6a0
int C_0140b6a0::sub_0140b6a0(void) { return *(int*)((char*)this + 0); }

struct C_0140b6b0 { int sub_0140b6b0(void); };

// @baa 0x0140b6b0
int C_0140b6b0::sub_0140b6b0(void) { return *(int*)((char*)this + 0); }

struct C_0140b730{
void sub_0140b730(int,int);
};

// @baa 0x0140b730
void C_0140b730::sub_0140b730(int param_2,int param_3)
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

struct C_0140b850 {
    int sub_0140b850(int);
};

// @baa 0x0140b850
int C_0140b850::sub_0140b850(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_0140b860 { int sub_0140b860(void); };

// @baa 0x0140b860
int C_0140b860::sub_0140b860(void) { return *(int*)((char*)this + 0); }

struct C_0140b870 { int sub_0140b870(void); };

// @baa 0x0140b870
int C_0140b870::sub_0140b870(void) { return *(int*)((char*)this + 0); }

struct C_0140b8f0{
void sub_0140b8f0(int,int);
};

// @baa 0x0140b8f0
void C_0140b8f0::sub_0140b8f0(int param_2,int param_3)
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

struct C_0140ba10 {
    int sub_0140ba10(int);
};

// @baa 0x0140ba10
int C_0140ba10::sub_0140ba10(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_0140ba20 { int sub_0140ba20(void); };

// @baa 0x0140ba20
int C_0140ba20::sub_0140ba20(void) { return *(int*)((char*)this + 0); }

struct C_0140bcb0 {
    int sub_0140bcb0(int);
};

// @baa 0x0140bcb0
int C_0140bcb0::sub_0140bcb0(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x20 + *param_1;
}

struct C_0140bcc0 {
    int sub_0140bcc0(int);
};

// @baa 0x0140bcc0
int C_0140bcc0::sub_0140bcc0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

struct C_0140bcd0 {
    int sub_0140bcd0(int);
};

// @baa 0x0140bcd0
int C_0140bcd0::sub_0140bcd0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

struct C_0140bce0 {
    int sub_0140bce0(int);
};

// @baa 0x0140bce0
int C_0140bce0::sub_0140bce0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

struct C_0140bcf0 {
    int sub_0140bcf0(int);
};

// @baa 0x0140bcf0
int C_0140bcf0::sub_0140bcf0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

struct C_0140bd00 {
    int sub_0140bd00(int);
};

// @baa 0x0140bd00
int C_0140bd00::sub_0140bd00(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

struct C_0140bd10 {
    int sub_0140bd10(int);
};

// @baa 0x0140bd10
int C_0140bd10::sub_0140bd10(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x44;
}

struct C_0140bd30 {
    int sub_0140bd30(int);
};

// @baa 0x0140bd30
int C_0140bd30::sub_0140bd30(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x38;
}

struct C_0140bd50 {
    int sub_0140bd50(int);
};

// @baa 0x0140bd50
int C_0140bd50::sub_0140bd50(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x28;
}

struct C_0140bd60 {
    int sub_0140bd60(int);
};

// @baa 0x0140bd60
int C_0140bd60::sub_0140bd60(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x2c + *param_1;
}

struct C_0140bd70 {
    int sub_0140bd70(int);
};

// @baa 0x0140bd70
int C_0140bd70::sub_0140bd70(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x28;
}

struct C_0140bd80 {
    int sub_0140bd80(int);
};

// @baa 0x0140bd80
int C_0140bd80::sub_0140bd80(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x28;
}

struct E { BYTE Bytes[32]; };

struct S {
    TArray<E> Items; // 0x00
    E* sub_0140bd90(INT Index);
};

// @baa 0x0140bd90
E* S::sub_0140bd90(INT Index)
{
    return &Items(Index);
}

struct FFaceFXElement
{
	INT X;    // 0x00
	INT Y;    // 0x04
	INT Z;    // 0x08
	INT W;    // 0x0c
	INT Unk10;// 0x10
};

struct UFxRenderWidget
{
	TArray<FFaceFXElement> BoneArray; // 0x00
	FFaceFXElement* sub_0140bde0(INT Index);
};

// @baa 0x0140bde0
FFaceFXElement* UFxRenderWidget::sub_0140bde0(INT Index)
{
	return &BoneArray(Index);
}

struct UFxRenderWidget_0140be30
{
	TArray<FFaceFXElement> BoneArray; // 0x00
	FFaceFXElement* sub_0140be30(INT Index);
};

// @baa 0x0140be30
FFaceFXElement* UFxRenderWidget_0140be30::sub_0140be30(INT Index)
{
	return &BoneArray(Index);
}

struct E_0140be80 { BYTE Bytes[24]; };

struct S_0140be80 {
    TArray<E_0140be80> Items; // 0x00
    E_0140be80* sub_0140be80(INT Index);
};

// @baa 0x0140be80
E_0140be80* S_0140be80::sub_0140be80(INT Index)
{
    return &Items(Index);
}

struct UFxRenderWidget_0140bed0
{
	TArray<FFaceFXElement> BoneArray; // 0x00
	FFaceFXElement* sub_0140bed0(INT Index);
};

// @baa 0x0140bed0
FFaceFXElement* UFxRenderWidget_0140bed0::sub_0140bed0(INT Index)
{
	return &BoneArray(Index);
}

struct UFxRenderWidget_0140bf20
{
	TArray<FFaceFXElement> BoneArray; // 0x00
	FFaceFXElement* sub_0140bf20(INT Index);
};

// @baa 0x0140bf20
FFaceFXElement* UFxRenderWidget_0140bf20::sub_0140bf20(INT Index)
{
	return &BoneArray(Index);
}

struct E_0140bf70 { BYTE Bytes[68]; };

struct S_0140bf70 {
    TArray<E_0140bf70> Items; // 0x00
    E_0140bf70* sub_0140bf70(INT Index);
};

// @baa 0x0140bf70
E_0140bf70* S_0140bf70::sub_0140bf70(INT Index)
{
    return &Items(Index);
}

struct E_0140c010 { BYTE Bytes[40]; };

struct S_0140c010 {
    TArray<E_0140c010> Items; // 0x00
    E_0140c010* sub_0140c010(INT Index);
};

// @baa 0x0140c010
E_0140c010* S_0140c010::sub_0140c010(INT Index)
{
    return &Items(Index);
}

struct E_0140c060 { BYTE Bytes[44]; };

struct S_0140c060 {
    TArray<E_0140c060> Items; // 0x00
    E_0140c060* sub_0140c060(INT Index);
};

// @baa 0x0140c060
E_0140c060* S_0140c060::sub_0140c060(INT Index)
{
    return &Items(Index);
}

struct E_0140c0b0 { BYTE Bytes[40]; };

struct S_0140c0b0 {
    TArray<E_0140c0b0> Items; // 0x00
    E_0140c0b0* sub_0140c0b0(INT Index);
};

// @baa 0x0140c0b0
E_0140c0b0* S_0140c0b0::sub_0140c0b0(INT Index)
{
    return &Items(Index);
}

struct E_0140c100 { BYTE Bytes[40]; };

struct S_0140c100 {
    TArray<E_0140c100> Items; // 0x00
    E_0140c100* sub_0140c100(INT Index);
};

// @baa 0x0140c100
E_0140c100* S_0140c100::sub_0140c100(INT Index)
{
    return &Items(Index);
}

struct C_0140ca50 {
    undefined4 sub_0140ca50(byte);
};

int sub_0140a360(void);
// @baa 0x0140ca50
undefined4 C_0140ca50::sub_0140ca50(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0140a360();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_0140cbd0 {
    int sub_0140cbd0(undefined4 *, int);
    int sub_0140afe0(int, int);
};

// @baa 0x0140cbd0
int C_0140cbd0::sub_0140cbd0(undefined4 * param_2, int param_3)
{
    int * param_1 = (int *)this;
  undefined4 *puVar1;
  ((C_0140cbd0 *)(this))->sub_0140afe0(param_3, 1);
  puVar1 = (undefined4 *)(*param_1 + param_3 * 4);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *param_2;
  }
  return param_3;
}

struct C_0140cc00 {
    int sub_0140cc00(int);
    int sub_0140b100(int);
};

void * sub_01a37612(void *, int, size_t);
// @baa 0x0140cc00
int C_0140cc00::sub_0140cc00(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  iVar1 = ((C_0140cc00 *)(this))->sub_0140b100(param_2);
  sub_01a37612((void *)(iVar1 * 0x20 + *param_1),0,param_2 << 5);
  return iVar1;
}

struct C_0140cc30 {
    int sub_0140cc30(int);
    int sub_0140b170(int);
};

// @baa 0x0140cc30
int C_0140cc30::sub_0140cc30(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  iVar1 = ((C_0140cc30 *)(this))->sub_0140b170(param_2);
  sub_01a37612((void *)(*param_1 + iVar1 * 0x14),0,param_2 * 0x14);
  return iVar1;
}

struct C_0140cc70 {
    int sub_0140cc70(int);
    int sub_0140b1e0(int);
};

// @baa 0x0140cc70
int C_0140cc70::sub_0140cc70(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  iVar1 = ((C_0140cc70 *)(this))->sub_0140b1e0(param_2);
  sub_01a37612((void *)(*param_1 + iVar1 * 0x14),0,param_2 * 0x14);
  return iVar1;
}

struct C_0140ccb0 {
    int sub_0140ccb0(int);
    int sub_0140b250(int);
};

// @baa 0x0140ccb0
int C_0140ccb0::sub_0140ccb0(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  iVar1 = ((C_0140ccb0 *)(this))->sub_0140b250(param_2);
  sub_01a37612((void *)(*param_1 + iVar1 * 0x18),0,param_2 * 0x18);
  return iVar1;
}

struct C_0140ccf0 {
    int sub_0140ccf0(int);
    int sub_0140b2d0(int);
};

// @baa 0x0140ccf0
int C_0140ccf0::sub_0140ccf0(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  iVar1 = ((C_0140ccf0 *)(this))->sub_0140b2d0(param_2);
  sub_01a37612((void *)(*param_1 + iVar1 * 0x14),0,param_2 * 0x14);
  return iVar1;
}

struct C_0140cd30 {
    int sub_0140cd30(int);
    int sub_0140b340(int);
};

// @baa 0x0140cd30
int C_0140cd30::sub_0140cd30(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  iVar1 = ((C_0140cd30 *)(this))->sub_0140b340(param_2);
  sub_01a37612((void *)(*param_1 + iVar1 * 0x14),0,param_2 * 0x14);
  return iVar1;
}

struct C_0140cd70 {
    int sub_0140cd70(int);
    int sub_0140b3b0(int);
};

// @baa 0x0140cd70
int C_0140cd70::sub_0140cd70(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  iVar1 = ((C_0140cd70 *)(this))->sub_0140b3b0(param_2);
  sub_01a37612((void *)(*param_1 + iVar1 * 0x44),0,param_2 * 0x44);
  return iVar1;
}

struct C_0140cdb0 {
    int sub_0140cdb0(int);
    int sub_0140b430(int);
};

// @baa 0x0140cdb0
int C_0140cdb0::sub_0140cdb0(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  iVar1 = ((C_0140cdb0 *)(this))->sub_0140b430(param_2);
  sub_01a37612((void *)(*param_1 + iVar1 * 0x38),0,param_2 * 0x38);
  return iVar1;
}

struct C_0140ce00 {
    int sub_0140ce00(int);
    int sub_0140b4b0(int);
};

// @baa 0x0140ce00
int C_0140ce00::sub_0140ce00(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  iVar1 = ((C_0140ce00 *)(this))->sub_0140b4b0(param_2);
  sub_01a37612((void *)(*param_1 + iVar1 * 0x28),0,param_2 * 0x28);
  return iVar1;
}

struct C_0140ce40 {
    int sub_0140ce40(int);
    int sub_0140b530(int);
};

// @baa 0x0140ce40
int C_0140ce40::sub_0140ce40(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  iVar1 = ((C_0140ce40 *)(this))->sub_0140b530(param_2);
  sub_01a37612((void *)(iVar1 * 0x2c + *param_1),0,param_2 * 0x2c);
  return iVar1;
}

struct C_0140ce70 {
    int sub_0140ce70(int);
    int sub_0140b5a0(int);
};

// @baa 0x0140ce70
int C_0140ce70::sub_0140ce70(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  iVar1 = ((C_0140ce70 *)(this))->sub_0140b5a0(param_2);
  sub_01a37612((void *)(*param_1 + iVar1 * 0x28),0,param_2 * 0x28);
  return iVar1;
}

struct C_0140ceb0 {
    int sub_0140ceb0(int);
    int sub_0140b620(int);
};

// @baa 0x0140ceb0
int C_0140ceb0::sub_0140ceb0(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  iVar1 = ((C_0140ceb0 *)(this))->sub_0140b620(param_2);
  sub_01a37612((void *)(*param_1 + iVar1 * 0x28),0,param_2 * 0x28);
  return iVar1;
}

struct S_0140cef0 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_0140cef0(INT Index);
};

// @baa 0x0140cef0
DWORD* S_0140cef0::sub_0140cef0(INT Index)
{
    return &Items(Index);
}

struct C_0140cf70 {
    int sub_0140cf70(undefined4 *, int);
    int sub_0140b730(int, int);
};

// @baa 0x0140cf70
int C_0140cf70::sub_0140cf70(undefined4 * param_2, int param_3)
{
    int * param_1 = (int *)this;
  undefined4 *puVar1;
  ((C_0140cf70 *)(this))->sub_0140b730(param_3, 1);
  puVar1 = (undefined4 *)(*param_1 + param_3 * 4);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *param_2;
  }
  return param_3;
}

struct S_0140d000 {
    TArray<DWORD> Items; // 0x00
    DWORD* sub_0140d000(INT Index);
};

// @baa 0x0140d000
DWORD* S_0140d000::sub_0140d000(INT Index)
{
    return &Items(Index);
}

struct C_0140d080 {
    int sub_0140d080(undefined4 *, int);
    int sub_0140b8f0(int, int);
};

// @baa 0x0140d080
int C_0140d080::sub_0140d080(undefined4 * param_2, int param_3)
{
    int * param_1 = (int *)this;
  undefined4 *puVar1;
  ((C_0140d080 *)(this))->sub_0140b8f0(param_3, 1);
  puVar1 = (undefined4 *)(*param_1 + param_3 * 4);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *param_2;
  }
  return param_3;
}

struct E_0140d110 { BYTE Bytes[24]; };

struct S_0140d110 {
    TArray<E_0140d110> Items; // 0x00
    E_0140d110* sub_0140d110(INT Index);
};

// @baa 0x0140d110
E_0140d110* S_0140d110::sub_0140d110(INT Index)
{
    return &Items(Index);
}

// @baa 0x0140d160
void __stdcall sub_0140d160(int a0, int a1) {  }

// @baa 0x0140d170
void __stdcall sub_0140d170(int a0, int a1) {  }

// @baa 0x0140d690
void __stdcall sub_0140d690(int a0, int a1) {  }

// @baa 0x0140d6a0
void __stdcall sub_0140d6a0(int a0, int a1) {  }

// @baa 0x0140d6b0
void __stdcall sub_0140d6b0(int a0, int a1) {  }

// @baa 0x0140d6c0
void __stdcall sub_0140d6c0(int a0, int a1) {  }

// @baa 0x0140d6d0
void __stdcall sub_0140d6d0(int a0, int a1) {  }

// @baa 0x0140d6e0
void __stdcall sub_0140d6e0(int a0, int a1) {  }

// @baa 0x0140d6f0
void __stdcall sub_0140d6f0(int a0, int a1) {  }

// @baa 0x0140d700
void __stdcall sub_0140d700(int a0, int a1) {  }

// @baa 0x0140d710
void __stdcall sub_0140d710(int a0, int a1) {  }

// @baa 0x0140d720
void __stdcall sub_0140d720(int a0, int a1) {  }

struct C_0140d730 {
    void sub_0140d180(int);
};

struct O {
    char pad[4];
    C_0140d730* p;
    void sub_0140d730();
};

// @baa 0x0140d730
void O::sub_0140d730()
{
    p->sub_0140d180(0);
}
