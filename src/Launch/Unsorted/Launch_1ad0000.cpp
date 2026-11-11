// Launch_1ad0000.cpp (part 1 of 4): 67 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    undefined4 sub_01ad0380(byte);
};

int sub_01ab3290(...);
int sub_01acf0f0(void);
// @baa 0x01ad0380
undefined4 C::sub_01ad0380(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01acf0f0();
  if ((param_2 & 1) != 0) {
    sub_01ab3290(param_1,0x24);
  }
  return param_1;
}

struct C_01ad0440 {
    undefined4 sub_01ad0440(byte);
};

int sub_01acf260(void);
// @baa 0x01ad0440
undefined4 C_01ad0440::sub_01ad0440(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01acf260();
  if ((param_2 & 1) != 0) {
    sub_01ab3290(param_1,0x3c);
  }
  return param_1;
}

struct C_01ad0570 {
    undefined4 sub_01ad0570(byte);
};

int sub_01acf390(void);
// @baa 0x01ad0570
undefined4 C_01ad0570::sub_01ad0570(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01acf390();
  if ((param_2 & 1) != 0) {
    sub_01ab3290(param_1,0x3c);
  }
  return param_1;
}

struct C_01ad0660 {
    undefined4 sub_01ad0660(byte);
};

int sub_01acf4c0(void);
// @baa 0x01ad0660
undefined4 C_01ad0660::sub_01ad0660(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01acf4c0();
  if ((param_2 & 1) != 0) {
    sub_01ab3290(param_1,0x3c);
  }
  return param_1;
}

struct C_01ad0750 {
    undefined4 sub_01ad0750(byte);
};

int sub_01acf5f0(void);
// @baa 0x01ad0750
undefined4 C_01ad0750::sub_01ad0750(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01acf5f0();
  if ((param_2 & 1) != 0) {
    sub_01ab3290(param_1,0x3c);
  }
  return param_1;
}

struct C_01ad0840 {
    undefined4 sub_01ad0840(byte);
};

int sub_01acf720(void);
// @baa 0x01ad0840
undefined4 C_01ad0840::sub_01ad0840(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01acf720();
  if ((param_2 & 1) != 0) {
    sub_01ab3290(param_1,0x3c);
  }
  return param_1;
}

struct C_01ad0900 {
    undefined4 sub_01ad0900(byte);
};

int sub_01acf850(void);
// @baa 0x01ad0900
undefined4 C_01ad0900::sub_01ad0900(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01acf850();
  if ((param_2 & 1) != 0) {
    sub_01ab3290(param_1,0x3c);
  }
  return param_1;
}

struct C_01ad09c0 {
    undefined4 sub_01ad09c0(byte);
};

int sub_01acf980(void);
// @baa 0x01ad09c0
undefined4 C_01ad09c0::sub_01ad09c0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01acf980();
  if ((param_2 & 1) != 0) {
    sub_01ab3290(param_1,0x3c);
  }
  return param_1;
}

struct C_01ad0a80 {
    undefined4 sub_01ad0a80(byte);
};

int sub_01acfab0(void);
// @baa 0x01ad0a80
undefined4 C_01ad0a80::sub_01ad0a80(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01acfab0();
  if ((param_2 & 1) != 0) {
    sub_01ab3290(param_1,0x3c);
  }
  return param_1;
}

struct C_01ad0b70 {
    undefined4 sub_01ad0b70(byte);
};

int sub_01acfbe0(void);
// @baa 0x01ad0b70
undefined4 C_01ad0b70::sub_01ad0b70(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01acfbe0();
  if ((param_2 & 1) != 0) {
    sub_01ab3290(param_1,0x3c);
  }
  return param_1;
}

struct C_01ad0c70 {
    undefined4 sub_01ad0c70(byte);
};

int sub_01acfd10(void);
// @baa 0x01ad0c70
undefined4 C_01ad0c70::sub_01ad0c70(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01acfd10();
  if ((param_2 & 1) != 0) {
    sub_01ab3290(param_1,0x3c);
  }
  return param_1;
}

// @baa 0x01ad1610
void sub_01ad1610(void) {  }

struct C_01ad1660 { int sub_01ad1660(void); };

// @baa 0x01ad1660
int C_01ad1660::sub_01ad1660(void) { return *(int*)((char*)this + 16); }

struct C_01ad1670 { void sub_01ad1670(int a0); };

// @baa 0x01ad1670
void C_01ad1670::sub_01ad1670(int a0) { *(int*)((char*)this + 16) = a0; }

