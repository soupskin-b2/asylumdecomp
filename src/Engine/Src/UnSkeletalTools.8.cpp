// UnSkeletalTools.cpp: 6 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

/* UE3's FArchive operators for plain values (UnArc.h). */
inline FArchive& operator<<(FArchive& Ar, WORD& W) { Ar.ByteOrderSerialize(&W, sizeof(W)); return Ar; }

inline FArchive& operator<<(FArchive& Ar, DWORD& D) { Ar.ByteOrderSerialize(&D, sizeof(D)); return Ar; }

/* FSkelMeshSection (UnSkeletalMesh.h): a run of triangles of one LOD drawn with one material. Not in the kit. */
struct FSkelMeshSection
{
    WORD MaterialIndex;
    WORD ChunkIndex;
    DWORD BaseIndex;
    WORD NumTriangles;
};

// @baa 0x00943bb0
FArchive& operator<<(FArchive& Ar, FSkelMeshSection& S)
{
    Ar << S.MaterialIndex;
    Ar << S.ChunkIndex;
    Ar << S.BaseIndex;
    Ar << S.NumTriangles;
    return Ar;
}

/* GetTypeHash(FName) (UnName.h); takes the name by value, which sets the load order */
inline DWORD GetTypeHash(const FName N) { return N.Index + N.Number * 23; }

typedef INT PTRINT;

 /* UnTypes.h: a pointer-sized signed int (Win32); not in the kit */
/* IfAThenAElseB (UnTemplate.h): A if it's non-NULL, else B, without a branch */
template<typename ReferencedType>
FORCEINLINE ReferencedType* IfAThenAElseB(ReferencedType* A, ReferencedType* B)
{
    const PTRINT IntA = reinterpret_cast<PTRINT>(A);
    const PTRINT IntB = reinterpret_cast<PTRINT>(B);
    const PTRINT MaskB = -(!IntA);
    return reinterpret_cast<ReferencedType*>(IntA | (MaskB & IntB));
}

/* FSetElementId (UnSet.h): index of an element in a TSet, INDEX_NONE if none. */
class FSetElementId
{
public:
    FSetElementId() : Index(INDEX_NONE) {}
    explicit FSetElementId(INT InIndex) : Index(InIndex) {}
    operator INT() const { return Index; }
private:
    INT Index;
};

/* TSet<TMap<FName,INT>::FPair> (UnSet.h) as this build lays it out; no TSet/TMap in the kit. Elements is a
 * TSparseArray (data, then its allocation bit array and free list); Hash is a TInlineAllocator<1> of
 * FSetElementIds, HashSize a power of two. The value type is assumed to be INT (the caller copies a
 * 12-byte pair). */
struct FNameIntPairSet
{
    struct FPair
    {
        FName Key;
        INT Value;
    };
    struct FElement
    {
        FPair Value;
        mutable FSetElementId HashNextId;
        mutable INT HashIndex;

        FElement(const FPair& InValue) : Value(InValue) {}
    };

    /* TInlineAllocator<1>::ForElementType<FSetElementId> (ContainerAllocationPolicies.h) */
    struct FHashAllocation
    {
        FSetElementId InlineData[1];
        FSetElementId* SecondaryData; /* FHeapAllocator's Data, NULL while the inline element is used */

        FSetElementId* GetInlineElements() const { return (FSetElementId*)InlineData; }
        FSetElementId* GetAllocation() const { return IfAThenAElseB<FSetElementId>(SecondaryData, GetInlineElements()); }
    };

    /* TSparseArray<FElement> (UnSparseArray.h): its element array, the allocation bit array and the free list */
    FElement* ElementData;
    INT ElementArrayNum;
    INT ElementArrayMax;
    BYTE AllocationFlags[0x1c]; /* TBitArray with its inline allocation; not used here */
    INT FirstFreeIndex;
    INT NumFreeIndices;

    INT NumElements() const { return ElementArrayNum - NumFreeIndices; }
    FHashAllocation Hash;
    INT HashSize;

    FSetElementId& GetTypedHash(INT HashIndex) const
    {
        return ((FSetElementId*)Hash.GetAllocation())[HashIndex & (HashSize - 1)];
    }

