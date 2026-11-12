// UnPawn.cpp (part 1 of 2): 96 functions
// Placed here by: neighbours 49, class 32, callers 3, file 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

extern char g_01ebc268[];
// @baa 0x00754460
int sub_00754460(void) { return (int)g_01ebc268; }

// @baa 0x007581c0
undefined4 AActor::vf_164(int param_2)
{
    int param_1 = (int)this;

  if ((((*(uint *)(param_1 + 0x30) & 0x4000) != 0) &&
      ((*(uint *)(param_2 + 0x34) & 0x80000000) != 0)) &&
     ((*(char *)(param_2 + 0x90) == '\n' || (*(char *)(param_2 + 0x90) == '\a')))) {
    return 1;
  }
  return 0;
}

// @baa 0x00758220
undefined4 APawn::vf_164(int param_2)
{
    int param_1 = (int)this;

  if (((*(char *)(param_1 + 0x90) != '\n') || ((*(uint *)(param_2 + 0x30) & 0x1000) == 0)) &&
     ((((*(uint *)(param_1 + 0x30) & 0x4000) == 0 || ((*(uint *)(param_2 + 0x34) & 0x80000000) == 0)
       ) || ((*(char *)(param_2 + 0x90) != '\n' && (*(char *)(param_2 + 0x90) != '\a')))))) {
    return 0;
  }
  return 1;
}

