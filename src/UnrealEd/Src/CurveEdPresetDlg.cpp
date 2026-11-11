// CurveEdPresetDlg.cpp: 1 function
// Placed here by: file 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Array.h"

class wxEvent { public: __declspec(dllimport) int GetId() const; };

struct Slot { int *p; int a; char *w; int b; char *c; };

struct C2 { int sub_011ede20(int,int,int,int,int); };

struct Z { int x,y; Z(){x=0;y=0;} Z(const Z&o){x=o.x;y=o.y;} };

int sub_00589470(void);
int sub_006311e0(...);
int sub_0112fe20(int*,int,Z,int,int,int,int,int);
int sub_00588dd0(...);
extern int g_02688448;
extern int g_021b20d4;
struct C {
    char pad[0x1c0];
    TArray<int*> *arr;
    Slot slots[6];
    void sub_01135e40(wxEvent *e);
};

// @baa 0x01135e40
void C::sub_01135e40(wxEvent *e)
{
    int k;
    switch (e->GetId()) {
    case 0x4e43: k=0; break;
    case 0x4e46: k=1; break;
    case 0x4e49: k=2; break;
    case 0x4e4c: k=3; break;
    case 0x4e4f: k=4; break;
    case 0x4e52: k=5; break;
    default: return;
    }
    Slot *s = &slots[k];
    int idx = ((int (__thiscall *)(void*))(*(int**)(s->w+0x150))[6])(s->w+0x150);
    int *o = (*arr)(idx);
    int *base = (int*)sub_0112fe20(o, -1, Z(), 0,0,0,0,0);
    if (!base) sub_006311e0("Base", "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\CurveEdPresetDlg.cpp", 0x14c, &g_021b20d4);
    if (s->p) {
        int ok = 0;
        if (!g_02688448) {
            g_02688448 = sub_00588dd0(L"Core");
            sub_00589470();
        }
        if (g_02688448) {
            for (int c = *(int*)(s->p + 0x28/4); c; c = *(int*)((char*)c + 0x30)) {
                if (c == g_02688448) { ok = 1; break; }
            }
        } else ok = 1;
        if (!ok) s->p = 0;
    }
    if (!s->p) {
        s->p = base;
        ((C2*)s->c)->sub_011ede20((int)base,1,0,1,0);
    }
}
