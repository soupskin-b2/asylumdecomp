// Launch_1af0000.cpp (part 2 of 5): 66 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    int sub_01af1dc0(int);
};

// @baa 0x01af1dc0
int C::sub_01af1dc0(int param_2)
{
    int param_1 = (int)this;

  return param_1 + param_2 * 0xc;
}

struct C_01af1f90 { C_01af1f90* sub_01af1f90(void); };

// @baa 0x01af1f90
C_01af1f90* C_01af1f90::sub_01af1f90(void) { return this; }

struct C_01af2120 {
    undefined1 sub_01af2120();
};

// @baa 0x01af2120
undefined1 C_01af2120::sub_01af2120(void)
{
    int param_1 = (int)this;

  return *(undefined1 *)(param_1 + 0x14);
}

struct C_01af2130 {
    int sub_01af2130(int);
};

// @baa 0x01af2130
int C_01af2130::sub_01af2130(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0xc;
}

struct C_01af2140 {
    int sub_01af2140(int *, int *);
};

// @baa 0x01af2140
int C_01af2140::sub_01af2140(int * param_2, int * param_3)
{
    int * param_1 = (int *)this;

  return *param_3 * 0x10 + *(int *)(*param_1 + *param_2 * 4);
}

struct C_01af2160 {
    int sub_01af2160(int);
};

// @baa 0x01af2160
int C_01af2160::sub_01af2160(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_01af2170 {
    void sub_01af2170(int);
};

extern "C" __declspec(dllimport) int free(...);
extern "C" __declspec(dllimport) int realloc(...);
extern "C" __declspec(dllimport) int malloc(...);
// @baa 0x01af2170
void C_01af2170::sub_01af2170(int param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  void *pvVar1;
  
  param_1[2] = param_2;
  if (param_2 == 0) {
    if ((void *)*param_1 != (void *)0x0) {
      free((void *)*param_1);
      *param_1 = 0;
      return;
    }
  }
  else {
    if ((void *)*param_1 != (void *)0x0) {
      pvVar1 = (void *)(realloc((void *)*param_1,param_2 * 0xc));
      *param_1 = (undefined4)(pvVar1);
      return;
    }
    pvVar1 = (void *)(malloc(param_2 * 0xc));
    *param_1 = (undefined4)(pvVar1);
  }
  return;
}

struct C_01af21d0 {
    int sub_01af21d0(int);
};

// @baa 0x01af21d0
int C_01af21d0::sub_01af21d0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

struct C_01af21e0 {
    undefined4 sub_01af21e0();
};

// @baa 0x01af21e0
undefined4 C_01af21e0::sub_01af21e0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  if (param_1[1] == 0) {
    return 0;
  }
  return *(undefined4 *)*param_1;
}

struct C_01af21f0 {
    undefined4 sub_01af21f0();
};

// @baa 0x01af21f0
undefined4 C_01af21f0::sub_01af21f0(void)
{
    int * param_1 = (int *)this;

  if (param_1[1] == 0) {
    return 0;
  }
  return *(undefined4 *)(*param_1 + 4);
}

struct C_01af2200 {
    int sub_01af2200(int);
};

// @baa 0x01af2200
int C_01af2200::sub_01af2200(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0xc;
}

struct C_01af2210 {
    undefined4 sub_01af2210();
};

// @baa 0x01af2210
undefined4 C_01af2210::sub_01af2210(void)
{
    int * param_1 = (int *)this;

  return *(undefined4 *)(*param_1 + 8);
}

struct C_01af2220 {
    undefined4 sub_01af2220();
};

// @baa 0x01af2220
undefined4 C_01af2220::sub_01af2220(void)
{
    int * param_1 = (int *)this;

  return *(undefined4 *)(*param_1 + 4);
}

struct C_01af4b70 {
    undefined4 sub_01af4b70(undefined4, char *);
};

