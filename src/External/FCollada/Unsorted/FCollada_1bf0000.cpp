// FCollada_1bf0000.cpp (part 1 of 3): 45 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

int sub_01bb50e0(...);
// @baa 0x01bf12c0
void sub_01bf12c0(int param_1)
{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)sub_01bb50e0(0x2c);
  *puVar1 = *(undefined4 *)(param_1 + 0x18);
  puVar1[1] = *(undefined4 *)(param_1 + 0x2c);
  puVar1[2] = *(undefined4 *)(param_1 + 0x80);
  puVar1[3] = *(undefined4 *)(param_1 + 0x6c);
  puVar1[4] = *(undefined4 *)(param_1 + 0x70);
  puVar1[5] = *(undefined4 *)(param_1 + 0x28);
  puVar1[7] = *(undefined4 *)(param_1 + 0xd0);
  puVar1[9] = *(undefined4 *)(param_1 + 0xd8);
  puVar1[8] = *(undefined4 *)(param_1 + 0xdc);
  puVar1[6] = *(undefined4 *)(param_1 + 0x78);
  puVar1[10] = *(undefined4 *)(param_1 + 0xf0);
  return;
}

void * sub_01a37612(void *, int, size_t);
// @baa 0x01bf1760
void sub_01bf1760(int * param_1)
{
  param_1[4] = 0;
  param_1[0x15] = (param_1[1] - *param_1) / 2;
  sub_01a37612((void *)param_1[0x16],0,param_1[1] * 4);
  sub_01a37612((void *)param_1[0x14],0,param_1[0x13] * 4);
  return;
}

// @baa 0x01bf18b0
int sub_01bf18b0(int * param_1, int param_2)
{
  return ((param_1[0x15] - param_1[1]) + *param_1 + param_2) / *param_1;
}

int sub_01bbb920(...);
int sub_01bf1fd0(...);
int sub_01bf3980(...);
int sub_01bf3da0(...);
// @baa 0x01bf20e0
undefined4 sub_01bf20e0(int * param_1)
{
  int iVar1;
  int iVar2;
  
  iVar1 = sub_01bf1fd0(param_1);
  if (iVar1 != 0) {
    return 0xffffffff;
  }
  iVar1 = 0;
  param_1[0x1e] = 0;
  param_1[0x25] = 0x7d000;
  param_1[0x24] = 0;
  param_1[0x26] = 0;
  param_1[0x29] = 0;
  param_1[0x19] = 0;
  if (0 < *param_1) {
    do {
      iVar2 = sub_01bf3da0(0,param_1);
      if (iVar2 == 0) {
        sub_01bbb920(0,"Couldn\'t allocate a token in ResetSearchGraph()\n");
        return 0xffffffff;
      }
      *(undefined4 *)(iVar2 + 0x18) = *(undefined4 *)(param_1[1] + iVar1 * 4);
      sub_01bf3980(iVar2,param_1 + 0x1a);
      iVar1 = iVar1 + 1;
    } while (iVar1 < *param_1);
  }
  return 0;
}

// @baa 0x01bf2750
undefined2 sub_01bf2750(int param_1, int param_2)
{
  int iVar1;
  
  if ((param_1 != 0) && (param_2 != 0)) {
    iVar1 = (**(code **)(param_1 + 0x40))(param_1 + 0x14,param_2);
    if (iVar1 != 0) {
      return *(undefined2 *)(iVar1 + 0xc);
    }
  }
  return 0xffff;
}

int sub_01bbab40(...);
int sub_01bbac00(...);
extern undefined4 g_023db678;
// @baa 0x01bf2ba0
undefined4 sub_01bf2ba0(char * param_1)
{
  int iVar1;
  
  if ((param_1 != (char *)0x0) && (*param_1 != '\0')) {
    iVar1 = sub_01bbab40(param_1,&g_023db678);
    if (iVar1 != 0) {
      sub_01bbac00(iVar1);
      return 1;
    }
  }
  return 0;
}

