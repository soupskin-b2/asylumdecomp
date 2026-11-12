// UnrealEd_1420000.cpp (part 1 of 9): 173 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

struct C {
    undefined4 sub_01422410(byte);
};

int sub_0053dfa0(...);
int sub_01422370(void);
// @baa 0x01422410
undefined4 C::sub_01422410(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01422370();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct A_014225b0 { virtual void sub_014225c0(); char pad[408]; };

struct B_014225b0 { virtual void sub_014225c0(); };

struct C_014225b0 : A_014225b0, B_014225b0 { virtual void sub_014225c0(); C_014225b0(); };

C_014225b0::C_014225b0() {}

// @baa 0x014225b0
void C_014225b0::sub_014225c0() {}

int sub_01284da0(void);
// @baa 0x014225c0
undefined4 UUnrealEdEngine::sub_014225c0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01284da0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_014229a0 {
    undefined4 * sub_014229a0();
};

int sub_011ef810(void);
extern undefined4 g_02281d40;
extern undefined * g_02281d48;
// @baa 0x014229a0
undefined4 * C_014229a0::sub_014229a0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_011ef810();
  *param_1 = (undefined4)(&g_02281d48);
  param_1[0x51] = (undefined4)(&g_02281d40);
  return param_1;
}

void sub_011ee210();
// @baa 0x014229c0
void sub_014229c0(void) { sub_011ee210(); }

struct A_014229d0 { virtual void sub_014229e0(); char pad[320]; };

struct B_014229d0 { virtual void sub_014229e0(); };

struct C_014229d0 : A_014229d0, B_014229d0 { virtual void sub_014229e0(); C_014229d0(); };

C_014229d0::C_014229d0() {}

// @baa 0x014229d0
void C_014229d0::sub_014229e0() {}

struct C_01423480 { void sub_014232e0(); void sub_01423480(int); };

// @baa 0x01423480
void C_01423480::sub_01423480(int) { sub_014232e0(); }

struct C_01423490 { void sub_014232e0(); void sub_01423490(int); };

// @baa 0x01423490
void C_01423490::sub_01423490(int) { sub_014232e0(); }

struct C_014234a0 {
    undefined4 * sub_014234a0();
};

extern undefined4 g_02282040;
extern undefined * g_02282048;
// @baa 0x014234a0
undefined4 * C_014234a0::sub_014234a0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_011ef810();
  *param_1 = (undefined4)(&g_02282048);
  param_1[0x51] = (undefined4)(&g_02282040);
  return param_1;
}

struct A_014234d0 { virtual void sub_014234e0(); char pad[320]; };

struct B_014234d0 { virtual void sub_014234e0(); };

struct C_014234d0 : A_014234d0, B_014234d0 { virtual void sub_014234e0(); C_014234d0(); };

C_014234d0::C_014234d0() {}

// @baa 0x014234d0
void C_014234d0::sub_014234e0() {}

struct C_014237c0 {
    undefined4 * sub_014237c0();
};

extern undefined4 g_02282340;
extern undefined * g_02282348;
// @baa 0x014237c0
undefined4 * C_014237c0::sub_014237c0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_011ef810();
  *param_1 = (undefined4)(&g_02282348);
  param_1[0x51] = (undefined4)(&g_02282340);
  return param_1;
}

struct A_014237e0 { virtual void sub_014237f0(); char pad[320]; };

struct B_014237e0 { virtual void sub_014237f0(); };

struct C_014237e0 : A_014237e0, B_014237e0 { virtual void sub_014237f0(); C_014237e0(); };

C_014237e0::C_014237e0() {}

// @baa 0x014237e0
void C_014237e0::sub_014237f0() {}

struct C_01423880 {
    undefined4 * sub_01423880();
};

extern undefined4 g_0228264c;
extern undefined * g_02282650;
// @baa 0x01423880
undefined4 * C_01423880::sub_01423880(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_011ef810();
  param_1[0x7f] = 0;
  param_1[0x7a] = 0;
  *param_1 = (undefined4)(&g_02282650);
  param_1[0x51] = (undefined4)(&g_0228264c);
  return param_1;
}

