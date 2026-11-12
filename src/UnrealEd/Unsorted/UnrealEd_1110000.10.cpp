// UnrealEd_1110000.cpp: 9 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Core.h"

class wxUpdateUIEvent;
class wxUpdateUIEvent {
  public:
    __declspec(dllimport) void Check(bool);
};

// The wx widget base occupies 180 virtual slots; our handler sits at slot 180 (vtable offset 0x2d0).
struct wxWidgetBase {
    virtual void pad_0() { }
    virtual void pad_1() { }
    virtual void pad_2() { }
    virtual void pad_3() { }
    virtual void pad_4() { }
    virtual void pad_5() { }
    virtual void pad_6() { }
    virtual void pad_7() { }
    virtual void pad_8() { }
    virtual void pad_9() { }
    virtual void pad_10() { }
    virtual void pad_11() { }
    virtual void pad_12() { }
    virtual void pad_13() { }
    virtual void pad_14() { }
    virtual void pad_15() { }
    virtual void pad_16() { }
    virtual void pad_17() { }
    virtual void pad_18() { }
    virtual void pad_19() { }
    virtual void pad_20() { }
    virtual void pad_21() { }
    virtual void pad_22() { }
    virtual void pad_23() { }
    virtual void pad_24() { }
    virtual void pad_25() { }
    virtual void pad_26() { }
    virtual void pad_27() { }
    virtual void pad_28() { }
    virtual void pad_29() { }
    virtual void pad_30() { }
    virtual void pad_31() { }
    virtual void pad_32() { }
    virtual void pad_33() { }
    virtual void pad_34() { }
    virtual void pad_35() { }
    virtual void pad_36() { }
    virtual void pad_37() { }
    virtual void pad_38() { }
    virtual void pad_39() { }
    virtual void pad_40() { }
    virtual void pad_41() { }
    virtual void pad_42() { }
    virtual void pad_43() { }
    virtual void pad_44() { }
    virtual void pad_45() { }
    virtual void pad_46() { }
    virtual void pad_47() { }
    virtual void pad_48() { }
    virtual void pad_49() { }
    virtual void pad_50() { }
    virtual void pad_51() { }
    virtual void pad_52() { }
    virtual void pad_53() { }
    virtual void pad_54() { }
    virtual void pad_55() { }
    virtual void pad_56() { }
    virtual void pad_57() { }
    virtual void pad_58() { }
    virtual void pad_59() { }
    virtual void pad_60() { }
    virtual void pad_61() { }
    virtual void pad_62() { }
    virtual void pad_63() { }
    virtual void pad_64() { }
    virtual void pad_65() { }
    virtual void pad_66() { }
    virtual void pad_67() { }
    virtual void pad_68() { }
    virtual void pad_69() { }
    virtual void pad_70() { }
    virtual void pad_71() { }
    virtual void pad_72() { }
    virtual void pad_73() { }
    virtual void pad_74() { }
    virtual void pad_75() { }
    virtual void pad_76() { }
    virtual void pad_77() { }
    virtual void pad_78() { }
    virtual void pad_79() { }
    virtual void pad_80() { }
    virtual void pad_81() { }
    virtual void pad_82() { }
    virtual void pad_83() { }
    virtual void pad_84() { }
    virtual void pad_85() { }
    virtual void pad_86() { }
    virtual void pad_87() { }
    virtual void pad_88() { }
    virtual void pad_89() { }
    virtual void pad_90() { }
    virtual void pad_91() { }
    virtual void pad_92() { }
    virtual void pad_93() { }
    virtual void pad_94() { }
    virtual void pad_95() { }
    virtual void pad_96() { }
    virtual void pad_97() { }
    virtual void pad_98() { }
    virtual void pad_99() { }
    virtual void pad_100() { }
    virtual void pad_101() { }
    virtual void pad_102() { }
    virtual void pad_103() { }
    virtual void pad_104() { }
    virtual void pad_105() { }
    virtual void pad_106() { }
    virtual void pad_107() { }
    virtual void pad_108() { }
    virtual void pad_109() { }
    virtual void pad_110() { }
    virtual void pad_111() { }
    virtual void pad_112() { }
    virtual void pad_113() { }
    virtual void pad_114() { }
    virtual void pad_115() { }
    virtual void pad_116() { }
    virtual void pad_117() { }
    virtual void pad_118() { }
    virtual void pad_119() { }
    virtual void pad_120() { }
    virtual void pad_121() { }
    virtual void pad_122() { }
    virtual void pad_123() { }
    virtual void pad_124() { }
    virtual void pad_125() { }
    virtual void pad_126() { }
    virtual void pad_127() { }
    virtual void pad_128() { }
    virtual void pad_129() { }
    virtual void pad_130() { }
    virtual void pad_131() { }
    virtual void pad_132() { }
    virtual void pad_133() { }
    virtual void pad_134() { }
    virtual void pad_135() { }
    virtual void pad_136() { }
    virtual void pad_137() { }
    virtual void pad_138() { }
    virtual void pad_139() { }
    virtual void pad_140() { }
    virtual void pad_141() { }
    virtual void pad_142() { }
    virtual void pad_143() { }
    virtual void pad_144() { }
    virtual void pad_145() { }
    virtual void pad_146() { }
    virtual void pad_147() { }
    virtual void pad_148() { }
    virtual void pad_149() { }
    virtual void pad_150() { }
    virtual void pad_151() { }
    virtual void pad_152() { }
    virtual void pad_153() { }
    virtual void pad_154() { }
    virtual void pad_155() { }
    virtual void pad_156() { }
    virtual void pad_157() { }
    virtual void pad_158() { }
    virtual void pad_159() { }
    virtual void pad_160() { }
    virtual void pad_161() { }
    virtual void pad_162() { }
    virtual void pad_163() { }
    virtual void pad_164() { }
    virtual void pad_165() { }
    virtual void pad_166() { }
    virtual void pad_167() { }
    virtual void pad_168() { }
    virtual void pad_169() { }
    virtual void pad_170() { }
    virtual void pad_171() { }
    virtual void pad_172() { }
    virtual void pad_173() { }
    virtual void pad_174() { }
    virtual void pad_175() { }
    virtual void pad_176() { }
    virtual void pad_177() { }
    virtual void pad_178() { }
    virtual void pad_179() { }
};

