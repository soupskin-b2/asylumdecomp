// FCollada_1830000.cpp (part 1 of 24): 181 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C { C* sub_01830e90(void); };

// @baa 0x01830e90
C* C::sub_01830e90(void) { return this; }

struct C_01830f60 {
    bool sub_01830f60(int);
};

// @baa 0x01830f60
bool C_01830f60::sub_01830f60(int param_2)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 4) == param_2;
}

struct C_01830f70 { int sub_01830f70(void); };

// @baa 0x01830f70
int C_01830f70::sub_01830f70(void) { return *(int*)((char*)this + 4); }

struct C_01830fc0 { char* sub_01830fc0(void); };

// @baa 0x01830fc0
char* C_01830fc0::sub_01830fc0(void) { return (char*)this + 4; }

struct C_01830fd0 {
    undefined4 sub_01830fd0(byte);
};

int sub_00402660(...);
int sub_01830ea0(void);
// @baa 0x01830fd0
undefined4 C_01830fd0::sub_01830fd0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01830ea0();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_01831190 {
    void sub_01831190(int *);
};

// @baa 0x01831190
void C_01831190::sub_01831190(int * param_2)
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

struct C_018311c0 { float sub_018311c0(void); };

// @baa 0x018311c0
float C_018311c0::sub_018311c0(void) { return *(float*)((char*)this + 124); }

struct C_018311f0 {
    void sub_018311f0();
};

void sub_01826080(void *);
// @baa 0x018311f0
void C_018311f0::sub_018311f0(void)
{
    int param_1 = (int)this;

  if (*(void **)(param_1 + 8) != (void *)0x0) {
    sub_01826080(*(void **)(param_1 + 8));
  }
  return;
}

struct C_018315b0 {
    undefined4 sub_018315b0(byte);
};

int sub_018306d0(void);
// @baa 0x018315b0
undefined4 C_018315b0::sub_018315b0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_018306d0();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_01831610 { int sub_01831610(void); };

// @baa 0x01831610
int C_01831610::sub_01831610(void) { return *(int*)((char*)this + 36); }

extern char g_027b7d9c[];
// @baa 0x01831620
int sub_01831620(void) { return (int)g_027b7d9c; }

struct C_01831630 {
    void sub_01831630();
};

// @baa 0x01831630
void C_01831630::sub_01831630(void)
{
    int param_1 = (int)this;

  *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) & 0xffffffdf;
  return;
}

struct C_01833d50 {
    undefined4 sub_01833d50(byte);
};

