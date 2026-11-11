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
void* sub_0056fa40(SIZE_T Size, FNameArray& Array);
inline void* operator new(SIZE_T Size, FNameArray& Array) { return sub_0056fa40(Size, Array); }

extern UWorld* g_026b62b8;
#define GWorld g_026b62b8
extern TArray<UObject*> g_026a1ca4;
#define GObjObjects g_026a1ca4

/* Recovered from 01189a90 and the iterator constructor/increment functions. */
class FObjectIterator {
public:
    UClass* Class;
    INT Index;
    QWORD ExclusionFlags;
    void sub_004153a0(UClass* InClass, UBOOL bOnlyGCedObjects);
    void sub_00410de0();
    FObjectIterator(UClass* InClass, UBOOL bOnlyGCedObjects = FALSE) {
        sub_004153a0(InClass, bOnlyGCedObjects);
    }
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
