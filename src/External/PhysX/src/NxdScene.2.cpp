// NxdScene.cpp: 3 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Core.h"

struct Logger {
    void sub_01a39b30(const char* name);
};

struct ForceFieldLinearKernel {
    virtual int f00() = 0;
    virtual int f01() = 0;
    virtual int f02() = 0;
    virtual int f03() = 0;
    virtual int f04() = 0;
    virtual int f05() = 0;
    virtual int f06() = 0;
    virtual int f07() = 0;
    virtual int f08() = 0;
    virtual int f09() = 0;
    virtual int f0a() = 0;
    virtual int f0b() = 0;
    virtual int f0c() = 0;
    virtual int f0d() = 0;
    virtual int f0e() = 0;
    virtual int f0f() = 0;
    virtual int f10() = 0;
    virtual int f11() = 0;
    virtual int f12() = 0;
    virtual int f13() = 0;
    virtual int f14() = 0;
    virtual int f15() = 0;
    virtual int sub_01a3a180() = 0;   // index 22 -> vtable slot 0x58
};

struct NxdScene {
    char pad_0x10[0x10];
    ForceFieldLinearKernel* Kernel;
    int sub_01a3a180();
};

// @baa 0x01a3a180
int NxdScene::sub_01a3a180()
{
    ((Logger*)this)->sub_01a39b30("getNextForceFieldLinearKernel");
    return Kernel->sub_01a3a180();
}

// NxdScene's scene interface. createForceFieldVariety sits at vtable slot 28 (offset 0x70).
struct INxdSceneInterface_
{
    virtual int pad00();
    virtual int pad01();
    virtual int pad02();
    virtual int pad03();
    virtual int pad04();
    virtual int pad05();
    virtual int pad06();
    virtual int pad07();
    virtual int pad08();
    virtual int pad09();
    virtual int pad10();
    virtual int pad11();
    virtual int pad12();
    virtual int pad13();
    virtual int pad14();
    virtual int pad15();
    virtual int pad16();
    virtual int pad17();
    virtual int pad18();
    virtual int pad19();
    virtual int pad20();
    virtual int pad21();
    virtual int pad22();
    virtual int pad23();
    virtual int pad24();
    virtual int pad25();
    virtual int pad26();
    virtual int pad27();
    virtual void createForceFieldVariety();
};

struct NxdScene_
{
    char pad[0x10];
    INxdSceneInterface_* scene_interface;
    void sub_01a3a220();
    void sub_01a39b30(const char* name);
};

// @baa 0x01a3a220
void NxdScene_::sub_01a3a220()
{
    sub_01a39b30("createForceFieldVariety");
    scene_interface->createForceFieldVariety();
}

// NxdScene.cpp - internal PhysX scene wrapper.
//
// NxdScene is a scene wrapper. The buffered variant keeps the pointer to the
// real (unbuffered) scene at offset 0x10; every method first checks that no
// simulation write pass is running (sub_01a39b30, passed the calling
// function's name for the diagnostic), then forwards to the real scene.
struct NxdScene_01a3a1c0 {
    // slots 0..25 of the vtable (the force-field / actor / body API)
    virtual void releaseActor();
    virtual void createActor();
    virtual void releaseBody();
    virtual void createBody();
    virtual void releaseJoint();
    virtual void createJoint();
    virtual void releaseConstraint();
    virtual void createConstraint();
    virtual void releaseAggregate();
    virtual void createAggregate();
    virtual void findAggregate();
    virtual void removeAggregate();
    virtual void releaseMaterial();
    virtual void createMaterial();
    virtual void releaseCompartment();
    virtual void createForceField();
    virtual void setForceField();
    virtual void releaseForceFieldLinearKernel();
    virtual void releaseForceFieldVariety();
    virtual void releaseForceFieldMaterial();
    virtual void releaseForceFieldShapeGroup();
    virtual void releaseForceField();
    virtual void createForceFieldLinearKernel();
    virtual void resetForceFieldLinearKernelsIterator();
    virtual void getNextForceFieldLinearKernel();
    virtual void createForceFieldShapeGroup();
    // slot 26 (0x68 in the vtable): resetForceFieldShapeGroupsIterator
    virtual void resetForceFieldShapeGroupsIterator();
    // slots 27..: the rest of the force-field / filter API
    virtual void getNextForceFieldShapeGroup();
    virtual void createForceFieldVariety();
    virtual void createForceFieldMaterial();
    virtual void setForceFieldScale();
    virtual void createCompartment();
    virtual void setGroupCollisionFlag();
    virtual void setDominanceGroupPair();
    virtual void setActorGroupPairFlags();
    virtual void setFilterOps();
    virtual void setFilterBool();
    virtual void setFilterConstant0();
    virtual void setFilterConstant1();
    virtual void setTiming();
    virtual void setMaxCPUForLoadBalancing();
    virtual void getMaxCPUForLoadBalancing();
    virtual void setUserNotify();
    virtual void setUserContactModify();
    virtual void setUserTriggerReport();
    int m_nSceneType;           // 0x04
    int m_nWritePass;           // 0x08
    int m_pBufferedScene;       // 0x0c
    NxdScene_01a3a1c0* m_pScene; // 0x10: pointer to the real scene
    void sub_01a39b30(const char* FunctionName); // checkNotInWritePass
};

// @baa 0x01a3a1c0
void NxdScene_01a3a1c0::resetForceFieldShapeGroupsIterator()
{
    sub_01a39b30("resetForceFieldShapeGroupsIterator");
    m_pScene->resetForceFieldShapeGroupsIterator();
}