struct A_014238b0 { virtual void sub_014238d0(); char pad[320]; };

struct B_014238b0 { virtual void sub_014238d0(); };

struct C_014238b0 : A_014238b0, B_014238b0 { virtual void sub_014238d0(); C_014238b0(); };

C_014238b0::C_014238b0() {}

// @baa 0x014238b0
void C_014238b0::sub_014238d0() {}

struct C_01425180 { void sub_01424fe0(); void sub_01425180(int); };

// @baa 0x01425180
void C_01425180::sub_01425180(int) { sub_01424fe0(); }

struct C_01425190 { void sub_01424fe0(); void sub_01425190(int); };

// @baa 0x01425190
void C_01425190::sub_01425190(int) { sub_01424fe0(); }

struct C_014251a0 {
    undefined4 * sub_014251a0();
};

extern undefined4 g_0228295c;
extern undefined * g_02282960;
// @baa 0x014251a0
undefined4 * C_014251a0::sub_014251a0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_011ef810();
  param_1[0x7f] = 0;
  param_1[0x7a] = 0;
  *param_1 = (undefined4)(&g_02282960);
  param_1[0x51] = (undefined4)(&g_0228295c);
  return param_1;
}

struct A_014251d0 { virtual void sub_014251f0(); char pad[320]; };

struct B_014251d0 { virtual void sub_014251f0(); };

struct C_014251d0 : A_014251d0, B_014251d0 { virtual void sub_014251f0(); C_014251d0(); };

C_014251d0::C_014251d0() {}

// @baa 0x014251d0
void C_014251d0::sub_014251f0() {}

struct S {
    virtual void vf_00();
    virtual void vf_04();
    virtual void vf_08();
    virtual void vf_0c();
    virtual void vf_10();
    virtual void vf_14();
    virtual void vf_18(INT Value);
};

// @baa 0x01426400
void sub_01426400(S* p, INT Value)
{
    p->vf_18(Value);
}

// @baa 0x01426420
void sub_01426420(S* p, INT Value)
{
    p->vf_18(Value);
}

struct C_01426440 { int a, b; C_01426440(int, int); };

// @baa 0x01426440
C_01426440::C_01426440(int x, int y) : a(x), b(y) {}

struct C_01426460 { int sub_01426460(void); };

// @baa 0x01426460
int C_01426460::sub_01426460(void) { return *(int*)((char*)this + 180); }

// @baa 0x01426470
int sub_01426470(int a0, int a1) { return a1; }

struct C_view {
    int sub_00c407b0(int);
};

extern undefined4 g_0228c6b4;
// @baa 0x01426480
undefined4 * UUnrealEdEngine::sub_01426480(undefined4 param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  ((C_view *)(this))->sub_00c407b0(2);
  param_1[4] = param_2;
  *param_1 = (undefined4)(&g_0228c6b4);
  return param_1;
}

void sub_00c38ac0();
// @baa 0x014264a0
void sub_014264a0(void) { sub_00c38ac0(); }

extern char g_02283360[];
// @baa 0x014264e0
int sub_014264e0(void) { return (int)g_02283360; }

extern char g_026dad18[];
// @baa 0x014264f0
int sub_014264f0(void) { return (int)g_026dad18; }

class wxTextDropTarget;
class wxTextDropTarget {
    public:
    public: __declspec(dllimport) wxTextDropTarget();
    friend struct C_01426500;
};

struct C_01426500 {
    wxTextDropTarget * sub_01426500(undefined4);
};

extern undefined * g_0228c6c4;
// @baa 0x01426500
wxTextDropTarget * C_01426500::sub_01426500(undefined4 param_2)
{
    wxTextDropTarget * param_1 = (wxTextDropTarget *)this;

  ((wxTextDropTarget *)(param_1))->wxTextDropTarget::wxTextDropTarget();
  *(undefined4 *)(param_1 + 0x14) = param_2;
  *(undefined ***)param_1 = &g_0228c6c4;
  return param_1;
}

struct C_01426540 {
    undefined4 sub_01426540(int, byte, int);
};