// @baa 0x00776130
IMPLEMENT_CLASS_AT(APawn, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnPawn.cpp", 29);

// @baa 0x007761a0
void* APawn::vf_2ec() { return this; }

// @baa 0x007761b0
void* APawn::vf_2e8() { return this; }

// @baa 0x007761c0
int APawn::vf_3f0(void) { return 0; }

// @baa 0x007761d0
void APawn::vf_400(int a0) {  }

// @baa 0x007761e0
int APawn::vf_414(int a0, int a1) { return 0; }

// @baa 0x007761f0
void APawn::vf_418(int a0, int a1) {  }

// @baa 0x00776200
int APawn::vf_41c(int a0) { return 1; }

// @baa 0x00776210
int APawn::vf_44c(int a0, int a1) { return 0; }

// @baa 0x00776220
int APawn::vf_454(int a0) { return 0; }

// @baa 0x00776230
int APawn::vf_458(int a0, int a1) { return 0; }

// @baa 0x00776270
// @baa 0x007a0780
undefined4 APawn::vf_364(int param_2, undefined4 param_3)
{
    int param_1 = (int)this;

  int iVar1;
  
  if ((((*(byte *)(param_1 + 0x30) & 0x40) == 0) && (0 < *(int *)(param_1 + 0x2a4))) &&
     (*(int *)(param_1 + 0x358) == 0)) {
    if (*(int *)(param_1 + 0x30c) == 0) {
      return param_3;
    }
    if (((param_2 == 0) || (iVar1 = *(int *)(*(int *)(param_1 + 0x30c) + 0x1e8), iVar1 == 0)) ||
       (iVar1 != *(int *)(param_2 + 0x1e8))) {
      return 1;
    }
  }
  return 0;
}

int sub_0077b230(...);
int sub_00784c00(void);
extern undefined4 g_026b3c54;
// @baa 0x00802a10
int sub_00802a10(void)
{
  if (g_026b3c54 == 0) {
    g_026b3c54 = sub_0077b230(L"Engine");
    sub_00784c00();
  }
  return g_026b3c54;
}

struct CObj;
struct Comp;
struct Q;
struct R;
typedef int (CObj::*PMFi)(int);

typedef int (CObj::*PMF0)();

struct R {
    char pad_0[0x210];
    int field_210;        // 0x210
    char pad_214[4];
    R* next;              // 0x218
};

struct Q {
    R* sub_009c8530();
};

struct Comp {
    int sub_0083fd50(CObj* a, int b);
};

struct CObj {
    void** vtable;           // 0x00
    char pad_04[0x34 - 0x04];
    int field_34;            // 0x34
    char pad_38[0x48 - 0x38];
    Comp* field_48;          // 0x48
    char pad_4c[0x60 - 0x4c];
    unsigned char field_60;  // 0x60
    char pad_61[0x1e0 - 0x61];
    TArray<CObj*> Array;     // 0x1e0
    char pad_1ec[0x22c - (0x1e0 + 12)];
    int field_22c;           // 0x22c

    int sub_0084e020();
    int sub_00893970(CObj* other);
    void sub_0084ced0();
    void sub_0083fc20();
};

extern undefined4 g_026b62b8;
extern undefined2 g_01e3f3dc;
// @baa 0x0084e020
int CObj::sub_0084e020()
{
    int count = 0;
    int i = 0;
    for (; i < this->Array.Num(); i++)
    {
        CObj* elem_i = this->Array(i);
        if (((this->*(*(PMFi*)((char*)this->vtable + 0x374)))(i) != 0)
            && ((elem_i->*(*(PMF0*)((char*)elem_i->vtable + 0x120)))() == 0)
            && ((elem_i->*(*(PMF0*)((char*)elem_i->vtable + 0x11c)))() == 0))
        {
            for (R* p = ((Q*)g_026b62b8)->sub_009c8530(); p; p = p->next)
            {
                p->field_210 = 10000000;
            }
            for (int j = 0; j < this->Array.Num(); j++)
            {
                CObj* elem_j = this->Array(j);
                if ((i != j)
                    && (elem_j->sub_00893970(elem_i) != 0)
                    && (elem_j->field_48->sub_0083fd50(elem_i, elem_j->field_34) != 0))
                {
                    count++;
                    elem_i->field_60 = 1;
                    j = this->Array.Num();
                }
            }
        }
    }
    this->sub_0084ced0();
    this->field_22c = this->field_22c < 0 ? 0 : this->field_22c;
    this->sub_0083fc20();
    return count;
}

// @baa 0x008643a0
int sub_008643a0(int a0, int a1) { return a1; }

struct C { C* sub_008643b0(int a0); };

// @baa 0x008643b0
C* C::sub_008643b0(int a0) { return this; }

struct C_00864420 { C_00864420* sub_00864420(int a0); };

// @baa 0x00864420
C_00864420* C_00864420::sub_00864420(int a0) { return this; }

struct C_00864430 { C_00864430* sub_00864430(int a0); };

// @baa 0x00864430
C_00864430* C_00864430::sub_00864430(int a0) { return this; }

struct C_00864440 { C_00864440* sub_00864440(int a0); };

// @baa 0x00864440
C_00864440* C_00864440::sub_00864440(int a0) { return this; }

struct C_00864450 { C_00864450* sub_00864450(int a0); };

// @baa 0x00864450
C_00864450* C_00864450::sub_00864450(int a0) { return this; }

extern "C" int g_026c45dc;
extern "C" int g_026c45e0;
struct UObjectThunk {
    virtual void V00();
    virtual void V04();
    virtual void V08();
    virtual void V0c();
    virtual void V10();
    virtual void V14();
    virtual void V18();
    virtual void V1c();
    virtual void V20();
    virtual void V24();
    virtual void V28();
    virtual void V2c();
    virtual void V30();
    virtual void V34();
    virtual void V38();
    virtual void V3c();
    virtual void V40();
    virtual void V44();
    virtual void V48();
    virtual void V4c();
    virtual void V50();
    virtual void V54();
    virtual void V58();
    virtual void V5c();
    virtual void V60();
    virtual void V64();
    virtual void V68();
    virtual void V6c();
    virtual void V70();
    virtual void V74();
    virtual void V78();
    virtual void V7c();
    virtual void V80();
    virtual void V84();
    virtual void V88();
    virtual void V8c();
    virtual void V90();
    virtual void V94();
    virtual void V98();
    virtual void V9c();
    virtual void VA0();
    virtual void VA4();
    virtual void VA8();
    virtual void VAc();
    virtual void VB0();
    virtual void VB4();
    virtual void VB8();
    virtual void VBc();
    virtual void VC0();
    virtual void VC4();
    virtual void VC8();
    virtual void VCc();
    virtual void VD0();
    virtual void VD4();
    virtual void VD8();
    virtual void VDc();
    virtual void VE0();
    virtual void VE4();
    virtual void VE8();
    virtual void ProcessEvent(int, int, int);
    int __thiscall sub_005d7d10(int, int, int);
    void sub_00864460();
};

// @baa 0x00864460
void UObjectThunk::sub_00864460()
{
    this->ProcessEvent(this->sub_005d7d10(g_026c45dc, g_026c45e0, 0), 0, 0);
}

extern "C" int g_026c48ec;
extern "C" int g_026c48f0;
struct UObjectThunk_008646a0 {
    virtual void V00();
    virtual void V04();
    virtual void V08();
    virtual void V0c();
    virtual void V10();
    virtual void V14();
    virtual void V18();
    virtual void V1c();
    virtual void V20();
    virtual void V24();
    virtual void V28();
    virtual void V2c();
    virtual void V30();
    virtual void V34();
    virtual void V38();
    virtual void V3c();
    virtual void V40();
    virtual void V44();
    virtual void V48();
    virtual void V4c();
    virtual void V50();
    virtual void V54();
    virtual void V58();
    virtual void V5c();
    virtual void V60();
    virtual void V64();
    virtual void V68();
    virtual void V6c();
    virtual void V70();
    virtual void V74();
    virtual void V78();
    virtual void V7c();
    virtual void V80();
    virtual void V84();
    virtual void V88();
    virtual void V8c();
    virtual void V90();
    virtual void V94();
    virtual void V98();
    virtual void V9c();
    virtual void VA0();
    virtual void VA4();
    virtual void VA8();
    virtual void VAc();
    virtual void VB0();
    virtual void VB4();
    virtual void VB8();
    virtual void VBc();
    virtual void VC0();
    virtual void VC4();
    virtual void VC8();
    virtual void VCc();
    virtual void VD0();
    virtual void VD4();
    virtual void VD8();
    virtual void VDc();
    virtual void VE0();
    virtual void VE4();
    virtual void VE8();
    virtual void ProcessEvent(int, int, int);
    int __thiscall sub_005d7d10(int, int, int);
    void sub_008646a0();
};

// @baa 0x008646a0
void UObjectThunk_008646a0::sub_008646a0()
{
    this->ProcessEvent(this->sub_005d7d10(g_026c48ec, g_026c48f0, 0), 0, 0);
}

struct C_008646d0 {
    undefined4 sub_008646d0(undefined4, undefined4, uint, int);
};

// @baa 0x008646d0
undefined4 C_008646d0::sub_008646d0(undefined4 param_2, undefined4 param_3, uint param_4, int param_5)
{
    int param_1 = (int)this;

  if (((*(uint *)(param_1 + 0x58) & param_4) == *(uint *)(param_1 + 0x58)) &&
     (*(int *)(param_1 + 0x5c) <= param_5)) {
    return 1;
  }
  return 0;
}

int sub_0077b470(...);
int sub_00782f40(void);
extern undefined4 g_026b3c60;
// @baa 0x00864700
int sub_00864700(void)
{
  if (g_026b3c60 == 0) {
    g_026b3c60 = sub_0077b470(L"Engine");
    sub_00782f40();
  }
  return g_026b3c60;
}

int sub_0077a330(...);
int sub_0077f650(void);
extern undefined4 g_026b3bf0;
// @baa 0x00864730
int sub_00864730(void)
{
  if (g_026b3bf0 == 0) {
    g_026b3bf0 = sub_0077a330(L"Engine");
    sub_0077f650();
  }
  return g_026b3bf0;
}

int sub_0077a030(...);
int sub_0077f500(void);
extern undefined4 g_026b3be0;
// @baa 0x00864760
int sub_00864760(void)
{
  if (g_026b3be0 == 0) {
    g_026b3be0 = sub_0077a030(L"Engine");
    sub_0077f500();
  }
  return g_026b3be0;
}

int sub_0077c070(...);
int sub_00780b80(void);
extern undefined4 g_026b3cbc;
// @baa 0x00864790
int sub_00864790(void)
{
  if (g_026b3cbc == 0) {
    g_026b3cbc = sub_0077c070(L"Engine");
    sub_00780b80();
  }
  return g_026b3cbc;
}

// @baa 0x008647c0
int sub_008647c0(int a0, int a1) { return a1; }

struct C_008647d0 { C_008647d0* sub_008647d0(int a0); };

// @baa 0x008647d0
C_008647d0* C_008647d0::sub_008647d0(int a0) { return this; }

struct C_008647e0 { C_008647e0* sub_008647e0(int a0); };

// @baa 0x008647e0
C_008647e0* C_008647e0::sub_008647e0(int a0) { return this; }

struct C_008647f0 { C_008647f0* sub_008647f0(int a0); };

// @baa 0x008647f0
C_008647f0* C_008647f0::sub_008647f0(int a0) { return this; }

extern "C" int g_026c4c10;
extern "C" int g_026c4c14;
struct UObjectThunk_00864800 {
    virtual void V00();
    virtual void V04();
    virtual void V08();
    virtual void V0c();
    virtual void V10();
    virtual void V14();
    virtual void V18();
    virtual void V1c();
    virtual void V20();
    virtual void V24();
    virtual void V28();
    virtual void V2c();
    virtual void V30();
    virtual void V34();
    virtual void V38();
    virtual void V3c();
    virtual void V40();
    virtual void V44();
    virtual void V48();
    virtual void V4c();
    virtual void V50();
    virtual void V54();
    virtual void V58();
    virtual void V5c();
    virtual void V60();
    virtual void V64();
    virtual void V68();
    virtual void V6c();
    virtual void V70();
    virtual void V74();
    virtual void V78();
    virtual void V7c();
    virtual void V80();
    virtual void V84();
    virtual void V88();
    virtual void V8c();
    virtual void V90();
    virtual void V94();
    virtual void V98();
    virtual void V9c();
    virtual void VA0();
    virtual void VA4();
    virtual void VA8();
    virtual void VAc();
    virtual void VB0();
    virtual void VB4();
    virtual void VB8();
    virtual void VBc();
    virtual void VC0();
    virtual void VC4();
    virtual void VC8();
    virtual void VCc();
    virtual void VD0();
    virtual void VD4();
    virtual void VD8();
    virtual void VDc();
    virtual void VE0();
    virtual void VE4();
    virtual void VE8();
    virtual void ProcessEvent(int, int, int);
    int __thiscall sub_005d7d10(int, int, int);
    void sub_00864800();
};

// @baa 0x00864800
void UObjectThunk_00864800::sub_00864800()
{
    this->ProcessEvent(this->sub_005d7d10(g_026c4c10, g_026c4c14, 0), 0, 0);
}

// @baa 0x008648f0
undefined4 sub_008648f0(undefined4 param_1, undefined4 param_2)
{
  return param_2;
}

struct C_00864900 {
    float10 sub_00864900();
};

// @baa 0x00864900
float10 C_00864900::sub_00864900(void)
{
    int param_1 = (int)this;

  return (float10)*(float *)(param_1 + 0x280) * (float10)*(float *)(param_1 + 0x27c);
}

int sub_00757b30(void);
int sub_0075d810(...);
extern undefined4 g_026b3cb8;
// @baa 0x00864910
int sub_00864910(void)
{
  if (g_026b3cb8 == 0) {
    g_026b3cb8 = sub_0075d810(L"Engine");
    sub_00757b30();
  }
  return g_026b3cb8;
}

struct C_00864940 { int sub_00864940(void); };

// @baa 0x00864940
int C_00864940::sub_00864940(void) { return *(int*)((char*)this + 44); }

struct C_008649b0 { int sub_008649b0(void); };

// @baa 0x008649b0
int C_008649b0::sub_008649b0(void) { return *(int*)((char*)this + 156); }

struct C_008649c0 { int sub_008649c0(void); };

// @baa 0x008649c0
int C_008649c0::sub_008649c0(void) { return *(int*)((char*)this + 12); }

int sub_00ceacb0(void);
int sub_00d076a0(...);
extern undefined4 g_026c5668;
// @baa 0x008649d0
int sub_008649d0(void)
{
  if (g_026c5668 == 0) {
    g_026c5668 = sub_00d076a0(L"Engine");
    sub_00ceacb0();
  }
  return g_026c5668;
}

int sub_008aaf30(void);
int sub_008c8c10(...);
extern undefined4 g_026b5ad8;
// @baa 0x00864a00
int sub_00864a00(void)
{
  if (g_026b5ad8 == 0) {
    g_026b5ad8 = sub_008c8c10(L"Engine");
    sub_008aaf30();
  }
  return g_026b5ad8;
}

int sub_00cea890(void);
int sub_00d19660(...);
extern undefined4 g_026c565c;
// @baa 0x00864a30
int sub_00864a30(void)
{
  if (g_026c565c == 0) {
    g_026c565c = sub_00d19660(L"Engine");
    sub_00cea890();
  }
  return g_026c565c;
}

// @baa 0x00864a60
IMPLEMENT_CLASS_AT(APathBlockingVolume, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnPath.cpp", 15);

// @baa 0x00864b70
int APathBlockingVolume::vf_000(void) { return 1; }

// @baa 0x00864b80
bool APathBlockingVolume::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00864bc0
IMPLEMENT_CLASS_AT(ARoute, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnPath.cpp", 16);

// @baa 0x00864cd0
int ARoute::vf_000(void) { return 1; }

// @baa 0x00864ce0
bool ARoute::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

struct C_view {
    int sub_00784170(int, int, int);
};

// @baa 0x00864dd0
void APathBlockingVolume::vf_2c8(undefined4 param_2)
{
    int param_1 = (int)this;
  ((C_view *)(this))->sub_00784170(param_2, *(uint *)(param_1 + 0x38) >> 2 & 1, *(uint *)(param_1 + 0x30) >> 0xe & 1);
  return;
}

// @baa 0x00864e10
int ANavigationPoint::vf_29c(int a0) { return 1; }

// @baa 0x00864e50
void AScout::vf_480(void) {  }

// @baa 0x00864e80
// @baa 0x00864fb0
bool APawn::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00865050
undefined4 APawn::vf_160(void)
{
    int param_1 = (int)this;

  if ((*(int *)(param_1 + 0x1b4) != 0) && ((*(byte *)(*(int *)(param_1 + 0x1b4) + 0x1b8) & 1) != 0))
  {
    return 1;
  }
  return 0;
}

// @baa 0x008650f0
int APawn::vf_368(void) { return 0; }

// @baa 0x00865100
undefined4 APawn::vf_354(void)
{
    int param_1 = (int)this;

  if (((0 < *(int *)(param_1 + 0x2a4)) && ((*(byte *)(param_1 + 0x30) & 0x50) == 0)) &&
     ((*(uint *)(param_1 + 0x1cc) & 0x2000000) == 0)) {
    return 1;
  }
  return 0;
}

// @baa 0x00865130
UBOOL APawn::ShouldTrace(UPrimitiveComponent* Primitive, AActor* SourceActor, DWORD TraceFlags)
{
    undefined4 param_2 = (undefined4)Primitive;
    undefined4 param_3 = (undefined4)SourceActor;
    byte param_4 = (byte)TraceFlags;
    int param_1 = (int)this;

  if (((param_4 & 1) == 0) &&
     (((*(uint *)(param_1 + 0x1cc) & 0x800) == 0 || ((param_4 & 0x10) == 0)))) {
    return 0;
  }
  return 1;
}

struct V_00865290 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void v21();
    virtual void v22();
    virtual void v23();
    virtual void v24();
    virtual void v25();
    virtual void v26();
    virtual void v27();
    virtual void v28();
    virtual void v29();
    virtual void v30();
    virtual void v31();
    virtual void v32();
    virtual void v33();
    virtual void v34();
    virtual void v35();
    virtual void v36();
    virtual void v37();
    virtual void v38();
    virtual void v39();
    virtual void v40();
    virtual void v41();
    virtual void v42();
    virtual void v43();
    virtual void v44();
    virtual void v45();
    virtual void v46();
    virtual void v47();
    virtual void v48();
    virtual void v49();
    virtual void v50();
    virtual void v51();
    virtual void v52();
    virtual void v53();
    virtual void v54();
    virtual void v55();
    virtual void v56();
    virtual void v57();
    virtual void v58();
    virtual void v59();
    virtual void v60();
    virtual void v61();
    virtual void v62();
    virtual void v63();
    virtual void v64();
    virtual void v65();
    virtual void v66();
    virtual void v67();
    virtual void v68();
    virtual void v69();
    virtual void v70();
    virtual void v71();
    virtual void v72();
    virtual void v73();
    virtual void v74();
    virtual void v75();
    virtual void v76();
    virtual void v77();
    virtual void v78();
    virtual void v79();
    virtual void v80();
    virtual void v81();
    virtual void v82();
    virtual void v83();
    virtual void v84();
    virtual void v85();
    virtual void v86();
    virtual void v87();
    virtual void v88();
    virtual void v89();
    virtual void v90();
    virtual void v91();
    virtual void v92();
    virtual void v93();
    virtual void v94();
    virtual void v95();
    virtual void v96();
    virtual void v97();
    virtual void v98();
    virtual void v99();
    virtual void v100();
    virtual void v101();
    virtual void v102();
    virtual void v103();
    virtual void v104();
    virtual void v105();
    virtual void v106();
    virtual void v107();
    virtual void v108();
    virtual void v109();
    virtual void v110();
    virtual void v111();
    virtual void v112();
    virtual void v113();
    virtual void v114();
    virtual void v115();
    virtual void v116();
    virtual void v117();
    virtual void v118();
    virtual void v119();
    virtual void v120();
    virtual void v121();
    virtual void v122();
    virtual void v123();
    virtual void v124();
    virtual void v125();
    virtual void v126();
    virtual void v127();
    virtual void v128();
    virtual void v129();
    virtual void v130();
    virtual void v131();
    virtual void v132();
    virtual void v133();
    virtual void v134();
    virtual void v135();
    virtual void v136();
    virtual void v137();
    virtual void v138();
    virtual void v139();
    virtual void v140();
    virtual void v141();
    virtual void v142();
    virtual void v143();
    virtual void v144();
    virtual void v145();
    virtual void v146();
    virtual void v147();
    virtual void v148();
    virtual void v149();
    virtual void v150();
    virtual void v151();
    virtual void v152();
    virtual void v153();
    virtual void v154();
    virtual void v155();
    virtual void v156();
    virtual void v157();
    virtual void v158();
    virtual void v159();
    virtual void v160();
    virtual void v161();
    virtual void v162();
    virtual void v163();
    virtual void v164();
    virtual void v165();
    virtual void v166();
    virtual void v167();
    virtual void v168();
    virtual void v169();
    virtual void v170();
    virtual void v171();
    virtual void v172();
    virtual void v173();
    virtual void v174();
    virtual void v175();
    virtual void v176();
    virtual void v177();
    virtual void v178();
    virtual void v179();
    virtual void v180();
    virtual void v181();
    virtual void v182();
    virtual void v183();
    virtual void v184();
    virtual void v185();
    virtual void v186();
    virtual void v187();
    virtual void v188();
    virtual void v189();
    virtual void v190();
    virtual void v191();
    virtual void v192();
    virtual void v193();
    virtual void v194();
    virtual void v195();
    virtual void v196();
    virtual void v197();
    virtual void v198();
    virtual void v199();
    virtual void v200();
    virtual void v201();
    virtual void v202();
    virtual void v203();
    virtual void v204();
    virtual void v205();
    virtual void v206();
    virtual void v207();
    virtual void v208();
    virtual void v209();
    virtual void v210();
    virtual void v211();
    virtual void v212();
    virtual void v213();
    virtual void v214();
    virtual void v215();
    virtual void v216();
    virtual void v217();
    virtual void v218();
    virtual void v219();
    virtual void v220();
    virtual void v221();
    virtual void v222();
    virtual void v223();
    virtual void v224();
    virtual void v225();
    virtual void v226();
    virtual void v227();
    virtual void v228();
    virtual void v229();
    virtual void v230();
    virtual void v231();
    virtual void v232();
    virtual void v233();
    virtual void v234();
    virtual void v235();
    virtual void v236();
    virtual void v237();
    virtual void v238();
    virtual void v239();
    virtual void v240();
    virtual void v241();
    virtual void v242();
    virtual void v243();
    virtual void v244();
    virtual void v245();
    virtual void v246();
    virtual void v247();
    virtual void v248();
    virtual void v249();
    virtual void v250();
    virtual void v251();
    virtual void v252();
    virtual void v253();
    virtual void v254();
    virtual void v255();
    virtual void v256();
    virtual void v257();
    virtual void v258();
    virtual void v259();
    virtual void v260();
    virtual void v261();
    virtual void v262();
    virtual void v263();
    virtual void v264();
    virtual void v265();
    virtual void v266();
    virtual void v267();
    virtual void v268();
    virtual void v269();
    virtual void v270();
    virtual void g(int);
    void sub_00865290();
};

// @baa 0x00865290
void V_00865290::sub_00865290() { g(0); }

struct C_008655e0 {
    float10 sub_008655e0();
};

// @baa 0x008655e0
float10 C_008655e0::sub_008655e0(void)
{
    int param_1 = (int)this;

  if (*(char *)(param_1 + 0x90) == '\x04') {
    return (float10)*(float *)(param_1 + 600);
  }
  if (*(char *)(param_1 + 0x90) == '\x03') {
    return (float10)*(float *)(param_1 + 0x254);
  }
  return (float10)*(float *)(param_1 + 0x250);
}

// @baa 0x00865630
undefined4 APawn::vf_3cc(void)
{
    int param_1 = (int)this;

  if (((*(uint *)(param_1 + 0x1c8) & 0x8000) == 0) &&
     ((*(char *)(param_1 + 0x90) == '\x04' || (*(char *)(param_1 + 0x90) == '\x03')))) {
    return 1;
  }
  return 0;
}

// @baa 0x00865a30
int APawn::vf_3fc(int a0) { return 1; }

// @baa 0x00867a20
undefined4 APawn::vf_3d4(int param_2)
{
    int param_1 = (int)this;

  if ((param_2 != 0) &&
     ((*(int *)(param_1 + 0x9c) == param_2 || (*(int *)(param_2 + 0x9c) == param_1)))) {
    return 1;
  }
  return 0;
}

struct FOO {
  int __thiscall sub_009c6c80(void);
};

// @baa 0x00867f50
void sub_00867f50(void)
{
  ((FOO *)g_026b62b8)->sub_009c6c80();
}

// @baa 0x00868d90
void APawn::vf_420(int a0, int a1) {  }

// @baa 0x0086a890
int AActor::vf_210(int a0, int a1, int a2) { return 0; }

void sub_004025d0(void*);
struct D { void* p; ~D(){ if(0) sub_004025d0(p);} };

void sub_0053dfa0(void*);
struct C_0087d2d0 { void* Data; int Num; int Max; void sub_0087d2d0(); };

// @baa 0x0087d2d0
void C_0087d2d0::sub_0087d2d0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

struct C_0087d330 {
    void sub_0087d330(int);
};

int sub_0053df70(...);
// @baa 0x0087d330
void C_0087d330::sub_0087d330(int param_2)
{
    int * param_1 = (int *)this;
  int iVar1;
  param_1[1] = 0;
  if (param_1[2] != param_2) {
    param_1[2] = param_2;
    if ((*param_1 != 0) || (param_2 != 0)) {
      iVar1 = sub_0053df70(*param_1,param_2 * 4,8);
      *param_1 = iVar1;
    }
  }
  return;
}

struct T_0087d370;
// @baa 0x0087d370
template INT TArray<T_0087d370*>::RemoveItem(T_0087d370* const&);

struct C_0087d3f0 { void* Data; int Num; int Max; void sub_0087d3f0(); };

// @baa 0x0087d3f0
void C_0087d3f0::sub_0087d3f0() {
    void* t = Data;
    {
    D d;
    Max = 0; Num = 0;
    d.~D();
    }
    if (t) { sub_0053dfa0(t); Data = 0; }
}

// @baa 0x0087d450
void __stdcall sub_0087d450(DWORD a1, DWORD a2)
{
}

void sub_0087d2d0();
// @baa 0x0087d6f0
void sub_0087d6f0(void) { sub_0087d2d0(); }

struct S16 {
    INT f00;
    INT f04;
    INT f08;
    INT f0c;
    S16* sub_0087d700();
};

// @baa 0x0087d700
S16* S16::sub_0087d700()
{
    f00 = 0;
    f04 = 0;
    f08 = 0;
    f0c = 0;
    return this;
}

struct C_0087d830 {
    undefined4 sub_0087d830(byte);
};

int sub_0053dfa0(...);
int sub_0087d710(void);
// @baa 0x0087d830
undefined4 C_0087d830::sub_0087d830(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_0087d710();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

// @baa 0x008873c0
// @baa 0x00887570
int sub_00864bc0(void);
int sub_008874b0(...);
extern undefined4 g_026b5884;
// @baa 0x00887630
int sub_00887630(void)
{
  if (g_026b5884 == 0) {
    g_026b5884 = sub_008874b0(L"Engine");
    sub_00864bc0();
  }
  return g_026b5884;
}

// @baa 0x0088a320
int APawn::vf_408(void)
{
    int param_1 = (int)this;

  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x1c8);
  return (uVar1 >> 0xb & 1) +
         ((uVar1 >> 0xd & 1) +
         ((uVar1 >> 0xc & 1) + ((uVar1 >> 9 & 1) + (*(uint *)(param_1 + 0x1cc) >> 0x1a & 1) * 8) * 2
         ) * 2) * 2;
}

extern undefined4 g_026b5a90;
// @baa 0x008a66c0
undefined4 APawn::sub_008a66c0(void)
{
    undefined4 param_1 = (undefined4)this;

  g_026b5a90 = 1;
  return param_1;
}

// @baa 0x008a6840
void APawn::vf_3ac(int a0, int a1) {  }

// @baa 0x008a6850
void APawn::vf_3b0(int a0, int a1) {  }

// @baa 0x008a6860
void APawn::DrawPathStep(class UCanvas* a0) {  }

// @baa 0x008a6870
void APawn::vf_3b8(void) {  }

// APawn slot 0x358 (vtable 214): AdjustDestination. Returns a zero vector.
struct APawn_ : public APawn {
    FVector sub_008655c0(AActor* InGoal, FVector InDest);
};

// @baa 0x008655c0
FVector APawn_::sub_008655c0(AActor* InGoal, FVector InDest)
{
    FVector Result;
    Result.X = 0.0f;
    Result.Y = 0.0f;
    Result.Z = 0.0f;
    return Result;
}

struct Sub
{
    void sub_0084e020();
};

struct AScout_ : public AScout
{
    void vf_4a4(Sub* Object);
};

// @baa 0x00864e00
void AScout_::vf_4a4(Sub* Object)
{
    Object->sub_0084e020();
}

struct C_00867a50
{
    char pad_00[0x1c8];
    DWORD Flags;

    void sub_00867a50(INT Unused);
};

// @baa 0x00867a50
void C_00867a50::sub_00867a50(INT)
{
    Flags |= 0x2000000;
}

// @baa 0x00867e90
// AActor::GetTerminalVelocity (vtable slot 0x11c)
FLOAT AActor::vf_11c()
{
    return PhysicsVolume ? PhysicsVolume->TerminalVelocity : ((APhysicsVolume*)APhysicsVolume::StaticClass()->GetDefaultObject())->TerminalVelocity;
}

extern FName g_026c54d0;
	/* ENGINE_TakeDamage */
struct AActor_ : public AActor
{
	void eventTakeDamage(INT Damage, AController* EventInstigator, FVector HitLocation, FVector Momentum, UClass* DamageType, FTraceHitInfo HitInfo, AActor* DamageCauser);
};

// @baa 0x00863e60
/* The script event's generated glue (EngineClasses.h), out of line here. */
void AActor_::eventTakeDamage(INT Damage, AController* EventInstigator, FVector HitLocation, FVector Momentum, UClass* DamageType, FTraceHitInfo HitInfo, AActor* DamageCauser)
{
	struct Actor_eventTakeDamage_Parms
	{
		INT Damage;
		AController* EventInstigator;
		FVector HitLocation;
		FVector Momentum;
		UClass* DamageType;
		FTraceHitInfo HitInfo;
		AActor* DamageCauser;
	} Parms;
	Parms.Damage = Damage;
	Parms.EventInstigator = EventInstigator;
	Parms.HitLocation = HitLocation;
	Parms.Momentum = Momentum;
	Parms.DamageType = DamageType;
	Parms.HitInfo = HitInfo;
	Parms.DamageCauser = DamageCauser;
	ProcessEvent(FindFunctionChecked(g_026c54d0), &Parms);
}

struct C_00890c30 {
    int sub_00890c30(float* f);
};

// 0x00864e60: AActor::sub_00864e60 - guard that delegates through a member pointer.
// 0x2c: 4-byte pointer; 0x30: flags byte (bit 2 gates the call).
struct C_00864e60 {
    char pad_0[0x2c];
    C_00890c30* member_2c;   // 0x2c
    char flags_30;           // 0x30

    int sub_00864e60(float* f);
};

// @baa 0x00864e60
int C_00864e60::sub_00864e60(float* f)
{
    if ((this->member_2c != 0) && ((this->flags_30 & 2) != 0)) {
        return this->member_2c->sub_00890c30(f);
    }
    return 0;
}

static void s_caller(C_00864e60& c, float* f) { c.sub_00864e60(f); }

struct C_0087d810 {
    void* Unknown;
    TArray<T_0087d370*> Items;

    UBOOL sub_0087d810(T_0087d370* Item);
};

// @baa 0x0087d810
UBOOL C_0087d810::sub_0087d810(T_0087d370* Item) {
    return Items.RemoveItem(Item) > 0;
}

void sub_0087d820(C_0087d810* Self, T_0087d370* Item) {
    (void)Self->sub_0087d810(Item);
}

// @baa 0x0086b4f0
void AActor::vf_204(int a0, int a1) {  }

// @baa 0x008a66d0
void sub_008a66d0(void)
{
  g_026b5a90 = 0;
  return;
}

// @baa 0x008a6880
void* ANavigationPoint::vf_330(INT a0) { return this; }

// @baa 0x008a6890
undefined4 AActor::vf_334(void)
{
    int param_1 = (int)this;

  if ((*(char *)(param_1 + 0x90) != '\x02') && (*(char *)(param_1 + 0x90) != '\x06')) {
    return 0;
  }
  return 1;
}
