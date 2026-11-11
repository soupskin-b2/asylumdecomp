// UnParticleSystemRender.cpp (part 1 of 2): 16 functions
// Placed here by: neighbours 10, callers 5, file 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

struct C {
    int sub_00b79350();
};

int sub_009d4650(void);
// @baa 0x00b79350
int C::sub_00b79350(void)
{
    int param_1 = (int)this;

  sub_009d4650();
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined1 *)(param_1 + 0x14) = 0;
  *(undefined1 *)(param_1 + 0x15) = 0;
  *(undefined1 *)(param_1 + 0x16) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined1 *)(param_1 + 0x20) = 0;
  *(undefined1 *)(param_1 + 0x21) = 0;
  *(undefined1 *)(param_1 + 0x22) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined1 *)(param_1 + 0x2c) = 0;
  *(undefined1 *)(param_1 + 0x2d) = 0;
  *(undefined1 *)(param_1 + 0x2e) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined1 *)(param_1 + 0x38) = 0;
  *(undefined1 *)(param_1 + 0x39) = 0;
  *(undefined1 *)(param_1 + 0x3a) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined1 *)(param_1 + 0x44) = 0;
  *(undefined1 *)(param_1 + 0x45) = 0;
  *(undefined1 *)(param_1 + 0x46) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined1 *)(param_1 + 0x50) = 0;
  *(undefined1 *)(param_1 + 0x51) = 0;
  *(undefined1 *)(param_1 + 0x52) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined1 *)(param_1 + 0x5c) = 0;
  *(undefined1 *)(param_1 + 0x5d) = 0;
  *(undefined1 *)(param_1 + 0x5e) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  *(undefined1 *)(param_1 + 0x68) = 0;
  *(undefined1 *)(param_1 + 0x69) = 0;
  *(undefined1 *)(param_1 + 0x6a) = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  return param_1;
}

// @baa 0x00b794a0
void __stdcall sub_00b794a0(int a0, int a1, int a2, int a3) {  }

int sub_006566e0(void);
extern undefined * g_0200c4b0;
// @baa 0x00b84e40
undefined4 * ULensFlare::sub_00b84e40(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_006566e0();
  *param_1 = (undefined4)(&g_0200c4b0);
  return param_1;
}

extern char g_026bf638[];
// @baa 0x00b84e60
int sub_00b84e60(void) { return (int)g_026bf638; }

extern undefined * g_0200c558;
// @baa 0x00b91960
undefined4 * ULensFlare::sub_00b91960(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_006566e0();
  *param_1 = (undefined4)(&g_0200c558);
  return param_1;
}

extern char g_026bf680[];
// @baa 0x00b91980
int sub_00b91980(void) { return (int)g_026bf680; }

void sub_00656790();
// @baa 0x00b91990
void sub_00b91990(void) { sub_00656790(); }

extern undefined * g_0200c584;
// @baa 0x00b919a0
undefined4 * ULensFlare::sub_00b919a0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_006566e0();
  *param_1 = (undefined4)(&g_0200c584);
  return param_1;
}

extern char g_026bf5e0[];
// @baa 0x00b919c0
int sub_00b919c0(void) { return (int)g_026bf5e0; }

extern undefined * g_0200c5b0;
// @baa 0x00b919d0
undefined4 * ULensFlare::sub_00b919d0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_006566e0();
  *param_1 = (undefined4)(&g_0200c5b0);
  return param_1;
}

extern char g_026bf6c8[];
// @baa 0x00b919f0
int sub_00b919f0(void) { return (int)g_026bf6c8; }

// @baa 0x00b91a00
void sub_00b91a00(void) { sub_00656790(); }

extern undefined * g_0200c5dc;
// @baa 0x00b91a10
undefined4 * ULensFlare::sub_00b91a10(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_006566e0();
  *param_1 = (undefined4)(&g_0200c5dc);
  return param_1;
}

extern char g_026bf428[];
// @baa 0x00b91a30
int sub_00b91a30(void) { return (int)g_026bf428; }

// @baa 0x00b91a40
void sub_00b91a40(void) { sub_00656790(); }