int sub_01831d70(void);
// @baa 0x01833d50
undefined4 C_01833d50::sub_01833d50(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01831d70();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

extern char g_027b7da4[];
// @baa 0x01833d70
int sub_01833d70(void) { return (int)g_027b7da4; }

struct C_01834000 { int sub_01834000(void); };

// @baa 0x01834000
int C_01834000::sub_01834000(void) { return *(int*)((char*)this + 8); }

extern char g_027b7dac[];
// @baa 0x01834220
int sub_01834220(void) { return (int)g_027b7dac; }

struct C_01834230 {
    undefined4 sub_01834230(byte);
};

int sub_018340d0(void);
// @baa 0x01834230
undefined4 C_01834230::sub_01834230(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_018340d0();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_01834250 {
    undefined4 sub_01834250(byte);
};

int sub_01833e20(void);
// @baa 0x01834250
undefined4 C_01834250::sub_01834250(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01833e20();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

extern char g_027b7ea0[];
// @baa 0x01834270
int sub_01834270(void) { return (int)g_027b7ea0; }

extern char g_027b7db4[];
// @baa 0x01834280
int sub_01834280(void) { return (int)g_027b7db4; }

struct C_01834290 { int sub_01834290(void); };

// @baa 0x01834290
int C_01834290::sub_01834290(void) { return *(int*)((char*)this + 100); }

struct C_01834900 { int sub_01834900(void); };

// @baa 0x01834900
int C_01834900::sub_01834900(void) { return *(int*)((char*)this + 4); }

struct C_01834910 { int sub_01834910(void); };

// @baa 0x01834910
int C_01834910::sub_01834910(void) { return *(int*)((char*)this + 8); }

struct C_01834940 {
    void sub_01834940();
};

// @baa 0x01834940
void C_01834940::sub_01834940(void)
{
    int param_1 = (int)this;

  if (*(void **)(param_1 + 8) != (void *)0x0) {
    sub_01826080(*(void **)(param_1 + 8));
  }
  return;
}

struct C_01834950 { int sub_01834950(void); };

// @baa 0x01834950
int C_01834950::sub_01834950(void) { return *(int*)((char*)this + 8); }

struct C_01834980 {
    void sub_01834980();
};

// @baa 0x01834980
void C_01834980::sub_01834980(void)
{
    int param_1 = (int)this;

  if (*(void **)(param_1 + 8) != (void *)0x0) {
    sub_01826080(*(void **)(param_1 + 8));
  }
  return;
}

struct C_01834a80 { int sub_01834a80(void); };

// @baa 0x01834a80
int C_01834a80::sub_01834a80(void) { return *(int*)((char*)this + 80); }

struct C_01834a90 { int sub_01834a90(void); };

// @baa 0x01834a90
int C_01834a90::sub_01834a90(void) { return *(int*)((char*)this + 48); }

struct C_01834ac0 {
    void sub_01834ac0(int *);
};

// @baa 0x01834ac0
void C_01834ac0::sub_01834ac0(int * param_2)
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

struct C_01834b10 {
    void sub_01834b10(int *);
};

// @baa 0x01834b10
void C_01834b10::sub_01834b10(int * param_2)
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

// @baa 0x01835160
int sub_01835160(void) { return (int)g_027b7db4; }

// @baa 0x01835170
int sub_01835170(void) { return 1; }

struct C_01835190 {
    undefined4 sub_01835190(byte);
};

int sub_01834ef0(void);
// @baa 0x01835190
undefined4 C_01835190::sub_01835190(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01834ef0();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_018351b0 {
    undefined4 sub_018351b0(byte);
};

int sub_01834fb0(void);
// @baa 0x018351b0
undefined4 C_018351b0::sub_018351b0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01834fb0();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_01835350 {
    undefined4 sub_01835350(byte);
};

int sub_01834320(void);
// @baa 0x01835350
undefined4 C_01835350::sub_01835350(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01834320();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_01835370 { int sub_01835370(void); };

// @baa 0x01835370
int C_01835370::sub_01835370(void) { return *(int*)((char*)this + 72); }

struct C_01835380 {
    void sub_01835380();
};

// @baa 0x01835380
void C_01835380::sub_01835380(void)
{
    int param_1 = (int)this;

  *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | 0x20;
  return;
}

struct C_01835390 {
    void sub_01835390();
};

// @baa 0x01835390
void C_01835390::sub_01835390(void)
{
    int param_1 = (int)this;

  *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) & 0xffffffdf;
  return;
}

struct C_018353a0 {
    uint sub_018353a0();
};

// @baa 0x018353a0
uint C_018353a0::sub_018353a0(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 0x18) >> 5 & 1;
}

struct C_01835a50 {
    void sub_01835a50(uint);
};

// @baa 0x01835a50
void C_01835a50::sub_01835a50(uint param_2)
{
    int param_1 = (int)this;

  *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | param_2;
  return;
}

extern char g_027b7fdc[];
// @baa 0x01835a60
int sub_01835a60(void) { return (int)g_027b7fdc; }

extern char g_027b7f7c[];
// @baa 0x01835a70
int sub_01835a70(void) { return (int)g_027b7f7c; }

struct C_01835a80 {
    bool sub_01835a80(int);
};

// @baa 0x01835a80
bool C_01835a80::sub_01835a80(int param_2)
{
    int param_1 = (int)this;

  return param_2 == param_1;
}

extern char g_027b7e90[];
// @baa 0x01835a90
int sub_01835a90(void) { return (int)g_027b7e90; }

extern char g_027b7fe4[];
// @baa 0x01835aa0
int sub_01835aa0(void) { return (int)g_027b7fe4; }

extern char g_027b7fec[];
// @baa 0x01835ab0
int sub_01835ab0(void) { return (int)g_027b7fec; }

extern char g_027b7f08[];
// @baa 0x01835ac0
int sub_01835ac0(void) { return (int)g_027b7f08; }

extern char g_027b7ff4[];
// @baa 0x01835ad0
int sub_01835ad0(void) { return (int)g_027b7ff4; }

extern char g_027b7e98[];
// @baa 0x01835ae0
int sub_01835ae0(void) { return (int)g_027b7e98; }

extern char g_027b7ffc[];
// @baa 0x01835af0
int sub_01835af0(void) { return (int)g_027b7ffc; }

extern char g_027b8004[];
// @baa 0x01835b00
int sub_01835b00(void) { return (int)g_027b8004; }

struct C_01835d40 {
    void sub_01835d40();
};

// @baa 0x01835d40
void C_01835d40::sub_01835d40(void)
{
    int param_1 = (int)this;

  if (*(void **)(param_1 + 8) != (void *)0x0) {
    sub_01826080(*(void **)(param_1 + 8));
  }
  return;
}

struct C_01835d50 {
    void sub_01835d50();
};

// @baa 0x01835d50
void C_01835d50::sub_01835d50(void)
{
    int param_1 = (int)this;

  if (*(void **)(param_1 + 8) != (void *)0x0) {
    sub_01826080(*(void **)(param_1 + 8));
  }
  return;
}

struct C_01835d60 {
    void sub_01835d60();
};

// @baa 0x01835d60
void C_01835d60::sub_01835d60(void)
{
    int param_1 = (int)this;

  if (*(void **)(param_1 + 8) != (void *)0x0) {
    sub_01826080(*(void **)(param_1 + 8));
  }
  return;
}

struct C_01835d70 {
    void sub_01835d70();
};

// @baa 0x01835d70
void C_01835d70::sub_01835d70(void)
{
    int param_1 = (int)this;

  if (*(void **)(param_1 + 8) != (void *)0x0) {
    sub_01826080(*(void **)(param_1 + 8));
  }
  return;
}

struct C_01835d80 {
    void sub_01835d80();
};

// @baa 0x01835d80
void C_01835d80::sub_01835d80(void)
{
    int param_1 = (int)this;

  if (*(void **)(param_1 + 8) != (void *)0x0) {
    sub_01826080(*(void **)(param_1 + 8));
  }
  return;
}

struct C_01835d90 {
    void sub_01835d90();
};

// @baa 0x01835d90
void C_01835d90::sub_01835d90(void)
{
    int param_1 = (int)this;

  if (*(void **)(param_1 + 8) != (void *)0x0) {
    sub_01826080(*(void **)(param_1 + 8));
  }
  return;
}

struct C_01835da0 {
    void sub_01835da0();
};

// @baa 0x01835da0
void C_01835da0::sub_01835da0(void)
{
    int param_1 = (int)this;

  if (*(void **)(param_1 + 8) != (void *)0x0) {
    sub_01826080(*(void **)(param_1 + 8));
  }
  return;
}

struct C_01835db0 {
    void sub_01835db0();
};

// @baa 0x01835db0
void C_01835db0::sub_01835db0(void)
{
    int param_1 = (int)this;

  if (*(void **)(param_1 + 8) != (void *)0x0) {
    sub_01826080(*(void **)(param_1 + 8));
  }
  return;
}

struct C_01835dc0 {
    void sub_01835dc0();
};

// @baa 0x01835dc0
void C_01835dc0::sub_01835dc0(void)
{
    int param_1 = (int)this;

  if (*(void **)(param_1 + 8) != (void *)0x0) {
    sub_01826080(*(void **)(param_1 + 8));
  }
  return;
}

struct C_01835dd0 {
    void sub_01835dd0();
};

// @baa 0x01835dd0
void C_01835dd0::sub_01835dd0(void)
{
    int param_1 = (int)this;

  if (*(void **)(param_1 + 8) != (void *)0x0) {
    sub_01826080(*(void **)(param_1 + 8));
  }
  return;
}

struct C_01835de0 {
    void sub_01835de0();
};

// @baa 0x01835de0
void C_01835de0::sub_01835de0(void)
{
    int param_1 = (int)this;

  if (*(void **)(param_1 + 8) != (void *)0x0) {
    sub_01826080(*(void **)(param_1 + 8));
  }
  return;
}

struct C_01835df0 {
    void sub_01835df0();
};

// @baa 0x01835df0
void C_01835df0::sub_01835df0(void)
{
    int param_1 = (int)this;

  if (*(void **)(param_1 + 8) != (void *)0x0) {
    sub_01826080(*(void **)(param_1 + 8));
  }
  return;
}

struct C_01835e00 {
    void sub_01835e00();
};

// @baa 0x01835e00
void C_01835e00::sub_01835e00(void)
{
    int param_1 = (int)this;

  if (*(void **)(param_1 + 8) != (void *)0x0) {
    sub_01826080(*(void **)(param_1 + 8));
  }
  return;
}

struct C_01835e40 { int sub_01835e40(void); };

// @baa 0x01835e40
int C_01835e40::sub_01835e40(void) { return *(int*)((char*)this + 8); }

struct C_01835e80 { int sub_01835e80(void); };

// @baa 0x01835e80
int C_01835e80::sub_01835e80(void) { return *(int*)((char*)this + 8); }

struct C_01835ec0 { int sub_01835ec0(void); };

// @baa 0x01835ec0
int C_01835ec0::sub_01835ec0(void) { return *(int*)((char*)this + 8); }

struct C_01835f00 { int sub_01835f00(void); };

// @baa 0x01835f00
int C_01835f00::sub_01835f00(void) { return *(int*)((char*)this + 8); }

struct C_01835f40 { int sub_01835f40(void); };

// @baa 0x01835f40
int C_01835f40::sub_01835f40(void) { return *(int*)((char*)this + 8); }

struct C_01836010 { int sub_01836010(void); };

// @baa 0x01836010
int C_01836010::sub_01836010(void) { return *(int*)((char*)this + 8); }

struct C_01836080 { int sub_01836080(void); };

// @baa 0x01836080
int C_01836080::sub_01836080(void) { return *(int*)((char*)this + 8); }

struct C_018360f0 { int sub_018360f0(void); };

// @baa 0x018360f0
int C_018360f0::sub_018360f0(void) { return *(int*)((char*)this + 8); }

struct C_01836130 {
    bool sub_01836130();
};

// @baa 0x01836130
bool C_01836130::sub_01836130(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 8) == 0;
}

struct C_01836140 { int sub_01836140(void); };

// @baa 0x01836140
int C_01836140::sub_01836140(void) { return *(int*)((char*)this + 44); }

struct C_01836150 { int sub_01836150(void); };

// @baa 0x01836150
int C_01836150::sub_01836150(void) { return *(int*)((char*)this + 44); }

struct C_01836160 {
    bool sub_01836160();
};

// @baa 0x01836160
bool C_01836160::sub_01836160(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 8) == 0;
}

struct C_01836170 { int sub_01836170(void); };

// @baa 0x01836170
int C_01836170::sub_01836170(void) { return *(int*)((char*)this + 44); }

struct C_01836180 {
    bool sub_01836180();
};

// @baa 0x01836180
bool C_01836180::sub_01836180(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 8) == 0;
}