struct wxUpdateUIWindow : public wxWidgetBase {
  virtual bool ShouldBeEnabled() { return false; }

  void sub_01117d70(wxUpdateUIEvent *Event);
};

// @baa 0x01117d70
void wxUpdateUIWindow::sub_01117d70(wxUpdateUIEvent *Event)
{
    Event->Check(ShouldBeEnabled());
}

struct T {
    virtual int f00() { return 0; }
    virtual int f01() { return 0; }
    virtual int f02() { return 0; }
    virtual int f03() { return 0; }
    virtual int f04() { return 0; }
    virtual int f05() { return 0; }
    virtual int f06() { return 0; }
    virtual int f07() { return 0; }
    virtual int f08() { return 0; }
    virtual int f09() { return 0; }
    virtual int f10() { return 0; }
    virtual int f11() { return 0; }
    virtual int f12() { return 0; }
    virtual int f13() { return 0; }
    virtual int f14() { return 0; }
    virtual int f15() { return 0; }
    virtual int f16() { return 0; }
    virtual int f17() { return 0; }
    virtual int f18() { return 0; }
    virtual int f19() { return 0; }
    virtual int f20() { return 0; }
    virtual int f21() { return 0; }
    virtual int f22() { return 0; }
    virtual int f23() { return 0; }
    virtual int f24() { return 0; }
    virtual int f25() { return 0; }
    virtual int f26() { return 0; }
    virtual int f27() { return 0; }
    virtual int f28() { return 0; }
    virtual int f29() { return 0; }
    virtual int f30() { return 0; }
    virtual int f31() { return 0; }
    virtual int f32() { return 0; }
    virtual int f33() { return 0; }
    virtual int f34() { return 0; }
    virtual int f35() { return 0; }
    virtual int f36() { return 0; }
    virtual int f37() { return 0; }
    virtual void Method(int A);
};

extern T* g_026d4df8;
struct U {
    void sub_01117930(int A);
};

// @baa 0x01117930
void U::sub_01117930(int A)
{
    g_026d4df8->Method(1);
}

class wxNotifyEvent
{
public:
    __declspec(dllimport) void Veto();
};

// @baa 0x011171d0
void __stdcall sub_011171d0(wxNotifyEvent* Event)
{
    Event->wxNotifyEvent::Veto();
}

INT sub_00bedf30(void* Object);
struct C
{
    char pad_00[0xc];
    void* Object;

    INT sub_0111ff50();
};

// @baa 0x0111ff50
INT C::sub_0111ff50()
{
    return sub_00bedf30(Object);
}

struct Inner
{
    char pad_00[8];
    void* Pointer;
};

struct Sub
{
    void sub_00cc65f0();
};

struct C_011161d0
{
    char pad_00[0x144];
    Inner* Object;

    void sub_011161d0();
};

// @baa 0x011161d0
void C_011161d0::sub_011161d0()
{
    ((Sub*)Object->Pointer)->sub_00cc65f0();
}

struct Sub_01117800
{
    void sub_01283250();
};

extern Sub_01117800* g_026d4dfc;
// @baa 0x01117800
void __stdcall sub_01117800(INT Unused)
{
    g_026d4dfc->sub_01283250();
}

struct Sub_01117840
{
    void sub_00f973c0();
};

extern Sub_01117840* g_026cce28;
// @baa 0x01117840
void __stdcall sub_01117840(INT Unused)
{
    g_026cce28->sub_00f973c0();
}

struct SBody_ {
    virtual void f0() {}
    virtual void f1() {}
    virtual void f2() {}
    virtual void f3() {}
    virtual void sub_01116bc0(int A) {}
};

struct SWrapper_ {
    char pad[0x110];
    SBody_* Body;
    void sub_01116bc0(int A);
};

// @baa 0x01116bc0
void SWrapper_::sub_01116bc0(int A)
{
    if (Body)
        Body->sub_01116bc0(A);
}

void sub_helper()
{
    SWrapper_ w;
    w.sub_01116bc0(0);
}

struct SubVirtTarget
{
    virtual void sub_00000000();
    virtual void sub_00000004();
    virtual void Notify();
};

struct Sub01115ef0Owner
{
    char _pad[0x1c4];
    SubVirtTarget* _target;

    void sub_01115ef0(int InParam);
};

// @baa 0x01115ef0
void Sub01115ef0Owner::sub_01115ef0(int InParam)
{
    if (_target != 0)
    {
        _target->Notify();
    }
}
