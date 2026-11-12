// Engine_0950000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#define BAA_OUTLINE_ALLOC
#include "ue3/Classes.h"
#include "ue3/Array.h"

/* the placement forms of new and delete (<new>) */
inline void* operator new(size_t Size, void* Mem) { return Mem; }

inline void operator delete(void* Ptr, void* Mem) {}

class UMaterialInterface;
/* FSkeletalMeshSceneProxy::FSectionElementInfo (UnSkeletalRender.h): the material a section is drawn
 * with. Not in the kit. */
struct FSectionElementInfo
{
    FSectionElementInfo(UMaterialInterface* InMaterial, UBOOL bInEnableShadowCasting)
        : Material(InMaterial)
        , bEnableShadowCasting(bInEnableShadowCasting)
    {}

    UMaterialInterface* Material;
    UBOOL bEnableShadowCasting;
};

/* TArray<FSectionElementInfo> with its copy constructor and Copy */
struct FSectionElementInfoArray : public TArray<FSectionElementInfo>
{
    FSectionElementInfoArray(const FSectionElementInfoArray& Other)
    {
        Copy(Other);
    }
    void Copy(const TArray<FSectionElementInfo>& Source);
};

/* FSkeletalMeshSceneProxy::FLODSectionElements (UnSkeletalRender.h): the section materials of one LOD */
struct FLODSectionElements
{
    FSectionElementInfoArray SectionElements;
};

// @baa 0x0095b120
/* TArray::Copy (Array.h): copy-construct each element */
void FSectionElementInfoArray::Copy(const TArray<FSectionElementInfo>& Source)
{
    if (this != &Source)
    {
        if (Source.Num() > 0)
        {
            Empty(Source.Num());
            for (INT Index = 0; Index < Source.Num(); Index++)
            {
                ::new(GetTypedData() + Index) FSectionElementInfo(Source(Index));
            }
            ArrayNum = Source.Num();
        }
        else
        {
            Empty();
        }
    }
}
