// fmod_eventsystemi.cpp: 23 functions
// Placed here by: neighbours 17, class 5, callers 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

int sub_01a3851c(char *);
// @baa 0x017db420
undefined4 sub_017db420(char * param_1)
{
  int iVar1;
  char cVar2;
  int iVar3;
  
  iVar3 = 0;
  cVar2 = *param_1;
  while (((cVar2 != '\0' && (cVar2 != '\\')) && (cVar2 != '/'))) {
    iVar1 = iVar3 + 1;
    iVar3 = iVar3 + 1;
    cVar2 = param_1[iVar1];
  }
  cVar2 = param_1[iVar3];
  while (cVar2 != '\0') {
    iVar3 = iVar3 + 1;
    cVar2 = param_1[iVar3];
    while (((cVar2 != '\0' && (param_1[iVar3] != '\\')) && (param_1[iVar3] != '/'))) {
      iVar3 = iVar3 + 1;
      cVar2 = param_1[iVar3];
    }
    cVar2 = param_1[iVar3];
    param_1[iVar3] = '\0';
    sub_01a3851c(param_1);
    param_1[iVar3] = cVar2;
  }
  return 0;
}

extern char g_023df96c[];
struct C { C* sub_017db4e0(void); };

// @baa 0x017db4e0
C* C::sub_017db4e0(void) { *(int*)((char*)this + 0) = (int)g_023df96c; return this; }

struct C_017db670 {
    undefined4 sub_017db670(int, undefined4 *);
};

int sub_017976e5(...);
// @baa 0x017db670
undefined4 C_017db670::sub_017db670(int param_2, undefined4 * param_3)
{
    int param_1 = (int)this;

  undefined4 *puVar1;
  int iVar2;
  
  if ((param_2 != 0) && (param_3 != (undefined4 *)0x0)) {
    *param_3 = 0;
    puVar1 = *(undefined4 **)(param_1 + 0x58);
    while( true ) {
      if (puVar1 == (undefined4 *)(param_1 + 0x58)) {
        return 0x25;
      }
      iVar2 = sub_017976e5(puVar1[4],param_2);
      if (iVar2 == 0) break;
      puVar1 = (undefined4 *)*puVar1;
    }
    *param_3 = (undefined4)(puVar1);
    return 0;
  }
  return 0x25;
}

extern char g_023dfa10[];
struct C_017dc470 { C_017dc470* sub_017dc470(void); };

// @baa 0x017dc470
C_017dc470* C_017dc470::sub_017dc470(void) { *(int*)((char*)this + 0) = (int)g_023dfa10; return this; }

struct C_017dc610 {
    void sub_017dc610(uint, undefined4);
};

// @baa 0x017dc610
void C_017dc610::sub_017dc610(uint param_2, undefined4 param_3)
{
    int param_1 = (int)this;

  if (param_2 < *(uint *)(param_1 + 0x44)) {
    *(undefined4 *)(*(int *)(param_1 + 0x48) + param_2 * 4) = param_3;
  }
  return;
}

struct C_017dc670 {
    undefined4 sub_017dc670(uint);
};

// @baa 0x017dc670
undefined4 C_017dc670::sub_017dc670(uint param_2)
{
    int param_1 = (int)this;

  if ((param_2 & 3) != 0) {
    *(uint *)(param_1 + 0xa0) = *(uint *)(param_1 + 0xa0) & 0xfffffffc;
  }
  *(uint *)(param_1 + 0xa0) = *(uint *)(param_1 + 0xa0) | param_2 & 3;
  return 0;
}

// @baa 0x017de260
undefined1 sub_017de260(void)
{
  return 0;
}

struct C_017de270 { void sub_017de270(void); };

// @baa 0x017de270
void C_017de270::sub_017de270(void) { *(int*)((char*)this + 0) = (int)g_023df96c; }

struct C_017de280 {
    undefined4 * sub_017de280(byte);
};

int sub_00402660(...);
// @baa 0x017de280
undefined4 * C_017de280::sub_017de280(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023df96c));
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

extern char g_023dfb70[];
struct C_017de2c0 { C_017de2c0* sub_017de2c0(void); };

// @baa 0x017de2c0
C_017de2c0* C_017de2c0::sub_017de2c0(void) { *(int*)((char*)this + 0) = (int)g_023dfb70; return this; }

struct C_017de340 { void sub_017de340(void); };

// @baa 0x017de340
void C_017de340::sub_017de340(void) { *(int*)((char*)this + 0) = (int)g_023dfa10; }

struct C_017de350 {
    undefined4 * sub_017de350(byte);
};

// @baa 0x017de350
undefined4 * C_017de350::sub_017de350(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023dfa10));
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

extern char g_023e02e4[];
struct C_017ee260 { void sub_017ee260(void); };

// @baa 0x017ee260
void C_017ee260::sub_017ee260(void) { *(int*)((char*)this + 0) = (int)g_023e02e4; }

struct C_017ee270 {
    undefined4 * sub_017ee270(byte);
};

// @baa 0x017ee270
undefined4 * C_017ee270::sub_017ee270(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023e02e4));
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

extern char g_023e0374[];
struct C_017ee290 { void sub_017ee290(void); };

// @baa 0x017ee290
void C_017ee290::sub_017ee290(void) { *(int*)((char*)this + 0) = (int)g_023e0374; }

struct C_017ee2a0 {
    undefined4 * sub_017ee2a0(byte);
};

// @baa 0x017ee2a0
undefined4 * C_017ee2a0::sub_017ee2a0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023e0374));
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_017ee2c0 { int sub_017ee2c0(void); };

// @baa 0x017ee2c0
int C_017ee2c0::sub_017ee2c0(void) { return *(int*)((char*)this + 0); }

struct C_017ee2d0 { C_017ee2d0* sub_017ee2d0(void); };

// @baa 0x017ee2d0
C_017ee2d0* C_017ee2d0::sub_017ee2d0(void) { *(int*)((char*)this + 0) = (int)g_023e0374; return this; }

struct C_017eefb0 { void sub_017eefb0(void); };

// @baa 0x017eefb0
void C_017eefb0::sub_017eefb0(void) { *(int*)((char*)this + 0) = (int)g_023e0374; }

struct C_017eefc0 {
    undefined4 * sub_017eefc0(byte);
};

// @baa 0x017eefc0
undefined4 * C_017eefc0::sub_017eefc0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023e0374));
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

// @baa 0x017ef070
int __stdcall sub_017ef070(int a0) { return 33; }

struct C_017ef080 {
    undefined4 sub_017ef080(undefined4);
};

// @baa 0x017ef080
undefined4 C_017ef080::sub_017ef080(undefined4 param_2)
{
    int param_1 = (int)this;

  *(undefined4 *)(param_1 + 4) = param_2;
  return 0;
}

struct C_017ef090 {
    undefined4 sub_017ef090();
};

// @baa 0x017ef090
undefined4 C_017ef090::sub_017ef090(void)
{
    int param_1 = (int)this;

  return *(undefined4 *)(*(int *)(param_1 + 0xb4) + 0x14);
}