// @baa 0x01af4b70
undefined4 C_01af4b70::sub_01af4b70(undefined4 param_2, char * param_3)
{
    int param_1 = (int)this;

  *(uint *)(param_1 + 8) = (*param_3 != 'r') + 1;
  return 0;
}

// @baa 0x01af4b90
int sub_01af4b90(void) { return 0; }

// @baa 0x01af4ba0
int sub_01af4ba0(void) { return 4; }

// @baa 0x01af4bb0
void __stdcall sub_01af4bb0(int a0, int a1, int a2, int a3) {  }

// @baa 0x01af4bc0
void __stdcall sub_01af4bc0(int a0) {  }

struct C_01af4bd0 {
    void sub_01af4bd0(undefined4, undefined4, undefined4, undefined4);
};

// @baa 0x01af4bd0
void C_01af4bd0::sub_01af4bd0(undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 8) == 2) {
    *(undefined4 *)(param_1 + 0x24) = param_2;
    *(undefined4 *)(param_1 + 0x28) = param_3;
    *(undefined4 *)(param_1 + 0x2c) = param_4;
    *(undefined4 *)(param_1 + 0x30) = param_5;
  }
  return;
}

// @baa 0x01af4c10
void __stdcall sub_01af4c10(int a0, int a1, int a2) {  }

// @baa 0x01af4c20
void __stdcall sub_01af4c20(int a0, int a1, int a2, int a3) {  }

// @baa 0x01af4c30
void __stdcall sub_01af4c30(int a0, int a1, int a2) {  }

// @baa 0x01af4c40
void __stdcall sub_01af4c40(int a0, int a1, int a2, int a3, int a4, int a5) {  }

// @baa 0x01af4c50
void __stdcall sub_01af4c50(int a0, int a1, int a2, int a3) {  }

struct C_01af4f80 {
    void sub_01af4f80(undefined4 *, undefined4 *, undefined4 *, undefined4 *);
};

// @baa 0x01af4f80
void C_01af4f80::sub_01af4f80(undefined4 * param_2, undefined4 * param_3, undefined4 * param_4, undefined4 * param_5)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 8) == 1) {
    *param_2 = 0;
    *param_3 = 0;
    *param_4 = *(undefined4 *)(param_1 + 0x14);
    *param_5 = *(undefined4 *)(param_1 + 0x10);
    return;
  }
  *param_2 = 0xffffff11;
  *param_3 = 0xffffff11;
  *param_4 = 0xffffff11;
  *param_5 = 0xffffff11;
  return;
}

// @baa 0x01af54b0
void sub_01af54b0(void) {  }

// @baa 0x01af54c0
void __stdcall sub_01af54c0(int a0) {  }

// @baa 0x01af54d0
void sub_01af54d0(void) {  }

// @baa 0x01af54e0
void sub_01af54e0(void) {  }

// @baa 0x01af5510
int sub_01af5510(int * param_1, int * param_2)
{
  int iVar1;
  
  iVar1 = *param_1;
  if (*param_1 < *param_2) {
    iVar1 = *param_2;
  }
  return iVar1;
}

struct C_01af7b70 {
    undefined4 sub_01af7b70(undefined4, char *);
};

// @baa 0x01af7b70
undefined4 C_01af7b70::sub_01af7b70(undefined4 param_2, char * param_3)
{
    int param_1 = (int)this;

  *(uint *)(param_1 + 0x18) = (*param_3 != 'r') + 1;
  return 0;
}

struct C_01af7b90 {
    void sub_01af7b90();
};

