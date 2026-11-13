// Core_05e0000.cpp (part 5 of 5): 10 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C{
int sub_005ef310(undefined4*);
};

int sub_0053d240(...);
undefined4 sub_0053df70(...);
// @baa 0x005ef310
int C::sub_005ef310(undefined4*param_2)
{
int*param_1=(int*)this;

undefined4*puVar1;
int iVar2;
int iVar3;

iVar2=param_1[1];
iVar3=iVar2+1;
param_1[1]=iVar3;
if(iVar3>param_1[2]){
iVar3=sub_0053d240(iVar3,param_1[2],4);
param_1[2]=iVar3;
if((*param_1!=0)||(iVar3)){
iVar3=sub_0053df70(*param_1,iVar3*4,8);
*param_1=iVar3;
}
}
puVar1=(undefined4*)(*param_1+4*iVar2);
if((undefined4*)0x0!=puVar1){
*puVar1=*param_2;
}
return iVar2;
}

extern "C" __declspec(dllimport) void __stdcall OutputDebugStringW(const wchar_t* Text);
// @baa 0x005ec6f0
void sub_005ec6f0(const wchar_t* Text)
{
    OutputDebugStringW(Text);
}

typedef void* HANDLE;

extern "C" __declspec(dllimport) unsigned long __stdcall WaitForSingleObject(HANDLE Handle, unsigned long Milliseconds);
struct C_005ec380
{
    INT pad_00;
    HANDLE Handle;

    void sub_005ec380();
};

// @baa 0x005ec380
void C_005ec380::sub_005ec380()
{
    WaitForSingleObject(Handle, 0xFFFFFFFF);
}

struct C_005ef9b0
{
    void sub_005ef1c0(INT* Arg);

    void sub_005ef9b0(INT Value);
};

// @baa 0x005ef9b0
void C_005ef9b0::sub_005ef9b0(INT Value)
{
    sub_005ef1c0(&Value);
}

struct C_005ef9c0
{
    void sub_005ef1c0(INT* Arg);

    void sub_005ef9c0(INT Value);
};

// @baa 0x005ef9c0
void C_005ef9c0::sub_005ef9c0(INT Value)
{
    sub_005ef1c0(&Value);
}

extern "C" __declspec(dllimport) int __stdcall SetConsoleCtrlHandler(void* Handler, int Add);
INT sub_005ebed0();
// @baa 0x005ec000
void sub_005ec000()
{
    SetConsoleCtrlHandler((void*)sub_005ebed0, 1);
}

struct C_005eede0
{
    char pad_00[8];
    volatile INT Value_08;
    INT Flags_0c;

    void sub_005eede0();
};

// @baa 0x005eede0
void C_005eede0::sub_005eede0()
{
    Value_08 = Value_08;
    Flags_0c |= 0x20000000;
}

struct Sub
{
    void sub_005edfe0();
};

struct C_005ef790
{
    Sub* Object;
    INT Count_04;

    void sub_005ef790();
};

// @baa 0x005ef790
void C_005ef790::sub_005ef790()
{
    if (Count_04 > 1)
        Object->sub_005edfe0();
}

extern "C" __declspec(dllimport) int __cdecl wprintf(const wchar_t* Format, ...);
// @baa 0x005ebdb0
void __stdcall sub_005ebdb0(const wchar_t* Format)
{
    wprintf(Format);
}

// FVtObject_005efcf0: its class's vtable is installed and the trailing word set.
extern const unsigned char g_01e9f7f0;
struct FVtObject_005efcf0
{
	const void* ClassVTable; /* 0x0 */
	void* Owner; /* 0x4 */

	FVtObject_005efcf0* Init();
};

// @baa 0x005efcf0
FVtObject_005efcf0* FVtObject_005efcf0::Init()
{
	ClassVTable = &g_01e9f7f0;
	Owner = NULL;
	return this;
}