    /* TSparseArray::Add's result (UnSparseArray.h) */
    struct FSparseArrayAllocationInfo
    {
        INT Index;
        void* Pointer;
    };

    void HashElement(FSetElementId ElementId, const FElement& Element) const; /* 0x00d4c2d0 */
    FSetElementId FindId(const FName Key) const;                              /* 0x009591d0 */
    FSparseArrayAllocationInfo AddElement();                                  /* TSparseArray::Add, 0x00d53c30 */
    UBOOL ConditionalRehash(INT NumHashedElements, UBOOL bAllowShrinking = FALSE); /* 0x00d56870 */
    FSetElementId Add(const FPair& InElement, UBOOL* bIsAlreadyInSetPtr = NULL);
};

/* placement new (UnTemplate.h) */
inline void* operator new(size_t, void* Mem) { return Mem; }

inline void operator delete(void*, void*) {}

inline void* operator new(size_t Size, const FNameIntPairSet::FSparseArrayAllocationInfo& Allocation) { return Allocation.Pointer; }

/* Move (UnTemplate.h): destruct A, then copy-construct it from B (B is ConstInitType, by value here) */
template<typename T> inline void Move(T& A, T B)
{
    A.~T();
    new(&A) T(B);
}

// @baa 0x00d580c0
/* add an element, or replace the one with the same key */
FSetElementId FNameIntPairSet::Add(const FPair& InElement, UBOOL* bIsAlreadyInSetPtr)
{
    FSetElementId ElementId;
    ElementId = FindId(InElement.Key);
    if (bIsAlreadyInSetPtr)
    {
        *bIsAlreadyInSetPtr = ElementId != INDEX_NONE;
    }

    if (ElementId == INDEX_NONE)
    {
        // create a new element
        FSparseArrayAllocationInfo ElementAllocation = AddElement();
        ElementId = FSetElementId(ElementAllocation.Index);
        FElement& Element = *new(ElementAllocation) FElement(InElement);

        // the rehash adds the new element to the hash if it ran
        if (!ConditionalRehash(NumElements()))
        {
            HashElement(ElementId, Element);
        }
    }
    else
    {
        // replace the existing element (Move: destruct, then copy-construct in place)
        Move<FPair>(ElementData[ElementId].Value, InElement);
    }
    return ElementId;
}

/* FString::Printf (0x005488a0) isn't declared in the kit. */
struct FString_ : public FString
{
    static FString Printf(const TCHAR* Fmt, ...);
};

/* FStaticLODModel (UnSkeletalMesh.h): only GetTotalFaces (0x00951780) is used here. */
struct FStaticLODModel
{
    INT GetTotalFaces() const;
};

/* slot 0x0bc (vf_0bc) is UObject::GetDetailedDescription(INT InIndex), returning FString */
struct USkeletalMesh_ : public USkeletalMesh
{
    FString GetDetailedDescription(INT InIndex);
};

// @baa 0x00d4ffe0
/* the lines under the mesh's thumbnail in the browser */
FString USkeletalMesh_::GetDetailedDescription(INT InIndex)
{
    FString Description = TEXT("");
    switch (InIndex)
    {
    case 0:
        Description = FString_::Printf(TEXT("%d Triangles"), ((TIndirectArray<FStaticLODModel>&)LODModels)(0).GetTotalFaces());
        break;
    case 1:
        Description = FString_::Printf(TEXT("%d Bones"), RefSkeleton.Num());
        break;
    }
    return Description;
}

/* Kit gap (Array.h, issue #39): this build inlines TArray::operator() where the kit's plain-inline one is
 * called out of line; same body, forced inline. */
template<class T> struct TArrayAt_ : public TArray<T>
{
    __forceinline T& At(INT i)
    {
#line 560 BAA_ARRAY_FILE
        check(i>=0 && (i<this->ArrayNum||(i==0 && this->ArrayNum==0)));
        return this->GetTypedData()[i];
    }
    __forceinline const T& At(INT i) const
    {
#line 566 BAA_ARRAY_FILE
        check(i>=0 && (i<this->ArrayNum||(i==0 && this->ArrayNum==0)));
        return this->GetTypedData()[i];
    }
};

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

