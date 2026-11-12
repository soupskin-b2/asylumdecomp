// GFxUIEngine.cpp (part 3 of 3): 47 functions
// Placed here by: neighbours 34.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Core.h"

struct S {
    void sub_018ded70(undefined4 *param);
    void sub_018def10(undefined4 *param);
};

// @baa 0x018def10
void S::sub_018def10(undefined4 *param)
{
    char *t = (char *)this;
    return ((S *)(*(char **)(t + 0x1c) + 0x24))->sub_018ded70(param);
}

struct Inner {
    bool sub_018f5860(uint arg1);
};

struct C {
    char _pad[0x1c];
    Inner* p;
    bool sub_018def80(uint arg1);
};

// @baa 0x018def80
bool C::sub_018def80(uint arg1)
{
    return p->sub_018f5860(arg1);
}

struct Inner_018e2460 {
    void sub_018dd6a0();
};

struct Outer {
    char pad[0x10];
    Inner_018e2460* p;
    void sub_018e2460();
};

// @baa 0x018e2460
void Outer::sub_018e2460()
{
    p->sub_018dd6a0();
}

struct ObjB {
    int sub_018df120();
};

struct ObjA {
    int f0;
    ObjB* p4;
    int sub_018e2750();
};

// @baa 0x018e2750
int ObjA::sub_018e2750() { return p4->sub_018df120(); }

struct C_018e2780 { int a; C_018e2780(int); };

// @baa 0x018e2780
C_018e2780::C_018e2780(int x) : a(x) {}

struct C_018e27b0 { int a; C_018e27b0(int); };

// @baa 0x018e27b0
C_018e27b0::C_018e27b0(int x) : a(x) {}

struct C_018e2880 {
    void sub_018e2880();
};

int sub_018d3de0(void);
extern undefined * g_023f4f44;
// @baa 0x018e2880
void C_018e2880::sub_018e2880(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_023f4f44);
  sub_018d3de0();
  return;
}

struct C_018e6780 { int a; C_018e6780(int); };

// @baa 0x018e6780
C_018e6780::C_018e6780(int x) : a(x) {}

struct C_018e67b0 { int a, b, c; C_018e67b0(); };

// @baa 0x018e67b0
C_018e67b0::C_018e67b0() : a(0), b(0), c(0) {}

struct S_018e6860 {
    INT Unk00;
    INT Unk04;
    S_018e6860 *sub_018e6860();
};

// @baa 0x018e6860
S_018e6860 *S_018e6860::sub_018e6860()
{
    Unk00 = 0;
    Unk04 = 0;
    return this;
}

struct Object;
struct ObjectRef {
    Object* ObjectPtr; // 0x00
    void sub_018e6870();
};

struct Object {
    void sub_018dd090();
};

// @baa 0x018e6870
void ObjectRef::sub_018e6870()
{
    if (ObjectPtr != 0)
        ObjectPtr->sub_018dd090();
}

struct Inner_018e6880 {
    bool sub_018f56a0(uint arg1);
};

struct C_018e6880 {
    char _pad[0x1c];
    Inner_018e6880* p;
    bool sub_018e6880(uint arg1);
};

// @baa 0x018e6880
bool C_018e6880::sub_018e6880(uint arg1)
{
    return p->sub_018f56a0(arg1);
}

struct C_018e6de0 { void sub_018e6ad0(int); void sub_018e6de0(); };

// @baa 0x018e6de0
void C_018e6de0::sub_018e6de0() { sub_018e6ad0(0); }

struct S018d4a70 {
    int Data;
    int Count;
    int SizeFlags;
    void sub_018e6ad0(int NewNum);
    void sub_018e6e40();
};

void __stdcall sub_018d7170(int A);
// @baa 0x018e6e40
void S018d4a70::sub_018e6e40()
{
    S018d4a70* Self = this;
    sub_018e6ad0(0);
    if (Self->Data)
        sub_018d7170(Self->Data);
}

struct C_018e6ec0 { int a, b, c; C_018e6ec0(); };

// @baa 0x018e6ec0
C_018e6ec0::C_018e6ec0() : a(0), b(0), c(0) {}

struct S018d4a70_018e6ed0 {
    int Data;
    int Count;
    int SizeFlags;
    void sub_018e6ad0(int NewNum);
    void sub_018e6ed0();
};

// @baa 0x018e6ed0
void S018d4a70_018e6ed0::sub_018e6ed0()
{
    S018d4a70_018e6ed0* Self = this;
    sub_018e6ad0(0);
    if (Self->Data)
        sub_018d7170(Self->Data);
}

struct C_018e6ef0 { int a, b, c; C_018e6ef0(); };

// @baa 0x018e6ef0
C_018e6ef0::C_018e6ef0() : a(0), b(0), c(0) {}

struct S018d4a70_018e6f00 {
    int Data;
    int Count;
    int SizeFlags;
    void sub_018e6ad0(int NewNum);
    void sub_018e6f00();
};

