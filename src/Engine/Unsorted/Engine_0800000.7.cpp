// Engine_0800000.cpp: 5 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

// 0x18/0x1c subobject updated from an int and a float, callee pops 8 bytes (ret 8).
struct F008026b0
{
    int pad[6];  // 0x00 - 0x17
    int Value;   // 0x18
    float F;     // 0x1c

    void sub_008026b0(int InValue, float InF);
};

// @baa 0x008026b0
void F008026b0::sub_008026b0(int InValue, float InF)
{
    Value = InValue * 2;
    F = InF;
}

// sub_008088e0 is a method on the subobject at offset 0x0c of the outer struct:
// this is adjusted by `add ecx, 0xc` before the thiscall.
struct F0080b0b0Sub
{
    int pad[4]; // 0x00 - 0x0f
    int Value;  // 0x10 (this + 0x1c)

    void sub_008088e0(int InValue);
};

struct F0080b0b0
{
    int pad[3]; // 0x00 - 0x0b
    F0080b0b0Sub S; // 0x0c

    void sub_0080b0b0(int Offset, int Scale);
};

// @baa 0x0080b0b0
void F0080b0b0::sub_0080b0b0(int Offset, int Scale)
{
    S.sub_008088e0(S.Value * Scale + Offset);
}

struct APlayerController_ : public APlayerController
{
    INT sub_00803a80(void* Other, INT B, INT C);
};

// @baa 0x00803a80
INT APlayerController_::sub_00803a80(void* Other, INT, INT)
{
    return this == Other;
}

struct FFlagsWord {
    DWORD x;
    DWORD y;
    DWORD z;
};

struct FFlagsWord_ : public FFlagsWord {
    FFlagsWord_& sub_00803c20(const FFlagsWord& Other);
};

// @baa 0x00803c20
FFlagsWord_& FFlagsWord_::sub_00803c20(const FFlagsWord& Other)
{
    x |= Other.x;
    y |= Other.y;
    z |= Other.z;
    return *this;
}

FFlagsWord_ flags_or_helper(FFlagsWord_& Self, const FFlagsWord& Other)
{
    return Self.sub_00803c20(Other);
}

struct IF_00809550
{
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
    virtual void vf_0238(AActor* Other);
};

extern IF_00809550* g_026b0d94;
struct F_00809550
{
    AActor* Base;
    AActor* Actor;
    void sub_00809550();
};

// @baa 0x00809550
void F_00809550::sub_00809550()
{
    if (Actor)
    {
        g_026b0d94->vf_0238(Actor);
    }
}