struct C_01836190 { int sub_01836190(void); };

// @baa 0x01836190
int C_01836190::sub_01836190(void) { return *(int*)((char*)this + 44); }

struct C_018361a0 {
    bool sub_018361a0();
};

// @baa 0x018361a0
bool C_018361a0::sub_018361a0(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 8) == 0;
}

struct C_018361b0 { int sub_018361b0(void); };

// @baa 0x018361b0
int C_018361b0::sub_018361b0(void) { return *(int*)((char*)this + 44); }

struct C_018361c0 {
    bool sub_018361c0();
};

// @baa 0x018361c0
bool C_018361c0::sub_018361c0(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 8) == 0;
}

struct C_018361d0 { int sub_018361d0(void); };

// @baa 0x018361d0
int C_018361d0::sub_018361d0(void) { return *(int*)((char*)this + 44); }

struct C_018361e0 {
    bool sub_018361e0();
};

// @baa 0x018361e0
bool C_018361e0::sub_018361e0(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 8) == 0;
}

struct C_018361f0 {
    bool sub_018361f0();
};

// @baa 0x018361f0
bool C_018361f0::sub_018361f0(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 8) == 0;
}

struct C_01836200 {
    bool sub_01836200();
};

// @baa 0x01836200
bool C_01836200::sub_01836200(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 8) == 0;
}

