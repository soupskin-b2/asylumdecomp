// UnPhysActorForceField.cpp: 19 functions
// Placed here by: file 10, callers 9.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x00d87430
IMPLEMENT_CLASS_AT(ANxGenericForceFieldBrush, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnPhysActorForceField.cpp", 21);

// @baa 0x00d87460
IMPLEMENT_CLASS_AT(ARB_ForceFieldExcludeVolume, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnPhysActorForceField.cpp", 25);

// @baa 0x00d87490
IMPLEMENT_CLASS_AT(ANxForceField, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnPhysActorForceField.cpp", 14);

// @baa 0x00d874c0
IMPLEMENT_CLASS_AT(ANxCylindricalForceField, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnPhysActorForceField.cpp", 16);

// @baa 0x00d874f0
IMPLEMENT_CLASS_AT(ANxCylindricalForceFieldCapsule, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnPhysActorForceField.cpp", 17);

// @baa 0x00d87520
IMPLEMENT_CLASS_AT(ANxGenericForceField, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnPhysActorForceField.cpp", 18);

// @baa 0x00d87550
IMPLEMENT_CLASS_AT(ANxGenericForceFieldBox, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnPhysActorForceField.cpp", 19);

// @baa 0x00d87580
IMPLEMENT_CLASS_AT(ANxGenericForceFieldCapsule, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnPhysActorForceField.cpp", 20);

// @baa 0x00d875b0
IMPLEMENT_CLASS_AT(ANxRadialForceField, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnPhysActorForceField.cpp", 15);

// @baa 0x00d875e0
// @baa 0x00d876a0
// @baa 0x00d87760
// @baa 0x00d87820
// @baa 0x00d878e0
// @baa 0x00d879a0
// @baa 0x00d87a60
// @baa 0x00d87b20
// @baa 0x00d87be0
extern void* g_026b62b8;
extern char g_01fb38d8[];
extern char g_020b1cb8[];
extern char g_020b1cc0[];
struct NV
{
    float X, Y, Z;
    NV(float v) { X = Y = Z = v; }
    NV(float x, float y, float z) { X = x; Y = y; Z = z; }
};

struct FDesc
{
    NV v0, v1, v2, v3, v4, v5, v6, v7, v8;
    float s;
    NV v9, v10, v11;
    int n;
    int pad;
    FDesc() : v0(0.0f), v1(0.0f, 0.0f, 0.0f), v2(0.0f, 0.0f, 0.0f), v3(0.0f, 0.0f, 0.0f),
              v4(0.0f), v5(0.0f, 0.0f, 0.0f), v6(0.0f, 0.0f, 0.0f), v7(0.0f, 0.0f, 0.0f),
              v8(0.0f), v9(0.0f), v10(0.0f), v11(0.0f) {}
};

struct VScene
{
    virtual void a0();
    virtual void a1();
    virtual void a2();
    virtual void a3();
    virtual void a4();
    virtual void a5();
    virtual void a6();
    virtual void a7();
    virtual void a8();
    virtual void a9();
    virtual void a10();
    virtual void a11();
    virtual void a12();
    virtual void a13();
    virtual void a14();
    virtual void a15();
    virtual void a16();
    virtual void a17();
    virtual void* CreateLinearKernel(const FDesc* Desc);
};

struct C
{
    char pad[0x1f8];
    void* LinearKernel;
    void* sub_009eef90();
    void sub_00d8b440();
    void sub_00d8c280();
};

void sub_009d78d0(void*);
int sub_0053df40(...);
int sub_006311e0(...);
// @baa 0x00d8c280
void C::sub_00d8c280()
{
    C* Holder = (C*)(*(void**)((char*)g_026b62b8 + 0x15c));
    void* Scene = Holder->sub_009eef90();
    FDesc Desc;
    Desc.s = 1.0f;
    Desc.n = 0;
    if (LinearKernel != NULL)
    {
        sub_006311e0("LinearKernel == NULL", g_020b1cc0, 0x23, g_020b1cb8);
    }
    sub_009d78d0(Scene);
    void* Kernel = ((VScene*)Scene)->CreateLinearKernel(&Desc);
    void** W = (void**)sub_0053df40(8, 8);
    if (W != NULL)
    {
        W[0] = &g_01fb38d8;
    }
    else
    {
        W = NULL;
    }
    W[1] = Kernel;
    ((void**)Kernel)[1] = W;
    LinearKernel = W;
    sub_00d8b440();
}
