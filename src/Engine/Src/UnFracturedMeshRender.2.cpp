// UnFracturedMeshRender.cpp (part 2 of 2): 3 functions
// Placed here by: callers 1, file 1, neighbours 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

struct C{
int sub_007b2b60(undefined4*);
};

int sub_0053d240(...);
int sub_0053df70(...);
// @baa 0x007b2b60
int C::sub_007b2b60(undefined4*param_2)
{
int*param_1=(int*)this;

undefined4*puVar1;
undefined4 iVar2;
int iVar3;

iVar2=param_1[1];
iVar3=iVar2+1;
param_1[1]=iVar3;
if(iVar3>param_1[2]){
iVar3=sub_0053d240(iVar3,param_1[2],0xc);
param_1[2]=iVar3;
if((*param_1!=0)||(iVar3)){
iVar3=sub_0053df70(*param_1,iVar3*0xc,8);
*param_1=iVar3;
}
}
puVar1=(undefined4*)(*param_1+iVar2*0xc);
if(puVar1!=(undefined4*)0x0){
*puVar1=*param_2;
puVar1[1]=param_2[1];
puVar1[2]=param_2[2];
}
return iVar2;
}

int sub_00715880(void);
int sub_006311e0(...);
int sub_007c2df0(...);
extern int g_026b2194;
extern char g_026b24c0[];
extern char g_01ebb554[];
extern char g_01ebc7f8[];
extern wchar_t g_01f22db4[];
extern wchar_t g_01f22ed4[];
struct Ctx {
    Ctx(void*, int);
    ~Ctx();
    void Done();
    int pad;
    char *Start;
    char *End;
};

inline void* operator new(size_t, void* p) { return p; }

inline void* operator new(size_t, const Ctx& c) { return c.Start; }

struct Res { int pad; void* p; int q; int x, y; Res(void*,void*); ~Res(); };

struct Cmd { void *vt; int sz; Cmd(int n) { vt = g_01ebb554; vt = g_01ebc7f8; sz = n; } };

struct C_007c7020 {
    void sub_006db540();
    void sub_007c7020();
};

// @baa 0x007c7020
void C_007c7020::sub_007c7020()
{
    sub_006db540();
    if (!sub_00715880()) sub_006311e0("IsInGameThread()", "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnFracturedMeshRender.cpp", 0x306, g_01f22db4);
    if (g_026b2194) {
        Ctx c(g_026b24c0, 0x14);
        UINT sz = c.End - c.Start;
        if (sz < 0x14) {
            if (sz < 8) { sub_006311e0("AllocationContext.GetAllocatedSize() >= sizeof(FSkipRenderCommand)", "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnFracturedMeshRender.cpp", 0x306, g_01f22ed4); }
            new (c) Cmd(c.End - c.Start);
            c.Done();
            new (Ctx(g_026b24c0, 0x14)) Res((char*)this+0x210,(char*)this+0x214);
        } else new (c) Res((char*)this+0x210,(char*)this+0x214);
    } else {
        Res r((char*)this+0x210,(char*)this+0x214);
        sub_007c2df0(r.p, &r.q);
    }
    *(DWORD*)((char*)this + 0x22c) &= ~2;
}

void sub_007d4020();
// @baa 0x007d47d0
void sub_007d47d0(void) { sub_007d4020(); }
