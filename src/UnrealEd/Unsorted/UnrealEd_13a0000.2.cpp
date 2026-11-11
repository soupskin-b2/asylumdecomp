// UnrealEd_13a0000.cpp (part 2 of 5): 3 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

class wxCommandEvent;
class wxCommandEvent {
    public:
    public: __declspec(dllimport) bool IsChecked() const;
    friend struct C;
};

struct C {
    void sub_013a38d0(wxCommandEvent *);
};

// @baa 0x013a38d0
void C::sub_013a38d0(wxCommandEvent * param_2)
{
    int param_1 = (int)this;

  bool bVar1;
  
  bVar1 = ((wxCommandEvent *)(param_2))->wxCommandEvent::IsChecked();
  *(uint *)(param_1 + 0x1a0) = (uint)bVar1;
  *(undefined4 *)(param_1 + 0x1c0) = 1;
  return;
}

class wxUpdateUIEvent;
class wxUpdateUIEvent {
    public:
    public: __declspec(dllimport) void Check(bool);
    friend struct C_013a3a00;
};

struct C_013a3a00 {
    void sub_013a3a00(wxUpdateUIEvent *);
};

// @baa 0x013a3a00
void C_013a3a00::sub_013a3a00(wxUpdateUIEvent * param_2)
{
    int param_1 = (int)this;

  ((wxUpdateUIEvent *)(param_2))->wxUpdateUIEvent::Check(*(int *)(param_1 + 0x1a0) == 1);
  return;
}

struct C_013a7aa0{
int sub_013a7aa0(undefined4*);
};

int sub_0053d240(...);
int sub_0053df70(...);
// @baa 0x013a7aa0
int C_013a7aa0::sub_013a7aa0(uint*param_2)
{
int*param_1=(int*)this;

int iVar2;
undefined4*puVar1;
int iVar3;

iVar2=param_1[1];
iVar3=iVar2+1;
param_1[1]=iVar3;
if(iVar3>param_1[2]){
iVar3=sub_0053d240(iVar3,param_1[2],0xc);
param_1[2]=iVar3;
if((*param_1!=0)||(iVar3!=0)){
iVar3=sub_0053df70(*param_1,iVar3*0xc,8);
*param_1=iVar3;
}
}
puVar1=(undefined4*)(*param_1+0xc*iVar2);
if(puVar1!=(undefined4*)0x0){
*puVar1=*param_2;
puVar1[1]=param_2[1];
puVar1[2]=param_2[2];
}
return iVar2;
}
