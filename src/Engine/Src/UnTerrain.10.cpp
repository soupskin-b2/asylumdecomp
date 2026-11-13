// UnTerrain.cpp: 11 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Implement.h"

// @baa 0x009827d0
UBOOL ATerrain::IsReadyForFinishDestroy()
{
	// Wait until the rendering thread is done with the terrain's resources.
	UBOOL bResourcesReleased = TRUE;
	if (ReleaseResourcesFence)
	{
		bResourcesReleased = ReleaseResourcesFence->GetNumPendingFences() == 0;
	}
	return Super::IsReadyForFinishDestroy() && bResourcesReleased;
}

/* Kit gaps: FPixelFormatInfo / GPixelFormats (0x025da760, UnRHI) and FString::Printf (as the linker specialised it
 * for these argument types, 0x00766b80) aren't declared. */
struct FPixelFormatInfo
{
	const TCHAR* Name;
	INT BlockSizeX;
	INT BlockSizeY;
	INT BlockSizeZ;
	INT BlockBytes;
	INT NumComponents;
	DWORD PlatformFormat;
	DWORD Flags;
	UBOOL Supported;
};

extern FPixelFormatInfo g_025da760[];
#define GPixelFormats g_025da760
struct FString_ : public FString
{
	static FString Printf(const TCHAR* Fmt, INT A, INT B, const TCHAR* C);
};

// @baa 0x009917d0
FString UTerrainWeightMapTexture::GetDesc()
{
	return FString_::Printf(TEXT("WeightMap: %dx%d [%s]"), SizeX, SizeY, GPixelFormats[Format].Name);
}

// @baa 0x00982010
/* EngineTerrainClasses.h: the fence, created on first use. */
FRenderCommandFence* ATerrain::GetReleaseResourcesFence()
{
    if (!ReleaseResourcesFence)
    {
        ReleaseResourcesFence = new FRenderCommandFence();
#line 352 "e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\engine\\inc\\EngineTerrainClasses.h"
        check(ReleaseResourcesFence);
    }
    return ReleaseResourcesFence;
}

#line 87 "candidate.cpp"

// @baa 0x009827b0
/* Start releasing the terrain's render resources once the actor begins destruction. */
void ATerrain::BeginDestroy()
{
    Super::BeginDestroy();
    FRenderCommandFence* Fence = GetReleaseResourcesFence();
    if (Fence)
    {
        Fence->BeginFence();
    }
}

/* Kit gap: FTerrainInfoData is empty in the kit; UE3's is { BYTE Data; } with TID_Visibility_Off = 1, so
 * GetInfoData is bound returning BYTE* (work/0098ba70.cpp). */
#define TID_Visibility_Off 0x0001
struct FTerrainInfoData_
{
    BYTE Data;
    UBOOL IsVisible() const { return !(Data & TID_Visibility_Off); }
};

struct ATerrain__0098be90 : public ATerrain
{
    UBOOL IsTerrainComponentVisible(INT InBaseX, INT InBaseY, INT InSizeX, INT InSizeY); /* 0x0098be90 */
};

// @baa 0x0098be90
/* UE3's ATerrain::IsTerrainComponentVisible: whether any vertex in the area is visible. */
UBOOL ATerrain__0098be90::IsTerrainComponentVisible(INT InBaseX, INT InBaseY, INT InSizeX, INT InSizeY)
{
    for (INT Y = InBaseY; Y < InBaseY + InSizeY; Y++)
    {
        for (INT X = InBaseX; X < InBaseX + InSizeX; X++)
        {
            BYTE* InfoData = GetInfoData(X, Y);
            if (InfoData && ((FTerrainInfoData_*)InfoData)->IsVisible())
            {
                return TRUE;
            }
        }
    }
    return FALSE;
}

#define TERRAIN_ZSCALE (1.0f / 128.0f)
struct ATerrain__0098bfb0 : public ATerrain
{
    FVector GetLocalVertex(INT X, INT Y) const; /* 0x0098bfb0 */
};

// @baa 0x0098bfb0
/* UE3's ATerrain::GetLocalVertex: a vertex position in terrain space (height recentred on 32768 and scaled). */
FVector ATerrain__0098bfb0::GetLocalVertex(INT X, INT Y) const
{
    return FVector(X, Y, ((FLOAT)Height(X, Y) - 32768.0f) * TERRAIN_ZSCALE);
}

struct ATerrain__0098bf00 : public ATerrain
{
    UBOOL IsTerrainComponentVisible(UTerrainComponent* InComponent); /* 0x0098bf00 */
};

// @baa 0x0098bf00
/* UE3's ATerrain::IsTerrainComponentVisible(UTerrainComponent*): whether any vertex the component covers is
 * visible. */