// @baa 0x01426540
undefined4 C_01426540::sub_01426540(int param_2, byte param_3, int param_4)
{
    int param_1 = (int)this;

  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_1 + 0x35c);
  uVar2 = 0;
  if (((param_2 == *(int *)(iVar1 + 0x39c)) && (param_4 == *(int *)(iVar1 + 0x3a4))) &&
     ((uint)param_3 == *(uint *)(iVar1 + 0x3a0))) {
    uVar2 = 1;
  }
  return uVar2;
}

struct C_01426580 { int sub_01426580(void); };

// @baa 0x01426580
int C_01426580::sub_01426580(void) { return *(int*)((char*)this + 544); }

struct C_01426590 {
    void sub_01426590(undefined4 *);
};

// @baa 0x01426590
void C_01426590::sub_01426590(undefined4 * param_2)
{
    int param_1 = (int)this;

  *(undefined4 *)(param_1 + 0x178) = *param_2;
  *(undefined4 *)(param_1 + 0x17c) = param_2[1];
  *(undefined4 *)(param_1 + 0x180) = param_2[2];
  return;
}

struct C_014265c0 { int sub_014265c0(void); };

// @baa 0x014265c0
int C_014265c0::sub_014265c0(void) { return *(int*)((char*)this + 380); }

extern char g_02285dcc[];
// @baa 0x014265f0
int sub_014265f0(void) { return (int)g_02285dcc; }

// @baa 0x01426600
int sub_01426600(void) { return 0; }

class wxUpdateUIEvent;
class wxUpdateUIEvent {
    public:
    public: __declspec(dllimport) void Check(bool);
    friend struct C_01426670;
};

struct C_01426670 {
    void sub_01426670(wxUpdateUIEvent *);
};

// @baa 0x01426670
void C_01426670::sub_01426670(wxUpdateUIEvent * param_2)
{
    int param_1 = (int)this;

  ((wxUpdateUIEvent *)(param_2))->wxUpdateUIEvent::Check(*(int *)(param_1 + 0x3d4) == 1);
  return;
}

// @baa 0x014267a0
void sub_014267a0(S* p, INT Value)
{
    p->vf_18(Value);
}

extern char g_026db0b4[];
// @baa 0x014267c0
int sub_014267c0(void) { return (int)g_026db0b4; }

extern char g_025e90b4[];
// @baa 0x014267d0
int sub_014267d0(void) { return (int)g_025e90b4; }

extern char g_026db0cc[];
// @baa 0x014267e0
int sub_014267e0(void) { return (int)g_026db0cc; }

extern char g_025e90bc[];
// @baa 0x014269f0
int sub_014269f0(void) { return (int)g_025e90bc; }

extern char g_026db15c[];
// @baa 0x01426a00
int sub_01426a00(void) { return (int)g_026db15c; }

extern char g_025e90c4[];
// @baa 0x01426a10
int sub_01426a10(void) { return (int)g_025e90c4; }

extern char g_026db1d8[];
// @baa 0x01426a20
int sub_01426a20(void) { return (int)g_026db1d8; }

extern char g_025e90cc[];
// @baa 0x01426a90
int sub_01426a90(void) { return (int)g_025e90cc; }

extern char g_026db2b8[];
// @baa 0x01426aa0
int sub_01426aa0(void) { return (int)g_026db2b8; }

extern char g_025e90d4[];
// @baa 0x01426ab0
int sub_01426ab0(void) { return (int)g_025e90d4; }

extern char g_026db2f8[];
// @baa 0x01426ac0
int sub_01426ac0(void) { return (int)g_026db2f8; }

extern char g_025e90dc[];
// @baa 0x01426ad0
int sub_01426ad0(void) { return (int)g_025e90dc; }

extern char g_026db338[];
// @baa 0x01426ae0
int sub_01426ae0(void) { return (int)g_026db338; }

extern char g_025e90e4[];
// @baa 0x01426c00
int sub_01426c00(void) { return (int)g_025e90e4; }

extern char g_026db378[];
// @baa 0x01426c10
int sub_01426c10(void) { return (int)g_026db378; }

