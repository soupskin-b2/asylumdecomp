// StaticMeshEditor.cpp (part 1 of 3): 55 functions
// Placed here by: neighbours 46, callers 6, file 3.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x007a6fb0
int UFracturedStaticMesh::sub_007a6fb0(void) { return *(int*)((char*)this + 488); }

struct C{
void sub_00a751d0(int*);
};

int sub_0053df70(...);
void*sub_01a375f0(void*,void*,size_t);
// @baa 0x00a751d0
void C::sub_00a751d0(int*param_2)
{
int*param_1=(int*)this;

int iVar1;

if((param_1!=param_2)&&(0<param_2[1])){
iVar1=param_1[1]+param_2[1];
if(iVar1>param_1[2]){
param_1[2]=iVar1;
if((*param_1)||(iVar1)){
iVar1=sub_0053df70(*param_1,iVar1*4,8);
*param_1=iVar1;
}
}
sub_01a375f0((void*)(*param_1+param_1[1]*4),(void*)*param_2,param_2[1]*4);
param_1[1]=param_2[1]+param_1[1];
}
return;
}

typedef uint size_t;

struct C_00fefff0 {
    int sub_00fefff0(int);
    int sub_0094ab30(int);
};

void * sub_01a37612(void *, int, size_t);
// @baa 0x00fefff0
int C_00fefff0::sub_00fefff0(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  iVar1 = ((C_00fefff0 *)(this))->sub_0094ab30(param_2);
  sub_01a37612((void *)(*param_1 + iVar1 * 0xc),0,param_2 * 0xc);
  return iVar1;
}

struct E { BYTE Bytes[36]; };

struct S {
    TArray<E> Items; // 0x00
    E* sub_011635b0(INT Index);
};

// @baa 0x011635b0
E* S::sub_011635b0(INT Index)
{
    return &Items(Index);
}

struct C_01163600 {
    int sub_01163600(int);
    int sub_0115fd00(int);
};

// @baa 0x01163600
int C_01163600::sub_01163600(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  iVar1 = ((C_01163600 *)(this))->sub_0115fd00(param_2);
  sub_01a37612((void *)(*param_1 + iVar1 * 0x24),0,param_2 * 0x24);
  return iVar1;
}

struct E_01163640 { BYTE Bytes[1152]; };

struct S_01163640 {
    TArray<E_01163640> Items; // 0x00
    E_01163640* sub_01163640(INT Index);
};

// @baa 0x01163640
E_01163640* S_01163640::sub_01163640(INT Index)
{
    return &Items(Index);
}

struct E_01163690 { BYTE Bytes[1152]; };

struct S_01163690 {
    TArray<E_01163690> Items; // 0x00
    const E_01163690* sub_01163690(INT Index) const;
};

// @baa 0x01163690
const E_01163690* S_01163690::sub_01163690(INT Index) const
{
    return &Items(Index);
}

struct E_01163860 { BYTE Bytes[24]; };

struct S_01163860 {
    TArray<E_01163860> Items; // 0x00
    const E_01163860* sub_01163860(INT Index) const;
};

// @baa 0x01163860
const E_01163860* S_01163860::sub_01163860(INT Index) const
{
    return &Items(Index);
}

struct C_011638b0{
int sub_011638b0(undefined4*);
};

int sub_0053d240(...);
// @baa 0x011638b0
int C_011638b0::sub_011638b0(undefined4*param_2)
{
int*param_1=(int*)this;

undefined4*puVar1;
int iVar2;
int iVar3;

iVar2=param_1[1];
iVar3=iVar2+1;
param_1[1]=iVar3;
if(iVar3>param_1[2]){
iVar3=sub_0053d240(iVar3,param_1[2],0x18);
param_1[2]=iVar3;
if((*param_1)||(0!=iVar3)){
iVar3=sub_0053df70(*param_1,0x18*iVar3,8);
*param_1=iVar3;
}
}
puVar1=(undefined4*)(*param_1+iVar2*0x18);
if(puVar1!=(undefined4*)0x0){
*puVar1=*param_2;
puVar1[1]=param_2[1];
puVar1[2]=param_2[2];
puVar1[3]=param_2[3];
puVar1[4]=param_2[4];
puVar1[5]=param_2[5];
}
return iVar2;
}