struct C_01836210 {
    bool sub_01836210();
};

// @baa 0x01836210
bool C_01836210::sub_01836210(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 8) == 0;
}

struct C_01836220 { int sub_01836220(void); };

// @baa 0x01836220
int C_01836220::sub_01836220(void) { return *(int*)((char*)this + 44); }

struct C_01836230 {
    bool sub_01836230();
};

// @baa 0x01836230
bool C_01836230::sub_01836230(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 8) == 0;
}

struct C_01836240 {
    bool sub_01836240();
};

// @baa 0x01836240
bool C_01836240::sub_01836240(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 8) == 0;
}

struct C_01836250 { int sub_01836250(void); };

// @baa 0x01836250
int C_01836250::sub_01836250(void) { return *(int*)((char*)this + 44); }

struct C_01836260 {
    bool sub_01836260();
};

// @baa 0x01836260
bool C_01836260::sub_01836260(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 8) == 0;
}

struct C_018362b0 {
    bool sub_018362b0();
};

// @baa 0x018362b0
bool C_018362b0::sub_018362b0(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 8) == 0;
}

struct C_018362c0 {
    bool sub_018362c0();
};

// @baa 0x018362c0
bool C_018362c0::sub_018362c0(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 8) == 0;
}

struct C_018362d0 { int sub_018362d0(void); };

