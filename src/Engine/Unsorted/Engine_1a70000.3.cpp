// Engine_1a70000.cpp (part 3 of 3): 8 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

extern "C" __declspec(dllimport) int memmove_s(...);
// @baa 0x01a70bc0
void * sub_01a70bc0(void * param_1, int param_2, int param_3)
{
  int iVar1;
  void *_Dst;
  iVar1 = param_2 - (int)param_1 >> 2;
  _Dst = (void *)(param_3 + iVar1 * -4);
  if (0 < iVar1) {
    memmove_s(_Dst,iVar1 * 4,param_1,iVar1 * 4);
  }
  return _Dst;
}

// @baa 0x01a79a40
void * sub_01a79a40(void * param_1, int param_2, int param_3)
{
  int iVar1;
  void *_Dst;
  iVar1 = param_2 - (int)param_1 >> 2;
  _Dst = (void *)(param_3 + iVar1 * -4);
  if (0 < iVar1) {
    memmove_s(_Dst,iVar1 * 4,param_1,iVar1 * 4);
  }
  return _Dst;
}

struct Sub
{
    void sub_01a76240();
};

// @baa 0x01a79b00
void __stdcall sub_01a79b00(Sub* Object)
{
    Object->sub_01a76240();
}

struct Object
{
    INT Value_00;
    INT Value_04;
    INT Value_08;
};

// @baa 0x01a79ae0
void __stdcall sub_01a79ae0(Object* Target)
{
    Target->Value_08 = 0;
}

struct C
{
    char pad_0[0x4];
    INT Value_4;
    INT Value_8;
    INT Value_c;

    C* sub_01a79e60();
};

// @baa 0x01a79e60
C* C::sub_01a79e60()
{
    Value_4 = 0;
    Value_8 = 0;
    Value_c = 0;
    return this;
}

struct C_01a79e70
{
    char pad_0[0x4];
    INT Value_4;
    INT Value_8;
    INT Value_c;

    C_01a79e70* sub_01a79e70();
};

// @baa 0x01a79e70
C_01a79e70* C_01a79e70::sub_01a79e70()
{
    Value_4 = 0;
    Value_8 = 0;
    Value_c = 0;
    return this;
}

struct C_01a79e80
{
    char pad_0[0x4];
    INT Value_4;
    INT Value_8;
    INT Value_c;

    C_01a79e80* sub_01a79e80();
};

// @baa 0x01a79e80
C_01a79e80* C_01a79e80::sub_01a79e80()
{
    Value_4 = 0;
    Value_8 = 0;
    Value_c = 0;
    return this;
}

struct C_01a79e90
{
    char pad_0[0x4];
    INT Value_4;
    INT Value_8;
    INT Value_c;

    C_01a79e90* sub_01a79e90();
};

// @baa 0x01a79e90
C_01a79e90* C_01a79e90::sub_01a79e90()
{
    Value_4 = 0;
    Value_8 = 0;
    Value_c = 0;
    return this;
}
