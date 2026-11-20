/* Opt-in helpers recovered from this executable. Include after, or instead of, Classes.h.
 * Names sub_XXXXXXXX bind directly to their verified addresses. Keep FName itself an aggregate
 * (sources initialize it as {Index, Number}); use FNameText for its out-of-line string constructor.
 */
#pragma once
#include "Classes.h"

struct FNameText : public FName {
    FNameText(const TCHAR* Name, INT FindType = 1, UBOOL bSplitName = TRUE) {
        sub_005d5620(Name, FindType, bSplitName);
    }
};

/* FName array specializations: the exe calls these out of line. 00547260 appends a name; it
 * does NOT test for duplicates (it is AddItem, not AddUniqueItem). */
struct FNameArray : public TArray<FName> {
    INT sub_00547260(const FName& Item);
    INT AddItem(const FName& Item) { return sub_00547260(Item); }
};
void* sub_0056fa40(size_t Size, FNameArray& Array);
inline void* operator new(size_t Size, FNameArray& Array) { return sub_0056fa40(Size, Array); }

extern UWorld* g_026b62b8;
#define GWorld g_026b62b8
extern UEngine* g_026c3cdc;
#define GEngine g_026c3cdc

/* UUIRoot's inline accessors (UnUIObjects.cpp; declared in Classes.h). */
FORCEINLINE UUIInteraction* UUIRoot::GetCurrentUIController()
{
    UUIInteraction* Result = NULL;
    if (GEngine != NULL && GEngine->GameViewport != NULL)
    {
        Result = GEngine->GameViewport->UIController;
    }
    return Result;
}
FORCEINLINE UGameUISceneClient* UUIRoot::GetSceneClient()
{
    UGameUISceneClient* Result = NULL;
    UUIInteraction* UIController = GetCurrentUIController();
    if (UIController != NULL)
    {
        Result = UIController->SceneClient;
    }
    return Result;
}

extern TArray<UObject*> g_026a1ca4;
#define GObjObjects g_026a1ca4
extern INT g_026a1c50;
#define GObjFirstGCIndex g_026a1c50 /* where FObjectIterator(Class, bOnlyGCedObjects=TRUE) starts */
#define BAA_UNOBJBAS_FILE "e:\\projects\\amadeus\\aa\\game\\unrealengine3\\development\\src\\core\\inc\\UnObjBas.h"

/* UnRHI's pixel format table (0x24 bytes an entry, indexed by EPixelFormat); matched in
 * TextureRenderTarget2D.3.cpp */
struct FPixelFormatInfo {
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
/* UnTex.h: the RHI's mip count limit */
extern INT g_025d7e34;
#define GMaxTextureMipCount g_025d7e34

/* Recovered from 01189a90 and the iterator constructor/increment functions. */
class FObjectIterator {
public:
    UClass* Class;
    INT Index;
    QWORD ExclusionFlags;
    void sub_004153a0(UClass* InClass, UBOOL bOnlyGCedObjects);
    void sub_00410de0();
#ifdef BAA_INLINE_OBJECT_ITERATOR
    /* UnObjBas.h's inline constructor, which some functions inline (00d19950) instead of calling 004153a0 */
    FObjectIterator(UClass* InClass, UBOOL bOnlyGCedObjects = FALSE)
        : Class(InClass), Index(bOnlyGCedObjects ? GObjFirstGCIndex : -1)
    {
        ExclusionFlags = RF_Unreachable;
        if (!GIsAsyncLoading)
        {
            ExclusionFlags |= RF_AsyncLoading;
        }
        checkAt(Class, BAA_UNOBJBAS_FILE, 3998);
        ++*this;
    }
#else
    /* out of line (004153a0), as most callers have it; #define BAA_INLINE_OBJECT_ITERATOR for the inline body */
    FObjectIterator(UClass* InClass, UBOOL bOnlyGCedObjects = FALSE) {
        sub_004153a0(InClass, bOnlyGCedObjects);
    }
#endif
    void operator++() { sub_00410de0(); }
    UObject* operator*() const { return GObjObjects.GetTypedData()[Index]; }
    operator UBOOL() const { return GObjObjects.IsValidIndex(Index); }
};

template<class T>
class TObjectIterator : public FObjectIterator {
public:
    TObjectIterator(UBOOL bOnlyGCedObjects = FALSE) : FObjectIterator(T::StaticClass(), bOnlyGCedObjects) {
        ExclusionFlags |= 0x200;
        if (GObjObjects.IsValidIndex(Index) && (*(QWORD*)&GObjObjects(Index)->ObjectFlags & 0x200)) {
            sub_00410de0();
        }
    }
    T* operator*() const { return (T*)FObjectIterator::operator*(); }
    T* operator->() const { return (T*)FObjectIterator::operator*(); }
};
