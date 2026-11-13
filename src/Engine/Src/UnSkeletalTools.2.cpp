// UnSkeletalTools.cpp (part 2 of 3): 7 functions
// Placed here by: neighbours 1.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

int sub_0053dfa0(...);
int sub_00581450(void);
// @baa 0x00943d20
undefined4 UTexture2D::sub_00943d20(byte param_2)
{
    undefined4 param_1 = (undefined4)this;

  sub_00581450();
  if ((param_2 & 1) != 0) {
    sub_0053dfa0(param_1);
  }
  return param_1;
}

/* vertex index plus its Z, sorted to find overlapping vertices quickly (UnSkeletalTools.cpp) */
struct FSkeletalMeshVertIndexAndZ
{
    INT Index;
    FLOAT Z;
};

/* IMPLEMENT_COMPARE_CONSTREF(FSkeletalMeshVertIndexAndZ, UnSkeletalTools, ...): ascending Z */
class CompareUnSkeletalToolsFSkeletalMeshVertIndexAndZConstRef
{
public:
    static inline INT Compare(const FSkeletalMeshVertIndexAndZ& A, const FSkeletalMeshVertIndexAndZ& B)
    {
        return (A.Z < B.Z) ? -1 : (A.Z > B.Z) ? 1 : 0;
    }
};

// @baa 0x00d4c850
template void Sort<FSkeletalMeshVertIndexAndZ, CompareUnSkeletalToolsFSkeletalMeshVertIndexAndZConstRef>(FSkeletalMeshVertIndexAndZ* First, INT Num);

/* UE3's FArchive operators for plain values (UnArc.h): byte-order serialization of the value. */
inline FArchive& operator<<(FArchive& Ar, FLOAT& F) { Ar.ByteOrderSerialize(&F, sizeof(F)); return Ar; }

inline FArchive& operator<<(FArchive& Ar, INT& I) { Ar.ByteOrderSerialize(&I, sizeof(I)); return Ar; }

inline FArchive& operator<<(FArchive& Ar, DWORD& D) { Ar.ByteOrderSerialize(&D, sizeof(D)); return Ar; }

inline FArchive& operator<<(FArchive& Ar, FVector& V) { return Ar << V.X << V.Y << V.Z; }

inline FArchive& operator<<(FArchive& Ar, FQuat& F) { return Ar << F.X << F.Y << F.Z << F.W; }

// @baa 0x00943a60
FArchive& operator<<(FArchive& Ar, VJointPos& V)
{
    return Ar << V.Orientation << V.Position;
}

inline UBOOL operator!=(const FName& A, EName B) { return A.Index != B || A.Number != 0; }

/* FSetElementId (UnSet.h): index of an element in a TSet, INDEX_NONE if none. */
class FSetElementId
{
public:
    FSetElementId() : Index(INDEX_NONE) {}
    UBOOL IsValidId() const { return Index != INDEX_NONE; }
    operator INT() const { return Index; }
private:
    INT Index;
};

/* TMap<FName,INT> as this build lays it out (UnMap.h/UnSet.h): a TSet of key/value pairs whose
 * elements live in a sparse array (0x14 bytes each: the pair, then the hash chain link and bucket).
 * The kit only has the script mirror (FMap_Mirror), so this stand-in declares what Find needs;
 * TSet::FindId is out of line (0x005a9820). */
struct FNameIndexMap
{
    struct FPair
    {
        FName Key;
        INT Value;
    };
    struct FElement
    {
        FPair Value;
        FSetElementId HashNextId;
        INT HashIndex;
    };

    FElement* Elements; /* the sparse array's data; the rest of the set follows */

    FSetElementId FindId(const FName& Key) const;

    /* TSet::Find */
    const FPair* FindPair(const FName& Key) const
    {
        FSetElementId Id = FindId(Key);
        if (Id.IsValidId())
        {
            return &Elements[Id].Value;
        }
        return NULL;
    }

    /* TMap::Find */
    const INT* Find(const FName& Key) const
    {
        const FPair* Pair = FindPair(Key);
        return Pair ? &Pair->Value : NULL;
    }
};

// @baa 0x00976be0
/* index of the named bone in RefSkeleton, or INDEX_NONE */
INT USkeletalMesh::MatchRefBone(FName StartBoneName) const
{
    INT BoneIndex = INDEX_NONE;
    if (StartBoneName != NAME_None)
    {
        const INT* IndexPtr = ((const FNameIndexMap&)NameIndexMap).Find(StartBoneName);
        if (IndexPtr)
        {
            BoneIndex = *IndexPtr;
        }
    }
    return BoneIndex;
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

/* FSetElementId_00d4c2d0 (UnSet.h): index of an element in a TSet, INDEX_NONE if none. */
class FSetElementId_00d4c2d0
{
public:
    FSetElementId_00d4c2d0() : Index(INDEX_NONE) {}
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
        mutable FSetElementId_00d4c2d0 HashNextId;
        mutable INT HashIndex;
    };

    /* TInlineAllocator<1>::ForElementType<FSetElementId_00d4c2d0> (ContainerAllocationPolicies.h) */
    struct FHashAllocation
    {
        FSetElementId_00d4c2d0 InlineData[1];
        FSetElementId_00d4c2d0* SecondaryData; /* FHeapAllocator's Data, NULL while the inline element is used */

        FSetElementId_00d4c2d0* GetInlineElements() const { return (FSetElementId_00d4c2d0*)InlineData; }
        FSetElementId_00d4c2d0* GetAllocation() const { return IfAThenAElseB<FSetElementId_00d4c2d0>(SecondaryData, GetInlineElements()); }
    };

    BYTE Elements[0x30];   /* TSparseArray<FElement>: not used here */
    FHashAllocation Hash;
    INT HashSize;

    FSetElementId_00d4c2d0& GetTypedHash(INT HashIndex) const
    {
        return ((FSetElementId_00d4c2d0*)Hash.GetAllocation())[HashIndex & (HashSize - 1)];
    }

    void HashElement(FSetElementId_00d4c2d0 ElementId, const FElement& Element) const;
};

