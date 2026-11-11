// UnrealEd_1b40000.cpp (part 2 of 5): 25 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

struct C {
    void sub_01b423f0();
    int sub_01b41b70();
    int sub_01b41c80();
    int sub_01b41f90();
};

// @baa 0x01b423f0
void C::sub_01b423f0(void)
{
    double * param_1 = (double *)this;
  ((C *)(this))->sub_01b41b70();
  ((C *)(this))->sub_01b41c80();
  ((C *)(this))->sub_01b41f90();
  if (*(char *)(param_1 + 0xf) == '\0') {
    *param_1 = -*param_1;
    param_1[3] = -param_1[3];
    param_1[6] = -param_1[6];
  }
  return;
}

// @baa 0x01b42fc0
void sub_01b42fc0(float * param_1, float * param_2, float * param_3)
{
  *param_3 = param_1[1] * param_2[2] - param_1[2] * param_2[1];
  param_3[1] = param_1[2] * *param_2 - *param_1 * param_2[2];
  param_3[2] = *param_1 * param_2[1] - *param_2 * param_1[1];
  return;
}

struct E_01b43940 {};

// @baa 0x01b43940
E_01b43940 sub_01b43940() { E_01b43940 e; return e; }

struct E_01b439a0 {};

// @baa 0x01b439a0
E_01b439a0 sub_01b439a0() { E_01b439a0 e; return e; }

struct S {
    int Unk00;
};

extern void __cdecl sub_01b43830(struct S const &Ref, int Value);
// @baa 0x01b43b70
void __stdcall sub_01b43b70(struct S const &Ref)
{
    sub_01b43830(Ref, 0);
}

struct S_01b43bc0 {
    INT Unk00;
    INT Unk04;
    S_01b43bc0 *sub_01b43bc0();
};

// @baa 0x01b43bc0
S_01b43bc0 *S_01b43bc0::sub_01b43bc0()
{
    Unk00 = 0;
    Unk04 = 0;
    return this;
}

extern void __cdecl sub_01b438b0(struct S const &Ref, int Value);
// @baa 0x01b43c70
void __stdcall sub_01b43c70(struct S const &Ref)
{
    sub_01b438b0(Ref, 0);
}

struct FArrayLike
{
	void *Data;
	UINT ArrayNum;
	UINT ArrayMax;
};

struct FRange
{
	void *Range;
	UINT Count;

	FRange *sub_01b43d00(UINT Index, FArrayLike *Array);
};

extern "C" __declspec(dllimport) void _invalid_parameter_noinfo(void);
// @baa 0x01b43d00
FRange *FRange::sub_01b43d00(UINT Index, FArrayLike *Array)
{
	Range = 0;
	if (!Array || Array->ArrayNum > Index || Index > Array->ArrayMax)
	{
		_invalid_parameter_noinfo();
	}
	Range = Array;
	Count = Index;
	return this;
}

struct S_01b43f70 {
    INT Unk00;
    INT Unk04;
    S_01b43f70 *sub_01b43f70();
};

// @baa 0x01b43f70
S_01b43f70 *S_01b43f70::sub_01b43f70()
{
    Unk00 = 0;
    Unk04 = 0;
    return this;
}

struct FRange_01b440c0
{
	void *Range;
	UINT Count;

	FRange_01b440c0 *sub_01b440c0(UINT Index, FArrayLike *Array);
};

// @baa 0x01b440c0
FRange_01b440c0 *FRange_01b440c0::sub_01b440c0(UINT Index, FArrayLike *Array)
{
	Range = 0;
	if (!Array || Array->ArrayNum > Index || Index > Array->ArrayMax)
	{
		_invalid_parameter_noinfo();
	}
	Range = Array;
	Count = Index;
	return this;
}

struct C_01b447a0 {
    void sub_01b447a0();
    int sub_01b44140(int);
};

// @baa 0x01b447a0
void C_01b447a0::sub_01b447a0(void)
{
    int param_1 = (int)this;
  ((C_01b447a0 *)(this))->sub_01b44140(*(undefined4 *)(*(int *)(param_1 + 4) + 4));
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  return;
}

struct C_01b45610 {
    int sub_01b45610(int);
};

// @baa 0x01b45610
int C_01b45610::sub_01b45610(int param_2)
{
    int param_1 = (int)this;
  return param_1 + param_2 * 8;
}