extern char g_025e90ec[];
// @baa 0x01426d20
int sub_01426d20(void) { return (int)g_025e90ec; }

extern char g_026db3b8[];
// @baa 0x01426d30
int sub_01426d30(void) { return (int)g_026db3b8; }

class wxDialogBase;
class wxDialogBase {
    public:
    protected: __declspec(dllimport) void AcceptAndClose();
};

struct C_01427120 : wxDialogBase {
    void sub_01427120(int);
};

// @baa 0x01427120
void C_01427120::sub_01427120(int)
{
    AcceptAndClose();
}

extern char g_025e9104[];
// @baa 0x01427130
int sub_01427130(void) { return (int)g_025e9104; }

extern char g_026db43c[];
// @baa 0x01427140
int sub_01427140(void) { return (int)g_026db43c; }

extern char g_025e910c[];
// @baa 0x01427160
int sub_01427160(void) { return (int)g_025e910c; }

extern char g_026db47c[];
// @baa 0x01427170
int sub_01427170(void) { return (int)g_026db47c; }

extern char g_025e9114[];
// @baa 0x014271c0
int sub_014271c0(void) { return (int)g_025e9114; }

extern char g_026db4bc[];
// @baa 0x014271d0
int sub_014271d0(void) { return (int)g_026db4bc; }

struct C_014271e0 {
    void sub_014271e0(undefined4);
    int sub_011ede20(int, int, int, int, int);
};

// @baa 0x014271e0
void C_014271e0::sub_014271e0(undefined4 param_2)
{
    int param_1 = (int)this;
  *(undefined4 *)(param_1 + 0x1b0) = param_2;
  ((C_014271e0 *)((*(char **)((char *)this + 0x1a0))))->sub_011ede20(param_2, 1, 0, 0, 0);
  return;
}

extern char g_025e911c[];
// @baa 0x01427210
int sub_01427210(void) { return (int)g_025e911c; }

extern char g_026db53c[];
// @baa 0x01427220
int sub_01427220(void) { return (int)g_026db53c; }

struct C_01427290 { int sub_01427290(void); };

// @baa 0x01427290
int C_01427290::sub_01427290(void) { return *(int*)((char*)this + 4); }

struct C_014272a0 {
    INT Unk00; // 0x0
    INT Size;  // 0x4

    UBOOL sub_014272a0(INT Index);
};

// @baa 0x014272a0
UBOOL C_014272a0::sub_014272a0(INT Index)
{
    if (Index >= 0 && Index < Size)
        return 1;
    return 0;
}

struct C_014272c0 { int sub_014272c0(void); };

// @baa 0x014272c0
int C_014272c0::sub_014272c0(void) { return *(int*)((char*)this + 4); }

struct C_014272d0 { int sub_014272d0(void); };

// @baa 0x014272d0
int C_014272d0::sub_014272d0(void) { return *(int*)((char*)this + 4); }

struct C_014272e0 { int sub_014272e0(void); };

// @baa 0x014272e0
int C_014272e0::sub_014272e0(void) { return *(int*)((char*)this + 4); }

struct C_014272f0 { int sub_014272f0(void); };

// @baa 0x014272f0
int C_014272f0::sub_014272f0(void) { return *(int*)((char*)this + 4); }

struct C_01427300 { int sub_01427300(void); };

// @baa 0x01427300
int C_01427300::sub_01427300(void) { return *(int*)((char*)this + 4); }

struct C_01427310 { int sub_01427310(void); };

// @baa 0x01427310
int C_01427310::sub_01427310(void) { return *(int*)((char*)this + 4); }

struct C_01427320 { int sub_01427320(void); };

// @baa 0x01427320
int C_01427320::sub_01427320(void) { return *(int*)((char*)this + 4); }

struct C_01427330 { int sub_01427330(void); };

// @baa 0x01427330
int C_01427330::sub_01427330(void) { return *(int*)((char*)this + 4); }

struct C_014273d0 { int a, b; C_014273d0(int, int); };

// @baa 0x014273d0
C_014273d0::C_014273d0(int x, int y) : a(x), b(y) {}

struct C_014273f0 { int a, b; C_014273f0(int, int); };

