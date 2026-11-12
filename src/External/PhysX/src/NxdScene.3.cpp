// NxdScene.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

// NxdScene.cpp
struct NxdSceneKernel
{
    virtual void v00(void);
    virtual void v01(void);
    virtual void v02(void);
    virtual void v03(void);
    virtual void v04(void);
    virtual void v05(void);
    virtual void v06(void);
    virtual void v07(void);
    virtual void v08(void);
    virtual void v09(void);
    virtual void v10(void);
    virtual void v11(void);
    virtual void v12(void);
    virtual void v13(void);
    virtual void v14(void);
    virtual void v15(void);
    virtual void v16(void);
    virtual void v17(void);
    virtual void v18(void);
    virtual void v19(void);
    virtual void v20(void);
    virtual void resetForceFieldLinearKernelsIterator(void);   // slot 21, 0x54
};

struct NxdScene
{
    char m_base[0x10];                    // 0x0
    NxdSceneKernel *m_kernel;             // 0x10
    void sub_01a39b30(const char *FunctionName);   // "not in simulation" guard (thiscall, ret 4)
    void sub_01a3a160(void);
};

// @baa 0x01a3a160
void NxdScene::sub_01a3a160(void)
{
    sub_01a39b30("resetForceFieldLinearKernelsIterator");
    m_kernel->resetForceFieldLinearKernelsIterator();
}
