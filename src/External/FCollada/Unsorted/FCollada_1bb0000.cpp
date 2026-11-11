// FCollada_1bb0000.cpp (part 1 of 2): 31 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

// @baa 0x01bb9480
undefined4 sub_01bb9480(int * param_1, int param_2)
{
  int iVar1;
  
  if (((param_1 != (int *)0x0) && (*param_1 != 0)) &&
     (iVar1 = *(int *)(*param_1 + 0x48), iVar1 != 0)) {
    if (param_2 < 0) {
      *(undefined4 *)(iVar1 + 0x58) = 0xffffffff;
      return 0;
    }
    if (param_2 == 0) {
      *(undefined4 *)(iVar1 + 0x58) = 0;
      return 0;
    }
    if (param_2 == 1) {
      *(undefined4 *)(iVar1 + 0x58) = 1;
      return 0;
    }
    if (1 < param_2) {
      *(undefined4 *)(iVar1 + 0x58) = 1;
      *(int *)(*(int *)(*param_1 + 0x48) + 100) = param_2;
      return 0;
    }
  }
  return 0xffffffff;
}

// @baa 0x01bb94e0
undefined4 sub_01bb94e0(int * param_1)
{
  int iVar1;
  
  if (((param_1 != (int *)0x0) && (*param_1 != 0)) &&
     (iVar1 = *(int *)(*param_1 + 0x48), iVar1 != 0)) {
    return *(undefined4 *)(iVar1 + 0x5c);
  }
  return 0xffffffff;
}

// @baa 0x01bb9500
undefined4 sub_01bb9500(int * param_1, int param_2)
{
  int iVar1;
  
  if ((((param_1 != (int *)0x0) && (*param_1 != 0)) &&
      (iVar1 = *(int *)(*param_1 + 0x48), iVar1 != 0)) && (0 < param_2)) {
    *(int *)(iVar1 + 0x5c) = param_2;
    return 0;
  }
  return 0xffffffff;
}

// @baa 0x01bb9530
undefined4 sub_01bb9530(int * param_1)
{
  if ((param_1 != (int *)0x0) && (*param_1 != 0)) {
    return *(undefined4 *)(*(int *)(*param_1 + 0x48) + 0x54);
  }
  return 0xffffffff;
}

// @baa 0x01bb9550
undefined4 sub_01bb9550(int * param_1, int param_2)
{
  if (((param_1 != (int *)0x0) && (*param_1 != 0)) && (0 < param_2)) {
    *(int *)(*(int *)(*param_1 + 0x48) + 0x54) = param_2;
    return 0;
  }
  return 0xffffffff;
}

// @baa 0x01bb9580
undefined4 sub_01bb9580(int param_1)
{
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0x24) = 1;
    return 0;
  }
  return 0xffffffff;
}

int sub_01bb51e0(...);
int sub_01bd4f20(...);
int sub_01bdda50(...);
// @baa 0x01bb9730
undefined4 sub_01bb9730(int param_1)
{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = sub_01bdda50(param_1);
  uVar2 = sub_01bd4f20(uVar1);
  sub_01bb51e0(uVar1);
  return uVar2;
}

// @baa 0x01bb9800
undefined4 sub_01bb9800(int param_1, int param_2)
{
  return *(undefined4 *)(param_2 * 0x10 + 0x1f9c + param_1);
}

int sub_01bb9e70(...);
// @baa 0x01bb9fd0
void sub_01bb9fd0(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6, undefined4 param_7)
{
  sub_01bb9e70(param_1,param_2,param_3,param_5,param_4,param_6,param_7,0);
  return;
}

void * sub_01a37612(void *, int, size_t);
int sub_01bdfe20(...);
// @baa 0x01bba240
undefined4 sub_01bba240(int param_1)
{
  if (param_1 == 0) {
    return 0xffffffff;
  }
  sub_01bdfe20(param_1);
  **(undefined4 **)(param_1 + 8) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)(*(int *)(param_1 + 8) + 4) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)(*(int *)(param_1 + 8) + 8) = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)(*(int *)(param_1 + 8) + 0x14) = 0;
  *(undefined4 *)(*(int *)(param_1 + 8) + 0x18) = 0;
  sub_01a37612(*(void **)(param_1 + 0xc),0,0x100);
  sub_01a37612(*(void **)(param_1 + 0x10),0,0x100);
  sub_01a37612(*(void **)(param_1 + 0x14),0,0x400);
  if (*(int *)(param_1 + 0x1c) != 0) {
    sub_01bb51e0(*(int *)(param_1 + 0x1c));
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  *(undefined4 *)(param_1 + 0x50) = 1;
  return 0;
}

