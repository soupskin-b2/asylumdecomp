// Engine_0960000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

/* UE3's checkf (UnBuild.h): check with a formatted message */
#define checkf(expr, ...) { if (!(expr)) appFailAssert(#expr, __FILE__, __LINE__, __VA_ARGS__); }
/* the package versions this build writes (UnObjVer.h); the kit doesn't declare them */
extern INT GPackageFileVersion;
extern INT GPackageFileLicenseeVersion;
inline FArchive& operator<<(FArchive& Ar, INT& I) { Ar.ByteOrderSerialize(&I, sizeof(I)); return Ar; }

/* FArchive::LicenseeVer (UnArc.h); the kit's FArchive has the field but no accessor */
class FArchive_ : public FArchive
{
public:
    INT LicenseeVer() const { return ArLicenseeVer; }
};

/* FkDOPCollisionTriangle (UnkDOP.h): a triangle of a kDOP tree (8 bytes). Not in the kit. */
struct FkDOPCollisionTriangle
{
    WORD v1, v2, v3;
    WORD MaterialIndex;
};

FArchive& operator<<(FArchive& Ar, TArray<FkDOPCollisionTriangle>& A);
 /* 0x009599c0 */
/* TArray<FkDOPCollisionTriangle> with the out-of-line members BulkSerialize calls: Empty (0x00957d40) and Add (0x00948830) */
struct FkDOPTriangleArray : public TArray<FkDOPCollisionTriangle>
{
    typedef FkDOPCollisionTriangle ElementType;
    void Empty(INT Slack);
    INT Add(INT Count);
    void BulkSerialize(FArchive& Ar);
};

// @baa 0x00966070
/* TArray::BulkSerialize (Array.h): a raw memory read of the whole array when the package is current,
 * element by element otherwise (a skeletal mesh bone's kDOP triangles) */
void FkDOPTriangleArray::BulkSerialize(FArchive& Ar)
{
    INT SerializedElementSize = sizeof(ElementType);
    Ar << SerializedElementSize;
    if (Ar.IsSaving() || Ar.Ver() < GPackageFileVersion || ((FArchive_&)Ar).LicenseeVer() < GPackageFileLicenseeVersion)
    {
        Ar << *this;
    }
    else
    {
        Ar.CountBytes(ArrayNum * sizeof(ElementType), ArrayMax * sizeof(ElementType));
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

#line 66 "candidate.cpp"
