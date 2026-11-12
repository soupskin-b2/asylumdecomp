// UnSkeletalMeshMerge.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#define BAA_OUTLINE_ALLOC
#include "ue3/Classes.h"
#include "ue3/Array.h"
#include "ue3/AppMath.h"

/* VJointPos (UnSkeletalMesh.h): a bone's reference pose. */
struct VJointPos
{
    FQuat Orientation;
    FVector Position;
    FLOAT Length;
    FLOAT XSize;
    FLOAT YSize;
    FLOAT ZSize;
};

/* FMeshBone as this build has it (0x48 bytes); the kit's FMeshBone has ParentIndex at the wrong offset. */
struct FMeshBone_
{
    FName Name;
    DWORD Flags;
    VJointPos BonePos;
    INT ParentIndex;      /* 0x38 */
    INT NumChildren;
    INT Depth;
    FColor BoneColor;
};

/* FSkelMeshMergeSectionMapping (UnSkeletalMeshMerge.h): forced section IDs for one source mesh */
struct FSkelMeshMergeSectionMapping
{
    TArray<INT> SectionIDs;
};

/* UnObjBas.h CastChecked<T>; out of line in this file (0x00d4c680 for USkeletalMeshSocket) */
template<class T> T* CastChecked(UObject* Src);
/* UObject::StaticDuplicateObject (UnObj.cpp, 0x005eac10) isn't declared in the kit */
struct UObject_ : public UObject
{
    static UObject* StaticDuplicateObject(UObject* SourceObject, UObject* RootObject, UObject* DestOuter, const TCHAR* DestName, QWORD FlagMask = ~0, UClass* DestClass = NULL, UBOOL bMigrateArchetypes = FALSE);
};

/* FBoxSphereBounds + (UnMath.h, out of line here 0x00655c60): the bounds of both */
struct FBoxSphereBounds_ : public FBoxSphereBounds
{
    FBoxSphereBounds operator+(const FBoxSphereBounds& Other) const;
};

/* the USkeletalMesh array members with their out-of-line operations */
struct FRefSkeletonArray : public TArray<FMeshBone_>
{
    FRefSkeletonArray& operator=(const TArray<FMeshBone_>& Other); /* 0x00d4cef0 */
};

struct FMatrixArray : public TArray<FMatrix>
{
    FMatrixArray& operator=(const TArray<FMatrix>& Other);         /* 0x007bec40 */
};

struct FSocketArray : public TArray<USkeletalMeshSocket*>
{
    INT Add(INT Count);                                             /* 0x0094aa50 */
    INT AddUniqueItem(USkeletalMeshSocket* const& Item);            /* 0x00d48310 */

    INT AddZeroed(INT Count)
    {
        const INT Index = Add(Count);
        appMemzero((BYTE*)GetData() + Index * sizeof(USkeletalMeshSocket*), Count * sizeof(USkeletalMeshSocket*));
        return Index;
    }
};

/* USkeletalMesh members used here that Classes.h doesn't declare */

/* FSkeletalMeshMerge (UnSkeletalMeshMerge.h): merges several skeletal meshes into MergeMesh. Not in the kit. */
class FSkeletalMeshMerge
{
public:
    UBOOL FinalizeMesh();

private:
    struct FMergeMeshInfo
    {
        TArray<INT> SrcToDestRefSkeletonMap;
    };

    USkeletalMesh* MergeMesh;
    const TArray<USkeletalMesh*>& SrcMeshList;
    const TArray<FSkelMeshMergeSectionMapping>& ForceSectionMapping;
    TArray<FMergeMeshInfo> SrcMeshInfo;
    TArray<FMeshBone_> NewRefSkeleton;
    INT StripTopLODs;
    TArray<INT> MergeIndices;
};

// @baa 0x00d52580
/* (name assumed) give the merged mesh the merged skeleton and the source meshes' settings, bounds and sockets */
UBOOL FSkeletalMeshMerge::FinalizeMesh()
{
    UBOOL bNeedsInit = TRUE;

    (FRefSkeletonArray&)MergeMesh->RefSkeleton = NewRefSkeleton;
    MergeMesh->InitNameIndexMap();
    MergeMesh->SkelMirrorTable.Empty();

    for (INT MeshIdx = 0; MeshIdx < SrcMeshList.Num(); MeshIdx++)
    {
        USkeletalMesh* SrcMesh = SrcMeshList(MeshIdx);
        if (SrcMesh)
        {
            if (bNeedsInit)
            {
                // initialize the merged mesh with the first source mesh used
                (FMatrixArray&)MergeMesh->RefBasesInvMatrix = SrcMesh->RefBasesInvMatrix;
                MergeMesh->Bounds = SrcMesh->Bounds;
                MergeMesh->Origin = SrcMesh->Origin;
                MergeMesh->RotOrigin = SrcMesh->RotOrigin;
                MergeMesh->SkeletalDepth = SrcMesh->SkeletalDepth;
                MergeMesh->SkelMirrorAxis = SrcMesh->SkelMirrorAxis;
                MergeMesh->SkelMirrorFlipAxis = SrcMesh->SkelMirrorFlipAxis;

                ((FSocketArray&)MergeMesh->Sockets).AddZeroed(SrcMesh->Sockets.Num());
                for (INT i = 0; i < SrcMesh->Sockets.Num(); i++)
                {
                    USkeletalMeshSocket* NewSocket = CastChecked<USkeletalMeshSocket>(UObject_::StaticDuplicateObject(SrcMesh->Sockets(i), SrcMesh->Sockets(i), MergeMesh, TEXT("None")));
                    MergeMesh->Sockets(i) = NewSocket;
                }

                MergeMesh->SkeletalDepth = SrcMesh->SkeletalDepth;
                bNeedsInit = FALSE;
            }
            else
            {
                for (INT i = 0; i < SrcMesh->Sockets.Num(); i++)
                {
                    USkeletalMeshSocket* NewSocket = CastChecked<USkeletalMeshSocket>(UObject_::StaticDuplicateObject(SrcMesh->Sockets(i), SrcMesh->Sockets(i), MergeMesh, TEXT("None")));
                    ((FSocketArray&)MergeMesh->Sockets).AddUniqueItem(NewSocket);
                }

                MergeMesh->Bounds = ((FBoxSphereBounds_&)MergeMesh->Bounds) + SrcMesh->Bounds;
                MergeMesh->SkeletalDepth = Max(MergeMesh->SkeletalDepth, SrcMesh->SkeletalDepth);
            }
        }
    }

    // rebuild the inverse reference pose matrices
    MergeMesh->RefBasesInvMatrix.Empty();
    MergeMesh->CalculateInvRefMatrices();

    return TRUE;
}
