// Unknown_1ba0000.cpp (part 1 of 3): 42 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

extern "C" __declspec(dllimport) int toupper(...);
// @baa 0x01ba13b0
void sub_01ba13b0(ushort param_1)
{
                    
                    
  toupper((uint)param_1);
  return;
}

// @baa 0x01ba13c0
undefined4 sub_01ba13c0(short param_1)
{
  if ((((param_1 != 0x20) && (param_1 != 9)) && (param_1 != 10)) && (param_1 != 0xd)) {
    return 0;
  }
  return 1;
}

struct C { int sub_01ba13f0(void); };

// @baa 0x01ba13f0
int C::sub_01ba13f0(void) { return *(int*)((char*)this + 24); }

struct C_01ba1400 { char* sub_01ba1400(void); };

// @baa 0x01ba1400
char* C_01ba1400::sub_01ba1400(void) { return (char*)this + 28; }

struct C_01ba1410 { int sub_01ba1410(void); };

// @baa 0x01ba1410
int C_01ba1410::sub_01ba1410(void) { return *(int*)((char*)this + 40); }

struct C_01ba1420 { void sub_01ba1420(int a0); };

// @baa 0x01ba1420
void C_01ba1420::sub_01ba1420(int a0) { *(int*)((char*)this + 40) = a0; }

struct C_01ba1430 { float sub_01ba1430(void); };

// @baa 0x01ba1430
float C_01ba1430::sub_01ba1430(void) { return *(float*)((char*)this + 44); }

struct C_01ba1450 { float sub_01ba1450(void); };

// @baa 0x01ba1450
float C_01ba1450::sub_01ba1450(void) { return *(float*)((char*)this + 48); }

struct C_01ba1470 { float sub_01ba1470(void); };

// @baa 0x01ba1470
float C_01ba1470::sub_01ba1470(void) { return *(float*)((char*)this + 52); }

struct C_01ba1490 { float sub_01ba1490(void); };

// @baa 0x01ba1490
float C_01ba1490::sub_01ba1490(void) { return *(float*)((char*)this + 56); }

struct C_01ba14b0 { float sub_01ba14b0(void); };

// @baa 0x01ba14b0
float C_01ba14b0::sub_01ba14b0(void) { return *(float*)((char*)this + 60); }

struct C_01ba14d0 { float sub_01ba14d0(void); };

// @baa 0x01ba14d0
float C_01ba14d0::sub_01ba14d0(void) { return *(float*)((char*)this + 64); }

struct C_01ba14f0 { float sub_01ba14f0(void); };

// @baa 0x01ba14f0
float C_01ba14f0::sub_01ba14f0(void) { return *(float*)((char*)this + 68); }

struct C_01ba1510 { float sub_01ba1510(void); };

// @baa 0x01ba1510
float C_01ba1510::sub_01ba1510(void) { return *(float*)((char*)this + 72); }

struct C_01ba1530 { int sub_01ba1530(void); };

// @baa 0x01ba1530
int C_01ba1530::sub_01ba1530(void) { return *(int*)((char*)this + 76); }

struct C_01ba1540 { void sub_01ba1540(int a0); };

// @baa 0x01ba1540
void C_01ba1540::sub_01ba1540(int a0) { *(int*)((char*)this + 76) = a0; }

struct C_01ba1550 { int sub_01ba1550(void); };

// @baa 0x01ba1550
int C_01ba1550::sub_01ba1550(void) { return *(int*)((char*)this + 80); }

struct C_01ba1560 { void sub_01ba1560(int a0); };

// @baa 0x01ba1560
void C_01ba1560::sub_01ba1560(int a0) { *(int*)((char*)this + 80) = a0; }

struct C_01ba1570 { C_01ba1570* sub_01ba1570(void); };

// @baa 0x01ba1570
C_01ba1570* C_01ba1570::sub_01ba1570(void) { return this; }

struct C_01ba1580 {
    undefined1 sub_01ba1580();
};

// @baa 0x01ba1580
undefined1 C_01ba1580::sub_01ba1580(void)
{
    int param_1 = (int)this;

  return *(undefined1 *)(param_1 + 0x54);
}

struct C_01ba1590 { char* sub_01ba1590(void); };

// @baa 0x01ba1590
char* C_01ba1590::sub_01ba1590(void) { return (char*)this + 12; }

struct C_01ba15a0 { char* sub_01ba15a0(void); };

// @baa 0x01ba15a0
char* C_01ba15a0::sub_01ba15a0(void) { return (char*)this + 24; }

struct C_01ba15b0 { int sub_01ba15b0(void); };

// @baa 0x01ba15b0
int C_01ba15b0::sub_01ba15b0(void) { return *(int*)((char*)this + 72); }

struct C_01ba1650 {
    int sub_01ba1650(int);
};

// @baa 0x01ba1650
int C_01ba1650::sub_01ba1650(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x14;
}

struct C_01ba1660 { int sub_01ba1660(void); };