// @baa 0x014273f0
C_014273f0::C_014273f0(int x, int y) : a(x), b(y) {}

struct C_01427410 { int a, b; C_01427410(int, int); };

// @baa 0x01427410
C_01427410::C_01427410(int x, int y) : a(x), b(y) {}

struct C_01427430 { int a, b; C_01427430(int, int); };

// @baa 0x01427430
C_01427430::C_01427430(int x, int y) : a(x), b(y) {}

struct C_01427450 { int a, b; C_01427450(int, int); };

// @baa 0x01427450
C_01427450::C_01427450(int x, int y) : a(x), b(y) {}

// @baa 0x01427470
int sub_01427470(int a0) { return *(int*)a0; }

struct C_01427480 {
    void sub_01427480(int *);
};

// @baa 0x01427480
void C_01427480::sub_01427480(int * param_2)
{
    int param_1 = (int)this;

  *param_2 = param_1;
  param_2[1] = param_1 + 8;
  return;
}

// @baa 0x01427490
int sub_01427490(int a0) { return *(int*)a0; }

// @baa 0x014274a0
bool sub_014274a0(int param_1, int param_2)
{
  return param_1 == param_2;
}

struct C_014274b0 {
    void sub_014274b0(undefined4 *);
};

// @baa 0x014274b0
void C_014274b0::sub_014274b0(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_2 = *param_1;
  param_2[1] = (undefined4)(param_1 + 1);
  return;
}

// @baa 0x014274d0
int sub_014274d0(int a0) { return *(int*)a0; }

// @baa 0x014274e0
bool sub_014274e0(int param_1, int param_2)
{
  return param_1 == param_2;
}

struct C_014274f0 {
    void sub_014274f0(undefined4 *);
};

// @baa 0x014274f0
void C_014274f0::sub_014274f0(undefined4 * param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_2 = *param_1;
  param_2[1] = (undefined4)(param_1 + 1);
  return;
}

// @baa 0x01427510
int sub_01427510(int a0) { return *(int*)a0; }

// @baa 0x01427520
bool sub_01427520(int param_1, int param_2)
{
  return param_1 == param_2;
}

struct C_01427530 { int a, b; C_01427530(const C_01427530 &); };

// @baa 0x01427530
C_01427530::C_01427530(const C_01427530 &o) : a(o.a), b(o.b) {}

// @baa 0x01427570
int sub_01427570(int a0) { return *(int*)a0; }

// @baa 0x01427580
bool sub_01427580(int param_1, int param_2)
{
  return param_1 == param_2;
}

struct C_01427590 { int a, b; C_01427590(const C_01427590 &); };

// @baa 0x01427590
C_01427590::C_01427590(const C_01427590 &o) : a(o.a), b(o.b) {}

struct C_014275e0 { int a, b; C_014275e0(const C_014275e0 &); };

// @baa 0x014275e0
C_014275e0::C_014275e0(const C_014275e0 &o) : a(o.a), b(o.b) {}

struct C_01427600 { int a, b; C_01427600(const C_01427600 &); };

// @baa 0x01427600
C_01427600::C_01427600(const C_01427600 &o) : a(o.a), b(o.b) {}

// @baa 0x01427620
void sub_01427620(void) {  }

// @baa 0x01427630
float10 sub_01427630(double param_1)
{
  return (float10)param_1;
}

// @baa 0x01427640
void sub_01427640(void) {  }

// @baa 0x01427660
undefined2 sub_01427660(void)
{
  return 0x69;
}

// @baa 0x01427670
undefined2 sub_01427670(void)
{
  return 0x73;
}

struct C_01427680 { char* sub_01427680(void); };

// @baa 0x01427680
char* C_01427680::sub_01427680(void) { return (char*)this + 16; }

// @baa 0x01427690
int sub_01427690(int a0, int a1) { return a1; }

// @baa 0x014276a0
int sub_014276a0(int a0, int a1) { return a1; }

// @baa 0x014276b0
void sub_014276b0(S* p, INT Value)
{
    p->vf_18(Value);
}

extern char g_02158c10[];
// @baa 0x014276d0
int sub_014276d0(void) { return (int)g_02158c10; }

