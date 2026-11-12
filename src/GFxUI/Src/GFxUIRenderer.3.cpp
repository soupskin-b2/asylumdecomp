// GFxUIRenderer.cpp (part 3 of 3): 11 functions
// Placed here by: neighbours 2.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    void sub_00e567e0(int);
};

int sub_0053df70(...);
// @baa 0x00e567e0
void C::sub_00e567e0(int param_2)
{
    int * param_1 = (int *)this;

  int iVar1;
  
  param_1[1] = 0;
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if ((*param_1 != 0) || (param_2 != 0)) {
      iVar1 = sub_0053df70(*param_1,param_2 * 4,8);
      *param_1 = iVar1;
    }
  }
  return;
}

struct C_00e568a0 {
    void sub_00e568a0(int);
};

// @baa 0x00e568a0
void C_00e568a0::sub_00e568a0(int param_2)
{
    int * param_1 = (int *)this;

  int iVar1;
  
  param_1[1] = 0;
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if ((*param_1 != 0) || (param_2 != 0)) {
      iVar1 = sub_0053df70(*param_1,param_2 * 4,8);
      *param_1 = iVar1;
    }
  }
  return;
}

// GFxUIRenderer.cpp: releases the texture only when one is held (the release itself checks NULL != pTexture).
struct FGFxRenderTexture
{
    char  Header[0xc];
    void* pTexture;

    void sub_00e56530();
    void sub_00e565a0();
};

// @baa 0x00e565a0
void FGFxRenderTexture::sub_00e565a0()
{
    if (pTexture)
        sub_00e56530();
}

struct Sub
{
    void sub_00e4b290();
};

struct C_00e56400
{
    INT pad_00;
    Sub* Object;

    INT sub_00e56400();
};

// @baa 0x00e56400
INT C_00e56400::sub_00e56400()
{
    Object->sub_00e4b290();
    return 8;
}

struct Sub_00e5dd90
{
    void sub_00e5c430();
};

struct C_00e5dd90
{
    INT pad_00;
    Sub_00e5dd90* Object;

    INT sub_00e5dd90();
};

// @baa 0x00e5dd90
INT C_00e5dd90::sub_00e5dd90()
{
    Object->sub_00e5c430();
    return 8;
}

extern "C" __declspec(dllimport) long __stdcall InterlockedExchangeAdd(long volatile* Addend, long Value);
struct C_00e47280
{
    long Counter;

    INT sub_00e47280(INT Value);
};

// @baa 0x00e47280
INT C_00e47280::sub_00e47280(INT Value)
{
    return InterlockedExchangeAdd(&Counter, Value);
}

struct C_00e56690
{
    long Counter;

    INT sub_00e56690(INT Value);
};

// @baa 0x00e56690
INT C_00e56690::sub_00e56690(INT Value)
{
    return InterlockedExchangeAdd(&Counter, Value);
}

struct C_00e57950
{
    long Counter;

    INT sub_00e57950(INT Value);
};

// @baa 0x00e57950
INT C_00e57950::sub_00e57950(INT Value)
{
    return InterlockedExchangeAdd(&Counter, Value);
}

// 00e48220: 3-INT copy, returns *this
struct C_00e48220 {
    INT First;
    INT Second;
    INT Third;
    C_00e48220& sub_00e48220(C_00e48220& Source);
};

// @baa 0x00e48220
C_00e48220& C_00e48220::sub_00e48220(C_00e48220& Source)
{
    First = Source.First;
    Second = Source.Second;
    Third = Source.Third;
    return *this;
}

static void C_00e48220Caller(C_00e48220& Target, C_00e48220& Source)
{
    Target.sub_00e48220(Source);
}

extern int* g_026b0d94;
struct C_00e47dd0 {
    void sub_00e47dd0(void);
};

// @baa 0x00e47dd0
// @baa 0x00e47dd0
void C_00e47dd0::sub_00e47dd0(void)
{
    int thisPtr = (int)this;

    if (*(int*)(thisPtr + 4)) {
        (*(void(__stdcall**)(int))(*g_026b0d94 + 0x23c))(*(int*)(thisPtr + 4));
    }
    return;
}

// This member forwards its display object to the shared GFx renderer table.
// The call at table slot 0x23c is a stdcall method taking the display object.
struct GFxUIMovie_00e479d0
{
    void *VFPtr;
    void sub_00e479d0();
    int DisplayObject;
};

// @baa 0x00e479d0
void GFxUIMovie_00e479d0::sub_00e479d0()
{
    if (DisplayObject)
    {
        (*(void(__stdcall**)(int))(g_026b0d94[0] + 0x23c))(DisplayObject);
    }
}
