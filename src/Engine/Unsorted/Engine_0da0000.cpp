// Engine_0da0000.cpp (part 1 of 2): 37 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

// @baa 0x00da6420
void sub_00da6420(void) {  }

struct C_00dab770 {
    int sub_00dab770(int);
};

// @baa 0x00dab770
int C_00dab770::sub_00dab770(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 8;
}

struct C_00dab7c0 { int sub_00dab7c0(void); };

// @baa 0x00dab7c0
int C_00dab7c0::sub_00dab7c0(void) { return *(int*)((char*)this + 0); }

struct C_00dab840 { int a, b; C_00dab840(int, int); };

// @baa 0x00dab840
C_00dab840::C_00dab840(int x, int y) : a(x), b(y) {}

struct C_00dab880 { int sub_00dab880(void); };

// @baa 0x00dab880
int C_00dab880::sub_00dab880(void) { return *(int*)((char*)this + 0); }

struct C_00dab890 { int sub_00dab890(void); };

// @baa 0x00dab890
int C_00dab890::sub_00dab890(void) { return *(int*)((char*)this + 0); }

typedef uint size_t;

struct C_00dab8a0{
void sub_00dab8a0(int,int);
};

int sub_0053d240(...);
void*sub_0053df30(void*,void*,size_t);
int sub_0053df70(...);
int sub_006311e0(...);
extern undefined2 g_01e3f3dc;
// @baa 0x00dab8a0
void C_00dab8a0::sub_00dab8a0(int param_2,int param_3)
{
int*param_1=(int*)this;
int iVar1;
int iVar2;
if(param_3<0){
sub_006311e0("Count>=0",
"e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\Array.h"
,0x31a,&g_01e3f3dc);
}
if(param_1[1]<0){
sub_006311e0("ArrayNum>=0",
"e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\Array.h"
,0x31b,&g_01e3f3dc);
}
if(param_1[2]<param_1[1]){
sub_006311e0("ArrayMax>=ArrayNum",
"e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\Array.h"
,0x31c,&g_01e3f3dc);
}
if(param_2<0){
sub_006311e0("Index>=0",
"e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\Array.h"
,0x31d,&g_01e3f3dc);
}
if(param_2>param_1[1]){
sub_006311e0("Index<=ArrayNum",
"e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\Array.h"
,0x31e,&g_01e3f3dc);
}
iVar1=param_1[1];
iVar2=iVar1+param_3;
param_1[1]=iVar2;
if(iVar2>param_1[2]){
iVar2=sub_0053d240(iVar2,param_1[2],4);
param_1[2]=iVar2;
if((*param_1!=0)||(iVar2!=0)){
iVar2=sub_0053df70(*param_1,iVar2*4,8);
*param_1=iVar2;
}
}
sub_0053df30((void*)(*param_1+(param_2+param_3)*4),(void*)(*param_1+param_2*4),
(iVar1-param_2)*4);
return;
}

struct C_00dab9e0 { int a, b; C_00dab9e0(int, int); };

// @baa 0x00dab9e0
C_00dab9e0::C_00dab9e0(int x, int y) : a(x), b(y) {}

struct C_00daba00 {
    int sub_00daba00();
};