// @baa 0x018362d0
int C_018362d0::sub_018362d0(void) { return *(int*)((char*)this + 44); }

struct C_018362e0 {
    bool sub_018362e0();
};

// @baa 0x018362e0
bool C_018362e0::sub_018362e0(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 8) == 0;
}

struct C_01837650 {
    bool sub_01837650();
};

// @baa 0x01837650
bool C_01837650::sub_01837650(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 0x2c) == 0;
}

struct C_01837690 {
    bool sub_01837690();
};

// @baa 0x01837690
bool C_01837690::sub_01837690(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 0x2c) == 0;
}

struct C_018376a0 {
    bool sub_018376a0();
};

// @baa 0x018376a0
bool C_018376a0::sub_018376a0(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 0x2c) == 0;
}

struct C_018376b0 {
    bool sub_018376b0();
};

// @baa 0x018376b0
bool C_018376b0::sub_018376b0(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 0x2c) == 0;
}

struct C_018376c0 {
    bool sub_018376c0();
};

// @baa 0x018376c0
bool C_018376c0::sub_018376c0(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 0x2c) == 0;
}

struct C_018376d0 {
    bool sub_018376d0();
};

// @baa 0x018376d0
bool C_018376d0::sub_018376d0(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 0x2c) == 0;
}

struct C_018376e0 {
    bool sub_018376e0();
};

// @baa 0x018376e0
bool C_018376e0::sub_018376e0(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 0x2c) == 0;
}

struct C_018376f0 {
    bool sub_018376f0();
};

// @baa 0x018376f0
bool C_018376f0::sub_018376f0(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 0x2c) == 0;
}

struct C_01837700 {
    bool sub_01837700();
};

// @baa 0x01837700
bool C_01837700::sub_01837700(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 0x2c) == 0;
}

struct C_01837710 {
    bool sub_01837710();
};

// @baa 0x01837710
bool C_01837710::sub_01837710(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 0x2c) == 0;
}

struct C_01837720 {
    bool sub_01837720();
};

// @baa 0x01837720
bool C_01837720::sub_01837720(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 0x2c) == 0;
}

struct C_01837730 {
    bool sub_01837730();
};

// @baa 0x01837730
bool C_01837730::sub_01837730(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 0x2c) == 0;
}

struct C_01837770 {
    bool sub_01837770();
};

// @baa 0x01837770
bool C_01837770::sub_01837770(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 0x2c) == 0;
}

struct C_01837780 {
    bool sub_01837780();
};

// @baa 0x01837780
bool C_01837780::sub_01837780(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 0x2c) == 0;
}

struct C_01837790 {
    bool sub_01837790();
};

// @baa 0x01837790
bool C_01837790::sub_01837790(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 0x2c) == 0;
}

struct C_01837d00 {
    void sub_01837d00(int *);
};

// @baa 0x01837d00
void C_01837d00::sub_01837d00(int * param_2)
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

struct C_01837d90 {
    void sub_01837d90(int *);
};

