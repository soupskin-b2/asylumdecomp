// WinClient.cpp (part 4 of 4): 9 functions
// Placed here by: neighbours 8.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

extern "C" __declspec(dllimport) int wcscpy_s(...);
// @baa 0x00eb5210
void sub_00eb5210(wchar_t * param_1, wchar_t * param_2)
{
  wcscpy_s(param_1,0x1e,param_2);
  return;
}

extern "C" __declspec(dllimport) int wcscat_s(...);
// @baa 0x00eb5230
void sub_00eb5230(wchar_t * param_1, wchar_t * param_2)
{
  wcscat_s(param_1,0x1e,param_2);
  return;
}

// @baa 0x00eb5250
void sub_00eb5250(wchar_t * param_1, wchar_t * param_2)
{
  wcscpy_s(param_1,0xd,param_2);
  return;
}

// @baa 0x00eb5290
void sub_00eb5290(wchar_t * param_1, wchar_t * param_2)
{
  wcscpy_s(param_1,0x200,param_2);
  return;
}

struct C{
int sub_00eb6390(undefined4*);
};

int sub_0053d240(...);
int sub_0053df70(...);
// @baa 0x00eb6390
int C::sub_00eb6390(undefined4*param_2)
{
int*param_1=(int*)this;

int iVar2;
undefined4*puVar1;
int iVar3;

iVar2=param_1[1];
iVar3=iVar2+1;
param_1[1]=iVar3;
if(iVar3>param_1[2]){
iVar3=sub_0053d240(iVar3,param_1[2],8);
param_1[2]=iVar3;
if((*param_1!=0)||(0!=iVar3)){
iVar3=sub_0053df70(*param_1,iVar3*8,8);
*param_1=iVar3;
}
}
puVar1=(undefined4*)(*param_1+iVar2*8);
if(puVar1!=(undefined4*)0x0){
*puVar1=*param_2;
puVar1[1]=param_2[1];
}
return iVar2;
}

struct C_00eb7800 {
    void sub_00eb7800(int);
};

// @baa 0x00eb7800
void C_00eb7800::sub_00eb7800(int param_2)
{
    int * param_1 = (int *)this;

  int iVar1;
  
  param_1[1] = 0;
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if ((*param_1 != 0) || (param_2 != 0)) {
      iVar1 = sub_0053df70(*param_1,param_2 * 4,8);
      *param_1 = iVar1;
    }
  }
  return;
}

struct C_00eb78a0 {
    void sub_00eb78a0(int);
};

// @baa 0x00eb78a0
void C_00eb78a0::sub_00eb78a0(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  param_1[1] = 0;
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if ((*param_1 != 0) || (param_2 != 0)) {
      iVar1 = sub_0053df70(*param_1,param_2 * 0x1fc,8);
      *param_1 = iVar1;
    }
  }
  return;
}

struct C_00eb7940 {
    void sub_00eb7940(int);
};

// @baa 0x00eb7940
void C_00eb7940::sub_00eb7940(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  param_1[1] = 0;
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if ((*param_1 != 0) || (param_2 != 0)) {
      iVar1 = sub_0053df70(*param_1,param_2 * 0x1c,8);
      *param_1 = iVar1;
    }
  }
  return;
}

struct HWND__ { int unused; };

typedef HWND__* HWND;

extern "C" __declspec(dllimport) int __stdcall DestroyWindow(HWND hWnd);
struct C_00eb4110 {
    unsigned char Pad[0x60];
    HWND Window;
    void sub_00eb4110();
};

// @baa 0x00eb4110
void C_00eb4110::sub_00eb4110()
{
    if (Window) {
        DestroyWindow(Window);
        Window = 0;
    }
}
