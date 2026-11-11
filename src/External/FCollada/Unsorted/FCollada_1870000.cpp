// FCollada_1870000.cpp (part 1 of 24): 220 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    undefined4 sub_01870ab0(byte);
};

int sub_00402660(...);
int sub_0186f5d0(void);
// @baa 0x01870ab0
undefined4 C::sub_01870ab0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0186f5d0();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_01870b20 { int sub_01870b20(void); };

// @baa 0x01870b20
int C_01870b20::sub_01870b20(void) { return *(int*)((char*)this + 40); }

extern char g_027b8140[];
// @baa 0x01870b30
int sub_01870b30(void) { return (int)g_027b8140; }

struct C_01871580 { char* sub_01871580(void); };

// @baa 0x01871580
char* C_01871580::sub_01871580(void) { return (char*)this + 4; }

struct C_01871590 { char* sub_01871590(void); };

// @baa 0x01871590
char* C_01871590::sub_01871590(void) { return (char*)this + 4; }

struct C_018715a0 { char* sub_018715a0(void); };

// @baa 0x018715a0
char* C_018715a0::sub_018715a0(void) { return (char*)this + 4; }

struct C_018715b0 { int sub_018715b0(void); };

// @baa 0x018715b0
int C_018715b0::sub_018715b0(void) { return *(int*)((char*)this + 8); }

struct C_018715e0 {
    void sub_018715e0();
};

void sub_01826080(void *);
// @baa 0x018715e0
void C_018715e0::sub_018715e0(void)
{
    int param_1 = (int)this;

  if (*(void **)(param_1 + 8) != (void *)0x0) {
    sub_01826080(*(void **)(param_1 + 8));
  }
  return;
}

struct C_018715f0 { int sub_018715f0(void); };

// @baa 0x018715f0
int C_018715f0::sub_018715f0(void) { return *(int*)((char*)this + 8); }

struct C_01871620 {
    void sub_01871620();
};

// @baa 0x01871620
void C_01871620::sub_01871620(void)
{
    int param_1 = (int)this;

  if (*(void **)(param_1 + 8) != (void *)0x0) {
    sub_01826080(*(void **)(param_1 + 8));
  }
  return;
}

extern char g_023e4520[];
struct C_01871760 { void sub_01871760(void); };

// @baa 0x01871760
void C_01871760::sub_01871760(void) { *(int*)((char*)this + 0) = (int)g_023e4520; }

extern char g_023e61ac[];
struct C_018717a0 { void sub_018717a0(void); };

// @baa 0x018717a0
void C_018717a0::sub_018717a0(void) { *(int*)((char*)this + 0) = (int)g_023e61ac; }

struct C_018717c0 {
    undefined4 * sub_018717c0(byte);
};

// @baa 0x018717c0
undefined4 * C_018717c0::sub_018717c0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023e4520));
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_018717e0 {
    undefined4 * sub_018717e0(byte);
};

// @baa 0x018717e0
undefined4 * C_018717e0::sub_018717e0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023e61ac));
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_01871820 {
    void sub_01871820(int *);
};

// @baa 0x01871820
void C_01871820::sub_01871820(int * param_2)
{
    int param_1 = (int)this;

  int *piVar1;
  int *piVar2;
  
  piVar2 = *(int **)(param_1 + 8);
  piVar1 = piVar2 + *(int *)(param_1 + 4);
  if (piVar2 != piVar1) {
    do {
      if (*piVar2 == *param_2) {
        return;
      }
      piVar2 = piVar2 + 1;
    } while (piVar2 != piVar1);
  }
  return;
}

struct C_01871870 {
    void sub_01871870(int *);
};

// @baa 0x01871870
void C_01871870::sub_01871870(int * param_2)
{
    int param_1 = (int)this;

  int *piVar1;
  int *piVar2;
  
  piVar2 = *(int **)(param_1 + 8);
  piVar1 = piVar2 + *(int *)(param_1 + 4);
  if (piVar2 != piVar1) {
    do {
      if (*piVar2 == *param_2) {
        return;
      }
      piVar2 = piVar2 + 1;
    } while (piVar2 != piVar1);
  }
  return;
}

struct C_018718a0 {
    undefined1 * sub_018718a0();
};

extern undefined1 g_026ccbc8;
// @baa 0x018718a0
undefined1 * C_018718a0::sub_018718a0(void)
{
    int param_1 = (int)this;

  undefined1 *puVar1;
  
  puVar1 = &g_026ccbc8;
  if (*(int *)(param_1 + 4) != 0) {
    puVar1 = *(undefined1 **)(param_1 + 8);
  }
  return puVar1;
}

struct C_01871ca0 {
    void sub_01871ca0();
};

extern undefined4 g_023e4d30;
// @baa 0x01871ca0
void C_01871ca0::sub_01871ca0(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023e4d30));
  if ((void *)param_1[3] != (void *)0x0) {
    sub_01826080((void *)param_1[3]);
  }
  return;
}

struct C_01871cc0 {
    void sub_01871cc0();
};

// @baa 0x01871cc0
void C_01871cc0::sub_01871cc0(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023e4d30));
  if ((void *)param_1[3] != (void *)0x0) {
    sub_01826080((void *)param_1[3]);
  }
  return;
}

struct C_01871ce0 {
    void sub_01871ce0();
};

// @baa 0x01871ce0
void C_01871ce0::sub_01871ce0(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023e4d30));
  if ((void *)param_1[3] != (void *)0x0) {
    sub_01826080((void *)param_1[3]);
  }
  return;
}

struct C_01871d00 {
    void sub_01871d00();
};

