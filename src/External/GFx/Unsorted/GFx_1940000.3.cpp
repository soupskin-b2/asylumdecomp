// GFx_1940000.cpp (part 3 of 3): 16 functions
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

// @baa 0x0194c4e0
INT __stdcall sub_0194c4e0(INT* Object)
{
    return *(INT*)(*Object + 0x10);
}

// @baa 0x0194c500
INT __stdcall sub_0194c500(INT* Object)
{
    return *(INT*)(*Object + 0x10);
}

// @baa 0x0194c5e0
INT __stdcall sub_0194c5e0(INT* Object)
{
    return *(INT*)(*Object + 0x10);
}

// @baa 0x0194c5f0
INT __stdcall sub_0194c5f0(INT* Object)
{
    return *(INT*)(*Object + 0x10);
}

extern "C" __declspec(dllimport) unsigned int _controlfp_s(unsigned int* pValueOut,
                                                           unsigned int uintNewValue,
                                                           unsigned int uintEffectiveMask);
struct C
{
    unsigned int FPMode;

    void sub_01947c50();
};

// @baa 0x01947c50
void C::sub_01947c50()
{
    unsigned int Out;

    _controlfp_s(&Out, FPMode, 0x30000);
}

// A method of GFxMovieRoot: it stores an argument into a member at offset
// 0x80, then tail-calls the virtual at vtable offset 0x50 (slot 20) with the
// address of the member at offset 0x38.
struct GFxMovieRoot
{
    virtual void f00() {}
    virtual void f01() {}
    virtual void f02() {}
    virtual void f03() {}
    virtual void f04() {}
    virtual void f05() {}
    virtual void f06() {}
    virtual void f07() {}
    virtual void f08() {}
    virtual void f09() {}
    virtual void f10() {}
    virtual void f11() {}
    virtual void f12() {}
    virtual void f13() {}
    virtual void f14() {}
    virtual void f15() {}
    virtual void f16() {}
    virtual void f17() {}
    virtual void f18() {}
    virtual void f19() {}
    virtual void Call20(void* arg) {}

    void sub_01947f80(void* arg);

    char _04[0x34];
    void* Sub;      // 0x38
    char _3c[0x44];
    void* Stored;   // 0x80
};

// @baa 0x01947f80
void GFxMovieRoot::sub_01947f80(void* arg)
{
    Stored = arg;
    Call20(&Sub);
}

struct C_01947650
{
    BYTE Value;

    C_01947650* sub_01947650(BYTE* Source);
};

// @baa 0x01947650
C_01947650* C_01947650::sub_01947650(BYTE* Source)
{
    Value = *Source;
    return this;
}

struct C_0194a1c0
{
    INT Value_00;
    BYTE Flag_04;
    INT Value_08;

    C_0194a1c0* sub_0194a1c0();
};

// @baa 0x0194a1c0
C_0194a1c0* C_0194a1c0::sub_0194a1c0()
{
    Value_00 = 0;
    Value_08 = 0;
    Flag_04 = 0;
    return this;
}

struct C_0194a5f0
{
    BYTE Flag_00;
    char pad_01[0xf];
    INT Value_10;

    C_0194a5f0* sub_0194a5f0();
};

// @baa 0x0194a5f0
C_0194a5f0* C_0194a5f0::sub_0194a5f0()
{
    Flag_00 = 0;
    Value_10 = 0;
    return this;
}

struct C_0194a630
{
    BYTE Flag_00;
    char pad_01[0xf];
    INT Value_10;

    C_0194a630* sub_0194a630();
};

// @baa 0x0194a630
C_0194a630* C_0194a630::sub_0194a630()
{
    Flag_00 = 0;
    Value_10 = 0;
    return this;
}

struct C_0194a670
{
    INT Value_00;
    INT Value_04;
    INT Value_08;

    C_0194a670* sub_0194a670();
};

// @baa 0x0194a670
C_0194a670* C_0194a670::sub_0194a670()
{
    Value_04 = 0;
    Value_08 = 0;
    Value_00 = 0;
    return this;
}

struct C_01947710
{
    BYTE Type;
    char pad_01[3];
    BYTE Flag;

    C_01947710* sub_01947710(BYTE In);
};

// @baa 0x01947710
C_01947710* C_01947710::sub_01947710(BYTE In)
{
    Type = 2;
    Flag = In;
    return this;
}

extern "C" __declspec(dllimport) int __stdcall FreeLibrary(void* Module);
struct C_01947980
{
    char pad_00[0x1c];
    void* Module;

    void sub_01947980();
};

// @baa 0x01947980
void C_01947980::sub_01947980()
{
    if (Module)
        FreeLibrary(Module);
}