extern int g_02604330;
extern int g_026b2194;
extern char g_026b24c0[];
extern char g_01ebb554[];
extern char g_01ebc7f8[];
extern char g_0200c2fc[];
extern char g_0200995c[];
extern char g_02009960[];
extern char g_02009a7c[];
extern char g_02009a80[];
int sub_00715880(void);
int sub_006311e0(...);
struct C_00b91c10 {
    void sub_00542ad0(void);
    void sub_005470a0(void);
    void sub_00b79700(void);
};

struct Ctx {
    void* Buffer;
    char* Data;
    char* DataEnd;
    Ctx(void*, int);
    __forceinline ~Ctx() { ((C_00b91c10*)this)->sub_005470a0(); }
    __forceinline void Commit() { ((C_00b91c10*)this)->sub_00542ad0(); }
    __forceinline unsigned GetAllocatedSize() { return (unsigned)((unsigned)DataEnd - (unsigned)Data); }
};

struct FRenderCommandBase {
    void* Vtbl;
    __forceinline FRenderCommandBase() { Vtbl = g_01ebb554; }
    __forceinline ~FRenderCommandBase() { Vtbl = g_01ebb554; }
};

struct FSkipRenderCommand : FRenderCommandBase {
    int Size;
    __forceinline FSkipRenderCommand(int s) : FRenderCommandBase() { Vtbl = g_01ebc7f8; Size = s; }
};

struct CmdObj { virtual void call0(int); };

struct CompVt {
    virtual void d0(); virtual void d1(); virtual void d2(); virtual void d3();
    virtual void d4(); virtual void d5(); virtual void d6(); virtual void d7();
    virtual void d8(); virtual void d9(); virtual void d10(); virtual void d11();
    virtual void d12(); virtual void d13(); virtual void d14();
    virtual void call3c();
    virtual void d16(); virtual void d17(); virtual void d18(); virtual void d19();
    virtual void d20(); virtual void d21(); virtual void d22(); virtual void d23();
    virtual void call60();
    char pad[0xa8 - 4];
    void* field_a8;
};

struct FRealCommand : FRenderCommandBase {
    void* Comp;
    void* Arg;
    __forceinline FRealCommand(void* c, void* a) : FRenderCommandBase() { Vtbl = g_0200c2fc; Comp = c; Arg = a; }
    __forceinline void Execute() {
        CompVt* c = (CompVt*)Comp;
        c->call60();
        void* old = c->field_a8;
        if (old != Arg && old != 0) ((CmdObj*)old)->call0(1);
        c->field_a8 = Arg;
        c->call3c();
    }
};

struct CtxRaw { void* a; void* b; void* c; };

inline void* operator new(unsigned int, void* p) { return p; }

struct CFunc { void sub_00b91c10(void* arg1); };

// @baa 0x00b91c10
void CFunc::sub_00b91c10(void* arg1)
{
    if (!sub_00715880())
        sub_006311e0("IsInGameThread()", g_02009960, 0x1742, g_0200995c);

    if (g_026b2194 != 0) {
        Ctx AllocationContext(g_026b24c0, (int)sizeof(FRealCommand));
        if (AllocationContext.GetAllocatedSize() < sizeof(FRealCommand)) {
            if (AllocationContext.GetAllocatedSize() < sizeof(FSkipRenderCommand))
                sub_006311e0("AllocationContext.GetAllocatedSize() >= sizeof(FSkipRenderCommand)", g_02009a80, 0x1742, g_02009a7c);
            char* p = AllocationContext.Data;
            if (p) new(p) FSkipRenderCommand((int)(AllocationContext.DataEnd - p));
            AllocationContext.Commit();
            {
                CtxRaw raw;
                Ctx* c2 = new(&raw) Ctx(g_026b24c0, (int)sizeof(FRealCommand));
                char* p2 = c2->Data;
                if (p2) {
                    void* a = arg1;
                    FRealCommand* c = (FRealCommand*)p2;
                    c->Vtbl = g_0200c2fc;
                    c->Comp = this;
                    c->Arg = a;
                }
                (*(Ctx*)&raw).~Ctx();
            }
        } else {
            char* p = AllocationContext.Data;
            if (p) new(p) FRealCommand(this, arg1);
        }
    } else {
        FRealCommand Cmd(this, arg1);
        Cmd.Execute();
    }
}