extern undefined4 g_023e4d38;
// @baa 0x01871d00
void C_01871d00::sub_01871d00(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023e4d38));
  if ((void *)param_1[3] != (void *)0x0) {
    sub_01826080((void *)param_1[3]);
  }
  return;
}

extern char g_027b8130[];
// @baa 0x01871d20
int sub_01871d20(void) { return (int)g_027b8130; }

extern char g_027b8138[];
// @baa 0x01871d30
int sub_01871d30(void) { return (int)g_027b8138; }

struct C_018720d0 {
    undefined4 sub_018720d0(byte);
};

int sub_01870ba0(void);
// @baa 0x018720d0
undefined4 C_018720d0::sub_018720d0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01870ba0();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_018720f0 {
    undefined4 sub_018720f0(byte);
};

int sub_01870c20(void);
// @baa 0x018720f0
undefined4 C_018720f0::sub_018720f0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01870c20();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

// @baa 0x01872110
int sub_01872110(void) { return (int)g_027b8140; }

// @baa 0x01872120
int sub_01872120(void) { return 3; }

struct C_01872140 {
    undefined4 sub_01872140(byte);
};

int sub_01871d40(void);
// @baa 0x01872140
undefined4 C_01872140::sub_01872140(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01871d40();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_01872160 {
    undefined4 sub_01872160(byte);
};

int sub_01871e30(void);
// @baa 0x01872160
undefined4 C_01872160::sub_01872160(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01871e30();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_01872340 {
    undefined4 sub_01872340(byte);
};

int sub_01870e60(void);
// @baa 0x01872340
undefined4 C_01872340::sub_01872340(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01870e60();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

extern char g_027b8148[];
// @baa 0x018724c0
int sub_018724c0(void) { return (int)g_027b8148; }

struct C_018724d0 {
    bool sub_018724d0();
};

// @baa 0x018724d0
bool C_018724d0::sub_018724d0(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 0x24) == 1;
}

struct C_018724e0 {
    void sub_018724e0(char);
};

// @baa 0x018724e0
void C_018724e0::sub_018724e0(char param_2)
{
    int param_1 = (int)this;

  *(uint *)(param_1 + 0x24) = (uint)(param_2 != '\0');
  return;
}

extern char g_027b8160[];
// @baa 0x018724f0
int sub_018724f0(void) { return (int)g_027b8160; }

struct C_01872500 { void sub_01872500(int a0); };

// @baa 0x01872500
void C_01872500::sub_01872500(int a0) { *(int*)((char*)this + 88) = a0; }

struct C_018725c0 {
    bool sub_018725c0();
};

int sub_0184d110(...);
// @baa 0x018725c0
bool C_018725c0::sub_018725c0(void)
{
    int param_1 = (int)this;

  bool bVar1;
  char cVar2;
  
  bVar1 = true;
  if (*(int *)(param_1 + 0x38) == 0) {
    cVar2 = sub_0184d110(1,0x6a,0);
    bVar1 = cVar2 == '\0';
  }
  return bVar1;
}

struct C_01872760 {
    void sub_01872760();
};

int sub_018726c0(void);
extern undefined4 g_023ed01c;
// @baa 0x01872760
void C_01872760::sub_01872760(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023ed01c));
  sub_018726c0();
  return;
}

struct C_01872870 {
    void sub_01872870();
};

extern undefined4 g_023ed03c;
// @baa 0x01872870
void C_01872870::sub_01872870(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023ed03c));
  sub_018726c0();
  return;
}

struct C_018730c0 { int sub_018730c0(void); };

// @baa 0x018730c0
int C_018730c0::sub_018730c0(void) { return *(int*)((char*)this + 8); }

struct C_018730d0 {
    bool sub_018730d0();
};

// @baa 0x018730d0
bool C_018730d0::sub_018730d0(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 8) == 0;
}

struct C_01873100 {
    void sub_01873100();
};

// @baa 0x01873100
void C_01873100::sub_01873100(void)
{
    int param_1 = (int)this;

  if (*(void **)(param_1 + 8) != (void *)0x0) {
    sub_01826080(*(void **)(param_1 + 8));
  }
  return;
}

struct C_01873110 { int sub_01873110(void); };

// @baa 0x01873110
int C_01873110::sub_01873110(void) { return *(int*)((char*)this + 8); }

struct C_01873120 {
    int sub_01873120();
};

// @baa 0x01873120
int C_01873120::sub_01873120(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 4) * 0x10 + *(int *)(param_1 + 8);
}

struct C_018731f0 { int sub_018731f0(void); };

// @baa 0x018731f0
int C_018731f0::sub_018731f0(void) { return *(int*)((char*)this + 56); }

struct C_01873220 { void sub_01873220(void); };

// @baa 0x01873220
void C_01873220::sub_01873220(void) { *(int*)((char*)this + 0) = (int)g_023e4520; }

struct C_01873240 { int sub_01873240(void); };

// @baa 0x01873240
int C_01873240::sub_01873240(void) { return *(int*)((char*)this + 44); }

struct C_01873250 {
    undefined4 * sub_01873250(byte);
};

// @baa 0x01873250
undefined4 * C_01873250::sub_01873250(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023e4520));
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_01873290 {
    void sub_01873290(int *);
};

// @baa 0x01873290
void C_01873290::sub_01873290(int * param_2)
{
    int param_1 = (int)this;

  int *piVar1;
  int *piVar2;
  
  piVar2 = *(int **)(param_1 + 8);
  piVar1 = piVar2 + *(int *)(param_1 + 4);
  if (piVar2 != piVar1) {
    do {
      if (*piVar2 == *param_2) {
        return;
      }
      piVar2 = piVar2 + 1;
    } while (piVar2 != piVar1);
  }
  return;
}