int sub_01bb53d0(...);
// @baa 0x01bbab10
undefined4 * sub_01bbab10(int param_1)
{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)0x0;
  if (param_1 != 0) {
    puVar1 = (undefined4 *)sub_01bb53d0(1,0x2c);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = 0x76664d46;
      puVar1[9] = param_1;
    }
  }
  return puVar1;
}

#pragma pack(push, 1)
struct _iobuf { char * _ptr; int _cnt; char * _base; int _flag; int _file; int _charbuf; int _bufsiz; char * _tmpfname; };

#pragma pack(pop)
typedef _iobuf FILE;

int sub_01bbff50(void);
extern "C" __declspec(dllimport) int fclose(...);
// @baa 0x01bbac00
undefined4 sub_01bbac00(undefined4 * param_1)
{
  int iVar1;
  uint *puVar2;
  
  iVar1 = sub_01bbff50();
  if (param_1 != (undefined4 *)0x0) {
    if ((param_1[4] & 0xf000) == 0xf000) {
      puVar2 = (uint *)param_1[10];
      if (puVar2 == (uint *)0x0) {
        puVar2 = (uint *)(param_1[5] * 0x10 + *(int *)(iVar1 + 4));
      }
      if ((*puVar2 & 2) != 0) {
        *puVar2 = *puVar2 & 0xfffffffd;
        puVar2[1] = param_1[6];
        puVar2[3] = param_1[3];
      }
      *param_1 = 0;
      sub_01bb51e0(param_1);
      return 0;
    }
    fclose((FILE *)param_1[9]);
    param_1[9] = 0;
    *param_1 = 0;
    sub_01bb51e0(param_1);
  }
  return 0;
}

#pragma pack(push, 1)
#pragma pack(pop)
extern "C" __declspec(dllimport) int ftell(...);
// @baa 0x01bbaed0
long sub_01bbaed0(int param_1)
{
  long lVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  if ((*(uint *)(param_1 + 0x10) & 0xf000) == 0xf000) {
    return *(long *)(param_1 + 8);
  }
                    
                    
  lVar1 = ftell(*(FILE **)(param_1 + 0x24));
  return lVar1;
}

#pragma pack(push, 1)
#pragma pack(pop)
extern "C" __declspec(dllimport) int feof(...);
// @baa 0x01bbaf80
uint sub_01bbaf80(int param_1)
{
  uint uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  if ((*(uint *)(param_1 + 0x10) & 0xf000) == 0xf000) {
    return *(uint *)(param_1 + 0x10) & 0x10;
  }
                    
                    
  uVar1 = feof(*(FILE **)(param_1 + 0x24));
  return uVar1;
}

#pragma pack(push, 1)
#pragma pack(pop)
extern "C" __declspec(dllimport) int _fileno(...);
extern "C" __declspec(dllimport) int _filelength(...);
// @baa 0x01bbafb0
long sub_01bbafb0(int param_1)
{
  int _FileHandle;
  long lVar1;
  
  if (param_1 == 0) {
    return -1;
  }
  if ((*(uint *)(param_1 + 0x10) & 0xf000) == 0xf000) {
    return *(long *)(param_1 + 0x1c);
  }
  _FileHandle = _fileno(*(FILE **)(param_1 + 0x24));
                    
                    
  lVar1 = _filelength(_FileHandle);
  return lVar1;
}

extern "C" __declspec(dllimport) int _findclose(...);
// @baa 0x01bbb520
undefined4 sub_01bbb520(int * param_1)
{
  if (*param_1 == 0x66664d46) {
    *param_1 = 0;
    return 0;
  }
  _findclose(param_1[4]);
  return 0xffffffff;
}

// @baa 0x01bbb880
undefined4 sub_01bbb880(void)
{
  int iVar1;
  
  iVar1 = sub_01bbff50();
  return *(undefined4 *)(iVar1 + 8);
}

int sub_01bb66d0(...);
// @baa 0x01bbb890
void sub_01bbb890(int param_1, int param_2)
{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar1 = sub_01bbff50();
  piVar2 = (int *)sub_01bb53d0(1,0x10);
  piVar2[3] = param_1;
  if (param_2 != 0) {
    iVar3 = sub_01bb66d0(param_2);
    piVar2[2] = iVar3;
  }
  if (*(int *)(iVar1 + 8) != 0) {
    *piVar2 = *(int *)(iVar1 + 8);
    *(int **)(*(int *)(iVar1 + 8) + 4) = piVar2;
  }
  *(int **)(iVar1 + 8) = piVar2;
  return;
}

