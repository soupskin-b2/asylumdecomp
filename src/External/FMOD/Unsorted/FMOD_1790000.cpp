// FMOD_1790000.cpp (part 1 of 3): 18 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

int sub_017906ef(...);
int sub_01790704(...);
int sub_01790721(...);
int sub_01790742(...);
int sub_01790763(...);
int sub_01790f86(...);
void * sub_01a37612(void *, int, size_t);
extern undefined4 g_025f34b0;
extern undefined4 g_025f34b4;
extern undefined4 g_025f34bc;
extern undefined4 g_025f34c0;
extern undefined4 g_025f34c4;
extern undefined4 g_025f34c8;
extern undefined4 g_025f34d0;
extern undefined4 g_025f34d8;
extern undefined4 g_025f34f0;
extern undefined4 g_025f34f4;
extern undefined4 g_025f3500;
// @baa 0x01790fa3
undefined * sub_01790fa3(void)
{
  sub_01a37612(&g_025f34b0,0,0x70);
  g_025f34b0 = (undefined4)("FMOD MPEG Codec");
  g_025f34b4 = 0x10100;
  g_025f34bc = 10;
  g_025f34c0 = (undefined4)(&sub_01790f86);
  g_025f34c4 = (undefined4)(&sub_017906ef);
  g_025f34c8 = (undefined4)(&sub_01790721);
  g_025f34d0 = (undefined4)(&sub_01790742);
  g_025f34d8 = (undefined4)(&sub_01790704);
  g_025f3500 = (undefined4)(&sub_01790763);
  g_025f34f0 = 0xd;
  g_025f34f4 = 0x120;
  return (undefined *)(&g_025f34b0);
}

int sub_017939ad(...);
int sub_017939ca(...);
int sub_017939df(...);
int sub_017939fc(...);
int sub_01793a11(...);
int sub_01793cf6(...);
extern undefined4 g_025f3618;
extern undefined4 g_025f361c;
extern undefined4 g_025f3624;
extern undefined4 g_025f3628;
extern undefined4 g_025f362c;
extern undefined4 g_025f3630;
extern undefined4 g_025f3638;
extern undefined4 g_025f3640;
extern undefined4 g_025f3658;
extern undefined4 g_025f365c;
extern undefined4 g_025f366c;
// @baa 0x01793d17
undefined * sub_01793d17(void)
{
  sub_01a37612(&g_025f3618,0,0x70);
  g_025f3618 = (undefined4)("FMOD Wav Codec");
  g_025f361c = 0x10100;
  g_025f3624 = 10;
  g_025f3628 = (undefined4)(&sub_017939ad);
  g_025f362c = (undefined4)(&sub_017939ca);
  g_025f3630 = (undefined4)(&sub_01793a11);
  g_025f3638 = (undefined4)(&sub_01793cf6);
  g_025f3640 = (undefined4)(&sub_017939df);
  g_025f366c = (undefined4)(&sub_017939fc);
  g_025f3658 = 0x14;
  g_025f365c = 0x168;
  return (undefined *)(&g_025f3618);
}

struct C {
    int sub_0179714e();
    int sub_0177e493();
};

int sub_01782ac8(...);
// @baa 0x0179714e
int C::sub_0179714e(void)
{
    int param_1 = (int)this;
  int iVar1;
  iVar1 = ((C *)(((char *)this + 0xfc)))->sub_0177e493();
  if (iVar1 == 0) {
    if ((*(int *)(param_1 + 0x230) != 0) &&
       (iVar1 = sub_01782ac8(*(int *)(param_1 + 0x230)), iVar1 != 0)) {
      return iVar1;
    }
    iVar1 = 0;
  }
  return iVar1;
}

// @baa 0x017975c4
int sub_017975c4(char * param_1)
{
  char cVar1;
  char *pcVar2;
  
  cVar1 = *param_1;
  pcVar2 = param_1;
  while (cVar1 != '\0') {
    pcVar2 = pcVar2 + 1;
    cVar1 = *pcVar2;
  }
  return (int)pcVar2 - (int)param_1;
}

// @baa 0x017975d8
char * sub_017975d8(char * param_1, char * param_2)
{
  char cVar1;
  char *pcVar2;
  
  pcVar2 = param_1;
  do {
    cVar1 = *param_2;
    *param_1 = cVar1;
    param_1 = param_1 + 1;
    param_2 = param_2 + 1;
  } while (cVar1 != '\0');
  return pcVar2;
}

// @baa 0x01797612
char * sub_01797612(char * param_1, char * param_2)
{
  char cVar1;
  char *pcVar2;
  
  pcVar2 = param_1;
  for (; *param_1 != '\0'; param_1 = param_1 + 1) {
  }
  do {
    cVar1 = *param_2;
    *param_1 = cVar1;
    param_1 = param_1 + 1;
    param_2 = param_2 + 1;
  } while (cVar1 != '\0');
  return pcVar2;
}