// @baa 0x01873440
int sub_01873440(void) { return (int)g_027b8148; }

extern char g_027b8150[];
// @baa 0x01873660
int sub_01873660(void) { return (int)g_027b8150; }

// @baa 0x01873670
int sub_01873670(void) { return 0; }

extern char g_027b8158[];
// @baa 0x01873680
int sub_01873680(void) { return (int)g_027b8158; }

// @baa 0x01873690
int sub_01873690(void) { return 1; }

// @baa 0x018736a0
int sub_018736a0(void) { return (int)g_027b8160; }

// @baa 0x018736b0
int sub_018736b0(void) { return 2; }

extern char g_027b8168[];
// @baa 0x018736c0
int sub_018736c0(void) { return (int)g_027b8168; }

struct C_018736d0 {
    undefined4 sub_018736d0(byte);
};

int sub_018734b0(void);
// @baa 0x018736d0
undefined4 C_018736d0::sub_018736d0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_018734b0();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_01873820 {
    undefined4 sub_01873820(byte);
};

// @baa 0x01873820
undefined4 C_01873820::sub_01873820(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_018726c0();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_01873840 {
    undefined4 sub_01873840(byte);
};

int sub_01872760(void);
// @baa 0x01873840
undefined4 C_01873840::sub_01873840(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01872760();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_01873860 {
    undefined4 sub_01873860(byte);
};

int sub_01872870(void);
// @baa 0x01873860
undefined4 C_01873860::sub_01873860(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01872870();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_01873880 {
    undefined4 sub_01873880(byte);
};

int sub_018728b0(void);
// @baa 0x01873880
undefined4 C_01873880::sub_01873880(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_018728b0();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_018738a0 {
    undefined4 sub_018738a0(byte);
};

int sub_01872a10(void);
// @baa 0x018738a0
undefined4 C_018738a0::sub_018738a0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01872a10();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_01874130 {
    void sub_01874130();
};

// @baa 0x01874130
void C_01874130::sub_01874130(void)
{
    int param_1 = (int)this;

  if (*(void **)(param_1 + 8) != (void *)0x0) {
    sub_01826080(*(void **)(param_1 + 8));
  }
  return;
}

extern char g_027b8170[];
// @baa 0x018741d0
int sub_018741d0(void) { return (int)g_027b8170; }

struct C_01874250 {
    undefined4 sub_01874250(byte);
};

int sub_01873da0(void);
// @baa 0x01874250
undefined4 C_01874250::sub_01874250(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01873da0();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

extern char g_027b8178[];
// @baa 0x01874270
int sub_01874270(void) { return (int)g_027b8178; }

struct C_018742d0 {
    void sub_018742d0();
};

int sub_0184aa60(void);
extern undefined4 g_023ed104;
extern undefined4 g_023ed114;
// @baa 0x018742d0
void C_018742d0::sub_018742d0(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023ed114));
  param_1[9] = (undefined4)((&g_023ed104));
  sub_0184aa60();
  return;
}

// @baa 0x018743a0
int sub_018743a0(void) { return (int)g_027b8178; }

// @baa 0x018743b0
int sub_018743b0(void) { return 7; }

struct C_018743d0 {
    undefined4 sub_018743d0(byte);
};

int sub_018742d0(void);
// @baa 0x018743d0
undefined4 C_018743d0::sub_018743d0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_018742d0();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_01874440 {
    void sub_01874440();
};

extern undefined4 g_023ed148;
extern undefined4 g_023ed158;
// @baa 0x01874440
void C_01874440::sub_01874440(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023ed158));
  param_1[9] = (undefined4)((&g_023ed148));
  sub_0184aa60();
  return;
}

extern char g_027b8180[];
// @baa 0x01874460
int sub_01874460(void) { return (int)g_027b8180; }

struct C_01874480 {
    undefined4 sub_01874480(byte);
};

int sub_01874440(void);
// @baa 0x01874480
undefined4 C_01874480::sub_01874480(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01874440();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

extern char g_027b8188[];
// @baa 0x018744a0
int sub_018744a0(void) { return (int)g_027b8188; }

struct C_01874b80 { int sub_01874b80(void); };

// @baa 0x01874b80
int C_01874b80::sub_01874b80(void) { return *(int*)((char*)this + 8); }

struct C_01874b90 {
    int sub_01874b90();
};

// @baa 0x01874b90
int C_01874b90::sub_01874b90(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 4) * 0x5c + *(int *)(param_1 + 8);
}

struct C_01874c10 {
    bool sub_01874c10();
};

// @baa 0x01874c10
bool C_01874c10::sub_01874c10(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 0x68) != 0;
}

struct C_01874c20 { int sub_01874c20(void); };

// @baa 0x01874c20
int C_01874c20::sub_01874c20(void) { return *(int*)((char*)this + 104); }

// @baa 0x01874ea0
int sub_01874ea0(void) { return (int)g_027b8188; }

// @baa 0x01874eb0
int sub_01874eb0(void) { return 2; }

struct C_01874ed0 {
    undefined4 sub_01874ed0(byte);
};

int sub_01874800(void);
// @baa 0x01874ed0
undefined4 C_01874ed0::sub_01874ed0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01874800();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_01874ff0 { int sub_01874ff0(void); };

// @baa 0x01874ff0
int C_01874ff0::sub_01874ff0(void) { return *(int*)((char*)this + 36); }

struct C_01875020 {
    undefined4 * sub_01875020(byte);
};

