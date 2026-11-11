// GFxUI_18e0000.cpp (part 2 of 2): 10 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    int sub_018e0420();
};

// @baa 0x018e0420
int C::sub_018e0420(void)
{
    int param_1 = (int)this;

  if (*(int *)(param_1 + 0xc) != 0) {
    return *(int *)(param_1 + 0xc) + 0x10;
  }
  return 0;
}

struct C_018e5390 { C_018e5390* sub_018e5390(void); };

// @baa 0x018e5390
C_018e5390* C_018e5390::sub_018e5390(void) { *(int*)((char*)this + 0) = 0; return this; }

// @baa 0x018e5440
void __stdcall sub_018e5440(int a0) {  }

struct C_018e5470 { int sub_018e5470(void); };

// @baa 0x018e5470
int C_018e5470::sub_018e5470(void) { return *(int*)((char*)this + 0); }

void sub_018e5ab0();
// @baa 0x018e5b90
void sub_018e5b90(void) { sub_018e5ab0(); }

struct C_018e5dc0 { C_018e5dc0* sub_018e5dc0(void); };

// @baa 0x018e5dc0
C_018e5dc0* C_018e5dc0::sub_018e5dc0(void) { *(int*)((char*)this + 0) = 0; return this; }

// @baa 0x018e5dd0
void sub_018e5dd0(void) { sub_018e5ab0(); }

// @baa 0x018e5fc0
void sub_018e5fc0(void) { sub_018e5ab0(); }

// @baa 0x018e5fd0
void sub_018e5fd0(void) { sub_018e5ab0(); }

struct C_018e6220 { C_018e6220* sub_018e6220(void); };

// @baa 0x018e6220
C_018e6220* C_018e6220::sub_018e6220(void) { *(int*)((char*)this + 0) = 0; return this; }
