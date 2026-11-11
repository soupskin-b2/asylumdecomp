// GFx_1910000.cpp (part 2 of 5): 271 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C { C* sub_01910670(void); };

// @baa 0x01910670
C* C::sub_01910670(void) { *(int*)((char*)this + 0) = 0; return this; }

void sub_0190e290();
// @baa 0x019106a0
void sub_019106a0(void) { sub_0190e290(); }

void sub_0190e330();
// @baa 0x01910750
void sub_01910750(void) { sub_0190e330(); }

// @baa 0x01910cb0
void sub_01910cb0(void) { sub_0190e330(); }

// @baa 0x019112f0
int sub_019112f0(void) { return 6; }

struct C_01912010 {
    undefined1 sub_01912010();
};

// @baa 0x01912010
undefined1 C_01912010::sub_01912010(void)
{
    int param_1 = (int)this;

  return *(undefined1 *)(param_1 + 4);
}

// @baa 0x01912020
int sub_01912020(void) { return 13; }

struct C_01912070 { int sub_01912070(void); };

// @baa 0x01912070
int C_01912070::sub_01912070(void) { return *(int*)((char*)this + 0); }

struct C_01912080 { int sub_01912080(void); };

// @baa 0x01912080
int C_01912080::sub_01912080(void) { return *(int*)((char*)this + 0); }

void sub_01971e40();
// @baa 0x01912410
void sub_01912410(void) { sub_01971e40(); }

struct C_01912480 {
    bool sub_01912480();
};

// @baa 0x01912480
bool C_01912480::sub_01912480(void)
{
    int param_1 = (int)this;

  return 6 < *(byte *)(param_1 + 4);
}

struct C_01912490 {
    bool sub_01912490();
};

// @baa 0x01912490
bool C_01912490::sub_01912490(void)
{
    int * param_1 = (int *)this;

  return *param_1 == 0;
}

struct C_01912500 {
    void sub_01912500(undefined1);
};

// @baa 0x01912500
void C_01912500::sub_01912500(undefined1 param_2)
{
    int param_1 = (int)this;

  *(undefined1 *)(param_1 + 1) = param_2;
  return;
}

struct C_01912510 {
    bool sub_01912510();
};

// @baa 0x01912510
bool C_01912510::sub_01912510(void)
{
    char * param_1 = (char *)this;

  return *param_1 != '\n';
}

struct C_01912530 { C_01912530* sub_01912530(void); };

// @baa 0x01912530
C_01912530* C_01912530::sub_01912530(void) { return this; }

// @baa 0x01912560
undefined1 sub_01912560(void)
{
  return 1;
}

struct C_019125a0 {
    int sub_019125a0(int);
};

// @baa 0x019125a0
int C_019125a0::sub_019125a0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 8;
}

struct C_019125b0 { int sub_019125b0(void); };

// @baa 0x019125b0
int C_019125b0::sub_019125b0(void) { return *(int*)((char*)this + 4); }

struct C_019125c0 { int sub_019125c0(void); };

// @baa 0x019125c0
int C_019125c0::sub_019125c0(void) { return *(int*)((char*)this + 0); }

struct C_019131a0 {
    void sub_019131a0();
};

int sub_019111c0(...);
// @baa 0x019131a0
void C_019131a0::sub_019131a0(void)
{
    int * param_1 = (int *)this;

  if (*param_1 != 0) {
    if ((char)param_1[1] != '\0') {
      *(undefined1 *)(param_1 + 1) = 0;
      sub_019111c0(*param_1);
    }
    *param_1 = 0;
  }
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}

struct C_01913700 { int sub_01913700(void); };

// @baa 0x01913700
int C_01913700::sub_01913700(void) { return *(int*)((char*)this + 28); }

struct C_019137d0 {
    bool sub_019137d0();
};

// @baa 0x019137d0
bool C_019137d0::sub_019137d0(void)
{
    char * param_1 = (char *)this;

  return *param_1 == '\x01';
}

struct C_019137f0 {
    bool sub_019137f0();
};

// @baa 0x019137f0
bool C_019137f0::sub_019137f0(void)
{
    char * param_1 = (char *)this;

  return *param_1 == '\x02';
}

struct C_019138f0 { int sub_019138f0(void); };

// @baa 0x019138f0
int C_019138f0::sub_019138f0(void) { return *(int*)((char*)this + 36); }

struct C_01913900 { char* sub_01913900(void); };

// @baa 0x01913900
char* C_01913900::sub_01913900(void) { return (char*)this + 72; }

struct C_01913960 {
    bool sub_01913960();
};

// @baa 0x01913960
bool C_01913960::sub_01913960(void)
{
    int param_1 = (int)this;

  return (*(byte *)(param_1 + 0x8c) & 0x60) != 0;
}

struct C_01913970 {
    bool sub_01913970();
};

// @baa 0x01913970
bool C_01913970::sub_01913970(void)
{
    int param_1 = (int)this;

  return (*(byte *)(param_1 + 0x8c) & 0x60) == 0x60;
}

struct C_019139b0 {
    void sub_019139b0(char);
};

// @baa 0x019139b0
void C_019139b0::sub_019139b0(char param_2)
{
    int param_1 = (int)this;

  if (param_2 != '\0') {
    *(ushort *)(param_1 + 0x8c) = *(ushort *)(param_1 + 0x8c) | 0x800;
    return;
  }
  *(ushort *)(param_1 + 0x8c) = *(ushort *)(param_1 + 0x8c) & 0xf7ff;
  return;
}

struct C_019139d0 {
    ushort sub_019139d0();
};

// @baa 0x019139d0
ushort C_019139d0::sub_019139d0(void)
{
    int param_1 = (int)this;

  return *(ushort *)(param_1 + 0x8c) >> 0xb & 1;
}

struct C_019139e0 {
    bool sub_019139e0();
};

// @baa 0x019139e0
bool C_019139e0::sub_019139e0(void)
{
    int param_1 = (int)this;

  return *(char *)(param_1 + 0x294) == '\x01';
}

struct C_019139f0 {
    int sub_019139f0(int);
};

// @baa 0x019139f0
int C_019139f0::sub_019139f0(int param_2)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 0x78) + 0x10 + param_2 * 4;
}

struct C_01913b00 {
    void sub_01913b00();
};

// @baa 0x01913b00
void C_01913b00::sub_01913b00(void)
{
    int param_1 = (int)this;

  *(byte *)(param_1 + 0x14e) = *(byte *)(param_1 + 0x14e) | 1;
  return;
}

struct C_01913b10 {
    void sub_01913b10();
};

// @baa 0x01913b10
void C_01913b10::sub_01913b10(void)
{
    int param_1 = (int)this;

  *(byte *)(param_1 + 0x14d) = *(byte *)(param_1 + 0x14d) & 0xfe;
  return;
}

struct C_01913b20 {
    void sub_01913b20();
};

// @baa 0x01913b20
void C_01913b20::sub_01913b20(void)
{
    int param_1 = (int)this;

  *(byte *)(param_1 + 0x14d) = *(byte *)(param_1 + 0x14d) & 0xfd;
  return;
}

struct C_01913b30 {
    byte sub_01913b30();
};

// @baa 0x01913b30
byte C_01913b30::sub_01913b30(void)
{
    int param_1 = (int)this;

  return *(byte *)(param_1 + 0x14d) >> 1 & 1;
}

struct C_01913b40 {
    byte sub_01913b40();
};

// @baa 0x01913b40
byte C_01913b40::sub_01913b40(void)
{
    int param_1 = (int)this;

  return *(byte *)(param_1 + 0x14d) >> 2 & 1;
}

struct C_01913b50 {
    byte sub_01913b50();
};

// @baa 0x01913b50
byte C_01913b50::sub_01913b50(void)
{
    int param_1 = (int)this;

  return *(byte *)(param_1 + 0x14d) >> 3 & 1;
}