int sub_00402680(...);
// @baa 0x01af7b90
void C_01af7b90::sub_01af7b90(void)
{
    int param_1 = (int)this;

  if ((*(int *)(param_1 + 0x18) == 2) && (*(int *)(param_1 + 0x1c) != 0)) {
    sub_00402680(*(int *)(param_1 + 0x1c));
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  return;
}

struct C_01af7bc0 {
    void sub_01af7bc0(undefined1, undefined1, undefined1, undefined1);
};

// @baa 0x01af7bc0
void C_01af7bc0::sub_01af7bc0(undefined1 param_2, undefined1 param_3, undefined1 param_4, undefined1 param_5)
{
    int param_1 = (int)this;

  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar3 = *(int *)(param_1 + 0x1c);
  if (*(int *)(param_1 + 0x10) == 3) {
    iVar5 = 0;
    if (0 < *(int *)(param_1 + 0xc)) {
      iVar2 = *(int *)(param_1 + 8);
      do {
        iVar4 = 0;
        if (0 < iVar2) {
          puVar1 = (undefined1 *)(iVar3 + 2);
          do {
            puVar1[-1] = param_3;
            puVar1[-2] = param_4;
            *puVar1 = param_2;
            puVar1[1] = 0xff;
            iVar2 = *(int *)(param_1 + 8);
            iVar4 = iVar4 + 1;
            puVar1 = puVar1 + 3;
          } while (iVar4 < iVar2);
        }
        iVar3 = iVar3 + *(int *)(param_1 + 0x14);
        iVar5 = iVar5 + 1;
      } while (iVar5 < *(int *)(param_1 + 0xc));
      return;
    }
  }
  else if ((*(int *)(param_1 + 0x10) == 4) && (iVar5 = 0, 0 < *(int *)(param_1 + 0xc))) {
    iVar2 = *(int *)(param_1 + 8);
    do {
      iVar4 = 0;
      if (0 < iVar2) {
        puVar1 = (undefined1 *)(iVar3 + 2);
        do {
          puVar1[-2] = param_4;
          puVar1[-1] = param_3;
          *puVar1 = param_2;
          puVar1[1] = param_5;
          iVar2 = *(int *)(param_1 + 8);
          iVar4 = iVar4 + 1;
          puVar1 = puVar1 + 4;
        } while (iVar4 < iVar2);
      }
      iVar3 = iVar3 + *(int *)(param_1 + 0x14);
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(param_1 + 0xc));
  }
  return;
}

// @baa 0x01af7c80
int sub_01af7c80(void) { return 0; }

typedef uint size_t;

struct C_01af7c90 {
    void sub_01af7c90(byte);
};

void * sub_01a37612(void *, int, size_t);
// @baa 0x01af7c90
void C_01af7c90::sub_01af7c90(byte param_2)
{
    int param_1 = (int)this;

  int iVar1;
  void *_Dst;
  
  iVar1 = 0;
  _Dst = *(void **)(param_1 + 0x1c);
  if (0 < *(int *)(param_1 + 0xc)) {
    do {
      sub_01a37612(_Dst,(uint)param_2,*(size_t *)(param_1 + 8));
      _Dst = (void *)((int)_Dst + *(int *)(param_1 + 0x14));
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(param_1 + 0xc));
  }
  return;
}

struct C_01af7cd0 {
    void sub_01af7cd0(int, int, size_t, void *);
};

void * sub_01a375f0(void *, void *, size_t);
// @baa 0x01af7cd0
void C_01af7cd0::sub_01af7cd0(int param_2, int param_3, size_t param_4, void * param_5)
{
    int param_1 = (int)this;

  sub_01a375f0((void *)(*(int *)(param_1 + 0x14) * param_2 + *(int *)(param_1 + 0x10) * param_3 +
                 *(int *)(param_1 + 0x1c)),param_5,param_4);
  return;
}

struct C_01af7d50 {
    void sub_01af7d50(int, int, int, undefined1 *);
};

// @baa 0x01af7d50
void C_01af7d50::sub_01af7d50(int param_2, int param_3, int param_4, undefined1 * param_5)
{
    int param_1 = (int)this;

  undefined1 *puVar1;
  
  if (*(int *)(param_1 + 0x10) == 3) {
    puVar1 = (undefined1 *)
             (*(int *)(param_1 + 0x14) * param_2 + param_3 * 3 + *(int *)(param_1 + 0x1c));
    if (0 < param_4) {
      do {
        *puVar1 = param_5[2];
        puVar1[1] = param_5[1];
        puVar1[2] = *param_5;
        puVar1 = puVar1 + 3;
        param_5 = param_5 + 4;
        param_4 = param_4 + -1;
      } while (param_4 != 0);
      return;
    }
  }
  else if ((*(int *)(param_1 + 0x10) == 4) &&
          (puVar1 = (undefined1 *)
                    (*(int *)(param_1 + 0x14) * param_2 + param_3 * 4 + *(int *)(param_1 + 0x1c)),
          0 < param_4)) {
    do {
      *puVar1 = param_5[2];
      puVar1[1] = param_5[1];
      puVar1[2] = *param_5;
      puVar1[3] = param_5[3];
      param_5 = param_5 + 4;
      puVar1 = puVar1 + 4;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return;
}

struct C_01af7df0 { int sub_01af7df0(void); };

// @baa 0x01af7df0
int C_01af7df0::sub_01af7df0(void) { return *(int*)((char*)this + 16); }

struct C_01af7e00 {
    void sub_01af7e00(undefined4 *, undefined4 *, undefined4 *, undefined4 *);
};

// @baa 0x01af7e00
void C_01af7e00::sub_01af7e00(undefined4 * param_2, undefined4 * param_3, undefined4 * param_4, undefined4 * param_5)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 0x18) == 1) {
    *param_2 = 0;
    *param_3 = 0;
    *param_4 = *(undefined4 *)(param_1 + 8);
    *param_5 = *(undefined4 *)(param_1 + 0xc);
    return;
  }
  *param_2 = 0xffffff11;
  *param_3 = 0xffffff11;
  *param_4 = 0xffffff11;
  *param_5 = 0xffffff11;
  return;
}