// @baa 0x01837d90
void C_01837d90::sub_01837d90(int * param_2)
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

struct C_01837e20 {
    void sub_01837e20(int *);
};

// @baa 0x01837e20
void C_01837e20::sub_01837e20(int * param_2)
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

struct C_01837eb0 {
    void sub_01837eb0(int *);
};

// @baa 0x01837eb0
void C_01837eb0::sub_01837eb0(int * param_2)
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

struct C_01837f40 {
    void sub_01837f40(int *);
};

// @baa 0x01837f40
void C_01837f40::sub_01837f40(int * param_2)
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

struct C_01837fd0 {
    void sub_01837fd0(int *);
};

// @baa 0x01837fd0
void C_01837fd0::sub_01837fd0(int * param_2)
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

struct C_01838060 {
    void sub_01838060(int *);
};

// @baa 0x01838060
void C_01838060::sub_01838060(int * param_2)
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

struct C_018380f0 {
    void sub_018380f0(int *);
};

// @baa 0x018380f0
void C_018380f0::sub_018380f0(int * param_2)
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

struct C_01838180 {
    void sub_01838180(int *);
};

// @baa 0x01838180
void C_01838180::sub_01838180(int * param_2)
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

struct C_01838210 {
    void sub_01838210(int *);
};

// @baa 0x01838210
void C_01838210::sub_01838210(int * param_2)
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

struct C_018382a0 {
    void sub_018382a0(int *);
};

// @baa 0x018382a0
void C_018382a0::sub_018382a0(int * param_2)
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

struct C_01838330 {
    void sub_01838330(int *);
};

// @baa 0x01838330
void C_01838330::sub_01838330(int * param_2)
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

struct C_018383c0 {
    void sub_018383c0(int *);
};

// @baa 0x018383c0
void C_018383c0::sub_018383c0(int * param_2)
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

struct C_01838450 {
    void sub_01838450(int *);
};

// @baa 0x01838450
void C_01838450::sub_01838450(int * param_2)
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

struct C_01838ea0 {
    undefined4 sub_01838ea0(byte);
};

int sub_01838880(void);
// @baa 0x01838ea0
undefined4 C_01838ea0::sub_01838ea0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01838880();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_01838ec0 {
    undefined4 sub_01838ec0(byte);
};

int sub_018388f0(void);
// @baa 0x01838ec0
undefined4 C_01838ec0::sub_01838ec0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_018388f0();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_01838ee0 {
    undefined4 sub_01838ee0(byte);
};

int sub_01838960(void);
// @baa 0x01838ee0
undefined4 C_01838ee0::sub_01838ee0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01838960();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_01838f00 {
    undefined4 sub_01838f00(byte);
};