struct C_01913b60 {
    void sub_01913b60();
};

// @baa 0x01913b60
void C_01913b60::sub_01913b60(void)
{
    int param_1 = (int)this;

  *(byte *)(param_1 + 0x14d) = *(byte *)(param_1 + 0x14d) & 0xef;
  return;
}

struct C_01913b70 {
    void sub_01913b70();
};

// @baa 0x01913b70
void C_01913b70::sub_01913b70(void)
{
    int param_1 = (int)this;

  *(byte *)(param_1 + 0x14d) = *(byte *)(param_1 + 0x14d) & 0xdf;
  return;
}

struct C_01913b80 {
    byte sub_01913b80();
};

// @baa 0x01913b80
byte C_01913b80::sub_01913b80(void)
{
    int param_1 = (int)this;

  return *(byte *)(param_1 + 0x14d) >> 5 & 1;
}

struct C_01913b90 {
    void sub_01913b90();
};

// @baa 0x01913b90
void C_01913b90::sub_01913b90(void)
{
    int param_1 = (int)this;

  *(byte *)(param_1 + 0x14d) = *(byte *)(param_1 + 0x14d) & 0xbf;
  return;
}

struct C_01913ba0 {
    byte sub_01913ba0();
};

// @baa 0x01913ba0
byte C_01913ba0::sub_01913ba0(void)
{
    int param_1 = (int)this;

  return *(byte *)(param_1 + 0x14d) >> 6 & 1;
}

struct C_01913bb0 {
    void sub_01913bb0();
};

// @baa 0x01913bb0
void C_01913bb0::sub_01913bb0(void)
{
    int param_1 = (int)this;

  *(byte *)(param_1 + 0x14d) = *(byte *)(param_1 + 0x14d) | 0x80;
  return;
}

struct C_01913bc0 {
    void sub_01913bc0();
};

// @baa 0x01913bc0
void C_01913bc0::sub_01913bc0(void)
{
    int param_1 = (int)this;

  *(byte *)(param_1 + 0x14d) = *(byte *)(param_1 + 0x14d) & 0x7f;
  return;
}

struct C_01913bd0 {
    byte sub_01913bd0();
};

// @baa 0x01913bd0
byte C_01913bd0::sub_01913bd0(void)
{
    int param_1 = (int)this;

  return *(byte *)(param_1 + 0x14d) >> 7;
}

struct C_01913be0 {
    void sub_01913be0();
};

// @baa 0x01913be0
void C_01913be0::sub_01913be0(void)
{
    int param_1 = (int)this;

  *(byte *)(param_1 + 0x133) = *(byte *)(param_1 + 0x133) & 0xfe;
  return;
}

struct C_01913bf0 {
    void sub_01913bf0();
};

// @baa 0x01913bf0
void C_01913bf0::sub_01913bf0(void)
{
    int param_1 = (int)this;

  *(byte *)(param_1 + 0x133) = *(byte *)(param_1 + 0x133) | 1;
  return;
}

struct C_01913cc0 {
    void sub_01913cc0(char);
};

// @baa 0x01913cc0
void C_01913cc0::sub_01913cc0(char param_2)
{
    int param_1 = (int)this;

  if (param_2 != '\0') {
    *(byte *)(param_1 + 0x133) = *(byte *)(param_1 + 0x133) | 0x20;
    return;
  }
  *(byte *)(param_1 + 0x133) = *(byte *)(param_1 + 0x133) & 0xdf;
  return;
}

struct C_01913ce0 {
    byte sub_01913ce0();
};

// @baa 0x01913ce0
byte C_01913ce0::sub_01913ce0(void)
{
    int param_1 = (int)this;

  return *(byte *)(param_1 + 0x133) >> 5 & 1;
}

struct C_01913cf0 {
    void sub_01913cf0(char);
};

// @baa 0x01913cf0
void C_01913cf0::sub_01913cf0(char param_2)
{
    int param_1 = (int)this;

  if (param_2 != '\0') {
    *(byte *)(param_1 + 0x133) = *(byte *)(param_1 + 0x133) | 0x40;
    return;
  }
  *(byte *)(param_1 + 0x133) = *(byte *)(param_1 + 0x133) & 0xbf;
  return;
}

struct C_01913d10 {
    byte sub_01913d10();
};

// @baa 0x01913d10
byte C_01913d10::sub_01913d10(void)
{
    int param_1 = (int)this;

  return *(byte *)(param_1 + 0x133) >> 6 & 1;
}

struct C_01913d20 {
    void sub_01913d20(uint);
};

// @baa 0x01913d20
void C_01913d20::sub_01913d20(uint param_2)
{
    int param_1 = (int)this;

  if (1 < param_2) {
    *(byte *)(param_1 + 0x133) = *(byte *)(param_1 + 0x133) | 0x80;
    return;
  }
  *(byte *)(param_1 + 0x133) = *(byte *)(param_1 + 0x133) & 0x7f;
  return;
}

struct C_01913e10 {
    uint sub_01913e10();
};

// @baa 0x01913e10
uint C_01913e10::sub_01913e10(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 0x140) & 0xffffff;
}

struct C_01913e40 {
    void sub_01913e40(byte);
};

// @baa 0x01913e40
void C_01913e40::sub_01913e40(byte param_2)
{
    int param_1 = (int)this;

  *(byte *)(param_1 + 0x14e) = *(byte *)(param_1 + 0x14e) | 1;
  *(byte *)(param_1 + 0x14c) =
       *(byte *)(param_1 + 0x14c) ^ (*(byte *)(param_1 + 0x14c) ^ param_2) & 3;
  return;
}

struct C_01913e60 {
    byte sub_01913e60();
};

// @baa 0x01913e60
byte C_01913e60::sub_01913e60(void)
{
    int param_1 = (int)this;

  return *(byte *)(param_1 + 0x14c) & 3;
}

struct C_01913ec0 {
    byte sub_01913ec0();
};

// @baa 0x01913ec0
byte C_01913ec0::sub_01913ec0(void)
{
    int param_1 = (int)this;

  return *(byte *)(param_1 + 0x14c) >> 4 & 3;
}

struct C_01913ee0 { C_01913ee0* sub_01913ee0(int a0); };

// @baa 0x01913ee0
C_01913ee0* C_01913ee0::sub_01913ee0(int a0) { return this; }

struct C_01913ef0 {
    void sub_01913ef0();
};

// @baa 0x01913ef0
void C_01913ef0::sub_01913ef0(void)
{
    int param_1 = (int)this;

  *(ushort *)(param_1 + 100) = *(ushort *)(param_1 + 100) & 0xfffe;
  return;
}

struct C_01913f00 {
    void sub_01913f00();
};

// @baa 0x01913f00
void C_01913f00::sub_01913f00(void)
{
    int param_1 = (int)this;

  *(ushort *)(param_1 + 100) = *(ushort *)(param_1 + 100) & 0xfffd;
  return;
}

struct C_01913f10 {
    byte sub_01913f10();
};

// @baa 0x01913f10
byte C_01913f10::sub_01913f10(void)
{
    int param_1 = (int)this;

  return *(byte *)(param_1 + 100) >> 1 & 1;
}

struct C_01913f20 {
    void sub_01913f20();
};

// @baa 0x01913f20
void C_01913f20::sub_01913f20(void)
{
    int param_1 = (int)this;

  *(ushort *)(param_1 + 100) = *(ushort *)(param_1 + 100) | 0x80;
  return;
}

struct C_01913f30 {
    void sub_01913f30();
};

// @baa 0x01913f30
void C_01913f30::sub_01913f30(void)
{
    int param_1 = (int)this;

  *(ushort *)(param_1 + 100) = *(ushort *)(param_1 + 100) & 0xff7f;
  return;
}

struct C_01913f40 {
    void sub_01913f40();
};