// @baa 0x01ba1660
int C_01ba1660::sub_01ba1660(void) { return *(int*)((char*)this + 8); }

struct C_01ba1670 {
    int sub_01ba1670(int);
};

// @baa 0x01ba1670
int C_01ba1670::sub_01ba1670(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x58 + *param_1;
}

struct C_01ba1680 {
    int sub_01ba1680(int);
};

// @baa 0x01ba1680
int C_01ba1680::sub_01ba1680(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x58 + *param_1;
}

struct C_01ba1690 { int sub_01ba1690(void); };

// @baa 0x01ba1690
int C_01ba1690::sub_01ba1690(void) { return *(int*)((char*)this + 8); }

struct C_01ba16a0 {
    int sub_01ba16a0(int);
};

// @baa 0x01ba16a0
int C_01ba16a0::sub_01ba16a0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0xc;
}

// @baa 0x01ba1750
void sub_01ba1750(undefined4 * param_1, undefined4 * param_2)
{
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return;
}

struct C_01ba1770 { int sub_01ba1770(void); };

// @baa 0x01ba1770
int C_01ba1770::sub_01ba1770(void) { return *(int*)((char*)this + 84); }

struct C_01ba1780 {
    int sub_01ba1780(int);
};

// @baa 0x01ba1780
int C_01ba1780::sub_01ba1780(int param_2)
{
    int param_1 = (int)this;

  return param_2 * 0x58 + *(int *)(param_1 + 0x4c);
}

struct C_01ba1e80 {
    undefined4 sub_01ba1e80(byte);
};

int sub_00402660(...);
int sub_01ba1900(void);
// @baa 0x01ba1e80
undefined4 C_01ba1e80::sub_01ba1e80(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01ba1900();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_01ba1ea0 {
    undefined4 * sub_01ba1ea0(byte);
};

int sub_01ab3290(...);
// @baa 0x01ba1ea0
undefined4 * C_01ba1ea0::sub_01ba1ea0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_01ab3290(*param_1,param_1[1] * 2);
  *param_1 = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

// @baa 0x01ba2930
void sub_01ba2930(undefined4 * param_1)
{
  if (param_1 != (undefined4 *)0x0) {
    sub_01ab3290(*param_1,param_1[1] * 2);
    *param_1 = 0;
    param_1[2] = 0;
    param_1[1] = 0;
  }
  return;
}

// @baa 0x01ba2ee0
void sub_01ba2ee0(undefined4 * param_1, undefined4 * param_2)
{
  for (; param_1 != param_2; param_1 = param_1 + 3) {
    if (param_1 != (undefined4 *)0x0) {
      sub_01ab3290(*param_1,param_1[1] * 2);
      *param_1 = 0;
      param_1[2] = 0;
      param_1[1] = 0;
    }
  }
  return;
}

struct C_01baa6c0 {
    bool sub_01baa6c0();
};

// @baa 0x01baa6c0
bool C_01baa6c0::sub_01baa6c0(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 0x20c8) == 0;
}

int sub_01bb51e0(...);
// @baa 0x01bab2c0
void sub_01bab2c0(int param_1, int param_2)
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
          *(undefined4 *)(param_1 + iVar2 * 4) = 0;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < param_2);
    }
    sub_01bb51e0(param_1);
  }
  return;
}

// @baa 0x01bab430
int sub_01bab430(void) { return 410; }

struct C_01baef00 {
    int sub_01baef00(int);
};

// @baa 0x01baef00
int C_01baef00::sub_01baef00(int param_2)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 0xc) - *(int *)(param_2 + 0xc);
}

struct C_01baf630 {
    undefined4 * sub_01baf630();
};

int sub_01baefe0(void);
// @baa 0x01baf630
undefined4 * C_01baf630::sub_01baf630(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  undefined4 uVar1;
  
  *param_1 = 1;
  param_1[1] = 1;
  param_1[2] = 1;
  uVar1 = sub_01baefe0();
  param_1[3] = uVar1;
  return param_1;
}

// @baa 0x01baffb0
void sub_01baffb0(int param_1, int param_2)
{
  undefined4 *puVar1;
  int iVar2;
  
  if (param_1 != 0) {
    iVar2 = 0;
    if (0 < param_2) {
      do {
        puVar1 = *(undefined4 **)(param_1 + iVar2 * 4);
        if (puVar1 != (undefined4 *)0x0) {
          sub_01bb51e0(*puVar1);
          **(undefined4 **)(param_1 + iVar2 * 4) = 0;
          sub_01bb51e0(*(undefined4 *)(*(int *)(param_1 + iVar2 * 4) + 4));
          *(undefined4 *)(*(int *)(param_1 + iVar2 * 4) + 4) = 0;
          sub_01bb51e0(*(undefined4 *)(param_1 + iVar2 * 4));
          *(undefined4 *)(param_1 + iVar2 * 4) = 0;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < param_2);
    }
    sub_01bb51e0(param_1);
  }
  return;
}