int sub_0181b5d0(void);
extern undefined4 g_023ed1f8;
// @baa 0x01875020
undefined4 * C_01875020::sub_01875020(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023ed1f8));
  sub_0181b5d0();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_01875690 {
    bool sub_01875690(int);
};

// @baa 0x01875690
bool C_01875690::sub_01875690(int param_2)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 4) == param_2;
}

struct C_018756a0 { int sub_018756a0(void); };

// @baa 0x018756a0
int C_018756a0::sub_018756a0(void) { return *(int*)((char*)this + 4); }

struct C_018756b0 { int sub_018756b0(void); };

// @baa 0x018756b0
int C_018756b0::sub_018756b0(void) { return *(int*)((char*)this + 4); }

struct C_01875790 {
    bool sub_01875790(int);
};

// @baa 0x01875790
bool C_01875790::sub_01875790(int param_2)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 4) == param_2;
}

struct C_018757e0 { int sub_018757e0(void); };

// @baa 0x018757e0
int C_018757e0::sub_018757e0(void) { return *(int*)((char*)this + 8); }

struct C_01875810 {
    void sub_01875810();
};

// @baa 0x01875810
void C_01875810::sub_01875810(void)
{
    int param_1 = (int)this;

  if (*(void **)(param_1 + 8) != (void *)0x0) {
    sub_01826080(*(void **)(param_1 + 8));
  }
  return;
}

struct C_01875820 {
    undefined4 sub_01875820(byte);
};

int sub_01875600(void);
// @baa 0x01875820
undefined4 C_01875820::sub_01875820(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01875600();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_01875840 {
    undefined4 sub_01875840(byte);
};

int sub_01875700(void);
// @baa 0x01875840
undefined4 C_01875840::sub_01875840(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01875700();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_018758c0 { int sub_018758c0(void); };

// @baa 0x018758c0
int C_018758c0::sub_018758c0(void) { return *(int*)((char*)this + 44); }

struct C_018758f0 { void sub_018758f0(void); };

// @baa 0x018758f0
void C_018758f0::sub_018758f0(void) { *(int*)((char*)this + 0) = (int)g_023e4520; }

struct C_01875900 {
    undefined4 * sub_01875900(byte);
};

// @baa 0x01875900
undefined4 * C_01875900::sub_01875900(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023e4520));
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_01875940 {
    void sub_01875940(int *);
};

// @baa 0x01875940
void C_01875940::sub_01875940(int * param_2)
{
    int param_1 = (int)this;

  int *piVar1;
  int *piVar2;
  
  piVar2 = *(int **)(param_1 + 8);
  piVar1 = piVar2 + *(int *)(param_1 + 4);
  if (piVar2 != piVar1) {
    do {
      if (*piVar2 == *param_2) {
        return;
      }
      piVar2 = piVar2 + 1;
    } while (piVar2 != piVar1);
  }
  return;
}

extern char g_027b8198[];
// @baa 0x01875970
int sub_01875970(void) { return (int)g_027b8198; }

struct C_01875b50 {
    undefined4 sub_01875b50(byte);
};

int sub_018750c0(void);
// @baa 0x01875b50
undefined4 C_01875b50::sub_01875b50(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_018750c0();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

extern char g_027b8190[];
// @baa 0x01875c30
int sub_01875c30(void) { return (int)g_027b8190; }

struct C_01875c40 {
    undefined4 sub_01875c40(byte);
};

int sub_01875b70(void);
// @baa 0x01875c40
undefined4 C_01875c40::sub_01875c40(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01875b70();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_01875cc0 {
    undefined4 sub_01875cc0(byte);
};

int sub_018753c0(void);
// @baa 0x01875cc0
undefined4 C_01875cc0::sub_01875cc0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_018753c0();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_01875ce0 {
    bool sub_01875ce0();
};

// @baa 0x01875ce0
bool C_01875ce0::sub_01875ce0(void)
{
    int * param_1 = (int *)this;

  return *param_1 != 0;
}

extern char g_027b81a0[];
// @baa 0x018761a0
int sub_018761a0(void) { return (int)g_027b81a0; }

// @baa 0x018766a0
int sub_018766a0(void) { return (int)g_027b81a0; }

// @baa 0x018766b0
int sub_018766b0(void) { return 4; }

struct C_018766d0 {
    undefined4 sub_018766d0(byte);
};

int sub_01876240(void);
// @baa 0x018766d0
undefined4 C_018766d0::sub_018766d0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01876240();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

extern undefined4 g_025fbeac;
// @baa 0x01876770
undefined * sub_01876770(void)
{
  return (undefined *)(g_025fbeac);
}

struct C_01876780 {
    undefined4 sub_01876780(byte);
};

int sub_01876720(void);
// @baa 0x01876780
undefined4 C_01876780::sub_01876780(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01876720();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

extern char g_027b81b0[];
// @baa 0x018767a0
int sub_018767a0(void) { return (int)g_027b81b0; }

struct C_018767b0 { char* sub_018767b0(void); };

// @baa 0x018767b0
char* C_018767b0::sub_018767b0(void) { return (char*)this + 100; }

struct C_01876af0 {
    int sub_01876af0();
};

int sub_018260a0(...);
// @baa 0x01876af0
int C_01876af0::sub_01876af0(void)
{
    int param_1 = (int)this;

  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 == 0) {
    sub_018260a0("e:\\v1\\unrealengine3\\development\\external\\fcollada-3.05b\\fcollada\\FUtils/FUObject.h"
                 ,0xd1);
    iVar1 = *(int *)(param_1 + 4);
  }
  return iVar1;
}

struct C_01876b20 { int sub_01876b20(void); };

// @baa 0x01876b20
int C_01876b20::sub_01876b20(void) { return *(int*)((char*)this + 4); }

struct C_01876b30 { int sub_01876b30(void); };

// @baa 0x01876b30
int C_01876b30::sub_01876b30(void) { return *(int*)((char*)this + 4); }

struct C_01876b40 {
    void sub_01876b40(int);
};

// @baa 0x01876b40
void C_01876b40::sub_01876b40(int param_2)
{
    int param_1 = (int)this;

  if (param_2 != *(int *)(param_1 + 4)) {
    sub_018260a0("e:\\v1\\unrealengine3\\development\\external\\fcollada-3.05b\\fcollada\\FUtils/FUObject.h"
                 ,0xdd);
    return;
  }
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}

struct C_01876b70 { int sub_01876b70(void); };

// @baa 0x01876b70
int C_01876b70::sub_01876b70(void) { return *(int*)((char*)this + 8); }

struct C_01876b80 {
    undefined4 sub_01876b80(byte);
};

int sub_01876a20(void);
// @baa 0x01876b80
undefined4 C_01876b80::sub_01876b80(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01876a20();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_01876ba0 { int sub_01876ba0(void); };

// @baa 0x01876ba0
int C_01876ba0::sub_01876ba0(void) { return *(int*)((char*)this + 104); }

struct C_01876bb0 { int sub_01876bb0(void); };

// @baa 0x01876bb0
int C_01876bb0::sub_01876bb0(void) { return *(int*)((char*)this + 68); }

// @baa 0x01876bc0
int sub_01876bc0(void) { return (int)g_027b81b0; }

// @baa 0x01876bd0
int sub_01876bd0(void) { return 13; }

struct C_01876c90 {
    undefined4 sub_01876c90(byte);
};

int sub_018767e0(void);
// @baa 0x01876c90
undefined4 C_01876c90::sub_01876c90(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_018767e0();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

extern char g_027b81b8[];
// @baa 0x01876d30
int sub_01876d30(void) { return (int)g_027b81b8; }

struct C_01876d60 {
    void sub_01876d60();
};

extern undefined4 g_023ed4d0;
// @baa 0x01876d60
void C_01876d60::sub_01876d60(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023ed4d0));
  sub_0181b5d0();
  return;
}

struct C_01876db0 {
    void sub_01876db0();
};

extern undefined4 g_023ed4e0;
// @baa 0x01876db0
void C_01876db0::sub_01876db0(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023ed4e0));
  sub_0181b5d0();
  return;
}

struct C_01876de0 {
    undefined4 * sub_01876de0(byte);
};

// @baa 0x01876de0
undefined4 * C_01876de0::sub_01876de0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023ed4d0));
  sub_0181b5d0();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_01876e10 {
    undefined4 * sub_01876e10(byte);
};

