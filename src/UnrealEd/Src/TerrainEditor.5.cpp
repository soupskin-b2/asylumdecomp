// TerrainEditor.cpp: 4 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"
#include "ue3/Script.h"

// The pure-virtual guard: report the error through the error device, which is
// passed as the first argument (the device itself, not `this` in ecx).
extern int __cdecl sub_00630f20(void* Device, const TCHAR* Fmt, const TCHAR* FuncName);
// @baa 0x012508a0
void UThumbnailRenderer::GetThumbnailSize(UObject* Object, EThumbnailPrimType PrimType, FLOAT Zoom, DWORD& OutWidth, DWORD& OutHeight)
{
    sub_00630f20(GError, TEXT("Pure virtual not implemented (%s)"), TEXT("UThumbnailRenderer::GetThumbnailSize"));
}

// @baa 0x012506c0
void UThumbnailLabelRenderer::BuildLabelList(INT Layer, INT X, INT Y)
PURE_VIRTUAL(UThumbnailLabelRenderer::BuildLabelList, return;);

#define INVALID_OBJECT ((UObject*)-1)
class FObjectInstancingGraph;
/* UStruct::IsChildOf isn't declared in Classes.h; this is UE3's inline body. */
struct UClass_ : public UClass
{
    UBOOL IsChildOf(const UField* SomeBase) const
    {
        for (const UField* Struct = this; Struct; Struct = Struct->SuperField)
            if (Struct == SomeBase)
                return 1;
        return 0;
    }
};

struct UObject_ : public UObject
{
    static UObject* GetTransientPackage();                                    // 005c1d70
    static UObject* StaticConstructObject(UClass* Class, UObject* InOuter, FName Name, QWORD SetFlags, UObject* Template, FOutputDevice* Error, UObject* SubobjectRoot, FObjectInstancingGraph* InstanceGraph); // 005e44e0
};

/* UnObjBas.h ConstructObject<T> */
template<class T>
T* ConstructObject(UClass_* Class, UObject* Outer, FName Name, QWORD SetFlags, UObject* Template, UObject* SubobjectRoot, FObjectInstancingGraph* InstanceGraph)
{
#line 1317 "e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\UnClass.h"
    check(Class->IsChildOf(T::StaticClass()));
    if (Outer == INVALID_OBJECT)
    {
        Outer = UObject_::GetTransientPackage();
    }
    return (T*)UObject_::StaticConstructObject(Class, Outer, Name, SetFlags, Template, GError, SubobjectRoot, InstanceGraph);
}

// @baa 0x01250b30
template USkeletalMeshComponent* ConstructObject<USkeletalMeshComponent>(UClass_*, UObject*, FName, QWORD, UObject*, UObject*, FObjectInstancingGraph*);

#line 57 "candidate.cpp"

// @baa 0x0125b3d0
template UTerrainEditOptions* ConstructObject<UTerrainEditOptions>(UClass_*, UObject*, FName, QWORD, UObject*, UObject*, FObjectInstancingGraph*);