// @baa 0x01913f40
void C_01913f40::sub_01913f40(void)
{
    int param_1 = (int)this;

  *(ushort *)(param_1 + 100) = *(ushort *)(param_1 + 100) | 0x100;
  return;
}

struct C_01913f50 {
    byte sub_01913f50();
};

// @baa 0x01913f50
byte C_01913f50::sub_01913f50(void)
{
    int param_1 = (int)this;

  return *(byte *)(param_1 + 100) >> 5 & 1;
}

struct C_01913f70 {
    void sub_01913f70(undefined4);
};

int sub_0198d450(void);
// @baa 0x01913f70
void C_01913f70::sub_01913f70(undefined4 param_2)
{
    int param_1 = (int)this;

  *(undefined4 *)(param_1 + 0x58) = param_2;
  sub_0198d450();
  return;
}

struct C_01913f80 {
    void sub_01913f80(undefined4);
};

// @baa 0x01913f80
void C_01913f80::sub_01913f80(undefined4 param_2)
{
    int param_1 = (int)this;

  *(undefined4 *)(param_1 + 0x54) = param_2;
  sub_0198d450();
  return;
}

struct C_01913f90 {
    void sub_01913f90(undefined4);
};

// @baa 0x01913f90
void C_01913f90::sub_01913f90(undefined4 param_2)
{
    int param_1 = (int)this;

  *(undefined4 *)(param_1 + 0x60) = param_2;
  sub_0198d450();
  return;
}

struct C_01913fa0 {
    void sub_01913fa0(undefined4);
};

// @baa 0x01913fa0
void C_01913fa0::sub_01913fa0(undefined4 param_2)
{
    int param_1 = (int)this;

  *(undefined4 *)(param_1 + 0x5c) = param_2;
  sub_0198d450();
  return;
}

struct C_01913fb0 { int sub_01913fb0(void); };

// @baa 0x01913fb0
int C_01913fb0::sub_01913fb0(void) { return *(int*)((char*)this + 96); }

struct C_01913fc0 { int sub_01913fc0(void); };

// @baa 0x01913fc0
int C_01913fc0::sub_01913fc0(void) { return *(int*)((char*)this + 92); }

struct C_01914010 { int sub_01914010(void); };

// @baa 0x01914010
int C_01914010::sub_01914010(void) { return *(int*)((char*)this + 24); }

struct C_01914040 { float sub_01914040(void); };

// @baa 0x01914040
float C_01914040::sub_01914040(void) { return *(float*)((char*)this + 236); }

struct C_01914050 { char* sub_01914050(void); };

// @baa 0x01914050
char* C_01914050::sub_01914050(void) { return (char*)this + 136; }

struct C_01914070 {
    void sub_01914070(char);
};

// @baa 0x01914070
void C_01914070::sub_01914070(char param_2)
{
    int param_1 = (int)this;

  if (param_2 != '\0') {
    *(ushort *)(param_1 + 0xc4) = *(ushort *)(param_1 + 0xc4) | 1;
    return;
  }
  *(ushort *)(param_1 + 0xc4) = *(ushort *)(param_1 + 0xc4) & 0xfffe;
  return;
}

struct C_01914090 {
    void sub_01914090();
};

// @baa 0x01914090
void C_01914090::sub_01914090(void)
{
    int param_1 = (int)this;

  *(ushort *)(param_1 + 0xc4) = *(ushort *)(param_1 + 0xc4) & 0xfffe;
  return;
}

struct C_019140a0 {
    byte sub_019140a0();
};

// @baa 0x019140a0
byte C_019140a0::sub_019140a0(void)
{
    int param_1 = (int)this;

  return *(byte *)(param_1 + 0xc4) & 1;
}

struct C_019140b0 {
    ushort sub_019140b0();
};

// @baa 0x019140b0
ushort C_019140b0::sub_019140b0(void)
{
    int param_1 = (int)this;

  return *(ushort *)(param_1 + 0xc4) >> 0xc & 1;
}

struct C_019140c0 {
    void sub_019140c0(char);
};

// @baa 0x019140c0
void C_019140c0::sub_019140c0(char param_2)
{
    int param_1 = (int)this;

  if (param_2 != '\0') {
    *(ushort *)(param_1 + 0xc4) = *(ushort *)(param_1 + 0xc4) | 0x10;
    return;
  }
  *(ushort *)(param_1 + 0xc4) = *(ushort *)(param_1 + 0xc4) & 0xffef;
  return;
}

struct C_019140e0 {
    void sub_019140e0(char);
};

// @baa 0x019140e0
void C_019140e0::sub_019140e0(char param_2)
{
    int param_1 = (int)this;

  if (param_2 != '\0') {
    *(ushort *)(param_1 + 0xc4) = *(ushort *)(param_1 + 0xc4) | 0x20;
    return;
  }
  *(ushort *)(param_1 + 0xc4) = *(ushort *)(param_1 + 0xc4) & 0xffdf;
  return;
}

struct C_01914100 {
    void sub_01914100();
};

// @baa 0x01914100
void C_01914100::sub_01914100(void)
{
    int param_1 = (int)this;

  *(ushort *)(param_1 + 0xc4) = *(ushort *)(param_1 + 0xc4) & 0xffdf;
  return;
}

struct C_01914110 {
    byte sub_01914110();
};

// @baa 0x01914110
byte C_01914110::sub_01914110(void)
{
    int param_1 = (int)this;

  return *(byte *)(param_1 + 0xc4) >> 5 & 1;
}

struct C_01914130 {
    void sub_01914130(char);
};

// @baa 0x01914130
void C_01914130::sub_01914130(char param_2)
{
    int param_1 = (int)this;

  if (param_2 != '\0') {
    *(ushort *)(param_1 + 0xc4) = *(ushort *)(param_1 + 0xc4) | 8;
    return;
  }
  *(ushort *)(param_1 + 0xc4) = *(ushort *)(param_1 + 0xc4) & 0xfff7;
  return;
}

struct C_01914150 {
    void sub_01914150(char);
};

// @baa 0x01914150
void C_01914150::sub_01914150(char param_2)
{
    int param_1 = (int)this;

  if (param_2 != '\0') {
    *(ushort *)(param_1 + 0xc4) = *(ushort *)(param_1 + 0xc4) | 0x100;
    return;
  }
  *(ushort *)(param_1 + 0xc4) = *(ushort *)(param_1 + 0xc4) & 0xfeff;
  return;
}

struct C_01914170 {
    void sub_01914170(char);
};

// @baa 0x01914170
void C_01914170::sub_01914170(char param_2)
{
    int param_1 = (int)this;

  if (param_2 != '\0') {
    *(ushort *)(param_1 + 0xc4) = *(ushort *)(param_1 + 0xc4) | 0x200;
    return;
  }
  *(ushort *)(param_1 + 0xc4) = *(ushort *)(param_1 + 0xc4) & 0xfdff;
  return;
}

struct C_01914190 {
    ushort sub_01914190();
};

// @baa 0x01914190
ushort C_01914190::sub_01914190(void)
{
    int param_1 = (int)this;

  return *(ushort *)(param_1 + 0xc4) >> 9 & 1;
}

struct C_019141a0 {
    void sub_019141a0(char);
};

// @baa 0x019141a0
void C_019141a0::sub_019141a0(char param_2)
{
    int param_1 = (int)this;

  if (param_2 != '\0') {
    *(ushort *)(param_1 + 0xc4) = *(ushort *)(param_1 + 0xc4) | 0x400;
    return;
  }
  *(ushort *)(param_1 + 0xc4) = *(ushort *)(param_1 + 0xc4) & 0xfbff;
  return;
}

struct C_019141c0 {
    ushort sub_019141c0();
};

// @baa 0x019141c0
ushort C_019141c0::sub_019141c0(void)
{
    int param_1 = (int)this;

  return *(ushort *)(param_1 + 0xc4) >> 10 & 1;
}

struct C_019141d0 {
    void sub_019141d0(char);
};

