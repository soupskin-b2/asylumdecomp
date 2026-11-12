// NxdScene.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

// NxdScene::CreateForceFieldMaterial (vtable slot 31 of NxdScene, 02405e6c)
class CForceFieldScene
{
public:
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
    virtual void f27();
    virtual void f28();
    virtual void f29();
    virtual void f30();
    virtual void CreateForceFieldMaterial();
};

class NxdScene
{
public:
    int m_04;
    int m_08;
    int m_0c;
    CForceFieldScene* m_Field;

    void sub_01a39b30(const char* FunctionName);

    virtual void CreateForceFieldMaterial();
};

// @baa 0x01a3a260
void NxdScene::CreateForceFieldMaterial()
{
    sub_01a39b30("createForceFieldMaterial");
    m_Field->CreateForceFieldMaterial();
}