struct C_01af7e80 {
    void sub_01af7e80(int, int, undefined1 *);
};

// @baa 0x01af7e80
void C_01af7e80::sub_01af7e80(int param_2, int param_3, undefined1 * param_4)
{
    int param_1 = (int)this;

  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)
           (*(int *)(param_1 + 0x10) * param_2 + *(int *)(param_1 + 0x14) * param_3 +
           *(int *)(param_1 + 0x1c));
  param_4[2] = *puVar1;
  param_4[1] = puVar1[1];
  *param_4 = puVar1[2];
  param_4[3] = puVar1[3];
  return;
}

struct C_01af7ec0 {
    void sub_01af7ec0(int, int, size_t, void *);
};

// @baa 0x01af7ec0
void C_01af7ec0::sub_01af7ec0(int param_2, int param_3, size_t param_4, void * param_5)
{
    int param_1 = (int)this;

  sub_01a375f0(param_5,(void *)(*(int *)(param_1 + 0x14) * param_2 + *(int *)(param_1 + 0x10) * param_3 +
                         *(int *)(param_1 + 0x1c)),param_4);
  return;
}

struct C_01af7f40 {
    void sub_01af7f40(int, int, int, undefined1 *);
};

// @baa 0x01af7f40
void C_01af7f40::sub_01af7f40(int param_2, int param_3, int param_4, undefined1 * param_5)
{
    int param_1 = (int)this;

  undefined1 *puVar1;
  
  if (*(int *)(param_1 + 0x10) == 3) {
    puVar1 = (undefined1 *)
             (*(int *)(param_1 + 0x14) * param_2 + param_3 * 3 + *(int *)(param_1 + 0x1c));
    if (0 < param_4) {
      do {
        param_5[2] = *puVar1;
        param_5[1] = puVar1[1];
        *param_5 = puVar1[2];
        param_5[3] = 0xff;
        puVar1 = puVar1 + 3;
        param_5 = param_5 + 4;
        param_4 = param_4 + -1;
      } while (param_4 != 0);
      return;
    }
  }
  else if ((*(int *)(param_1 + 0x10) == 4) &&
          (puVar1 = (undefined1 *)
                    (*(int *)(param_1 + 0x14) * param_2 + param_3 * 4 + *(int *)(param_1 + 0x1c)),
          0 < param_4)) {
    do {
      param_5[2] = *puVar1;
      param_5[1] = puVar1[1];
      *param_5 = puVar1[2];
      param_5[3] = puVar1[3];
      puVar1 = puVar1 + 4;
      param_5 = param_5 + 4;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return;
}

struct C_01af7ff0 { void sub_01af7ff0(int a0); };

// @baa 0x01af7ff0
void C_01af7ff0::sub_01af7ff0(int a0) { *(int*)((char*)this + 16) = a0; }

struct C_01af8000 {
    void sub_01af8000(int, int, int, int);
};

// @baa 0x01af8000
void C_01af8000::sub_01af8000(int param_2, int param_3, int param_4, int param_5)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 0x18) == 2) {
    *(int *)(param_1 + 8) = param_2 + param_4;
    *(int *)(param_1 + 0xc) = param_3 + param_5;
  }
  return;
}

