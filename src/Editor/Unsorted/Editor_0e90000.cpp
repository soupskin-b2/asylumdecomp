// Editor_0e90000.cpp (part 1 of 2): 25 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

// @baa 0x00e9d620
undefined4*ULensFlare::sub_00e9d620(int*param_2,int param_3)
{
undefined4*param_1=(undefined4*)this;

*param_1=(undefined4)(param_2);
if((param_2!=(int*)0x0)&&(param_3!=0)){
(*(int(__stdcall**)(int))(*param_2+4))((int)(param_2));
}
return param_1;
}

// @baa 0x00e9d650
int*ULensFlare::sub_00e9d650(int*param_2)
{
int*param_1=(int*)this;

int*piVar1;

piVar1=(int*)*param_1;
*param_1=(undefined4)param_2;
if(param_2!=(int*)0x0){
(*(int(__stdcall**)(int))(*param_2+4))((int)(param_2));
}
if(piVar1!=(int*)0x0){
(*(int(__stdcall**)(int))(*piVar1+8))((int)(piVar1));
}
return param_1;
}

// @baa 0x00e9d680
undefined4*ULensFlare::sub_00e9d680(int*param_2,int param_3)
{
undefined4*param_1=(undefined4*)this;

*param_1=(undefined4)(param_2);
if((param_2!=(int*)0x0)&&(param_3!=0)){
(*(int(__stdcall**)(int))(*param_2+4))((int)(param_2));
}
return param_1;
}

struct FDelegate;
struct FObj {
    int Unk00; // 0x00
    int Unk04; // 0x04
    void (__stdcall *Handler)(FDelegate*); // 0x08
};

struct FDelegate {
    FObj* Obj; // 0x00
};

struct C {
    FDelegate* Delegate; // 0x00
    void sub_00e9d6b0();
};

// @baa 0x00e9d6b0
void C::sub_00e9d6b0()
{
    FDelegate* D = this->Delegate;
    if (D) {
        D->Obj->Handler(D);
    }
}

// @baa 0x00e9d6c0
int*ULensFlare::sub_00e9d6c0(int*param_2)
{
int*param_1=(int*)this;

int*piVar1;

piVar1=(int*)*param_1;
*param_1=(int)param_2;
if(param_2!=(int*)0x0){
(*(int(__stdcall**)(int))(*param_2+4))((int)(param_2));
}
if((int*)0x0!=piVar1){
(*(int(__stdcall**)(int))(*piVar1+8))((int)(piVar1));
}
return param_1;
}

// @baa 0x00e9d6f0
int ULensFlare::sub_00e9d6f0(void) { return *(int*)((char*)this + 0); }

// @baa 0x00e9d770
int ULensFlare::sub_00e9d770(void) { return *(int*)((char*)this + 0); }

// @baa 0x00e9d7f0
int*ULensFlare::sub_00e9d7f0(int*param_2)
{
int*param_1=(int*)this;

int*piVar1;

piVar1=(int*)*param_1;
*param_1=(int)param_2;
if(param_2!=(int*)0x0){
(*(int(__stdcall**)(int))(*param_2+4))((int)(param_2));
}
if(piVar1!=(int*)0x0){
(*(int(__stdcall**)(int))(*piVar1+8))((int)(piVar1));
}
return param_1;
}

// @baa 0x00e9d820
int ULensFlare::sub_00e9d820(void) { return *(int*)((char*)this + 0); }

// @baa 0x00e9d8b0
int*ULensFlare::sub_00e9d8b0(int*param_2)
{
int*param_1=(int*)this;

int*piVar1;

piVar1=(int*)*param_1;
*param_1=(int)param_2;
if(param_2!=(int*)0x0){
(*(int(__stdcall**)(int))(*param_2+4))((int)(param_2));
}
if(piVar1!=(int*)0x0){
(*(int(__stdcall**)(int))(*piVar1+8))((int)(piVar1));
}
return param_1;
}

// @baa 0x00e9d8e0
int ULensFlare::sub_00e9d8e0(void) { return *(int*)((char*)this + 0); }

// @baa 0x00e9d8f0
int ULensFlare::sub_00e9d8f0(void) { return *(int*)((char*)this + 0); }

