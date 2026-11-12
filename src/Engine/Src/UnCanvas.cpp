// UnCanvas.cpp: 58 functions
// Placed here by: neighbours 43, class 7, callers 2, file 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

void sub_004025d0(void*);
struct D { void* p; ~D(){ if(0) sub_004025d0(p);} };

void sub_0053dfa0(void*);
struct C { void* Data; int Num; int Max; void sub_00895470(); };

// @baa 0x00895470
void C::sub_00895470() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

// @baa 0x00a56ee0
IMPLEMENT_CLASS_AT(UCanvas, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnCanvas.cpp", 12);

// @baa 0x00a56f90
// @baa 0x00a57be0
// @baa 0x00a57cf0
int UCanvas::vf_000(void) { return 1; }

// @baa 0x00a57d00
bool UCanvas::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

extern char g_01fcee78[];
struct C_00a580d0 { void sub_00a580d0(void); };

// @baa 0x00a580d0
void C_00a580d0::sub_00a580d0(void) { *(int*)((char*)this + 0) = (int)g_01fcee78; }

// @baa 0x00a580e0
int sub_00a580e0(void) { return 0; }

// @baa 0x00a580f0
int sub_00a580f0(void) { return 0; }

struct C_00a58100 {
    undefined4 * sub_00a58100(byte);
};

int sub_0053dfa0(...);
// @baa 0x00a58100
undefined4 * C_00a58100::sub_00a58100(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01fcee78);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00a58120 {
    undefined4 sub_00a58120(int, int, int, int);
};

// @baa 0x00a58120
undefined4 C_00a58120::sub_00a58120(int param_2, int param_3, int param_4, int param_5)
{
    int param_1 = (int)this;

  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  if ((((*(int *)(iVar1 + 0x160) == param_2) && (*(int *)(iVar1 + 0x164) == param_3)) &&
      (*(int *)(iVar1 + 0x168) == param_4)) && (*(int *)(iVar1 + 0x1b0) == *(int *)(param_5 + 0x40))
     ) {
    return 1;
  }
  return 0;
}

struct C_00a58170 { int sub_00a58170(void); };

// @baa 0x00a58170
int C_00a58170::sub_00a58170(void) { return *(int*)((char*)this + 4); }

// @baa 0x00a58180
void sub_00a58180(void) {  }

struct C_00a58190 { C_00a58190* sub_00a58190(void); };

// @baa 0x00a58190
C_00a58190* C_00a58190::sub_00a58190(void) { *(int*)((char*)this + 0) = (int)g_01fcee78; return this; }

extern char g_01fc4490[];
// @baa 0x00a581e0
int sub_00a581e0(void) { return (int)g_01fc4490; }

extern char g_01ebb554[];
struct C_00a581f0 { void sub_00a581f0(void); };

// @baa 0x00a581f0
void C_00a581f0::sub_00a581f0(void) { *(int*)((char*)this + 0) = (int)g_01ebb554; }

struct C_00a58200 {
    undefined4 * sub_00a58200(byte);
};

// @baa 0x00a58200
undefined4 * C_00a58200::sub_00a58200(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ebb554);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00a58220 {
    undefined4 sub_00a58220(int, int);
};

// @baa 0x00a58220
undefined4 C_00a58220::sub_00a58220(int param_2, int param_3)
{
    int param_1 = (int)this;

  if ((**(int **)(param_1 + 4) == param_2) &&
     ((*(int **)(param_1 + 4))[0x14] == *(int *)(param_3 + 0x40))) {
    return 1;
  }
  return 0;
}

extern char g_01fc4730[];
// @baa 0x00a58280
int sub_00a58280(void) { return (int)g_01fc4730; }

struct C_00a58290 {
    undefined4 sub_00a58290(byte);
};

int sub_00aeee40(void);
// @baa 0x00a58290
undefined4 C_00a58290::sub_00a58290(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00aeee40();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00a582b0 { void sub_00a582b0(void); };

// @baa 0x00a582b0
void C_00a582b0::sub_00a582b0(void) { *(int*)((char*)this + 0) = (int)g_01ebb554; }

struct C_00a582c0 {
    undefined4 * sub_00a582c0(byte);
};

// @baa 0x00a582c0
undefined4 * C_00a582c0::sub_00a582c0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ebb554);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

extern char g_01fc4974[];
// @baa 0x00a582e0
int sub_00a582e0(void) { return (int)g_01fc4974; }

// @baa 0x00a582f0
void sub_00a582f0(void) {  }

// @baa 0x00a58300
void sub_00a58300(void) {  }

struct C_00a58310 { void sub_00a58310(void); };

// @baa 0x00a58310
void C_00a58310::sub_00a58310(void) { *(int*)((char*)this + 0) = (int)g_01ebb554; }

extern char g_01fc4bd0[];
// @baa 0x00a58320
int sub_00a58320(void) { return (int)g_01fc4bd0; }

extern char g_01fceea0[];
struct C_00a58330 { C_00a58330* sub_00a58330(void); };

// @baa 0x00a58330
C_00a58330* C_00a58330::sub_00a58330(void) { *(int*)((char*)this + 0) = (int)g_01fceea0; return this; }

struct C_00a58340 { void sub_00a58340(void); };

// @baa 0x00a58340
void C_00a58340::sub_00a58340(void) { *(int*)((char*)this + 0) = (int)g_01ebb554; }

struct C_00a58350 {
    undefined4 * sub_00a58350(byte);
};

// @baa 0x00a58350
undefined4 * C_00a58350::sub_00a58350(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ebb554);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

extern char g_01fc4f04[];
// @baa 0x00a583a0
int sub_00a583a0(void) { return (int)g_01fc4f04; }

struct C_00a583b0 { void sub_00a583b0(void); };

// @baa 0x00a583b0
void C_00a583b0::sub_00a583b0(void) { *(int*)((char*)this + 0) = (int)g_01ebb554; }

struct C_00a583c0 {
    undefined4 * sub_00a583c0(byte);
};

// @baa 0x00a583c0
undefined4 * C_00a583c0::sub_00a583c0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ebb554);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