struct C_01af8030 {
    void sub_01af8030(int, int, undefined1);
};

// @baa 0x01af8030
void C_01af8030::sub_01af8030(int param_2, int param_3, undefined1 param_4)
{
    int param_1 = (int)this;

  *(undefined1 *)
   (*(int *)(param_1 + 0x10) * param_2 + *(int *)(param_1 + 0x14) * param_3 +
   *(int *)(param_1 + 0x1c)) = param_4;
  return;
}

struct C_01af8050 {
    void sub_01af8050(int, int, undefined1, undefined1, undefined1, undefined1);
};

// @baa 0x01af8050
void C_01af8050::sub_01af8050(int param_2, int param_3, undefined1 param_4, undefined1 param_5, undefined1 param_6, undefined1 param_7)
{
    int param_1 = (int)this;

  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)
           (*(int *)(param_1 + 0x10) * param_2 + *(int *)(param_1 + 0x14) * param_3 +
           *(int *)(param_1 + 0x1c));
  *puVar1 = param_6;
  puVar1[1] = param_5;
  puVar1[2] = param_4;
  puVar1[3] = param_7;
  return;
}

struct C_01af8090 {
    void sub_01af8090(int, int, int);
};

int sub_00402670(...);
// @baa 0x01af8090
void C_01af8090::sub_01af8090(int param_2, int param_3, int param_4)
{
    int param_1 = (int)this;

  undefined4 uVar1;
  
  *(int *)(param_1 + 8) = param_2;
  *(undefined4 *)(param_1 + 0x18) = 2;
  *(int *)(param_1 + 0xc) = param_3;
  *(int *)(param_1 + 0x10) = param_4;
  *(int *)(param_1 + 0x14) = param_2 * param_4;
  uVar1 = sub_00402670(param_2 * param_3 * param_4);
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  return;
}

struct C_01af80d0 {
    void sub_01af80d0();
};

// @baa 0x01af80d0
void C_01af80d0::sub_01af80d0(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 0x18) == 2) {
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0;
    if (*(int *)(param_1 + 0x1c) != 0) {
      sub_00402680(*(int *)(param_1 + 0x1c));
    }
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  return;
}

struct C_01af8100 {
    void sub_01af8100(undefined4, undefined4, undefined4, undefined4, undefined4);
};

// @baa 0x01af8100
void C_01af8100::sub_01af8100(undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6)
{
    int param_1 = (int)this;

  *(undefined4 *)(param_1 + 8) = param_3;
  *(undefined4 *)(param_1 + 0xc) = param_4;
  *(undefined4 *)(param_1 + 0x10) = param_6;
  *(undefined4 *)(param_1 + 0x18) = 1;
  *(undefined4 *)(param_1 + 0x14) = param_5;
  *(undefined4 *)(param_1 + 0x1c) = param_2;
  return;
}

