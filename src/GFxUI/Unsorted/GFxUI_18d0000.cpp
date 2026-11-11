// GFxUI_18d0000.cpp (part 1 of 3): 9 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    void sub_018db720(undefined4);
};

int sub_018da9a0(...);
// @baa 0x018db720
void C::sub_018db720(undefined4 param_2)
{
    float * param_1 = (float *)this;

  sub_018da9a0(param_2,0x200,
               "    *         +\n| %4.4f %4.4f|\n| %4.4f %4.4f|\n| %4.4f %4.4f|\n| %4.4f %4.4f|\n",
               (double)*param_1,(double)param_1[1],(double)param_1[2],(double)param_1[3],
               (double)param_1[4],(double)param_1[5],(double)param_1[6],(double)param_1[7]);
  return;
}

struct C_018dbb20 {
    int sub_018dbb20();
};

// @baa 0x018dbb20
int C_018dbb20::sub_018dbb20(void)
{
    int * param_1 = (int *)this;

  return *param_1 + 0xc;
}

struct C_018dbb40 {
    uint sub_018dbb40();
};

// @baa 0x018dbb40
uint C_018dbb40::sub_018dbb40(void)
{
    uint * param_1 = (uint *)this;

  return *param_1 & 0xfff0000;
}

struct C_018dbc40 { void sub_018dbc40(int a0); };

// @baa 0x018dbc40
void C_018dbc40::sub_018dbc40(int a0) { *(int*)((char*)this + 8) = a0; }

void sub_018dc490();
// @baa 0x018dcc20
void sub_018dcc20(void) { sub_018dc490(); }

void sub_018dc5a0();
// @baa 0x018dcc90
void sub_018dcc90(void) { sub_018dc5a0(); }

void sub_018dc6e0();
// @baa 0x018dcd40
void sub_018dcd40(void) { sub_018dc6e0(); }

void sub_018dca60();
// @baa 0x018dce20
void sub_018dce20(void) { sub_018dca60(); }

struct C_018df1a0 {
    bool sub_018df1a0();
};

// @baa 0x018df1a0
bool C_018df1a0::sub_018df1a0(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 0x2c) != 0;
}