// @baa 0x00e9d970
int ULensFlare::sub_00e9d970(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

// @baa 0x00e9d980
int*ULensFlare::sub_00e9d980(int*param_2)
{
int*param_1=(int*)this;

int*piVar1;

piVar1=(int*)*param_1;
*param_1=(uint)param_2;
if(param_2!=(int*)0x0){
(*(int(__stdcall**)(int))(*param_2+4))((int)(param_2));
}
if(piVar1!=(int*)0x0){
(*(int(__stdcall**)(int))(*piVar1+8))((int)(piVar1));
}
return param_1;
}

// @baa 0x00e9d9b0
int ULensFlare::sub_00e9d9b0(void) { return *(int*)((char*)this + 0); }

struct C_00e9da30 { int sub_00e9da30(void); };

// @baa 0x00e9da30
int C_00e9da30::sub_00e9da30(void) { return *(int*)((char*)this + 0); }

struct C_00e9da40 { int sub_00e9da40(void); };

// @baa 0x00e9da40
int C_00e9da40::sub_00e9da40(void) { return *(int*)((char*)this + 0); }

struct C_00e9da50 {
    int sub_00e9da50(int);
};

// @baa 0x00e9da50
int C_00e9da50::sub_00e9da50(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 8;
}

struct C_00e9da60{
int*sub_00e9da60(int*);
};

// @baa 0x00e9da60
int*C_00e9da60::sub_00e9da60(int*param_2)
{
int*param_1=(int*)this;

int*piVar1;

piVar1=(int*)*param_1;
*param_1=(int)param_2;
if(param_2!=(int*)0x0){
(*(int(__stdcall**)(int))(*param_2+4))((int)(param_2));
}
if(piVar1!=(int*)0x0){
(*(int(__stdcall**)(int))(*piVar1+8))((int)(piVar1));
}
return param_1;
}

struct C_00e9da90 { int sub_00e9da90(void); };

// @baa 0x00e9da90
int C_00e9da90::sub_00e9da90(void) { return *(int*)((char*)this + 0); }

struct C_00e9daa0{
int*sub_00e9daa0(int*);
};

// @baa 0x00e9daa0
int*C_00e9daa0::sub_00e9daa0(int*param_2)
{
int*param_1=(int*)this;

int*piVar1;

piVar1=(int*)*param_1;
*param_1=(int)param_2;
if(param_2!=(int*)0x0){
(*(int(__stdcall**)(int))(*param_2+4))((int)(param_2));
}
if(piVar1!=(int*)0x0){
(*(int(__stdcall**)(int))(*piVar1+8))((int)(piVar1));
}
return param_1;
}

struct C_00e9dad0{
int*sub_00e9dad0(int*);
};

// @baa 0x00e9dad0
int*C_00e9dad0::sub_00e9dad0(int*param_2)
{
int*param_1=(int*)this;

int*piVar1;

piVar1=(int*)*param_1;
*param_1=(int)param_2;
if(param_2!=(int*)0x0){
(*(int(__stdcall**)(int))(*param_2+4))((int)(param_2));
}
if((int*)0x0!=piVar1){
(*(int(__stdcall**)(int))(*piVar1+8))((int)(piVar1));
}
return param_1;
}

struct C_00e9db00{
int*sub_00e9db00(int*);
};

// @baa 0x00e9db00
int*C_00e9db00::sub_00e9db00(int*param_2)
{
int*param_1=(int*)this;

int*piVar1;

piVar1=(int*)*param_1;
*param_1=(int)param_2;
if((int*)0x0!=param_2){
(*(int(__stdcall**)(int))(*param_2+4))((int)(param_2));
}
if((int*)0x0!=piVar1){
(*(int(__stdcall**)(int))(*piVar1+8))((int)(piVar1));
}
return param_1;
}

struct C_00e9db30 {
    int sub_00e9db30();
};

// @baa 0x00e9db30
int C_00e9db30::sub_00e9db30(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_00e9db40 { int a, b; C_00e9db40(int, int); };

// @baa 0x00e9db40
C_00e9db40::C_00e9db40(int x, int y) : a(x), b(y) {}