struct C_01ad17e0 {
    void sub_01ad17e0(undefined4 *);
};

// @baa 0x01ad17e0
void C_01ad17e0::sub_01ad17e0(undefined4 * param_2)
{
    int param_1 = (int)this;

  *(undefined4 *)(param_1 + 0x1c) = *param_2;
  return;
}

struct C_01ad17f0 {
    int sub_01ad17f0();
};

// @baa 0x01ad17f0
int C_01ad17f0::sub_01ad17f0(void)
{
    int * param_1 = (int *)this;

  return *param_1 + -0x14 + param_1[2] * 0x14;
}

struct C_01ad1800 { int sub_01ad1800(void); };

// @baa 0x01ad1800
int C_01ad1800::sub_01ad1800(void) { return *(int*)((char*)this + 0); }

struct C_01ad29b0 {
    undefined4 sub_01ad29b0(byte);
};

int sub_01ad2460(void);
// @baa 0x01ad29b0
undefined4 C_01ad29b0::sub_01ad29b0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01ad2460();
  if ((param_2 & 1) != 0) {
    sub_01ab3290(param_1,0x20);
  }
  return param_1;
}

// @baa 0x01ad2e90
void sub_01ad2e90(void) {  }

// @baa 0x01ad2ea0
void sub_01ad2ea0(void) {  }

// @baa 0x01ad2eb0
void sub_01ad2eb0(void) {  }

// @baa 0x01ad2ec0
void sub_01ad2ec0(void) {  }

// @baa 0x01ad2ed0
void sub_01ad2ed0(void) {  }

struct C_01ad2f40 { int sub_01ad2f40(void); };

// @baa 0x01ad2f40
int C_01ad2f40::sub_01ad2f40(void) { return *(int*)((char*)this + 8); }

struct C_01ad2f50 {
    int sub_01ad2f50(int);
};

// @baa 0x01ad2f50
int C_01ad2f50::sub_01ad2f50(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

struct C_01ad2f60 {
    int sub_01ad2f60(int);
};

// @baa 0x01ad2f60
int C_01ad2f60::sub_01ad2f60(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x48;
}

struct C_01ad2f70 { int sub_01ad2f70(void); };

// @baa 0x01ad2f70
int C_01ad2f70::sub_01ad2f70(void) { return *(int*)((char*)this + 8); }

struct C_01ad2f80 {
    int sub_01ad2f80(int);
};

// @baa 0x01ad2f80
int C_01ad2f80::sub_01ad2f80(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

// @baa 0x01ad3030
void sub_01ad3030(void) {  }

// @baa 0x01ad3040
void sub_01ad3040(void) {  }

struct C_01ad30f0 { int sub_01ad30f0(void); };

// @baa 0x01ad30f0
int C_01ad30f0::sub_01ad30f0(void) { return *(int*)((char*)this + 8); }

struct C_01ad3100 {
    bool sub_01ad3100();
};

// @baa 0x01ad3100
bool C_01ad3100::sub_01ad3100(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 8) == 0;
}

struct C_01ad3110 { int sub_01ad3110(void); };

// @baa 0x01ad3110
int C_01ad3110::sub_01ad3110(void) { return *(int*)((char*)this + 0); }

struct C_01ad3120 {
    int sub_01ad3120();
};

// @baa 0x01ad3120
int C_01ad3120::sub_01ad3120(void)
{
    int * param_1 = (int *)this;

  return param_1[2] * 0x10 + *param_1;
}

// @baa 0x01ad3130
void sub_01ad3130(undefined4 * param_1, undefined4 * param_2)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
  }
  return;
}

// @baa 0x01ad3150
void sub_01ad3150(void) {  }

// @baa 0x01ad3160
void sub_01ad3160(undefined4 * param_1, undefined4 * param_2)
{
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return;
}

// @baa 0x01ad3180
void sub_01ad3180(undefined4 * param_1, undefined4 * param_2)
{
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return;
}

// @baa 0x01ad31a0
void sub_01ad31a0(undefined4 * param_1, undefined4 * param_2)
{
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return;
}

struct C_01ad3200 { int sub_01ad3200(void); };

// @baa 0x01ad3200
int C_01ad3200::sub_01ad3200(void) { return *(int*)((char*)this + 0); }

struct C_01ad3210 {
    int sub_01ad3210();
};

// @baa 0x01ad3210
int C_01ad3210::sub_01ad3210(void)
{
    int * param_1 = (int *)this;

  return param_1[2] * 0x10 + *param_1;
}

// @baa 0x01ad32c0
void sub_01ad32c0(undefined4 * param_1, undefined4 * param_2)
{
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return;
}