UBOOL ATerrain__0098bf00::IsTerrainComponentVisible(UTerrainComponent* InComponent)
{
    for (INT Y = InComponent->SectionBaseY; Y < InComponent->SectionBaseY + InComponent->SectionSizeY * MaxTesselationLevel; Y++)
    {
        for (INT X = InComponent->SectionBaseX; X < InComponent->SectionBaseX + InComponent->SectionSizeX * MaxTesselationLevel; X++)
        {
            BYTE* InfoData = GetInfoData(X, Y);
            if (InfoData && ((FTerrainInfoData_*)InfoData)->IsVisible())
            {
                return TRUE;
            }
        }
    }
    return FALSE;
}

/* Kit gap (Array.h, issue #39): this build inlines TArray::operator() where the kit's plain-inline one is
 * called out of line; same body, forced inline. */
template<class T> struct TArrayAt_ : public TArray<T>
{
    using TArray<T>::ArrayNum;
    __forceinline T& At(INT i)
    {
#line 560 BAA_ARRAY_FILE
        check(i>=0 && (i<ArrayNum||(i==0 && ArrayNum==0)));
        return this->GetTypedData()[i];
    }
    __forceinline const T& At(INT i) const
    {
#line 566 BAA_ARRAY_FILE
        check(i>=0 && (i<ArrayNum||(i==0 && ArrayNum==0)));
        return this->GetTypedData()[i];
    }
};

struct ATerrain__0098caf0 : public ATerrain
{
    INT FindSelectedVertexInList(INT X, INT Y, FSelectedTerrainVertex*& OutVertex); /* 0x0098caf0 */
};

// @baa 0x0098caf0
/* The index of the selected vertex at (X, Y), handing back the entry itself; INDEX_NONE when it isn't selected. */
INT ATerrain__0098caf0::FindSelectedVertexInList(INT X, INT Y, FSelectedTerrainVertex*& OutVertex)
{
    for (INT Index = 0; Index < SelectedVertices.Num(); Index++)
    {
        FSelectedTerrainVertex* Vertex = &((TArrayAt_<FSelectedTerrainVertex>&)SelectedVertices).At(Index);
        if (Vertex->X == X && Vertex->Y == Y)
        {
            OutVertex = Vertex;
            return Index;
        }
    }
    return INDEX_NONE;
}

#line 224 "candidate.cpp"

struct ATerrain__0098bb70 : public ATerrain
{
    UBOOL IsTerrainQuadVisible(INT X, INT Y) const; /* 0x0098bb70 */
};

// @baa 0x0098bb70
/* Whether the vertex (quad) at (X, Y) is visible. */
UBOOL ATerrain__0098bb70::IsTerrainQuadVisible(INT X, INT Y) const
{
    return ((const FTerrainInfoData_*)GetInfoData(X, Y))->IsVisible();
}

/* Kit gap: FNativeLightMap's slot 0x8 is declared without arguments; UE3's FLightMap::AddReferencedObjects takes
 * the object array (passed as the kit's INT here). */
struct FLightMap_
{
    virtual void vf000();
    virtual void vf004();
    virtual void AddReferencedObjects(INT ObjectArray);
};

// @baa 0x00986fb0
/* UTerrainComponent slot 0xe8 (kit vf_0e8(INT); UE3's AddReferencedObjects(TArray<UObject*>&)): the light map's
 * objects too. */
void UTerrainComponent::vf_0e8(INT ObjectArray)
{
    Super::vf_0e8(ObjectArray);
    FLightMap_* LightMapPtr = (FLightMap_*)LightMap.Reference.Dummy;
    if (LightMapPtr)
    {
        LightMapPtr->AddReferencedObjects(ObjectArray);
    }
}

/* The project's existing binding for UObject::AddReferencedObject(TArray<UObject*>&, UObject*) (0x005ef6f0, a
 * varargs placeholder; the kit doesn't declare it). */
INT sub_005ef6f0(...);
/* Kit gap: FTerrainWeightedMaterial is empty in the kit (0x38 bytes); only the two object references are named. */
struct FTerrainWeightedMaterial_
{
    BYTE Pad0[0x18];
    UObject* Material; /* 0x18 */
    BYTE Pad1[0x10];
    UObject* Object2C; /* 0x2c */
    BYTE Pad2[0x8];
};

// @baa 0x0098bc30
/* ATerrain slot 0xe8 (kit vf_0e8(INT); UE3's AddReferencedObjects(TArray<UObject*>&)): the weighted materials'
 * objects too. */
void ATerrain::vf_0e8(INT ObjectArray)
{
    Super::vf_0e8(ObjectArray);
    for (INT i = 0; i < WeightedMaterials.Num(); i++)
    {
        FTerrainWeightedMaterial_& WeightedMaterial = ((TArrayAt_<FTerrainWeightedMaterial_>&)WeightedMaterials).At(i);
        sub_005ef6f0(ObjectArray, WeightedMaterial.Material);
        sub_005ef6f0(ObjectArray, WeightedMaterial.Object2C);
    }
}