// @baa 0x01876e10
undefined4 * C_01876e10::sub_01876e10(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023ed4e0));
  sub_0181b5d0();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_018777c0 {
    bool sub_018777c0(int);
};

// @baa 0x018777c0
bool C_018777c0::sub_018777c0(int param_2)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 4) == param_2;
}

struct C_01877870 {
    undefined4 sub_01877870(byte);
};

int sub_01877700(void);
// @baa 0x01877870
undefined4 C_01877870::sub_01877870(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01877700();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_01877890 {
    undefined4 * sub_01877890(byte);
};

extern undefined4 g_023ed500;
// @baa 0x01877890
undefined4 * C_01877890::sub_01877890(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023ed500));
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

extern char g_023e4370[];
struct C_01877990 { void sub_01877990(void); };

// @baa 0x01877990
void C_01877990::sub_01877990(void) { *(int*)((char*)this + 0) = (int)g_023e4370; }

struct C_018779c0 { void sub_018779c0(void); };

// @baa 0x018779c0
void C_018779c0::sub_018779c0(void) { *(int*)((char*)this + 0) = (int)g_023e4370; }

struct C_018779f0 { void sub_018779f0(void); };

// @baa 0x018779f0
void C_018779f0::sub_018779f0(void) { *(int*)((char*)this + 0) = (int)g_023e4370; }

struct C_01877a20 { void sub_01877a20(void); };

// @baa 0x01877a20
void C_01877a20::sub_01877a20(void) { *(int*)((char*)this + 0) = (int)g_023e4370; }

struct C_01877a50 { void sub_01877a50(void); };

// @baa 0x01877a50
void C_01877a50::sub_01877a50(void) { *(int*)((char*)this + 0) = (int)g_023e4370; }

struct C_01877a80 { void sub_01877a80(void); };

// @baa 0x01877a80
void C_01877a80::sub_01877a80(void) { *(int*)((char*)this + 0) = (int)g_023e4370; }

struct C_01877ab0 {
    undefined4 * sub_01877ab0(byte);
};

// @baa 0x01877ab0
undefined4 * C_01877ab0::sub_01877ab0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023ed500));
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_01877ad0 {
    undefined4 * sub_01877ad0(byte);
};

// @baa 0x01877ad0
undefined4 * C_01877ad0::sub_01877ad0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023ed500));
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_01877af0 {
    undefined4 * sub_01877af0(byte);
};

// @baa 0x01877af0
undefined4 * C_01877af0::sub_01877af0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023ed500));
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_01877b10 {
    undefined4 * sub_01877b10(byte);
};

// @baa 0x01877b10
undefined4 * C_01877b10::sub_01877b10(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023e4370));
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_01877b30 {
    undefined4 * sub_01877b30(byte);
};

