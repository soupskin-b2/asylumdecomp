// PhysX_1a30000.cpp: 11 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

class NxdScene;
// Subobject at NxdScene+0x10; the called virtual is slot 61 (0xf4 in the vtable).
class NxdSceneImpl {
public:
    virtual void V00();
    virtual void V01();
    virtual void V02();
    virtual void V03();
    virtual void V04();
    virtual void V05();
    virtual void V06();
    virtual void V07();
    virtual void V08();
    virtual void V09();
    virtual void V10();
    virtual void V11();
    virtual void V12();
    virtual void V13();
    virtual void V14();
    virtual void V15();
    virtual void V16();
    virtual void V17();
    virtual void V18();
    virtual void V19();
    virtual void V20();
    virtual void V21();
    virtual void V22();
    virtual void V23();
    virtual void V24();
    virtual void V25();
    virtual void V26();
    virtual void V27();
    virtual void V28();
    virtual void V29();
    virtual void V30();
    virtual void V31();
    virtual void V32();
    virtual void V33();
    virtual void V34();
    virtual void V35();
    virtual void V36();
    virtual void V37();
    virtual void V38();
    virtual void V39();
    virtual void V40();
    virtual void V41();
    virtual void V42();
    virtual void V43();
    virtual void V44();
    virtual void V45();
    virtual void V46();
    virtual void V47();
    virtual void V48();
    virtual void V49();
    virtual void V50();
    virtual void V51();
    virtual void V52();
    virtual void V53();
    virtual void V54();
    virtual void V55();
    virtual void V56();
    virtual void V57();
    virtual void V58();
    virtual void V59();
    virtual void V60();
    virtual int Call61(int Arg);
};

class NxdScene {
    int m_Field0;
    int m_Field1;
    int m_Field2;
    NxdSceneImpl* m_Sub; // offset 0x10
public:
    virtual void V00();
    virtual void V01();
    virtual void V02();
    virtual void V03();
    virtual void V04();
    virtual void V05();
    virtual void V06();
    virtual void V07();
    virtual void V08();
    virtual void V09();
    virtual void V10();
    virtual void V11();
    virtual void V12();
    virtual void V13();
    virtual void V14();
    virtual void V15();
    virtual void V16();
    virtual void V17();
    virtual void V18();
    virtual void V19();
    virtual void V20();
    virtual void V21();
    virtual void V22();
    virtual void V23();
    virtual void V24();
    virtual void V25();
    virtual void V26();
    virtual void V27();
    virtual void V28();
    virtual void V29();
    virtual void V30();
    virtual void V31();
    virtual void V32();
    virtual void V33();
    virtual void V34();
    virtual void V35();
    virtual void V36();
    virtual void V37();
    virtual void V38();
    virtual void V39();
    virtual void V40();
    virtual void V41();
    virtual void V42();
    virtual void V43();
    virtual void V44();
    virtual void V45();
    virtual void V46();
    virtual void V47();
    virtual void V48();
    virtual void V49();
    virtual void V50();
    virtual void V51();
    virtual void V52();
    virtual void V53();
    virtual void V54();
    virtual void V55();
    virtual void V56();
    virtual void V57();
    virtual void V58();
    virtual void V59();
    virtual void V60();
    virtual int sub_01a39360(int Arg);
};

// @baa 0x01a39360
int NxdScene::sub_01a39360(int Arg)
{
    m_Sub->Call61(Arg);
    return Arg;
}

// Reports whether the handle at +0x14 of the given record has been assigned.
struct FRecord_01a3c7c0
{
	BYTE Header[0x14];
	INT Handle; /* 0x14 */
};

// @baa 0x01a3c7c0
INT __stdcall sub_01a3c7c0(const FRecord_01a3c7c0* Record)
{
	return Record->Handle != -1;
}

// Reports whether the handle at +0x18 of the given record has been assigned.
struct FRecord_01a3c830
{
	BYTE Header[0x18];
	INT Handle; /* 0x18 */
};

// @baa 0x01a3c830
INT __stdcall sub_01a3c830(const FRecord_01a3c830* Record)
{
	return Record->Handle != -1;
}

// Reports whether the handle at +0x10 of the given record has been assigned.
struct FRecord_01a3c890
{
	BYTE Header[0x10];
	INT Handle; /* 0x10 */
};

// @baa 0x01a3c890
INT __stdcall sub_01a3c890(const FRecord_01a3c890* Record)
{
	return Record->Handle != -1;
}

// Reports whether the handle at +0x14 of the given record has been assigned.
struct FRecord_01a3c900
{
	BYTE Header[0x14];
	INT Handle; /* 0x14 */
};

// @baa 0x01a3c900
INT __stdcall sub_01a3c900(const FRecord_01a3c900* Record)
{
	return Record->Handle != -1;
}

// Reports whether the handle at +0x68 of the given record has been assigned.
struct FRecord_01a3c960
{
	BYTE Header[0x68];
	INT Handle; /* 0x68 */
};

// @baa 0x01a3c960
INT __stdcall sub_01a3c960(const FRecord_01a3c960* Record)
{
	return Record->Handle != -1;
}

// Reports whether the handle at +0x6c of the given record has been assigned.
struct FRecord_01a3c9d0
{
	BYTE Header[0x6c];
	INT Handle; /* 0x6c */
};

// @baa 0x01a3c9d0
INT __stdcall sub_01a3c9d0(const FRecord_01a3c9d0* Record)
{
	return Record->Handle != -1;
}

// Reports whether the handle at +0x48 of the given record has been assigned.
struct FRecord_01a3cb00
{
	BYTE Header[0x48];
	INT Handle; /* 0x48 */
};

// @baa 0x01a3cb00
INT __stdcall sub_01a3cb00(const FRecord_01a3cb00* Record)
{
	return Record->Handle != -1;
}

// Reports whether the handle at +0x14 of the given record has been assigned.
struct FRecord_01a3cbd0
{
	BYTE Header[0x14];
	INT Handle; /* 0x14 */
};

// @baa 0x01a3cbd0
INT __stdcall sub_01a3cbd0(const FRecord_01a3cbd0* Record)
{
	return Record->Handle != -1;
}

// Reports whether the handle at +0x14 of the given record has been assigned.
struct FRecord_01a3cc10
{
	BYTE Header[0x14];
	INT Handle; /* 0x14 */
};

// @baa 0x01a3cc10
INT __stdcall sub_01a3cc10(const FRecord_01a3cc10* Record)
{
	return Record->Handle != -1;
}

// Reports whether the handle at +0x14 of the given record has been assigned.
struct FRecord_01a3cc50
{
	BYTE Header[0x14];
	INT Handle; /* 0x14 */
};

// @baa 0x01a3cc50
INT __stdcall sub_01a3cc50(const FRecord_01a3cc50* Record)
{
	return Record->Handle != -1;
}