struct USkeletalMesh__00d49ed0 : public USkeletalMesh
{
    UBOOL BoneIsChildOf(INT ChildBoneIndex, INT ParentBoneIndex) const;
};

// @baa 0x00d49ed0
/* whether ParentBoneIndex is an ancestor of ChildBoneIndex */
UBOOL USkeletalMesh__00d49ed0::BoneIsChildOf(INT ChildBoneIndex, INT ParentBoneIndex) const
{
    // parents always come before their children in the reference skeleton
    if (ChildBoneIndex <= ParentBoneIndex)
    {
        return FALSE;
    }

    INT BoneIndex = ((const TArrayAt_<FMeshBone_>&)RefSkeleton).At(ChildBoneIndex).ParentIndex;
    while (TRUE)
    {
        if (BoneIndex == ParentBoneIndex)
        {
            return TRUE;
        }
        if (BoneIndex == 0)
        {
            return FALSE;
        }
        BoneIndex = ((const TArrayAt_<FMeshBone_>&)RefSkeleton).At(BoneIndex).ParentIndex;
    }
}

#line 271 "candidate.cpp"

inline UBOOL operator==(const FName& A, EName B) { return A.Index == B && A.Number == 0; }

inline UBOOL operator==(const FName& A, const FName& B) { return A.Index == B.Index && A.Number == B.Number; }

/* USkeletalMesh::FindSocket isn't declared in Classes.h */
struct USkeletalMesh__00951be0 : public USkeletalMesh
{
    USkeletalMeshSocket* FindSocket(FName InSocketName);
};

// @baa 0x00951be0
/* the socket with the given name, NULL if there is none */
USkeletalMeshSocket* USkeletalMesh__00951be0::FindSocket(FName InSocketName)
{
    if (InSocketName == NAME_None)
    {
        return NULL;
    }

    for (INT i = 0; i < Sockets.Num(); i++)
    {
        USkeletalMeshSocket* Socket = Sockets(i);
        if (Socket && Socket->SocketName == InSocketName)
        {
            return Socket;
        }
    }
    return NULL;
}

inline UBOOL operator!=(const FName& A, EName B) { return A.Index != B || A.Number != 0; }

/* FSetElementId_0097eb90 (UnSet.h): index of an element in a TSet, INDEX_NONE if none. */
class FSetElementId_0097eb90
{
public:
    FSetElementId_0097eb90() : Index(INDEX_NONE) {}
    operator INT() const { return Index; }
private:
    INT Index;
};

/* TPairInitializer<const FName&, INT> (UnMap.h): the key by reference and the value, for TSet::Add */
struct FNameIndexPairInitializer
{
    const FName& Key;
    INT Value;

    FNameIndexPairInitializer(const FName& InKey, INT InValue) : Key(InKey), Value(InValue) {}
};

/* TMap<FName,INT> (UnMap.h) as this build has it; the kit only has the script mirror (FMap_Mirror).
 * Only the out-of-line members used here are declared. */
struct FNameIndexMap
{
    /* TSet::Add (0x005b6e00) and TSet::Empty (0x00617000) */
    FSetElementId_0097eb90 Add(const FNameIndexPairInitializer& InElement, UBOOL* bIsAlreadyInSetPtr = NULL);
    void Empty(INT ExpectedNumElements = 0);

    /* TMap::Set; the caller here ignores the stored value */
    void Set(const FName& InKey, INT InValue)
    {
        Add(FNameIndexPairInitializer(InKey, InValue));
    }
};

/* USkeletalMesh::InitNameIndexMap isn't declared in Classes.h */
struct USkeletalMesh__0097eb90 : public USkeletalMesh
{
    void InitNameIndexMap();
};

// @baa 0x0097eb90
/* rebuild the bone name to RefSkeleton index map */
void USkeletalMesh__0097eb90::InitNameIndexMap()
{
    FNameIndexMap& Map = (FNameIndexMap&)NameIndexMap;
    Map.Empty();
    for (INT i = 0; i < RefSkeleton.Num(); i++)
    {
        const FName BoneName = ((TArray<FMeshBone_>&)RefSkeleton)(i).Name;
        if (BoneName != NAME_None)
        {
            Map.Set(BoneName, i);
        }
    }
}