// @baa 0x018e6f00
void S018d4a70_018e6f00::sub_018e6f00()
{
    S018d4a70_018e6f00* Self = this;
    sub_018e6ad0(0);
    if (Self->Data)
        sub_018d7170(Self->Data);
}

struct S018d4a70_0190e190 {
    int Data;
    int Count;
    int SizeFlags;
    void sub_0190bc40(int NewNum);
    void sub_0190e190();
};

// @baa 0x0190e190
void S018d4a70_0190e190::sub_0190e190()
{
    S018d4a70_0190e190* Self = this;
    sub_0190bc40(0);
    if (Self->Data)
        sub_018d7170(Self->Data);
}

struct S018d4a70_0190e1b0 {
    int Data;
    int Count;
    int SizeFlags;
    void sub_0190bb80(int NewNum);
    void sub_0190e1b0();
};

// @baa 0x0190e1b0
void S018d4a70_0190e1b0::sub_0190e1b0()
{
    S018d4a70_0190e1b0* Self = this;
    sub_0190bb80(0);
    if (Self->Data)
        sub_018d7170(Self->Data);
}

struct C_0190e270 { void sub_0190bda0(int); void sub_0190e270(); };

// @baa 0x0190e270
void C_0190e270::sub_0190e270() { sub_0190bda0(0); }

struct C_0190e280 { void sub_0190cc10(int); void sub_0190e280(); };

// @baa 0x0190e280
void C_0190e280::sub_0190e280() { sub_0190cc10(0); }

struct C_0190e320 { void sub_0190be70(int); void sub_0190e320(); };

// @baa 0x0190e320
void C_0190e320::sub_0190e320() { sub_0190be70(0); }

struct C_0190ef50 { int a, b, c; C_0190ef50(); };

// @baa 0x0190ef50
C_0190ef50::C_0190ef50() : a(0), b(0), c(0) {}

struct S018d4a70_0190ef60 {
    int Data;
    int Count;
    int SizeFlags;
    void sub_0190bc40(int NewNum);
    void sub_0190ef60();
};

// @baa 0x0190ef60
void S018d4a70_0190ef60::sub_0190ef60()
{
    S018d4a70_0190ef60* Self = this;
    sub_0190bc40(0);
    if (Self->Data)
        sub_018d7170(Self->Data);
}

struct C_0190ef80 { int a, b, c; C_0190ef80(); };

// @baa 0x0190ef80
C_0190ef80::C_0190ef80() : a(0), b(0), c(0) {}

struct S018d4a70_0190ef90 {
    int Data;
    int Count;
    int SizeFlags;
    void sub_0190bb80(int NewNum);
    void sub_0190ef90();
};

// @baa 0x0190ef90
void S018d4a70_0190ef90::sub_0190ef90()
{
    S018d4a70_0190ef90* Self = this;
    sub_0190bb80(0);
    if (Self->Data)
        sub_018d7170(Self->Data);
}

struct C_0190efe0 { void sub_0190cc10(int); void sub_0190efe0(); };

// @baa 0x0190efe0
void C_0190efe0::sub_0190efe0() { sub_0190cc10(0); }

struct S018d4a70_0190f060 {
    int Data;
    int Count;
    int SizeFlags;
    void sub_0190bda0(int NewNum);
    void sub_0190f060();
};

// @baa 0x0190f060
void S018d4a70_0190f060::sub_0190f060()
{
    S018d4a70_0190f060* Self = this;
    sub_0190bda0(0);
    if (Self->Data)
        sub_018d7170(Self->Data);
}

struct S018d4a70_0190f080 {
    int Data;
    int Count;
    int SizeFlags;
    void sub_0190cc10(int NewNum);
    void sub_0190f080();
};

// @baa 0x0190f080
void S018d4a70_0190f080::sub_0190f080()
{
    S018d4a70_0190f080* Self = this;
    sub_0190cc10(0);
    if (Self->Data)
        sub_018d7170(Self->Data);
}

struct C_0190f0b0 { void sub_0190cd60(int); void sub_0190f0b0(); };

// @baa 0x0190f0b0
void C_0190f0b0::sub_0190f0b0() { sub_0190cd60(0); }

struct S018d4a70_0190f0c0 {
    int Data;
    int Count;
    int SizeFlags;
    void sub_0190be70(int NewNum);
    void sub_0190f0c0();
};

// @baa 0x0190f0c0
void S018d4a70_0190f0c0::sub_0190f0c0()
{
    S018d4a70_0190f0c0* Self = this;
    sub_0190be70(0);
    if (Self->Data)
        sub_018d7170(Self->Data);
}

struct C_0190f300 {
    void sub_0190f300(undefined4);
    int sub_0190e610(int, int);
};

// @baa 0x0190f300
void C_0190f300::sub_0190f300(undefined4 param_2)
{
    int param_1 = (int)this;
  ((C_0190f300 *)((*(char **)((char *)this + 0))))->sub_0190e610(*(undefined4 *)(param_1 + 4), param_2);
  return;
}

