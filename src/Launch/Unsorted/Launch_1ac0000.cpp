// Launch_1ac0000.cpp (part 1 of 3): 22 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    float10 sub_01acfa60(int);
};

// @baa 0x01acfa60
float10 C::sub_01acfa60(int param_2)
{
    int param_1 = (int)this;

  return (float10)*(float *)(*(int *)(param_1 + 0x30) + 4 + param_2 * 8);
}

// @baa 0x01acfb30
void __stdcall sub_01acfb30(int a0) {  }

struct C_01acfb40 { char* sub_01acfb40(void); };

// @baa 0x01acfb40
char* C_01acfb40::sub_01acfb40(void) { return (char*)this + 36; }

// @baa 0x01acfb50
int sub_01acfb50(void) { return 7; }

struct C_01acfb60 { int sub_01acfb60(void); };

// @baa 0x01acfb60
int C_01acfb60::sub_01acfb60(void) { return *(int*)((char*)this + 56); }

struct C_01acfb90 {
    float10 sub_01acfb90(int);
};

// @baa 0x01acfb90
float10 C_01acfb90::sub_01acfb90(int param_2)
{
    int param_1 = (int)this;

  return (float10)*(float *)(*(int *)(param_1 + 0x30) + 4 + param_2 * 8);
}

// @baa 0x01acfc60
void __stdcall sub_01acfc60(int a0) {  }

struct C_01acfc70 { char* sub_01acfc70(void); };

// @baa 0x01acfc70
char* C_01acfc70::sub_01acfc70(void) { return (char*)this + 36; }

// @baa 0x01acfc80
int sub_01acfc80(void) { return 8; }

struct C_01acfc90 { int sub_01acfc90(void); };

// @baa 0x01acfc90
int C_01acfc90::sub_01acfc90(void) { return *(int*)((char*)this + 56); }

struct C_01acfcc0 {
    float10 sub_01acfcc0(int);
};

// @baa 0x01acfcc0
float10 C_01acfcc0::sub_01acfcc0(int param_2)
{
    int param_1 = (int)this;

  return (float10)*(float *)(*(int *)(param_1 + 0x30) + 4 + param_2 * 8);
}

// @baa 0x01acfd90
void __stdcall sub_01acfd90(int a0) {  }

struct C_01acfda0 { char* sub_01acfda0(void); };

// @baa 0x01acfda0
char* C_01acfda0::sub_01acfda0(void) { return (char*)this + 36; }

// @baa 0x01acfdb0
int sub_01acfdb0(void) { return 9; }

struct C_01acfdc0 { int sub_01acfdc0(void); };

// @baa 0x01acfdc0
int C_01acfdc0::sub_01acfdc0(void) { return *(int*)((char*)this + 56); }

struct C_01acfdf0 {
    float10 sub_01acfdf0(int);
};

// @baa 0x01acfdf0
float10 C_01acfdf0::sub_01acfdf0(int param_2)
{
    int param_1 = (int)this;

  return (float10)*(float *)(*(int *)(param_1 + 0x30) + 4 + param_2 * 8);
}

// @baa 0x01acfec0
void __stdcall sub_01acfec0(int a0) {  }

struct C_01acfed0 { char* sub_01acfed0(void); };

// @baa 0x01acfed0
char* C_01acfed0::sub_01acfed0(void) { return (char*)this + 36; }

// @baa 0x01acfee0
int sub_01acfee0(void) { return 10; }

struct C_01acfef0 { int sub_01acfef0(void); };

// @baa 0x01acfef0
int C_01acfef0::sub_01acfef0(void) { return *(int*)((char*)this + 56); }

struct C_01acff20 {
    float10 sub_01acff20(int);
};

// @baa 0x01acff20
float10 C_01acff20::sub_01acff20(int param_2)
{
    int param_1 = (int)this;

  return (float10)*(float *)(*(int *)(param_1 + 0x30) + 4 + param_2 * 8);
}

int sub_01ab3290(...);
// @baa 0x01acffb0
void sub_01acffb0(undefined4 * param_1)
{
  if (param_1 != (undefined4 *)0x0) {
    sub_01ab3290(*param_1,param_1[1] * 4);
    *param_1 = 0;
    param_1[2] = 0;
    param_1[1] = 0;
  }
  return;
}