// @baa 0x01ad3490
void sub_01ad3490(void) {  }

// @baa 0x01ad34a0
void sub_01ad34a0(void) {  }

// @baa 0x01ad34b0
void sub_01ad34b0(void) {  }

// @baa 0x01ad34c0
void sub_01ad34c0(void) {  }

struct C_01ad3590 {
    int sub_01ad3590();
};

// @baa 0x01ad3590
int C_01ad3590::sub_01ad3590(void)
{
    int param_1 = (int)this;

  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar1 = 0;
  piVar2 = (int *)(param_1 + 0x24);
  iVar3 = 0x200;
  do {
    if (piVar2[-3] != 0) {
      iVar1 = iVar1 + 1;
    }
    if (*piVar2 != 0) {
      iVar1 = iVar1 + 1;
    }
    if (piVar2[3] != 0) {
      iVar1 = iVar1 + 1;
    }
    if (piVar2[6] != 0) {
      iVar1 = iVar1 + 1;
    }
    piVar2 = piVar2 + 0xc;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return iVar1;
}

struct C_01ad46c0 {
    void sub_01ad46c0();
};

// @baa 0x01ad46c0
void C_01ad46c0::sub_01ad46c0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_01ab3290(*param_1,param_1[1] * 4);
  *param_1 = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  return;
}

struct C_01ad46f0 {
    void sub_01ad46f0();
};

// @baa 0x01ad46f0
void C_01ad46f0::sub_01ad46f0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_01ab3290(*param_1,param_1[1]);
  *param_1 = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  return;
}

struct C_01ad4740 {
    undefined4 * sub_01ad4740(byte);
};