struct C_0190f320 {
    void sub_0190f320(undefined4);
    int sub_0190e610(int, int);
};

// @baa 0x0190f320
void C_0190f320::sub_0190f320(undefined4 param_2)
{
    int param_1 = (int)this;
  ((C_0190f320 *)((*(char **)((char *)this + 0))))->sub_0190e610(*(int *)(param_1 + 4) + 1, param_2);
  return;
}

// Scaleform GFx: appends a value to an array of 16-byte ActionScript values (GASValue: a type
// byte at +0, types 5 and up own a reference). The GFx headers aren't in the project, so the
// classes here declare only what this function uses.
class GASValue {
public:
    unsigned char Type;
    unsigned char Pad[15];
    GASValue& operator=(const GASValue& src); // 01976180
};

class GASValueArray {
public:
    GASValue* Data;
    unsigned Size;
    unsigned Policy;
    void Resize(unsigned newSize); // 0190bb80
    void PushBack(const GASValue& val);
};

// @baa 0x0190e150
void GASValueArray::PushBack(const GASValue& val)
{
    unsigned newSize = Size + 1;
    Resize(newSize);
    Data[newSize - 1] = val;
}

// GFx: hash functor that returns the hash value stored in the key's node.
struct GFxKeyNode
{
    char         Header[0x10];
    unsigned int HashValue;
};

struct GFxKey
{
    GFxKeyNode* pNode;
};

struct GFxKeyHashFunctor
{
    unsigned int sub_018deea0(const GFxKey& Key) const;
};

// @baa 0x018deea0
unsigned int GFxKeyHashFunctor::sub_018deea0(const GFxKey& Key) const
{
    return Key.pNode->HashValue;
}

struct C_018e53a0 { int a, b; C_018e53a0(int, int); };

// @baa 0x018e53a0
C_018e53a0::C_018e53a0(int x, int y) : a(x), b(y) {}

struct C_018e53c0 {
    int sub_018e53c0(int);
};

// @baa 0x018e53c0
int C_018e53c0::sub_018e53c0(int param_2)
{
    int * param_1 = (int *)this;
  return *param_1 + 8 + param_2 * 0x14;
}

struct C_018e53d0 {
    bool sub_018e53d0();
};

// @baa 0x018e53d0
bool C_018e53d0::sub_018e53d0(void)
{
    int * param_1 = (int *)this;
  return *param_1 == -2;
}

struct C_018e5410 {
    int sub_018e5410(int);
};

// @baa 0x018e5410
int C_018e5410::sub_018e5410(int param_2)
{
    int * param_1 = (int *)this;
  return *param_1 + 8 + param_2 * 0x14;
}

struct C_018e5fb0 { C_018e5fb0* sub_018e5fb0(void); };

// @baa 0x018e5fb0
C_018e5fb0* C_018e5fb0::sub_018e5fb0(void) { *(int*)((char*)this + 0) = 0; return this; }

struct C_0190fa50 { int a, b, c; C_0190fa50(); };

// @baa 0x0190fa50
C_0190fa50::C_0190fa50() : a(0), b(0), c(0) {}

struct S018d4a70_0190fa60 {
    int Data;
    int Count;
    int SizeFlags;
    void sub_0190bda0(int NewNum);
    void sub_0190fa60();
};

// @baa 0x0190fa60
void S018d4a70_0190fa60::sub_0190fa60()
{
    S018d4a70_0190fa60* Self = this;
    sub_0190bda0(0);
    if (Self->Data)
        sub_018d7170(Self->Data);
}

struct S018d4a70_0190fa80 {
    int Data;
    int Count;
    int SizeFlags;
    void sub_0190cc10(int NewNum);
    void sub_0190fa80();
};

// @baa 0x0190fa80
void S018d4a70_0190fa80::sub_0190fa80()
{
    S018d4a70_0190fa80* Self = this;
    sub_0190cc10(0);
    if (Self->Data)
        sub_018d7170(Self->Data);
}

struct S018d4a70_0190fac0 {
    int Data;
    int Count;
    int SizeFlags;
    void sub_0190cd60(int NewNum);
    void sub_0190fac0();
};

// @baa 0x0190fac0
void S018d4a70_0190fac0::sub_0190fac0()
{
    S018d4a70_0190fac0* Self = this;
    sub_0190cd60(0);
    if (Self->Data)
        sub_018d7170(Self->Data);
}

struct S018d4a70_0190fae0 {
    int Data;
    int Count;
    int SizeFlags;
    void sub_0190be70(int NewNum);
    void sub_0190fae0();
};

// @baa 0x0190fae0
void S018d4a70_0190fae0::sub_0190fae0()
{
    S018d4a70_0190fae0* Self = this;
    sub_0190be70(0);
    if (Self->Data)
        sub_018d7170(Self->Data);
}

// 018e5ba0
extern int __stdcall sub_018e5b40(int A);
// @baa 0x018e5ba0
int __stdcall sub_018e5ba0(int A)
{
    int R = sub_018e5b40(A);
    return R ? R + 4 : 0;
}
