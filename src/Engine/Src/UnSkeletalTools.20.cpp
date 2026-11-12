// UnSkeletalTools.cpp: 3 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

inline FArchive& operator<<(FArchive& Ar, INT& I) { Ar.ByteOrderSerialize(&I, sizeof(I)); return Ar; }

inline FArchive& operator<<(FArchive& Ar, FLOAT& F) { Ar.ByteOrderSerialize(&F, sizeof(F)); return Ar; }

inline FArchive& operator<<(FArchive& Ar, FVector& V) { return Ar << V.X << V.Y << V.Z; }

inline FArchive& operator<<(FArchive& Ar, FRotator& R) { return Ar << R.Pitch << R.Yaw << R.Roll; }

/* the licensee package versions this reads (UnObjVer.h; names assumed) */
enum
{
    VER_AA_FORCE_SHADOW_VOLUMES = 9,
    VER_AA_PER_BONE_BOUNDS      = 15,
};
/* engine flag checked before re-flagging a loaded mesh (0x0266e808; meaning unknown) */
extern UBOOL g_0266e808;
/* FArchive::LicenseeVer (UnArc.h); the kit's FArchive has the field but no accessor */
class FArchive_ : public FArchive
{
public:
    INT LicenseeVer() const { return ArLicenseeVer; }
};

/* TArray::CountBytes (Array.h) */
template<class T> inline void CountArrayBytes(FArchive& Ar, const TArray<T>& A)
{
    Ar.CountBytes(A.Num() * sizeof(T), A.ArrayMax * sizeof(T));
}

FArchive& operator<<(FArchive& Ar, FBoxSphereBounds& Bounds);
                 /* 0x0079ef90 */
FArchive& operator<<(FArchive& Ar, TArray<FBoneBounds>& A);
                   /* 0x00963eb0 */
FArchive& operator<<(FArchive& Ar, TArray<UMaterialInterface*>& A);
           /* 0x00963790 */
FArchive& operator<<(FArchive& Ar, TArray<FMeshBone>& A);
                     /* 0x00963a80 */
FArchive& operator<<(FArchive& Ar, TArray<FMatrix>& A);
                       /* 0x00963910 */
FArchive& operator<<(FArchive& Ar, TArray<USkeletalMeshSocket*>& A);
          /* 0x00964030 */
FArchive& operator<<(FArchive& Ar, TArray<FSkeletalMeshLODInfo>& A);
          /* 0x00979c20 */
FArchive& operator<<(FArchive& Ar, TArray<FNativeElem_00979d40>& A);
          /* 0x0097d180, PerPolyBoneKDOPs */
/* TMap<FName,INT> (UnMap.h), USkeletalMesh::NameIndexMap's native type; serialized out of line (0x005b6ed0) */
struct FNameIndexMap : public FMap_Mirror
{
    friend FArchive& operator<<(FArchive& Ar, FNameIndexMap& Map);
};

class FStaticLODModel;
/* TIndirectArray<FStaticLODModel>, USkeletalMesh::LODModels' native type */
class FStaticLODModelArray : public TIndirectArray<FStaticLODModel>
{
public:
    void Serialize(FArchive& Ar, UObject* Owner); /* 0x009810d0 */
};

/* USkeletalMesh members Classes.h doesn't declare */
struct USkeletalMesh_ : public USkeletalMesh
{
    void Serialize(FArchive& Ar);
    void CalcPerBoneBounds(); /* 0x0095bcd0 (name assumed) */
};

// @baa 0x00981280
void USkeletalMesh_::Serialize(FArchive& Ar)
{
    UObject::Serialize(Ar);

    Ar << Bounds;
    if (((FArchive_&)Ar).LicenseeVer() >= VER_AA_PER_BONE_BOUNDS)
    {
        Ar << ConservativeBounds;
        Ar << PerBoneBounds;
    }
    Ar << Materials;
    Ar << Origin << RotOrigin;
    Ar << RefSkeleton;
    Ar << SkeletalDepth;
    ((FStaticLODModelArray&)LODModels).Serialize(Ar, this);

    // memory counting only: the rest is rebuilt on load
    if (!Ar.IsLoading() && !Ar.IsSaving())
    {
        Ar << RefBasesInvMatrix;
        CountArrayBytes(Ar, SkelMirrorTable);
        Ar << Sockets;
        Ar << LODInfo;
    }

    Ar << (FNameIndexMap&)NameIndexMap;
    Ar << PerPolyBoneKDOPs;

    if (((FArchive_&)Ar).LicenseeVer() >= VER_AA_FORCE_SHADOW_VOLUMES)
    {
        UBOOL bForceShadowVolumes = ForceShadowVolumes;
        Ar << bForceShadowVolumes;
        ForceShadowVolumes = bForceShadowVolumes;
    }

    if (Ar.IsLoading() && ((FArchive_&)Ar).LicenseeVer() < VER_AA_PER_BONE_BOUNDS)
    {
        CalcPerBoneBounds();
    }
    if (Ar.IsLoading() && g_0266e808)
    {
        StripData(UE3::PLATFORM_Console);
    }
}

/* Kit gaps: UObject::HasAnyFlags/IsTemplate and the RF_ flags (UnObjBas.h); ObjectFlags is an FQWord here. */
#define RF_ClassDefaultObject ((QWORD)0x0000000000000200)
#define RF_ArchetypeObject ((QWORD)0x0000000000000400)
struct UObject_ : public UObject
{
	FORCEINLINE UBOOL HasAnyFlags(QWORD Flags) const { return (*(const QWORD*)&ObjectFlags & Flags) != 0; }
	FORCEINLINE UBOOL IsTemplate(QWORD TemplateTypes = (RF_ArchetypeObject | RF_ClassDefaultObject)) const
	{
		for (const UObject* TestOuter = this; TestOuter; TestOuter = TestOuter->Outer)
		{
			if (((const UObject_*)TestOuter)->HasAnyFlags(TemplateTypes))
			{
				return TRUE;
			}
		}
		return FALSE;
	}
};

/* Kit gap: the mesh's resource setup (0x0097baf0, likely UE3's InitResources) isn't declared. */
struct USkeletalMesh__0097dae0 : public USkeletalMesh
{
	void sub_0097baf0(); /* 0x0097baf0 */
};

/* A global flag (its name isn't known) that suppresses the setup, e.g. while running a commandlet. */
extern INT g_02676094;
// @baa 0x0097dae0
/* Slot 0x14 (unnamed in the kit). */
void USkeletalMesh::vf_014()
{
	if (!((UObject_*)this)->IsTemplate() && !g_02676094)
	{
		((USkeletalMesh__0097dae0*)this)->sub_0097baf0();
	}
}

/* Kit gaps: ReleaseResourcesFence is an FRenderCommandFence (declared INT here), and FRenderCommandFence::
 * GetNumPendingFences (0x0071f7e0) isn't declared. */
struct FRenderCommandFence_ : public FRenderCommandFence_Mirror
{
	UINT GetNumPendingFences() const;
};

// @baa 0x009449a0
UBOOL USkeletalMesh::IsReadyForFinishDestroy()
{
	return ((const FRenderCommandFence_&)ReleaseResourcesFence).GetNumPendingFences() == 0;
}
