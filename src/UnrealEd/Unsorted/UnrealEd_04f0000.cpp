// UnrealEd_04f0000.cpp: 26 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    undefined4 sub_004f0090(byte);
};

int sub_00402660(...);
int sub_004e8b00(void);
// @baa 0x004f0090
undefined4 C::sub_004f0090(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_004e8b00();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct SInner {
    int sub_004ef600();
};

struct SOuter {
    int sub_004f0cd0(int arg1);
    char pad[0x144];
    SInner* inner;
};

// @baa 0x004f0cd0
int SOuter::sub_004f0cd0(int arg1)
{
    return ((SInner *)inner)->sub_004ef600();
}

struct C_004f1f40 {
    undefined4 sub_004f1f40(byte);
};

int sub_004eaaa0(void);
// @baa 0x004f1f40
undefined4 C_004f1f40::sub_004f1f40(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_004eaaa0();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct A_004f51c0 { virtual void sub_004f51a0(); char pad[32]; };

struct B_004f51c0 { virtual void sub_004f51a0(); };

struct C_004f51c0 : A_004f51c0, B_004f51c0 { virtual void sub_004f51a0(); C_004f51c0(); };

C_004f51c0::C_004f51c0() {}

// @baa 0x004f51c0
void C_004f51c0::sub_004f51a0() {}

struct C_004f5660 {
    undefined4 sub_004f5660(byte);
};

int sub_004ec840(void);
// @baa 0x004f5660
undefined4 C_004f5660::sub_004f5660(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_004ec840();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_004f6930 {
    undefined4 sub_004f6930(byte);
};

int sub_004ed630(void);
// @baa 0x004f6930
undefined4 C_004f6930::sub_004f6930(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_004ed630();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_004f6950 {
    void sub_004f6950(int);
};

extern "C" __declspec(dllimport) int memmove(...);
// @baa 0x004f6950
void C_004f6950::sub_004f6950(int param_2)
{
    int * param_1 = (int *)this;

  void *_Dst;
  
  _Dst = (void *)(*param_1 + param_2 * 4);
  memmove(_Dst,(void *)((int)_Dst + 4),(param_1[2] - param_2) * 4 - 4);
  param_1[2] = param_1[2] + -1;
  *(undefined4 *)(*param_1 + param_1[2] * 4) = 0;
  return;
}

// @baa 0x004f6a10
void sub_004f6a10(void) {  }

// @baa 0x004f6a20
void sub_004f6a20(void) {  }

struct FFaceData {
    INT Unk00; // 0x00
    INT Unk04; // 0x04
    INT Unk08; // 0x08
    void sub_004f6a30(volatile FFaceData *Other);
};

// @baa 0x004f6a30
void FFaceData::sub_004f6a30(volatile FFaceData *Other)
{
    INT tmp;

    tmp = this->Unk00;
    this->Unk00 = Other->Unk00;
    Other->Unk00 = tmp;

    tmp = this->Unk04;
    this->Unk04 = Other->Unk04;
    Other->Unk04 = tmp;

    tmp = this->Unk08;
    this->Unk08 = Other->Unk08;
    Other->Unk08 = tmp;
}

struct FFaceData_004f6a60 {
    INT Unk00; // 0x00
    INT Unk04; // 0x04
    INT Unk08; // 0x08
    void sub_004f6a60(volatile FFaceData_004f6a60 *Other);
};

// @baa 0x004f6a60
void FFaceData_004f6a60::sub_004f6a60(volatile FFaceData_004f6a60 *Other)
{
    INT tmp;

    tmp = this->Unk00;
    this->Unk00 = Other->Unk00;
    Other->Unk00 = tmp;

    tmp = this->Unk04;
    this->Unk04 = Other->Unk04;
    Other->Unk04 = tmp;

    tmp = this->Unk08;
    this->Unk08 = Other->Unk08;
    Other->Unk08 = tmp;
}

struct FFaceData_004f6a90 {
    INT Unk00; // 0x00
    INT Unk04; // 0x04
    INT Unk08; // 0x08
    void sub_004f6a90(volatile FFaceData_004f6a90 *Other);
};

// @baa 0x004f6a90
void FFaceData_004f6a90::sub_004f6a90(volatile FFaceData_004f6a90 *Other)
{
    INT tmp;

    tmp = this->Unk00;
    this->Unk00 = Other->Unk00;
    Other->Unk00 = tmp;

    tmp = this->Unk04;
    this->Unk04 = Other->Unk04;
    Other->Unk04 = tmp;

    tmp = this->Unk08;
    this->Unk08 = Other->Unk08;
    Other->Unk08 = tmp;
}

struct FFaceData_004f6ac0 {
    INT Unk00; // 0x00
    INT Unk04; // 0x04
    INT Unk08; // 0x08
    void sub_004f6ac0(volatile FFaceData_004f6ac0 *Other);
};

// @baa 0x004f6ac0
void FFaceData_004f6ac0::sub_004f6ac0(volatile FFaceData_004f6ac0 *Other)
{
    INT tmp;

    tmp = this->Unk00;
    this->Unk00 = Other->Unk00;
    Other->Unk00 = tmp;

    tmp = this->Unk04;
    this->Unk04 = Other->Unk04;
    Other->Unk04 = tmp;

    tmp = this->Unk08;
    this->Unk08 = Other->Unk08;
    Other->Unk08 = tmp;
}

struct FFaceData_004f6af0 {
    INT Unk00; // 0x00
    INT Unk04; // 0x04
    INT Unk08; // 0x08
    void sub_004f6af0(volatile FFaceData_004f6af0 *Other);
};

// @baa 0x004f6af0
void FFaceData_004f6af0::sub_004f6af0(volatile FFaceData_004f6af0 *Other)
{
    INT tmp;

    tmp = this->Unk00;
    this->Unk00 = Other->Unk00;
    Other->Unk00 = tmp;

    tmp = this->Unk04;
    this->Unk04 = Other->Unk04;
    Other->Unk04 = tmp;

    tmp = this->Unk08;
    this->Unk08 = Other->Unk08;
    Other->Unk08 = tmp;
}

struct FFaceData_004f6b20 {
    INT Unk00; // 0x00
    INT Unk04; // 0x04
    INT Unk08; // 0x08
    void sub_004f6b20(volatile FFaceData_004f6b20 *Other);
};

// @baa 0x004f6b20
void FFaceData_004f6b20::sub_004f6b20(volatile FFaceData_004f6b20 *Other)
{
    INT tmp;

    tmp = this->Unk00;
    this->Unk00 = Other->Unk00;
    Other->Unk00 = tmp;

    tmp = this->Unk04;
    this->Unk04 = Other->Unk04;
    Other->Unk04 = tmp;

    tmp = this->Unk08;
    this->Unk08 = Other->Unk08;
    Other->Unk08 = tmp;
}

struct FFaceData_004f6bf0 {
    INT Unk00; // 0x00
    INT Unk04; // 0x04
    INT Unk08; // 0x08
    void sub_004f6bf0(volatile FFaceData_004f6bf0 *Other);
};

// @baa 0x004f6bf0
void FFaceData_004f6bf0::sub_004f6bf0(volatile FFaceData_004f6bf0 *Other)
{
    INT tmp;

    tmp = this->Unk00;
    this->Unk00 = Other->Unk00;
    Other->Unk00 = tmp;

    tmp = this->Unk04;
    this->Unk04 = Other->Unk04;
    Other->Unk04 = tmp;

    tmp = this->Unk08;
    this->Unk08 = Other->Unk08;
    Other->Unk08 = tmp;
}

struct S_004f6c40 { void sub_004ec690(); };

// @baa 0x004f6c40
void sub_004f6c40(S_004f6c40 *p) { if (p) p->sub_004ec690(); }

struct S {
    void sub_004f0ce0();
    void sub_004f13d0();
    void sub_004f6e40();
};

// @baa 0x004f6e40
void S::sub_004f6e40() {
    sub_004f0ce0();
    sub_004f13d0();
}

struct C_004f7a10 {
    void sub_004f7a10();
};

int sub_01ab3290(...);
// @baa 0x004f7a10
void C_004f7a10::sub_004f7a10(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_01ab3290(*param_1,param_1[1] * 4);
  *param_1 = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  return;
}

struct C_004f7a40 {
    void sub_004f7a40();
};

// @baa 0x004f7a40
void C_004f7a40::sub_004f7a40(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_01ab3290(*param_1,param_1[1] * 4);
  *param_1 = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  return;
}

struct C_004f7dc0 {
    void sub_004f7dc0();
};

// @baa 0x004f7dc0
void C_004f7dc0::sub_004f7dc0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_01ab3290(*param_1,param_1[1] * 4);
  *param_1 = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  return;
}

struct C_004f7df0 {
    void sub_004f7df0();
};

// @baa 0x004f7df0
void C_004f7df0::sub_004f7df0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_01ab3290(*param_1,param_1[1] * 4);
  *param_1 = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  return;
}

struct C_004f9cb0;
int sub_004292e0(void*);
struct VObj {
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
    virtual void v17(void*, void*, void*);
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
    virtual void v70(int, int);
};

struct PType {
    unsigned char sub_00464800();
    unsigned sub_00464020();
    unsigned char sub_004640a0(int);
    long double sub_00464080(int);
    void sub_0046abd0(int, int, int);
    unsigned char sub_0045e950();
};

struct QType {
    int sub_01ab5d00();
};

struct RType {
    void sub_0045d830(unsigned char);
};

struct C_004f9cb0 {
    char pad0[0x150];
    void* p150;
    char pad1[0x188 - 0x154];
    void* p188;
    void* p18c;
    int sub_00414280(int a, int b);
    void sub_004f9cb0(int arg);
};

struct FPhonStr {
    int Data, Max, Num;
    FPhonStr(const char* s, int n) { ((C_004f9cb0*)this)->sub_00414280((int)s, n); }
    ~FPhonStr();
};

FPhonStr::~FPhonStr()
{
    sub_01ab3290(Data, Max);
    Data = 0;
    Num = 0;
    Max = 0;
}

// @baa 0x004f9cb0
void C_004f9cb0::sub_004f9cb0(int arg)
{
    int idx = -1;
    if (this->p18c != 0 && ((PType*)this->p18c)->sub_00464800()) {
        for (unsigned i = 0; i < ((PType*)this->p18c)->sub_00464020(); i++) {
            if (((PType*)this->p18c)->sub_004640a0(i)) {
                idx = i;
                break;
            }
        }
    }
    if (this->p18c != 0 && idx != -1) {
        if (this->p188 != 0 && ((QType*)((char*)this->p188 + 8))->sub_01ab5d00() != 0) {
            ((RType*)((QType*)((char*)this->p188 + 8))->sub_01ab5d00())->sub_0045d830(0);
        }
        {
            FPhonStr Str("phonList -p", -1);
            sub_004292e0(&Str);
        }
        float f = *(float*)((char*)this->p18c + 0x24);
        int mode = 2;
        if (((PType*)this->p18c)->sub_00464080(idx) >= f + f) {
            mode = 1;
        }
        ((PType*)this->p18c)->sub_0046abd0(0, idx, mode);
        ((VObj*)this)->v70(0, 0);
        if (((PType*)this->p18c)->sub_0045e950() && this->p150 != 0) {
            ((VObj*)this->p150)->v17((void*)((char*)this + 0x14c), this->p188, this->p18c);
        }
    }
}

void sub_004faaf0();
// @baa 0x004fb170
void sub_004fb170(void) { sub_004faaf0(); }

extern char g_026656dc[];
// @baa 0x004fb3a0
int sub_004fb3a0(void) { return (int)g_026656dc; }

struct A_004fb3b0 { virtual void sub_005032a0(); char pad[320]; };

struct B_004fb3b0 { virtual void sub_005032a0(); };

struct C_004fb3b0 : A_004fb3b0, B_004fb3b0 { virtual void sub_005032a0(); C_004fb3b0(); };

C_004fb3b0::C_004fb3b0() {}

// @baa 0x004fb3b0
void C_004fb3b0::sub_005032a0() {}