// @baa 0x019141d0
void C_019141d0::sub_019141d0(char param_2)
{
    int param_1 = (int)this;

  if (param_2 != '\0') {
    *(ushort *)(param_1 + 0xc4) = *(ushort *)(param_1 + 0xc4) | 0x800;
    return;
  }
  *(ushort *)(param_1 + 0xc4) = *(ushort *)(param_1 + 0xc4) & 0xf7ff;
  return;
}

struct C_019141f0 {
    ushort sub_019141f0();
};

// @baa 0x019141f0
ushort C_019141f0::sub_019141f0(void)
{
    int param_1 = (int)this;

  return *(ushort *)(param_1 + 0xc4) >> 0xb & 1;
}

struct C_01914200 { int sub_01914200(void); };

// @baa 0x01914200
int C_01914200::sub_01914200(void) { return *(int*)((char*)this + 152); }

extern char g_01e66a54[];
// @baa 0x01914210
int __stdcall sub_01914210(int a0) { return (int)g_01e66a54; }

// @baa 0x01914220
int sub_01914220(void) { return 4; }

// @baa 0x01914230
int sub_01914230(void) { return 1652404175; }

// @baa 0x01914240
undefined1 sub_01914240(void)
{
  return 0;
}

// @baa 0x01914250
undefined1 sub_01914250(void)
{
  return 1;
}

struct C_019142c0 { int sub_019142c0(void); };

// @baa 0x019142c0
int C_019142c0::sub_019142c0(void) { return *(int*)((char*)this + 0); }

struct C_019142d0 {
    bool sub_019142d0(int);
};

// @baa 0x019142d0
bool C_019142d0::sub_019142d0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 == param_2;
}

struct C_019142e0 {
    bool sub_019142e0(int);
};

// @baa 0x019142e0
bool C_019142e0::sub_019142e0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 != param_2;
}

struct C_019142f0 { int sub_019142f0(void); };

// @baa 0x019142f0
int C_019142f0::sub_019142f0(void) { return *(int*)((char*)this + 0); }

struct C_01914330 { int sub_01914330(void); };

// @baa 0x01914330
int C_01914330::sub_01914330(void) { return *(int*)((char*)this + 0); }

struct C_01914340 { int sub_01914340(void); };

// @baa 0x01914340
int C_01914340::sub_01914340(void) { return *(int*)((char*)this + 0); }

struct C_01914350 { C_01914350* sub_01914350(void); };

// @baa 0x01914350
C_01914350* C_01914350::sub_01914350(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_01914390 {
    int sub_01914390(int);
};

// @baa 0x01914390
int C_01914390::sub_01914390(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 8;
}

struct C_019143a0 { int sub_019143a0(void); };

// @baa 0x019143a0
int C_019143a0::sub_019143a0(void) { return *(int*)((char*)this + 4); }

struct C_019143e0 {
    uint sub_019143e0();
};

// @baa 0x019143e0
uint C_019143e0::sub_019143e0(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 8) & 0x3fffffff;
}

struct C_019143f0 { unsigned sub_019143f0(void); };

// @baa 0x019143f0
unsigned C_019143f0::sub_019143f0(void) { return *(unsigned*)((char*)this + 8) >> 30; }

struct C_01914400 { unsigned sub_01914400(void); };

// @baa 0x01914400
unsigned C_01914400::sub_01914400(void) { return *(unsigned*)((char*)this + 8) >> 31; }

struct C_01914410 {
    uint sub_01914410();
};

// @baa 0x01914410
uint C_01914410::sub_01914410(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 8) >> 0x1e & 1;
}

struct C_01914420 {
    void sub_01914420(uint);
};

// @baa 0x01914420
void C_01914420::sub_01914420(uint param_2)
{
    int param_1 = (int)this;

  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xc0000000 | param_2;
  return;
}

// @baa 0x01914470
int sub_01914470(int param_1)
{
  return param_1 * 0x14;
}

// @baa 0x01914480
uint sub_01914480(uint param_1)
{
  return param_1 / 0x14;
}

// @baa 0x01914490
int sub_01914490(int a0) { return a0; }

struct C_01914530 {
    undefined4 sub_01914530();
};

// @baa 0x01914530
undefined4 C_01914530::sub_01914530(void)
{
    int * param_1 = (int *)this;

  return *(undefined4 *)(*param_1 + 0x1c);
}

struct C_01914550 {
    void sub_01914550(uint);
};

// @baa 0x01914550
void C_01914550::sub_01914550(uint param_2)
{
    int param_1 = (int)this;

  *(uint *)(param_1 + 0x140) = (uint)*(byte *)(param_1 + 0x137) << 0x18 | param_2 & 0xffffff;
  return;
}

struct C_019146c0 { int sub_019146c0(void); };

// @baa 0x019146c0
int C_019146c0::sub_019146c0(void) { return *(int*)((char*)this + 236); }

struct C_019146d0 { int sub_019146d0(void); };

// @baa 0x019146d0
int C_019146d0::sub_019146d0(void) { return *(int*)((char*)this + 236); }

struct C_01914e00 {
    void sub_01914e00(char);
};

// @baa 0x01914e00
void C_01914e00::sub_01914e00(char param_2)
{
    int param_1 = (int)this;

  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x9c) + 0x11c);
  if (iVar1 != 0) {
    if (param_2 != '\0') {
      *(ushort *)(iVar1 + 100) = *(ushort *)(iVar1 + 100) | 0x80;
      return;
    }
    *(ushort *)(iVar1 + 100) = *(ushort *)(iVar1 + 100) & 0xff7f;
  }
  return;
}

struct C_019154a0 {
    void sub_019154a0(char);
};

int sub_01907190(void);
// @baa 0x019154a0
void C_019154a0::sub_019154a0(char param_2)
{
    int param_1 = (int)this;

  ushort *puVar1;
  int iVar2;
  
  iVar2 = *(int *)(*(int *)(param_1 + 0x9c) + 0x11c);
  if (param_2 != '\0') {
    iVar2 = sub_01907190();
    *(ushort *)(iVar2 + 100) = *(ushort *)(iVar2 + 100) | 2;
    return;
  }
  if (iVar2 != 0) {
    puVar1 = (ushort *)(iVar2 + 100);
    *puVar1 = *puVar1 & 0xfffd;
  }
  return;
}

void sub_01916400();
// @baa 0x01917540
void sub_01917540(void) { sub_01916400(); }

void sub_019175e0();
// @baa 0x01917b80
void sub_01917b80(void) { sub_019175e0(); }

struct C_019196f0 { float sub_019196f0(void); };

// @baa 0x019196f0
float C_019196f0::sub_019196f0(void) { return *(float*)((char*)this + 20); }

struct C_01919700 {
    undefined1 sub_01919700();
};

// @baa 0x01919700
undefined1 C_01919700::sub_01919700(void)
{
    int param_1 = (int)this;

  return *(undefined1 *)(param_1 + 0x18);
}

void sub_018d3de0();
// @baa 0x01919730
void sub_01919730(void) { sub_018d3de0(); }

struct C_01919760 {
    void sub_01919760(undefined4 *);
};

// @baa 0x01919760
void C_01919760::sub_01919760(undefined4 * param_2)
{
    int param_1 = (int)this;

  *(undefined4 *)(param_1 + 0x10) = *param_2;
  *(undefined4 *)(param_1 + 0x14) = param_2[1];
  *(undefined4 *)(param_1 + 0x18) = param_2[2];
  *(undefined4 *)(param_1 + 0x1c) = param_2[3];
  return;
}

// @baa 0x01919780
void sub_01919780(void) { sub_018d3de0(); }

struct C_01919790 { void sub_01919790(int a0); };

// @baa 0x01919790
void C_01919790::sub_01919790(int a0) { *(int*)((char*)this + 100) = a0; }

extern char g_023f704c[];
struct C_019197a0 { void sub_019197a0(void); };