struct C_01b48fa0 {
    int sub_01b48fa0(int);
};

// @baa 0x01b48fa0
int C_01b48fa0::sub_01b48fa0(int param_2)
{
    int param_1 = (int)this;
  return param_1 + param_2 * 4;
}

struct C_01b4b150 {
    undefined4 * sub_01b4b150(int);
    int sub_01b49f60(int);
};

// @baa 0x01b4b150
undefined4 * C_01b4b150::sub_01b4b150(int param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  if (param_2 != 0) {
    ((C_01b4b150 *)(this))->sub_01b49f60(param_2);
  }
  return param_1;
}

struct C_01b4b1f0 {
    undefined4 * sub_01b4b1f0(int);
    int sub_01b49fe0(int);
};

// @baa 0x01b4b1f0
undefined4 * C_01b4b1f0::sub_01b4b1f0(int param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  if (param_2 != 0) {
    ((C_01b4b1f0 *)(this))->sub_01b49fe0(param_2);
  }
  return param_1;
}

struct C_01b4b220 {
    undefined4 * sub_01b4b220(int);
    int sub_01b4a030(int);
};

// @baa 0x01b4b220
undefined4 * C_01b4b220::sub_01b4b220(int param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  if (param_2 != 0) {
    ((C_01b4b220 *)(this))->sub_01b4a030(param_2);
  }
  return param_1;
}

struct C_01b4b2a0 {
    undefined4 * sub_01b4b2a0(int);
    int sub_01b4a090(int);
};

// @baa 0x01b4b2a0
undefined4 * C_01b4b2a0::sub_01b4b2a0(int param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  if (param_2 != 0) {
    ((C_01b4b2a0 *)(this))->sub_01b4a090(param_2);
  }
  return param_1;
}

struct C_01b4b310 {
    undefined4 * sub_01b4b310(int);
    int sub_01b4a0e0(int);
};

// @baa 0x01b4b310
undefined4 * C_01b4b310::sub_01b4b310(int param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  if (param_2 != 0) {
    ((C_01b4b310 *)(this))->sub_01b4a0e0(param_2);
  }
  return param_1;
}

struct C_01b4b640 {
    undefined4 * sub_01b4b640(int);
    int sub_01b4a1c0(int);
};

// @baa 0x01b4b640
undefined4 * C_01b4b640::sub_01b4b640(int param_2)
{
    undefined4 * param_1 = (undefined4 *)this;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  if (param_2 != 0) {
    ((C_01b4b640 *)(this))->sub_01b4a1c0(param_2);
  }
  return param_1;
}

struct C_01b4b6d0 {
    int sub_01b4b6d0(undefined4, undefined4, undefined4);
    int sub_01b4b150(int);
    int sub_01b4b1f0(int);
    int sub_01b4b220(int);
};

// @baa 0x01b4b6d0
int C_01b4b6d0::sub_01b4b6d0(undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
    int param_1 = (int)this;
  ((C_01b4b6d0 *)(this))->sub_01b4b150(param_2);
  ((C_01b4b6d0 *)(((char *)this + 0xc)))->sub_01b4b1f0(param_3);
  ((C_01b4b6d0 *)(((char *)this + 0x18)))->sub_01b4b220(param_4);
  *(undefined4 *)(param_1 + 4) = param_2;
  *(undefined4 *)(param_1 + 0x10) = param_3;
  *(undefined4 *)(param_1 + 0x1c) = param_4;
  return param_1;
}

struct Idx { unsigned short a; unsigned char b, c; };

struct V3 { double x,y,z; V3(double a,double b,double c):x(a),y(b),z(c){} };

struct V4 { double x,y,z,w; V4(double a,double b,double c,double d):x(a),y(b),z(c),w(d){} };

struct M {
  V3* v; int p1, p2; Idx* idx; int p4, p5; V4* w;
  M* sub_01b4b6d0(unsigned int, unsigned int, unsigned int);
};