void sub_004025d0(void*);
struct D { void* p; ~D(){ if(0) sub_004025d0(p);} };

void sub_0053dfa0(void*);
struct C_01172930 { void* Data; int Num; int Max; void sub_01172930(); };

// @baa 0x01172930
void C_01172930::sub_01172930() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_0117ad10 {
    int sub_0117ad10(int);
    int sub_01172c70(int, int);
};

// @baa 0x0117ad10
int C_0117ad10::sub_0117ad10(int param_2)
{
    int * param_1 = (int *)this;
  ((C_0117ad10 *)(this))->sub_01172c70((int)(&param_2), param_2);
  if (param_2 != -1) {
    return *param_1 + param_2 * 0x1c;
  }
  return 0;
}

extern TArray<int> g_026a1ca4;
struct C_0117ad50 {
    int sub_0117ad50();
    int Unk00; // 0x00
    int Index; // 0x04
};

// @baa 0x0117ad50
int C_0117ad50::sub_0117ad50()
{
    return g_026a1ca4(Index);
}

struct C_01222820 {
    undefined4 sub_01222820(byte);
};

int sub_0053dfa0(...);
int sub_01222780(void);
// @baa 0x01222820
undefined4 C_01222820::sub_01222820(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01222780();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_01222970 { int a, b, c; C_01222970(); };

// @baa 0x01222970
C_01222970::C_01222970() : a(0), b(0), c(0) {}

struct C_01222980 { int a, b, c; C_01222980(); };

// @baa 0x01222980
C_01222980::C_01222980() : a(0), b(0), c(0) {}

struct C_01222990 { int a, b, c; C_01222990(); };

// @baa 0x01222990
C_01222990::C_01222990() : a(0), b(0), c(0) {}

struct C_012229a0 { int a, b, c; C_012229a0(); };

// @baa 0x012229a0
C_012229a0::C_012229a0() : a(0), b(0), c(0) {}

struct C_012229b0 { int a, b, c; C_012229b0(); };

// @baa 0x012229b0
C_012229b0::C_012229b0() : a(0), b(0), c(0) {}

struct C_012229c0 { int a, b, c; C_012229c0(); };

// @baa 0x012229c0
C_012229c0::C_012229c0() : a(0), b(0), c(0) {}

struct C_012229d0 { int a, b, c; C_012229d0(); };

// @baa 0x012229d0
C_012229d0::C_012229d0() : a(0), b(0), c(0) {}

struct C_012229e0 { int a, b, c; C_012229e0(); };

// @baa 0x012229e0
C_012229e0::C_012229e0() : a(0), b(0), c(0) {}

struct C_01222a20 { int sub_01222a20(void); };

// @baa 0x01222a20
int C_01222a20::sub_01222a20(void) { return *(int*)((char*)this + 0); }

struct C_01222a30 { int sub_01222a30(void); };

// @baa 0x01222a30
int C_01222a30::sub_01222a30(void) { return *(int*)((char*)this + 0); }

struct C_01224df0{
int sub_01224df0(int);
};

extern undefined4*g_026b0d94;
// @baa 0x01224df0
int C_01224df0::sub_01224df0(int param_2)
{
int param_1=(int)this;

int iVar1;
int iVar2;

iVar1=*(int*)(param_2+0x14);
iVar2=*(int*)(param_1+0x14);
if(iVar1!=0){
(*(int(__stdcall**)(int))(*g_026b0d94+0x1ec))((int)(iVar1));
}
*(int*)(param_1+0x14)=iVar1;
if(iVar2!=0){
(*(int(__stdcall**)(int))(*g_026b0d94+0x238))((int)(iVar2));
}
return param_1;
}

struct T_012251e0;
// @baa 0x012251e0
template INT TArray<T_012251e0*>::RemoveItem(T_012251e0* const&);

struct C_01229e20 {
    undefined4 sub_01229e20(byte);
};

int sub_01229d00(void);
// @baa 0x01229e20
undefined4 C_01229e20::sub_01229e20(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01229d00();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct A_01230680 { virtual void sub_01230700(); char pad[804]; };

struct B_01230680 { virtual void sub_01230700(); };

struct C_01230680 : A_01230680, B_01230680 { virtual void sub_01230700(); C_01230680(); };

C_01230680::C_01230680() {}

// @baa 0x01230680
void C_01230680::sub_01230700() {}

struct C_01230690 { int sub_01230690(void); };

// @baa 0x01230690
int C_01230690::sub_01230690(void) { return *(int*)((char*)this + 832); }

struct C_01230700 {
    undefined4 sub_01230700(byte);
};

int sub_01230620(void);
// @baa 0x01230700
undefined4 C_01230700::sub_01230700(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01230620();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_01231180 { void sub_0122a2c0(); void sub_01231180(int); };

// @baa 0x01231180
void C_01231180::sub_01231180(int) { sub_0122a2c0(); }

struct C_01232b10 { void* Data; int Num; int Max; void sub_01232b10(); };

// @baa 0x01232b10
void C_01232b10::sub_01232b10() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

// @baa 0x01232b70
int UUnrealEdEngine::sub_01232b70(void)
{
    int param_1 = (int)this;
  return (*(int *)(param_1 + 0x14) < *(int *)(*(int *)(param_1 + 0xc) + 0x14)) - 1;
}

// @baa 0x01232b90
int UUnrealEdEngine::sub_01232b90(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + 0xc + param_1[5] * 0x18;
}

// @baa 0x01232ba0
int UUnrealEdEngine::sub_01232ba0(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  return *(int *)*param_1 + param_1[5] * 0x14;
}

struct C_01232c00 {
    undefined4 sub_01232c00(byte);
};

int sub_01231a80(void);
// @baa 0x01232c00
undefined4 C_01232c00::sub_01232c00(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01231a80();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

int sub_0040fcc0(void);
// @baa 0x01232c20
undefined4 UObject::sub_01232c20(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0040fcc0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct TBitArray {
    int* AllocatorData;
    int NumBits;
    int MaxBits;
    int InlineData[4];
};

struct FBitIterator {
    int WordIndex;
    int Mask;
    const int* WordData;
    int UnvisitedMask;
    int CurrentIndex;
    int BaseIndex;

    FBitIterator(const TBitArray& Array, int StartIndex)
        : WordIndex(StartIndex >> 5)
        , Mask(1 << (StartIndex & 31))
        , WordData(Array.InlineData)
        , UnvisitedMask(~0 << (StartIndex & 31))
        , CurrentIndex(StartIndex)
        , BaseIndex(StartIndex & ~31)
    {
    }
    void FindFirstSetBit();
    void Advance()
    {
        UnvisitedMask &= ~Mask;
        FindFirstSetBit();
    }
};

struct TConstSetBitIterator_01232c40 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01232c40(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01232c40& operator++();
};

TConstSetBitIterator_01232c40::TConstSetBitIterator_01232c40(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01232c40
TConstSetBitIterator_01232c40& TConstSetBitIterator_01232c40::operator++()
{
    It.Advance();
    return *this;
}

// @baa 0x01232c60
undefined4 UObject::sub_01232c60(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0040fcc0();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct TConstSetBitIterator_01232db0 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01232db0(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01232db0& operator++();
};

TConstSetBitIterator_01232db0::TConstSetBitIterator_01232db0(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01232db0
TConstSetBitIterator_01232db0& TConstSetBitIterator_01232db0::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01232e00 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01232e00(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01232e00& operator++();
};

TConstSetBitIterator_01232e00::TConstSetBitIterator_01232e00(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01232e00
TConstSetBitIterator_01232e00& TConstSetBitIterator_01232e00::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01232e20 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01232e20(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01232e20& operator++();
};

TConstSetBitIterator_01232e20::TConstSetBitIterator_01232e20(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01232e20
TConstSetBitIterator_01232e20& TConstSetBitIterator_01232e20::operator++()
{
    It.Advance();
    return *this;
}

int sub_0122fd20(void);
// @baa 0x01233140
undefined4 UUnrealEdEngine::sub_01233140(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0122fd20();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct FS { TArray<wchar_t> a; const wchar_t* sub_00439b40() const; const wchar_t* operator*() const { return a.Num() ? &a(0) : L""; } };

FS sub_0063acb0(const char*,const wchar_t*,int);
int sub_005f5500(...);
int sub_006311e0(...);
int sub_007cae60(...);
int sub_007a5870();
int sub_007cb750(...);
unsigned sub_01368040();
struct V { float x,y,z; V(float a,float b,float c):x(a),y(b),z(c){} };

struct Node { char p[0x30]; Node* next; };

struct Mesh { char p[0x28]; Node* outer; char q[0x54]; int collision; };

struct Frac { char p[0x12c]; int core; float scale; V vec; int vals[6]; };

struct Browser { Browser* sub_01283b30(const wchar_t*,int); int sub_0136ab90(); };

struct Sel { Mesh* sub_00c63c30(); };

struct Obj { void sub_0122b3f0(); int sub_00cc65f0(); };

struct Data { char p[0x3c]; TArray<TArray<int> > arr; };

struct Target { char p[0x1b4]; Data* data; void sub_006ea640(int,int); };

struct View { char p[8]; Obj* obj; char q[0x33c]; Target* target; char r[8]; int arg; void sub_0122a1c0(Mesh*); void sub_012235e0(); };

struct Rot { int a,b,c; Rot(int x,int y,int z):a(x),b(y),c(z){} };

struct C_01234420 { char p[0x2f4]; Mesh* mesh; char q[0x1c]; View* view; char r[0xc]; Obj* other; char s[0x40]; int flag; int flag2; V pos; Rot rot; float scale; V vec; Mesh* selected; void sub_01234420(int,Mesh*); };

extern Browser* g_026d4dfc;
extern Node* g_026b531c;
extern wchar_t g_021fea3c[],g_021febb0[];
// @baa 0x01234420
void C_01234420::sub_01234420(int load, Mesh* m) {
 if (!m) {
  Browser* b=g_026d4dfc->sub_01283b30(L"GenericBrowser",1); int ok=b->sub_0136ab90();
  if (!ok) sub_006311e0("GenericBrowser","e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\StaticMeshEditor.cpp",3944,g_021fea3c);
  Sel* sel=(Sel*)sub_01368040();
  if (!sel || !(m=sel->sub_00c63c30())) goto bad;
  if (!g_026b531c) { g_026b531c=(Node*)sub_007cae60(L"Engine"); sub_007a5870(); if (!g_026b531c) goto bad; }
  for (Node* n=m->outer;n;n=n->next) if(n==g_026b531c) goto bad;
  if(m==mesh) goto bad;
  Frac* f=(Frac*)sub_007cb750(mesh);
  if(f) { if(f->core) goto hascore; if(!m->collision) goto nocollision; }
 }
 goto proceed;
 bad: { sub_005f5500(0,*sub_0063acb0("SMMergeNoMeshSelected",L"UnrealEd",0)); return; }
 hascore: { sub_005f5500(0,sub_0063acb0("SMMergeFracMeshAlreadyHasCore",L"UnrealEd",0).sub_00439b40()); return; }
 nocollision: { sub_005f5500(0,sub_0063acb0("SMMergeFracMeshCoreNoCollision",L"UnrealEd",0).sub_00439b40()); return; }
 proceed:
 flag=1; selected=m;
 if(load) { Frac* f=(Frac*)sub_007cb750(mesh); if(!f) sub_006311e0("FracMesh","e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\StaticMeshEditor.cpp",3987,g_021febb0); pos=*(V*)&f->vals[0]; rot=*(Rot*)&f->vals[3]; scale=f->scale; vec=f->vec; }
 else { pos=V(0,0,0); rot=Rot(0,0,0); scale=1; vec=V(1,1,1); }
 flag2=1; view->sub_0122a1c0(selected); view->sub_012235e0();
 { int n=view->target->data->arr(0).Num(); for(int i=0;i<n;i++) view->target->sub_006ea640(i,view->arg); }
 view->obj->sub_00cc65f0(); if(other) other->sub_0122b3f0();
}

struct TConstSetBitIterator_0123f330 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_0123f330(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_0123f330& operator++();
};

TConstSetBitIterator_0123f330::TConstSetBitIterator_0123f330(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x0123f330
TConstSetBitIterator_0123f330& TConstSetBitIterator_0123f330::operator++()
{
    It.Advance();
    return *this;
}

struct TConstSetBitIterator_01240640 {
    const TBitArray& Array;
    FBitIterator It;
    TConstSetBitIterator_01240640(const TBitArray& InArray, int StartIndex);
    TConstSetBitIterator_01240640& operator++();
};

TConstSetBitIterator_01240640::TConstSetBitIterator_01240640(const TBitArray& InArray, int StartIndex)
    : Array(InArray)
    , It(InArray, StartIndex)
{
    It.FindFirstSetBit();
}

// @baa 0x01240640
TConstSetBitIterator_01240640& TConstSetBitIterator_01240640::operator++()
{
    It.Advance();
    return *this;
}

int sub_012362e0(void);
// @baa 0x01240900
int UUnrealEdEngine::sub_01240900(void)
{
    int param_1 = (int)this;

  sub_012362e0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return param_1;
}

int sub_009799d0(void);
extern undefined * g_02203420;
// @baa 0x01240920
undefined4 * UStaticMeshComponent::sub_01240920(void)
{
    undefined4 * param_1 = (undefined4 *)this;

  sub_009799d0();
  *param_1 = (undefined4)(&g_02203420);
  return param_1;
}

// @baa 0x01240940
IMPLEMENT_CLASS_AT(UStaticMeshEditorComponent, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\StaticMeshEditor.cpp", 22);

// @baa 0x012409a0
// @baa 0x01242890
// @baa 0x01242b20
int sub_01240b30(void);
// @baa 0x01242c50
undefined4 UUnrealEdEngine::sub_01242c50(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_01240b30();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_01249480 {
    void sub_01249480();
    int sub_01249400();
    int sub_01234420(int, int);
};

extern undefined4 g_021fec90;
extern undefined4 g_021fed80;
// @baa 0x01249480
void C_01249480::sub_01249480(void)
{
    int param_1 = (int)this;
  undefined4 uVar1;
  int iVar2;
  iVar2 = sub_007cb750(*(undefined4 *)(param_1 + 0x2f4));
  if (iVar2 == 0) {
    sub_006311e0("FracMesh",
                 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\StaticMeshEditor.cpp"
                 ,0xfb9,&g_021fec90);
  }
  if (*(int *)(iVar2 + 300) == 0) {
    sub_006311e0("FracMesh->SourceCoreMesh",
                 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\UnrealEd\\Src\\StaticMeshEditor.cpp"
                 ,0xfba,&g_021fed80);
  }
  uVar1 = *(undefined4 *)(iVar2 + 300);
  ((C_01249480 *)(this))->sub_01249400();
  ((C_01249480 *)(this))->sub_01234420(1, uVar1);
  return;
}

void sub_01284da0();
// @baa 0x0124a530
void sub_0124a530(void) { sub_01284da0(); }

struct A_0124a540 { virtual void sub_0124a550(); char pad[408]; };

struct B_0124a540 { virtual void sub_0124a550(); };

struct C_0124a540 : A_0124a540, B_0124a540 { virtual void sub_0124a550(); C_0124a540(); };

C_0124a540::C_0124a540() {}

// @baa 0x0124a540
void C_0124a540::sub_0124a550() {}