// @baa 0x01bbb8e0
void sub_01bbb8e0(void)
{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  
  iVar3 = sub_01bbff50();
  puVar2 = *(undefined4 **)(iVar3 + 8);
  while (puVar2 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)*puVar2;
    if (puVar2[2] != 0) {
      sub_01bb51e0(puVar2[2]);
      puVar2[2] = 0;
    }
    sub_01bb51e0(puVar2);
    puVar2 = puVar1;
  }
  *(undefined4 *)(iVar3 + 8) = 0;
  return;
}

// @baa 0x01bbba10
int sub_01bbba10(void) { return 400; }

int sub_01be20e0(...);
// @baa 0x01bbbe80
undefined4 sub_01bbbe80(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
  sub_01be20e0(param_3,param_4,param_1,param_2);
  return 0;
}

// @baa 0x01bbf8b0
void sub_01bbf8b0(int param_1, undefined4 param_2, undefined4 param_3)
{
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0x3c) = param_2;
    *(undefined4 *)(param_1 + 0x40) = param_3;
  }
  return;
}

void sub_01be4c90();
// @baa 0x01bbfa20
void sub_01bbfa20(void) { sub_01be4c90(); }

// @baa 0x01bbfa30
void sub_01bbfa30(int param_1)
{
  *(undefined4 *)(param_1 + 0x24) = 1;
  return;
}

int sub_01bda640(...);
int sub_01be4c80(...);
int sub_01be4fd0(void);
int sub_01be5020(void);
// @baa 0x01bbfa40
undefined4 sub_01bbfa40(int param_1)
{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined4 *)sub_01be4fd0();
  uVar2 = sub_01be4c80(param_1);
  if (param_1 != 0) {
    if (*(int *)(param_1 + 0x38) != 0) {
      sub_01bda640(*(int *)(param_1 + 0x38));
      *(undefined4 *)(param_1 + 0x38) = 0;
    }
    sub_01bb51e0(param_1);
    *puVar1 = 0;
  }
  sub_01be5020();
  return uVar2;
}

void sub_01be4ca0();
// @baa 0x01bbfa90
void sub_01bbfa90(void) { sub_01be4ca0(); }

void sub_01be4cf0();
// @baa 0x01bbfaa0
void sub_01bbfaa0(void) { sub_01be4cf0(); }

void sub_01be4cd0();
// @baa 0x01bbfab0
void sub_01bbfab0(void) { sub_01be4cd0(); }

int sub_01bbb7e0(void);
// @baa 0x01bbfee0
void sub_01bbfee0(void)
{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)sub_01bbb7e0();
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  return;
}

extern undefined4 g_027d410c;
extern undefined4 g_027d4110;
extern undefined4 g_027d4114;
extern undefined4 g_027d4118;
extern undefined4 g_027d411c;
extern undefined4 g_027d4120;
extern undefined4 g_027d4124;
extern undefined4 g_027d4128;
extern undefined4 g_027d412c;
extern undefined4 g_027d4130;
extern undefined4 g_027d4134;
// @baa 0x01bbff00
undefined * sub_01bbff00(void)
{
  g_027d410c = 0;
  g_027d4110 = 0;
  g_027d4114 = 0;
  g_027d4118 = 0;
  g_027d411c = 0;
  g_027d4120 = 0;
  g_027d4124 = 0;
  g_027d4128 = 0;
  g_027d4130 = 0;
  g_027d4134 = 0;
  g_027d412c = 100000;
  return (undefined *)(&g_027d410c);
}

// @baa 0x01bbffe0
void sub_01bbffe0(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined2 param_5, undefined2 param_6)
{
  int iVar1;
  
  iVar1 = sub_01bb53d0(1,0x30);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 4) = param_3;
    *(undefined4 *)(iVar1 + 8) = param_2;
    *(undefined4 *)(iVar1 + 0x14) = param_2;
    *(undefined4 *)(iVar1 + 0xc) = param_1;
    *(undefined4 *)(iVar1 + 0x18) = param_4;
    *(undefined2 *)(iVar1 + 0x1c) = param_5;
    *(undefined2 *)(iVar1 + 0x1e) = param_6;
  }
  return;
}
