// UnSequence.cpp (part 8 of 10): 13 functions
// Placed here by: neighbours 7.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

struct C {
    void sub_008c14b0(int);
};

int sub_0053df70(...);
// @baa 0x008c14b0
void C::sub_008c14b0(int param_2)
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

struct C_008c14f0 {
    void sub_008c14f0(int);
};

// @baa 0x008c14f0
void C_008c14f0::sub_008c14f0(int param_2)
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

struct C_008c1880 {
    void sub_008c1880(int);
};

// @baa 0x008c1880
void C_008c1880::sub_008c1880(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  param_1[1] = 0;
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if ((*param_1 != 0) || (param_2 != 0)) {
      iVar1 = sub_0053df70(*param_1,param_2 * 0x50,8);
      *param_1 = iVar1;
    }
  }
  return;
}

// @baa 0x008c1a00
void UObject::sub_008c1a00(int param_2)
{
    int * param_1 = (int *)this;

  int iVar1;
  
  param_1[1] = 0;
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if ((*param_1 != 0) || (param_2 != 0)) {
      iVar1 = sub_0053df70(*param_1,param_2 * 8,8);
      *param_1 = iVar1;
    }
  }
  return;
}

// @baa 0x008c1b80
void UObject::sub_008c1b80(int param_2)
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

struct C_008c2150 {
    void sub_008c2150(int);
};

// @baa 0x008c2150
void C_008c2150::sub_008c2150(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  param_1[1] = 0;
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if ((*param_1 != 0) || (param_2 != 0)) {
      iVar1 = sub_0053df70(*param_1,param_2 << 4,8);
      *param_1 = iVar1;
    }
  }
  return;
}

struct C_008c2700 {
    void sub_008c2700(int);
};

// @baa 0x008c2700
void C_008c2700::sub_008c2700(int param_2)
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

int sub_008d1890(void);
// @baa 0x008d1d20
void USeqAct_SetDOFParams::vf_174(void)
{
    int param_1 = (int)this;

  *(uint *)(param_1 + 0xe0) = *(uint *)(param_1 + 0xe0) & 0xfffffffe;
  sub_008d1890();
  if (*(int *)(param_1 + 0xd8) == 0) {
    *(uint *)(param_1 + 0xe0) = *(uint *)(param_1 + 0xe0) | 1;
  }
  return;
}

// @baa 0x008d1d50
void USeqAct_ParticleEventGenerator::vf_174(void)
{
    int param_1 = (int)this;

  if ((*(byte *)(param_1 + 0xd4) & 1) != 0) {
    sub_008d1890();
    return;
  }
  return;
}

struct C_008dcbc0 { void sub_008d5060(int); C_008dcbc0 *sub_008dcbc0(int); };

// @baa 0x008dcbc0
C_008dcbc0 *C_008dcbc0::sub_008dcbc0(int a) { sub_008d5060(a); return this; }

struct USeqAct_PlaySound_ : public USeqAct_PlaySound
{
    void sub_008df850();
    INT sub_00d201d0(INT Value);
    void sub_008ec1a0(UINT Value);
};

// @baa 0x008ec1a0
void USeqAct_PlaySound_::sub_008ec1a0(UINT Value)
{
    sub_008df850();
    sub_00d201d0(Value);
}

int sub_008eb9b0(void);
// @baa 0x008ec1c0
void USeqAct_PlaySound::vf_154(void)
{
    int param_1 = (int)this;

  if ((*(byte *)(param_1 + 0x78) & 1) != 0) {
    sub_008eb9b0();
    return;
  }
  return;
}

struct C_00d20240 {
    void sub_00d20240(int *);
};

// @baa 0x00d20240
void C_00d20240::sub_00d20240(int * param_2)
{
    int param_1 = (int)this;

  *param_2 = *(int *)(param_1 + 0x70) + *(int *)(param_1 + 0x38);
  param_2[1] = *(int *)(param_1 + 0x74) + *(int *)(param_1 + 0x3c);
  return;
}