extern int g_01fceeb8;
// A small two-dword value struct used by DecalComponent.cpp.
struct FDecalValue
{
    FDecalValue* sub_00a583e0(int* Src);
    int Value;  // 0x0
    int Unk04;  // 0x4
};

// @baa 0x00a583e0
FDecalValue* FDecalValue::sub_00a583e0(int* Src)
{
    Value = (int)&g_01fceeb8;
    Unk04 = *Src;
    return this;
}

extern char g_01fc5154[];
// @baa 0x00a58400
int sub_00a58400(void) { return (int)g_01fc5154; }

struct C_00a58410 { void sub_00a58410(void); };

// @baa 0x00a58410
void C_00a58410::sub_00a58410(void) { *(int*)((char*)this + 0) = (int)g_01ebb554; }

struct C_00a58420 {
    undefined4 * sub_00a58420(byte);
};

// @baa 0x00a58420
undefined4 * C_00a58420::sub_00a58420(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ebb554);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

extern char g_01fc53a4[];
// @baa 0x00a58460
int sub_00a58460(void) { return (int)g_01fc53a4; }

struct C_00a58470 { void sub_00a58470(void); };

// @baa 0x00a58470
void C_00a58470::sub_00a58470(void) { *(int*)((char*)this + 0) = (int)g_01ebb554; }

struct C_00a58480 {
    undefined4 * sub_00a58480(byte);
};

// @baa 0x00a58480
undefined4 * C_00a58480::sub_00a58480(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ebb554);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x00a584a0
void sub_00a584a0(void) {  }

// @baa 0x00a585c0
void sub_00a585c0(void) {  }

struct C_00a58650 {
    void sub_00a58650(undefined1, undefined1, undefined1, undefined1);
};

// @baa 0x00a58650
void C_00a58650::sub_00a58650(undefined1 param_2, undefined1 param_3, undefined1 param_4, undefined1 param_5)
{
    int param_1 = (int)this;

  *(undefined1 *)(param_1 + 0x52) = param_2;
  *(undefined1 *)(param_1 + 0x51) = param_3;
  *(undefined1 *)(param_1 + 0x50) = param_4;
  *(undefined1 *)(param_1 + 0x53) = param_5;
  return;
}

// @baa 0x00a64960
int sub_00a64980(void);
// @baa 0x00a649f0
undefined4 ULensFlare::sub_00a649f0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00a64980();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00a64a10 {
    undefined4 sub_00a64a10();
};

// @baa 0x00a64a10
undefined4 C_00a64a10::sub_00a64a10(void)
{
    int param_1 = (int)this;

  if ((((*(int *)(param_1 + 4) == 0) && (*(int *)(param_1 + 0x10) == 0)) &&
      (*(int *)(param_1 + 0x1c) == 0)) &&
     ((*(int *)(param_1 + 100) == 0 && (*(int *)(param_1 + 0x154) == 0)))) {
    return 0;
  }
  return 1;
}

