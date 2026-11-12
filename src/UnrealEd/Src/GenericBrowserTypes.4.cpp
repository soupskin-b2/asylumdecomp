// GenericBrowserTypes.cpp (part 4 of 4): 21 functions
// Placed here by: neighbours 3, class 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

struct wxMenu {
    __declspec(dllimport) virtual ~wxMenu();
};

struct C : public wxMenu {
    void sub_01167970();
};

// @baa 0x01167970
void C::sub_01167970()
{
    wxMenu::~wxMenu();
}

struct C_01167db0 : public wxMenu {
    void sub_01167db0();
};

// @baa 0x01167db0
void C_01167db0::sub_01167db0()
{
    wxMenu::~wxMenu();
}

struct C_01169a60 : public wxMenu {
    void sub_01169a60();
};

// @baa 0x01169a60
void C_01169a60::sub_01169a60()
{
    wxMenu::~wxMenu();
}

extern TArray<UObject*> g_026a1ca4;
 /* UObject::GObjObjects */
extern UClass* g_026d0ed8;
          /* PrivateStaticClass of the iterated UnrealEd class */
UClass* sub_01181690(const TCHAR* Package);
void sub_0115cef0();
inline UClass* StaticClass_026d0ed8()
{
    if (!g_026d0ed8)
    {
        g_026d0ed8 = sub_01181690(TEXT("UnrealEd"));
        sub_0115cef0();
    }
    return g_026d0ed8;
}

class FObjectIterator {
public:
    UClass* Class;
    INT Index;
    QWORD ExclusionFlags;

    FObjectIterator(UClass* InClass, UBOOL bOnlyGCedObjects); /* 0x004153a0 */
    void sub_00410de0();                                       /* operator++ */
};

class TObjectIterator_026d0ed8 : public FObjectIterator {
public:
    TObjectIterator_026d0ed8(UBOOL bOnlyGCedObjects);
};

// @baa 0x01189a90
TObjectIterator_026d0ed8::TObjectIterator_026d0ed8(UBOOL bOnlyGCedObjects)
    : FObjectIterator(StaticClass_026d0ed8(), bOnlyGCedObjects)
{
    ExclusionFlags |= 0x200;
    if (g_026a1ca4.IsValidIndex(Index) && (*(QWORD*)&g_026a1ca4(Index)->ObjectFlags & 0x200))
    {
        sub_00410de0();
    }
}

enum wxKeyCode { };

__declspec(dllimport) bool wxGetKeyState(wxKeyCode);
extern bool g_02616ee9;
// @baa 0x00404890
void sub_00404890()
{
    g_02616ee9 = wxGetKeyState((wxKeyCode)0x132) ? true : false;
}

struct I {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(int a1, int a2);
};

struct C_00438b30 {
    char pad[8];
    I Member;
    void sub_00438b30(int a1, int a2);
};

// @baa 0x00438b30
void C_00438b30::sub_00438b30(int a1, int a2)
{
    Member.v7(a1, a2);
}

extern char g_026d4e00[];
// @baa 0x0115a490
void sub_0115a490(void)
{
    char* Base = *(char**)g_026d4e00;
    char* Object = *(char**)(Base + 0x124);
    void** VTable = *(void***)(Object);
    typedef void (__stdcall *Fn)(int);
    ((Fn)VTable[0x26])(1);
}

// @baa 0x0115a4c0
void sub_0115a4c0(void)
{
    char* Base = *(char**)g_026d4e00;
    char* Object = *(char**)(Base + 0x124);
    void** VTable = *(void***)(Object);
    typedef void (__stdcall *Fn)(int);
    ((Fn)VTable[0x26])(0);
}

extern void sub_0116f960(INT Arg);
// @baa 0x0116ffb0
void UGenericBrowserType_RenderTexture::vf_120(INT FunctionIndex, INT Argument)
{
    if (FunctionIndex == 0x4157)
    {
        sub_0116f960(Argument);
    }
}

class wxDialog
{
public:
    __declspec(dllimport) virtual ~wxDialog();
};

extern void* g_02248fe0[];
struct C_0130d540 : public wxDialog
{
    void sub_0130d540();
};

// @baa 0x0130d540
void C_0130d540::sub_0130d540()
{
    *(void**)this = g_02248fe0;
    ((wxDialog*)this)->wxDialog::~wxDialog();
}

