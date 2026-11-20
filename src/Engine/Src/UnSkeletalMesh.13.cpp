// UnSkeletalMesh.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/SkeletalMesh.h"

/* the package versions this build writes (UnObjVer.h); the kit doesn't declare them */
extern INT GPackageFileVersion;
extern INT GPackageFileLicenseeVersion;

FArchive& operator<<(FArchive& Ar, TArray<FSoftSkinVertex>& A);
 /* 0x00675ef0 */
/* TArray<FSoftSkinVertex> with the out-of-line members BulkSerialize calls: CountBytes (0x006521e0),
 * Empty (0x00668040) and Add (0x00655160). */
struct FSoftVertexArray : public TArray<FSoftSkinVertex>
{
    typedef FSoftSkinVertex ElementType;

    void CountBytes(FArchive& Ar);
    void Empty(INT Slack);
    INT Add(INT Count);
    void BulkSerialize(FArchive& Ar);
};

// @baa 0x00963b60
/* TArray::BulkSerialize (Array.h): a raw memory read of the whole array when the package is current,
 * element by element otherwise (FStaticLODModel's soft vertices) */
void FSoftVertexArray::BulkSerialize(FArchive& Ar)
{
    INT SerializedElementSize = sizeof(ElementType);
    Ar << SerializedElementSize;

    if (Ar.IsSaving() || Ar.Ver() < GPackageFileVersion || Ar.LicenseeVer() < GPackageFileLicenseeVersion)
    {
        Ar << *this;
    }
    else
    {
        CountBytes(Ar);
        if (Ar.IsLoading())
        {
#line 758 "e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\Array.h"
            checkf(SerializedElementSize==0 || SerializedElementSize==sizeof(ElementType), TEXT("Expected %i, Got: %i"), sizeof(ElementType), SerializedElementSize);
            INT NewArrayNum;
            Ar << NewArrayNum;
            Empty(NewArrayNum);
            Add(NewArrayNum);
            Ar.Serialize(GetData(), NewArrayNum * sizeof(ElementType));
        }
    }
}

#line 83 "candidate.cpp"