int sub_01bb51e0(...);
int sub_01bf31a0(...);
// @baa 0x01bf33a0
undefined4 sub_01bf33a0(undefined4 * param_1)
{
  undefined4 uVar1;
  
  if (param_1 == (undefined4 *)0x0) {
    return 0xffffffff;
  }
  uVar1 = sub_01bf31a0(*param_1);
  sub_01bb51e0(*param_1);
  *param_1 = uVar1;
  return 0;
}

int sub_01bf2da0(...);
// @baa 0x01bf33d0
void sub_01bf33d0(undefined4 param_1, undefined4 param_2)
{
  int iVar1;
  
  iVar1 = sub_01bbab40(param_1,param_2);
  if (iVar1 == 0) {
    sub_01bf2da0(param_1);
    sub_01bbab40(param_1,param_2);
  }
  return;
}

int sub_01bf3e10(...);
// @baa 0x01bf4460
undefined4 sub_01bf4460(undefined4 param_1, undefined4 param_2, int param_3, int param_4)
{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < param_4) {
    do {
      iVar1 = sub_01bf3e10(param_1,param_2,*(undefined4 *)(param_3 + iVar2 * 4));
      if (iVar1 != 0) {
        return 0xffffffff;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < param_4);
  }
  return 0;
}

// @baa 0x01bf44d0
void sub_01bf44d0(int param_1, int param_2)
{
  int iVar1;
  int iVar2;
  
  if (param_1 != 0) {
    iVar2 = 0;
    if (0 < param_2) {
      do {
        iVar1 = *(int *)(param_1 + iVar2 * 4);
        if (iVar1 != 0) {
          sub_01bb51e0(iVar1);
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < param_2);
    }
    sub_01bb51e0(param_1);
  }
  return;
}

// @baa 0x01bf4eb0
int sub_01bf4eb0(void) { return 0; }

// @baa 0x01bf4ec0
void sub_01bf4ec0(void) {  }

// @baa 0x01bf4ee0
int sub_01bf4ee0(void) { return 0; }

int sub_01bf6f60(...);
// @baa 0x01bf50d0
undefined4 sub_01bf50d0(void)
{
  undefined4 uVar1;
  
  uVar1 = sub_01bb50e0(0x234c);
  sub_01bf6f60(uVar1);
  return uVar1;
}

void sub_01be4d10();
// @baa 0x01bf5190
void sub_01bf5190(void) { sub_01be4d10(); }

// @baa 0x01bf9970
int sub_01bf9970(void) { return 0; }

int sub_01bf9500(...);
extern "C" __declspec(dllimport) int _write(...);
// @baa 0x01bf99c0
int sub_01bf99c0(int param_1, void * param_2, uint param_3)
{
  int iVar1;
  
  iVar1 = _write(param_1,param_2,param_3);
  if (iVar1 < 0) {
    sub_01bf9500(8,0,"write()");
  }
  return iVar1;
}

// @baa 0x01bf9a30
int sub_01bf9a30(void) { return 1; }

#pragma pack(push, 1)
struct _iobuf { char * _ptr; int _cnt; char * _base; int _flag; int _file; int _charbuf; int _bufsiz; char * _tmpfname; };

#pragma pack(pop)
typedef _iobuf FILE;

typedef uint size_t;

extern "C" __declspec(dllimport) int fread(...);
// @baa 0x01bf9be0
size_t sub_01bf9be0(FILE * param_1, void * param_2, size_t param_3)
{
  size_t sVar1;
  
  if ((param_1 != (FILE *)0x0) && (param_2 != (void *)0x0)) {
    sVar1 = fread(param_2,1,param_3,param_1);
    if ((int)sVar1 < 0) {
      sub_01bf9500(8,0,"fread()");
    }
    return sVar1;
  }
  return 0xffffffff;
}

#pragma pack(push, 1)
#pragma pack(pop)
extern "C" __declspec(dllimport) int fwrite(...);
extern "C" __declspec(dllimport) int ferror(...);
// @baa 0x01bf9c30
int sub_01bf9c30(FILE * param_1, void * param_2, size_t param_3)
{
  size_t sVar1;
  int iVar2;
  
  if ((param_1 != (FILE *)0x0) && (param_2 != (void *)0x0)) {
    sVar1 = fwrite(param_2,param_3,1,param_1);
    if (sVar1 == 0) {
      iVar2 = ferror(param_1);
      if (iVar2 != 0) {
        sub_01bf9500(8,0,"fwrite()");
        return -1;
      }
    }
    return sVar1 * param_3;
  }
  return -1;
}

int sub_01bfa0b0(void);
extern code * g_027d4d1c;
// @baa 0x01bfa160
void sub_01bfa160(void)
{
  if (g_027d4d1c != (code *)0x0) {
                    
                    
    (*g_027d4d1c)();
    return;
  }
  sub_01bfa0b0();
  return;
}

int sub_01bf9ed0(...);
// @baa 0x01bfa4f0
undefined4 * sub_01bfa4f0(int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
  undefined4 *puVar1;
  
  if (param_1 == 0) {
    return (undefined4 *)0x0;
  }
  puVar1 = (undefined4 *)sub_01bf9ed0(param_4);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_3;
    puVar1[1] = param_1;
    puVar1[2] = param_2;
  }
  return puVar1;
}

