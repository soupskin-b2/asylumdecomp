// NxdScene.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

// A PhysX force field (its shape groups are owned by the scene below).
struct CForceField;
// The PhysX scene object that owns the force fields. Its slot-27 virtual
// walks to the next force field's shape group.
struct CForceFieldScene {
    virtual void f00();
    virtual void f01();
    virtual void f02();
    virtual void f03();
    virtual void f04();
    virtual void f05();
    virtual void f06();
    virtual void f07();
    virtual void f08();
    virtual void f09();
    virtual void f10();
    virtual void f11();
    virtual void f12();
    virtual void f13();
    virtual void f14();
    virtual void f15();
    virtual void f16();
    virtual void f17();
    virtual void f18();
    virtual void f19();
    virtual void f20();
    virtual void f21();
    virtual void f22();
    virtual void f23();
    virtual void f24();
    virtual void f25();
    virtual void f26();
    virtual CForceField* sub_01a3a300();
};

// The owning PhysX scene.
struct NxdScene {
    int m_04;
    int m_08;
    int m_0c;
    CForceFieldScene* m_ForceFieldScene;    /* 0x10 */

    // Verifies the scene is not in simulation before writing to it.
    void sub_01a39b30(const char* FuncName);

    virtual CForceField* sub_01a3a1e0();
};

// @baa 0x01a3a1e0
CForceField* NxdScene::sub_01a3a1e0()
{
    sub_01a39b30("getNextForceFieldShapeGroup");
    return m_ForceFieldScene->sub_01a3a300();
}
