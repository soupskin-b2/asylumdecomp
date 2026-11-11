// UnrealEd_04a0000.cpp: 18 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct M_004a0560 { void sub_00423d80(); };

struct C { char pad[20]; M_004a0560 m; void sub_004a0560(); };

// @baa 0x004a0560
void C::sub_004a0560() { m.sub_00423d80(); }

struct C_004a0570 { int a, b, c; C_004a0570(); };

// @baa 0x004a0570
C_004a0570::C_004a0570() : a(0), b(0), c(0) {}

void sub_00424350();
// @baa 0x004a0580
void sub_004a0580(void) { sub_00424350(); }

struct C_004a4b50 {
    void sub_004a4b50();
};

// @baa 0x004a4b50
void C_004a4b50::sub_004a4b50(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}

struct C_004a4b60 {
    void sub_004a4b60();
};

int sub_0049d900(...);
int sub_01ab3290(...);
// @baa 0x004a4b60
void C_004a4b60::sub_004a4b60(void)
{
    int * param_1 = (int *)this;

  sub_0049d900(*param_1,param_1[2] * 0x10 + *param_1);
  sub_01ab3290(*param_1,param_1[1] << 4);
  *param_1 = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  return;
}

struct M_004a4c40 { void sub_004246d0(); };

struct C_004a4c40 { char pad[24712]; M_004a4c40 m; void sub_004a4c40(); };

// @baa 0x004a4c40
void C_004a4c40::sub_004a4c40() { m.sub_004246d0(); }

struct C_004a4d50 {
    undefined4 sub_004a4d50(byte);
};

int sub_0049fdb0(void);
// @baa 0x004a4d50
undefined4 C_004a4d50::sub_004a4d50(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0049fdb0();
  if ((param_2 & 1) != 0) {
    sub_01ab3290(param_1,0xe4);
  }
  return param_1;
}

struct C_004a50a0 {
    undefined4 sub_004a50a0();
};

int sub_004a2490(...);
int sub_004a2770(...);
// @baa 0x004a50a0
undefined4 C_004a50a0::sub_004a50a0(void)
{
    int param_1 = (int)this;

  char cVar1;
  
  if ((*(char *)(param_1 + 0x14) != '\0') && (cVar1 = sub_004a2770(param_1 + 0x18), cVar1 != '\0'))
  {
    return 1;
  }
  if ((*(char *)(param_1 + 0x15) != '\0') && (cVar1 = sub_004a2490(param_1 + 0x18), cVar1 != '\0'))
  {
    return 1;
  }
  return 0;
}

struct C_004a5aa0 {
    undefined4 sub_004a5aa0(byte);
};

int sub_004a04d0(void);
// @baa 0x004a5aa0
undefined4 C_004a5aa0::sub_004a5aa0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_004a04d0();
  if ((param_2 & 1) != 0) {
    sub_01ab3290(param_1,0x2c);
  }
  return param_1;
}

void sub_004a46d0();
// @baa 0x004a6750
void sub_004a6750(void) { sub_004a46d0(); }

// @baa 0x004a6760
void sub_004a6760(void) { sub_004a46d0(); }

struct C_004a6fa0 {
    undefined4 sub_004a6fa0(byte);
};

int sub_004a0680(void);
// @baa 0x004a6fa0
undefined4 C_004a6fa0::sub_004a6fa0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_004a0680();
  if ((param_2 & 1) != 0) {
    sub_01ab3290(param_1,0x98);
  }
  return param_1;
}

struct C_004a9100 {
    undefined4 sub_004a9100(byte);
};

int sub_004a0b20(void);
// @baa 0x004a9100
undefined4 C_004a9100::sub_004a9100(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_004a0b20();
  if ((param_2 & 1) != 0) {
    sub_01ab3290(param_1,0x108);
  }
  return param_1;
}

struct C_004ab3e0 {
    undefined4 sub_004ab3e0(byte);
};

int sub_004a0eb0(void);
// @baa 0x004ab3e0
undefined4 C_004ab3e0::sub_004ab3e0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_004a0eb0();
  if ((param_2 & 1) != 0) {
    sub_01ab3290(param_1,0x60);
  }
  return param_1;
}

extern void __cdecl sub_01ab3290(void* Data, unsigned int Capacity);
struct FOptionString {
    char* Data; // 0x00
    unsigned int Capacity; // 0x04
    unsigned int Length; // 0x08
    void sub_00414280(const char* Text, int Length);
    FOptionString(const char* Text) { sub_00414280(Text, -1); }
    ~FOptionString() { sub_01ab3290(Data, Capacity); Data = 0; Length = 0; Capacity = 0; }
};

struct FOption {
    FOptionString ShortName; // 0x00
    FOptionString LongName; // 0x0c
    int Type; // 0x18
    FOption(const FOptionString& Short, const FOptionString& Long, int Kind);
    ~FOption();
};

struct FOptionList {
    FOption* Data; // 0x00
    unsigned int Capacity; // 0x04
    unsigned int Count; // 0x08
    FOptionList() : Data(0), Capacity(0), Count(0) {}
    ~FOptionList();
    void sub_0049f8a0(const FOption& Option);
};

// @baa 0x004ab400
FOptionList sub_004ab400() {
    FOptionList Options;
    Options.sub_0049f8a0(FOption(FOptionString("-c"), FOptionString("-create"), 0));
    Options.sub_0049f8a0(FOption(FOptionString("-r"), FOptionString("-remove"), 0));
    Options.sub_0049f8a0(FOption(FOptionString("-s"), FOptionString("-set"), 0));
    Options.sub_0049f8a0(FOption(FOptionString("-n"), FOptionString("-norefresh"), 0));
    Options.sub_0049f8a0(FOption(FOptionString("-t"), FOptionString("-track"), 5));
    Options.sub_0049f8a0(FOption(FOptionString("-p"), FOptionString("-phoneme"), 5));
    Options.sub_0049f8a0(FOption(FOptionString("-v"), FOptionString("-value"), 1));
    return Options;
}

struct C_004ab9e0 {
    undefined4 sub_004ab9e0(byte);
};

int sub_004a1020(void);
// @baa 0x004ab9e0
undefined4 C_004ab9e0::sub_004ab9e0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_004a1020();
  if ((param_2 & 1) != 0) {
    sub_01ab3290(param_1,0x4c);
  }
  return param_1;
}

struct C_004adab0 {
    undefined4 sub_004adab0(byte);
};

int sub_004a1220(void);
// @baa 0x004adab0
undefined4 C_004adab0::sub_004adab0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_004a1220();
  if ((param_2 & 1) != 0) {
    sub_01ab3290(param_1,0xb4);
  }
  return param_1;
}

struct C_004ae7b0 {
    undefined4 sub_004ae7b0(byte);
};

int sub_004a1880(void);
// @baa 0x004ae7b0
undefined4 C_004ae7b0::sub_004ae7b0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_004a1880();
  if ((param_2 & 1) != 0) {
    sub_01ab3290(param_1,0x3c);
  }
  return param_1;
}