int sub_018389d0(void);
// @baa 0x01838f00
undefined4 C_01838f00::sub_01838f00(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_018389d0();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_01838f20 {
    undefined4 sub_01838f20(byte);
};

int sub_01838a40(void);
// @baa 0x01838f20
undefined4 C_01838f20::sub_01838f20(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01838a40();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_01838f40 {
    undefined4 sub_01838f40(byte);
};

int sub_01838ab0(void);
// @baa 0x01838f40
undefined4 C_01838f40::sub_01838f40(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01838ab0();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_01838f60 {
    undefined4 sub_01838f60(byte);
};

int sub_01838b20(void);
// @baa 0x01838f60
undefined4 C_01838f60::sub_01838f60(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01838b20();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_01838f80 {
    undefined4 sub_01838f80(byte);
};

int sub_01838b90(void);
// @baa 0x01838f80
undefined4 C_01838f80::sub_01838f80(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01838b90();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_01838fa0 {
    undefined4 sub_01838fa0(byte);
};

int sub_01838c00(void);
// @baa 0x01838fa0
undefined4 C_01838fa0::sub_01838fa0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01838c00();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_01838fc0 {
    undefined4 sub_01838fc0(byte);
};

int sub_01838c70(void);
// @baa 0x01838fc0
undefined4 C_01838fc0::sub_01838fc0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01838c70();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_01838fe0 {
    undefined4 sub_01838fe0(byte);
};

int sub_01838ce0(void);
// @baa 0x01838fe0
undefined4 C_01838fe0::sub_01838fe0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01838ce0();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_01839000 {
    undefined4 sub_01839000(byte);
};

int sub_01838d50(void);
// @baa 0x01839000
undefined4 C_01839000::sub_01839000(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01838d50();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_01839020 {
    undefined4 sub_01839020(byte);
};

int sub_01838dc0(void);
// @baa 0x01839020
undefined4 C_01839020::sub_01839020(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01838dc0();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_01839040 {
    undefined4 sub_01839040(byte);
};

int sub_01838e30(void);
// @baa 0x01839040
undefined4 C_01839040::sub_01839040(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01838e30();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

extern char g_027b7e34[];
// @baa 0x01839530
int sub_01839530(void) { return (int)g_027b7e34; }

struct C_01839540 { int sub_01839540(void); };

// @baa 0x01839540
int C_01839540::sub_01839540(void) { return *(int*)((char*)this + 4); }

struct C_01839550 { int sub_01839550(void); };

// @baa 0x01839550
int C_01839550::sub_01839550(void) { return *(int*)((char*)this + 4); }

struct C_01839650 {
    undefined4 sub_01839650(byte);
};

int sub_01839560(void);
// @baa 0x01839650
undefined4 C_01839650::sub_01839650(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01839560();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

extern char g_027b7e2c[];
// @baa 0x01839720
int sub_01839720(void) { return (int)g_027b7e2c; }

struct C_01839820 {
    undefined4 sub_01839820(byte);
};

int sub_01839730(void);
// @baa 0x01839820
undefined4 C_01839820::sub_01839820(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01839730();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

extern char g_027b7e24[];
// @baa 0x01839960
int sub_01839960(void) { return (int)g_027b7e24; }

struct C_01839a60 {
    undefined4 sub_01839a60(byte);
};

int sub_01839970(void);
// @baa 0x01839a60
undefined4 C_01839a60::sub_01839a60(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01839970();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

extern char g_027b7e1c[];
// @baa 0x01839ba0
int sub_01839ba0(void) { return (int)g_027b7e1c; }

struct C_01839ca0 {
    undefined4 sub_01839ca0(byte);
};

int sub_01839bb0(void);
// @baa 0x01839ca0
undefined4 C_01839ca0::sub_01839ca0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01839bb0();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

extern char g_027b7e14[];
// @baa 0x01839de0
int sub_01839de0(void) { return (int)g_027b7e14; }

struct C_01839ee0 {
    undefined4 sub_01839ee0(byte);
};

int sub_01839df0(void);
// @baa 0x01839ee0
undefined4 C_01839ee0::sub_01839ee0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01839df0();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

extern char g_027b7e0c[];
// @baa 0x0183a020
int sub_0183a020(void) { return (int)g_027b7e0c; }

struct C_0183a120 {
    undefined4 sub_0183a120(byte);
};

int sub_0183a030(void);
// @baa 0x0183a120
undefined4 C_0183a120::sub_0183a120(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0183a030();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

extern char g_027b7e04[];
// @baa 0x0183a260
int sub_0183a260(void) { return (int)g_027b7e04; }

struct C_0183a360 {
    undefined4 sub_0183a360(byte);
};

int sub_0183a270(void);
// @baa 0x0183a360
undefined4 C_0183a360::sub_0183a360(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0183a270();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

extern char g_027b7dfc[];
// @baa 0x0183a4a0
int sub_0183a4a0(void) { return (int)g_027b7dfc; }

struct C_0183a5a0 {
    undefined4 sub_0183a5a0(byte);
};

int sub_0183a4b0(void);
// @baa 0x0183a5a0
undefined4 C_0183a5a0::sub_0183a5a0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0183a4b0();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

extern char g_027b7df4[];
// @baa 0x0183a6e0
int sub_0183a6e0(void) { return (int)g_027b7df4; }

struct C_0183a7e0 {
    undefined4 sub_0183a7e0(byte);
};

int sub_0183a6f0(void);
// @baa 0x0183a7e0
undefined4 C_0183a7e0::sub_0183a7e0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0183a6f0();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

extern char g_027b7dec[];
// @baa 0x0183a920
int sub_0183a920(void) { return (int)g_027b7dec; }

struct C_0183aa20 {
    undefined4 sub_0183aa20(byte);
};

int sub_0183a930(void);
// @baa 0x0183aa20
undefined4 C_0183aa20::sub_0183aa20(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0183a930();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

extern char g_027b7de4[];
// @baa 0x0183ab60
int sub_0183ab60(void) { return (int)g_027b7de4; }

struct C_0183ac60 {
    undefined4 sub_0183ac60(byte);
};

int sub_0183ab70(void);
// @baa 0x0183ac60
undefined4 C_0183ac60::sub_0183ac60(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0183ab70();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

extern char g_027b7ddc[];
// @baa 0x0183ada0
int sub_0183ada0(void) { return (int)g_027b7ddc; }

struct C_0183aea0 {
    undefined4 sub_0183aea0(byte);
};

int sub_0183adb0(void);
// @baa 0x0183aea0
undefined4 C_0183aea0::sub_0183aea0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0183adb0();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

extern char g_027b7dd4[];
// @baa 0x0183afe0
int sub_0183afe0(void) { return (int)g_027b7dd4; }

struct C_0183b0e0 {
    undefined4 sub_0183b0e0(byte);
};

int sub_0183aff0(void);
// @baa 0x0183b0e0
undefined4 C_0183b0e0::sub_0183b0e0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0183aff0();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

extern char g_027b7dcc[];
// @baa 0x0183b220
int sub_0183b220(void) { return (int)g_027b7dcc; }

struct C_0183b320 {
    undefined4 sub_0183b320(byte);
};

int sub_0183b230(void);
// @baa 0x0183b320
undefined4 C_0183b320::sub_0183b320(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0183b230();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

extern char g_027b7dc4[];
// @baa 0x0183b460
int sub_0183b460(void) { return (int)g_027b7dc4; }

struct C_0183b560 {
    undefined4 sub_0183b560(byte);
};

int sub_0183b470(void);
// @baa 0x0183b560
undefined4 C_0183b560::sub_0183b560(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0183b470();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

extern undefined4 g_027b7e40;
// @baa 0x0183dd50
undefined4 sub_0183dd50(void)
{
  return g_027b7e40;
}

// @baa 0x0183dd60
int sub_0183dd60(void) { return 196613; }

struct C_0183e9f0 {
    undefined4 sub_0183e9f0(byte);
};

int sub_0183e980(void);
// @baa 0x0183e9f0
undefined4 C_0183e9f0::sub_0183e9f0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0183e980();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_0183ea30 {
    void sub_0183ea30();
};

int sub_0181b5d0(void);
extern undefined4 g_023e5c68;
// @baa 0x0183ea30
void C_0183ea30::sub_0183ea30(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023e5c68));
  sub_0181b5d0();
  return;
}

struct C_0183ea40 {
    void sub_0183ea40();
};

// @baa 0x0183ea40
void C_0183ea40::sub_0183ea40(void)
{
    int param_1 = (int)this;

  *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | 0x80;
  return;
}

struct C_0183ea70 {
    void sub_0183ea70();
};

// @baa 0x0183ea70
void C_0183ea70::sub_0183ea70(void)
{
    int param_1 = (int)this;

  *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) & 0xfffffeff;
  return;
}

struct C_0183ea80 {
    undefined4 * sub_0183ea80(byte);
};

// @baa 0x0183ea80
undefined4 * C_0183ea80::sub_0183ea80(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023e5c68));
  sub_0181b5d0();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_0183fe40 { char* sub_0183fe40(void); };

// @baa 0x0183fe40
char* C_0183fe40::sub_0183fe40(void) { return (char*)this + 16; }

struct C_0183fe70 {
    void sub_0183fe70();
};

// @baa 0x0183fe70
void C_0183fe70::sub_0183fe70(void)
{
    int param_1 = (int)this;

  if (*(void **)(param_1 + 8) != (void *)0x0) {
    sub_01826080(*(void **)(param_1 + 8));
  }
  return;
}

struct C_0183fed0 {
    void sub_0183fed0();
};

// @baa 0x0183fed0
void C_0183fed0::sub_0183fed0(void)
{
    int param_1 = (int)this;

  if (*(void **)(param_1 + 8) != (void *)0x0) {
    sub_01826080(*(void **)(param_1 + 8));
  }
  return;
}