// @baa 0x01877b30
undefined4 * C_01877b30::sub_01877b30(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023e4370));
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_01877b50 {
    undefined4 * sub_01877b50(byte);
};

// @baa 0x01877b50
undefined4 * C_01877b50::sub_01877b50(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023e4370));
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_01877b70 {
    undefined4 * sub_01877b70(byte);
};

// @baa 0x01877b70
undefined4 * C_01877b70::sub_01877b70(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023e4370));
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_01877b90 {
    undefined4 * sub_01877b90(byte);
};

// @baa 0x01877b90
undefined4 * C_01877b90::sub_01877b90(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023e4370));
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_01877bb0 {
    undefined4 * sub_01877bb0(byte);
};

// @baa 0x01877bb0
undefined4 * C_01877bb0::sub_01877bb0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023e4370));
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

// @baa 0x01877d00
int sub_01877d00(void) { return (int)g_027b81b8; }

// @baa 0x01877d10
int sub_01877d10(void) { return 11; }

struct C_01877d20 {
    undefined4 sub_01877d20(byte);
};

int sub_018770d0(void);
// @baa 0x01877d20
undefined4 C_01877d20::sub_01877d20(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_018770d0();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_01878900 {
    void sub_01878900();
};

// @baa 0x01878900
void C_01878900::sub_01878900(void)
{
    int param_1 = (int)this;

  if (*(void **)(param_1 + 8) != (void *)0x0) {
    sub_01826080(*(void **)(param_1 + 8));
  }
  return;
}

struct C_01878910 {
    bool sub_01878910();
};

// @baa 0x01878910
bool C_01878910::sub_01878910(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 8) == 0;
}

struct C_01878940 {
    void sub_01878940();
};

// @baa 0x01878940
void C_01878940::sub_01878940(void)
{
    int param_1 = (int)this;

  if (*(void **)(param_1 + 8) != (void *)0x0) {
    sub_01826080(*(void **)(param_1 + 8));
  }
  return;
}

struct C_018789f0 {
    void sub_018789f0(int *);
};

// @baa 0x018789f0
void C_018789f0::sub_018789f0(int * param_2)
{
    int param_1 = (int)this;

  int *piVar1;
  int *piVar2;
  
  piVar2 = *(int **)(param_1 + 8);
  piVar1 = piVar2 + *(int *)(param_1 + 4);
  if (piVar2 != piVar1) {
    do {
      if (*piVar2 == *param_2) {
        return;
      }
      piVar2 = piVar2 + 1;
    } while (piVar2 != piVar1);
  }
  return;
}

struct C_01878a30 {
    void sub_01878a30();
};

// @baa 0x01878a30
void C_01878a30::sub_01878a30(void)
{
    int param_1 = (int)this;

  if (*(void **)(param_1 + 8) != (void *)0x0) {
    sub_01826080(*(void **)(param_1 + 8));
  }
  return;
}

struct C_01878b50 {
    int sub_01878b50(byte);
};

// @baa 0x01878b50
int C_01878b50::sub_01878b50(byte param_2)
{
    int param_1 = (int)this;

  if (*(void **)(param_1 + 8) != (void *)0x0) {
    sub_01826080(*(void **)(param_1 + 8));
  }
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_01878ca0 {
    undefined4 sub_01878ca0(byte);
};

int sub_01878b80(void);
// @baa 0x01878ca0
undefined4 C_01878ca0::sub_01878ca0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01878b80();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_01878cc0 {
    undefined4 sub_01878cc0(byte);
};

int sub_01877df0(void);
// @baa 0x01878cc0
undefined4 C_01878cc0::sub_01878cc0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01877df0();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

// @baa 0x01878d60
void sub_01878d60(void) {  }

struct C_0187a0e0 {
    undefined4 sub_0187a0e0(byte);
};

int sub_01875e50(void);
// @baa 0x0187a0e0
undefined4 C_0187a0e0::sub_0187a0e0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01875e50();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

extern char g_023e8dd0[];
struct C_0187a100 { void sub_0187a100(void); };

// @baa 0x0187a100
void C_0187a100::sub_0187a100(void) { *(int*)((char*)this + 0) = (int)g_023e8dd0; }

int sub_01888940(void);
// @baa 0x0187a120
uint sub_0187a120(uint param_1)
{
  uint uVar1;
  
  uVar1 = sub_01888940();
  return uVar1 % param_1;
}

struct C_0187a130 {
    undefined4 * sub_0187a130(byte);
};

// @baa 0x0187a130
undefined4 * C_0187a130::sub_0187a130(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023e8dd0));
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_0187c270 { void sub_0187c270(void); };

// @baa 0x0187c270
void C_0187c270::sub_0187c270(void) { *(int*)((char*)this + 0) = (int)g_023e8dd0; }

struct C_0187c290 {
    undefined4 * sub_0187c290(byte);
};

// @baa 0x0187c290
undefined4 * C_0187c290::sub_0187c290(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023e8dd0));
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

int sub_0182aa30(...);
// @baa 0x0187c2c0
void sub_0187c2c0(undefined4 param_1, undefined4 param_2)
{
  sub_0182aa30(&param_1,param_2);
  return;
}

int sub_0182a990(...);
// @baa 0x0187c370
void sub_0187c370(undefined4 param_1, undefined4 param_2)
{
  sub_0182a990(&param_1,param_2);
  return;
}

// @baa 0x0187c390
bool sub_0187c390(int param_1, int param_2)
{
  return param_1 == param_2;
}

struct C_0187cf90 { void sub_0187cf90(void); };

