// LensFlare.cpp: 21 functions
// Placed here by: file 4, callers 3.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x00bd14c0
IMPLEMENT_CLASS_AT(ULensFlareComponent, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\LensFlare.cpp", 11);

// @baa 0x00bd2190
// @baa 0x00bd4c40
IMPLEMENT_CLASS_AT(ALensFlareSource, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\LensFlare.cpp", 12);

// @baa 0x00bd6df0
// @baa 0x00bd84c0
IMPLEMENT_CLASS_AT(ULensFlare, "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\LensFlare.cpp", 10);

// @baa 0x00bd8be0
extern UBOOL g_026c0b80;
extern INT g_026c0b3c;
struct FLensFlareSceneProxy {
    FLensFlareSceneProxy(ULensFlareComponent* Component); /* 0x00bdad00 */
    BYTE _data[0x180];
};

struct ULensFlareComponent_ : public ULensFlareComponent {
    FLensFlareSceneProxy* sub_00bdb270();
};

// @baa 0x00bdb270
FLensFlareSceneProxy* ULensFlareComponent_::sub_00bdb270()
{
    if (Template)
    {
        DepthPriorityGroup = Template->ReflectionsDPG;
        OuterCone = Template->OuterCone;
        InnerCone = Template->InnerCone;
        ConeFudgeFactor = Template->ConeFudgeFactor;
        Radius = Template->Radius;
        if (bAutoActivate)
        {
            bIsActive = 1;
        }
    }

    if (g_026c0b80 && DetailMode <= g_026c0b3c)
    {
        FLensFlareSceneProxy* LFSceneProxy = new FLensFlareSceneProxy(this);
        if (!LFSceneProxy)
            appFailAssert("LFSceneProxy", "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\LensFlare.cpp", 953, TEXT(""));
        return LFSceneProxy;
    }
    return NULL;
}

// @baa 0x00bac8d0

// @baa 0x00bac9e0
int ULensFlare::vf_000(void) { return 1; }

// @baa 0x00bac9f0
bool ULensFlare::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00baca30

// @baa 0x00bacb40
int ULensFlareComponent::vf_000(void) { return 1; }

// @baa 0x00bacb50
bool ULensFlareComponent::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00bacb90

// @baa 0x00bacca0
int ALensFlareSource::vf_000(void) { return 1; }

// @baa 0x00baccb0
bool ALensFlareSource::vf_004()
{
    return GetClass()->GetSuperClass() != Super::StaticClass();
}

// @baa 0x00baceb0
void ULensFlareComponent::vf_044(UINT a0) {  }

struct C_00bacec0 { void sub_00765d00(); void sub_00bacec0(int); };

// @baa 0x00bacec0
void C_00bacec0::sub_00bacec0(int) { sub_00765d00(); }

extern void* g_026b2234;
struct FFlareItem
{
    BYTE Pad0[0xc];
    BYTE Flags;
    BYTE Pad1[0xf];
    TArray<void*> Items;
    BYTE Pad2[0x118];
};

struct FFlareLayout
{
    BYTE Pad0[0x3c];
    BYTE Active;
    BYTE Pad1[0xf];
    TArray<void*> Arr1;
    BYTE Pad2[0x120];
    TArray<FFlareItem> Arr2;
};

struct CRes;
struct CVTableObj
{
    virtual void* v00();
    virtual void* v01();
    virtual void* v02();
    virtual void* v03();
    virtual void* v04();
    virtual void* v05();
    virtual void* v06();
    virtual void* v07();
    virtual void* v08();
    virtual void* v09();
    virtual void* v10();
    virtual void* v11();
    virtual void* v12();
    virtual void* v13();
    virtual void* v14();
    virtual void* v15();
    virtual void* v16();
    virtual void* v17();
    virtual void* v18();
    virtual void* v19();
    virtual void* v20();
    virtual void* v21();
    virtual void* v22();
    virtual void* v23();
    virtual void* v24();
    virtual void* v25();
    virtual void* v26();
    virtual void* v27();
    virtual void* v28();
    virtual void* v29();
    virtual void* v30();
    virtual void* v31();
    virtual void* v32();
    virtual void* v33();
    virtual void* v34();
    virtual void* v35();
    virtual void* v36();
    virtual void* v37();
    virtual void* v38();
    virtual void* v39();
    virtual void* v40();
    virtual void* v41();
    virtual void* v42();
    virtual void* v43();
    virtual void* v44();
    virtual void* v45();
    virtual void* v46();
    virtual void* v47();
    virtual void* v48();
    virtual void* v49();
    virtual void* v50();
    virtual void* v51();
    virtual void* v52();
    virtual void* v53();
    virtual void* v54();
    virtual void* v55();
    virtual void* v56();
    virtual void* v57();
    virtual void* v58();
    virtual void* v59();
    virtual void* v60();
    virtual void* v61();
    virtual void* v62();
    virtual void* v63();
    virtual void* v64();
    virtual void* v65();
    virtual void* v66();
    virtual void* v67();
    virtual void* v68();
    virtual void* v69();
    virtual void* v70();
    virtual void* v71();
    virtual void* v72();
    virtual void* v73();
    virtual void* v74();
    virtual void* v75();
    virtual CRes* v76(void*);
};

struct CRes
{
    unsigned int sub_006ae0c0();
};

// @baa 0x00bbb810
int ULensFlareComponent::vf_258()
{
    if (Template == 0)
        return 0;
    int Result = 0;
    if ((((FFlareLayout*)Template)->Active & 1) != 0)
    {
        for (int i = 0; i < ((FFlareLayout*)Template)->Arr1.Num(); i++)
        {
            void* pObj = ((FFlareLayout*)Template)->Arr1(i);
            if (pObj != 0)
            {
                CRes* r = ((CVTableObj*)pObj)->v76(g_026b2234);
                if (r != 0 && r->sub_006ae0c0() == 1)
                {
                    Result = 1;
                    goto Done;
                }
            }
        }
    }
    for (int i = 0; i < ((FFlareLayout*)Template)->Arr2.Num(); i++)
    {
        const FFlareItem& Elem = ((FFlareLayout*)Template)->Arr2(i);
        if ((Elem.Flags & 1) != 0)
        {
            for (int j = 0; j < Elem.Items.Num(); j++)
            {
                void* pObj = Elem.Items(j);
                if (pObj != 0)
                {
                    CRes* r = ((CVTableObj*)pObj)->v76(g_026b2234);
                    if (r != 0 && r->sub_006ae0c0() == 1)
                    {
                        Result = 1;
                        break;
                    }
                }
            }
        }
    }
Done:
    return Result;
}

struct CRes_00bbbbb0;
struct CVTableObj_00bbbbb0
{
    virtual void* v00();
    virtual void* v01();
    virtual void* v02();
    virtual void* v03();
    virtual void* v04();
    virtual void* v05();
    virtual void* v06();
    virtual void* v07();
    virtual void* v08();
    virtual void* v09();
    virtual void* v10();
    virtual void* v11();
    virtual void* v12();
    virtual void* v13();
    virtual void* v14();
    virtual void* v15();
    virtual void* v16();
    virtual void* v17();
    virtual void* v18();
    virtual void* v19();
    virtual void* v20();
    virtual void* v21();
    virtual void* v22();
    virtual void* v23();
    virtual void* v24();
    virtual void* v25();
    virtual void* v26();
    virtual void* v27();
    virtual void* v28();
    virtual void* v29();
    virtual void* v30();
    virtual void* v31();
    virtual void* v32();
    virtual void* v33();
    virtual void* v34();
    virtual void* v35();
    virtual void* v36();
    virtual void* v37();
    virtual void* v38();
    virtual void* v39();
    virtual void* v40();
    virtual void* v41();
    virtual void* v42();
    virtual void* v43();
    virtual void* v44();
    virtual void* v45();
    virtual void* v46();
    virtual void* v47();
    virtual void* v48();
    virtual void* v49();
    virtual void* v50();
    virtual void* v51();
    virtual void* v52();
    virtual void* v53();
    virtual void* v54();
    virtual void* v55();
    virtual void* v56();
    virtual void* v57();
    virtual void* v58();
    virtual void* v59();
    virtual void* v60();
    virtual void* v61();
    virtual void* v62();
    virtual void* v63();
    virtual void* v64();
    virtual void* v65();
    virtual void* v66();
    virtual void* v67();
    virtual void* v68();
    virtual void* v69();
    virtual void* v70();
    virtual void* v71();
    virtual void* v72();
    virtual void* v73();
    virtual void* v74();
    virtual void* v75();
    virtual CRes_00bbbbb0* v76(void*);
};

struct CRes_00bbbbb0
{
    unsigned int sub_006ae0f0();
};

// @baa 0x00bbbbb0
int ULensFlareComponent::vf_260()
{
    if (Template == 0)
        return 0;
    int Result = 0;
    if ((((FFlareLayout*)Template)->Active & 1) != 0)
    {
        for (int i = 0; i < ((FFlareLayout*)Template)->Arr1.Num(); i++)
        {
            void* pObj = ((FFlareLayout*)Template)->Arr1(i);
            if (pObj != 0)
            {
                CRes_00bbbbb0* r = ((CVTableObj_00bbbbb0*)pObj)->v76(g_026b2234);
                if (r != 0 && r->sub_006ae0f0() == 1)
                {
                    Result = 1;
                    goto Done;
                }
            }
        }
    }
    for (int i = 0; i < ((FFlareLayout*)Template)->Arr2.Num(); i++)
    {
        const FFlareItem& Elem = ((FFlareLayout*)Template)->Arr2(i);
        if ((Elem.Flags & 1) != 0)
        {
            for (int j = 0; j < Elem.Items.Num(); j++)
            {
                void* pObj = Elem.Items(j);
                if (pObj != 0)
                {
                    CRes_00bbbbb0* r = ((CVTableObj_00bbbbb0*)pObj)->v76(g_026b2234);
                    if (r != 0 && r->sub_006ae0f0() == 1)
                    {
                        Result = 1;
                        break;
                    }
                }
            }
        }
    }
Done:
    return Result;
}

/* Kit gap: UActorComponent::BeginDeferredReattach (0x00765d00) isn't declared. */
struct UActorComponent_ : public UActorComponent
{
    void BeginDeferredReattach(); /* 0x00765d00 */
};

// @baa 0x00baccf0
/* A new source colour needs the flare's render state rebuilt. */
void ULensFlareComponent::SetSourceColor(FLinearColor InSourceColor)
{
    if (SourceColor.R != InSourceColor.R || SourceColor.G != InSourceColor.G || SourceColor.B != InSourceColor.B || SourceColor.A != InSourceColor.A)
    {
        SourceColor = InSourceColor;
        ((UActorComponent_*)this)->BeginDeferredReattach();
    }
}
