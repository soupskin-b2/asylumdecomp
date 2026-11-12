// Editor_0710000.cpp (part 2 of 2): 2 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct USkyLightComponent {
    int GetLightType();
};

// @baa 0x00716460
int USkyLightComponent::GetLightType()
{ return 0; }

// 00716100: if (m_Target) { m_Target->Release(); m_Target = 0; }
// The virtual at slot 0x4c of the target object is called with the
// target as `this`, then the pointer stored at offset 0xc is zeroed.
class F00716100Target
{
public:
    virtual void v0() {}
    virtual void v1() {}
    virtual void v2() {}
    virtual void v3() {}
    virtual void v4() {}
    virtual void v5() {}
    virtual void v6() {}
    virtual void v7() {}
    virtual void v8() {}
    virtual void v9() {}
    virtual void v10() {}
    virtual void v11() {}
    virtual void v12() {}
    virtual void v13() {}
    virtual void v14() {}
    virtual void v15() {}
    virtual void v16() {}
    virtual void v17() {}
    virtual void v18() {}
    virtual void Release() {}
};

struct S00716100
{
    char m_Reserved[0xc];
    F00716100Target* m_Target;

    void sub_00716100();
};

// @baa 0x00716100
void S00716100::sub_00716100()
{
    if (m_Target != 0)
    {
        m_Target->Release();
        m_Target = 0;
    }
}