// @baa 0x01797698
int sub_01797698(char * param_1, char * param_2)
{
  char cVar1;
  char cVar2;
  
  do {
    cVar1 = *param_1;
    cVar2 = *param_2;
    param_1 = param_1 + 1;
    param_2 = param_2 + 1;
    if (cVar1 == '\0') break;
  } while (cVar1 == cVar2);
  return (int)cVar1 - (int)cVar2;
}

// @baa 0x01798984
undefined4 sub_01798984(int param_1, int * param_2)
{
  if (param_2 == (int *)0x0) {
    return 0x25;
  }
  if (param_1 == 0) {
    return 0x24;
  }
  *param_2 = param_1;
  return 0;
}

struct C_01798af3 {
    undefined4 sub_01798af3(int, int);
};

// @baa 0x01798af3
undefined4 C_01798af3::sub_01798af3(int param_2, int param_3)
{
    int param_1 = (int)this;

  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_2 * 0x84 + 0x18 + param_1);
  if (iVar1 == 0) {
    uVar2 = 0x25;
  }
  else {
    *(undefined4 *)(param_3 * 0x54 + 0x4c + iVar1) = 0;
    uVar2 = 0;
  }
  return uVar2;
}

struct C_0179934d {
    undefined4 sub_0179934d(undefined1 *);
};

// @baa 0x0179934d
undefined4 C_0179934d::sub_0179934d(undefined1 * param_2)
{
    int param_1 = (int)this;

  undefined4 uVar1;
  
  if (param_2 == (undefined1 *)0x0) {
    uVar1 = 0x25;
  }
  else {
    *param_2 = *(undefined1 *)(param_1 + 0x232);
    uVar1 = 0;
  }
  return uVar1;
}

struct C_01799376 {
    undefined4 sub_01799376(undefined4 *);
};

// @baa 0x01799376
undefined4 C_01799376::sub_01799376(undefined4 * param_2)
{
    int param_1 = (int)this;

  undefined4 uVar1;
  
  if (param_2 == (undefined4 *)0x0) {
    uVar1 = 0x25;
  }
  else {
    *param_2 = *(undefined4 *)(param_1 + 0x228);
    uVar1 = 0;
  }
  return uVar1;
}

struct C_0179a400 {
    void sub_0179a400();
};

// @baa 0x0179a400
void C_0179a400::sub_0179a400(void)
{
    int param_1 = (int)this;

  *(undefined1 *)(*(int *)(param_1 + 0x14) + 0xc) = 1;
  if (*(char *)(param_1 + 0x108) == '\0') {
    *(char *)(param_1 + 0x108) = '\x01';
    *(undefined4 *)(param_1 + 0x104) = *(undefined4 *)(*(int *)(param_1 + 0x14) + 0x18);
    *(int *)(*(int *)(param_1 + 0x14) + 0x18) = param_1;
  }
  return;
}

struct C_0179bcdf {
    void sub_0179bcdf();
};

// @baa 0x0179bcdf
void C_0179bcdf::sub_0179bcdf(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  int iVar1;
  
  for (iVar1 = 0x2f; iVar1 != 0; iVar1 = iVar1 + -1) {
    *param_1 = 0;
    param_1 = param_1 + 1;
  }
  return;
}

struct C_0179bd58 {
    undefined4 * sub_0179bd58();
    int sub_0177c066();
};

extern undefined4 g_023dd444;
// @baa 0x0179bd58
undefined4 * C_0179bd58::sub_0179bd58(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_0179bd58 *)(this))->sub_0177c066();
  param_1[0x28] = 0;
  *param_1 = (undefined4)((&g_023dd444));
  *(undefined1 *)(param_1 + 0x39) = 1;
  return param_1;
}

struct FMOD_Sample {
    unsigned int sub_0179bdb6(unsigned int a1, unsigned int a2, unsigned int a3,
                              unsigned int a4, unsigned int a5, unsigned int a6);
};

// @baa 0x0179bdb6
unsigned int FMOD_Sample::sub_0179bdb6(unsigned int a1, unsigned int a2, unsigned int a3,
                              unsigned int a4, unsigned int a5, unsigned int a6)
{
    return 0x4a;
}

// @baa 0x0179bdc1
int __stdcall sub_0179bdc1(int a) { return 0x32; }

struct C_0179e5a5 {
    int sub_0179e5a5();
    int sub_0179e2ff(int, int, int, int);
};

// @baa 0x0179e5a5
int C_0179e5a5::sub_0179e5a5(void)
{
    int param_1 = (int)this;
  int iVar1;
  if (((*(int *)(param_1 + 0x140) != 0) &&
      (iVar1 = ((C_0179e5a5 *)(this))->sub_0179e2ff(0, *(undefined4 *)(*(int *)(param_1 + 0x140) + 0x28), 0, 0), iVar1 != 0))
     && (iVar1 != 0x16)) {
    return iVar1;
  }
  *(uint *)(param_1 + 0x3c) = *(uint *)(param_1 + 0x3c) & 0xffffffef;
  return 0;
}

struct C_0179f130 {
    undefined4 * sub_0179f130(byte);
};

int sub_00402660(...);
extern undefined4 g_023dd674;
// @baa 0x0179f130
undefined4 * C_0179f130::sub_0179f130(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023dd674));
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}
