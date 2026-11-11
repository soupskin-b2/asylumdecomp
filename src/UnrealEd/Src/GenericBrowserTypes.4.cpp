// GenericBrowserTypes.cpp (part 4 of 4): 9 functions
// Placed here by: neighbours 3, class 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

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
