// Engine_0ac0000.cpp (part 2 of 2): 4 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

#define P10(n) virtual void n##0(){} virtual void n##1(){} virtual void n##2(){} virtual void n##3(){} virtual void n##4(){} virtual void n##5(){} virtual void n##6(){} virtual void n##7(){} virtual void n##8(){} virtual void n##9(){}
#define P5(n) virtual void n##0(){} virtual void n##1(){} virtual void n##2(){} virtual void n##3(){} virtual void n##4(){}
struct RHI {
 P10(a) P5(b)
 virtual int *Lock(int,int,int,int){return 0;}
 virtual void Unlock(int){}
 P10(c) P10(d) P10(e) P10(f) P10(g) P10(h) P10(i) P10(j) P10(k) P10(l) P5(m)
 virtual void AddRef(int){}
 P10(n) virtual void o0(){} virtual void o1(){} virtual void o2(){} virtual void o3(){} virtual void o4(){} virtual void o5(){} virtual void o6(){} virtual void o7(){}
 virtual void Release(int){}
};

extern RHI *g_026b0d94;
extern char g_01e3f3dc;
int sub_006311e0(...);
struct Ref;
Ref *sub_0040ebf0(Ref*,int,int,int);
struct Ref { int p; Ref(Ref *&o){ o = sub_0040ebf0(this,0x20,0,0); } ~Ref(){ if(p) g_026b0d94->Release(p);} };

struct V2 { float x,y; V2(float a,float b):x(a),y(b){} };

struct C { char pad[0x14]; int buf; void sub_00ac4b40(); };

// @baa 0x00ac4b40
void C::sub_00ac4b40()
{
 {
 Ref *q;
 Ref r(q);
 int n = q->p;
 int old = buf;
 if(n) g_026b0d94->AddRef(n);
 buf = n;
 if(old) g_026b0d94->Release(old);
 }
 int b = buf;
 if(!g_026b0d94) sub_006311e0("GDynamicRHI","e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\engine\\inc\\RHIMethods.h",0x84,&g_01e3f3dc);
 V2 *v=(V2*)g_026b0d94->Lock(b,0,0x20,0);
 v[0]=V2(-1,-1); v[1]=V2(-1,1); v[2]=V2(1,1); v[3]=V2(1,-1);
 int b2 = buf;
 if(!g_026b0d94) sub_006311e0("GDynamicRHI","e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\engine\\inc\\RHIMethods.h",0x85,&g_01e3f3dc);
 g_026b0d94->Unlock(b2);
}

struct C_00ac1080
{
    INT field_00;
    INT field_04;
    INT field_08;
    INT field_0c;
    INT field_10;
    INT Value;

    INT* sub_00ac1080(INT* Out);
};

// @baa 0x00ac1080
INT* C_00ac1080::sub_00ac1080(INT* Out)
{
    *Out = Value;
    return Out;
}

struct C_00ac4660
{
    char pad_0[0x40];
    INT Value_40;
    char pad_44[0xc];
    INT Value_50;
    INT Value_54;

    C_00ac4660* sub_00ac4660();
};

// @baa 0x00ac4660
C_00ac4660* C_00ac4660::sub_00ac4660()
{
    Value_40 = 0;
    Value_50 = 0;
    Value_54 = 0;
    return this;
}

struct C_00ac4670
{
    char pad_0[0x40];
    INT Value_40;
    char pad_44[0xc];
    INT Value_50;
    INT Value_54;

    C_00ac4670* sub_00ac4670();
};

// @baa 0x00ac4670
C_00ac4670* C_00ac4670::sub_00ac4670()
{
    Value_40 = 0;
    Value_50 = 0;
    Value_54 = 0;
    return this;
}
