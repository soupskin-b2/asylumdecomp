// GFx_1940000.cpp (part 3 of 3): 3 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

int __stdcall sub_018d7150(int);
// @baa 0x01949610
void sub_01949610(undefined4 param_1)
{
  sub_018d7150(param_1);
  return;
}

int __stdcall sub_018d7170(int);
// @baa 0x01949620
void sub_01949620(undefined4 param_1)
{
  sub_018d7170(param_1);
  return;
}

// GFx (Scaleform, class unknown): reads a value of the object the holder points to.
// `volatile` on the method reproduces the original's reuse of ecx for the inner pointer
// (mov ecx, [ecx+1c]; mov eax, [ecx+94]); no plain form gives it under this profile.
struct GFxState
{
    char Header[0x94];
    int  Value;
};

struct GFxStateHolder
{
    char      Header[0x1c];
    GFxState* pState;

    int sub_0194a3a0() volatile;
};

// @baa 0x0194a3a0
int GFxStateHolder::sub_0194a3a0() volatile
{
    GFxState* State = pState;
    return State->Value;
}