void* sub_00402650(unsigned int);
void sub_01b4a960(M*);
// @baa 0x01b4b790
M* sub_01b4b790()
{
  M* m;
  void* r = sub_00402650(0x24);
  if (r) m = ((M*)r)->sub_01b4b6d0(4, 8, 2); else m = 0;
  m->v[0] = V3(0,0,0);
  m->v[1] = V3(1,0,0);
  m->v[2] = V3(1,1,0);
  m->v[3] = V3(0,1,0);
  m->w[0] = V4(0,0,1,0);
  m->w[1] = V4(0,0,-1.0,0);
  Idx t;
  t.a=7; t.b=0; t.c=0; m->idx[0]=t;
  t.a=6; t.b=1; t.c=0; m->idx[1]=t;
  t.a=5; t.b=2; t.c=0; m->idx[2]=t;
  t.a=4; t.b=3; t.c=0; m->idx[3]=t;
  t.a=3; t.b=0; t.c=1; m->idx[4]=t;
  t.a=2; t.b=3; t.c=1; m->idx[5]=t;
  t.a=1; t.b=2; t.c=1; m->idx[6]=t;
  t.a=0; t.b=1; t.c=1; m->idx[7]=t;
  sub_01b4a960(m);
  return m;
}

extern double g_01e729a8;
struct V3_01b4bd40 { double x,y,z; V3_01b4bd40(){} V3_01b4bd40(double a,double b,double c):x(a),y(b),z(c){} };

struct V4_01b4bd40 { double x,y,z,w; V4_01b4bd40(){} V4_01b4bd40(double a,double b,double c,double d):x(a),y(b),z(c),w(d){} };

struct R { V3_01b4bd40* a; int pad[5]; V4_01b4bd40* b; };

R* sub_01b4b930();
// @baa 0x01b4bd40
R* sub_01b4bd40(V3_01b4bd40* p, V3_01b4bd40* q)
{
  R* r = sub_01b4b930();
  r->a[0]=V3_01b4bd40(p->x,p->y,p->z);
  r->a[1]=V3_01b4bd40(p->x,p->y,q->z);
  r->a[2]=V3_01b4bd40(p->x,q->y,p->z);
  r->a[3]=V3_01b4bd40(p->x,q->y,q->z);
  r->a[4]=V3_01b4bd40(q->x,p->y,p->z);
  r->a[5]=V3_01b4bd40(q->x,p->y,q->z);
  r->a[6]=V3_01b4bd40(q->x,q->y,p->z);
  r->a[7]=V3_01b4bd40(q->x,q->y,q->z);
  double g=g_01e729a8, z=0, o=1;
  r->b[0]=V4_01b4bd40(g,z,z,p->x);
  r->b[1]=V4_01b4bd40(o,z,z,-q->x);
  r->b[2]=V4_01b4bd40(z,g,z,p->y);
  r->b[3]=V4_01b4bd40(z,o,z,-q->y);
  r->b[4]=V4_01b4bd40(z,z,g,p->z);
  r->b[5]=V4_01b4bd40(z,z,o,-q->z);
  return r;
}

struct C_01b4dfa0 {
    undefined4 sub_01b4dfa0(byte);
    int sub_01b49df0();
    int sub_01b49dc0();
    int sub_01b49d90();
};

int sub_00402660(...);
// @baa 0x01b4dfa0
undefined4 C_01b4dfa0::sub_01b4dfa0(byte param_2)
{
    undefined4 param_1 = (undefined4)this;
  ((C_01b4dfa0 *)(((char *)this + 0x18)))->sub_01b49df0();
  ((C_01b4dfa0 *)(((char *)this + 0xc)))->sub_01b49dc0();
  ((C_01b4dfa0 *)(this))->sub_01b49d90();
  if ((param_2 & 1) != 0) {
    sub_00402660(param_1);
  }
  return param_1;
}

struct C_01b4fd70 {
    int sub_01b4fd70();
};

// @baa 0x01b4fd70
int C_01b4fd70::sub_01b4fd70(void)
{
    int param_1 = (int)this;
  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  return (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0xe0;
}

struct FRange_01b4ffc0
{
	void *Range;
	UINT Count;

	FRange_01b4ffc0 *sub_01b4ffc0(UINT Index, FArrayLike *Array);
};

// @baa 0x01b4ffc0
FRange_01b4ffc0 *FRange_01b4ffc0::sub_01b4ffc0(UINT Index, FArrayLike *Array)
{
	Range = 0;
	if (!Array || Array->ArrayNum > Index || Index > Array->ArrayMax)
	{
		_invalid_parameter_noinfo();
	}
	Range = Array;
	Count = Index;
	return this;
}
