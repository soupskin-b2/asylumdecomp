// FCollada_18c0000.cpp: 22 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C { char* sub_018c1400(void); };

// @baa 0x018c1400
char* C::sub_018c1400(void) { return (char*)this + 56; }

struct C_018c1410 { char* sub_018c1410(void); };

// @baa 0x018c1410
char* C_018c1410::sub_018c1410(void) { return (char*)this + 56; }

struct C_018c1420 { char* sub_018c1420(void); };

// @baa 0x018c1420
char* C_018c1420::sub_018c1420(void) { return (char*)this + 56; }

struct C_018c1500 {
    bool sub_018c1500(int *);
};

// @baa 0x018c1500
bool C_018c1500::sub_018c1500(int * param_2)
{
    int * param_1 = (int *)this;

  return *param_2 != *param_1;
}

int sub_018c6d70(...);
int sub_01bfce40(...);
int sub_01bfcfc0(...);
// @baa 0x018c31a0
int sub_018c31a0(int param_1, undefined4 param_2)
{
  int iVar1;
  
  iVar1 = 0;
  if ((param_1 != 0) && (iVar1 = sub_018c6d70(param_1,param_2), iVar1 == 0)) {
    iVar1 = sub_01bfce40(param_1,"technique");
    sub_01bfcfc0(iVar1,"profile",param_2);
  }
  return iVar1;
}

extern undefined4 g_023ef8a4;
extern undefined4 g_023efaa8;
// @baa 0x018c31e0
undefined4 sub_018c31e0(undefined4 param_1, char * param_2, char * param_3)
{
  undefined4 uVar1;
  
  uVar1 = sub_01bfce40(param_1,"param");
  if ((param_2 != (char *)0x0) && (*param_2 != '\0')) {
    sub_01bfcfc0(uVar1,&g_023efaa8,param_2);
  }
  if (param_3 == (char *)0x0) {
    param_3 = "float";
  }
  sub_01bfcfc0(uVar1,&g_023ef8a4,param_3);
  return uVar1;
}

struct C_018c3240 { int sub_018c3240(void); };

// @baa 0x018c3240
int C_018c3240::sub_018c3240(void) { return *(int*)((char*)this + 8); }

struct C_018c3250 {
    int sub_018c3250();
};

// @baa 0x018c3250
int C_018c3250::sub_018c3250(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 8) + *(int *)(param_1 + 4) * 8;
}

struct C_018c3260 { int sub_018c3260(void); };

// @baa 0x018c3260
int C_018c3260::sub_018c3260(void) { return *(int*)((char*)this + 8); }

struct C_018c3270 {
    int sub_018c3270();
};

// @baa 0x018c3270
int C_018c3270::sub_018c3270(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 4) * 0x10 + *(int *)(param_1 + 8);
}

struct C_018c3280 { int sub_018c3280(void); };

// @baa 0x018c3280
int C_018c3280::sub_018c3280(void) { return *(int*)((char*)this + 4); }

struct C_018c3290 { int sub_018c3290(void); };

// @baa 0x018c3290
int C_018c3290::sub_018c3290(void) { return *(int*)((char*)this + 8); }

struct C_018c32a0 {
    int sub_018c32a0();
};

// @baa 0x018c32a0
int C_018c32a0::sub_018c32a0(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 8) + *(int *)(param_1 + 4) * 4;
}

struct C_018c4d80 { int sub_018c4d80(void); };

// @baa 0x018c4d80
int C_018c4d80::sub_018c4d80(void) { return *(int*)((char*)this + 36); }

struct C_018c4d90 {
    void sub_018c4d90(undefined1);
};

// @baa 0x018c4d90
void C_018c4d90::sub_018c4d90(undefined1 param_2)
{
    int param_1 = (int)this;

  *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | 1;
  *(undefined1 *)(param_1 + 0x71) = param_2;
  return;
}

// @baa 0x018c4da0
undefined1 sub_018c4da0(void)
{
  return 1;
}

struct C_018c4e10 {
    bool sub_018c4e10();
};

// @baa 0x018c4e10
bool C_018c4e10::sub_018c4e10(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 0x2c) != 0;
}

struct C_018c4e20 {
    bool sub_018c4e20();
};

// @baa 0x018c4e20
bool C_018c4e20::sub_018c4e20(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 0x70) != 0;
}

int sub_01bfd950(...);
extern undefined4 g_023f0208;
// @baa 0x018c6770
void sub_018c6770(undefined4 param_1, undefined4 param_2)
{
  sub_01bfd950(param_1,&g_023f0208,param_2);
  return;
}

int sub_01bfd460(...);
// @baa 0x018c6790
void sub_018c6790(undefined4 param_1)
{
  undefined4 uVar1;
  
  uVar1 = sub_01bfd460(param_1,"technique_common");
  sub_01bfd460(uVar1,"accessor");
  return;
}

void sub_0182e310();
// @baa 0x018c6810
void sub_018c6810(void) { sub_0182e310(); }

extern undefined1 g_026ccbc8;
// @baa 0x018c6a20
char * sub_018c6a20(int param_1)
{
  char *pcVar1;
  
  if (*(int *)(param_1 + 4) == 0) {
    pcVar1 = (char *)(&g_026ccbc8);
  }
  else {
    pcVar1 = *(char **)(param_1 + 8);
    if (pcVar1 == (char *)0x0) {
      return (char *)0x0;
    }
  }
  if (*pcVar1 == '#') {
    pcVar1 = pcVar1 + 1;
  }
  return pcVar1;
}