// @baa 0x01af8130
void __stdcall sub_01af8130(int a0, int a1, int a2, int a3) {  }

// @baa 0x01af8140
void __stdcall sub_01af8140(int a0, int a1, int a2, int a3) {  }

// @baa 0x01af81e0
void sub_01af81e0(void) {  }

// @baa 0x01af9ea0
void __stdcall sub_01af9ea0(int a0) {  }

struct C_01af9eb0 {
    int sub_01af9eb0(int);
};

// @baa 0x01af9eb0
int C_01af9eb0::sub_01af9eb0(int param_2)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 8) + param_2 * 4;
}

struct C_01af9ec0 {
    int sub_01af9ec0(int);
};

// @baa 0x01af9ec0
int C_01af9ec0::sub_01af9ec0(int param_2)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 8) + param_2 * 4;
}

struct C_01afa790 {
    int sub_01afa790(int);
};

// @baa 0x01afa790
int C_01afa790::sub_01afa790(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_01afa7a0 {
    void sub_01afa7a0(int);
};

// @baa 0x01afa7a0
void C_01afa7a0::sub_01afa7a0(int param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  void *pvVar1;
  
  param_1[2] = param_2;
  if (param_2 == 0) {
    if ((void *)*param_1 != (void *)0x0) {
      free((void *)*param_1);
      *param_1 = 0;
      return;
    }
  }
  else {
    if ((void *)*param_1 != (void *)0x0) {
      pvVar1 = (void *)(realloc((void *)*param_1,param_2 * 4));
      *param_1 = (undefined4)(pvVar1);
      return;
    }
    pvVar1 = (void *)(malloc(param_2 * 4));
    *param_1 = (undefined4)(pvVar1);
  }
  return;
}

struct C_01afbfa0 { void sub_01afbfa0(void); };

// @baa 0x01afbfa0
void C_01afbfa0::sub_01afbfa0(void) { *(int*)((char*)this + 4) = 0; }

struct C_01afde80 {
    void sub_01afde80();
};

// @baa 0x01afde80
void C_01afde80::sub_01afde80(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  param_1[1] = 0;
  param_1[2] = 0;
  if ((void *)*param_1 != (void *)0x0) {
    free((void *)*param_1);
    *param_1 = 0;
  }
  return;
}

void sub_01aef150();
// @baa 0x01afdeb0
void sub_01afdeb0(void) { sub_01aef150(); }

struct C_01afdee0 {
    void sub_01afdee0();
};

// @baa 0x01afdee0
void C_01afdee0::sub_01afdee0(void)
{
    int param_1 = (int)this;

  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  if (*(void **)(param_1 + 0x14) != (void *)0x0) {
    free(*(void **)(param_1 + 0x14));
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  return;
}

struct C_01afe300 {
    void sub_01afe300();
};

// @baa 0x01afe300
void C_01afe300::sub_01afe300(void)
{
    int param_1 = (int)this;

  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  if (*(void **)(param_1 + 0x2c) != (void *)0x0) {
    free(*(void **)(param_1 + 0x2c));
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  return;
}

void sub_01af0090();
// @baa 0x01afe990
void sub_01afe990(void) { sub_01af0090(); }

// @baa 0x01afe9a0
void sub_01afe9a0(void) { sub_01af0090(); }

struct C_01affa10 { C_01affa10* sub_01affa10(void); };

// @baa 0x01affa10
C_01affa10* C_01affa10::sub_01affa10(void) { return this; }

struct C_01affa20 { C_01affa20* sub_01affa20(void); };

// @baa 0x01affa20
C_01affa20* C_01affa20::sub_01affa20(void) { *(int*)((char*)this + 2072) = 71; return this; }