// @baa 0x0187cf90
void C_0187cf90::sub_0187cf90(void) { *(int*)((char*)this + 0) = (int)g_023e8dd0; }

struct C_0187cfb0 {
    undefined4 * sub_0187cfb0(byte);
};

// @baa 0x0187cfb0
undefined4 * C_0187cfb0::sub_0187cfb0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023e8dd0));
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

void sub_018279d0();
// @baa 0x0187cfd0
void sub_0187cfd0(void) { sub_018279d0(); }

struct C_0187d850 { C_0187d850* sub_0187d850(void); };

// @baa 0x0187d850
C_0187d850* C_0187d850::sub_0187d850(void) { return this; }

struct C_0187d860 { C_0187d860* sub_0187d860(void); };

// @baa 0x0187d860
C_0187d860* C_0187d860::sub_0187d860(void) { return this; }

struct C_0187e3f0 { C_0187e3f0* sub_0187e3f0(void); };

// @baa 0x0187e3f0
C_0187e3f0* C_0187e3f0::sub_0187e3f0(void) { return this; }

extern char g_027b8264[];
// @baa 0x0187e400
int sub_0187e400(void) { return (int)g_027b8264; }

extern char g_027b8204[];
// @baa 0x0187e410
int sub_0187e410(void) { return (int)g_027b8204; }

struct C_0187e420 { int sub_0187e420(void); };

// @baa 0x0187e420
int C_0187e420::sub_0187e420(void) { return *(int*)((char*)this + 128); }

struct C_0187e430 { char* sub_0187e430(void); };

// @baa 0x0187e430
char* C_0187e430::sub_0187e430(void) { return (char*)this + 148; }

struct C_0187e440 { float sub_0187e440(void); };

// @baa 0x0187e440
float C_0187e440::sub_0187e440(void) { return *(float*)((char*)this + 164); }

struct C_0187e450 {
    undefined2 sub_0187e450();
};

// @baa 0x0187e450
undefined2 C_0187e450::sub_0187e450(void)
{
    int param_1 = (int)this;

  return *(undefined2 *)(param_1 + 0xa8);
}

struct C_0187e460 {
    undefined1 sub_0187e460();
};

// @baa 0x0187e460
undefined1 C_0187e460::sub_0187e460(void)
{
    int param_1 = (int)this;

  return *(undefined1 *)(param_1 + 0xaa);
}

extern char g_023ee690[];
struct C_0187e470 { C_0187e470* sub_0187e470(void); };

// @baa 0x0187e470
C_0187e470* C_0187e470::sub_0187e470(void) { *(int*)((char*)this + 0) = (int)g_023ee690; return this; }

struct C_0187e480 { void sub_0187e480(void); };

// @baa 0x0187e480
void C_0187e480::sub_0187e480(void) { *(int*)((char*)this + 0) = (int)g_023ee690; }

struct C_0187e490 {
    undefined4 * sub_0187e490(byte);
};

// @baa 0x0187e490
undefined4 * C_0187e490::sub_0187e490(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023ee690));
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

extern char g_023ee6a0[];
struct C_0187e4b0 { C_0187e4b0* sub_0187e4b0(void); };

// @baa 0x0187e4b0
C_0187e4b0* C_0187e4b0::sub_0187e4b0(void) { *(int*)((char*)this + 0) = (int)g_023ee6a0; return this; }

struct C_0187e4c0 { void sub_0187e4c0(void); };

// @baa 0x0187e4c0
void C_0187e4c0::sub_0187e4c0(void) { *(int*)((char*)this + 0) = (int)g_023ee690; }

// @baa 0x0187e4d0
int sub_0187e4d0(void) { return 1; }

struct C_0187e4e0 {
    undefined4 * sub_0187e4e0(byte);
};

// @baa 0x0187e4e0
undefined4 * C_0187e4e0::sub_0187e4e0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023ee690));
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

extern char g_023ee6b0[];
struct C_0187e500 { C_0187e500* sub_0187e500(void); };

// @baa 0x0187e500
C_0187e500* C_0187e500::sub_0187e500(void) { *(int*)((char*)this + 0) = (int)g_023ee6b0; return this; }

struct C_0187e510 { void sub_0187e510(void); };

// @baa 0x0187e510
void C_0187e510::sub_0187e510(void) { *(int*)((char*)this + 0) = (int)g_023ee690; }

// @baa 0x0187e520
int sub_0187e520(void) { return 2; }

struct C_0187e530 {
    undefined4 * sub_0187e530(byte);
};

// @baa 0x0187e530
undefined4 * C_0187e530::sub_0187e530(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023ee690));
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

extern char g_023ee6c0[];
struct C_0187e550 { C_0187e550* sub_0187e550(void); };

// @baa 0x0187e550
C_0187e550* C_0187e550::sub_0187e550(void) { *(int*)((char*)this + 0) = (int)g_023ee6c0; return this; }

struct C_0187e560 { void sub_0187e560(void); };

// @baa 0x0187e560
void C_0187e560::sub_0187e560(void) { *(int*)((char*)this + 0) = (int)g_023ee690; }

// @baa 0x0187e570
int sub_0187e570(void) { return 5; }

struct C_0187e580 {
    undefined4 * sub_0187e580(byte);
};

// @baa 0x0187e580
undefined4 * C_0187e580::sub_0187e580(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023ee690));
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

// @baa 0x0187f160
int sub_0187f160(void) { return 4; }

struct C_0187f170 {
    undefined4 * sub_0187f170(byte);
};

// @baa 0x0187f170
undefined4 * C_0187f170::sub_0187f170(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023ee690));
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_0187f1a0 {
    void sub_0187f1a0();
};

