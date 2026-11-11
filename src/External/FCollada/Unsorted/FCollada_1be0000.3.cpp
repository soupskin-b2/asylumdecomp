// FCollada_1be0000.cpp (part 3 of 4): 9 functions
// Functions whose original source file is not known yet, grouped by address.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

int sub_01bb50e0(...);
int __stdcall sub_01be1c40(int, int);
// @baa 0x01be4f30
int sub_01be4f30(void)
{
  int iVar1;
  iVar1 = sub_01bb50e0(0x28);
  *(undefined4 *)(iVar1 + 0x20) = 0;
  *(undefined4 *)(iVar1 + 0x24) = 0;
  sub_01be1c40(0,iVar1);
  return iVar1;
}

int __stdcall sub_01be1ca0(int);
// @baa 0x01be4f50
void sub_01be4f50(void)
{
  sub_01be1ca0(0);
  return;
}

int sub_01bb51e0(...);
int __stdcall sub_01be1ce0(int);
// @baa 0x01be4f60
void sub_01be4f60(void)
{
  undefined4 uVar1;
  uVar1 = sub_01be1ca0(0);
  sub_01bb51e0(uVar1);
  sub_01be1c40(0,0);
  sub_01be1ce0(0);
  return;
}

// @baa 0x01be4f90
undefined4 * sub_01be4f90(void)
{
  undefined4 *puVar1;
  puVar1 = (undefined4 *)sub_01bb50e0(0x28);
  puVar1[8] = 0;
  puVar1[9] = 0;
  sub_01be1c40(0, (int)(puVar1));
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  return puVar1;
}

// @baa 0x01be4fd0
undefined4 * sub_01be4fd0(void)
{
  undefined4 *puVar1;
  puVar1 = (undefined4 *)sub_01be1ca0(0);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)sub_01bb50e0(0x28);
    puVar1[8] = 0;
    puVar1[9] = 0;
    sub_01be1c40(0, (int)(puVar1));
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    puVar1[7] = 0;
  }
  return puVar1;
}

// @baa 0x01be5020
void sub_01be5020(void)
{
  undefined4 uVar1;
  uVar1 = sub_01be1ca0(0);
  sub_01bb51e0(uVar1);
  sub_01be1c40(0,0);
  sub_01be1ce0(0);
  return;
}

// @baa 0x01be6760
undefined4 sub_01be6760(void)
{
  return 0;
}

typedef void*_PtFuncCompare;

typedef undefined4 size_t;

int sub_01bc7160(...);
int sub_01bc7510(...);
uint sub_01bc8240(void);
int sub_01be86f0(...);
extern undefined1 g_01e66a54;
extern "C" __declspec(dllimport)void __cdecl qsort(void*,unsigned uint,unsigned int,int(__cdecl*)(const void*,const void*));
// @baa 0x01be87e0
void*sub_01be87e0(DWORD param_1,size_t*param_2)
{
void*_Base;
size_t _NumOfElements;
int iVar1;
int uStack_4;
uStack_4=0;
iVar1=0;
if(0<*(short*)(0x12+param_1)){
do{
sub_01be86f0(param_1,(int)*(short*)(*(int*)(4+param_1)+2*iVar1),&g_01e66a54,
&uStack_4);
iVar1=iVar1+1;
}while(iVar1<*(short*)(param_1+0x12));
}
_NumOfElements=sub_01bc7160(uStack_4);
_Base=(void*)sub_01bc7510(&uStack_4,_NumOfElements,0);
qsort(_Base,_NumOfElements,4,(int(__cdecl*)(const void*,const void*))((_PtFuncCompare*)&sub_01bc8240));
*param_2=_NumOfElements;
return _Base;
}

void* sub_01bb53d0(int, int);
void* sub_01bb50e0(int);
void* sub_01a37612(void*, int, unsigned int);
struct InData {
    int* A;
    int* B;
    int count;
    int D;
    int E;
};

struct OutData {
    int count;      // 0x0
    int* arr1;      // 0x4
    int* arr2;      // 0x8
    int max;        // 0xc
    int type;       // 0x10
    int* dims;      // 0x14
    int total;      // 0x18
    int* table;     // 0x1c
    int** rows;     // 0x20
    int unknown;    // 0x24
    int param;      // 0x28
};

// @baa 0x01beee60
OutData* sub_01beee60(InData* p)
{
    int i;
    int* A = p->A;
    int* B = p->B;
    int count = p->count;
    int D = p->D;
    int E = p->E;
    OutData* r = (OutData*)sub_01bb53d0(1, 0x2c);
    if (r) {
        r->arr1 = (int*)sub_01bb50e0(count * 4);
        r->arr2 = (int*)sub_01bb50e0(count * 4);
        r->count = count;
        for (i = 0; i < count; i++) {
            r->arr1[i] = A[i];
            r->arr2[i] = B[i];
        }
        int mn = A[0];
        int mx = B[0] + mn;
        for (i = 1; i < count; i++) {
            if (A[i] < mn) {
                mn = A[i];
            } else if (A[i] + B[i] > mx) {
                mx = A[i] + B[i];
            }
        }
        r->max = mx;
        r->type = 2;
        r->dims = (int*)sub_01bb50e0(8);
        r->dims[0] = mx - mn + 1;
        r->dims[1] = D;
        r->total = r->dims[1] * r->dims[0];
        r->rows = (int**)sub_01bb50e0(r->dims[0] * 4);
        if (r->rows) {
            r->table = (int*)sub_01bb50e0(r->total * 4);
            if (r->table) {
                sub_01a37612(r->table, 0, r->total * 4);
                i = 1;
                r->rows[0] = r->table;
                for (; i < r->dims[0]; i++)
                    r->rows[i] = r->rows[i - 1] + r->dims[1];
            }
        }
        r->param = E;
    }
    return r;
}