struct C_014276e0 {
    bool sub_014276e0();
};

// @baa 0x014276e0
bool C_014276e0::sub_014276e0(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 0x19c) != -1;
}

struct C_01427e30 {
    int sub_01427e30();
};

// @baa 0x01427e30
int C_01427e30::sub_01427e30(void)
{
    int param_1 = (int)this;

  return *(int *)(param_1 + 0x170) + *(int *)(param_1 + 0x164) + *(int *)(param_1 + 0x158);
}

// @baa 0x01427fe0
int UGenericBrowserType_SpeedTree::vf_000(void) { return 1; }

// @baa 0x01427ff0
bool UGenericBrowserType_SpeedTree::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

struct C_01428270 { C_01428270* sub_01428270(void); };

// @baa 0x01428270
C_01428270* C_01428270::sub_01428270(void) { return this; }

struct C_01428310 { int a, b, c; C_01428310(); };

// @baa 0x01428310
C_01428310::C_01428310() : a(0), b(0), c(0) {}

struct S_01428320 {
    TArray<DWORD> Items; // 0x00
    const DWORD* sub_01428320(INT Index) const;
};

// @baa 0x01428320
const DWORD* S_01428320::sub_01428320(INT Index) const
{
    return &Items(Index);
}

struct C_01428370 { int a, b, c; C_01428370(); };

// @baa 0x01428370
C_01428370::C_01428370() : a(0), b(0), c(0) {}

struct C_01428380 { int a, b, c; C_01428380(); };

// @baa 0x01428380
C_01428380::C_01428380() : a(0), b(0), c(0) {}

struct C_01428390 { int a, b, c; C_01428390(); };

// @baa 0x01428390
C_01428390::C_01428390() : a(0), b(0), c(0) {}

struct C_014283a0 { int a, b, c; C_014283a0(); };

// @baa 0x014283a0
C_014283a0::C_014283a0() : a(0), b(0), c(0) {}

struct T_014283b0 { int x; };

// @baa 0x014283b0
template T_014283b0& TIndirectArray<T_014283b0>::operator()(INT);

struct C_01428400 { int a, b, c; C_01428400(); };

// @baa 0x01428400
C_01428400::C_01428400() : a(0), b(0), c(0) {}

struct C_01428410 { int a, b, c; C_01428410(); };

// @baa 0x01428410
C_01428410::C_01428410() : a(0), b(0), c(0) {}

struct C_01428420 { int a, b, c; C_01428420(); };

// @baa 0x01428420
C_01428420::C_01428420() : a(0), b(0), c(0) {}

struct C_01428430 { int a, b, c; C_01428430(); };

// @baa 0x01428430
C_01428430::C_01428430() : a(0), b(0), c(0) {}

struct C_01428440 { int a, b, c; C_01428440(); };

// @baa 0x01428440
C_01428440::C_01428440() : a(0), b(0), c(0) {}

struct C_01428450 { int sub_01428450(void); };

// @baa 0x01428450
int C_01428450::sub_01428450(void) { return *(int*)((char*)this + 0); }

struct C_01428490 { int sub_01428490(void); };

// @baa 0x01428490
int C_01428490::sub_01428490(void) { return *(int*)((char*)this + 0); }

struct C_014284d0 {
    undefined4 sub_014284d0();
};

// @baa 0x014284d0
undefined4 C_014284d0::sub_014284d0(void)
{
    undefined4 * param_1 = (undefined4 *)this;
  return *param_1;
}

struct C_01428600 { int sub_01428600(void); };

// @baa 0x01428600
int C_01428600::sub_01428600(void) { return *(int*)((char*)this + 0); }

struct C_014286b0 { int sub_014286b0(void); };

// @baa 0x014286b0
int C_014286b0::sub_014286b0(void) { return *(int*)((char*)this + 0); }

struct C_01428730 { int sub_01428730(void); };

// @baa 0x01428730
int C_01428730::sub_01428730(void) { return *(int*)((char*)this + 0); }

struct C_01428740 { int sub_01428740(void); };