// @baa 0x00a64ff0
// @baa 0x00a651b0
undefined4 * UCanvas::sub_00a651b0(byte param_2)
{
    undefined4 * param_1 = (undefined4 *)this;

  *param_1 = (undefined4)(&g_01ebb554);
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

struct C_00a7b8d0 { void sub_00a783a0(int); C_00a7b8d0 *sub_00a7b8d0(int); };

// @baa 0x00a7b8d0
C_00a7b8d0 *C_00a7b8d0::sub_00a7b8d0(int a) { sub_00a783a0(a); return this; }

struct E{int k;int a,b,c;};

void sub_00a8cee0(E*,E*);
static inline int Cmp(E*a,E*b){return a->k<=b->k?1:-1;}

struct S{E*Min;E*Max;};

// @baa 0x00a976e0
void sub_00a976e0(E* First,int Num){
 if(Num<2)return;
 S Stack[32]={{First,First+Num-1}};
 S*Top=Stack;
 do{
  E*Cur=Top->Min;E*Hi=Top->Max;
  while(1){
   int n=(Hi-Cur)+1;
   if(n<=8){
    while(Hi>Cur){
     E*M=Cur;
     for(E*I=Cur+1;I<=Hi;I++) if(Cmp(I,M)>0)M=I;
     sub_00a8cee0(M,Hi);
     Hi--;
    }
    break;
   }
   sub_00a8cee0(Cur+n/2,Cur);
   E*L=Cur;E*H=Hi+1;
   for(;;){
    while(++L<=Hi && Cmp(L,Cur)<=0);
    while(--H>Cur && Cmp(H,Cur)>=0);
    if(L>H)break;
    sub_00a8cee0(L,H);
   }
   sub_00a8cee0(Cur,H);
   if(H-1-Cur >= Hi-L){
    if(Cur+1<H){Top->Min=Cur;Top->Max=H-1;Top++;}
    if(Hi>L)Cur=L; else break;
   } else {
    if(Hi>L){Top->Min=L;Top->Max=Hi;Top++;}
    if(Cur+1<H)Hi=H-1; else break;
   }
  }
  Top--;
 }while(Top>=Stack);
}

struct C_00aa4530 { C_00aa4530* sub_00aa4530(void); };

// @baa 0x00aa4530
C_00aa4530* C_00aa4530::sub_00aa4530(void) { return this; }

struct C_00aa45b0 {
    undefined4 sub_00aa45b0(byte);
};

int sub_00aa4540(void);
// @baa 0x00aa45b0
undefined4 C_00aa45b0::sub_00aa45b0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00aa4540();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

extern undefined4 g_026b59d4;
int sub_00a782e0(int, void*);
struct __declspec(align(16)) FV4 {
    float X, Y, Z, W;
    FV4(float x, float y, float z, float w) : X(x), Y(y), Z(z), W(w) {}
};

struct CRet {
    char pad0[0x70];
    int  arr0;          // +0x70
    char pad1[0x140 - 0x74];
    int  num;           // +0x140
    void sub_00a90e30(int, int, int, int, int);
};

struct CElem {
    void sub_0064cac0(const FV4*, const void*, const void*, int);
};

struct CSrc {
    char pad[0x14];
    void* p14;
    CRet* sub_00aa48d0(int, int, int);
};

// @baa 0x00aa7d30
void sub_00aa7d30(void* p1, const float* p2, const void* p3, const float* p4, const void* p5, const float* p6, const void* p7, const void* p8, int p9, int p10)
{
    int mask = p10 ? 2 : 0;
    int nm = p9 ? p9 : (int)g_026b59d4;
    CSrc* src = (CSrc*)p1;
    CRet* s = src->sub_00aa48d0(1, nm, mask);
    int deflt;
    int* pn;
    if (src->p14) {
        pn = (int*)((char*)src->p14 + 0xc);
    } else {
        deflt = -1;
        pn = &deflt;
    }
    int n = *pn;
    int n1, n2, n3;
    {
        FV4 v(p2[0], p2[1], 0.0f, 1.0f);
        n1 = *(int*)((char*)s + 0x140);
        CElem* e = (CElem*)sub_00a782e0(0x30, (char*)s + 0x70);
        if (e) e->sub_0064cac0(&v, p3, p8, n);
    }
    {
        FV4 v(p4[0], p4[1], 0.0f, 1.0f);
        n2 = *(int*)((char*)s + 0x140);
        CElem* e = (CElem*)sub_00a782e0(0x30, (char*)s + 0x70);
        if (e) e->sub_0064cac0(&v, p5, p8, n);
    }
    {
        FV4 v(p6[0], p6[1], 0.0f, 1.0f);
        n3 = *(int*)((char*)s + 0x140);
        CElem* e = (CElem*)sub_00a782e0(0x30, (char*)s + 0x70);
        if (e) e->sub_0064cac0(&v, p7, p8, n);
    }
    s->sub_00a90e30(n1, n2, n3, nm, mask);
}

struct C_00a58630 {
    void sub_00a58630(float A, float B);
};

// @baa 0x00a58630
// @baa 0x00a58630
void C_00a58630::sub_00a58630(float A, float B)
{
    *(float*)((char*)this + 0x44) = A;
    *(float*)((char*)this + 0x48) = B;
}

struct ArrayStruct {
    void sub_00a7b870(unsigned char* Dest);
};

struct C_00a81b60 {
    char pad[0x24];
    ArrayStruct Data;
    void sub_00a81b60();
};

// @baa 0x00a81b60
void C_00a81b60::sub_00a81b60()
{
    __declspec(align(16)) double a[10];
    Data.sub_00a7b870((unsigned char*)a);
}

class FMaterialRenderProxy;
/* Unnamed in the kit: UE3's free DrawTile(FCanvas* Canvas, FLOAT X, FLOAT Y, FLOAT SizeX, FLOAT SizeY, FLOAT U, FLOAT V,
 * FLOAT SizeU, FLOAT SizeV, const FMaterialRenderProxy* MaterialRenderProxy) (UnCanvas.cpp). */
void sub_00a9edc0(FCanvas* Canvas, FLOAT X, FLOAT Y, FLOAT SizeX, FLOAT SizeY, FLOAT U, FLOAT V, FLOAT SizeU, FLOAT SizeV,
    const FMaterialRenderProxy* MaterialRenderProxy);
// @baa 0x00a9ee30
/* UE3's UCanvas::DrawMaterialTile: draw Material's render proxy (UMaterialInterface slot 0x138, UE3 GetRenderProxy(UBOOL
 * Selected), which the kit types as UINT) as a tile. */
void UCanvas::DrawMaterialTile(UMaterialInterface* Material, FLOAT X, FLOAT Y, FLOAT XL, FLOAT YL, FLOAT U, FLOAT V, FLOAT UL, FLOAT VL)
{
    if (!Canvas || !Material)
    {
        return;
    }
    sub_00a9edc0(Canvas, X, Y, XL, YL, U, V, UL, VL, (const FMaterialRenderProxy*)Material->GetRenderProxy(0));
}

/* UE3's FString::operator*() const: the text, or "" when empty. */
static FORCEINLINE const TCHAR* GetText_(const FString& Str)
{
    return Str.Num() ? &Str(0) : TEXT("");
}

/* Unnamed in the kit: UE3's UCanvas::DrawText(const FString& Text) (execDrawText's native): print Text in the current
 * font at unit scale, wrapped and centred as bCenter says. */
struct UCanvas_ : public UCanvas
{
    void sub_00aa9b90(const FString& Text);
};

// @baa 0x00aa9b90
void UCanvas_::sub_00aa9b90(const FString& Text)
{
    INT XL, YL;
    WrappedPrint(TRUE, XL, YL, Font, 1.f, 1.f, bCenter, GetText_(Text));
}

class FTexture;
/* Unnamed in the kit: UE3's free DrawTile(FCanvas* Canvas, FLOAT X, FLOAT Y, FLOAT SizeX, FLOAT SizeY, FLOAT U, FLOAT V,
 * FLOAT SizeU, FLOAT SizeV, const FLinearColor& Color, const FTexture* Texture, UBOOL AlphaBlend) (UnCanvas.cpp). */
void sub_00aa7a60(FCanvas* Canvas, FLOAT X, FLOAT Y, FLOAT SizeX, FLOAT SizeY, FLOAT U, FLOAT V, FLOAT SizeU, FLOAT SizeV,
    const FLinearColor& Color, const FTexture* Texture, UBOOL AlphaBlend);
// @baa 0x00aa9030
/* UE3's UCanvas::DrawTile: draw part of Tex, clipped to the canvas's clip region. UTexture slot 0x10c is UE3's
 * GetSurfaceWidth(); UTexture::Resource (UE3 FTextureResource*) is an FPointer in the kit. */
void UCanvas::DrawTile(UTexture* Tex, FLOAT X, FLOAT Y, FLOAT XL, FLOAT YL, FLOAT U, FLOAT V, FLOAT UL, FLOAT VL, const FLinearColor& Color)
{
    if (!Canvas || !Tex)
    {
        return;
    }
    FLOAT MyClipX = OrgX + ClipX;
    FLOAT MyClipY = OrgY + ClipY;
    FLOAT w = X + XL > MyClipX ? MyClipX - X : XL;
    FLOAT h = Y + YL > MyClipY ? MyClipY - Y : YL;
    if (XL > 0.f && YL > 0.f)
    {
        FLOAT SurfaceWidth = Tex->vf_10c();
        FLOAT SurfaceHeight = Tex->GetSurfaceHeight();
        sub_00aa7a60(Canvas, X, Y, w, h, U / SurfaceWidth, V / SurfaceHeight, UL / SurfaceWidth * w / XL, VL / SurfaceHeight * h / YL, Color,
            (const FTexture*)Tex->Resource.Dummy, TRUE);
    }
}