// @baa 0x019197a0
void C_019197a0::sub_019197a0(void) { *(int*)((char*)this + 0) = (int)g_023f704c; }

// @baa 0x019197b0
void __stdcall sub_019197b0(int a0) {  }

// @baa 0x019197d0
void __stdcall sub_019197d0(int a0) {  }

// @baa 0x019197f0
undefined1 sub_019197f0(void)
{
  return 0;
}

// @baa 0x01919800
undefined1 sub_01919800(void)
{
  return 0;
}

// @baa 0x01919810
undefined1 sub_01919810(void)
{
  return 0;
}

struct C_01919860 {
    undefined4 * sub_01919860(byte);
};

int sub_00402660(...);
// @baa 0x01919860
undefined4 * C_01919860::sub_01919860(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023f704c));
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_01919880 { C_01919880* sub_01919880(void); };

// @baa 0x01919880
C_01919880* C_01919880::sub_01919880(void) { *(int*)((char*)this + 0) = (int)g_023f704c; return this; }

// @baa 0x019198b0
undefined1 sub_019198b0(void)
{
  return 1;
}

struct C_019198c0 { void sub_019198c0(void); };

// @baa 0x019198c0
void C_019198c0::sub_019198c0(void) { *(int*)((char*)this + 0) = (int)g_023f704c; }

struct C_01919940 { char* sub_01919940(void); };

// @baa 0x01919940
char* C_01919940::sub_01919940(void) { return (char*)this + 20; }

struct C_019199a0 { void sub_019199a0(int a0); };

// @baa 0x019199a0
void C_019199a0::sub_019199a0(int a0) { *(int*)((char*)this + 692) = a0; }

struct C_019199b0 { int sub_019199b0(void); };

// @baa 0x019199b0
int C_019199b0::sub_019199b0(void) { return *(int*)((char*)this + 692); }

struct C_019199c0 { int sub_019199c0(void); };

// @baa 0x019199c0
int C_019199c0::sub_019199c0(void) { return *(int*)((char*)this + 44); }

// @baa 0x01919ad0
undefined1 sub_01919ad0(void)
{
  return 1;
}

// @baa 0x01919ae0
void __stdcall sub_01919ae0(int a0, int a1) {  }

// @baa 0x01919b50
void __stdcall sub_01919b50(int a0, int a1) {  }

// @baa 0x01919b60
void __stdcall sub_01919b60(int a0, int a1) {  }

struct C_01919b70 {
    int sub_01919b70(int);
};

// @baa 0x01919b70
int C_01919b70::sub_01919b70(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2;
}

struct C_01919b80 { int sub_01919b80(void); };

// @baa 0x01919b80
int C_01919b80::sub_01919b80(void) { return *(int*)((char*)this + 4); }

struct C_01919c90 { int sub_01919c90(void); };

// @baa 0x01919c90
int C_01919c90::sub_01919c90(void) { return *(int*)((char*)this + 0); }

struct C_01919ca0 { int sub_01919ca0(void); };

// @baa 0x01919ca0
int C_01919ca0::sub_01919ca0(void) { return *(int*)((char*)this + 0); }

struct C_01919d00 { int sub_01919d00(void); };

// @baa 0x01919d00
int C_01919d00::sub_01919d00(void) { return *(int*)((char*)this + 0); }

struct C_01919d10 { int sub_01919d10(void); };

// @baa 0x01919d10
int C_01919d10::sub_01919d10(void) { return *(int*)((char*)this + 0); }

struct C_01919d40 { int sub_01919d40(void); };

// @baa 0x01919d40
int C_01919d40::sub_01919d40(void) { return *(int*)((char*)this + 0); }

struct C_01919d50 { int sub_01919d50(void); };

// @baa 0x01919d50
int C_01919d50::sub_01919d50(void) { return *(int*)((char*)this + 0); }

struct C_01919d80 { int sub_01919d80(void); };

// @baa 0x01919d80
int C_01919d80::sub_01919d80(void) { return *(int*)((char*)this + 0); }

struct C_01919d90 { int sub_01919d90(void); };

// @baa 0x01919d90
int C_01919d90::sub_01919d90(void) { return *(int*)((char*)this + 0); }

struct C_01919da0 {
    int sub_01919da0(int);
};

// @baa 0x01919da0
int C_01919da0::sub_01919da0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 4;
}

struct C_01919de0 { int sub_01919de0(void); };

// @baa 0x01919de0
int C_01919de0::sub_01919de0(void) { return *(int*)((char*)this + 0); }

struct C_01919df0 { int sub_01919df0(void); };

// @baa 0x01919df0
int C_01919df0::sub_01919df0(void) { return *(int*)((char*)this + 0); }

struct C_01919e90 { C_01919e90* sub_01919e90(void); };

// @baa 0x01919e90
C_01919e90* C_01919e90::sub_01919e90(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_01919ec0 {
    uint sub_01919ec0();
};

// @baa 0x01919ec0
uint C_01919ec0::sub_01919ec0(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 8) & 0x3fffffff;
}

struct C_01919ed0 {
    uint sub_01919ed0();
};

// @baa 0x01919ed0
uint C_01919ed0::sub_01919ed0(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 8) & 0x3fffffff;
}

struct C_01919ee0 { int sub_01919ee0(void); };

// @baa 0x01919ee0
int C_01919ee0::sub_01919ee0(void) { return *(int*)((char*)this + 0); }

struct C_01919f20 { unsigned sub_01919f20(void); };

// @baa 0x01919f20
unsigned C_01919f20::sub_01919f20(void) { return *(unsigned*)((char*)this + 8) >> 30; }

struct C_01919f30 { unsigned sub_01919f30(void); };

// @baa 0x01919f30
unsigned C_01919f30::sub_01919f30(void) { return *(unsigned*)((char*)this + 8) >> 31; }

struct C_01919f40 {
    uint sub_01919f40();
};

// @baa 0x01919f40
uint C_01919f40::sub_01919f40(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 8) >> 0x1e & 1;
}

struct C_01919f50 {
    void sub_01919f50(uint);
};

// @baa 0x01919f50
void C_01919f50::sub_01919f50(uint param_2)
{
    int param_1 = (int)this;

  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xc0000000 | param_2;
  return;
}

struct C_01919f70 { unsigned sub_01919f70(void); };

// @baa 0x01919f70
unsigned C_01919f70::sub_01919f70(void) { return *(unsigned*)((char*)this + 8) >> 30; }

struct C_01919f80 { unsigned sub_01919f80(void); };

// @baa 0x01919f80
unsigned C_01919f80::sub_01919f80(void) { return *(unsigned*)((char*)this + 8) >> 31; }

struct C_01919f90 {
    uint sub_01919f90();
};

// @baa 0x01919f90
uint C_01919f90::sub_01919f90(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 8) >> 0x1e & 1;
}

struct C_01919fa0 {
    void sub_01919fa0(uint);
};

// @baa 0x01919fa0
void C_01919fa0::sub_01919fa0(uint param_2)
{
    int param_1 = (int)this;

  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xc0000000 | param_2;
  return;
}

struct C_01919fe0 {
    bool sub_01919fe0();
};

// @baa 0x01919fe0
bool C_01919fe0::sub_01919fe0(void)
{
    int * param_1 = (int *)this;

  return *param_1 == -2;
}

struct C_0191a010 { unsigned sub_0191a010(void); };

// @baa 0x0191a010
unsigned C_0191a010::sub_0191a010(void) { return *(unsigned*)((char*)this + 8) >> 30; }

struct C_0191a020 { unsigned sub_0191a020(void); };

// @baa 0x0191a020
unsigned C_0191a020::sub_0191a020(void) { return *(unsigned*)((char*)this + 8) >> 31; }

struct C_0191a030 {
    uint sub_0191a030();
};