// @baa 0x00d4c2d0
/* link an element into its hash bucket */
void FNameIntPairSet::HashElement(FSetElementId_00d4c2d0 ElementId, const FElement& Element) const
{
    Element.HashIndex = GetTypeHash(Element.Value.Key) & (HashSize - 1);
    Element.HashNextId = GetTypedHash(Element.HashIndex);
    GetTypedHash(Element.HashIndex) = ElementId;
}

/* FSetElementId_00d587c0 (UnSet.h): index of an element in a TSet, INDEX_NONE if none. */
class FSetElementId_00d587c0
{
public:
    FSetElementId_00d587c0() : Index(INDEX_NONE) {}
    explicit FSetElementId_00d587c0(INT InIndex) : Index(InIndex) {}
    operator INT() const { return Index; }
private:
    INT Index;
};

/* TSet<TMap<FName,INT>::FPair> (UnSet.h) as this build lays it out; no TSet/TMap in the kit. Elements is a
 * TSparseArray (data, then its allocation bit array and free list); Hash is a TInlineAllocator<1> of
 * FSetElementIds, HashSize a power of two. The value type is assumed to be INT (the caller copies a
 * 12-byte pair). */
struct FNameIntPairSet_00d587c0
{
    struct FPair
    {
        FName Key;
        INT Value;
    };
    struct FElement
    {
        FPair Value;
        mutable FSetElementId_00d587c0 HashNextId;
        mutable INT HashIndex;

        FElement(const FPair& InValue) : Value(InValue) {}
    };

    /* TInlineAllocator<1>::ForElementType<FSetElementId_00d587c0> (ContainerAllocationPolicies.h) */
    struct FHashAllocation
    {
        FSetElementId_00d587c0 InlineData[1];
        FSetElementId_00d587c0* SecondaryData; /* FHeapAllocator's Data, NULL while the inline element is used */

        FSetElementId_00d587c0* GetInlineElements() const { return (FSetElementId_00d587c0*)InlineData; }
        FSetElementId_00d587c0* GetAllocation() const { return IfAThenAElseB<FSetElementId_00d587c0>(SecondaryData, GetInlineElements()); }
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

    FSetElementId_00d587c0& GetTypedHash(INT HashIndex) const
    {
        return ((FSetElementId_00d587c0*)Hash.GetAllocation())[HashIndex & (HashSize - 1)];
    }

    /* TSparseArray::Add's result (UnSparseArray.h) */
    struct FSparseArrayAllocationInfo
    {
        INT Index;
        void* Pointer;
    };

    void HashElement(FSetElementId_00d587c0 ElementId, const FElement& Element) const; /* 0x00d4c2d0 */
    FSetElementId_00d587c0 FindId(const FName Key) const;                              /* 0x009591d0 */
    FSparseArrayAllocationInfo AddElement();                                  /* TSparseArray::Add, 0x00d53c30 */
    UBOOL ConditionalRehash(INT NumHashedElements, UBOOL bAllowShrinking = FALSE); /* 0x00d56870 */
    FSetElementId_00d587c0 Add(const FPair& InElement, UBOOL* bIsAlreadyInSetPtr = NULL); /* 0x00d580c0 */
};

inline void* operator new(size_t Size, const FNameIntPairSet_00d587c0::FSparseArrayAllocationInfo& Allocation) { return Allocation.Pointer; }

/* TMap<FName,INT> (UnMap.h): the pair set plus the map interface */
struct FNameIntMap : public FNameIntPairSet_00d587c0
{
    INT& Set(FName InKey, INT InValue);
};

// @baa 0x00d587c0
/* set the value for a key, adding the pair if it's new; returns the stored value */
INT& FNameIntMap::Set(FName InKey, INT InValue)
{
    FPair Pair;
    Pair.Key = InKey;
    Pair.Value = InValue;
    const FSetElementId_00d587c0 PairId = Add(Pair);
    return ElementData[PairId].Value.Value;
}

/* FString::Printf, as the linker specialised it for these argument types (0x00723a70);
 * the kit declares no FString::Printf. */
struct FString_ : public FString
{
    static FString Printf(const TCHAR* Fmt, INT A, INT B);
};

/* FStaticLODModel (UnSkeletalMesh.h): only GetTotalFaces (0x00951780) is used here. */
struct FStaticLODModel
{
    INT GetTotalFaces();
};

/* slot 0x0b8 (vf_0b8) is UObject::GetDesc */

// @baa 0x00d4ff50
/* the mesh's line in the generic browser */
FString USkeletalMesh::GetDesc()
{
    // the kit mirrors LODModels as FIndirectArray_Mirror; the native type is TIndirectArray<FStaticLODModel>
    TIndirectArray<FStaticLODModel>& LODModels = (TIndirectArray<FStaticLODModel>&)this->LODModels;
#line 1689 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnSkeletalTools.cpp"
    check(LODModels.Num() > 0);
    return FString_::Printf(TEXT("%d Triangles, %d Bones"), LODModels(0).GetTotalFaces(), RefSkeleton.Num());
}

#line 438 "candidate.cpp"