// @baa 0x01bfa680
int sub_01bfa680(void) { return 0; }

// @baa 0x01bfafd0
int sub_01bfafd0(int a0, int a1) { return a1; }

int sub_01bf97c0(...);
int sub_01c24a00(...);
extern undefined4 g_02610d08;
// @baa 0x01bfb040
undefined4 sub_01bfb040(int param_1, undefined * param_2, undefined4 param_3)
{
  undefined4 uVar1;
  
  if (param_1 == 0) {
    if (param_2 == (undefined *)0x0) {
      param_2 = (undefined *)(&g_02610d08);
    }
    sub_01bf97c0(param_3,"failed to load external entity \042%s\042\012",param_2);
    return 0;
  }
  uVar1 = sub_01c24a00(param_3,param_1);
  return uVar1;
}

extern undefined4 g_02610d38;
// @baa 0x01bfb080
void sub_01bfb080(undefined * param_1)
{
  g_02610d38 = (undefined4)(param_1);
  return;
}

// @baa 0x01bfb090
undefined * sub_01bfb090(void)
{
  return (undefined *)(g_02610d38);
}

// @baa 0x01bfbb70
undefined4 sub_01bfbb70(int param_1, undefined4 param_2)
{
  if (param_1 == 0) {
    return 0xffffffff;
  }
  *(undefined4 *)(param_1 + 0x74) = param_2;
  return 0;
}

// @baa 0x01bfbb90
undefined4 sub_01bfbb90(int param_1, undefined4 param_2)
{
  if (param_1 == 0) {
    return 0xffffffff;
  }
  *(undefined4 *)(param_1 + 0x78) = param_2;
  return 0;
}

int sub_01bfc5d0(...);
// @baa 0x01bfc6f0
undefined4 sub_01bfc6f0(int param_1, int param_2)
{
  if ((param_1 != 0) && (param_2 != 0)) {
    sub_01bfc5d0(param_1,param_2);
    return 0;
  }
  return 0xffffffff;
}

int sub_01bfc170(...);
// @baa 0x01bfc720
undefined4 sub_01bfc720(int param_1, int param_2)
{
  if ((param_1 != 0) && (param_2 != 0)) {
    sub_01bfc170(param_1,param_2);
    return 0;
  }
  return 0xffffffff;
}

int sub_01bfc7e0(...);
// @baa 0x01bfc960
void sub_01bfc960(undefined4 param_1, undefined4 param_2, undefined4 param_3)
{
  sub_01bfc7e0(param_1,param_2,param_3,0,0);
  return;
}