// @baa 0x01428740
int C_01428740::sub_01428740(void) { return *(int*)((char*)this + 0); }

struct C_01428750 { int sub_01428750(void); };

// @baa 0x01428750
int C_01428750::sub_01428750(void) { return *(int*)((char*)this + 0); }

struct C_014287d0 { int sub_014287d0(void); };

// @baa 0x014287d0
int C_014287d0::sub_014287d0(void) { return *(int*)((char*)this + 0); }

struct C_01428850 {
    int sub_01428850();
};

// @baa 0x01428850
int C_01428850::sub_01428850(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_01428860 {
    int sub_01428860();
};

// @baa 0x01428860
int C_01428860::sub_01428860(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_01428870 {
    int sub_01428870();
};

// @baa 0x01428870
int C_01428870::sub_01428870(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_01428880 {
    int sub_01428880();
};

// @baa 0x01428880
int C_01428880::sub_01428880(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_01428890 {
    int sub_01428890();
};

// @baa 0x01428890
int C_01428890::sub_01428890(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_014288a0 { int sub_014288a0(void); };

// @baa 0x014288a0
int C_014288a0::sub_014288a0(void) { return *(int*)((char*)this + 0); }

// @baa 0x014288b0
undefined4 sub_014288b0(int * param_1, int * param_2)
{
  if ((*param_1 == *param_2) && (param_1[1] == param_2[1])) {
    return 1;
  }
  return 0;
}

struct C_014288d0 { int sub_014288d0(void); };

// @baa 0x014288d0
int C_014288d0::sub_014288d0(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_014288e0 { int sub_014288e0(void); };

// @baa 0x014288e0
int C_014288e0::sub_014288e0(void) { return *(int*)((char*)this + 0); }

struct C_014288f0 { int sub_014288f0(void); };

// @baa 0x014288f0
int C_014288f0::sub_014288f0(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_01428900 { int sub_01428900(void); };

// @baa 0x01428900
int C_01428900::sub_01428900(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_01428910 { int sub_01428910(void); };

// @baa 0x01428910
int C_01428910::sub_01428910(void) { return *(int*)((char*)this + 0); }

struct C_01428920 { int sub_01428920(void); };

// @baa 0x01428920
int C_01428920::sub_01428920(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_01428950 { int sub_01428950(void); };

// @baa 0x01428950
int C_01428950::sub_01428950(void) { return *(int*)((char*)this + 0); }

struct C_01428960 { int sub_01428960(void); };

// @baa 0x01428960
int C_01428960::sub_01428960(void) { return *(int*)((char*)this + 0); }

struct C_01428970 { int sub_01428970(void); };

// @baa 0x01428970
int C_01428970::sub_01428970(void) { return *(int*)((char*)this + 0); }

struct C_01428980 { int sub_01428980(void); };

// @baa 0x01428980
int C_01428980::sub_01428980(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_014289b0 { int sub_014289b0(void); };

// @baa 0x014289b0
int C_014289b0::sub_014289b0(void) { return *(int*)((char*)this + 0); }

struct C_014289e0 {
    int sub_014289e0(int);
};

// @baa 0x014289e0
int C_014289e0::sub_014289e0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x1c;
}

struct C_01428a00 {
    int sub_01428a00(int);
};

// @baa 0x01428a00
int C_01428a00::sub_01428a00(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

struct C_01428a10 {
    int sub_01428a10(int);
};

// @baa 0x01428a10
int C_01428a10::sub_01428a10(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x28;
}

struct C_01428a20 {
    int sub_01428a20(int);
};

// @baa 0x01428a20
int C_01428a20::sub_01428a20(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_01428a30 {
    int sub_01428a30(int);
};

// @baa 0x01428a30
int C_01428a30::sub_01428a30(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_01428a40 { int sub_01428a40(void); };

// @baa 0x01428a40
int C_01428a40::sub_01428a40(void) { return *(int*)((char*)this + 20); }

struct C_01428a50 {
    int sub_01428a50(int);
};

// @baa 0x01428a50
int C_01428a50::sub_01428a50(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x1c;
}

struct C_01428a70 {
    int sub_01428a70(int);
};

// @baa 0x01428a70
int C_01428a70::sub_01428a70(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

struct C_01428a80 {
    int sub_01428a80(int);
};

// @baa 0x01428a80
int C_01428a80::sub_01428a80(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_01428a90 {
    int sub_01428a90(int);
};

// @baa 0x01428a90
int C_01428a90::sub_01428a90(int param_2)
{
    int * param_1 = (int *)this;

  return param_2 * 0x10 + *param_1;
}

struct C_01428aa0 { int sub_01428aa0(void); };

// @baa 0x01428aa0
int C_01428aa0::sub_01428aa0(void) { return *(int*)((char*)this + 20); }

struct C_01428ab0 { int sub_01428ab0(void); };

// @baa 0x01428ab0
int C_01428ab0::sub_01428ab0(void) { return *(int*)((char*)this + 20); }

struct C_01428ac0 { int sub_01428ac0(void); };

// @baa 0x01428ac0
int C_01428ac0::sub_01428ac0(void) { return *(int*)((char*)this + 20); }

struct C_01428ad0 { int sub_01428ad0(void); };

// @baa 0x01428ad0
int C_01428ad0::sub_01428ad0(void) { return *(int*)((char*)this + 20); }

struct C_01428ae0 { int sub_01428ae0(void); };

// @baa 0x01428ae0
int C_01428ae0::sub_01428ae0(void) { return *(int*)((char*)this + 20); }

struct C_01428af0 { int sub_01428af0(void); };

// @baa 0x01428af0
int C_01428af0::sub_01428af0(void) { return *(int*)((char*)this + 20); }

struct C_01428b00 { int sub_01428b00(void); };

// @baa 0x01428b00
int C_01428b00::sub_01428b00(void) { return *(int*)((char*)this + 20); }

struct C_01428b10 { int sub_01428b10(void); };

// @baa 0x01428b10
int C_01428b10::sub_01428b10(void) { return *(int*)((char*)this + 20); }

struct C_01428b20 { int sub_01428b20(void); };

// @baa 0x01428b20
int C_01428b20::sub_01428b20(void) { return *(int*)((char*)this + 20); }

struct C_0142cbc0 {
    undefined4 sub_0142cbc0(undefined4);
    int sub_014293a0(int, int);
};

// @baa 0x0142cbc0
undefined4 C_0142cbc0::sub_0142cbc0(undefined4 param_2)
{
    int param_1 = (int)this;
  ((C_0142cbc0 *)(this))->sub_014293a0(param_2, param_1 + 0x31c);
  return param_2;
}

struct C_view_0142cbe0 {
    int sub_00547da0(int);
};

// @baa 0x0142cbe0
int URFMODSound::sub_0142cbe0(int param_2)
{
    int param_1 = (int)this;
  ((C_view_0142cbe0 *)(this))->sub_00547da0(param_2);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
  return param_1;
}

struct A_0142d0d0 { virtual void sub_0142d150(); char pad[804]; };

struct B_0142d0d0 { virtual void sub_0142d150(); };

struct C_0142d0d0 : A_0142d0d0, B_0142d0d0 { virtual void sub_0142d150(); C_0142d0d0(); };

C_0142d0d0::C_0142d0d0() {}

// @baa 0x0142d0d0
void C_0142d0d0::sub_0142d150() {}

struct C_0142d0e0 { int sub_0142d0e0(void); };

// @baa 0x0142d0e0
int C_0142d0e0::sub_0142d0e0(void) { return *(int*)((char*)this + 832); }

struct C_0142d150 {
    undefined4 sub_0142d150(byte);
};

int sub_0142d070(void);
// @baa 0x0142d150
undefined4 C_0142d150::sub_0142d150(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0142d070();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct A_0142d290 { virtual void sub_01432ce0(); char pad[408]; };

struct B_0142d290 { virtual void sub_01432ce0(); };

struct C_0142d290 : A_0142d290, B_0142d290 { virtual void sub_01432ce0(); C_0142d290(); };

C_0142d290::C_0142d290() {}

// @baa 0x0142d290
void C_0142d290::sub_01432ce0() {}
