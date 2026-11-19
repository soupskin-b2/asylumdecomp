// UnrealEd_1230000.cpp: 14 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Map.h"

struct C { void sub_00fb40a0(int); C *sub_01235f60(int); };

// @baa 0x01235f60
C *C::sub_01235f60(int a) { sub_00fb40a0(a); return this; }

struct C_01235f80 { void sub_01232e70(int); C_01235f80 *sub_01235f80(int); };

// @baa 0x01235f80
C_01235f80 *C_01235f80::sub_01235f80(int a) { sub_01232e70(a); return this; }

struct C_01236000 { void sub_01232f30(int); C_01236000 *sub_01236000(int); };

// @baa 0x01236000
C_01236000 *C_01236000::sub_01236000(int a) { sub_01232f30(a); return this; }

/* Out-of-line copies of TSparseArray<T>::TConstIterator's constructor and operator++ (one per element type; the code doesn't
 * depend on it, so INT stands in for the unknown T). */


struct FSparseArrayConstIt_012360e0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_012360e0& operator++();
};

// @baa 0x012360e0
FSparseArrayConstIt_012360e0& FSparseArrayConstIt_012360e0::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct FSparseArrayConstIt_01236100 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_01236100& operator++();
};

// @baa 0x01236100
FSparseArrayConstIt_01236100& FSparseArrayConstIt_01236100::operator++()
{
    TConstIterator::operator++();
    return *this;
}

struct FSparseArrayConstIt_01236290 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_01236290(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x01236290
FSparseArrayConstIt_01236290::FSparseArrayConstIt_01236290(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_01236340 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_01236340(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x01236340
FSparseArrayConstIt_01236340::FSparseArrayConstIt_01236340(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct C_0123f4c0 {
    void sub_0123f4c0();
    int sub_01236120(int);
};

// @baa 0x0123f4c0
void C_0123f4c0::sub_0123f4c0(void)
{
    int param_1 = (int)this;
  ((C_0123f4c0 *)((*(char **)((char *)this + 0x10))))->sub_01236120(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}

struct FSparseArrayConstIt_0123f590 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_0123f590(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x0123f590
FSparseArrayConstIt_0123f590::FSparseArrayConstIt_0123f590(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct FSparseArrayConstIt_0123f6e0 : public TSparseArray<INT>::TConstIterator
{
    FSparseArrayConstIt_0123f6e0(const TSparseArray<INT>& InArray, INT StartIndex);
};

// @baa 0x0123f6e0
FSparseArrayConstIt_0123f6e0::FSparseArrayConstIt_0123f6e0(const TSparseArray<INT>& InArray, INT StartIndex)
    : TConstIterator(InArray, StartIndex)
{
}

struct V_0123fcf0 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void v21();
    virtual void v22();
    virtual void v23();
    virtual void v24();
    virtual void v25();
    virtual void v26();
    virtual void v27();
    virtual void v28();
    virtual void v29();
    virtual void v30();
    virtual void v31();
    virtual void v32();
    virtual void v33();
    virtual void v34();
    virtual void v35();
    virtual void v36();
    virtual void v37();
    virtual void v38();
    virtual void v39();
    virtual void v40();
    virtual void v41();
    virtual void v42();
    virtual void v43();
    virtual void v44();
    virtual void v45();
    virtual void v46();
    virtual void v47();
    virtual void v48();
    virtual void v49();
    virtual void v50();
    virtual void v51();
    virtual void v52();
    virtual void v53();
    virtual void v54();
    virtual void v55();
    virtual void v56();
    virtual void v57();
    virtual void v58();
    virtual void v59();
    virtual void v60();
    virtual void v61();
    virtual void v62();
    virtual void v63();
    virtual void v64();
    virtual void v65();
    virtual void v66();
    virtual void v67();
    virtual void v68();
    virtual void v69();
    virtual void v70();
    virtual void g();
    void sub_0123fcf0();
};

// @baa 0x0123fcf0
void V_0123fcf0::sub_0123fcf0() { g(); }

struct A_0123fd00 { virtual void sub_01241200(); char pad[324]; };

struct B_0123fd00 { virtual void sub_01241200(); };

struct C_0123fd00 : A_0123fd00, B_0123fd00 { virtual void sub_01241200(); C_0123fd00(); };

C_0123fd00::C_0123fd00() {}

// @baa 0x0123fd00
void C_0123fd00::sub_01241200() {}

struct A_0123fd10 { virtual void sub_01241200(); char pad[388]; };

struct B_0123fd10 { virtual void sub_01241200(); };

struct C_0123fd10 : A_0123fd10, B_0123fd10 { virtual void sub_01241200(); C_0123fd10(); };

C_0123fd10::C_0123fd10() {}

// @baa 0x0123fd10
void C_0123fd10::sub_01241200() {}

struct A_0123fd20 { virtual void sub_01241200(); char pad[320]; };

struct B_0123fd20 { virtual void sub_01241200(); };

struct C_0123fd20 : A_0123fd20, B_0123fd20 { virtual void sub_01241200(); C_0123fd20(); };

C_0123fd20::C_0123fd20() {}

// @baa 0x0123fd20
void C_0123fd20::sub_01241200() {}