// @baa 0x0191a030
uint C_0191a030::sub_0191a030(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 8) >> 0x1e & 1;
}

struct C_0191a040 {
    void sub_0191a040(uint);
};

// @baa 0x0191a040
void C_0191a040::sub_0191a040(uint param_2)
{
    int param_1 = (int)this;

  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xc0000000 | param_2;
  return;
}

// @baa 0x0191a070
int sub_0191a070(int a0) { return a0; }

struct C_0191a080 { C_0191a080* sub_0191a080(void); };

// @baa 0x0191a080
C_0191a080* C_0191a080::sub_0191a080(void) { *(int*)((char*)this + 0) = 0; return this; }

extern undefined4 g_023f7074;
// @baa 0x0191a090
undefined4 * sub_0191a090(undefined4 * param_1)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = (undefined4)((&g_023f7074));
    param_1[1] = 0;
    return param_1;
  }
  return (undefined4 *)0x0;
}

extern char g_023f70ac[];
struct C_0191a0b0 { C_0191a0b0* sub_0191a0b0(void); };

// @baa 0x0191a0b0
C_0191a0b0* C_0191a0b0::sub_0191a0b0(void) { *(int*)((char*)this + 0) = (int)g_023f70ac; return this; }

struct C_0191a0d0 { void sub_0191a0d0(void); };

// @baa 0x0191a0d0
void C_0191a0d0::sub_0191a0d0(void) { *(int*)((char*)this + 0) = (int)g_023f704c; }

struct C_0191a160 {
    undefined4 sub_0191a160();
};

int sub_018f4050(void);
// @baa 0x0191a160
undefined4 C_0191a160::sub_0191a160(void)
{
    int param_1 = (int)this;

  sub_018f4050();
  return *(undefined4 *)(param_1 + 0x10);
}

struct C_0191a240 {
    undefined4 sub_0191a240();
};

// @baa 0x0191a240
undefined4 C_0191a240::sub_0191a240(void)
{
    int param_1 = (int)this;

  return *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x2c);
}

// @baa 0x0191a280
undefined1 sub_0191a280(void)
{
  return 1;
}

struct C_0191a290 { void sub_0191a290(void); };

// @baa 0x0191a290
void C_0191a290::sub_0191a290(void) { *(int*)((char*)this + 0) = (int)g_023f704c; }

struct C_0191a2a0 {
    undefined4 * sub_0191a2a0(byte);
};

// @baa 0x0191a2a0
undefined4 * C_0191a2a0::sub_0191a2a0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023f704c));
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_0191a2c0 {
    undefined4 * sub_0191a2c0(byte);
};

// @baa 0x0191a2c0
undefined4 * C_0191a2c0::sub_0191a2c0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023f704c));
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_0191a2e0 {
    undefined4 sub_0191a2e0();
};

// @baa 0x0191a2e0
undefined4 C_0191a2e0::sub_0191a2e0(void)
{
    int param_1 = (int)this;

  return *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x74);
}

struct C_0191a340 {
    void sub_0191a340(undefined4);
};

// @baa 0x0191a340
void C_0191a340::sub_0191a340(undefined4 param_2)
{
    int param_1 = (int)this;

  *(undefined4 *)(*(int *)(param_1 + 0x28) + 100) = param_2;
  return;
}

// @baa 0x0191a8d0
undefined4 * sub_0191a8d0(undefined4 * param_1)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = 0;
    return param_1;
  }
  return (undefined4 *)0x0;
}

// @baa 0x0191a8f0
undefined4 * sub_0191a8f0(undefined4 * param_1)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = (undefined4)((&g_023f70ac));
    return param_1;
  }
  return (undefined4 *)0x0;
}

extern undefined4 g_023f70dc;
// @baa 0x0191a910
undefined4 * sub_0191a910(undefined4 * param_1)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = (undefined4)((&g_023f70dc));
    param_1[2] = 0x40000;
    param_1[1] = 0xffffffff;
    return param_1;
  }
  return (undefined4 *)0x0;
}

struct C_0191a930 {
    undefined4 * sub_0191a930(byte);
};

// @baa 0x0191a930
undefined4 * C_0191a930::sub_0191a930(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((&g_023f704c));
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_0191ac10 { char* sub_0191ac10(void); };

// @baa 0x0191ac10
char* C_0191ac10::sub_0191ac10(void) { return (char*)this + 16; }

struct C_0191ac20 { char* sub_0191ac20(void); };

// @baa 0x0191ac20
char* C_0191ac20::sub_0191ac20(void) { return (char*)this + 16; }

void sub_0191b970();
// @baa 0x0191bde0
void sub_0191bde0(void) { sub_0191b970(); }

void sub_0191b9e0();
// @baa 0x0191bdf0
void sub_0191bdf0(void) { sub_0191b9e0(); }

void sub_0191bad0();
// @baa 0x0191be00
void sub_0191be00(void) { sub_0191bad0(); }

void sub_0191be70();
// @baa 0x0191c010
void sub_0191c010(void) { sub_0191be70(); }

void sub_0191bf90();
// @baa 0x0191c310
void sub_0191c310(void) { sub_0191bf90(); }

struct C_0191c350 { C_0191c350* sub_0191c350(void); };

// @baa 0x0191c350
C_0191c350* C_0191c350::sub_0191c350(void) { *(int*)((char*)this + 0) = 0; return this; }

// @baa 0x0191c360
void sub_0191c360(void) { sub_0191be70(); }

struct C_0191e200 {
    bool sub_0191e200();
};

// @baa 0x0191e200
bool C_0191e200::sub_0191e200(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 0x10) != 0;
}

struct C_0191e210 {
    undefined4 sub_0191e210();
};

// @baa 0x0191e210
undefined4 C_0191e210::sub_0191e210(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 0x10) == 0) {
    return 0xffffffff;
  }
  return *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x4c);
}

struct C_0191e280 {
    undefined4 sub_0191e280();
};

// @baa 0x0191e280
undefined4 C_0191e280::sub_0191e280(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 0x10) != 0) {
    return *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x48);
  }
  return 0;
}

// @baa 0x0191e290
int __stdcall sub_0191e290(int a0, int a1) { return 0; }

// @baa 0x0191e300
undefined1 sub_0191e300(void)
{
  return 1;
}

// @baa 0x0191e340
int __stdcall sub_0191e340(int a0, int a1) { return 0; }

// @baa 0x0191e5e0
undefined1 sub_0191e5e0(void)
{
  return 0;
}

struct C_0191ead0 { int sub_0191ead0(void); };

// @baa 0x0191ead0
int C_0191ead0::sub_0191ead0(void) { return *(int*)((char*)this + 16); }

struct C_0191eae0 {
    undefined1 sub_0191eae0();
};

// @baa 0x0191eae0
undefined1 C_0191eae0::sub_0191eae0(void)
{
    int param_1 = (int)this;

  return *(undefined1 *)(param_1 + 0x14);
}

#pragma pack(push, 1)
struct _iobuf { char * _ptr; int _cnt; char * _base; int _flag; int _file; int _charbuf; int _bufsiz; char * _tmpfname; };

#pragma pack(pop)
typedef _iobuf FILE;

struct C_0191eb10 {
    long sub_0191eb10();
};

int sub_0191ea40(void);
extern "C" __declspec(dllimport) int ftell(...);
// @baa 0x0191eb10
long C_0191eb10::sub_0191eb10(void)
{
    int param_1 = (int)this;

  long lVar1;
  undefined4 uVar2;
  
  lVar1 = ftell(*(FILE **)(param_1 + 0x18));
  if (lVar1 < 0) {
    uVar2 = sub_0191ea40();
    *(undefined4 *)(param_1 + 0x20) = uVar2;
  }
  return lVar1;
}

struct C_0191ebd0 { int sub_0191ebd0(void); };

// @baa 0x0191ebd0
int C_0191ebd0::sub_0191ebd0(void) { return *(int*)((char*)this + 32); }