// @baa 0x01bfc980
void sub_01bfc980(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
  sub_01bfc7e0(param_1,param_2,param_3,0,param_4);
  return;
}

// @baa 0x01bfc9a0
void sub_01bfc9a0(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
  sub_01bfc7e0(param_1,param_2,param_3,param_4,0);
  return;
}

int sub_01bfc9c0(...);
// @baa 0x01bfca80
void sub_01bfca80(undefined4 param_1, undefined4 param_2)
{
  sub_01bfc9c0(param_1,param_2,0);
  return;
}

int sub_01bfcbd0(...);
// @baa 0x01bfcc90
void sub_01bfcc90(undefined4 param_1, undefined4 param_2, undefined4 param_3)
{
  sub_01bfcbd0(param_1,param_2,param_3,0);
  return;
}

// @baa 0x01bfccb0
void sub_01bfccb0(undefined4 param_1, undefined4 param_2, undefined4 param_3)
{
  sub_01bfcbd0(param_1,param_2,0,param_3);
  return;
}

// @baa 0x01bfccd0
void sub_01bfccd0(undefined4 param_1, undefined4 param_2)
{
  sub_01bfcbd0(param_1,param_2,0,0);
  return;
}

int sub_01c15300(...);
// @baa 0x01bfce10
void sub_01bfce10(undefined4 param_1)
{
  sub_01c15300(0,param_1);
  return;
}

int sub_01c19990(...);
// @baa 0x01bfce40
undefined4 sub_01bfce40(int param_1, undefined4 param_2)
{
  undefined4 uVar1;
  
  if (param_1 != 0) {
    uVar1 = sub_01c19990(param_1,0,param_2,0);
    return uVar1;
  }
  return 0;
}

int sub_01c166e0(...);
int sub_01c187e0(...);
// @baa 0x01bfcfe0
void sub_01bfcfe0(undefined4 param_1, undefined4 param_2)
{
  undefined4 uVar1;
  
  uVar1 = sub_01c166e0(param_1,param_2);
  sub_01c187e0(uVar1);
  return;
}

int sub_01bfce30(...);
int sub_01c159b0(...);
// @baa 0x01bfd0d0
void sub_01bfd0d0(undefined4 param_1, undefined4 param_2)
{
  sub_01c159b0(param_1);
  sub_01bfce30(param_2,param_1);
  return;
}

int sub_01bfd0f0(...);
int sub_01bfd460(...);
// @baa 0x01bfd130
int sub_01bfd130(int param_1, undefined4 param_2, char * param_3)
{
  int iVar1;
  
  iVar1 = 0;
  if ((param_1 != 0) && (iVar1 = sub_01bfd460(param_1,param_2), iVar1 == 0)) {
    if ((param_3 == (char *)0x0) || (*param_3 == '\0')) {
      param_3 = (char *)0x0;
    }
    iVar1 = sub_01bfd0f0(param_1,param_2,param_3);
  }
  return iVar1;
}

// @baa 0x01bfd3d0
bool sub_01bfd3d0(undefined4 param_1, undefined4 param_2)
{
  int iVar1;
  
  iVar1 = sub_01c166e0(param_1,param_2);
  return iVar1 != 0;
}

extern undefined4 g_025f8be0;
// @baa 0x01bfd430
undefined * sub_01bfd430(int param_1)
{
  int iVar1;
  undefined *puVar2;
  
  if ((((param_1 == 0) || (iVar1 = *(int *)(param_1 + 0xc), iVar1 == 0)) ||
      (*(int *)(iVar1 + 4) != 3)) ||
     (puVar2 = *(undefined **)(iVar1 + 0x28), *(undefined **)(iVar1 + 0x28) == (undefined *)0x0)) {
    puVar2 = (undefined *)(g_025f8be0);
  }
  return puVar2;
}