// @baa 0x00daba00
int C_00daba00::sub_00daba00(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_00daba10 { int a, b; C_00daba10(int, int); };

// @baa 0x00daba10
C_00daba10::C_00daba10(int x, int y) : a(x), b(y) {}

struct C_00daba30 {
    int sub_00daba30();
};

// @baa 0x00daba30
int C_00daba30::sub_00daba30(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_00daba40 { int a, b; C_00daba40(int, int); };

// @baa 0x00daba40
C_00daba40::C_00daba40(int x, int y) : a(x), b(y) {}

struct C_00daba60 {
    int sub_00daba60();
};

// @baa 0x00daba60
int C_00daba60::sub_00daba60(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_00daba70 { int a, b; C_00daba70(int, int); };

// @baa 0x00daba70
C_00daba70::C_00daba70(int x, int y) : a(x), b(y) {}

struct C_00daba90 {
    int sub_00daba90();
};

// @baa 0x00daba90
int C_00daba90::sub_00daba90(void)
{
    int param_1 = (int)this;

  return (*(int *)(param_1 + 8) != -1) - 1;
}

struct C_00dabaa0 { int a, b; C_00dabaa0(int, int); };

// @baa 0x00dabaa0
C_00dabaa0::C_00dabaa0(int x, int y) : a(x), b(y) {}

struct C_00dabac0 { int a, b; C_00dabac0(int, int); };

// @baa 0x00dabac0
C_00dabac0::C_00dabac0(int x, int y) : a(x), b(y) {}

// @baa 0x00dabb80
int sub_00dabb80(int a0) { return *(int*)a0; }

struct C_00dabbb0 { int sub_00dabbb0(void); };

// @baa 0x00dabbb0
int C_00dabbb0::sub_00dabbb0(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_00dabbf0 { int sub_00dabbf0(void); };

// @baa 0x00dabbf0
int C_00dabbf0::sub_00dabbf0(void) { return *(int*)((char*)this + 0); }

struct C_00dabc00 { int sub_00dabc00(void); };

// @baa 0x00dabc00
int C_00dabc00::sub_00dabc00(void) { return *(int*)((char*)this + 0); }

// @baa 0x00dabc80
int sub_00dabc80(int a0) { return *(int*)a0; }

// @baa 0x00dabc90
undefined4 sub_00dabc90(int * param_1, int * param_2)
{
  if ((*param_1 == *param_2) && (param_1[1] == param_2[1])) {
    return 1;
  }
  return 0;
}

struct C_00dabcb0 {
    void sub_00dabcb0(int *);
};

// @baa 0x00dabcb0
void C_00dabcb0::sub_00dabcb0(int * param_2)
{
    int param_1 = (int)this;

  *param_2 = param_1;
  param_2[1] = param_1 + 8;
  return;
}

struct C_00dac4c0 { int a, b; C_00dac4c0(int, int); };

// @baa 0x00dac4c0
C_00dac4c0::C_00dac4c0(int x, int y) : a(x), b(y) {}

// @baa 0x00dac4e0
int sub_00dac4e0(int a0) { return *(int*)a0; }

struct C_00dac520 { int sub_00dac520(void); };

// @baa 0x00dac520
int C_00dac520::sub_00dac520(void) { return *(int*)((char*)this + 4) - *(int*)((char*)this + 44); }

struct C_00dac5c0 {
    void sub_00dac5c0(int *);
};

// @baa 0x00dac5c0
void C_00dac5c0::sub_00dac5c0(int * param_2)
{
    int param_1 = (int)this;

  *param_2 = param_1;
  param_2[1] = *(int *)(param_1 + 0xc);
  return;
}

struct C_00dac5d0 {
    int sub_00dac5d0(int);
};

// @baa 0x00dac5d0
int C_00dac5d0::sub_00dac5d0(int param_2)
{
    int * param_1 = (int *)this;

  return *param_1 + param_2 * 0x18;
}

struct C_00dac5e0 { int sub_00dac5e0(void); };

// @baa 0x00dac5e0
int C_00dac5e0::sub_00dac5e0(void) { return *(int*)((char*)this + 20); }

// @baa 0x00dac610
void sub_00dac610(undefined4 * param_1, undefined4 * param_2)
{
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return;
}

int sub_00dac1b0(...);
// @baa 0x00dac650
void sub_00dac650(undefined4 * param_1)
{
  sub_00dac1b0(*param_1,*(undefined1 *)(param_1 + 1));
  return;
}

int sub_00dac230(...);
// @baa 0x00dac670
void sub_00dac670(int param_1)
{
  sub_00dac230(*(undefined4 *)(param_1 + 8),0);
  return;
}

struct S00dab9c0
{
	int ValueA;
	int ValueB;
	int ValueC;

	S00dab9c0* sub_00dab9c0(int A, int B, int C);
};

S00dab9c0* g_00dab9c0_dummy;
S00dab9c0* S00dab9c0_use(int A, int B, int C)
{
	return g_00dab9c0_dummy->sub_00dab9c0(A, B, C);
}

// @baa 0x00dab9c0
S00dab9c0* S00dab9c0::sub_00dab9c0(int A, int B, int C)
{
	ValueA = A;
	ValueB = B;
	ValueC = C;
	return this;
}

extern FName g_026c453c;
	/* OnInitialSceneUpdate */
/* Kit gap: the delegate's generated glue isn't declared. */
struct UUIScreenObject_ : public UUIScreenObject
{
	void delegateOnInitialSceneUpdate();
};

// @baa 0x00da6ec0
/* The script delegate's generated glue, out of line here. */
void UUIScreenObject_::delegateOnInitialSceneUpdate()
{
	ProcessDelegate(g_026c453c, &__OnInitialSceneUpdate__Delegate, NULL, NULL);
}

extern FName g_026c3f64;
	/* NotifyActiveStateChanged */
/* Kit gap: the delegate's generated glue isn't declared. */
struct UUIScreenObject__00da6ef0 : public UUIScreenObject
{
	void delegateNotifyActiveStateChanged(class UUIScreenObject* Sender, INT PlayerIndex, class UUIState* NewlyActiveState, class UUIState* PreviouslyActiveState);
};

// @baa 0x00da6ef0
/* The script delegate's generated glue, out of line here. */
void UUIScreenObject__00da6ef0::delegateNotifyActiveStateChanged(class UUIScreenObject* Sender, INT PlayerIndex, class UUIState* NewlyActiveState, class UUIState* PreviouslyActiveState)
{
	struct UIScreenObject_eventNotifyActiveStateChanged_Parms
	{
		class UUIScreenObject* Sender;
		INT PlayerIndex;
		class UUIState* NewlyActiveState;
		class UUIState* PreviouslyActiveState;
	} Parms;
	Parms.Sender = Sender;
	Parms.PlayerIndex = PlayerIndex;
	Parms.NewlyActiveState = NewlyActiveState;
	Parms.PreviouslyActiveState = PreviouslyActiveState;
	ProcessDelegate(g_026c3f64, &__NotifyActiveStateChanged__Delegate, &Parms, NULL);
}

extern FName g_026c5388;
	/* NotifyPositionChanged */
/* Kit gap: the delegate's generated glue isn't declared. */
struct UUIScreenObject__00da6f90 : public UUIScreenObject
{
	void delegateNotifyPositionChanged(class UUIScreenObject* Sender);
};

// @baa 0x00da6f90
/* The script delegate's generated glue, out of line here. */
void UUIScreenObject__00da6f90::delegateNotifyPositionChanged(class UUIScreenObject* Sender)
{
	struct UIScreenObject_eventNotifyPositionChanged_Parms
	{
		class UUIScreenObject* Sender;
	} Parms;
	Parms.Sender = Sender;
	ProcessDelegate(g_026c5388, &__NotifyPositionChanged__Delegate, &Parms, NULL);
}
