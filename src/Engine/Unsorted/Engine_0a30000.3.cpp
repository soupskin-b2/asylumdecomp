// Engine_0a30000.cpp (part 3 of 3): 19 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C{
int sub_00a3e680(undefined4*);
};

int sub_0053d240(...);
int sub_0053df70(...);
// @baa 0x00a3e680
int C::sub_00a3e680(undefined4*param_2)
{
int*param_1=(int*)this;

undefined4*puVar1;
int iVar2;
int iVar3;

iVar2=param_1[1];
iVar3=iVar2+1;
param_1[1]=iVar3;
if(iVar3>param_1[2]){
iVar3=sub_0053d240(iVar3,param_1[2],0xc);
param_1[2]=iVar3;
if((*param_1!=0)||(iVar3!=0)){
iVar3=sub_0053df70(*param_1,iVar3*0xc,8);
*param_1=iVar3;
}
}
puVar1=(undefined4*)(*param_1+iVar2*0xc);
if(puVar1!=(undefined4*)0x0){
*puVar1=*param_2;
puVar1[1]=param_2[1];
puVar1[2]=param_2[2];
}
return iVar2;
}

struct C_00a35390
{
    INT Value;

    INT sub_00a35390();
};

// @baa 0x00a35390
INT C_00a35390::sub_00a35390()
{
    return Value == 0 ? -1 : 0;
}

struct C_00a3c700
{
    INT pad_00[0x1];
    float Value;

    void sub_00a3c700(float* In);
};

// @baa 0x00a3c700
void C_00a3c700::sub_00a3c700(float* In)
{
    Value = *In;
}

struct C_00a3c710
{
    INT pad_00[0x2];
    float Value;

    void sub_00a3c710(float* In);
};

// @baa 0x00a3c710
void C_00a3c710::sub_00a3c710(float* In)
{
    Value = *In;
}

struct C_00a3cb50
{
    INT pad_00[0x1];
    float Value;

    void sub_00a3cb50(float* Out);
};

// @baa 0x00a3cb50
void C_00a3cb50::sub_00a3cb50(float* Out)
{
    *Out = Value;
}

struct C_00a3cb60
{
    INT pad_00[0x2];
    float Value;

    void sub_00a3cb60(float* Out);
};

// @baa 0x00a3cb60
void C_00a3cb60::sub_00a3cb60(float* Out)
{
    *Out = Value;
}

struct C_00a3c600
{
    BYTE Value;

    C_00a3c600* sub_00a3c600(BYTE* Source);
};

// @baa 0x00a3c600
C_00a3c600* C_00a3c600::sub_00a3c600(BYTE* Source)
{
    Value = *Source;
    return this;
}

struct C_00a3c680
{
    float Value;

    C_00a3c680* sub_00a3c680(float* Source);
};

// @baa 0x00a3c680
C_00a3c680* C_00a3c680::sub_00a3c680(float* Source)
{
    Value = *Source;
    return this;
}

struct C_00a34570
{
    float Value;

    C_00a34570* sub_00a34570(float In);
};

// @baa 0x00a34570
C_00a34570* C_00a34570::sub_00a34570(float In)
{
    Value = In;
    return this;
}

extern float g_025dce70;
// @baa 0x00a3c610
void sub_00a3c610(float Value)
{
    g_025dce70 = Value;
}

struct C_00a3c790
{
    INT Value_00;
    INT Value_04;

    C_00a3c790* sub_00a3c790(INT* Source);
};

// @baa 0x00a3c790
C_00a3c790* C_00a3c790::sub_00a3c790(INT* Source)
{
    Value_04 = Source[1];
    return this;
}

struct Sub00a35540 {
    DWORD N;
    DWORD F;
    void sub_00a35540(float F);
};

// @baa 0x00a35540
void Sub00a35540::sub_00a35540(float F)
{
    N++;
    float T = F;
    this->F = *(DWORD*)&T;
}

struct sub_00a35580_Cls {
    int Count;      // +0x00
    char pad[8];
    int Value;      // +0x0c

    void sub_00a35580(float NewValue);
};

// @baa 0x00a35580
void sub_00a35580_Cls::sub_00a35580(float NewValue)
{
    float f = NewValue;
    ++Count;
    Value = *(int*)&f;
}

struct C_00a35610 {
    int Count;
    int Pad0;
    int Pad1;
    int Bits;
    int sub_00a35610(float V);
};

// @baa 0x00a35610
int C_00a35610::sub_00a35610(float V)
{
    union { float F; int I; } U;
    U.F = V;
    Count++;
    Bits = U.I;
    return U.I;
}

struct F00a35720Obj
{
    INT Counter;
    INT Other;
    INT Value;

    void sub_00a35720(FLOAT Param)
    {
        FLOAT F = Param;
        Counter++;
        Value = *(INT*)&F;
    }
};

// @baa 0x00a35720
void g_00a35720Call()
{
    F00a35720Obj Obj;
    Obj.sub_00a35720(1.5f);
}

struct C_00a357a0 {
    int Counter0;
    int Field4;
    int Field8;
    int FieldC;
    int Field10;
    int Field14;
    int Field18;
    void sub_00a357a0(float);
};

// @baa 0x00a357a0
void C_00a357a0::sub_00a357a0(float Value)
{
    union { float F; int I; } V;
    V.F = Value;
    ++Counter0;
    Field18 = V.I;
}

struct A {
    int Field0;
    int Field4;
    int Field8;
    int FieldC;
    int Field10;
    int Field14;
    int Field18;
    int Field1C;
    int Field20;
    int Field24;
    void sub_00a357f0(float Value);
};

// @baa 0x00a357f0
void A::sub_00a357f0(float Value)
{
    union { float F; int I; } V;
    V.F = Value;
    ++Field0;
    Field24 = V.I;
}

struct C_00a3c690 {
    float Data[3];
    C_00a3c690* sub_00a3c690(float* Src);
};

// @baa 0x00a3c690
C_00a3c690* C_00a3c690::sub_00a3c690(float* Src)
{
    Data[0] = Src[0];
    Data[1] = Src[1];
    Data[2] = Src[2];
    return this;
}

struct S00a35740
{
	int Field_0;
	int Field_4;
	int Field_8;
	int Field_C;

	void sub_00a35740(float value)
	{
		float t = value;
		Field_0++;
		Field_C = *(int*)&t;
	}
};

// @baa 0x00a35740
void g_00a35760(S00a35740* In, float Value)
{
	In->sub_00a35740(Value);
}