int sub_00402660(...);
// @baa 0x01ad4740
undefined4 * C_01ad4740::sub_01ad4740(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_01ab3290(*param_1,param_1[1]);
  *param_1 = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_01ad4840 {
    void sub_01ad4840();
};

// @baa 0x01ad4840
void C_01ad4840::sub_01ad4840(void)
{
    int param_1 = (int)this;

  sub_01ab3290(*(undefined4 *)(param_1 + 8),*(int *)(param_1 + 0xc) * 4);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}

struct C_01ad4950 {
    int sub_01ad4950(byte);
};

// @baa 0x01ad4950
int C_01ad4950::sub_01ad4950(byte param_2)
{
    int param_1 = (int)this;

  sub_01ab3290(*(undefined4 *)(param_1 + 8),*(int *)(param_1 + 0xc) * 4);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

// @baa 0x01ad49f0
void sub_01ad49f0(undefined4 * param_1)
{
  if (param_1 != (undefined4 *)0x0) {
    sub_01ab3290(*param_1,param_1[1]);
    *param_1 = 0;
    param_1[2] = 0;
    param_1[1] = 0;
  }
  return;
}

// @baa 0x01ad4bd0
void sub_01ad4bd0(int param_1)
{
  if (param_1 != 0) {
    sub_01ab3290(*(undefined4 *)(param_1 + 8),*(int *)(param_1 + 0xc) * 4);
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  return;
}

// @baa 0x01ad4c70
void sub_01ad4c70(undefined4 * param_1, undefined4 * param_2)
{
  for (; param_1 != param_2; param_1 = param_1 + 4) {
    if (param_1 != (undefined4 *)0x0) {
      sub_01ab3290(*param_1,param_1[1]);
      *param_1 = 0;
      param_1[2] = 0;
      param_1[1] = 0;
    }
  }
  return;
}

// @baa 0x01ad4ce0
void sub_01ad4ce0(int param_1, int param_2)
{
  int *piVar1;
  
  if (param_1 != param_2) {
    piVar1 = (int *)(param_1 + 0xc);
    do {
      if (param_1 != 0) {
        sub_01ab3290(piVar1[-1],*piVar1 * 4);
        piVar1[-1] = 0;
        piVar1[1] = 0;
        *piVar1 = 0;
      }
      param_1 = param_1 + 0x14;
      piVar1 = piVar1 + 5;
    } while (param_1 != param_2);
  }
  return;
}

struct C_01ad5dd0 {
    undefined4 sub_01ad5dd0(byte);
};

int sub_01ad5860(void);
// @baa 0x01ad5dd0
undefined4 C_01ad5dd0::sub_01ad5dd0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01ad5860();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

#pragma pack(push, 1)
struct _iobuf { char * _ptr; int _cnt; char * _base; int _flag; int _file; int _charbuf; int _bufsiz; char * _tmpfname; };

#pragma pack(pop)
typedef _iobuf FILE;

struct C_01ad6ba0 {
    void sub_01ad6ba0();
};

extern "C" __declspec(dllimport) int fclose(...);
// @baa 0x01ad6ba0
void C_01ad6ba0::sub_01ad6ba0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  if ((FILE *)*param_1 != (FILE *)0x0) {
    fclose((FILE *)*param_1);
  }
  *param_1 = 0;
  return;
}

#pragma pack(push, 1)
#pragma pack(pop)
typedef uint size_t;

struct C_01ad6bc0 {
    size_t sub_01ad6bc0(void *, size_t);
};

extern "C" __declspec(dllimport) int fread(...);
// @baa 0x01ad6bc0
size_t C_01ad6bc0::sub_01ad6bc0(void * param_2, size_t param_3)
{
    undefined4 * param_1 = (undefined4 *)this;

  size_t sVar1;
  
  if ((FILE *)*param_1 != (FILE *)0x0) {
    sVar1 = fread(param_2,1,param_3,(FILE *)*param_1);
    return sVar1;
  }
  return 0;
}

#pragma pack(push, 1)
#pragma pack(pop)
struct C_01ad6bf0 {
    size_t sub_01ad6bf0(void *, size_t);
};

extern "C" __declspec(dllimport) int fwrite(...);
// @baa 0x01ad6bf0
size_t C_01ad6bf0::sub_01ad6bf0(void * param_2, size_t param_3)
{
    undefined4 * param_1 = (undefined4 *)this;

  size_t sVar1;
  
  if ((FILE *)*param_1 != (FILE *)0x0) {
    sVar1 = fwrite(param_2,1,param_3,(FILE *)*param_1);
    return sVar1;
  }
  return 0;
}

#pragma pack(push, 1)
#pragma pack(pop)
struct C_01ad6c20 {
    long sub_01ad6c20();
};

extern "C" __declspec(dllimport) int ftell(...);
// @baa 0x01ad6c20
long C_01ad6c20::sub_01ad6c20(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  long lVar1;
  
  if ((FILE *)*param_1 != (FILE *)0x0) {
    lVar1 = ftell((FILE *)*param_1);
    return lVar1;
  }
  return 0;
}

#pragma pack(push, 1)
#pragma pack(pop)
struct C_01ad6c40 {
    void sub_01ad6c40(long);
};

extern "C" __declspec(dllimport) int fseek(...);
// @baa 0x01ad6c40
void C_01ad6c40::sub_01ad6c40(long param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  if ((FILE *)*param_1 != (FILE *)0x0) {
    fseek((FILE *)*param_1,param_2,0);
  }
  return;
}

struct C_01ad6c60 { int sub_01ad6c60(void); };

// @baa 0x01ad6c60
int C_01ad6c60::sub_01ad6c60(void) { return *(int*)((char*)this + 4); }

#pragma pack(push, 1)
#pragma pack(pop)
struct C_01ad6c90 {
    void sub_01ad6c90();
};

// @baa 0x01ad6c90
void C_01ad6c90::sub_01ad6c90(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  if ((FILE *)*param_1 != (FILE *)0x0) {
    fclose((FILE *)*param_1);
  }
  *param_1 = 0;
  return;
}

struct C_01ad6ef0 {
    void sub_01ad6ef0();
};

int sub_01ab6720(void);
extern undefined4 g_0240d21c;
// @baa 0x01ad6ef0
void C_01ad6ef0::sub_01ad6ef0(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_0240d21c));
  sub_01ab6720();
  return;
}

struct C_01ad6f00 {
    void sub_01ad6f00(undefined4 *);
};

// @baa 0x01ad6f00
void C_01ad6f00::sub_01ad6f00(undefined4 * param_2)
{
    int param_1 = (int)this;

  *(undefined4 *)(param_1 + 8) = *param_2;
  *(undefined4 *)(param_1 + 0xc) = param_2[1];
  *(undefined4 *)(param_1 + 0x10) = param_2[2];
  return;
}

struct C_01ad6f20 {
    void sub_01ad6f20(undefined4 *);
};

// @baa 0x01ad6f20
void C_01ad6f20::sub_01ad6f20(undefined4 * param_2)
{
    int param_1 = (int)this;

  *(undefined4 *)(param_1 + 0x14) = *param_2;
  *(undefined4 *)(param_1 + 0x18) = param_2[1];
  *(undefined4 *)(param_1 + 0x1c) = param_2[2];
  *(undefined4 *)(param_1 + 0x20) = param_2[3];
  return;
}
