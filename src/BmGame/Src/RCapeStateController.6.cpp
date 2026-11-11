// RCapeStateController.cpp (part 6 of 6): 1 function
// Placed here by: class 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct FFrame;
struct UObj;
typedef void (UObj::*NativeFn)(FFrame&, void*);

struct UObj { void dummy(); };

extern NativeFn g_026888a0[];
extern NativeFn g_026889a4;
extern unsigned int g_026667f0;
struct FFrame { char pad[0x14]; UObj* Object; unsigned char* Code;
 void Step(UObj* URCapeStateController, void* R){ int B=*Code++; (URCapeStateController->*g_026888a0[B])(*this,R);} };

struct P2 { int a,b; };

struct URCapeStateController { void sub_016e7a40(int,int,float,float,int,int,int); void execSetCapeState(FFrame& S, void* R); };

#define STEP(p) S.Step(S.Object,p);
// @baa 0x017017c0
void URCapeStateController::execSetCapeState(FFrame& S, void* R){
 P2 p; p.a=0; p.b=0; STEP(&p)
 g_026667f0&=~2u;
 float c=0; STEP(&c)
 g_026667f0&=~2u;
 float d=1.f; STEP(&d)
 g_026667f0&=~2u;
 unsigned e=0; STEP(&e) e=e!=0;
 g_026667f0&=~2u;
 unsigned f=0; STEP(&f) f=f!=0;
 g_026667f0&=~2u;
 unsigned g=0; STEP(&g) g=g!=0;
 S.Code++;
 if(*S.Code==0x41){ S.Code++; (S.Object->*g_026889a4)(S,0);}
 sub_016e7a40(p.a,p.b,c,d,e,f,g);
}
