// GFx_1920000.cpp (part 3 of 5): 13 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

void __stdcall sub_018d7150(int Index);
// @baa 0x01921cb0
void sub_01921cb0(int Value)
{
    sub_018d7150(Value * 4);
}

void __stdcall sub_018d7170(int Obj);
// @baa 0x01921cd0
void __cdecl sub_01921cd0(int Obj)
{
    if (Obj)
        sub_018d7170(Obj);
}

// @baa 0x01921dd0
void sub_01921dd0(int Value)
{
    sub_018d7150(Value * 8);
}

// @baa 0x01921df0
void sub_01921df0(int Value)
{
    sub_018d7150(Value * 4);
}

struct S018d4a70 {
    int Data;
    int Count;
    int SizeFlags;
    void sub_01923ec0(int NewNum);
    void sub_01926da0();
};

void __stdcall sub_018d7170(int A);
// @baa 0x01926da0
void S018d4a70::sub_01926da0()
{
    S018d4a70* Self = this;
    sub_01923ec0(0);
    if (Self->Data)
        sub_018d7170(Self->Data);
}

struct S018d4a70_01926dc0 {
    int Data;
    int Count;
    int SizeFlags;
    void sub_01923f90(int NewNum);
    void sub_01926dc0();
};

// @baa 0x01926dc0
void S018d4a70_01926dc0::sub_01926dc0()
{
    S018d4a70_01926dc0* Self = this;
    sub_01923f90(0);
    if (Self->Data)
        sub_018d7170(Self->Data);
}

struct S018d4a70_01928f20 {
    int Data;
    int Count;
    int SizeFlags;
    void sub_01923ec0(int NewNum);
    void sub_01928f20();
};

// @baa 0x01928f20
void S018d4a70_01928f20::sub_01928f20()
{
    S018d4a70_01928f20* Self = this;
    sub_01923ec0(0);
    if (Self->Data)
        sub_018d7170(Self->Data);
}

struct S018d4a70_01928f50 {
    int Data;
    int Count;
    int SizeFlags;
    void sub_01923f90(int NewNum);
    void sub_01928f50();
};

// @baa 0x01928f50
void S018d4a70_01928f50::sub_01928f50()
{
    S018d4a70_01928f50* Self = this;
    sub_01923f90(0);
    if (Self->Data)
        sub_018d7170(Self->Data);
}

struct C {
    void sub_0192c5d0(uint, undefined4 *);
    int sub_0192c060(int);
};

extern "C" __declspec(dllimport) void *__cdecl memmove(void *, const void *, unsigned int);
// @baa 0x0192c5d0
void C::sub_0192c5d0(uint param_2, undefined4 * param_3)
{
    int * param_1 = (int *)this;
  void *_Src;
  undefined4 *puVar1;
  ((C *)(this))->sub_0192c060(param_1[1] + 1);
  if (param_2 < param_1[1] - 1U) {
    _Src = (void *)(*param_1 + param_2 * 4);
    memmove((void *)((int)_Src + 4),_Src,(param_1[1] - param_2) * 4 - 4);
  }
  puVar1 = (undefined4 *)(*param_1 + param_2 * 4);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *param_3;
  }
  return;
}

struct C_0192f790 {
    void sub_0192f790(int);
    int sub_0192f3f0(int);
};

// @baa 0x0192f790
void C_0192f790::sub_0192f790(int param_2)
{
    int * param_1 = (int *)this;
  void *_Dst;
  if (param_1[1] == 1) {
    ((C_0192f790 *)(this))->sub_0192f3f0(0);
    return;
  }
  _Dst = (void *)(*param_1 + param_2 * 0x28);
  memmove(_Dst,(void *)((int)_Dst + 0x28),((param_1[1] - param_2) + -1) * 0x28);
  param_1[1] = param_1[1] + -1;
  return;
}

struct S018d4a70_0192f7e0 {
    int Data;
    int Count;
    int SizeFlags;
    void sub_0192f3f0(int NewNum);
    void sub_0192f7e0();
};

// @baa 0x0192f7e0
void S018d4a70_0192f7e0::sub_0192f7e0()
{
    S018d4a70_0192f7e0* Self = this;
    sub_0192f3f0(0);
    if (Self->Data)
        sub_018d7170(Self->Data);
}

struct S018d4a70_0192f8a0 {
    int Data;
    int Count;
    int SizeFlags;
    void sub_0192f3f0(int NewNum);
    void sub_0192f8a0();
};

// @baa 0x0192f8a0
void S018d4a70_0192f8a0::sub_0192f8a0()
{
    S018d4a70_0192f8a0* Self = this;
    sub_0192f3f0(0);
    if (Self->Data)
        sub_018d7170(Self->Data);
}

// @baa 0x0192fa90
void sub_0192fa90(int Value)
{
    sub_018d7150(Value * 4);
}