#pragma pack(push, 1)
#pragma pack(pop)
typedef uint size_t;

struct C_0191ebe0 {
    size_t sub_0191ebe0(void *, size_t);
};

extern "C" __declspec(dllimport) int fflush(...);
extern "C" __declspec(dllimport) int fwrite(...);
// @baa 0x0191ebe0
size_t C_0191ebe0::sub_0191ebe0(void * param_2, size_t param_3)
{
    int param_1 = (int)this;

  size_t sVar1;
  undefined4 uVar2;
  
  if ((*(int *)(param_1 + 0x24) != 0) && (*(int *)(param_1 + 0x24) != 2)) {
    fflush(*(FILE **)(param_1 + 0x18));
  }
  *(undefined4 *)(param_1 + 0x24) = 2;
  sVar1 = fwrite(param_2,1,param_3,*(FILE **)(param_1 + 0x18));
  if ((int)sVar1 < (int)param_3) {
    uVar2 = sub_0191ea40();
    *(undefined4 *)(param_1 + 0x20) = uVar2;
  }
  return sVar1;
}

#pragma pack(push, 1)
#pragma pack(pop)
struct C_0191ec40 {
    size_t sub_0191ec40(void *, size_t);
};

extern "C" __declspec(dllimport) int fread(...);
// @baa 0x0191ec40
size_t C_0191ec40::sub_0191ec40(void * param_2, size_t param_3)
{
    int param_1 = (int)this;

  size_t sVar1;
  undefined4 uVar2;
  
  if ((*(int *)(param_1 + 0x24) != 0) && (*(int *)(param_1 + 0x24) != 1)) {
    fflush(*(FILE **)(param_1 + 0x18));
  }
  *(undefined4 *)(param_1 + 0x24) = 1;
  sVar1 = fread(param_2,1,param_3,*(FILE **)(param_1 + 0x18));
  if ((int)sVar1 < (int)param_3) {
    uVar2 = sub_0191ea40();
    *(undefined4 *)(param_1 + 0x20) = uVar2;
  }
  return sVar1;
}

#pragma pack(push, 1)
#pragma pack(pop)
struct C_0191ed40 {
    bool sub_0191ed40();
};

// @baa 0x0191ed40
bool C_0191ed40::sub_0191ed40(void)
{
    int param_1 = (int)this;

  int iVar1;
  
  iVar1 = fflush(*(FILE **)(param_1 + 0x18));
  return iVar1 == 0;
}

typedef size_t rsize_t;

extern "C" __declspec(dllimport) int wcscpy_s(...);
// @baa 0x0191f130
wchar_t * sub_0191f130(wchar_t * param_1, rsize_t param_2, wchar_t * param_3)
{
  wcscpy_s(param_1,param_2,param_3);
  return param_1;
}

extern "C" __declspec(dllimport) int wcscat_s(...);
// @baa 0x0191f150
wchar_t * sub_0191f150(wchar_t * param_1, rsize_t param_2, wchar_t * param_3)
{
  wcscat_s(param_1,param_2,param_3);
  return param_1;
}

// @baa 0x0191f1f0
undefined4 * sub_0191f1f0(undefined4 * param_1)
{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
    return param_1;
  }
  return (undefined4 *)0x0;
}

struct C_0191f5f0 { char* sub_0191f5f0(void); };

// @baa 0x0191f5f0
char* C_0191f5f0::sub_0191f5f0(void) { return (char*)this + 24; }

struct C_0191f600 { int sub_0191f600(void); };

// @baa 0x0191f600
int C_0191f600::sub_0191f600(void) { return *(int*)((char*)this + 8); }

struct C_0191f610 {
    undefined4 sub_0191f610();
};

// @baa 0x0191f610
undefined4 C_0191f610::sub_0191f610(void)
{
    int param_1 = (int)this;

  if (((*(byte *)(param_1 + 0x1c) & 0x10) != 0) && ((*(uint *)(param_1 + 0x24) & 0x100) != 0)) {
    return 1;
  }
  return 0;
}

struct C_0191f630 {
    uint sub_0191f630();
};

// @baa 0x0191f630
uint C_0191f630::sub_0191f630(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 0x24) >> 9 & 1;
}

struct C_0191f640 {
    uint sub_0191f640();
};

// @baa 0x0191f640
uint C_0191f640::sub_0191f640(void)
{
    int param_1 = (int)this;

  return *(uint *)(param_1 + 0x1c) >> 5 & 1;
}

struct C_0191f650 { float sub_0191f650(void); };

// @baa 0x0191f650
float C_0191f650::sub_0191f650(void) { return *(float*)((char*)this + 24); }

struct C_0191f660 { int sub_0191f660(void); };

// @baa 0x0191f660
int C_0191f660::sub_0191f660(void) { return *(int*)((char*)this + 28); }

struct C_0191f6a0 {
    undefined2 sub_0191f6a0();
};

// @baa 0x0191f6a0
undefined2 C_0191f6a0::sub_0191f6a0(void)
{
    int param_1 = (int)this;

  return *(undefined2 *)(param_1 + 4);
}

struct C_0191f6b0 {
    byte sub_0191f6b0();
};

// @baa 0x0191f6b0
byte C_0191f6b0::sub_0191f6b0(void)
{
    int param_1 = (int)this;

  return *(byte *)(param_1 + 0x10) & 0xc0;
}

struct C_0191f6c0 {
    ushort sub_0191f6c0();
};

// @baa 0x0191f6c0
ushort C_0191f6c0::sub_0191f6c0(void)
{
    int param_1 = (int)this;

  return *(ushort *)(param_1 + 0x10) >> 2 & 0xc0;
}

struct C_0191f6d0 {
    byte sub_0191f6d0();
};

// @baa 0x0191f6d0
byte C_0191f6d0::sub_0191f6d0(void)
{
    int param_1 = (int)this;

  return *(byte *)(param_1 + 0x10) & 0x30;
}

struct C_0191f6e0 { float sub_0191f6e0(void); };

// @baa 0x0191f6e0
float C_0191f6e0::sub_0191f6e0(void) { return *(float*)((char*)this + 20); }

struct C_0191f7c0 { char* sub_0191f7c0(void); };

// @baa 0x0191f7c0
char* C_0191f7c0::sub_0191f7c0(void) { return (char*)this + 8; }

struct C_0191f7d0 {
    int sub_0191f7d0(int);
};

// @baa 0x0191f7d0
int C_0191f7d0::sub_0191f7d0(int param_2)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 4) - param_2) + 8 + param_1;
}

struct C_0191f7e0 { char* sub_0191f7e0(void); };

// @baa 0x0191f7e0
char* C_0191f7e0::sub_0191f7e0(void) { return (char*)this + 8; }

struct C_0191f7f0 {
    int sub_0191f7f0(int);
};

// @baa 0x0191f7f0
int C_0191f7f0::sub_0191f7f0(int param_2)
{
    int param_1 = (int)this;

  return param_2 - *(int *)(param_1 + 4);
}

// @baa 0x0191f800
int sub_0191f800(int param_1, int param_2)
{
  return param_2 - param_1;
}

// @baa 0x0191f810
int sub_0191f810(int param_1, ushort param_2)
{
  return param_1 - (uint)param_2;
}

// @baa 0x0191f820
bool sub_0191f820(int param_1, int param_2)
{
  return (param_2 - param_1) + -8 < *(int *)(param_1 + 4);
}

struct C_0191f8c0 { int sub_0191f8c0(void); };

// @baa 0x0191f8c0
int C_0191f8c0::sub_0191f8c0(void) { return *(int*)((char*)this + 8); }

struct C_0191f8d0 {
    bool sub_0191f8d0();
};

// @baa 0x0191f8d0
bool C_0191f8d0::sub_0191f8d0(void)
{
    int param_1 = (int)this;

  return (**(byte **)(param_1 + 4) & 7) == 0;
}