// @baa 0x0187f1a0
void C_0187f1a0::sub_0187f1a0(void)
{
    int param_1 = (int)this;

  if (*(void **)(param_1 + 8) != (void *)0x0) {
    sub_01826080(*(void **)(param_1 + 8));
  }
  return;
}

struct C_0187f1b0 { int sub_0187f1b0(void); };

// @baa 0x0187f1b0
int C_0187f1b0::sub_0187f1b0(void) { return *(int*)((char*)this + 8); }

struct C_0187f1d0 {
    void sub_0187f1d0();
};

// @baa 0x0187f1d0
void C_0187f1d0::sub_0187f1d0(void)
{
    int param_1 = (int)this;

  if (*(void **)(param_1 + 8) != (void *)0x0) {
    sub_01826080(*(void **)(param_1 + 8));
  }
  return;
}

struct C_0187f1e0 { int sub_0187f1e0(void); };

// @baa 0x0187f1e0
int C_0187f1e0::sub_0187f1e0(void) { return *(int*)((char*)this + 8); }

struct C_0187f1f0 {
    int sub_0187f1f0();
};

// @baa 0x0187f1f0
int C_0187f1f0::sub_0187f1f0(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 8) + *(int *)(param_1 + 4) * 2;
}

struct C_0187f200 { int sub_0187f200(void); };

// @baa 0x0187f200
int C_0187f200::sub_0187f200(void) { return *(int*)((char*)this + 8); }

struct C_0187f210 {
    int sub_0187f210();
};

// @baa 0x0187f210
int C_0187f210::sub_0187f210(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 8) + *(int *)(param_1 + 4) * 0xc;
}

struct C_0187f220 { int sub_0187f220(void); };

// @baa 0x0187f220
int C_0187f220::sub_0187f220(void) { return *(int*)((char*)this + 4); }

struct C_0187f230 { int sub_0187f230(void); };

// @baa 0x0187f230
int C_0187f230::sub_0187f230(void) { return *(int*)((char*)this + 8); }

struct C_0187f240 { int sub_0187f240(void); };

// @baa 0x0187f240
int C_0187f240::sub_0187f240(void) { return *(int*)((char*)this + 8); }

struct C_0187f250 {
    int sub_0187f250();
};

// @baa 0x0187f250
int C_0187f250::sub_0187f250(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 8) + *(int *)(param_1 + 4) * 4;
}

struct C_0187f260 {
    int sub_0187f260();
};

// @baa 0x0187f260
int C_0187f260::sub_0187f260(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 8) + *(int *)(param_1 + 4) * 4;
}

struct C_0187f2d0 {
    void sub_0187f2d0(int *);
};

// @baa 0x0187f2d0
void C_0187f2d0::sub_0187f2d0(int * param_2)
{
    int param_1 = (int)this;

  int *piVar1;
  int *piVar2;
  
  piVar2 = *(int **)(param_1 + 8);
  piVar1 = piVar2 + *(int *)(param_1 + 4);
  if (piVar2 != piVar1) {
    do {
      if (*piVar2 == *param_2) {
        return;
      }
      piVar2 = piVar2 + 1;
    } while (piVar2 != piVar1);
  }
  return;
}

// @baa 0x0187f300
void sub_0187f300(undefined4 * param_1, undefined4 * param_2)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
  }
  return;
}

struct C_0187f320 { int sub_0187f320(void); };

// @baa 0x0187f320
int C_0187f320::sub_0187f320(void) { return *(int*)((char*)this + 116); }

struct C_0187f350 {
    void sub_0187f350();
};

// @baa 0x0187f350
void C_0187f350::sub_0187f350(void)
{
    int param_1 = (int)this;

  if (*(void **)(param_1 + 0x14) != (void *)0x0) {
    sub_01826080(*(void **)(param_1 + 0x14));
  }
  return;
}

// @baa 0x0187f370
int sub_0187f370(void) { return 3; }

struct C_0187f3e0 {
    undefined4 sub_0187f3e0(byte);
};

int sub_0187f380(void);
// @baa 0x0187f3e0
undefined4 C_0187f3e0::sub_0187f3e0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0187f380();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_0187f7c0 {
    int sub_0187f7c0(byte);
};

// @baa 0x0187f7c0
int C_0187f7c0::sub_0187f7c0(byte param_2)
{
    int param_1 = (int)this;

  if (*(void **)(param_1 + 0x14) != (void *)0x0) {
    sub_01826080(*(void **)(param_1 + 0x14));
  }
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

// @baa 0x0187fb10
int sub_0187fb10(void) { return 0; }

struct C_0187fb90 {
    undefined4 sub_0187fb90(byte);
};

int sub_0187fb20(void);
// @baa 0x0187fb90
undefined4 C_0187fb90::sub_0187fb90(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0187fb20();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_0187fe50 {
    undefined4 sub_0187fe50(byte);
};

int sub_0187fde0(void);
// @baa 0x0187fe50
undefined4 C_0187fe50::sub_0187fe50(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0187fde0();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

// @baa 0x0187fe70
int sub_0187fe70(void) { return (int)g_027b8204; }

// @baa 0x0187fe80
int sub_0187fe80(void) { return 9; }

struct C_0187fe90 {
    undefined4 sub_0187fe90(byte);
};

int sub_0187ecc0(void);
// @baa 0x0187fe90
undefined4 C_0187fe90::sub_0187fe90(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0187ecc0();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

// @baa 0x0187ff20
bool sub_0187ff20(char param_1, char param_2)
{
  return param_1 == param_2;
}
