// UnEdModeInterpolation.cpp: 5 functions
// Placed here by: callers 2, file 2, neighbours 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

extern undefined4 g_026af518;
extern undefined4 g_026af51c;
extern undefined4 g_026af520;
extern undefined4 g_026c5868;
extern undefined4 g_026c586c;
extern undefined4 g_026c5870;
// @baa 0x00d1ed60
undefined * sub_00d1ed60(void)
{
  if ((g_026c5870 & 1) == 0) {
    g_026c5870 = g_026c5870 | 1;
    if ((g_026af520 & 1) == 0) {
      g_026af520 = g_026af520 | 1;
      g_026af518 = 0;
      g_026af51c = (undefined4)(L"HHitProxy");
    }
    g_026c5868 = (undefined4)(&g_026af518);
    g_026c586c = (undefined4)(L"HInterpTrackKeyHandleProxy");
  }
  return (undefined *)(&g_026c5868);
}

struct C {
    undefined4 * sub_0127a2d0(byte);
};

int sub_0053dfa0(...);
int sub_00f4d520(void);
extern undefined * g_0221716c;
// @baa 0x0127a2d0
undefined4 * C::sub_0127a2d0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_0221716c);
  sub_00f4d520();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct FVector { float X, Y, Z; };

struct FEdMode {
    char pad0[0x38];
    int ID;
    char pad1[4];
    void* InterpEd;
};

struct FEditorModeTools {
    char pad[0x50];
    FEdMode* CurrentMode;
};

struct CThing {
    int sub_00cc65f0();
};

struct Obj1 {
    char pad0[8];
    CThing* f8;
    char pad1[0x2c-0xc];
    int f2c;
    char pad2[0x2e4-0x30];
    int* f2e4;
};

struct Obj2 {
    virtual int v0(); virtual int v1(); virtual int v2(); virtual int v3();
    virtual int v4(); virtual int v5(); virtual int v6(); virtual int v7();
    virtual int v8(); virtual int v9(); virtual int v10(); virtual int v11();
    virtual int v12(); virtual int v13();
    virtual int vFunc(int, int);
};

struct FInterpEd {
    int sub_012fece0(int,int,int,int,FVector*);
    int sub_012ff1b0(FVector*, int);
};

struct FEdModeInterpEdit {
    char pad[0x10];
    int f10;
    int f14, f18, f1c, f20;
    int sub_0127a550(Obj1*, Obj2*, FVector*, int, int);
};

int sub_00ec5970();
int sub_006311e0(...);
extern int g_02212c4c;
extern int g_02212d64;
extern char g_02212c50[];
extern char g_02212d68[];
extern int g_026c4958;
extern int g_026c495c;
extern int g_026c4118;
extern int g_026c411c;
// @baa 0x0127a550
int FEdModeInterpEdit::sub_0127a550(Obj1* arg1, Obj2* arg2, FVector* arg3, int arg4, int arg5)
{
    if (((FEditorModeTools*)sub_00ec5970())->CurrentMode->ID != 4)
        sub_006311e0("GEditorModeTools().GetCurrentModeID() == EM_InterpEdit",
                     g_02212c50,
                     0x131, &g_02212c4c);
    FEdMode* mode = ((FEditorModeTools*)sub_00ec5970())->CurrentMode;
    if (mode->InterpEd == 0)
        sub_006311e0("mode->InterpEd",
                     g_02212d68,
                     0x134, &g_02212d64);

    int b = (arg2->vFunc(g_026c4958, g_026c495c) != 0) ||
            (arg2->vFunc(g_026c4118, g_026c411c) != 0);

    FVector v = *arg3;

    if (f10 != 0)
    {
        if (arg1->f2c == 0)
        {
            v.X = arg3->Y;
            v.Y = -arg3->X;
        }
        FVector scaled;
        scaled.X = v.X * 2.0f;
        scaled.Y = v.Y * 2.0f;
        scaled.Z = v.Z * 2.0f;
        ((FInterpEd*)mode->InterpEd)->sub_012fece0(f14, f18, f1c, f20, &scaled);
        return 1;
    }

    if (b && *arg1->f2e4 != 0)
    {
        ((FInterpEd*)mode->InterpEd)->sub_012ff1b0(&v, arg4);
        return 1;
    }
    arg1->f8->sub_00cc65f0();
    return 0;
}

int sub_00ec5970(void);
extern undefined4 g_02212e7c;
// @baa 0x0127a6e0
void sub_0127a6e0(void)
{
  int iVar1;
  
  iVar1 = sub_00ec5970();
  if (*(int *)(*(int *)(iVar1 + 0x50) + 0x38) != 4) {
    sub_006311e0("GEditorModeTools().GetCurrentModeID() == EM_InterpEdit",
                 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\UnEdModeInterpolation.cpp"
                 ,0x157,&g_02212e7c);
  }
  sub_00ec5970();
  return;
}

// @baa 0x012df270
int __stdcall sub_012df270(int a0, int a1, int a2, int a3) { return 0; }