struct Sub
{
    void sub_011725d0(void* Arg);
};

struct C_01173690
{
    char pad_00[0x40];
    INT Arg;
    char pad_44[0x10];
    Sub Target;

    void sub_01173690();
};

// @baa 0x01173690
void C_01173690::sub_01173690()
{
    Target.sub_011725d0(&Arg);
}

extern INT wxEmptyString_exref;
struct C_0045c9f0
{
    INT Value;

    C_0045c9f0* sub_0045c9f0();
};

// @baa 0x0045c9f0
C_0045c9f0* C_0045c9f0::sub_0045c9f0()
{
    Value = *(INT*)wxEmptyString_exref;
    return this;
}

struct C_004c0d80
{
    char pad_00[0x20];
    float Value;

    void sub_004c0d80(float In);
};

// @baa 0x004c0d80
void C_004c0d80::sub_004c0d80(float In)
{
    Value = In;
}

struct C_0045cb40
{
    float First;
    float Second;

    C_0045cb40* sub_0045cb40();
};

// @baa 0x0045cb40
C_0045cb40* C_0045cb40::sub_0045cb40()
{
    First = 0.0f;
    Second = 0.0f;
    return this;
}

struct Sub_004cbf50
{
    void sub_004cab50();
};

struct C_004cbf50
{
    char pad_00[0x28];
    Sub_004cbf50* Object;

    void sub_004cbf50(INT Unused);
};

// @baa 0x004cbf50
void C_004cbf50::sub_004cbf50(INT)
{
    if (Object)
        Object->sub_004cab50();
}

struct C_0052e0e0 {
    void sub_0052e0e0(int NewValue);
};

struct C_0052f710 {
    void sub_0052f710(int NewValue);
};

// @baa 0x0052f710
// @baa 0x0052f710
void C_0052f710::sub_0052f710(int NewValue)
{
    char *Self = (char *)this;

    *(int *)(Self + 0x160) = NewValue;
    ((C_0052e0e0 *)(Self + 0x16c))->sub_0052e0e0(NewValue);
    return;
}

int probe(int Seed)
{
    C_0052f710 Object;
    Object.sub_0052f710(Seed);
    return Seed ^ 1;
}

struct T2_0052e0e0
{
    void sub_0052e0e0(int);
};

struct T2_00530ae0
{
    char Data[0x15c];
    DWORD Field_015c;
    T2_0052e0e0 Item_0160;
    void sub_00530ae0(int Item);
};

// @baa 0x00530ae0
void T2_00530ae0::sub_00530ae0(int Item)
{
    Field_015c = Item;
    Item_0160.sub_0052e0e0(Item);
}

// @baa 0x0115b4c0
void UGenericBrowserType_FracturedStaticMesh::vf_120(int a0, int a1) {  }

// @baa 0x0115b4d0
int UGenericBrowserType_MorphWeightSequence::vf_114(int a0) { return 1; }

class wxWindowBase;
class wxWindowBase {
public:
    __declspec(dllimport) void ReleaseMouse();
};

// A generic browser coordinate, held as two floats (0x0045cb50 writes it).
struct C_0045cb50 {
    FLOAT X;
    FLOAT Y;
    wxWindowBase * Window;
    C_0045cb50 * sub_0045cb50(FLOAT InX, FLOAT InY);
};

// @baa 0x0045cb50
// 0x0045cb50 : store the two components and return this.
C_0045cb50 * C_0045cb50::sub_0045cb50(FLOAT InX, FLOAT InY)
{
    X = InX;
    Y = InY;
    return this;
}

void C_0045cb50_caller(C_0045cb50 * Self, FLOAT A, FLOAT B)
{
    Self->sub_0045cb50(A, B);
}

struct S0045c9a0 {
    int A;
    float B;
    float C;
    unsigned char D;

    S0045c9a0* sub_0045c9a0();
};

// @baa 0x0045c9a0
S0045c9a0* S0045c9a0::sub_0045c9a0()
{
    A = 0;
    B = 0.0f;
    C = 0.0f;
    D = 0;
    return this;
}

static int s_driver()
{
    S0045c9a0* p = new S0045c9a0;
    return (int)p->sub_0045c9a0();
}