struct C_0191f920 {
    bool sub_0191f920();
};

// @baa 0x0191f920
bool C_0191f920::sub_0191f920(void)
{
    int param_1 = (int)this;

  return *(char *)(param_1 + 0x20) == '\x02';
}

struct C_0191f930 {
    bool sub_0191f930();
};

// @baa 0x0191f930
bool C_0191f930::sub_0191f930(void)
{
    int param_1 = (int)this;

  return *(char *)(param_1 + 0x20) == '\x01';
}

struct C_0191f940 {
    void sub_0191f940(undefined4 *, undefined4 *, undefined4 *);
};

// @baa 0x0191f940
void C_0191f940::sub_0191f940(undefined4 * param_2, undefined4 * param_3, undefined4 * param_4)
{
    int param_1 = (int)this;

  *param_2 = *(undefined4 *)(param_1 + 0x14);
  *param_3 = *(undefined4 *)(param_1 + 0x18);
  *param_4 = *(undefined4 *)(param_1 + 0x1c);
  return;
}

// @baa 0x0191f960
void __stdcall sub_0191f960(int a0) {  }

struct C_0191f970 { void sub_0191f970(int a0); };

// @baa 0x0191f970
void C_0191f970::sub_0191f970(int a0) { *(int*)((char*)this + 8) = a0; }

struct C_0191f980 {
    void sub_0191f980();
};

// @baa 0x0191f980
void C_0191f980::sub_0191f980(void)
{
    int param_1 = (int)this;

  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined1 *)(param_1 + 0x35) = 0;
  return;
}

struct C_0191f9e0 {
    bool sub_0191f9e0();
};

// @baa 0x0191f9e0
bool C_0191f9e0::sub_0191f9e0(void)
{
    int param_1 = (int)this;

  return *(char *)(param_1 + 0x10) == '\0';
}

struct C_0191f9f0 {
    byte sub_0191f9f0();
};

// @baa 0x0191f9f0
byte C_0191f9f0::sub_0191f9f0(void)
{
    int param_1 = (int)this;

  return *(byte *)(param_1 + 0x2c) >> 3 & 1;
}

struct C_0191fa00 {
    byte sub_0191fa00();
};

// @baa 0x0191fa00
byte C_0191fa00::sub_0191fa00(void)
{
    int param_1 = (int)this;

  return *(byte *)(param_1 + 0x2c) & 1;
}

// @baa 0x0191fa20
int sub_0191fa20(void) { return 0; }

struct C_0191fa30 { int sub_0191fa30(void); };

// @baa 0x0191fa30
int C_0191fa30::sub_0191fa30(void) { return *(int*)((char*)this + 48); }

struct C_0191fa40 { char* sub_0191fa40(void); };

// @baa 0x0191fa40
char* C_0191fa40::sub_0191fa40(void) { return (char*)this + 60; }

struct C_0191fbc0 { int sub_0191fbc0(void); };

// @baa 0x0191fbc0
int C_0191fbc0::sub_0191fbc0(void) { return *(int*)((char*)this + 12); }

struct C_0191fbd0 { int sub_0191fbd0(void); };

// @baa 0x0191fbd0
int C_0191fbd0::sub_0191fbd0(void) { return *(int*)((char*)this + 16); }

struct C_0191fbe0 { int sub_0191fbe0(void); };

// @baa 0x0191fbe0
int C_0191fbe0::sub_0191fbe0(void) { return *(int*)((char*)this + 20); }

struct C_0191fbf0 { float sub_0191fbf0(void); };

// @baa 0x0191fbf0
float C_0191fbf0::sub_0191fbf0(void) { return *(float*)((char*)this + 0); }

struct C_0191fc00 {
    void sub_0191fc00(undefined1);
};

// @baa 0x0191fc00
void C_0191fc00::sub_0191fc00(undefined1 param_2)
{
    int param_1 = (int)this;

  *(undefined1 *)(param_1 + 0x4c) = param_2;
  return;
}

struct C_0191fc10 { void sub_0191fc10(int a0); };

// @baa 0x0191fc10
void C_0191fc10::sub_0191fc10(int a0) { *(int*)((char*)this + 12) = a0; }

struct C_0191fc20 { void sub_0191fc20(int a0); };

// @baa 0x0191fc20
void C_0191fc20::sub_0191fc20(int a0) { *(int*)((char*)this + 16) = a0; }

struct C_0191fc60 { float sub_0191fc60(void); };

// @baa 0x0191fc60
float C_0191fc60::sub_0191fc60(void) { return *(float*)((char*)this + 32); }

struct C_0191fc70 { float sub_0191fc70(void); };

// @baa 0x0191fc70
float C_0191fc70::sub_0191fc70(void) { return *(float*)((char*)this + 8); }

struct C_0191fc80 {
    undefined1 sub_0191fc80();
};

// @baa 0x0191fc80
undefined1 C_0191fc80::sub_0191fc80(void)
{
    int param_1 = (int)this;

  return *(undefined1 *)(param_1 + 0x15);
}

struct C_0191fc90 {
    void sub_0191fc90(undefined1);
};

// @baa 0x0191fc90
void C_0191fc90::sub_0191fc90(undefined1 param_2)
{
    int param_1 = (int)this;

  *(undefined1 *)(param_1 + 0x17) = param_2;
  return;
}

struct C_0191fca0 {
    undefined1 sub_0191fca0();
};

// @baa 0x0191fca0
undefined1 C_0191fca0::sub_0191fca0(void)
{
    int param_1 = (int)this;

  return *(undefined1 *)(param_1 + 0x17);
}

struct C_0191fcb0 {
    undefined1 sub_0191fcb0();
};

// @baa 0x0191fcb0
undefined1 C_0191fcb0::sub_0191fcb0(void)
{
    int param_1 = (int)this;

  return *(undefined1 *)(param_1 + 0x16);
}

struct C_0191fcc0 {
    undefined1 sub_0191fcc0();
};

// @baa 0x0191fcc0
undefined1 C_0191fcc0::sub_0191fcc0(void)
{
    int param_1 = (int)this;

  return *(undefined1 *)(param_1 + 0x18);
}

struct C_0191fcd0 { int sub_0191fcd0(void); };

// @baa 0x0191fcd0
int C_0191fcd0::sub_0191fcd0(void) { return *(int*)((char*)this + 92); }

struct C_0191fce0 { float sub_0191fce0(void); };

// @baa 0x0191fce0
float C_0191fce0::sub_0191fce0(void) { return *(float*)((char*)this + 12); }

struct C_0191fd30 {
    undefined2 sub_0191fd30();
};

// @baa 0x0191fd30
undefined2 C_0191fd30::sub_0191fd30(void)
{
    int param_1 = (int)this;

  return *(undefined2 *)(param_1 + 0x68);
}

struct C_0191fd40 {
    byte sub_0191fd40();
};

// @baa 0x0191fd40
byte C_0191fd40::sub_0191fd40(void)
{
    int param_1 = (int)this;

  return *(byte *)(param_1 + 0x6a) & 1;
}

struct C_0191fd50 {
    byte sub_0191fd50();
};

// @baa 0x0191fd50
byte C_0191fd50::sub_0191fd50(void)
{
    int param_1 = (int)this;

  return *(byte *)(param_1 + 0x6a) >> 3 & 1;
}

struct C_0191fd60 { void sub_0191fd60(int a0); };

// @baa 0x0191fd60
void C_0191fd60::sub_0191fd60(int a0) { *(int*)((char*)this + 784) = a0; }

struct C_0191fd70 {
    void sub_0191fd70();
};

// @baa 0x0191fd70
void C_0191fd70::sub_0191fd70(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 0x310) == 0) {
    *(undefined1 *)(param_1 + 0x45) = 0;
    return;
  }
  *(undefined1 *)(*(int *)(param_1 + 0x310) + 0x15) = 0;
  return;
}
